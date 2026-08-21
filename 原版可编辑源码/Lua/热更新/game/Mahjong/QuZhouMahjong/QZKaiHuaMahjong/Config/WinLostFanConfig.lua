local WinLostFanConfig = CF.gameClass("WinLostFanConfig", "game.Mahjong.BasicMahjong.Config.WinLostFanConfig")

WinLostFanConfig.KW_WINLOST_FAN_TYPE =
{
    [2800] =  "平胡",
    [2801] =  "去不去",
    [2802] =  "爆头",
    [48] =  "无财",
    [2804] =  "杠上开花",
    [2805] =  "清一色",
    [2806] =  "七对子",
    [2807] = "财飘",
    [2808] = "枪杠胡",
    [2803] = "单吊",
    [2809] = "杠飘",
    [2810] = "无财"
}

WinLostFanConfig.KW_WINLOST_FAN_NUMS =
{
    [2800] = 0,   --"平胡",
    [2802] = 1,   --"爆头",
    [48] = 1,   --"无财",
    [2804] = 1,   --"杠上开花",
    [2805] = 1,   --"清一色",
    [2806] = 1,   --"七对子",
    [2801] = 1,    --"去不去"
    [2803]  = 1,
    [2807] = 1,
    [2808] = 0,
    [2809] = 1,
    [2810] = 1
}

return WinLostFanConfig