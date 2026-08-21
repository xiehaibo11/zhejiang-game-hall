local WinLostFanConfig = CF.gameClass("WinLostFanConfig", "game.Mahjong.BasicMahjong.Config.WinLostFanConfig")

WinLostFanConfig.KW_WINLOST_FAN_TYPE = {
	--德清
    [14] = "七对",
    [2800] = "自摸",
    [2801] = "自摸",
    [2802] = "爆头",
    [2803] = "杠开",
    [2804] = "抢杠胡",
    [2805] = "飘财",
    [2806] = "四财神",
    [2807] = "杠爆",
    [2808] = "杠飘",
    [2809] = "七对子爆头",
    [2810] = "十风",
    [2811] = "天胡",
    [2812] = "地胡",
    [2813] = "抢杠胡",
}

WinLostFanConfig.KW_WINLOST_FAN_NUMS =
{
    --德清
    [14] = 2,
    [2800] = 1,
    [2801] = 2,
    [2802] = 2,
    [2803] = 2,
    [2804] = 6,
    [2805] = 4,
    [2806] = 10,
    [2807] = 4,
    [2808] = 8,
    [2809] = 4,
    [2810] = 2,
    [2811] = 20,
    [2812] = 5,
    [2813] = 3,
}

return WinLostFanConfig