local GameDefine = CF.gameClass("GameDefine", CF.gameScriptRootPath .. ".GameBase.Define.GameDefine")

GameDefine.GAME_STEP = {
    GAME_STEP_NONE = 0,
    GAME_STEP_START_GAME = 1, -- 开始游戏
    GAME_STEP_SPECF_CARDS = 2, -- 做手牌
    GAME_STEP_SEND_CARDS = 3, -- 发牌阶段
    GAME_STEP_PLAY_CARDS = 4, -- 出牌阶段
    GAME_STEP_COMPARE_CARDS = 5, -- 比牌阶段(牌摊开)
    GAME_STEP_WIN_LOST = 6, -- 结束阶段(比牌)
    GAME_STEP_TOTAL_RESULT = 7 -- 大结束
}

GameDefine.GAME_WIN_ORDER = {
    FIRSET = 1,
    SECOND = 2,
    THREE = 3
}

GameDefine.GAME_BTNS_TAG_FLAG = {
    BTN_OUTCARD = 1,
    BTN_NOT_OUTCARD = 2,
    BTN_TELL_ME = 3
}

-- 计算类型
GameDefine.tagWinLostType = {
    WIN_LOST_NONE = 0,
    WIN_LOST_SINGLE = 1, -- 单张
    WIN_LOST_DOUBLE = 2, -- 对子
    WIN_LOST_TRIPLE = 3, -- 三张
    WIN_LOST_BOMB = 4, -- 炸弹
    WIN_LOST_COUNT = 5
}

-- 复活状态
GameDefine.tagReviveState = {
    REVIVE_STATE_NONE = 0,
    REVIVE_STATE_LIVE = 1, --正常生存
    REVIVE_STATE_REVIVE = 2, -- 复活中
    REVIVE_STATE_RECHARGING = 3, -- 充值中
    REVIVE_STATE_DIE = 4 -- 死亡
}

-- Power状态
GameDefine.tagPowerState = {
    POWER_STATE_NONE = 0, -- 玩家死亡无状态
    POWER_STATE_CAN_OUT = 1, -- 可以出
    POWER_STATE_HAVE_OUT = 2 -- 已经出了
}

-- 定义结束状态枚举
GameDefine.WinLostStatus = {
    WIN_LOST_STATUS_IN_NONE = 0,
    WIN_LOST_STATUS_IN_PROGRESS = 1, -- 结束中
    WIN_LOST_STATUS_COMPLETED = 2, -- 已结束
    WIN_LOST_STATUS_NOT_STARTED = 3 -- 还未结束
}

GameDefine.GoldUpdateSource = {
    GOLD_UPDATE_SOURCE_NONE = 0,
    GOLD_UPDATE_SOURCE_GAME = 1, -- 游戏内计算
    GOLD_UPDATE_SOURCE_OTHER = 2 -- 其他
}

return GameDefine
