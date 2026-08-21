local GoldCommonDefine = {}

-- 升降场
GoldCommonDefine.ChangeLevel = {NONE = -1, UP = 0, DOWN = 1}

GoldCommonDefine.Action = {
    kInvalid = 0,
    kSitdown = 1, -- 坐下
    kStandup = 2, -- 站起
    kReady = 3, -- 房间模块按了开始
    kSeeGame = 4, -- 普通旁观(桌上有人才可旁观)
    kChange2Start = 5, -- 桌子里面按了开始(只有玩家原来状态为 US_START或者US_SEEING，才可以转换)
    kChange2SeeGame = 6, -- 坐着的变成旁观(只有玩家原来状态为 US_START或者US_SEEING，才可以转换)
    kChangeSeat = 7, -- 换座位(只有玩家原来状态为 US_SITDOWN或者US_READY，才可以转换)
    kLeaveRoom = 8, -- 离开房间
    kSeeGame2 = 9 -- 新增旁观(空桌也可旁观)
}

GoldCommonDefine.RespJoinFlag = {
    kSuccess = 0, --
    kShowMessage = 1,
    kReconnectNotInRoom = 2,
    kReconnectInOtherRoom = 3,
    kReenterNotAllowed = 4
}

return GoldCommonDefine
