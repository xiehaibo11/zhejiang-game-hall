local GameDefine = {}

GameDefine.SHARE_SELECT = {
    URL = 1,
    TEXT = 2,
    PIC = 3,
}

GameDefine.LOCAL_SEAT = {
    NONE    = 0,
    LEFT    = 1,
    BOTTOM  = 2,
    RIGHT   = 3,    
    TOP     = 4,   
}

GameDefine.ENUM_PLAYER_ACT = {
    CHANGESEAT = 1,
    SITDOWNTOSTART = 2,
    SITDOEM = 3,
    CHANGETOSTART = 5,
}

GameDefine.DISMISS_TYPE = {
    SO = 0,
    GP = 1,  
}

--钱包类型
GameDefine.BURSETYPE = {
    BurseTypeNotUse = 0,  --不使用
    User = 1,             --用户道具
    Tea = 2,              --比赛场道具
    AgentUser = 3,        --用户用户道具
    TeaVirtual = 4,       --比赛场虚拟道具
    Agent = 5,            --用户卡
    UserTime = 6,         --时效道具 有个数属性
    UserTimeNoCount = 7,  --时效道具 无个数属性
    TeaTime = 8,          --比赛场时效道具 有个数属性
    TeaTimeNoCount = 9,   --比赛场时效道具 无个数属性
}

--[[
    1.预约超过30分钟自动取消，需要重新预约
    2.大结束的时候需要请求 OPTS_TYPE_DEL = 2; // 清除整个
    3.如果玩家离开房间（不是返回大厅），需要调用 OPTS_TYPE_REM = 3; // 清除单个玩家
]]
-- 预洗牌类型
GameDefine.PRE_SHUFFLE_OPT = {
    OPTS_TYPE_GET = 0, -- 获取
    OPTS_TYPE_SET = 1, -- 设置
    OPTS_TYPE_DEL = 2, -- 清除整个
    OPTS_TYPE_REM = 3, -- 清除单个玩家
    OPTS_TYPE_SET_CHANGE = 4 -- 设置换牌 新增
}

GameDefine.SHUFFLE_SHOW_TYPE = {
    QUAN = 1, --洗牌券
    DIAMOND = 2, --钻石
    ROOMCARD = 3, --房卡
    DIAMOND_NOT_ENOUGH = 4, --钻石不足
}

GameDefine.PRE_SHUFFLE_ID = 214     -- 洗牌转发给其他人
GameDefine.PRE_SHUFFLE_ID_PLAYBACK = 215 --洗牌回放转发协议ID
GameDefine.QING_SHEN_BROADCAST_ID = 216 -- 请神同桌广播转发协议ID

return GameDefine