local WinLostFanConfig = CF.gameClass("WinLostFanConfig", "game.Mahjong.BasicMahjong.Config.WinLostFanConfig")

WinLostFanConfig.KW_WINLOST_FAN_TYPE = {
	[4000] = "",
    [4001] = "自摸",
    [4002] = "七小对",
    [4003] = "大对胡",
    [4004] = "清一色",
    [4005] = "豪七对",
    [4006] = "天胡",
    [4007] = "地胡",
    [4008] = "杠上炮",
    [4009] = "杠上开花",
    [4010] = "抢杠胡",
    [4011] = "四红中推倒胡",
}

WinLostFanConfig.KW_WINLOST_FAN_NUMS =
{
    [4000] = 1,
    [4001] = 1,
    [4002] = 3,
    [4003] = 2,
    [4004] = 3,
    [4005] = 6,
    [4006] = 6,
    [4007] = 6,
    [4008] = 3,
    [4009] = 0,
    [4010] = 0,
    [4011] = 1,
 }

WinLostFanConfig.KW_WINLOST_KUNG_TYPE =
{
    [0] = "明杠",
    [1] = "暗杠",
    [2] = "补杠",
}   

return WinLostFanConfigc