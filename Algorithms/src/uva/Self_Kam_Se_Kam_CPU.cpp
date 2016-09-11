#include "CommonHeader.h"

#ifdef SELF_KAM_SE_KAM_CPU
READ_INPUT(SELF_KAM_SE_KAM_CPU)

#include <iostream>
#include <algorithm>
#include <string>
#include <string.h>
#include <math.h>
#include <float.h>
#include <queue>
#include <map>
#include <stdio.h>

	using namespace std;

#define FOR(i, init, cnt) for(int i = init; i < cnt; i++)
#define MAXN 1003
#define MAXT 5010
#define MAXDP 0xFFFFF
#define MAXC 5
#define INF 0x3f3f3f3fL
typedef long long ll;

char dp[MAXN][MAXT];
int N, T;
int tm[MAXN], len[MAXN]; 
int busyTime[MAXC];
int maxCPU = 5;

void reset()
{
	FOR(i, 0, MAXC)
		busyTime[i] = 0;

	FOR(j, 0, N)
		FOR(k, 0, MAXDP)
		dp[j][k] = -1;
	maxCPU = 5;
}

static int cnt = 0;
static int dpcnt = 0;

int MakeDPVal(int pktID)
{
	int tmp = 0;
	FOR(i, 0, MAXC)
		if(busyTime[i] - tm[pktID] < 0)
			continue;
		else
		{
			int busy = busyTime[i] - tm[pktID];
			tmp |= (busy << (4*i));
		}

		return tmp;
}

char solve(int aBusyTimes, int pktID, char cpuNum)
{
	cnt++;

	if(pktID >= N)
	{
		maxCPU = min(maxCPU, cpuNum);
		return cpuNum;
	}

	/*if(dp[pktID][aBusyTimes] != -1)
	{
		dpcnt++;
		return dp[pktID][aBusyTimes];
	}*/

	char ans = 125;

	FOR(i, 0, maxCPU)
	{
		//Check Waiting + Processing time  <= 10. 
		if((busyTime[i] - tm[pktID] + len[pktID]) <= 10)
		{
			int prev = busyTime[i];

			if(busyTime[i] <= tm[pktID] )
				busyTime[i] = tm[pktID] + len[pktID];
			else
				busyTime[i] += len[pktID];

			cpuNum = max(cpuNum, i+1);

			int dpval = MakeDPVal(pktID);

			ans = min(ans, solve(dpval, pktID+1, cpuNum));

			busyTime[i] = prev;
		}
	}

	return dp[pktID][aBusyTimes] = ans;
}

int main()
{
	int T;
	scanf("%d ", &T);
	FOR(t, 0, T)
	{
		scanf("%d", &N);

		reset();

		FOR(i, 0, N)
			scanf("%d %d ", &tm[i], &len[i]);

		busyTime[0] = tm[0] + len[0];

		if(N <= 1)
			printf("%d\n", 1);
		else
		{
			int ans = solve(MakeDPVal(0), 1, 1);
			if(ans <= MAXC)
				printf("%d\n", ans);
			else
				printf("-1\n");
		}
	}
	return 0;
}

#endif
