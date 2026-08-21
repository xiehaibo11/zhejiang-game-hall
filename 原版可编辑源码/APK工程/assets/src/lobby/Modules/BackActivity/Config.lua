local BackActConfig = {}

BackActConfig.TaskIdMap = {
    [5303] = "BackActivityInit",
    [5304] = "BackActivityShowAward",
    [5305] = "BackActivityShowIcon",
    [5306] = "BackActivityFlushInfo",
}

BackActConfig.TaskPoolConfigMap = {
    ["login"] = "BackActShowLoginPoolAward",
    ["recharge"] = "BackActShowRechargePoolAward",
    ["play"] = "BackActShowPlayPoolAward",
    ["lucky"] = "BackActShowLuckyPoolAward",
}

BackActConfig.isShowArea = {
    [900038] = true,  -- 丽水
    [900037] = true,  -- 温茶
    [900017] = true,  -- 熟客
    [900021] = false, -- 杭麻
    [900023] = false, -- 台州
    [900043] = false, -- 舟山
    [900008] = false, -- 湖州
    [900003] = false, -- 衢州
    [900036] = false, -- 瑞安
    [900020] = false, -- 金华
    [900025] = false, -- 宝宝
    [900031] = false, -- 乐清
    [900007] = false, -- 绍兴
    [900039] = false, -- 青田
    [900006] = false, -- 宁波
    [900029] = false, -- 余姚
    [40165]  = false, -- 嘉兴
}

return BackActConfig