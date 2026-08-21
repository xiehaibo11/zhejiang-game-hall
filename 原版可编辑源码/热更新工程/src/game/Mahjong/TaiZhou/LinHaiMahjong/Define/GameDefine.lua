local GameDefine = CF.gameClass("GameDefine", "game.Mahjong.TaiZhou.BasicTaiZhouMahjong.Define.GameDefine")

GameDefine.defaultHeadUrl = "http://thirdwx.qlogo.cn/mmopen/vi_32/RZWHFDljz1SW2Azl6kZyxic4ziaibicnUPo8dB3YiaGbhpyx3Tq34Vemk6KqexyJQJtAphjc9TELicPuRryc0UQ4DPmw/132"

GameDefine.FAN_TYPE_NAME = {
    [0] = "普通胡1",
    [31] = "混一色*1",
    [2803] = "门风刻*1",
    [2804] = "字牌刻*1",
    [2805] = "清一色*3",
    [2807] = "四风聚齐*3",
    [2808] = "硬碰硬*1",
    [2812] = "全字*3",
}

GameDefine.ZGTType = {
    ZHUA_GAN_TOU_NONE = 0,  --不抓杠头
    ZHUA_GAN_TOU_DAN = 1,   --抓杠头单牌
    ZHUA_GAN_TOU_HU_JIA_SIX = 2, --抓杠头胡家6张
    ZHUA_GAN_TOU_EVERY_JIA = 3, --每家抓杠头
}

GameDefine.MENG_FENG = {
    KW_DONG_FENG = 1,   --东
    KW_NAN_FENG = 2,    --南
    KW_XI_FENG = 3,     --西
    KW_BEI_FENG = 4,    --北
}

GameDefine.MENG_FENG_STR = {
    [GameDefine.MENG_FENG.KW_DONG_FENG] = "东:",
    [GameDefine.MENG_FENG.KW_NAN_FENG] = "南:",
    [GameDefine.MENG_FENG.KW_XI_FENG] = "西:",
    [GameDefine.MENG_FENG.KW_BEI_FENG] = "北:",
}

GameDefine.MAH_MEN_FENG = {
    [GameDefine.MENG_FENG.KW_DONG_FENG] = {1,5,9},
    [GameDefine.MENG_FENG.KW_NAN_FENG] = {2,6},
    [GameDefine.MENG_FENG.KW_XI_FENG] =  {3,7},
    [GameDefine.MENG_FENG.KW_BEI_FENG] = {4,8},
}

return GameDefine