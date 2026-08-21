local WinLostFanConfig = CF.gameClass("WinLostFanConfig", "game.Mahjong.JiaXing.BaseMahjong.Config.WinLostFanConfig")

WinLostFanConfig.TAITYPE={
}

WinLostFanConfig.TAIPOINT={
}

WinLostFanConfig.KW_WINLOST_TAI_FAN_TYPE={
}

WinLostFanConfig.KW_WINLOST_TAI_FAN_NUMS={
}

WinLostFanConfig.KW_WINLOST_FAN_TYPE={
    [14]                    = "七小对",
    [23]                    = "对对胡",
    [31]                    = "混一色",
    [39]                    = "杠上开花",
    [43]                    = "地胡",
    [48]                    = "无百搭",
    [51]                    = "三百搭",
    [1101]                  = "单吊",
    [1102]                  = "清一色",
    [1103]                  = "全老头",
    [1104]                  = "天胡",
    [1105]                  = "海底捞月",
    [1106]                  = "地胡",
    [1108]                  = "天胡",
    [1109]                  = "单吊",
}

WinLostFanConfig.KW_WINLOST_FAN_NUMS={
    [14]                    = 1,            -- 七小对
    [23]                    = 1,            -- 对对胡
    [31]                    = 1,            -- 混一色
    [39]                    = 1,            -- 杠上开花
    [43]                    = 4,            -- 地胡
    [48]                    = 1,            -- 无百搭
    [51]                    = 2,            -- 三百搭
    [1101]                  = 1,            -- 单吊
    [1102]                  = 2,            -- 清一色
    [1103]                  = 3,            -- 全老头
    [1104]                  = 5,            -- 天胡
    [1105]                  = 1,            -- 海底捞月
    [1106]                  = 4,
    [1108]                  = 6,
    [1109]                  = 2,
}

return WinLostFanConfig