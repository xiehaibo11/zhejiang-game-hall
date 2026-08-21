local LuckyTaskDefine = {}

-- 活动状态
LuckyTaskDefine.ContentStatus = {AC_NULL = 0, AC_BEFORE = 1, AC_NEARLY = 2, AC_NEW = 3, AC_CAN_DRAW = 4, AC_COMPLETE = 5}

LuckyTaskDefine.JumpType = {AC_JUMPTYPE_NULL = 0, AC_JUMPTYPE_LOBBY = 1, AC_JUMPTYPE_TEA = 2, AC_JUMPTYPE_TANL = 3, AC_JUMPTYPE_CHARGE = 4, AC_JUMPTYPE_SHARE = 5, AC_JUMPTYPE_OTHER = 6, AC_JUMPTYPE_COIN = 7, AC_JUMPTYPE_GAME = 10, AC_JUMPTYPE_LOGIN = 999}

LuckyTaskDefine.ENUM_LUCKY_TASK_TYPE = {SINGLE = 0, MULTI = 1}

LuckyTaskDefine.ENUM_LUCKY_TIME_TYPE = {START = 0, DRAW = 1, END = 2}

LuckyTaskDefine.ENUM_LUCKY_TASK_STATE = {
    UNDERWAY = 0, -- 进行中
    AVAILABLE = 1, -- 可领取
    RECEIVED = 2, -- 已领取
    GO = 3 -- 去完成
}

return LuckyTaskDefine
�