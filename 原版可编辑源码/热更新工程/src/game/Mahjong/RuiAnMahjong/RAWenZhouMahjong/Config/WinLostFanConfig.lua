local WinLostFanConfig = CF.gameClass("WinLostFanConfig", "game.Mahjong.BasicMahjong.Config.WinLostFanConfig")

WinLostFanConfig.KW_WINLOST_FAN_TYPE =
{
    [19]="财神会",
    [23]="碰碰胡",
    [33]="单吊",
    [39]="杠上开花",
    [41]="天胡",
    [48]="无财神",
    [90]="抢杠胡",
    [116]="自摸",
    [1001]="地胡",
    [1002]="全球神",
    [1003]="三财神平胡",
    [1004]="平胡",
    [1005]="财神归位",
    [1006]="三财神",
    [1007]="硬八对",
    [1008]="软八对",
    [1009]="三财神财神归位",   --自定义的
    [1010]="碰碰胡",   --自定义的
    [1011]="中发白",   --自定义的
    [1012]="二财神财神归位",   --自定义的
    [1013]="清一色",
    [1014]="混一色",
}

WinLostFanConfig.KW_WINLOST_HU_TYPE =
{
    [0] = "软牌",
    [1] = "硬牌",
    [2] = "双翻",
    [3] = "四翻",
}

WinLostFanConfig.KW_WINLOST_TITLE_RUANYING_TYPE =
{
	[0]="settle_text_wz_soft.png",--"软牌",
	[1]="settle_text_wz_hard.png",--"硬牌",
	[2]="settle_text_wz_shuangfan.png",--"双翻",
	[3]="settle_text_wz_sifang.png" --"四翻"
}

return WinLostFanConfig