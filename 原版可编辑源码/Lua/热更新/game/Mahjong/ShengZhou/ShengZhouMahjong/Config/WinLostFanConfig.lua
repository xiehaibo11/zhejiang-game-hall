local WinLostFanConfig = CF.gameClass("WinLostFanConfig", "game.Mahjong.BasicMahjong.Config.WinLostFanConfig")

WinLostFanConfig.KW_WINLOST_FAN_TYPE =
{
    [118] = "放冲",
    [116] = "自摸",
    [90] = "抢杠胡",
    [39] = "杠开胡",
    [59] = "财鸟",
    [58] = "飞鸟",
    [55] = "双飞",
    [56] = "三飞"
}

WinLostFanConfig.KW_WINLOST_FAN_NUMS =
{
    [118] = 0,
    [116] = 1,
    [90] = 2,
    [39] = 3,
    [59] = 4,
    [58] = 5,
    [55] = 6,
    [56] = 7,
}

WinLostFanConfig.HU_TYPE =
{
    ET_NONE = 0,        -- 逃跑
    ET_SELF = 1,        -- 自摸
    ET_DISCARD = 2,     -- 点炮
    ET_ROBKONG = 3,     -- 抢杠
    ET_DRAWN = 5        -- 流局
}

WinLostFanConfig.HuType =
{
    NONE       = 0,
    FANG_CHONG = 1,      -- 放冲
    ZI_MO = 2,           -- 自摸
    QIANG_GANG_HU = 3,   -- 抢杠胡
    GANG_KAI_HU = 4,     -- 杠开胡
    CAI_NIAO = 5,        -- 彩鸟
    FEI_NIAO = 6,        -- 飞鸟
    SHAUNG_FEI = 7,      -- 双飞
    SAN_FEI = 8,         -- 三飞
}

return WinLostFanConfig