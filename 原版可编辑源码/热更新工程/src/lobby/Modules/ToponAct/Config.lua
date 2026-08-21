local ToponActConfig = {}

-- webType定义
ToponActConfig.DailySign    = 1
ToponActConfig.LuckyDraw    = 2
ToponActConfig.PhoneFee     = 3
ToponActConfig.BreakGold    = 4
ToponActConfig.GoldWinLost  = 5
ToponActConfig.GoldPhoneFee = 6
ToponActConfig.LobbyWait    = 7
ToponActConfig.GoldBanner   = 8
ToponActConfig.SeeAdvertisement   = 9

--//1: 签到 2：双倍签到 3:补签 4：翻倍 5:累计签到
ToponActConfig.SIGN_CONFIG = {
    SIGN = 1001,
    DOUBLE = 1002,
    READ_AD = 1003,
}

-- 各区开关配置
ToponActConfig.IS_OPEN = {
    [900038] = true, -- 丽水
    [900037] = true, -- 温茶
    [900017] = true, -- 熟客
    [900021] = true, -- 杭麻
    [900023] = true, -- 台州
    [900043] = true, -- 舟山
    [900008] = true, -- 湖州
    [900003] = true, -- 衢州
    [900036] = true, -- 瑞安
    [900020] = true, -- 金华
    [900025] = true, -- 宝宝
    [900031] = true, -- 乐清
    [900007] = true, -- 绍兴
    [900039] = true, -- 青田
    [900006] = true, -- 宁波
    [900029] = true, -- 余姚
    [40165]  = true, -- 嘉兴
    [900046] = true,
}

-- 大厅无操作弹窗时间配置
ToponActConfig.STOP_TIME = 30      -- 15min 后触发

-- 活动type映射
ToponActConfig.ACT_TYPE = {
    [ToponActConfig.DailySign]       = "initDailySignInfo",    -- 签到
    [ToponActConfig.LobbyWait]       = "initLobbyWaitInfo",    -- 大厅无操作弹窗
    [ToponActConfig.PhoneFee]        = "initPhoneFeeInfo",     -- 大厅话费抽奖
    [ToponActConfig.LuckyDraw]       = "initLuckyDrawInfo",    -- 幸运抽奖
    [ToponActConfig.BreakGold]       = "initBreakGoldInfo",    -- 金币破产
    [ToponActConfig.GoldBanner]      = "initGoldBannerInfo",    -- 小结束banner
    [ToponActConfig.GoldWinLost]     = "initGoldWinLostInfo",    -- 金币场胜负抽奖
    [ToponActConfig.GoldPhoneFee]    = "initGoldPhoneFeeInfo",    -- 金币场话费抽奖
}

ToponActConfig.SHOW_ACT_NAME = {
    [ToponActConfig.DailySign]       = "ToponDailySignView",    -- 签到
    [ToponActConfig.LobbyWait]       = "ToponLobbyWaitView",    -- 大厅无操作弹窗
    [ToponActConfig.PhoneFee]        = "ToponPhoneFeeView",     -- 大厅话费抽奖
    [ToponActConfig.LuckyDraw]       = "DailyLuckDrawMainView",    -- 幸运抽奖
    [ToponActConfig.BreakGold]       = "",    -- 金币破产
    [ToponActConfig.GoldBanner]      = "",    -- 小结束banner
    [ToponActConfig.GoldWinLost]     = "ToponGoldAreaDrawView",    -- 金币场胜负抽奖
    [ToponActConfig.GoldPhoneFee]    = "ToponGoldAreaDrawView",    -- 金币场话费抽奖
}

ToponActConfig.OTHER_VIEW = {
    ["ToponLobbyWaitView"] = true,
}

-- 各区开关配置
ToponActConfig.NEW_FEE_WEB_AID = {
    [900038] = 1072, -- 丽水
    [900037] = 1073, -- 温茶
    [900017] = 1083, -- 熟客
    [900021] = 1071, -- 杭麻
    [900023] = 1084, -- 台州
    [900043] = 1088, -- 舟山
    [900008] = 1080, -- 湖州
    [900003] = 1082, -- 衢州
    [900036] = 1077, -- 瑞安
    [900020] = 1085, -- 金华
    [900025] = 1086, -- 宝宝
    [900031] = 1078, -- 乐清
    [900007] = 1075, -- 绍兴
    [900039] = 1079, -- 青田
    [900006] = 1081, -- 宁波
    [900029] = 1076, -- 余姚
    [40165]  = 1074, -- 嘉兴
    [900046] = 1087,
}

return ToponActConfig
