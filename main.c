#include <stdio.h>

int main()
{
    int qian = 0;
    printf("jinrucunqianquqianxitong");
    while (1)
    {
        int code = 0;
        printf("1---cunqian\n");
        printf("2---quqian\n");
        printf("3---xianshijine\n");
        printf("4---tuichuchengxu\n");

        printf("qingshurugongnengbainhao\n");
        scanf("%d", &code);

        if (code == 1)
        {
            printf("jinrucunqianxitong\n");
            int cun;
            scanf("%d", &cun);
            qian += cun;
            printf("cunqianchenggong,dianjihuichejixu:\n");
            char x;
            scanf("%c", &x);
            scanf("%c", &x);
        }
        if (code == 2)
        {
            printf("jinruquqianxiguanlixitong:\n");
            int qu;
            scanf("%d", &qu);
            if (qian < qu)
            {
                printf("yuebuzu,quqianshibai,dianjihuichejixu:\n");
                char x;
                scanf("%c", &x);
                scanf("%c", &x);
            }
            else
            {
                qian -= qu;
                printf("quqianchenggong,dianjihuichejixu:\n");
                char x;
                scanf("%c", &x);
                scanf("%c", &x);
            }
        }
        if (code == 3)
        {
            printf("jinruxianshijine xitong:\n");
            printf("nindejinewei%d，dainjihuichejixu\n", qian);
            char x;
            scanf("%c", &x);
            scanf("%c", &x);
        }
        if (code == 4)
        {
            printf("dainjihuichetuchuchengxu:\n");
            break;
        }
    }

    return 0;
}