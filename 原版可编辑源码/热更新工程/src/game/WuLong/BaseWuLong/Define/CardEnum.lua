local CardEnum = {}

--牌花色
--和服务端保持一致
CardEnum.CARD_COLOR = {
    CC_NONE = 0,
    CC_DIAMOND = 1, -- 方块
    CC_CLUB = 2, -- 梅花
    CC_HEART = 3, -- 红桃
    CC_SPADE = 4, -- 黑桃
}

--牌值
--和服务端保持一致
--若命名更改，需同时修改CARD_STR、CARD_POWER
CardEnum.CARD_VALUE = {
    CV_NONE = 0,
    CV_A = 1,
    CV_2 = 2,
    CV_3 = 3,
    CV_4 = 4,
    CV_5 = 5,
    CV_6 = 6,
    CV_7 = 7,
    CV_8 = 8,
    CV_9 = 9,
    CV_10 = 10,
    CV_J = 11,
    CV_Q = 12,
    CV_K = 13,
    CV_SJ = 14,
    CV_BJ = 15
}

--牌命名
--和CARD_VALUE、CARD_POWER三者命名一致
CardEnum.CARD_STR = {
    [CardEnum.CARD_VALUE.CV_NONE] = "NONE",
    [CardEnum.CARD_VALUE.CV_A] = "A",
    [CardEnum.CARD_VALUE.CV_2] = "2",
    [CardEnum.CARD_VALUE.CV_3] = "3",
    [CardEnum.CARD_VALUE.CV_4] = "4",
    [CardEnum.CARD_VALUE.CV_5] = "5",
    [CardEnum.CARD_VALUE.CV_6] = "6",
    [CardEnum.CARD_VALUE.CV_7] = "7",
    [CardEnum.CARD_VALUE.CV_8] = "8",
    [CardEnum.CARD_VALUE.CV_9] = "9",
    [CardEnum.CARD_VALUE.CV_10] = "10",
    [CardEnum.CARD_VALUE.CV_J] = "J",
    [CardEnum.CARD_VALUE.CV_Q] = "Q",
    [CardEnum.CARD_VALUE.CV_K] = "K",
    [CardEnum.CARD_VALUE.CV_SJ] = "SJ",
    [CardEnum.CARD_VALUE.CV_BJ] = "BJ",
}

--牌权 对牌值相对应的大小进行定义
--和CARD_VALUE、CARD_STR三者命名一致
CardEnum.CARD_POWER = {
    CP_NONE = 0,
    CP_3 = 3,
    CP_4 = 4,
    CP_5 = 5,
    CP_6 = 6,
    CP_7 = 7,
    CP_8 = 8,
    CP_9 = 9,
    CP_10 = 10,
    CP_J = 11,
    CP_Q = 12,
    CP_K = 13,
    CP_A = 14,
    CP_2 = 15,
    CP_SJ = 16,
    CP_BJ = 17
}

--牌ID
CardEnum.CARD_ID = {
    CIS_NONE = 0,
    CID_NONE = 0,
    --方块
    CID_DIAMOND_A = 1,
    CID_DIAMOND_2 = 2,
    CID_DIAMOND_3 = 3,
    CID_DIAMOND_4 = 4,
    CID_DIAMOND_5 = 5,
    CID_DIAMOND_6 = 6,
    CID_DIAMOND_7 = 7,
    CID_DIAMOND_8 = 8,
    CID_DIAMOND_9 = 9,
    CID_DIAMOND_10 = 10,
    CID_DIAMOND_J = 11,
    CID_DIAMOND_Q = 12,
    CID_DIAMOND_K = 13,
    --梅花
    CID_CLUB_A = 14,
    CID_CLUB_2 = 15,
    CID_CLUB_3 = 16,
    CID_CLUB_4 = 17,
    CID_CLUB_5 = 18,
    CID_CLUB_6 = 19,
    CID_CLUB_7 = 20,
    CID_CLUB_8 = 21,
    CID_CLUB_9 = 22,
    CID_CLUB_10 = 23,
    CID_CLUB_J = 24,
    CID_CLUB_Q = 25,
    CID_CLUB_K = 26,
    --红心
    CID_HEART_A = 27,
    CID_HEART_2 = 28,
    CID_HEART_3 = 29,
    CID_HEART_4 = 30,
    CID_HEART_5 = 31,
    CID_HEART_6 = 32,
    CID_HEART_7 = 33,
    CID_HEART_8 = 34,
    CID_HEART_9 = 35,
    CID_HEART_10 = 36,
    CID_HEART_J = 37,
    CID_HEART_Q = 38,
    CID_HEART_K = 39,
    --黑桃
    CID_SPADE_A = 40,
    CID_SPADE_2 = 41,
    CID_SPADE_3 = 42,
    CID_SPADE_4 = 43,
    CID_SPADE_5 = 44,
    CID_SPADE_6 = 45,
    CID_SPADE_7 = 46,
    CID_SPADE_8 = 47,
    CID_SPADE_9 = 48,
    CID_SPADE_10 = 49,
    CID_SPADE_J = 50,
    CID_SPADE_Q = 51,
    CID_SPADE_K = 52,
    --大小鬼
    CID_SJ = 53,
    CID_BJ = 54,
    --牌背
    CID_BACK = 55,
    CID_COUNT = 56,
}

CardEnum.CARDS_TYPE = {
    CT_0_JUNKO_0_CONTINUOUS = 0,

    CT_1_JUNKO_1_CONTINUOUS = 101, --一张，即1顺1连
    CT_2_JUNKO_1_CONTINUOUS = 201,
    CT_3_JUNKO_1_CONTINUOUS = 301,
    CT_4_JUNKO_1_CONTINUOUS = 401,
    CT_5_JUNKO_1_CONTINUOUS = 501,
    CT_6_JUNKO_1_CONTINUOUS = 601,
    CT_7_JUNKO_1_CONTINUOUS = 701,
    CT_8_JUNKO_1_CONTINUOUS = 801,
    CT_9_JUNKO_1_CONTINUOUS = 901,
    CT_10_JUNKO_1_CONTINUOUS = 1001,
    CT_11_JUNKO_1_CONTINUOUS = 1101,
    CT_12_JUNKO_1_CONTINUOUS = 1201,
    CT_13_JUNKO_1_CONTINUOUS = 1301,
    CT_14_JUNKO_1_CONTINUOUS = 1401,
    CT_15_JUNKO_1_CONTINUOUS = 1501,
    CT_16_JUNKO_1_CONTINUOUS = 1601,
    CT_17_JUNKO_1_CONTINUOUS = 1701,
    CT_18_JUNKO_1_CONTINUOUS = 1801,
    CT_19_JUNKO_1_CONTINUOUS = 1901,
    CT_20_JUNKO_1_CONTINUOUS = 2001,
    CT_21_JUNKO_1_CONTINUOUS = 2101,
    CT_22_JUNKO_1_CONTINUOUS = 2201,
    CT_23_JUNKO_1_CONTINUOUS = 2301,
    CT_24_JUNKO_1_CONTINUOUS = 2401,

    CT_4_KING = 402, --4王
    CT_5_KING = 502, --5王
    CT_6_KING = 602, --6王
    CT_7_KING = 702, --7王
    CT_8_KING = 802, --8王
    CT_9_KING = 902,
    CT_10_KING = 1002,
    CT_11_KING = 1102,
    CT_12_KING = 1202,
}

CardEnum.CardID2Power = {
    CardEnum.CARD_POWER.CP_A,
    CardEnum.CARD_POWER.CP_2,
    CardEnum.CARD_POWER.CP_3,
    CardEnum.CARD_POWER.CP_4,
    CardEnum.CARD_POWER.CP_5,
    CardEnum.CARD_POWER.CP_6,
    CardEnum.CARD_POWER.CP_7,
    CardEnum.CARD_POWER.CP_8,
    CardEnum.CARD_POWER.CP_9,
    CardEnum.CARD_POWER.CP_10,
    CardEnum.CARD_POWER.CP_J,
    CardEnum.CARD_POWER.CP_Q,
    CardEnum.CARD_POWER.CP_K,
    CardEnum.CARD_POWER.CP_A,
    CardEnum.CARD_POWER.CP_2,
    CardEnum.CARD_POWER.CP_3,
    CardEnum.CARD_POWER.CP_4,
    CardEnum.CARD_POWER.CP_5,
    CardEnum.CARD_POWER.CP_6,
    CardEnum.CARD_POWER.CP_7,
    CardEnum.CARD_POWER.CP_8,
    CardEnum.CARD_POWER.CP_9,
    CardEnum.CARD_POWER.CP_10,
    CardEnum.CARD_POWER.CP_J,
    CardEnum.CARD_POWER.CP_Q,
    CardEnum.CARD_POWER.CP_K,
    CardEnum.CARD_POWER.CP_A,
    CardEnum.CARD_POWER.CP_2,
    CardEnum.CARD_POWER.CP_3,
    CardEnum.CARD_POWER.CP_4,
    CardEnum.CARD_POWER.CP_5,
    CardEnum.CARD_POWER.CP_6,
    CardEnum.CARD_POWER.CP_7,
    CardEnum.CARD_POWER.CP_8,
    CardEnum.CARD_POWER.CP_9,
    CardEnum.CARD_POWER.CP_10,
    CardEnum.CARD_POWER.CP_J,
    CardEnum.CARD_POWER.CP_Q,
    CardEnum.CARD_POWER.CP_K,
    CardEnum.CARD_POWER.CP_A,
    CardEnum.CARD_POWER.CP_2,
    CardEnum.CARD_POWER.CP_3,
    CardEnum.CARD_POWER.CP_4,
    CardEnum.CARD_POWER.CP_5,
    CardEnum.CARD_POWER.CP_6,
    CardEnum.CARD_POWER.CP_7,
    CardEnum.CARD_POWER.CP_8,
    CardEnum.CARD_POWER.CP_9,
    CardEnum.CARD_POWER.CP_10,
    CardEnum.CARD_POWER.CP_J,
    CardEnum.CARD_POWER.CP_Q,
    CardEnum.CARD_POWER.CP_K,
    CardEnum.CARD_POWER.CP_SJ,
    CardEnum.CARD_POWER.CP_BJ
}

return CardEnum