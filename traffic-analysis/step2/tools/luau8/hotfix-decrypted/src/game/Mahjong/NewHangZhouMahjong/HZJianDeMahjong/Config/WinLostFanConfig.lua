local WinLostFanConfig = CF.gameClass("WinLostFanConfig", "game.Mahjong.NewHangZhouMahjong.HangZhouMahjongBase.Config.WinLostFanConfig")

WinLostFanConfig.KW_WINLOST_FAN_TYPE = {
	--建德麻将
    [2908] = "清一色抢杠胡",
    [90] = "抢杠胡",
    [2900] = "清风子",
    [32] = "清一色",
    [2902] = "十三不搭",
    [2903] = "飘杠",
    [2904] = "杠飘",
    [2905] = "财飘",
    [15] = "八对",
    [2907] = "杠暴",
    [2906] = "杠开",
    [2901] = "暴头",
    [20] = "平胡",
    [58] = "财飘数标记"
}

WinLostFanConfig.KW_WINLOST_FAN_NUMS =
{
    --建德麻将
    [2908] = 20,
    [90] = 4,
    [2900] = 20,
    [32] = 10,
    [2902] = 4,
    [2903] = 2,
    [2904] = 2,
    [2905] = 2,
    [15] = 2,
    [2907] = 2,
    [2906] = 1,
    [2901] = 2,
    [20] = 1,
    [58] = 0
}

return WinLostFanConfigv