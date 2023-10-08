#include <stdio.h>

int main()
{
    int price_per_drink, pocket_money, refund_per_cap, bottle_per_drink;
    scanf("%d %d %d %d", &price_per_drink, &pocket_money, &refund_per_cap, &bottle_per_drink);
    if (1 <= price_per_drink && price_per_drink <= 100 && 1 <= pocket_money && pocket_money <= 200 && 0 <= refund_per_cap && refund_per_cap <= 10 && 2 <= bottle_per_drink && bottle_per_drink <= 100)
    {
        int bottle_num = 0;
        int bought_drink = 0;
        int cap_num = 0;

        while (pocket_money >= price_per_drink || bottle_num >= bottle_per_drink || (refund_per_cap > 0 && cap_num >= refund_per_cap))
        {
            // 檢查有多少瓶蓋、瓶子、剩多少錢
            int bought_drink_this_round = 0;
            bought_drink_this_round = pocket_money / price_per_drink;
            bought_drink += bought_drink_this_round;
            cap_num += bought_drink_this_round;
            bottle_num += bought_drink_this_round;
            pocket_money = pocket_money - (price_per_drink * bought_drink_this_round);

            // 檢查能換多少錢
            if (cap_num >= refund_per_cap && refund_per_cap > 0)
            {
                int refund_money = cap_num * refund_per_cap;
                cap_num = 0;
                pocket_money = pocket_money + refund_money;
            }

            // 檢查是否能換飲料，若能換，檢查能換多少杯
            if (bottle_num >= bottle_per_drink)
            {
                int refund_drinks = bottle_num / bottle_per_drink;
                bought_drink = bought_drink + refund_drinks;
                bottle_num = bottle_num - (refund_drinks * bottle_per_drink);
                cap_num += refund_drinks;
                bottle_num += refund_drinks;
            }
        }
        printf("%d", bought_drink);
    }
}