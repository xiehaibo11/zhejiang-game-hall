local WinLostFanConfig = CF.gameClass("WinLostFanConfig", "game.Mahjong.BasicMahjong.Config.WinLostFanConfig")

WinLostFanConfig.KW_WINLOST_FAN_TYPE = {
	[1001] = "自摸",
    [1002] = "抢杠胡",
    [1003] = "四红中",
}

WinLostFanConfig.KW_WINLOST_FAN_NUMS =
{
    [1001] = 0,
    [1002] = 0,
    [1003] = 0,
 }

WinLostFanConfig.KW_WINLOST_KUNG_TYPE =
{
    [0] = "接杠",
    [1] = "暗杠",
    [2] = "公杠",
}   

return WinLostFanConfig�