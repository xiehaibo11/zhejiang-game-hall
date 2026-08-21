local WinLostFanConfig = CF.gameClass("WinLostFanConfig", "game.Mahjong.BasicMahjong.Config.WinLostFanConfig")

WinLostFanConfig.KW_WINLOST_FAN_TYPE = {
	--汉麻
    [2900] = "自摸",
    [2901] = "放炮",
    [2902] = "抢杠胡",
    [2903] = "杠开",
    [2904] = "杠开",
    [2905] = "杠开",
}

WinLostFanConfig.KW_WINLOST_FAN_NUMS =
{
    [2900] = 2,
    [2901] = 1,
    [2902] = 3,
    [2903] = 4,
    [2904] = 7,
    [2905] = 2,
}

return WinLostFanConfig