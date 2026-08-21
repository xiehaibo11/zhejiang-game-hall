local WinLostFanConfig = CF.gameClass("WinLostFanConfig", "game.Mahjong.BasicMahjong.Config.WinLostFanConfig")

WinLostFanConfig.KW_WINLOST_FAN_NUMS =
{
    [2101] = 4,
    [2102] = 8,
    [2103] = 10,
    [2104] = 10,
    [2105] = 8,
    [2106] = 8,
    [2107] = 8,
    [2108] = 3,
    [2109] = 4,
    [2110] = 2,
    [2111] = 20
}

WinLostFanConfig.KW_WINLOST_FAN_TYPE =
{
    [4000] = "点炮",
    [4001] = "自摸",
    [4002] = "推倒胡",
    [4003] = "三财神",
    [4004] = "三财神碰碰胡",
    [4005] = "三财神杠开",
    [4006] = "天胡",
    [4007] = "地胡",
    [4008] = "单吊",
    [4009] = "抢杠胡",
    [4010] = "杠上开花",
    [4011] = "碰碰胡",
    [4012] = "三财神杠开碰碰胡",
    [4013] = "杠开碰碰胡",
    [4014] = "清一色",
    [4015] = "混一色"
}

WinLostFanConfig.KW_WINLOST_KUNG_TYPE =
{
    [0] = "点杠",
    [1] = "暗杠",
    [2] = "补杠"
}

return WinLostFanConfig