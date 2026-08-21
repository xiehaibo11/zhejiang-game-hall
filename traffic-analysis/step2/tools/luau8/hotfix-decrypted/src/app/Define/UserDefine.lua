local UserDefine = {}

UserDefine.USER_TAG = {
    ZHE_JIANG_ANDROID   = 1,    -- 浙江包玩家—安卓
    ZHE_JIANG_IOS       = 2,    -- 浙江包玩家—IOS
    QIYE_IOS            = 3,    -- 企业包玩家
    ANDROID             = 4,    -- 安卓包玩家
    SARI_NEWLY_ADDED    = 5,    -- 疫情新增玩家

	LOW_ACTIVE_COME_BACK = 6,   -- 低活跃回流
    NOT_ACTIVE_COME_BACK = 7,   -- 不活跃回流
    POTENTIAL_LOSS_COME_BACK = 8,-- 潜在流失回流
    LOSS_COME_BACK = 9,			 -- 流失回流
    
    LOSS_LOW_ACTIVE = 10,		 -- 低活跃玩家
    LOSS_NOT_ACTIVE = 11,        --不活跃玩家
    LOSS_POTENTIAL_LOSS = 12,    --潜在流失玩家
    LOSS_USER      =13,          --流失玩家

	ONLY_LOBBY_USER     = 14,   -- 仅大厅玩家
    TEAHOUSE_USER       = 15,   -- 比赛场玩家
    BOXROOM_USER        = 16,   -- 包厢玩家
    GOLDROOM_USER       = 17,   -- 金币玩家
    MATCHROOM_USER      = 18,
    
    NO_GAMEPAN_USER     = 19,   -- 无盘玩家
    LIGHT_GAMEPAN_USER  = 20,   -- 轻盘玩家
    MIDDLE_GAMEPAN_USER = 21,   -- 中盘玩家
    HEAVY_GAMEDATA_USER = 22,   -- 重盘玩家
    
    NO_CHANGCI_USER     = 23,     --无场玩家
    MILD_CHANGCI_USER   = 24,     --轻场玩家
    MOD_CHANGCI_USER    = 25,     --中场玩家
    SEVERE_CHANGCI_USER = 26,     --重场玩家

    NO_PAY_USER         = 27,     --无充值玩家
    MILD_PAY_USER       = 28,     --轻度充值玩家
    MOD_PAY_USER        = 29,     --中度充值玩家
    SEVERE_PAY_USER     = 30,     --重度充值玩家
    
    APPPAY_USER         = 31,     --游戏内购
    FREECARD_USER       = 32,     --系统赠卡
    QRSHOP_USER         = 33,
    AGENTTRANS_USER     = 34,     --用户后台划卡
    
    AGENTTEA_USER       = 35,     --用户比赛场玩家
    AGENTBOXPAY_USER    = 36,     --用户包厢玩家-购卡
    AGENTBOXFREE_USER   = 37,     --用户包厢玩家-陪玩
    APPPAYCARD_USER     = 38,     --游戏内购玩家-购卡
    APPPAYCARD_PLAYWITH_USER = 39,--游戏内购玩家-陪玩
    FREE_USER           = 40      --免费玩家
}

return UserDefine�