local WinLostFanConfig = CF.gameClass("WinLostFanConfig", "game.Mahjong.JiaXing.BaseMahjong.Config.WinLostFanConfig")

-- 番数
WinLostFanConfig.KW_WINLOST_FAN_TYPE = {
    [1103]                  = "天胡",
    [1108]                  = "地胡",
    [51]                    = "三百搭",
    [39]                    = "杠上开花",
    [1101]                  = "单吊",
    [1102]                  = "全老头",
    [1107]                  = "无百搭",
    [31]                    = "混一色",
    [23]                    = "对对胡",
    [32]                    = "清一色",
    [1105]                  = "百搭正身",
    [1106]                  = "三财神刻",
}

WinLostFanConfig.KW_WINLOST_FAN_NUMS = {
    [1103]                  = 6,
    [1108]                  = 5,
    [51]                    = 2,
    [39]                    = 1,
    [1101]                  = 1,
    [1102]                  = 16,
    [1107]                  = 1,
    [31]                    = 1,
    [23]                    = 2,
    [32]                    = 3,
    [1105]                  = 1,
    [1106]                  = 16,
}

return WinLostFanConfig�