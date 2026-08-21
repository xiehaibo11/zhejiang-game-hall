local PeakRaceDefine = {}

PeakRaceDefine.ROOM_MODE = {
    MATCH = 30, --巅峰赛房间类型
    GOLD_DISPATCH_QUEUE = 201, --队列模式金币场
}

PeakRaceDefine.RankType = {
    PEAK_RANK_TEAM_SCORE_TYPE = "PEAK_RANK_TEAM_SCORE_TYPE", -- 团队积分榜
    PEAK_RANK_SELF_SCORE_TYPE = "PEAK_RANK_SELF_SCORE_TYPE", -- 个人积分榜
    PEAK_RANK_SELF_WIN_RATE_TYPE = "PEAK_RANK_SELF_WIN_RATE_TYPE", -- 个人胜率榜
    PEAK_RANK_SELF_CHAMPION_TYPE = "PEAK_RANK_SELF_CHAMPION_TYPE", -- 个人冠军榜
    PEAK_RANK_SELF_ACTIVE_TYPE = "PEAK_RANK_SELF_ACTIVE_TYPE", -- 个人活跃榜
}

PeakRaceDefine.RankType_Enum = {
    PEAK_RANK_TEAM_SCORE_TYPE = 0, -- 团队积分榜
    PEAK_RANK_SELF_SCORE_TYPE = 1, -- 个人积分榜
    PEAK_RANK_SELF_WIN_RATE_TYPE = 2, -- 个人胜率榜
    PEAK_RANK_SELF_CHAMPION_TYPE = 3, -- 个人冠军榜
    PEAK_RANK_SELF_ACTIVE_TYPE = 4, -- 个人活跃榜
}

PeakRaceDefine.SeasonType = {
    PEAK_SEASON_LAST_SEASON_TYPE = 0,
    PEAK_SEASON_NOW_SEASON_TYPE = 1,
}

PeakRaceDefine.MatchStatus = {
    UnMatch = "UnMatch", --尚未开赛
    UnBaoMing = "UnBaoMing", --已开赛未报名
    AlreadyBaoMing = "AlreadyBaoMing", --已开赛已报名
    NotPlay = "NotPlay", --已开赛已报名未处于玩法开放时间
    GameEnd = "GameEnd", --已结束未报名
    GameEndBaoMing = "GameEndBaoMing", --已结束已报名
}

-- 报名错误码
PeakRaceDefine.MATCH_APPLY_ERRCODE = {
    MatchAlreadyApply = 10017, --已经报名
    MatchNotTicket = 10018, --没有门票 没有资格
    MatchLeaderFailed = 10019, --报名失败，领队仅能代表自己的团队进行参赛
    MatchNotStart = 10020, --不在报名时间内
}

return PeakRaceDefine�