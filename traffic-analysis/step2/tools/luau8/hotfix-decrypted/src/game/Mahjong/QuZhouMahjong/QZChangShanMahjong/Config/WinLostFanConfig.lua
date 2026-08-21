local WinLostFanConfig = CF.gameClass("WinLostFanConfig", "game.Mahjong.BasicMahjong.Config.WinLostFanConfig")

WinLostFanConfig.KW_WINLOST_FAN_TYPE =
{
    [2900] = "平胡",
    [2901] = "独夹",
    [2902] = "财吊",
    [2903] = "杠开",
    [2904] = "杠爆",
    [2905] = "四财神",
    [2906] = "天胡",
    [2907] = "天胡",
    [2908] = "财飘",
    [2909] = "抢杠",
    [2910] = "单吊",
    [2911] = "二财飘",
    [2912] = "三财飘",
}

WinLostFanConfig.KW_WINLOST_FAN_NUMS =
{
    [2900] = 1,
    [2901] = 2,
    [2902] = 3,
    [2903] = 3,
    [2904] = 6,
    [2905] = 9,
    [2906] = 9,
    [2907] = 9,
    [2908] = 6,
    [2909] = 9,
    [2910] = 1,
    [2911] = 15,
    [2912] = 24,
}

return WinLostFanConfig	