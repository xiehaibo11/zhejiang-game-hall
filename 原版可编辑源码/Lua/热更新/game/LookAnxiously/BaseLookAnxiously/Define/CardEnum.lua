--
--Description: card info
--Date: 2019-07-08 16:01:42
--
local CardEnum = {}

CardEnum.CARD_COLOR =
{
    COLOR_NONE = 0,
    COLOR_DIAMOND = 1,
    COLOR_CLUB = 2,
    COLOR_HEART = 3,
    COLOR_SPADE = 4,
    COLOR_COUNT = 5,
}

CardEnum.CompareResult =
{
    CR_UNABLE_COMPARE = 0,--不可比较
    CR_EQUA = 1,        --牌型匹配
    CR_MORE_THAN = 2,   --牌型大
    CR_LESS_THAN = 3,   --牌型小
}

CardEnum.CARD_VALUE =
{
    VALUE_NONE = 0,
    VALUE_A = 1,
    VALUE_2 = 2,
    VALUE_3 = 3,
    VALUE_4 = 4,
    VALUE_5 = 5,
    VALUE_6 = 6,
    VALUE_7 = 7,
    VALUE_8 = 8,
    VALUE_9 = 9,
    VALUE_10 = 10,
    VALUE_J = 11,
    VALUE_Q = 12,
    VALUE_K = 13,
    VALUE_SJ = 14,
    VALUE_BJ = 15,
    VALUE_COUNT = 16
}

CardEnum.CARD_POWER =
{
    POWER_NONE = 0,
    POWER_3 = 3,
    POWER_4 = 4,
    POWER_5 = 5,
    POWER_6 = 6,
    POWER_7 = 7,
    POWER_8 = 8,
    POWER_9 = 9,
    POWER_10 = 10,
    POWER_J = 11,
    POWER_Q = 12,
    POWER_K = 13,
    POWER_A = 14,
    POWER_2 = 15,
    POWER_SJ = 16,
    POWER_BJ = 17,
    POWER_COUNT = 18
}

CardEnum.CARD_ID =
{
    ID_NONE = 0,
    --方块
    ID_DIAMOND_A = 1,
    ID_DIAMOND_2 = 2,
    ID_DIAMOND_3 = 3,
    ID_DIAMOND_4 = 4,
    ID_DIAMOND_5 = 5,
    ID_DIAMOND_6 = 6,
    ID_DIAMOND_7 = 7,
    ID_DIAMOND_8 = 8,
    ID_DIAMOND_9 = 9,
    ID_DIAMOND_10 = 10,
    ID_DIAMOND_J = 11,
    ID_DIAMOND_Q = 12,
    ID_DIAMOND_K = 13,
    --梅花
    ID_CLUB_A = 14,
    ID_CLUB_2 = 15,
    ID_CLUB_3 = 16,
    ID_CLUB_4 = 17,
    ID_CLUB_5 = 18,
    ID_CLUB_6 = 19,
    ID_CLUB_7 = 20,
    ID_CLUB_8 = 21,
    ID_CLUB_9 = 22,
    ID_CLUB_10 = 23,
    ID_CLUB_J = 24,
    ID_CLUB_Q = 25,
    ID_CLUB_K = 26,
    --红心
    ID_HEART_A = 27,
    ID_HEART_2 = 28,
    ID_HEART_3 = 29,
    ID_HEART_4 = 30,
    ID_HEART_5 = 31,
    ID_HEART_6 = 32,
    ID_HEART_7 = 33,
    ID_HEART_8 = 34,
    ID_HEART_9 = 35,
    ID_HEART_10 = 36,
    ID_HEART_J = 37,
    ID_HEART_Q = 38,
    ID_HEART_K = 39,
    --黑桃
    ID_SPADE_A = 40,
    ID_SPADE_2 = 41,
    ID_SPADE_3 = 42,
    ID_SPADE_4 = 43,
    ID_SPADE_5 = 44,
    ID_SPADE_6 = 45,
    ID_SPADE_7 = 46,
    ID_SPADE_8 = 47,
    ID_SPADE_9 = 48,
    ID_SPADE_10 = 49,
    ID_SPADE_J = 50,
    ID_SPADE_Q = 51,
    ID_SPADE_K = 52,
    --大小鬼
    ID_SJ = 53,
    ID_BJ = 54,
    --牌背
    ID_BACK = 55,
    ID_COUNT = 56,
}

CardEnum.strCardValue = {
    [0] = "牌背",
    [1] = "A",
    [2] = "2",
    [3] = "3",
    [4] = "4",
    [5] = "5",
    [6] = "6",
    [7] = "7",
    [8] = "8",
    [9] = "9",
    [10] = "10",
    [11] = "J",
    [12] = "Q",
    [13] = "K",
    [14] = "小王",
    [15] = "大王"
}

CardEnum.strCardStringValue = {
    [0] = "b",
    [1] = "A",
    [2] = "2",
    [3] = "3",
    [4] = "4",
    [5] = "5",
    [6] = "6",
    [7] = "7",
    [8] = "8",
    [9] = "9",
    [10] = "10",
    [11] = "J",
    [12] = "Q",
    [13] = "K",
    [14] = "F",
    [15] = "Z"
}

CardEnum.strCardColor = {
    [0] = "",
    [1] = "方",
    [2] = "梅",
    [3] = "红",
    [4] = "黑"
}

CardEnum.strFullCardColor = {
    [0] = "",
    [1] = "方块",
    [2] = "梅花",
    [3] = "红桃",
    [4] = "黑桃"
}

CardEnum.strCardStringColor = {
    [0] = "",
    [1] = "D",
    [2] = "C",
    [3] = "H",
    [4] = "B"
}

CardEnum.ucCardValue = {
    CardEnum.CARD_VALUE.VALUE_A,
    CardEnum.CARD_VALUE.VALUE_2,
    CardEnum.CARD_VALUE.VALUE_3,
    CardEnum.CARD_VALUE.VALUE_4,
    CardEnum.CARD_VALUE.VALUE_5,
    CardEnum.CARD_VALUE.VALUE_6,
    CardEnum.CARD_VALUE.VALUE_7,
    CardEnum.CARD_VALUE.VALUE_8,
    CardEnum.CARD_VALUE.VALUE_9,
    CardEnum.CARD_VALUE.VALUE_10,
    CardEnum.CARD_VALUE.VALUE_J,
    CardEnum.CARD_VALUE.VALUE_Q,
    CardEnum.CARD_VALUE.VALUE_K,
    CardEnum.CARD_VALUE.VALUE_A,
    CardEnum.CARD_VALUE.VALUE_2,
    CardEnum.CARD_VALUE.VALUE_3,
    CardEnum.CARD_VALUE.VALUE_4,
    CardEnum.CARD_VALUE.VALUE_5,
    CardEnum.CARD_VALUE.VALUE_6,
    CardEnum.CARD_VALUE.VALUE_7,
    CardEnum.CARD_VALUE.VALUE_8,
    CardEnum.CARD_VALUE.VALUE_9,
    CardEnum.CARD_VALUE.VALUE_10,
    CardEnum.CARD_VALUE.VALUE_J,
    CardEnum.CARD_VALUE.VALUE_Q,
    CardEnum.CARD_VALUE.VALUE_K,
    CardEnum.CARD_VALUE.VALUE_A,
    CardEnum.CARD_VALUE.VALUE_2,
    CardEnum.CARD_VALUE.VALUE_3,
    CardEnum.CARD_VALUE.VALUE_4,
    CardEnum.CARD_VALUE.VALUE_5,
    CardEnum.CARD_VALUE.VALUE_6,
    CardEnum.CARD_VALUE.VALUE_7,
    CardEnum.CARD_VALUE.VALUE_8,
    CardEnum.CARD_VALUE.VALUE_9,
    CardEnum.CARD_VALUE.VALUE_10,
    CardEnum.CARD_VALUE.VALUE_J,
    CardEnum.CARD_VALUE.VALUE_Q,
    CardEnum.CARD_VALUE.VALUE_K,
    CardEnum.CARD_VALUE.VALUE_A,
    CardEnum.CARD_VALUE.VALUE_2,
    CardEnum.CARD_VALUE.VALUE_3,
    CardEnum.CARD_VALUE.VALUE_4,
    CardEnum.CARD_VALUE.VALUE_5,
    CardEnum.CARD_VALUE.VALUE_6,
    CardEnum.CARD_VALUE.VALUE_7,
    CardEnum.CARD_VALUE.VALUE_8,
    CardEnum.CARD_VALUE.VALUE_9,
    CardEnum.CARD_VALUE.VALUE_10,
    CardEnum.CARD_VALUE.VALUE_J,
    CardEnum.CARD_VALUE.VALUE_Q,
    CardEnum.CARD_VALUE.VALUE_K,
    CardEnum.CARD_VALUE.VALUE_SJ,
    CardEnum.CARD_VALUE.VALUE_BJ
}

CardEnum.ucCardPower = {
    CardEnum.CARD_POWER.POWER_A,
    CardEnum.CARD_POWER.POWER_2,
    CardEnum.CARD_POWER.POWER_3,
    CardEnum.CARD_POWER.POWER_4,
    CardEnum.CARD_POWER.POWER_5,
    CardEnum.CARD_POWER.POWER_6,
    CardEnum.CARD_POWER.POWER_7,
    CardEnum.CARD_POWER.POWER_8,
    CardEnum.CARD_POWER.POWER_9,
    CardEnum.CARD_POWER.POWER_10,
    CardEnum.CARD_POWER.POWER_J,
    CardEnum.CARD_POWER.POWER_Q,
    CardEnum.CARD_POWER.POWER_K,
    CardEnum.CARD_POWER.POWER_A,
    CardEnum.CARD_POWER.POWER_2,
    CardEnum.CARD_POWER.POWER_3,
    CardEnum.CARD_POWER.POWER_4,
    CardEnum.CARD_POWER.POWER_5,
    CardEnum.CARD_POWER.POWER_6,
    CardEnum.CARD_POWER.POWER_7,
    CardEnum.CARD_POWER.POWER_8,
    CardEnum.CARD_POWER.POWER_9,
    CardEnum.CARD_POWER.POWER_10,
    CardEnum.CARD_POWER.POWER_J,
    CardEnum.CARD_POWER.POWER_Q,
    CardEnum.CARD_POWER.POWER_K,
    CardEnum.CARD_POWER.POWER_A,
    CardEnum.CARD_POWER.POWER_2,
    CardEnum.CARD_POWER.POWER_3,
    CardEnum.CARD_POWER.POWER_4,
    CardEnum.CARD_POWER.POWER_5,
    CardEnum.CARD_POWER.POWER_6,
    CardEnum.CARD_POWER.POWER_7,
    CardEnum.CARD_POWER.POWER_8,
    CardEnum.CARD_POWER.POWER_9,
    CardEnum.CARD_POWER.POWER_10,
    CardEnum.CARD_POWER.POWER_J,
    CardEnum.CARD_POWER.POWER_Q,
    CardEnum.CARD_POWER.POWER_K,
    CardEnum.CARD_POWER.POWER_A,
    CardEnum.CARD_POWER.POWER_2,
    CardEnum.CARD_POWER.POWER_3,
    CardEnum.CARD_POWER.POWER_4,
    CardEnum.CARD_POWER.POWER_5,
    CardEnum.CARD_POWER.POWER_6,
    CardEnum.CARD_POWER.POWER_7,
    CardEnum.CARD_POWER.POWER_8,
    CardEnum.CARD_POWER.POWER_9,
    CardEnum.CARD_POWER.POWER_10,
    CardEnum.CARD_POWER.POWER_J,
    CardEnum.CARD_POWER.POWER_Q,
    CardEnum.CARD_POWER.POWER_K,
    CardEnum.CARD_POWER.POWER_SJ,
    CardEnum.CARD_POWER.POWER_BJ
}

CardEnum.ucCardColor = {
    CardEnum.CARD_COLOR.COLOR_NONE,
    CardEnum.CARD_COLOR.COLOR_DIAMOND,
    CardEnum.CARD_COLOR.COLOR_DIAMOND,
    CardEnum.CARD_COLOR.COLOR_DIAMOND,
    CardEnum.CARD_COLOR.COLOR_DIAMOND,
    CardEnum.CARD_COLOR.COLOR_DIAMOND,
    CardEnum.CARD_COLOR.COLOR_DIAMOND,
    CardEnum.CARD_COLOR.COLOR_DIAMOND,
    CardEnum.CARD_COLOR.COLOR_DIAMOND,
    CardEnum.CARD_COLOR.COLOR_DIAMOND,
    CardEnum.CARD_COLOR.COLOR_DIAMOND,
    CardEnum.CARD_COLOR.COLOR_DIAMOND,
    CardEnum.CARD_COLOR.COLOR_DIAMOND,
    CardEnum.CARD_COLOR.COLOR_DIAMOND,
    CardEnum.CARD_COLOR.COLOR_CLUB,
    CardEnum.CARD_COLOR.COLOR_CLUB,
    CardEnum.CARD_COLOR.COLOR_CLUB,
    CardEnum.CARD_COLOR.COLOR_CLUB,
    CardEnum.CARD_COLOR.COLOR_CLUB,
    CardEnum.CARD_COLOR.COLOR_CLUB,
    CardEnum.CARD_COLOR.COLOR_CLUB,
    CardEnum.CARD_COLOR.COLOR_CLUB,
    CardEnum.CARD_COLOR.COLOR_CLUB,
    CardEnum.CARD_COLOR.COLOR_CLUB,
    CardEnum.CARD_COLOR.COLOR_CLUB,
    CardEnum.CARD_COLOR.COLOR_CLUB,
    CardEnum.CARD_COLOR.COLOR_CLUB,
    CardEnum.CARD_COLOR.COLOR_HEART,
    CardEnum.CARD_COLOR.COLOR_HEART,
    CardEnum.CARD_COLOR.COLOR_HEART,
    CardEnum.CARD_COLOR.COLOR_HEART,
    CardEnum.CARD_COLOR.COLOR_HEART,
    CardEnum.CARD_COLOR.COLOR_HEART,
    CardEnum.CARD_COLOR.COLOR_HEART,
    CardEnum.CARD_COLOR.COLOR_HEART,
    CardEnum.CARD_COLOR.COLOR_HEART,
    CardEnum.CARD_COLOR.COLOR_HEART,
    CardEnum.CARD_COLOR.COLOR_HEART,
    CardEnum.CARD_COLOR.COLOR_HEART,
    CardEnum.CARD_COLOR.COLOR_HEART,
    CardEnum.CARD_COLOR.COLOR_SPADE,
    CardEnum.CARD_COLOR.COLOR_SPADE,
    CardEnum.CARD_COLOR.COLOR_SPADE,
    CardEnum.CARD_COLOR.COLOR_SPADE,
    CardEnum.CARD_COLOR.COLOR_SPADE,
    CardEnum.CARD_COLOR.COLOR_SPADE,
    CardEnum.CARD_COLOR.COLOR_SPADE,
    CardEnum.CARD_COLOR.COLOR_SPADE,
    CardEnum.CARD_COLOR.COLOR_SPADE,
    CardEnum.CARD_COLOR.COLOR_SPADE,
    CardEnum.CARD_COLOR.COLOR_SPADE,
    CardEnum.CARD_COLOR.COLOR_SPADE,
    CardEnum.CARD_COLOR.COLOR_SPADE,
    CardEnum.CARD_COLOR.COLOR_NONE,
    CardEnum.CARD_COLOR.COLOR_NONE
}

CardEnum.CARDS_TYPE =
{
    CT_0_JUNKO_0_CONTINUOUS = 0,

    --单牌顺子1/5/6...12张
    CT_1_JUNKO_0_EXCESS_0_CONTINUOUS = 1000,
    CT_1_JUNKO_0_EXCESS_1_CONTINUOUS = 1001,
    CT_1_JUNKO_0_EXCESS_3_CONTINUOUS = 1003,
    CT_1_JUNKO_0_EXCESS_4_CONTINUOUS = 1004,
    CT_1_JUNKO_0_EXCESS_5_CONTINUOUS = 1005,
    CT_1_JUNKO_0_EXCESS_6_CONTINUOUS = 1006,
    CT_1_JUNKO_0_EXCESS_7_CONTINUOUS = 1007,
    CT_1_JUNKO_0_EXCESS_8_CONTINUOUS = 1008,
    CT_1_JUNKO_0_EXCESS_9_CONTINUOUS = 1009,
    CT_1_JUNKO_0_EXCESS_10_CONTINUOUS = 1010,
    CT_1_JUNKO_0_EXCESS_11_CONTINUOUS = 1011,
    CT_1_JUNKO_0_EXCESS_12_CONTINUOUS = 1012,

    --两对顺子1/3/4/5..
    CT_2_JUNKO_0_EXCESS_1_CONTINUOUS = 2001,
    CT_2_JUNKO_0_EXCESS_2_CONTINUOUS = 2002,
    CT_2_JUNKO_0_EXCESS_3_CONTINUOUS = 2003,
    CT_2_JUNKO_0_EXCESS_4_CONTINUOUS = 2004,
    CT_2_JUNKO_0_EXCESS_5_CONTINUOUS = 2005,
    CT_2_JUNKO_0_EXCESS_6_CONTINUOUS = 2006,
    CT_2_JUNKO_0_EXCESS_7_CONTINUOUS = 2007,
    CT_2_JUNKO_0_EXCESS_8_CONTINUOUS = 2008,
    CT_2_JUNKO_0_EXCESS_9_CONTINUOUS = 2009,
    CT_2_JUNKO_0_EXCESS_10_CONTINUOUS = 2010,
    CT_2_JUNKO_0_EXCESS_11_CONTINUOUS = 2011,
    CT_2_JUNKO_0_EXCESS_12_CONTINUOUS = 2012,

    --3张炸弹
    CT_3_JUNKO_0_EXCESS_1_CONTINUOUS = 3001,
    --4张炸弹
    CT_4_JUNKO_0_EXCESS_1_CONTINUOUS = 4001,
    --5张炸弹
    CT_5_JUNKO_0_EXCESS_1_CONTINUOUS = 5001,
    --6张炸弹
    CT_6_JUNKO_0_EXCESS_1_CONTINUOUS = 6001,
}

CardEnum.BASE_CARDTYPE =
{
    CardEnum.CARDS_TYPE.CT_6_JUNKO_0_EXCESS_1_CONTINUOUS,
    CardEnum.CARDS_TYPE.CT_5_JUNKO_0_EXCESS_1_CONTINUOUS,
    CardEnum.CARDS_TYPE.CT_4_JUNKO_0_EXCESS_1_CONTINUOUS,
    --CardEnum.CARDS_TYPE.CT_3_JUNKO_0_EXCESS_1_CONTINUOUS,
    CardEnum.CARDS_TYPE.CT_3_JUNKO_0_EXCESS_1_CONTINUOUS,
    CardEnum.CARDS_TYPE.CT_2_JUNKO_0_EXCESS_1_CONTINUOUS,
    CardEnum.CARDS_TYPE.CT_1_JUNKO_0_EXCESS_1_CONTINUOUS,
}

--连为顺子最少个数,和BASE_CARDTYPE对应
CardEnum.MIN_CTLENGTH =
{
    999,--6炸
    999,--5炸
    999,--4炸
    999,--3炸
    2,  --两对
    3,  --一条
}

CardEnum.S_BSPECFCARD3A = true

CardEnum.COMPARE_RESULT =
{
    CR_UNABLE_COMPARE = 0,--不可比较
    CR_EQUA = 1,          --牌型匹配
    CR_MORE_THAN = 2,     --牌型大
    CR_LESS_THAN = 3,     --牌型小
}

return CardEnum