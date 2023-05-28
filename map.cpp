#include<iostream>
#include<stdio.h>
#include<map>
#include<utility>
using namespace std;
int main()
{
    int t=0;
    while (t<3)
    {
        int n, i;
        map<char*, int> vote;
        char name[20], v;
        n =5;
        for (i = 0; i<n; ++i)
        {
            scanf("%s %c", name, &v);
            vote.insert(make_pair(name, 0));

            vote[name] = 0;
            if (v == '+')
                vote[name]++;
            else
                vote[name]--;
            printf("%d\n", vote[name]);
            printf("Size=%lu\n", vote.size());
        }
        int score = 0;
        for (map<char*, int>::iterator it = vote.begin(); it != vote.end(); ++it)
        {
            printf("%s%d\n", it->first, it->second);
            score += it->second;
        }
        printf("%d\n", score);
        t++;

    }
}