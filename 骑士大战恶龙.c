# include <stdio.h>
# include <stdlib.h>
    int buy=0,money=90;
    int hp=100;                                   //初始化玩家生命值
    int atk=10;                                   //初始化玩家攻击力
    int def=20;                                   //初始化玩家防御力
    int hp_1=250,atk_1=500;                       //初始化恶龙小将生命值，攻击力
    int hp_2=500,atk_2=510,def_2=5;               //初始化恶龙大将的生命值，攻击力，防御力
    int hp_3=700,atk_3=1000,def_3=10;              //初始化恶龙的生命值，攻击力，防御力
    int choose=0;                                 //选择购买选项
    int hp_full=100;                              //初始化玩家满血状态
    int hp_full_1=300;                            //初始化玩家吃了还魂丹的状态
    int hp1_zero=0;                               //初始化恶龙小将打败血量
    int hp1_leave=0;                              //初始化恶龙小将被玩家攻击后的血量
    int atk_temp;                                 //存储玩家攻击力   
    int atk_temp_1=0,hp1_temp_1=0;                //定义玩家攻击力为0 恶龙小将血量为0
    void juqing_1();    //剧情1
    void juqing_2();    //剧情2
    void juqing_3();    //剧情3
    void juqing_4();    //剧情4
    void juqing_zuobi();//剧情2作弊章节
    void zuobi();       //作弊模式
//    void save();        //存档
int main(){
    int change; //开始界面选择开始游戏还是作弊或者读取存档
    printf("                  ---------------------------欢迎来到我的小游戏：-------------------------------\n");
    printf("                  |                              1.开始游戏                                    |\n");
    printf("                  |                              2.作弊模式                                    |\n");
    printf("                  |                              3.读取存档                                    |\n");
    printf("                  ------------------------------------------------------------------------------\n");
    printf("                                                                                   版本 v1.2\n");
    printf("\n\n请选择进入：");
    scanf("%d",&change);
    switch (change)     //开始检测选择选项
    {
    case 1:
        system("cls");
        system("color b");
        juqing_1();     //进入剧情1
        juqing_2();     //剧情1结束进入剧情2
        juqing_3();     //剧情2结束进入剧情3
        juqing_4();     //剧情4
        break;
    case 2:
        zuobi();      //作弊模式，修改血量攻击力
        juqing_1();
        juqing_zuobi(); //作弊章节
        juqing_3();
        juqing_4();
        break;
    case 3:             //存档我不会啊，得百度搜搜
        printf("暂时未开放,请重新开始\n");
        system("pause");
        system("cls");
        main();
        break;
    default:
        printf("输入有误请重新输入...\n");
        system("pause");
        system("cls");
        main();
        break;
    } 


return 0;

}


void juqing_1()     //剧情1
{
    printf("一天公主在和王子过上了幸福的生活...\n\n没想到恶龙把公主带走了,现在国王正在招揽骑士进入恶龙神殿打败恶龙,你就是其中的一员,快戴上盔甲去营救公主吧！\n\n");
    printf("但是要想进入恶龙神殿打败恶龙，首先需要打败恶龙小将，恶龙大将两个难关，事不宜迟我们出发吧！\n\n");
    system("pause");
    system("cls");
    printf("\n此时你经过了一家铁匠铺,你想让铁匠给你打造一部分武器，但是你所带的钱并不多，所以只能自行斟酌，请选择您想购买的武器装备...\n\n\n");
    system("pause");
    system("cls");      //清理屏幕
}


void juqing_2()     //剧情2，购买物品
{   
    void end();         //游戏结束
do{
    system("pause");
    system("cls");
    printf("\n\n\n----------------------------------------------------狗蛋儿的铁匠铺-------------------------------------------------------\n");
    printf("                                                                                    您现在剩余：%d元\n",money);
    printf("\n\n\n");
    printf("                                              1.    铁剑 攻击力+10    10$\n");
    printf("                                              2.    金剑 攻击力+20    20$\n");
    printf("                                              3.  钻石剑 攻击力+30    50$\n");
    printf("                                              4.    铁甲 防御力+10    10$\n");
    printf("                                              5.    金甲 防御力+20    20$\n");
    printf("                                              6.  钻石甲 攻击力+30    50$\n");
    printf("\n\n");
    printf("\n你目前的状态为：血量=%d,攻击力=%d,防御力=%d\n",hp,atk,def);
    printf("请选择您要购买的(输入666结束购买):");
    scanf("%d",&buy);       //检查选项
    switch (buy)        //选择选项
    {
    case 1:
        if (money>=10)      //判断钱够不够，以下同理
        {
            money-=10;
            atk+=10;
             printf("购买成功\n");
             printf("\n你目前的状态为：血量=%d,攻击力=%d,防御力=%d\n",hp,atk,def);
        }
        else        //钱不够，以下同理
       {
        printf("\n购买失败，你这个蠢货，账都不会算=_=\n");
       }
       break;
    case 2:
        if (money>=20)
        {
            money-=20;
            atk+=20;
             printf("购买成功\n");
             printf("\n你目前的状态为：血量=%d,攻击力=%d,防御力=%d\n",hp,atk,def);
        }
        else
       {
        printf("\n购买失败，你这个蠢货，账都不会算=_=\n");
       }
       break;
    case 3:
    if (money>=50)
        {
            money-=50;
            atk+=30;
             printf("购买成功\n");
             printf("\n你目前的状态为：血量=%d,攻击力=%d,防御力=%d\n",hp,atk,def);
        }
        else
       {
        printf("\n购买失败，你这个蠢货，账都不会算=_=\n");
       }
       break;
    case 4:
    if (money>=10)
        {
            money-=10;
            def+=10;
             printf("购买成功\n");
             printf("\n你目前的状态为：血量=%d,攻击力=%d,防御力=%d\n",hp,atk,def);
        }
        else
       {
        printf("\n购买失败，你这个蠢货，账都不会算=_=\n");
       }
       break;
    case 5:
       if (money>=20)
        {
            money-=20;
            def+=20;
             printf("购买成功\n");
             printf("\n你目前的状态为：血量=%d,攻击力=%d,防御力=%d\n",hp,atk,def);
        }
        else
       {
        printf("\n购买失败，你这个蠢货，账都不会算=_=\n");
       }
       break;
    case 6:
       if (money>=50)
        {
            money-=50;
            def+=30;
             printf("购买成功\n");
             printf("\n你目前的状态为：血量=%d,攻击力=%d,防御力=%d\n",hp,atk,def);
        }
        else
       {
        printf("\n购买失败，你这个蠢货，账都不会算=_=\n");
       }
       break;
    default :
    {
    printf("\n购买结束\n");
    printf("\n你目前的状态为：血量=%d,攻击力=%d,防御力=%d\n",hp,atk,def);
    }
    break;
    }
}
    while(buy<=6);      //当输入666时跳出循环来到恶龙神殿门口 

    printf("========================================================恶龙神殿门口=====================================================\n\n");
    printf("\n");
    printf("现在，你已经走到了恶龙神殿门口，见到了恶龙小将\n");
    printf("恶龙小将说:既然你看到我了，那就开战吧！\n");
    system("pause");
    system("cls");
    printf("\n---------------------------------------------------------决斗------------------------------------------------------------\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf("恶龙小将的血量为：250\n");
    while(hp_1>0 && hp>0)
    {
        printf("1.攻击\n2.防守\n");
        printf("请选择攻击还是防守：");
        scanf("%d",&choose);        //检查选项
        switch (choose)
        {
        case 1:
        {
            printf("\n您像饿狼般攻击恶龙小将，造成%d的伤害",atk);    
            printf("\n---------------------------------------------恶龙小将剩余%d的生命值-----------------------------------------------------\n",hp_1-atk);
            if(hp>0)            //大前提，如果玩家活着
            {
                if(hp_1-atk>0)      //大前提，如果恶龙小将还活着
                {   
                    hp-=atk_1/def;  //玩家受到恶龙小将伤害扣除的生命值
                    printf("现在轮到恶龙小将攻击，对您造成%d的伤害，您的血量为%d\n",atk_1/def,hp);  //实际扣血值=恶龙小将攻击力/防御力
                    hp_1-=atk;      //恶龙小将收到伤害
                }
                else                //如果恶龙小将被打败了，那么血量不是负数    跳出循环
                {
                    atk_temp=atk;       //将玩家攻击力存储到atk_temp中
                    hp_1=hp1_temp_1;    //将恶龙小将生命值为1
                    atk=atk_temp_1;     //将玩家攻击力设定为1
                }
            }
            else                //如果玩家死去
            {
                hp=0;           //防止血量为负数
            }
        }
        break;          //结束攻击，开始新一轮战斗
        case 2:
            printf("您提升了自己的血量！\n");
               if(hp<80)
            {
                hp+=20;                     //如果血量低于80那么+20
            }
            else
            {
                hp=hp_full;                 //血量大于80时防止爆满，上限为100
            }
        break;
        default:
            {
                printf("您输入错误，请重新输入\n");
            }
        break;
        }
    }
if(hp>0)
    {
        {     
            printf("\n\n恭喜您击败恶龙小将！正在修整恢复少量生命值\n\n\n");
            if(hp<=70)      //如果血量小于70，那么就加30血量
                {
                    hp+=30;
                    printf("当前生命值：%d\n",hp);
                }
                else            //如果血量大于70，防止溢出
                {
                    hp=hp_full;
                    printf("当前生命值：%d\n",hp);
                }
        }
    }
    else
    {
        printf("\n\n您真是菜鸡，我设计的这么简单都打不过去。别上学了，重开吧！=_=\n");
        end();
    }
}




void juqing_3()     //剧情3
{
    void end();
    atk=atk_temp;       //将玩家的攻击力还原
    printf("\n\n击杀了恶龙小将之后，您的声望变得很高，于是各地的人们纷纷对您十分向往，大家纷纷捐钱，您增加了一部分经费，狗蛋儿的铁匠铺愿意为您打折出售武器!!!\n");
    printf("\n\n\n武器的质量变得更好了！！！\n\n\n");
    printf("您稍微修整，并提高了生命值！\n");
    printf("此时，国王听说你的英勇事迹给了您珍藏的还魂丹！！！\n");
    system("pause");
    system("cls");
    printf("-------------------------------------------------------还魂丹-------------------------------------------------------\n");
    printf("介绍：不知道有什么用，可能是上天给的眷赠吧\n");
    system("pause");
    system("cls");
    if(hp<50)
{
    hp+=250;
}
    else
{
    hp=300;
}
    money+=100;       //民众给了100元
    buy=0;            //初始化buy
do{
    printf("\n\n\n----------------------------------------------------狗蛋儿的铁匠铺-------------------------------------------------------\n");
    printf("                                                                                    您现在剩余：%d元\n",money);
    printf("\n\n\n");
    printf("                                              1.    铁剑 攻击力+10     5$\n");
    printf("                                              2.    金剑 攻击力+20    10$\n");
    printf("                                              3.  钻石剑 攻击力+30    25$\n");
    printf("                                              4.    铁甲 防御力+10     5$\n");
    printf("                                              5.    金甲 防御力+20    10$\n");
    printf("                                              6.  钻石甲 攻击力+30    25$\n");
    printf("\n\n");
    printf("\n你目前的状态为：血量=%d,攻击力=%d,防御力=%d\n",hp,atk,def);
    printf("请选择您要购买的(输入666结束购买):");
    scanf("%d",&buy);       //检查选项
    switch (buy)        //选择选项
    {
    case 1:
        if (money>=5)      //判断钱够不够，以下同理
        {
            money-=5;
            atk+=10;
             printf("购买成功\n");
             printf("\n你目前的状态为：血量=%d,攻击力=%d,防御力=%d\n",hp,atk,def);
        }
        else        //钱不够，以下同理
       {
        printf("\n购买失败，你这个蠢货，账都不会算=_=\n");
       }
       break;
    case 2:
        if (money>=10)
        {
            money-=10;
            atk+=20;
             printf("购买成功\n");
             printf("\n你目前的状态为：血量=%d,攻击力=%d,防御力=%d\n",hp,atk,def);
        }
        else
       {
        printf("\n购买失败，你这个蠢货，账都不会算=_=\n");
       }
       break;
    case 3:
    if (money>=25)
        {
            money-=25;
            atk+=30;
             printf("购买成功\n");
             printf("\n你目前的状态为：血量=%d,攻击力=%d,防御力=%d\n",hp,atk,def);
        }
        else
       {
        printf("\n购买失败，你这个蠢货，账都不会算=_=\n");
       }
       break;
    case 4:
    if (money>=5)
        {
            money-=5;
            def+=10;
             printf("购买成功\n");
             printf("\n你目前的状态为：血量=%d,攻击力=%d,防御力=%d\n",hp,atk,def);
        }
        else
       {
        printf("\n购买失败，你这个蠢货，账都不会算=_=\n");
       }
       break;
    case 5:
       if (money>=10)
        {
            money-=10;
            def+=20;
             printf("购买成功\n");
             printf("\n你目前的状态为：血量=%d,攻击力=%d,防御力=%d\n",hp,atk,def);
        }
        else
       {
        printf("\n购买失败，你这个蠢货，账都不会算=_=\n");
       }
       break;
    case 6:
       if (money>=25)
        {
            money-=25;
            def+=30;
             printf("购买成功\n");
             printf("\n你目前的状态为：血量=%d,攻击力=%d,防御力=%d\n",hp,atk,def);
        }
        else
       {
        printf("\n购买失败，你这个蠢货，账都不会算=_=\n");
       }
       break;
    default :
    {
    printf("\n购买结束\n");
    }
    break;
    }
}while(buy<=6);
printf("\n\n\n");
system("cls");
printf("\n你目前的状态为：血量=%d,攻击力=%d,防御力=%d\n",hp,atk,def);
    printf("========================================================恶龙神殿内1=====================================================\n\n");
    printf("\n");
    printf("现在，你已经走到了恶龙神殿内1号地区，见到了恶龙大将\n");
    printf("恶龙大将说:你杀了我的弟弟，我饶不了你，开战吧！\n");
    system("pause");
    system("cls");
    printf("\n---------------------------------------------------------决斗------------------------------------------------------------\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf("恶龙大将的血量为：600,防御力为10\n");
    while(hp_2>0 && hp>0)
    {
        printf("1.攻击\n2.防守\n");
        printf("请选择攻击还是防守：");
        scanf("%d",&choose);        //检查选项
        switch (choose)
        {
        case 1:
            printf("\n您像饿狼般攻击恶龙大将，造成%d的伤害",atk/def_2);    
            printf("\n---------------------------------------------恶龙大将剩余%d的生命值-----------------------------------------------------\n",hp_2-(atk/def_2));
            if(hp>0)            //大前提，如果玩家活着
            {
                if(hp_2>0)      //大前提，如果恶龙大将还活着
                {   
                    hp-=atk_2/def;  //玩家受到恶龙大将伤害扣除的生命值
                    printf("现在轮到恶龙大将攻击，对您造成%d的伤害，您的血量为%d\n",atk_2/def,hp);  //实际扣血值=恶龙大将攻击力/防御力
                    hp_2-=atk/def_2;      //恶龙大将收到伤害
                }
                else
                {
                    hp_2=0;     //如果恶龙大将被打败了，那么血量不是负数    跳出循环
                }
            }
            else                //如果玩家死去
            {
                hp=0;           //防止血量为负数
            }
        break;          //结束攻击，开始新一轮战斗
        case 2:
            printf("您提升了自己的血量！\n");
               if(hp<250)
            {
                hp+=50;                     //如果血量低于250那么+50
            }
            else
            {
                hp=hp_full_1;                 //血量大于250时防止爆满，上限为300
            }
        break;
        default:
            {
                printf("您输入错误，请重新输入\n");
            }
        break;
        }
    }
if(hp>0)
    {
        {     printf("\n\n恭喜您击败恶龙大将！正在修整恢复部分生命值\n\n\n");
            if(hp<=50)      //如果血量小于等于50，那么就加250血量
                {
                    hp+=250;
                    printf("当前生命值：%d\n",hp);
                }
                else            //如果血量大于50，防止溢出
                {
                    hp=hp_full_1;
                    printf("当前生命值：%d\n",hp);
                }
        }
    }
    else
    {
        printf("\n\n虽然但是，通关了一关第二关就没了？？？别上学了，重开吧！=_=\n");
        end();
    }
    juqing_4();
}

void juqing_4()
{
    printf("击杀了恶龙大小将后，国王对你的英勇大为欣赏，因此他又又又拿出了一个散发着金光的铠甲\n");
    printf("国王说：曾经我也是一名久经沙场的将军，建过的功不计其数，如今年迈已高，现在我把这个铠甲赠与你，希望你能救出我的女儿！！！\n");
    printf("您获得了物品：散发金黄的铠甲\n");
    system("pause");
    system("cls");
    printf("--------------------------------------------------散发金黄色的铠甲-------------------------------------------------------\n");
    printf("介绍：散发金黄色的铠甲，目前不知道有什么大用处\n");
    system("pause");
    system("cls");
    printf("(PS：本故事有三种结局，不同的主线进入不同的结局)\n");
    system("pause");
    system("cls");
    printf("\n\n\n\n\n\n\n\n经过你的不懈努力终于将恶龙大小将悉数干掉，但是恶龙哪会让你这么轻易打倒...\n");
    system("pause");
    system("cls"); 
    printf("\n\n\n\n\n\n\n恶龙已经在悄悄积攒实力，要和勇士真真正正的战斗一场...\n");
    system("pause");
    system("cls"); 
    printf("========================================================恶龙神殿内======================================================\n\n");
    printf("\n");
    printf("现在，你已经走到了恶龙神殿，见到了最终BOSS恶龙\n");
    printf("恶龙说:不错，竟然干掉了我的两个手下，有点能耐，既然如此，那我们就好好的战斗一场，开战吧！\n");
    system("pause");
    system("cls");
    printf("\n---------------------------------------------------------决斗------------------------------------------------------------\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf("恶龙的血量为：700,防御力为20\n");
    choose=0;
    while(hp_3>0 && hp>0)
    {
        printf("1.攻击\n2.防守\n3.和平相处\n");
        printf("请选择攻击还是防守：");
        scanf("%d",&choose);        //检查选项
        switch (choose)
        {
        case 1:
            printf("\n您像饿狼般攻击恶龙大将，造成%d的伤害",atk/def_3);    
            printf("\n---------------------------------------------恶龙剩余%d的生命值-----------------------------------------------------\n",hp_3-(atk/def_3));
            if(hp>0)            //大前提，如果玩家活着
            {
                if(hp_3>0)      //大前提，如果恶龙还活着
                {   
                    hp-=atk_3/def;  //玩家受到恶龙伤害扣除的生命值
                    printf("现在轮到恶龙攻击，对您造成%d的伤害，您的血量为%d\n",atk_3/def,hp);  //实际扣血值=恶龙攻击力/防御力
                    hp_3-=atk/def_3;      //恶龙大将收到伤害
                }
                else
                {
                    hp_3=0;     //如果恶龙大将被打败了，那么血量不是负数    跳出循环
                }
            }
            else                //如果玩家死去
            {
                hp=0;           //防止血量为负数
            }
        break;          //结束攻击，开始新一轮战斗
        case 2:
            printf("您提升了自己的血量！\n");
               if(hp<250)
            {
                hp+=50;                     //如果血量低于250那么+50
            }
            else
            {
                hp=hp_full_1;                 //血量大于250时防止爆满，上限为300
            }
        break;
        case 3:
        {
            printf("您选择了和平相处，从此，您和恶龙过上了幸...呸，您和公主过上了幸福的生活...\n");
            printf("故事结束，");
            system("pause");
            exit (1);
        }
        break;
        default:
            {
                printf("您输入错误，请重新输入\n");
            }
        break;
        }
    }
if(hp>0)
    {
       printf("\n\n恭喜你成功击杀恶龙!!!从此你和公主过上了幸福的生活.......\n");
       printf("本章剧情结束，自动退出...");
       system("pause");
       exit(1);
    }
    else
    {
        printf("饿啊------\n");
        printf("可恶，还差一点就杀掉了...\n");
        printf("此时，你缓缓闭上了眼，再也没有睁开，整个村庄活在恶龙的阴影当中...\n");
        system("pause");
        exit(1);
    }
}


void juqing_zuobi()
{
    void end();         //游戏结束
do{
    system("pause");
    system("cls");
    printf("\n\n\n----------------------------------------------------狗蛋儿的铁匠铺-------------------------------------------------------\n");
    printf("                                                                                    您现在剩余：%d元\n",money);
    printf("\n\n\n");
    printf("                                           1.   钻石剑 钻石甲 攻击力 防御力 +10000    1$\n");
    printf("\n\n");
    printf("\n你目前的状态为：血量=%d,攻击力=%d,防御力=%d\n",hp,atk,def);
    printf("请选择您要购买的(输入666结束购买):");
    scanf("%d",&buy);       //检查选项
    switch (buy)        //选择选项
    {
    case 1:
        if (money>=1)      //判断钱够不够，以下同理
        {
            money-=1;
            atk+=10000;
            def+=10000;
             printf("购买成功\n");
             printf("\n你目前的状态为：血量=%d,攻击力=%d,防御力=%d\n",hp,atk,def);
        }
        else        //钱不够，以下同理
       {
        printf("\n大哥你是按了多少下才按光的啊，牛=_=\n");
       }
       break;
    default :
    {
    printf("\n购买结束\n");
    printf("\n你目前的状态为：血量=%d,攻击力=%d,防御力=%d\n",hp,atk,def);
    }
    break;
    }
}
    while(buy<=1);      //当输入666时跳出循环来到恶龙神殿门口 

    printf("========================================================恶龙神殿门口=====================================================\n\n");
    printf("\n");
    printf("现在，你已经走到了恶龙神殿门口，见到了恶龙小将\n");
    printf("恶龙小将说:既然你看到我了，那就开战吧！\n");
    system("pause");
    system("cls");
    printf("\n---------------------------------------------------------决斗------------------------------------------------------------\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf("恶龙小将的血量为：250\n");
    while(hp_1>0 && hp>0)
    {
        printf("1.攻击\n2.防守\n");
        printf("请选择攻击还是防守：");
        scanf("%d",&choose);        //检查选项
        switch (choose)
        {
        case 1:
        {
            printf("\n您像饿狼般攻击恶龙小将，造成%d的伤害",atk);    
            printf("\n---------------------------------------------恶龙小将剩余%d的生命值-----------------------------------------------------\n",hp_1-atk);
            if(hp>0)            //大前提，如果玩家活着
            {
                if(hp_1-atk>0)      //大前提，如果恶龙小将还活着
                {   
                    hp-=atk_1/def;  //玩家受到恶龙小将伤害扣除的生命值
                    printf("现在轮到恶龙小将攻击，对您造成%d的伤害，您的血量为%d\n",atk_1/def,hp);  //实际扣血值=恶龙小将攻击力/防御力
                    hp_1-=atk;      //恶龙小将收到伤害
                }
                else                //如果恶龙小将被打败了，那么血量不是负数    跳出循环
                {
                    atk_temp=atk;       //将玩家攻击力存储到atk_temp中
                    hp_1=hp1_temp_1;    //将恶龙小将生命值为1
                    atk=atk_temp_1;     //将玩家攻击力设定为1
                }
            }
            else                //如果玩家死去
            {
                hp=0;           //防止血量为负数
            }
        }
        break;          //结束攻击，开始新一轮战斗
        case 2:
            printf("您提升了自己的血量！\n");
               if(hp<80)
            {
                hp+=20;                     //如果血量低于80那么+20
            }
            else
            {
                hp=hp_full;                 //血量大于80时防止爆满，上限为100
            }
        break;
        default:
            {
                printf("您输入错误，请重新输入\n");
            }
        break;
        }
    }
if(hp>0)
    {
        {     
            printf("\n\n恭喜您击败恶龙小将！正在修整恢复少量生命值\n\n\n");
            if(hp<=70)      //如果血量小于70，那么就加30血量
                {
                    hp+=30;
                    printf("当前生命值：%d\n",hp);
                }
                else            //如果血量大于70，防止溢出
                {
                    hp=hp_full;
                    printf("当前生命值：%d\n",hp);
                }
        }
    }
    else
    {
        printf("\n\n您真是菜鸡，开挂都打不过去。别上学了，重开吧！=_=\n");
        end();
    }
}





void zuobi()        //作弊模式
{
    money=100000000;    //多给点小钱钱
}

/*
void save()                 //存档模式
{
    FILE *fp;                       //创建一个文本文件
    if(fopen("save.txt","w+")==NULL)      //寻找save.txt没有就直接新建
    {
        printf("大哥你就没存档，别看了。\n");
        fp=fopen("save.txt","w+");
        fwrite
    }
    else
    {
        fp=fopen("save.txt","w+");
    }
}

*/

void end()      //剧情结束
{
    int re=0;
    printf("我都设计的这么简单了，就这都打不过，真的是，动动你愚昧的脑子好好想想为啥打不过去？？？\n");
    printf("要不重开？\n");
    printf("1.是   2.否\n");
    scanf("%d",&re);
    switch (re)
    {
    case 1:
        system("color a");
        printf("行吧，原谅你，不许这么笨了。");
        system("pause");
        system("cls");
        money=90,hp=100;
        main();
        break;
    case 2:
        system("color 4");
        printf("666,重新开始的勇气都没有，服了啊\n");
        system("pause");
        exit(1);
        break;
    default:
        printf("我真是服了，这都能输错，认真点儿！");
        system("pause");
        system("cls");
        end();
        break;
    }
}
