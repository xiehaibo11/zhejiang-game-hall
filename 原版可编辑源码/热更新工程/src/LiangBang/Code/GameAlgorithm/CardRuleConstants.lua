local GameData = {}

GameData.CardsType =
    {
        CT_0_JUNKO_0_CONTINUOUS = 0,

        CT_1_JUNKO_0_CONTINUOUS = 100,
        CT_1_JUNKO_1_CONTINUOUS = 101, --一张，即1顺1连
        CT_1_JUNKO_5_CONTINUOUS = 105, --一张，即1顺5连   34567
        CT_1_JUNKO_6_CONTINUOUS = 106,
        CT_1_JUNKO_7_CONTINUOUS = 107,
        CT_1_JUNKO_8_CONTINUOUS = 108,
        CT_1_JUNKO_9_CONTINUOUS = 109,
        CT_1_JUNKO_10_CONTINUOUS = 110,
        CT_1_JUNKO_11_CONTINUOUS = 111,
        CT_1_JUNKO_12_CONTINUOUS = 112,

        CT_2_JUNKO_0_CONTINUOUS = 200,
        CT_2_JUNKO_1_CONTINUOUS = 201,
        CT_2_JUNKO_3_CONTINUOUS = 203, 
        CT_2_JUNKO_4_CONTINUOUS = 204,
        CT_2_JUNKO_5_CONTINUOUS = 205,
        CT_2_JUNKO_6_CONTINUOUS = 206,
        CT_2_JUNKO_7_CONTINUOUS = 207,
        CT_2_JUNKO_8_CONTINUOUS = 208,
        CT_2_JUNKO_9_CONTINUOUS = 209,
        CT_2_JUNKO_10_CONTINUOUS = 210,
        CT_2_JUNKO_11_CONTINUOUS = 211,
        CT_2_JUNKO_12_CONTINUOUS = 212,

        CT_3_JUNKO_0_CONTINUOUS = 300,
        CT_3_JUNKO_1_CONTINUOUS = 301,
        CT_3_JUNKO_3_CONTINUOUS = 303,
        CT_3_JUNKO_4_CONTINUOUS = 304,
        CT_3_JUNKO_5_CONTINUOUS = 305,
        CT_3_JUNKO_6_CONTINUOUS = 306,
        CT_3_JUNKO_7_CONTINUOUS = 307,
        CT_3_JUNKO_8_CONTINUOUS = 308,

        --4顺开始都是炸弹
        CT_4_JUNKO_0_CONTINUOUS = 400,
        CT_4_JUNKO_1_CONTINUOUS = 401,
        CT_4_JUNKO_3_CONTINUOUS = 403,
        CT_4_JUNKO_4_CONTINUOUS = 404,
        CT_4_JUNKO_5_CONTINUOUS = 405,
        CT_4_JUNKO_6_CONTINUOUS = 406,

        CT_5_JUNKO_0_CONTINUOUS = 500,
        CT_5_JUNKO_1_CONTINUOUS = 501,
        CT_5_JUNKO_3_CONTINUOUS = 503,
        CT_5_JUNKO_4_CONTINUOUS = 504,
        CT_5_JUNKO_5_CONTINUOUS = 505,

        CT_6_JUNKO_0_CONTINUOUS = 600,
        CT_6_JUNKO_1_CONTINUOUS = 601,
        CT_6_JUNKO_2_CONTINUOUS = 602,
        CT_6_JUNKO_3_CONTINUOUS = 603,
        CT_6_JUNKO_4_CONTINUOUS = 604,

        CT_7_JUNKO_0_CONTINUOUS = 700,
        CT_7_JUNKO_1_CONTINUOUS = 701,
        CT_7_JUNKO_2_CONTINUOUS = 702,
        CT_7_JUNKO_3_CONTINUOUS = 703,

        CT_8_JUNKO_0_CONTINUOUS = 800,
        CT_8_JUNKO_1_CONTINUOUS = 801,
        CT_8_JUNKO_2_CONTINUOUS = 802,
        CT_8_JUNKO_3_CONTINUOUS = 803,

        CT_9_JUNKO_0_CONTINUOUS = 900,
        CT_9_JUNKO_1_CONTINUOUS = 901,
        CT_9_JUNKO_2_CONTINUOUS = 902,

        CT_10_JUNKO_0_CONTINUOUS = 1000,
        CT_10_JUNKO_1_CONTINUOUS = 1001,
        CT_10_JUNKO_2_CONTINUOUS = 1002,

        CT_11_JUNKO_0_CONTINUOUS = 1100,
        CT_11_JUNKO_1_CONTINUOUS = 1101,
        CT_11_JUNKO_2_CONTINUOUS = 1102,

        CT_12_JUNKO_0_CONTINUOUS = 1200,
        CT_12_JUNKO_1_CONTINUOUS = 1201,
        CT_12_JUNKO_2_CONTINUOUS = 1202,

        CT_0_KING = 10000,
        CT_3_KING = 10006,--三个王
        CT_4_KING= 10007,
    --[[        ]]
    };

GameData.cardColours = {
    CC_NONE1  = 0,
    CC_DIAMOND  = 1,      --方块
    CC_CLUB   = 2,        --梅花
    CC_HEART  = 3,        --红桃
    CC_SPADE   = 4,       --黑桃
    CC_Joker   = 5,       --王
    CC_COUNT = 7        --花色数量
} 

GameData.cardNums = {
    CV_NONE = 0,
    CV_A    = 1,
    CV_2    = 2,
    CV_3    = 3,
    CV_4    = 4,
    CV_5    = 5,
    CV_6    = 6,
    CV_7    = 7,
    CV_8    = 8,
    CV_9    = 9,
    CV_10   = 10,
    CV_J    = 11,
    CV_Q    = 12,
    CV_K    = 13,
    CV_SJ    = 14,    --小王
    CV_BJ    = 15,    --大王
    CV_COUNT    = 16,
}

GameData.cardPower = {
    CP_NONE1 = 0,--重定义
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
    CP_2 = 15 ,
    CP_SJ = 16,  -- small joker
    CP_BJ = 17,      -- big joker
    CP_COUNT = 18,

    CP_2_JD = 19,
    CP_SJ_JD = 21,
    CP_BJ_JD = 22,
}

GameData.cards = {
    CV_NONE     = 0,
    CV_FANG_A   = 1,
    CV_FANG_2   = 2,
    CV_FANG_3   = 3,
    CV_FANG_4   = 4,
    CV_FANG_5   = 5,
    CV_FANG_6   = 6,
    CV_FANG_7   = 7,
    CV_FANG_8   = 8,
    CV_FANG_9   = 9,
    CV_FANG_10  = 10,
    CV_FANG_J   = 11,
    CV_FANG_Q   = 12,
    CV_FANG_K   = 13,
    CV_MEI_A    = 14,
    CV_MEI_2    = 15,
    CV_MEI_3    = 16,
    CV_MEI_4    = 17,
    CV_MEI_5    = 18,
    CV_MEI_6    = 19,
    CV_MEI_7    = 20,
    CV_MEI_8    = 21,
    CV_MEI_9    = 22,
    CV_MEI_10   = 23,
    CV_MEI_J    = 24,
    CV_MEI_Q    = 25,
    CV_MEI_K    = 26,
    CV_HONG_A   = 27,
    CV_HONG_2   = 28,
    CV_HONG_3   = 29,
    CV_HONG_4   = 30,
    CV_HONG_5   = 31,
    CV_HONG_6   = 32,
    CV_HONG_7   = 33,
    CV_HONG_8   = 34,
    CV_HONG_9   = 35,
    CV_HONG_10  = 36,
    CV_HONG_J   = 37,
    CV_HONG_Q   = 38,
    CV_HONG_K   = 39,
    CV_HEI_A    = 40,
    CV_HEI_2    = 41,
    CV_HEI_3    = 42,
    CV_HEI_4    = 43,
    CV_HEI_5    = 44,
    CV_HEI_6    = 45,
    CV_HEI_7    = 46,
    CV_HEI_8    = 47,
    CV_HEI_9    = 48,
    CV_HEI_10   = 49,
    CV_HEI_J    = 50,
    CV_HEI_Q    = 51,
    CV_HEI_K    = 52,
    CV_WANG_F   = 53,
    CV_WANG_Z   = 54,
    CV_BACK     = 55,
    CV_FACE     = 56,
    CV_JOKER    = 57,   
}

GameData.CardsGroup = {
    Cards = {},
    tType = 0,
    tPower = 0,

    new = function (self, o)
        local o = o or {}
        GameData.CardsGroup.Cards = {}
        GameData.CardsGroup.tType = 0
        GameData.CardsGroup.tPower = 0

        setmetatable(o, {__index = GameData.CardsGroup})
        return o
    end

}

return GameData
