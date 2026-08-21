local WinLostFanConfig = CF.gameClass("WinLostFanConfig", "game.Mahjong.BasicMahjong.Config.WinLostFanConfig")

WinLostFanConfig.KW_WINLOST_FAN_TYPE =
{
    [1001] = "屁胡",                --屁胡
    [1002] = "无财神",              --无财神
    [1003] = "财神一归位",          --财神一归位
    [1004] = "双财神",              --双财神
    [1005] = "自风位刻",            --自风位刻
    [1006] = "自风位暗杠",          --自风位暗杠
    [1007] = "自风位明杠",          --自风位明杠
    [1008] = "红中刻",              --红中刻
    [1009] = "红中暗杠",            --红中暗杠
    [1010] = "红中明杠",            --红中明杠
    [1011] = "发财刻",              --发财刻
    [1012] = "发财暗杠",            --发财暗杠
    [1013] = "发财明杠",            --发财明杠
    [1014] = "白板",                --一白板
    [1015] = "白板x2",              --二白板
    [1016] = "白板x3",              --三白板
    [1017] = "红中",                --一红中
    [1018] = "红中x2",              --二红中
    [1019] = "红中x3",              --三红中
    [1020] = "明牌",                --一明牌
    [1021] = "明牌x2",              --二明牌
    [1022] = "平胡",                --平胡
    [1023] = "杠上开花",            --杠上开花
    [1024] = "抢杠胡",              --抢杠胡
    [1025] = "对对胡",              --对对胡
    [1026] = "混一色",              --混一色
    [1027] = "财神单吊",            --财神单吊
    [1028] = "三财神",              --三财神
    [1029] = "财神做牛",            --财神做牛
    [1030] = "四风齐",              --四风齐        --  备注， 有 原来的  "四风影" 牌型  演化成了 "四风齐"
    [1031] = "三杠头",              --三杠头
    [1032] = "财神双归位",          --财神双归位
    [1033] = "单吊财神",            --单吊财神
    [1034] = "清一色",              --清一色
    [1035] = "三财神刻",            --三财神刻
    [1036] = "四财神",              --四财神
    [1037] = "三美人",              --三美人
    [1038] = "白板x4",              --四白板
    [1039] = "红中x4",              --四红中
    [1040] = "四风齐",              --四风齐
    [1041] = "硬吊",                --硬吊
    [1042] = "天胡",                --天胡
    [1043] = "地胡",                --地胡
    [1044] = "财神三归位",          --财神三归位
    [1045] = "全字",                --全字
    [1046] = "四美人",              --四美人
    [1047] = "财神四归位",          --财神四归位
    [1048] = "八仙过海",            --八仙过海
    [1049] = "七仙女",              --七仙女
    [1050] = "八虫草",              --八虫草
    [1051] = "发财",                --1发财
    [1052] = "发财x2",              --2发财
    [1053] = "发财x3",              --3发财
    [1054] = "发财x4",              --4发财
}

WinLostFanConfig.MP_TYPE =
{
    MP_NONE = 0,
    MP_SIFENGQI = 1,    --明牌四风齐
    MP_SANMEIREN = 2,   --明牌三美人
    MP_SIMEIREN = 3,    --明牌四美人
    MP_SIBAIBAN = 4,    --明牌四白板
    MP_SIHONGZHONG = 5, --明牌四红中
    MP_SANGANGTOU = 6,  --明牌三杠头
    MP_DANDIAO = 7,     --明牌单吊
    MP_MINGPAI5TAI = 8, --明牌五台
    MP_MINGPAI6TAI = 9, --明牌六台
    MP_SIFACAI = 10,    --明牌四发财
}

WinLostFanConfig.MP_ANI_NAME =
{
    [0] = "",
    [1] = "yq_px_mingpai_sifengqi",
    [2] = "yq_px_mingpai_sanmeiren",
    [3] = "yq_px_mingpai_simeiren",
    [4] = "yq_px_mingpai_sibaiban",
    [5] = "yq_px_mingpai_sihongzhong",
    [6] = "yq_px_mingpai_sangangtou",
    [7] = "yq_px_mingpai_dandiao",
    [8] = "yq_px_mingpai_wutai",
    [9] = "yq_px_mingpai_liutai",
    [10] = "yq_px_mingpai_sifacai",
}

WinLostFanConfig.KW_MP_TYPE =
 {
        [0] = "",
        [1] = "明牌四风齐",    --明牌四风齐
        [2] = "明牌三美人",   --明牌三美人
        [3] = "明牌四美人",    --明牌四美人
        [4] = "明牌四白板",   --明牌四白板
        [5] = "明牌四红中", --明牌四红中
        [6] = "明牌三杠头",  --明牌三杠头
        [7] = "明牌单吊",    --明牌单吊
        [8] = "明牌五台", --明牌五台
        [9] = "明牌六台", --明牌六台
}

WinLostFanConfig.KW_MP_END_ICON_NAME =
 {
        [0] = "",
        [1] = "js_mp_sifengqi.png",    --明牌四风齐
        [2] = "js_mp_sanmeiren.png",   --明牌三美人
        [3] = "js_mp_simeiren.png",    --明牌四美人
        [4] = "js_mp_sibaiban.png",   --明牌四白板
        [5] = "js_mp_sihongzhong.png", --明牌四红中
        [6] = "js_mp_sangangtou.png",  --明牌三杠头
        [7] = "js_mp_dandiao.png",    --明牌单吊
        [8] = "js_mp_wutai.png", --明牌五台
        [9] = "js_mp_liutai.png", --明牌六台
}

WinLostFanConfig.FANID_TO_ANI =
{
    [1025] = "duiduihu",--对对胡
    [1026] = "hunyise",--混一色
    [1027] = "caishendandiao",--财神单吊
    [1028] = "sancaishen",--三财神
    [1029] = "caishenzuoniu",--财神做牛
    [1030] = "sifengqi",--四风齐        --  备注， 有 原来的  "四风影" 牌型  演化成了 "四风齐"
    [1031] = "sangangtou",--三杠头
    [1032] = "caishenshuangguiwei",--财神双归位
    [1033] = "dandiaocaishen",--单吊财神
    [1034] = "qingyise",--清一色
    [1035] = "sancaishenke",--三财神刻
    [1036] = "sicaishen",--四财神
    [1037] = "sanmeiren",--三美人
    [1038] = "sibaiban",--四白板
    [1040] = "sifengqi",--四风齐
    [1041] = "yingdiao",--硬吊
    [1042] = "tianhu",--天胡
    [1043] = "dihu",--地胡
    [1044] = "caishensanguiwei",--财神三归位
    [1045] = "quanzi",--全字
    [1046] = "simeiren",--四美人
    [1047] = "caishensiguiwei",--财神四归位
    [1048] = "baxianguohai", -- 八仙过海
    [1049] = "qixiannv", --七仙女
    [1050] = "bacongcao", -- 八虫草
    [1054] = "sifacai", -- 4发财
}

WinLostFanConfig.KW_LOST_END_TYPE_PNG =
{
    [0] = "settle_text_escape.png",  --逃跑
    [2] = "settle_icon_3.png",  --点炮
    [3] = "settle_icon_7.png", --抢杠
}

WinLostFanConfig.BUHUA_TYPE =
{
    BH_BAIBANGANG = 0,  -- 补花：白板杠
    BH_GANGTOU = 1,    --补花：杠头
}

WinLostFanConfig.BUHUA_ANI_NAME =
{
    [0] = "baibangang",  --白板杠
    [1] = "gangtou",  --杠头
}



return WinLostFanConfig