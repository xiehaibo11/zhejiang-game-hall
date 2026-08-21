local WinLostFanConfig = CF.gameClass("WinLostFanConfig", "game.Mahjong.NewHangZhouMahjong.HangZhouMahjongBase.Config.WinLostFanConfig")

WinLostFanConfig.KW_WINLOST_FAN_TYPE = {
	[23] = "对对胡",
    [31] = "混一色",
    [32] = "清一色",
    [39] = "杠开胡",
    [1021] = "红中刻",
    [1022] = "发财刻",
    [1023] = "白板刻",
    [1024] = "风台头",
    [1025] = "全部风牌",
    [1026] = "杠花",
    [1027] = "倍数",
    [2000] = "花杠开"
}

WinLostFanConfig.KW_WINLOST_FAN_NUMS =
{
    [23] = 1, --"对对胡",
    [31] = 1, --"混一色",
    [32] = 3, --"清一色",
    [39] = 1, --"杠开胡",
    [1021] = 1, --"红中刻",
    [1022] = 1, --"发财刻",
    [1023] = 1, --"白板刻",
    [1024] = 1, --"风台头",
    [1025] = 13, --"全部风牌",
    [1026] = 1, --"杠花"
    [1027] = 1, --"倍数"
    [2000] = 0
}

return WinLostFanConfig