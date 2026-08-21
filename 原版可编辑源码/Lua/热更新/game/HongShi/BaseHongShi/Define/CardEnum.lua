--
-- Description: 牌值枚举类型
-- Author: hejiafeng
-- Date: 2019-07-08
--
local CardEnum = {}

--牌花色
--和服务端保持一致
CardEnum.CARD_COLOR = {
    CC_NONE = 0,
    CC_DIAMOND = 1,			-- 方块
    CC_CLUB = 2,			-- 梅花
    CC_HEART = 3,			-- 红桃
    CC_SPADE = 4,			-- 黑桃
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
    CID_DIAMOND_10 = 10,
    CID_HEART_10 = 36,
    CID_SJ = 53,    --小王ID
    CID_BJ = 54     --大王ID
}

CardEnum.CARDS_TYPE =
    {
        CT_0_JUNKO_0_CONTINUOUS = 0,

        CT_1_JUNKO_0_EXCESS_0_CONTINUOUS = 1000,
        CT_1_JUNKO_0_EXCESS_1_CONTINUOUS = 1001,
        CT_1_JUNKO_0_EXCESS_3_CONTINUOUS = 1003,    -- 增加3张连在一起也能当顺子出
        CT_1_JUNKO_0_EXCESS_4_CONTINUOUS = 1004,    -- 增加4张连在一起也能当顺子出
        CT_1_JUNKO_0_EXCESS_5_CONTINUOUS = 1005,
        CT_1_JUNKO_0_EXCESS_6_CONTINUOUS = 1006,
        CT_1_JUNKO_0_EXCESS_7_CONTINUOUS = 1007,
        CT_1_JUNKO_0_EXCESS_8_CONTINUOUS = 1008,
        CT_1_JUNKO_0_EXCESS_9_CONTINUOUS = 1009,
        CT_1_JUNKO_0_EXCESS_10_CONTINUOUS = 1010,
        CT_1_JUNKO_0_EXCESS_11_CONTINUOUS = 1011,
        CT_1_JUNKO_0_EXCESS_12_CONTINUOUS = 1012,
        CT_1_JUNKO_0_EXCESS_13_CONTINUOUS = 1013,
        CT_1_JUNKO_0_EXCESS_14_CONTINUOUS = 1014,

        --两对顺子1/3/4/5..
        CT_2_JUNKO_0_EXCESS_0_CONTINUOUS = 2000,
        CT_2_JUNKO_0_EXCESS_1_CONTINUOUS = 2001,
        CT_2_JUNKO_0_EXCESS_3_CONTINUOUS = 2003, 
        CT_2_JUNKO_0_EXCESS_4_CONTINUOUS = 2004,
        CT_2_JUNKO_0_EXCESS_5_CONTINUOUS = 2005,
        CT_2_JUNKO_0_EXCESS_6_CONTINUOUS = 2006,
        CT_2_JUNKO_0_EXCESS_7_CONTINUOUS = 2007,
        CT_2_JUNKO_0_EXCESS_8_CONTINUOUS = 2008,

        --3条
        CT_3_JUNKO_0_EXCESS_0_CONTINUOUS = 3000,
        CT_3_JUNKO_0_EXCESS_1_CONTINUOUS = 3001,
        CT_3_JUNKO_0_EXCESS_2_CONTINUOUS = 3002,
        CT_3_JUNKO_0_EXCESS_3_CONTINUOUS = 3003,
        CT_3_JUNKO_0_EXCESS_4_CONTINUOUS = 3004,
        CT_3_JUNKO_0_EXCESS_5_CONTINUOUS = 3005,

        --3带1顺子(飞机)
        CT_3_JUNKO_1_EXCESS_0_CONTINUOUS = 3100,
        CT_3_JUNKO_1_EXCESS_1_CONTINUOUS = 3101,
        CT_3_JUNKO_1_EXCESS_2_CONTINUOUS = 3102,
        CT_3_JUNKO_1_EXCESS_3_CONTINUOUS = 3103,
        CT_3_JUNKO_1_EXCESS_4_CONTINUOUS = 3104,
        CT_3_JUNKO_1_EXCESS_5_CONTINUOUS = 3105,

        --3带2顺子(飞机)
        CT_3_JUNKO_2_EXCESS_0_CONTINUOUS = 3200,
        CT_3_JUNKO_2_EXCESS_1_CONTINUOUS = 3201,
        CT_3_JUNKO_2_EXCESS_2_CONTINUOUS = 3202,
        CT_3_JUNKO_2_EXCESS_3_CONTINUOUS = 3203,
        CT_3_JUNKO_2_EXCESS_4_CONTINUOUS = 3204,
        CT_3_JUNKO_2_EXCESS_5_CONTINUOUS = 3205,

        --4条(炸弹级别)
        CT_4_JUNKO_0_EXCESS_0_CONTINUOUS = 4000,
        CT_4_JUNKO_0_EXCESS_1_CONTINUOUS = 4001,
        CT_4_JUNKO_0_EXCESS_2_CONTINUOUS = 4002, 
        CT_4_JUNKO_0_EXCESS_3_CONTINUOUS = 4003,
        CT_4_JUNKO_0_EXCESS_4_CONTINUOUS = 4004,

        --4带1顺子(炸弹级别)
        CT_4_JUNKO_1_EXCESS_0_CONTINUOUS = 4100,
        CT_4_JUNKO_1_EXCESS_1_CONTINUOUS = 4101,
        CT_4_JUNKO_1_EXCESS_2_CONTINUOUS = 4102, 
        CT_4_JUNKO_1_EXCESS_3_CONTINUOUS = 4103,
        CT_4_JUNKO_1_EXCESS_4_CONTINUOUS = 4104,

        --4带3顺子(四条)
        CT_4_JUNKO_3_EXCESS_0_CONTINUOUS = 4300,
        CT_4_JUNKO_3_EXCESS_1_CONTINUOUS = 4301,
        CT_4_JUNKO_3_EXCESS_2_CONTINUOUS = 4302, 
        CT_4_JUNKO_3_EXCESS_3_CONTINUOUS = 4303,
        CT_4_JUNKO_3_EXCESS_4_CONTINUOUS = 4304,

        -- 王炸
        CT_5_JUNKO_0_EXCESS_1_CONTINUOUS = 5000,

        -- 一对红十
        CT_6_JUNKO_0_EXCESS_1_CONTINUOUS = 6000,
    }

CardEnum.cardType = {
    CTID_NONE        = 0,    --无
    CTID_YI_ZHANG    = 1,    --单张
    CTID_ER_ZHANG    = 2,    --对子
    CTID_SAN_ZHANG   = 3,    --三张
    CTID_SI_ZHANG    = 4,    --四张
    CTID_WU_ZHANG    = 5,    --五张
    CTID_LIU_ZHANG   = 6,    --六张
    CTID_QI_ZHANG    = 7,    --七张
    CTID_BA_ZHANG    = 8,    --八张
    CTID_YI_SHUN    = 9,     --单顺
    CTID_ER_SHUN    = 10,    --双顺
    CTID_SAN_SHUN   = 11,    --三顺
    CTID_SI_SHUN    = 12,    --四顺
    CTID_WU_SHUN    = 13,    --五顺
    CTID_LIU_SHUN   = 14,    --六顺
    CTID_QI_SHUN    = 15,    --七顺
    CTID_BA_SHUN    = 16,    --八顺
    CTID_HUO_JIAN   = 17,    --火箭
    CTID_FEI_JI     = 18,    --飞机带翅膀
    CTID_SAN_DAI_YI = 19,    --三带一
    CTID_SI_DAI_ER  = 20,    --四带二
    CTID_COUNT      = 21,
    CTID_USER       = 100    --用户自定义牌型
}

return CardEnum