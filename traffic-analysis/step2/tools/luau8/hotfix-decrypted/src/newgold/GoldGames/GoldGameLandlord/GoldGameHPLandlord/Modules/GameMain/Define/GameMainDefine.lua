local GameMainDefine = {}
local GoldSoundConfig = NG.GAME.gameRequire("Config.GoldSoundConfig")

GameMainDefine.MAX_PLAYER = 3

GameMainDefine.SEAT_NONE = -1          --无效的位置

GameMainDefine.PlayerEnum = {
    BOTTOM = 2,
    LEFT = 1,
    RIGHT = 3 ,
}

GameMainDefine.SELF_LOCAL_SEAT = GameMainDefine.PlayerEnum.BOTTOM

GameMainDefine.ActionType = {
    CALL_LANDLORD = 1,--叫地主
    NOT_CALL_LANDLORD = 2,--不叫
    ROB_LANDLORD = 3,--抢地主
    NOT_ROB_LANDLORD = 4,--不抢
    ADD_DOUBLE = 5,--加倍
    NOT_ADD_DOUBLE = 6,--不加倍
    SUPER_ADD_DOUBLE = 7,--超级加倍
    NOT_OUT = 8,--不出
}

GameMainDefine.ENUM_GAME_STEP = {
    GAME_STEP_NONE = 0,
    GAME_STEP_START_GAME = 1,       --开始游戏
    GAME_STEP_SPECF_CARD = 2,       --做牌
    GAME_STEP_TAKE_FIRST = 3,       --抓牌
    GAME_STEP_CALL_BANKER = 4,		--叫主
    GAME_STEP_ROB_BANKER = 5,		--抢主
    GAME_STEP_ADD_BASE = 6,         --加底
    GAME_STEP_CALL_DOUBLE = 7,      --加倍
    GAME_STEP_PLAY_CARD = 8,        --打牌
    GAME_STEP_WIN_LOST = 9,         --结算
    GAME_STEP_END_GAME = 10,         --结束游戏
}

GameMainDefine.POWER_NONE = 0     --空权限

--叫分权限ID
GameMainDefine.ENUM_CALL_POINT = {
	PID_CP_ZERO_POINT = 0x01,	--不叫
	PID_CP_ONE_POINT = 0x02,	--一分
	PID_CP_TWO_POINT = 0x04,	--二分
	PID_CP_THREE_POINT = 0x08	--三分
}

--打牌权限ID
GameMainDefine.ENUM_PLAY_CARD = {
	PID_PC_OPEN_CARD = 0x01,	--明牌
	PID_PC_NOT_PLAY = 0x02,		--不出
	PID_PC_PLAY_CARD = 0x04,	--出牌
}

--叫地主权限ID
GameMainDefine.ENUM_CALL_BANKER = {
	PID_CB_NOT_CALL = 0x01,	--不叫
	PID_CB_CALL_BANKER = 0x02,		--叫地主
}

--抢地主权限ID
GameMainDefine.ENUM_ROB_BANKER = {
	PID_RB_NOT_ROB = 0x01,	--不抢
	PID_RB_ROB_BANKER = 0x02,		--抢地主
}

--加倍权限ID
GameMainDefine.ENUM_ADD_DOUBLE = {
	PID_CD_NOT_DOUBLE = 0x01,	--不加倍
	PID_CD_NORMAL_DOUBLE = 0x02,		--加倍
	PID_CD_SUPER_DOUBLE = 0x04,		--超级加倍
}

-- 俏皮话列表
GameMainDefine.ChatList = {
    "我等的花儿都谢了！",
    "我炸你个桃花朵朵开！",
    "姑娘你真是条汉子！",
    "搏一搏，单车变摩托",
    "炸的好！",
    "就这就这？"
}

-- 与上方俏皮话对应
GameMainDefine.ChatListSound = {
    GoldSoundConfig.huaxie,
    GoldSoundConfig.huakai,
    GoldSoundConfig.hanzi,
    GoldSoundConfig.moto,
    GoldSoundConfig.zhadehao,
    GoldSoundConfig.jiuzhe,
}

GameMainDefine.CardPower = {
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

GameMainDefine.ucCardPower = {
    -- GameMainDefine.CardPower.CP_NONE,
    GameMainDefine.CardPower.CP_A, 
    GameMainDefine.CardPower.CP_2, 
    GameMainDefine.CardPower.CP_3, 
    GameMainDefine.CardPower.CP_4, 
    GameMainDefine.CardPower.CP_5, 
    GameMainDefine.CardPower.CP_6, 
    GameMainDefine.CardPower.CP_7, 
    GameMainDefine.CardPower.CP_8, 
    GameMainDefine.CardPower.CP_9, 
    GameMainDefine.CardPower.CP_10, 
    GameMainDefine.CardPower.CP_J, 
    GameMainDefine.CardPower.CP_Q, 
    GameMainDefine.CardPower.CP_K,
    GameMainDefine.CardPower.CP_A, 
    GameMainDefine.CardPower.CP_2, 
    GameMainDefine.CardPower.CP_3, 
    GameMainDefine.CardPower.CP_4, 
    GameMainDefine.CardPower.CP_5, 
    GameMainDefine.CardPower.CP_6, 
    GameMainDefine.CardPower.CP_7, 
    GameMainDefine.CardPower.CP_8, 
    GameMainDefine.CardPower.CP_9, 
    GameMainDefine.CardPower.CP_10, 
    GameMainDefine.CardPower.CP_J, 
    GameMainDefine.CardPower.CP_Q, 
    GameMainDefine.CardPower.CP_K,
    GameMainDefine.CardPower.CP_A, 
    GameMainDefine.CardPower.CP_2, 
    GameMainDefine.CardPower.CP_3, 
    GameMainDefine.CardPower.CP_4, 
    GameMainDefine.CardPower.CP_5, 
    GameMainDefine.CardPower.CP_6, 
    GameMainDefine.CardPower.CP_7, 
    GameMainDefine.CardPower.CP_8,
    GameMainDefine.CardPower.CP_9, 
    GameMainDefine.CardPower.CP_10, 
    GameMainDefine.CardPower.CP_J, 
    GameMainDefine.CardPower.CP_Q, 
    GameMainDefine.CardPower.CP_K,
    GameMainDefine.CardPower.CP_A, 
    GameMainDefine.CardPower.CP_2, 
    GameMainDefine.CardPower.CP_3, 
    GameMainDefine.CardPower.CP_4, 
    GameMainDefine.CardPower.CP_5, 
    GameMainDefine.CardPower.CP_6, 
    GameMainDefine.CardPower.CP_7, 
    GameMainDefine.CardPower.CP_8, 
    GameMainDefine.CardPower.CP_9, 
    GameMainDefine.CardPower.CP_10, 
    GameMainDefine.CardPower.CP_J, 
    GameMainDefine.CardPower.CP_Q, 
    GameMainDefine.CardPower.CP_K,
    GameMainDefine.CardPower.CP_SJ, 
    GameMainDefine.CardPower.CP_BJ
}

GameMainDefine.CardType = {
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

GameMainDefine.KING_BOOM_NUM = 2;--4张王(天王炸)，2张王(飞机)，0张(没有王可以组成特殊牌型)

-- 牌-花色
GameMainDefine.CardColor  ={
    -- CC_NONE = 0,
    CC_DIAMOND = 1,     -- 方片
    CC_CLUB = 2,        -- 梅花
    CC_HEART = 3,       -- 红心
    CC_SPADE = 4,       -- 黑桃
    CC_SJ = 5,          -- 小王 -- 这两个花色很特殊
    CC_BJ = 6,          -- 大王 -- 这两个花色很特殊
    CC_COUNT = 7,
}

GameMainDefine.ucCardColor = {
    -- GameMainDefine.CardColor.CC_NONE, 
    GameMainDefine.CardColor.CC_DIAMOND, 
    GameMainDefine.CardColor.CC_DIAMOND, 
    GameMainDefine.CardColor.CC_DIAMOND, 
    GameMainDefine.CardColor.CC_DIAMOND, 
    GameMainDefine.CardColor.CC_DIAMOND, 
    GameMainDefine.CardColor.CC_DIAMOND, 
    GameMainDefine.CardColor.CC_DIAMOND, 
    GameMainDefine.CardColor.CC_DIAMOND, 
    GameMainDefine.CardColor.CC_DIAMOND, 
    GameMainDefine.CardColor.CC_DIAMOND, 
    GameMainDefine.CardColor.CC_DIAMOND, 
    GameMainDefine.CardColor.CC_DIAMOND, 
    GameMainDefine.CardColor.CC_DIAMOND,
    GameMainDefine.CardColor.CC_CLUB, 
    GameMainDefine.CardColor.CC_CLUB, 
    GameMainDefine.CardColor.CC_CLUB, 
    GameMainDefine.CardColor.CC_CLUB, 
    GameMainDefine.CardColor.CC_CLUB, 
    GameMainDefine.CardColor.CC_CLUB, 
    GameMainDefine.CardColor.CC_CLUB, 
    GameMainDefine.CardColor.CC_CLUB, 
    GameMainDefine.CardColor.CC_CLUB, 
    GameMainDefine.CardColor.CC_CLUB, 
    GameMainDefine.CardColor.CC_CLUB, 
    GameMainDefine.CardColor.CC_CLUB, 
    GameMainDefine.CardColor.CC_CLUB,        
    GameMainDefine.CardColor.CC_HEART, 
    GameMainDefine.CardColor.CC_HEART, 
    GameMainDefine.CardColor.CC_HEART, 
    GameMainDefine.CardColor.CC_HEART, 
    GameMainDefine.CardColor.CC_HEART, 
    GameMainDefine.CardColor.CC_HEART, 
    GameMainDefine.CardColor.CC_HEART, 
    GameMainDefine.CardColor.CC_HEART, 
    GameMainDefine.CardColor.CC_HEART, 
    GameMainDefine.CardColor.CC_HEART, 
    GameMainDefine.CardColor.CC_HEART, 
    GameMainDefine.CardColor.CC_HEART, 
    GameMainDefine.CardColor.CC_HEART,      
    GameMainDefine.CardColor.CC_SPADE, 
    GameMainDefine.CardColor.CC_SPADE, 
    GameMainDefine.CardColor.CC_SPADE, 
    GameMainDefine.CardColor.CC_SPADE, 
    GameMainDefine.CardColor.CC_SPADE, 
    GameMainDefine.CardColor.CC_SPADE, 
    GameMainDefine.CardColor.CC_SPADE, 
    GameMainDefine.CardColor.CC_SPADE, 
    GameMainDefine.CardColor.CC_SPADE, 
    GameMainDefine.CardColor.CC_SPADE, 
    GameMainDefine.CardColor.CC_SPADE, 
    GameMainDefine.CardColor.CC_SPADE, 
    GameMainDefine.CardColor.CC_SPADE,          
    GameMainDefine.CardColor.CC_SJ, 
    GameMainDefine.CardColor.CC_BJ
}

-- 牌-点数
GameMainDefine.CardValue = {
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

GameMainDefine.ucCardValue = {
    -- GameMainDefine.CardValue.CV_NONE,
    GameMainDefine.CardValue.CV_A, 
    GameMainDefine.CardValue.CV_2, 
    GameMainDefine.CardValue.CV_3, 
    GameMainDefine.CardValue.CV_4, 
    GameMainDefine.CardValue.CV_5,
    GameMainDefine.CardValue.CV_6, 
    GameMainDefine.CardValue.CV_7, 
    GameMainDefine.CardValue.CV_8, 
    GameMainDefine.CardValue.CV_9, 
    GameMainDefine.CardValue.CV_10, 
    GameMainDefine.CardValue.CV_J, 
    GameMainDefine.CardValue.CV_Q, 
    GameMainDefine.CardValue.CV_K,
    GameMainDefine.CardValue.CV_A, 
    GameMainDefine.CardValue.CV_2, 
    GameMainDefine.CardValue.CV_3, 
    GameMainDefine.CardValue.CV_4, 
    GameMainDefine.CardValue.CV_5, 
    GameMainDefine.CardValue.CV_6, 
    GameMainDefine.CardValue.CV_7, 
    GameMainDefine.CardValue.CV_8, 
    GameMainDefine.CardValue.CV_9, 
    GameMainDefine.CardValue.CV_10, 
    GameMainDefine.CardValue.CV_J, 
    GameMainDefine.CardValue.CV_Q, 
    GameMainDefine.CardValue.CV_K,
    GameMainDefine.CardValue.CV_A, 
    GameMainDefine.CardValue.CV_2, 
    GameMainDefine.CardValue.CV_3, 
    GameMainDefine.CardValue.CV_4, 
    GameMainDefine.CardValue.CV_5, 
    GameMainDefine.CardValue.CV_6, 
    GameMainDefine.CardValue.CV_7, 
    GameMainDefine.CardValue.CV_8, 
    GameMainDefine.CardValue.CV_9, 
    GameMainDefine.CardValue.CV_10, 
    GameMainDefine.CardValue.CV_J, 
    GameMainDefine.CardValue.CV_Q, 
    GameMainDefine.CardValue.CV_K,
    GameMainDefine.CardValue.CV_A, 
    GameMainDefine.CardValue.CV_2, 
    GameMainDefine.CardValue.CV_3, 
    GameMainDefine.CardValue.CV_4, 
    GameMainDefine.CardValue.CV_5, 
    GameMainDefine.CardValue.CV_6, 
    GameMainDefine.CardValue.CV_7, 
    GameMainDefine.CardValue.CV_8, 
    GameMainDefine.CardValue.CV_9, 
    GameMainDefine.CardValue.CV_10, 
    GameMainDefine.CardValue.CV_J, 
    GameMainDefine.CardValue.CV_Q, 
    GameMainDefine.CardValue.CV_K,
    GameMainDefine.CardValue.CV_SJ, 
    GameMainDefine.CardValue.CV_BJ
}

return GameMainDefine�-