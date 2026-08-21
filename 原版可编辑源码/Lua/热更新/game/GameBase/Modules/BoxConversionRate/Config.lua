local Config = {}
-- 自动关闭弹窗时间
Config.AutoCloseDialogTime = 30
-- 当天最大触发次数
Config.TodayShowMaxTimes = 4
-- 局内最大触发次数
Config.RoundShowMaxTimes = 2
-- 手动增加延迟时间
Config.AddDelayTime = 10
-- 最大快速关闭次数
Config.MaxQuickCloseTimes = 3
-- 快速关闭时间间隔
Config.QuickCloseInterval = 3
-- 禁止弹窗时长
Config.BanTime = 3 * 24 * 60 * 60
-- 推荐类型
Config.ConversionType = {
    None = 0,
    GoldGame = 1,
    Match = 2,
    Rrby = 3,
}
-- 玩家tag
 Config.BoxGuidePlayerTag = {
    BG_NONE = "BG_NONE",
    BG_NEW = "BG_NEW", --新玩家
    BG_BOX = "BG_BOX", --历史标签-包厢
    BG_TEA = "BG_TEA", --历史标签-比赛场
    BG_GOLD = "BG_GOLD", --历史标签-金币
    BG_BUYU = "BG_BUYU", --历史标签-捕鱼
    BG_LIANYUN_OTHER = "BG_LIANYUN_OTHER", --历史标签-其他联运
    BG_REBACK = "BG_REBACK", --回流玩家
    BG_WUPAN = "BG_WUPAN", --无盘玩家
}

return Config
