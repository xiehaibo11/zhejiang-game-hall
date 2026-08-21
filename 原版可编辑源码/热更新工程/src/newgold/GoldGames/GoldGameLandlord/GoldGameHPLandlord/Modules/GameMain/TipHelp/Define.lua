local Define = {}

--table.concat翻译有问题
--AI偶尔会改下标
--table.slice翻译会有问题
--AI偶尔会调用不存在的方法
--排序函数翻译会有问题
--数组长度翻译有问题
-- newgold.GoldGames.GoldGameLandlord.GoldGameHPLandlord.Modules.GameMain.TipHelp


Define.CardPower = {
    -- CP_NONE = 0,
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
    CP_BJ = 17,
    CP_COUNT = 18,

    -- CP_2 = 19,
    -- CP_SJ = 21,
    -- CP_BJ = 22,
    -- CP_COUNT = 23,
}

Define.ucCardPower = {
    -- Define.CardPower.CP_NONE,
    Define.CardPower.CP_A, 
    Define.CardPower.CP_2, 
    Define.CardPower.CP_3, 
    Define.CardPower.CP_4, 
    Define.CardPower.CP_5, 
    Define.CardPower.CP_6, 
    Define.CardPower.CP_7, 
    Define.CardPower.CP_8, 
    Define.CardPower.CP_9, 
    Define.CardPower.CP_10, 
    Define.CardPower.CP_J, 
    Define.CardPower.CP_Q, 
    Define.CardPower.CP_K,
    Define.CardPower.CP_A, 
    Define.CardPower.CP_2, 
    Define.CardPower.CP_3, 
    Define.CardPower.CP_4, 
    Define.CardPower.CP_5, 
    Define.CardPower.CP_6, 
    Define.CardPower.CP_7, 
    Define.CardPower.CP_8, 
    Define.CardPower.CP_9, 
    Define.CardPower.CP_10, 
    Define.CardPower.CP_J, 
    Define.CardPower.CP_Q, 
    Define.CardPower.CP_K,
    Define.CardPower.CP_A, 
    Define.CardPower.CP_2, 
    Define.CardPower.CP_3, 
    Define.CardPower.CP_4, 
    Define.CardPower.CP_5, 
    Define.CardPower.CP_6, 
    Define.CardPower.CP_7, 
    Define.CardPower.CP_8,
    Define.CardPower.CP_9, 
    Define.CardPower.CP_10, 
    Define.CardPower.CP_J, 
    Define.CardPower.CP_Q, 
    Define.CardPower.CP_K,
    Define.CardPower.CP_A, 
    Define.CardPower.CP_2, 
    Define.CardPower.CP_3, 
    Define.CardPower.CP_4, 
    Define.CardPower.CP_5, 
    Define.CardPower.CP_6, 
    Define.CardPower.CP_7, 
    Define.CardPower.CP_8, 
    Define.CardPower.CP_9, 
    Define.CardPower.CP_10, 
    Define.CardPower.CP_J, 
    Define.CardPower.CP_Q, 
    Define.CardPower.CP_K,
    Define.CardPower.CP_SJ, 
    Define.CardPower.CP_BJ
}

Define.CardType = {
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
    CTID_ER_SHUN    = 10,     --双顺
    CTID_SAN_SHUN   = 11,     --三顺
    CTID_SI_SHUN    = 12,     --四顺                x
    CTID_WU_SHUN    = 13,     --五顺                x
    CTID_LIU_SHUN   = 14,     --六顺                x
    CTID_QI_SHUN    = 15,     --七顺                x
    CTID_BA_SHUN    = 16,     --八顺                x
    CTID_HUO_JIAN   = 17,     --火箭                x
    CTID_FEI_JI     = 18,    --飞机带翅膀（444 555 77 99）(蝴蝶也算飞机带翅膀 444 555 666  88 99 1010，三顺是连的，对子也是连队)
    CTID_SAN_DAI_YI = 19,    --三带一               x
    CTID_SI_DAI_ER = 20,    --四带二张              x

    CTID_SAN_DAI_ER = 21,	-- 三带二张(三带对子)			
	CTID_SI_DAI_ER_DUI = 22,-- 四带二对(四带二个对)		

    CTID_COUNT      = 21,    --                     x
    CTID_USER       = 100,  --用户自定义番种         x
    -- CTID_SAN_DAI_ER = 101,  --三带二
    CTID_TIAN_WANG  = 103   --天王炸弹
} 

Define.KING_BOOM_NUM = 2;--4张王(天王炸)，2张王(飞机)，0张(没有王可以组成特殊牌型)

-- 牌-花色
Define.CardColor  ={
    -- CC_NONE = 0,
    CC_DIAMOND = 1,     -- 方片
    CC_CLUB = 2,        -- 梅花
    CC_HEART = 3,       -- 红心
    CC_SPADE = 4,       -- 黑桃
    CC_SJ = 5,          -- 小王 -- 这两个花色很特殊
    CC_BJ = 6,          -- 大王 -- 这两个花色很特殊
    CC_COUNT = 7,
}

Define.ucCardColor = {
    -- Define.CardColor.CC_NONE, 
    Define.CardColor.CC_DIAMOND, 
    Define.CardColor.CC_DIAMOND, 
    Define.CardColor.CC_DIAMOND, 
    Define.CardColor.CC_DIAMOND, 
    Define.CardColor.CC_DIAMOND, 
    Define.CardColor.CC_DIAMOND, 
    Define.CardColor.CC_DIAMOND, 
    Define.CardColor.CC_DIAMOND, 
    Define.CardColor.CC_DIAMOND, 
    Define.CardColor.CC_DIAMOND, 
    Define.CardColor.CC_DIAMOND, 
    Define.CardColor.CC_DIAMOND, 
    Define.CardColor.CC_DIAMOND,
    Define.CardColor.CC_CLUB, 
    Define.CardColor.CC_CLUB, 
    Define.CardColor.CC_CLUB, 
    Define.CardColor.CC_CLUB, 
    Define.CardColor.CC_CLUB, 
    Define.CardColor.CC_CLUB, 
    Define.CardColor.CC_CLUB, 
    Define.CardColor.CC_CLUB, 
    Define.CardColor.CC_CLUB, 
    Define.CardColor.CC_CLUB, 
    Define.CardColor.CC_CLUB, 
    Define.CardColor.CC_CLUB, 
    Define.CardColor.CC_CLUB,        
    Define.CardColor.CC_HEART, 
    Define.CardColor.CC_HEART, 
    Define.CardColor.CC_HEART, 
    Define.CardColor.CC_HEART, 
    Define.CardColor.CC_HEART, 
    Define.CardColor.CC_HEART, 
    Define.CardColor.CC_HEART, 
    Define.CardColor.CC_HEART, 
    Define.CardColor.CC_HEART, 
    Define.CardColor.CC_HEART, 
    Define.CardColor.CC_HEART, 
    Define.CardColor.CC_HEART, 
    Define.CardColor.CC_HEART,      
    Define.CardColor.CC_SPADE, 
    Define.CardColor.CC_SPADE, 
    Define.CardColor.CC_SPADE, 
    Define.CardColor.CC_SPADE, 
    Define.CardColor.CC_SPADE, 
    Define.CardColor.CC_SPADE, 
    Define.CardColor.CC_SPADE, 
    Define.CardColor.CC_SPADE, 
    Define.CardColor.CC_SPADE, 
    Define.CardColor.CC_SPADE, 
    Define.CardColor.CC_SPADE, 
    Define.CardColor.CC_SPADE, 
    Define.CardColor.CC_SPADE,          
    Define.CardColor.CC_SJ, 
    Define.CardColor.CC_BJ
}

-- 牌-点数
Define.CardValue = {
    -- CV_NONE = 0,
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
    CV_BJ = 15,
    CV_COUNT = 16
}

Define.ucCardValue = {
    -- Define.CardValue.CV_NONE,
    Define.CardValue.CV_A, 
    Define.CardValue.CV_2, 
    Define.CardValue.CV_3, 
    Define.CardValue.CV_4, 
    Define.CardValue.CV_5,
    Define.CardValue.CV_6, 
    Define.CardValue.CV_7, 
    Define.CardValue.CV_8, 
    Define.CardValue.CV_9, 
    Define.CardValue.CV_10, 
    Define.CardValue.CV_J, 
    Define.CardValue.CV_Q, 
    Define.CardValue.CV_K,
    Define.CardValue.CV_A, 
    Define.CardValue.CV_2, 
    Define.CardValue.CV_3, 
    Define.CardValue.CV_4, 
    Define.CardValue.CV_5, 
    Define.CardValue.CV_6, 
    Define.CardValue.CV_7, 
    Define.CardValue.CV_8, 
    Define.CardValue.CV_9, 
    Define.CardValue.CV_10, 
    Define.CardValue.CV_J, 
    Define.CardValue.CV_Q, 
    Define.CardValue.CV_K,
    Define.CardValue.CV_A, 
    Define.CardValue.CV_2, 
    Define.CardValue.CV_3, 
    Define.CardValue.CV_4, 
    Define.CardValue.CV_5, 
    Define.CardValue.CV_6, 
    Define.CardValue.CV_7, 
    Define.CardValue.CV_8, 
    Define.CardValue.CV_9, 
    Define.CardValue.CV_10, 
    Define.CardValue.CV_J, 
    Define.CardValue.CV_Q, 
    Define.CardValue.CV_K,
    Define.CardValue.CV_A, 
    Define.CardValue.CV_2, 
    Define.CardValue.CV_3, 
    Define.CardValue.CV_4, 
    Define.CardValue.CV_5, 
    Define.CardValue.CV_6, 
    Define.CardValue.CV_7, 
    Define.CardValue.CV_8, 
    Define.CardValue.CV_9, 
    Define.CardValue.CV_10, 
    Define.CardValue.CV_J, 
    Define.CardValue.CV_Q, 
    Define.CardValue.CV_K,
    Define.CardValue.CV_SJ, 
    Define.CardValue.CV_BJ
}

Define.CardTypeBombWeight = 100
-- 定义各牌型对应的权重值
Define.CardTypeWeight = {}
Define.CardTypeWeight[Define.CardType.CTID_YI_ZHANG] = 1
Define.CardTypeWeight[Define.CardType.CTID_ER_ZHANG] = 2
Define.CardTypeWeight[Define.CardType.CTID_SAN_ZHANG] = 3
Define.CardTypeWeight[Define.CardType.CTID_YI_SHUN] = 10
Define.CardTypeWeight[Define.CardType.CTID_ER_SHUN] = 11
Define.CardTypeWeight[Define.CardType.CTID_SAN_SHUN] = 12
Define.CardTypeWeight[Define.CardType.CTID_SAN_DAI_YI] = 20 --三带一 
Define.CardTypeWeight[Define.CardType.CTID_SAN_DAI_ER] = 21 -- 三带二(三带对子)    
Define.CardTypeWeight[Define.CardType.CTID_SI_DAI_ER] = 22 --四带二
Define.CardTypeWeight[Define.CardType.CTID_SI_DAI_ER_DUI] = 23-- 四带二(四带二个对)
Define.CardTypeWeight[Define.CardType.CTID_FEI_JI] = 30
Define.CardTypeWeight[Define.CardType.CTID_SI_ZHANG] = 110 -- 100以下的不能互压
Define.CardTypeWeight[Define.CardType.CTID_WU_ZHANG] = 120
Define.CardTypeWeight[Define.CardType.CTID_LIU_ZHANG] = 130
Define.CardTypeWeight[Define.CardType.CTID_QI_ZHANG] = 140
Define.CardTypeWeight[Define.CardType.CTID_BA_ZHANG] = 150
Define.CardTypeWeight[Define.CardType.CTID_TIAN_WANG] = 180
Define.CardTypeWeight[Define.CardType.CTID_HUO_JIAN] = 190
Define.CardTypeWeight[Define.CardType.CTID_SI_SHUN] = 200


return Define