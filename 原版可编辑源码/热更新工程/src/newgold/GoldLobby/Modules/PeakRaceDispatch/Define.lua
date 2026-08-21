local PeakRaceDispatchDefine = {}

-- 匹配服务错误码
PeakRaceDispatchDefine.CODE = {
    GOLD_SUCCESS = "GOLD_SUCCESS",
    GOLD_FAILED = "GOLD_FAILED",
    GOLD_LOW_LIMIT = "GOLD_LOW_LIMIT",
    GOLD_HIGH_LIMIT = "GOLD_HIGH_LIMIT",
    GOLD_GAMING = "GOLD_GAMING",
    GOLD_QUEUING = "GOLD_QUEUING",
    GOLD_PARAM_ERROR = "GOLD_PARAM_ERROR",
    GOLD_GAME_CONFIG_NOT_FOUND = "GOLD_GAME_CONFIG_NOT_FOUND",
    GOLD_OTHERS_GAMING = "GOLD_OTHERS_GAMING",
    GOLD_BROKE_TIMES_LIMIT = "GOLD_BROKE_TIMES_LIMIT",
    GOLD_BROKE_INTERNAL_LIMIT = "GOLD_BROKE_INTERNAL_LIMIT",
    GOLD_BROKE_SUPPLY = "GOLD_BROKE_SUPPLY",
}

PeakRaceDispatchDefine.LEAVE_ENUM_MSG = {
    GOLD_FAILED = '加入失败，请退出重新加入游戏',
    GOLD_QUEUING = '加入失败,还在队列中',
    GOLD_PARAM_ERROR = '参数错误，请退出重新加入游戏',
    GOLD_GAME_CONFIG_NOT_FOUND = '找不到游戏配置，请退出重新加入游戏',
    GOLD_GAME_MAX = '比赛场对局已达到上限',
    GOLD_GAME_MAX_NO = '没有报名，比赛场进入失败',
    GOLD_GAME_TIME_OUT = '比赛未开始，敬请期待~',
}

-- 四川xyid
PeakRaceDispatchDefine.SC_XY_Defines = {
    NONE = 0,
    RequestStartGameMsg = 1, --msgCmd = c30003
    RequestStartGameMsgAck = 2, --msgCmd = c30004
    GameStartMsg = 4, --msgCmd = c30060
    PlayerOperationNotifyMsg = 5, --msgCmd = c30061
    PlayerTableOperationMsg = 6, --msgCmd = c30062
    VipRoomCloseMsg = 8, --msgCmd = c30200
    GameOverForPokerMsgAck = 30, --msgCmd = c30058
    GameStartForPokerMsg = 31, --msgCmd = c30059
    EnterVipRoomMsg = 32, --msgCmd = c30102
    GameUpdateMsg = 33, --msgCmd = c30007
    NotifyFirstCardEffectMsg = 34, --msgCmd = c30086
    NotifyPlayerOperationMsg = 35, --msgCmd = c36000
    NotifyShangGaMsg = 36, --msgCmd = c30721
    NotifyTableNDaoMsg = 37, --msgCmd = c30087
    PlayerGameOpertaionAckMsg = 38, --msgCmd = c30009
    PlayerGameOpertaionMsg = 39, --msgCmd = c30008
    PlayerGameOverMsg = 40, --msgCmd = c3000c
    PlayerGameOverMsgAck = 41, --msgCmd = c3000d
    PlayerOperationMsgAck = 42, --msgCmd = c36001
    PlayerOpertaionMsg = 43, --msgCmd = c30020
    RecvMsgFromPlayerMsgAck = 44, --msgCmd = c3008b
    SendMsgToPlayersMsg = 45, --msgCmd = c3008a
    ShangGaMsg = 46, --msgCmd = c30722
    VipRoomCloseMsgs = 47, --msgCmd = 0
    SystemNotifyMsg = 50, --msgCmd = c30500
    CalculateMsg = 51, --msgCmd = c30731
    GameOverErQiShiMsgAck = 52, --msgCmd = e00001
    PlayerFanCarAckMsg = 53, --msgCmd = 0
    GameOverForZiPaiMsgAck = 54, --msgCmd = 0
    GameOverInfoAck = 55, --msgCmd = 0
    PlayerNotifyMsg = 56, --msgCmd = 0
}

-- 四川xyid转成cmd
PeakRaceDispatchDefine.SC_XY_TO_CMD = {
    [1] = 12779523,
    [2] = 12779524,
    [4] = 12779616,
    [5] = 12779617,
    [6] = 12779618,
    [8] = 12780032,
    [30] = 12779608,
    [31] = 12779609,
    [32] = 12779778,
    [33] = 12779527,
    [34] = 12779654,
    [35] = 12804096,
    [36] = 12781345,
    [37] = 12779655,
    [38] = 12779529,
    [39] = 12779528,
    [40] = 12779532,
    [41] = 12779533,
    [42] = 12804097,
    [43] = 12779552,
    [44] = 12779659,
    [45] = 12779658,
    [46] = 12781346,
    [50] = 12780800,
    [51] = 12781361,
    [52] = 14680065,
}

PeakRaceDispatchDefine.CMD_TO_PROTO = {
    [12779523] = "RequestStartGameMsg",
    [12779524] = "RequestStartGameMsgAck",
    [12779616] = "GameStartMsg",
    [12779617] = "PlayerOperationNotifyMsg",
    [12779618] = "PlayerTableOperationMsg",
    [12780032] = "VipRoomCloseMsg",
    [12779608] = "GameOverForPokerMsgAck",
    [12779609] = "GameStartForPokerMsg",
    [12779778] = "EnterVipRoomMsg",
    [12779527] = "GameUpdateMsg",
    [12779654] = "NotifyFirstCardEffectMsg",
    [12804096] = "NotifyPlayerOperationMsg",
    [12781345] = "NotifyShangGaMsg",
    [12779655] = "NotifyTableNDaoMsg",
    [12779529] = "PlayerGameOpertaionAckMsg",
    [12779528] = "PlayerGameOpertaionMsg",
    [12779532] = "PlayerGameOverMsg",
    [12779533] = "PlayerGameOverMsgAck",
    [12804097] = "PlayerOperationMsgAck",
    [12779552] = "PlayerOpertaionMsg",
    [12779659] = "RecvMsgFromPlayerMsgAck",
    [12779658] = "SendMsgToPlayersMsg",
    [12781346] = "ShangGaMsg",
    [12780800] = "SystemNotifyMsg",
    [12781361] = "CalculateMsg",
    [14680065] = "GameOverErQiShiMsgAck",
}

-- 安徽xyid
PeakRaceDispatchDefine.AH_XY_Defines = {
    NONE = 0,
    GameStartMsg = 1, --msgCmd = c30060
    InGameSorceChangeMsg = 2, --msgCmd = c30208
    JinHuanGongMsg = 3, --msgCmd = c30230
    MobileCodeMsgAck = 4, --msgCmd = c30054
    NotifyPlayerOperationMsg = 5, --msgCmd = c36000
    PlayerCaiCardsAckMsg = 6, --msgCmd = c30209
    PlayerGameOpertaionAckMsg = 7, --msgCmd = c30009
    PlayerGameOpertaionMsg = 8, --msgCmd = c30008
    PlayerGameOverMsgAck = 9, --msgCmd = c3000d
    PlayerOperationNotifyMsg = 10, --msgCmd = c30061
    PlayerOperationNotifyTuoGuanMsg = 11, --msgCmd = c30170
    PlayerTableOperationMsg = 12, --msgCmd = c30062
    PlayerTableOperationPkLaiZiMsg = 13, --msgCmd = c30169
    PlayerTableOperationPkMsg = 14, --msgCmd = c30069
    RequestStartGameMsgAck = 15, --msgCmd = c30004
    ShowGameFuTeamPosAck = 16, --msgCmd = c30206
    VipRoomCloseMsg = 17, --msgCmd = c30200
    WuHuBaoJingNotifyMsg = 18, --msgCmd = c31034
    VipRoomCloseMsgs = 19, --msgCmd = 0
}

PeakRaceDispatchDefine.AH_XY_TO_CMD = {
    [1] = 12779616,
    [2] = 12780040,
    [3] = 12780080,
    [4] = 12779604,
    [5] = 12804096,
    [6] = 12780041,
    [7] = 12779529,
    [8] = 12779528,
    [9] = 12779533,
    [10] = 12779617,
    [11] = 12779888,
    [12] = 12779618,
    [13] = 12779881,
    [14] = 12779625,
    [15] = 12779524,
    [16] = 12780038,
    [17] = 12780032,
    [18] = 12783668,
}

PeakRaceDispatchDefine.AH_CMD_TO_PROTO = {
    [12779616] = "GameStartMsg",
    [12780040] = "InGameSorceChangeMsg",
    [12780080] = "JinHuanGongMsg",
    [12779604] = "MobileCodeMsgAck",
    [12804096] = "NotifyPlayerOperationMsg",
    [12780041] = "PlayerCaiCardsAckMsg",
    [12779529] = "PlayerGameOpertaionAckMsg",
    [12779528] = "PlayerGameOpertaionMsg",
    [12779533] = "PlayerGameOverMsgAck",
    [12779617] = "PlayerOperationNotifyMsg",
    [12779888] = "PlayerOperationNotifyTuoGuanMsg",
    [12779618] = "PlayerTableOperationMsg",
    [12779881] = "PlayerTableOperationPkLaiZiMsg",
    [12779625] = "PlayerTableOperationPkMsg",
    [12779524] = "RequestStartGameMsgAck",
    [12780038] = "ShowGameFuTeamPosAck",
    [12780032] = "VipRoomCloseMsg",
    [12783668] = "WuHuBaoJingNotifyMsg",
}

return PeakRaceDispatchDefine