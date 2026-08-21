local CardEnum = {}

--牌花色
--和服务端保持一致
CardEnum.CARD_COLOR = {
    CC_NONE = 0,
    CC_DIAMOND = 1, -- 方块
    CC_CLUB = 2, -- 梅花
    CC_HEART = 3, -- 红桃
    CC_SPADE = 4 -- 黑桃
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
    [CardEnum.CARD_VALUE.CV_BJ] = "BJ"
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
    --方块
    CID_DIAMOND_2_A = 55,
    CID_DIAMOND_2_2 = 56,
    CID_DIAMOND_2_3 = 57,
    CID_DIAMOND_2_4 = 58,
    CID_DIAMOND_2_5 = 59,
    CID_DIAMOND_2_6 = 60,
    CID_DIAMOND_2_7 = 61,
    CID_DIAMOND_2_8 = 62,
    CID_DIAMOND_2_9 = 63,
    CID_DIAMOND_2_10 = 64,
    CID_DIAMOND_2_J = 65,
    CID_DIAMOND_2_Q = 66,
    CID_DIAMOND_2_K = 67,
    --梅花
    CID_CLUB_2_A = 68,
    CID_CLUB_2_2 = 69,
    CID_CLUB_2_3 = 70,
    CID_CLUB_2_4 = 71,
    CID_CLUB_2_5 = 72,
    CID_CLUB_2_6 = 73,
    CID_CLUB_2_7 = 74,
    CID_CLUB_2_8 = 75,
    CID_CLUB_2_9 = 76,
    CID_CLUB_2_10 = 77,
    CID_CLUB_2_J = 78,
    CID_CLUB_2_Q = 79,
    CID_CLUB_2_K = 80,
    --红心
    CID_HEART_2_A = 81,
    CID_HEART_2_2 = 82,
    CID_HEART_2_3 = 83,
    CID_HEART_2_4 = 84,
    CID_HEART_2_5 = 85,
    CID_HEART_2_6 = 86,
    CID_HEART_2_7 = 87,
    CID_HEART_2_8 = 88,
    CID_HEART_2_9 = 89,
    CID_HEART_2_10 = 90,
    CID_HEART_2_J = 91,
    CID_HEART_2_Q = 92,
    CID_HEART_2_K = 93,
    --黑桃
    CID_SPADE_2_A = 94,
    CID_SPADE_2_2 = 95,
    CID_SPADE_2_3 = 96,
    CID_SPADE_2_4 = 97,
    CID_SPADE_2_5 = 98,
    CID_SPADE_2_6 = 99,
    CID_SPADE_2_7 = 100,
    CID_SPADE_2_8 = 101,
    CID_SPADE_2_9 = 102,
    CID_SPADE_2_10 = 103,
    CID_SPADE_2_J = 104,
    CID_SPADE_2_Q = 105,
    CID_SPADE_2_K = 106,
    --大小鬼
    CID_2_SJ = 107,
    CID_2_BJ = 108
}

-- CardValue 映射关系
local CardValueJokerList = {CardEnum.CARD_VALUE.CV_SJ, CardEnum.CARD_VALUE.CV_BJ}
local CardValueNumList = {
    CardEnum.CARD_VALUE.CV_A,
    CardEnum.CARD_VALUE.CV_2,
    CardEnum.CARD_VALUE.CV_3,
    CardEnum.CARD_VALUE.CV_4,
    CardEnum.CARD_VALUE.CV_5,
    CardEnum.CARD_VALUE.CV_6,
    CardEnum.CARD_VALUE.CV_7,
    CardEnum.CARD_VALUE.CV_8,
    CardEnum.CARD_VALUE.CV_9,
    CardEnum.CARD_VALUE.CV_10,
    CardEnum.CARD_VALUE.CV_J,
    CardEnum.CARD_VALUE.CV_Q,
    CardEnum.CARD_VALUE.CV_K
}

CardEnum.CardID2Value = {}
CardEnum.CardID2Value[0] = CardEnum.CARD_VALUE.CV_NONE
table.insertto(CardEnum.CardID2Value, CardValueNumList)
table.insertto(CardEnum.CardID2Value, CardValueNumList)
table.insertto(CardEnum.CardID2Value, CardValueNumList)
table.insertto(CardEnum.CardID2Value, CardValueNumList)
table.insertto(CardEnum.CardID2Value, CardValueJokerList)
table.insertto(CardEnum.CardID2Value, CardValueNumList)
table.insertto(CardEnum.CardID2Value, CardValueNumList)
table.insertto(CardEnum.CardID2Value, CardValueNumList)
table.insertto(CardEnum.CardID2Value, CardValueNumList)
table.insertto(CardEnum.CardID2Value, CardValueJokerList)

-- CardPower
local CardPowerJokerList = {CardEnum.CARD_POWER.CP_SJ, CardEnum.CARD_POWER.CP_BJ}
local CardPowerNumList = {
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
    CardEnum.CARD_POWER.CP_K
}
CardEnum.CardID2Power = {}
CardEnum.CardID2Power[0] = CardEnum.CARD_POWER.CP_NONE
table.insertto(CardEnum.CardID2Power, CardPowerNumList)
table.insertto(CardEnum.CardID2Power, CardPowerNumList)
table.insertto(CardEnum.CardID2Power, CardPowerNumList)
table.insertto(CardEnum.CardID2Power, CardPowerNumList)
table.insertto(CardEnum.CardID2Power, CardPowerJokerList)
table.insertto(CardEnum.CardID2Power, CardPowerNumList)
table.insertto(CardEnum.CardID2Power, CardPowerNumList)
table.insertto(CardEnum.CardID2Power, CardPowerNumList)
table.insertto(CardEnum.CardID2Power, CardPowerNumList)
table.insertto(CardEnum.CardID2Power, CardPowerJokerList)

function CardEnum.getCardColor(id)
    if (id >= 1 and id <= 13) or (id >= 55 and id <= 67) then
        return CardEnum.CARD_COLOR.CC_DIAMOND
    elseif (id >= 14 and id <= 26) or (id >= 68 and id <= 80) then
        return CardEnum.CARD_COLOR.CC_CLUB
    elseif (id >= 27 and id <= 39) or (id >= 81 and id <= 93) then
        return CardEnum.CARD_COLOR.CC_HEART
    elseif (id >= 40 and id <= 52) or (id >= 94 and id <= 106) then
        return CardEnum.CARD_COLOR.CC_SPADE
    end
    return CardEnum.CARD_COLOR.CC_NONE
end

-- 牌类型
CardEnum.CardType = {
    NONE = {name = "无类", id = 0},
    SINGLE = {name = "单张类", id = 1},
    DOUBLE = {name = "对子类", id = 2},
    TRIPLE = {name = "三张类", id = 3},
    BOOM = {name = "炸弹类", id = 4}
}

CardEnum.CardScore = {
    JOKER = 5,
    NOT_JOKER = 1
}

-- 暴击倍数
CardEnum.CardBoomMult = 5

CardEnum.tagCardTypeID = {
    CT_0_JUNKO_0_EXCESS_CONTINUOUS_0 = {id = 0, name = "无", sortid = 0, mult = 1, cardType = CardEnum.CardType.NONE, img = "_0_0", soundid = 0},
    -- 单牌顺子1/5/6...12张
    CT_1_1 = {id = 1, name = "单张", sortid = 1, mult = 2, cardType = CardEnum.CardType.SINGLE, img = "_1_1", soundid = 1},
    CT_1_5 = {id = 2, name = "顺子", sortid = 1005, mult = 20, cardType = CardEnum.CardType.SINGLE, img = "_1_5", soundid = 2},
    CT_1_6 = {id = 3, name = "六顺", sortid = 1006, mult = 20, cardType = CardEnum.CardType.SINGLE, img = "_1_6", soundid = 2},
    CT_1_7 = {id = 4, name = "七顺", sortid = 1007, mult = 20, cardType = CardEnum.CardType.SINGLE, img = "_1_7", soundid = 2},
    CT_1_8 = {id = 5, name = "八顺", sortid = 1008, mult = 20, cardType = CardEnum.CardType.SINGLE, img = "_1_8", soundid = 2},
    CT_1_9 = {id = 6, name = "九顺", sortid = 1009, mult = 20, cardType = CardEnum.CardType.SINGLE, img = "_1_9", soundid = 2},
    CT_1_10 = {id = 7, name = "十顺", sortid = 1010, mult = 20, cardType = CardEnum.CardType.SINGLE, img = "_1_10", soundid = 2},
    CT_1_11 = {id = 8, name = "十一顺", sortid = 1011, mult = 20, cardType = CardEnum.CardType.SINGLE, img = "_1_11", soundid = 2},
    CT_1_12 = {id = 9, name = "十二顺", sortid = 1012, mult = 20, cardType = CardEnum.CardType.SINGLE, img = "_1_12", soundid = 2},
    -- 两对顺子1/3/4/5..2不存在
    CT_2_1 = {id = 10, name = "对子", sortid = 2, mult = 3, cardType = CardEnum.CardType.DOUBLE, img = "_2_1", soundid = 10},
    CT_2_3 = {id = 11, name = "双顺", sortid = 2003, mult = 20, cardType = CardEnum.CardType.DOUBLE, img = "_2_3", soundid = 11},
    CT_2_4 = {id = 12, name = "四连双顺", sortid = 2004, mult = 20, cardType = CardEnum.CardType.DOUBLE, img = "_2_4", soundid = 11},
    CT_2_5 = {id = 13, name = "五连双顺", sortid = 2005, mult = 20, cardType = CardEnum.CardType.DOUBLE, img = "_2_5", soundid = 11},
    CT_2_6 = {id = 14, name = "六连双顺", sortid = 2006, mult = 20, cardType = CardEnum.CardType.DOUBLE, img = "_2_6", soundid = 11},
    CT_2_7 = {id = 15, name = "七连双顺", sortid = 2007, mult = 20, cardType = CardEnum.CardType.DOUBLE, img = "_2_7", soundid = 11},
    CT_2_8 = {id = 16, name = "八连双顺", sortid = 2008, mult = 20, cardType = CardEnum.CardType.DOUBLE, img = "_2_8", soundid = 11},
    -- 三张
    CT_3_1 = {id = 17, name = "三张", sortid = 3, mult = 4, cardType = CardEnum.CardType.TRIPLE, img = "_3_1", soundid = 17},
    CT_3_2 = {id = 18, name = "三顺", sortid = 3002, mult = 20, cardType = CardEnum.CardType.TRIPLE, img = "_3_2", soundid = 18},
    CT_3_3 = {id = 19, name = "三连三顺", sortid = 3003, mult = 20, cardType = CardEnum.CardType.TRIPLE, img = "_3_3", soundid = 18},
    CT_3_4 = {id = 20, name = "四连三顺", sortid = 3004, mult = 20, cardType = CardEnum.CardType.TRIPLE, img = "_3_4", soundid = 18},
    CT_3_5 = {id = 21, name = "五连三顺", sortid = 3005, mult = 20, cardType = CardEnum.CardType.TRIPLE, img = "_3_5", soundid = 18},
    -- 炸弹
    CT_BOOM_4 = {id = 22, name = "四线炸", sortid = 4004, mult = 10, cardType = CardEnum.CardType.BOOM, img = "_4_4", soundid = 22},
    CT_BOOM_5 = {id = 23, name = "五线炸", sortid = 4105, mult = 20, cardType = CardEnum.CardType.BOOM, img = "_4_5", soundid = 23},
    CT_BOOM_6 = {id = 24, name = "六线炸", sortid = 4106, mult = 30, cardType = CardEnum.CardType.BOOM, img = "_4_6", soundid = 24},
    CT_BOOM_7 = {id = 25, name = "七线炸", sortid = 4207, mult = 50, cardType = CardEnum.CardType.BOOM, img = "_4_7", soundid = 25},
    CT_BOOM_8 = {id = 26, name = "八线炸", sortid = 4208, mult = 60, cardType = CardEnum.CardType.BOOM, img = "_4_8", soundid = 26},
    CT_JOKER_2 = {id = 27, name = "王炸", sortid = 4102, mult = 15, cardType = CardEnum.CardType.BOOM, img = "_5_2", soundid = 27},
    CT_JOKER_3 = {id = 28, name = "三王炸", sortid = 4203, mult = 40, cardType = CardEnum.CardType.BOOM, img = "_5_3", soundid = 28},
    CT_JOKER_4 = {id = 29, name = "天王炸", sortid = 4304, mult = 100, cardType = CardEnum.CardType.BOOM, img = "_5_4", soundid = 29}
}

function CardEnum.getCardTypeInfoByCardTypeID(cardTypeID)
    for _, value in pairs(CardEnum.tagCardTypeID) do
        if value.id == cardTypeID then
            return value
        end
    end
end

return CardEnum
   �/  