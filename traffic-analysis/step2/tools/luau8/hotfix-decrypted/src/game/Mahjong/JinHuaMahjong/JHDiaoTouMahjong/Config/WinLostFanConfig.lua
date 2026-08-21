local WinLostFanConfig = CF.gameClass("WinLostFanConfig", "game.Mahjong.BasicMahjong.Config.WinLostFanConfig")

WinLostFanConfig.KW_WINLOST_FAN_TYPE =
{
    --吊头麻将
    [2901] = "杠开",
    [2904] = "飘财",
    [2902] = "吊头（敲响）",
    [2903] = "吊头杠",
    [2900] = "自摸",
    [2905] = "抢杠胡"

}

WinLostFanConfig.KW_WINLOST_FAN_NUMS =
{
    --吊头
    [2901] = 2,
    [2904] = 4,
    [2902] = 2,
    [2903] = 4,
    [2900] = 1,
    [2905] = 1,
}

return WinLostFanConfig