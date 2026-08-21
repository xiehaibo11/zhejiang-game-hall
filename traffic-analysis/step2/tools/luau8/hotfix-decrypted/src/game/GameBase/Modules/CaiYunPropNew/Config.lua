local CaiYunPropNewConfig = CF.gameClass("CaiYunPropNewConfig")

CaiYunPropNewConfig.KW_MULTI_DISCOUNT = {
    [1] = "10",
    [2] = "9.0",
    [3] = "8.5",
    [4] = "8.0",
    [5] = "7.5",
    [6] = "7.0",
    [7] = "6.5",
    [8] = "6.0",
    [9] = "5.5",
    [10] = "5.0",
}

CaiYunPropNewConfig.PropConfig = {
    {Propid = 101482, FolderName = "cy_xishou", FileName = "wash_hands_ani_ske_2", ArmatureName = "wash_hands_ani"},
    {Propid = 101485, FolderName = "cy_zhaocaishu", FileName = "zy_zhaochishu_ani", ArmatureName = "zy_zhaochishu_ani"},
    {Propid = 101488, FolderName = "cy_jubaopen", FileName = "jubaopen", ArmatureName = "arrive"},
    {Propid = 101489, FolderName = "cy_mazu", FileName = "zy_mazu_ani_backup", ArmatureName = "zy_mazu_ani"},
    {Propid = 120416, FolderName = "cy_zhuanyunzhu", FileName = "Ios_lucky_ske_7", ArmatureName = "newAnimation", scale = 1.6},
    {Propid = 120417, FolderName = "cy_dajidali", FileName = "qf_dajidali01", ArmatureName = "dajidali", scale = 2.8},
    {Propid = 101622, FolderName = "cy_pixiu", FileName = "px-ani", ArmatureName = "newAnimation"},
    {Propid = 101519, FolderName = "cy_zhaocaimao", FileName = "zhaocm", ArmatureName = "animation"},
    {Propid = 101775, FolderName = "cy_jinlong", FileName = "Bafanglaica_01", ArmatureName = "animation", sound = "res/audio/PropAni/bafanglaicai.mp3"},
    {Propid = 150738, FolderName = "cy_jinlong", FileName = "yaojiu", ArmatureName = "animation", sound = "res/audio/PropAni/rijindoujin.mp3"},
    {Propid = 150739, FolderName = "cy_jinlong", FileName = "Longfeng", ArmatureName = "animation", sound = "res/audio/PropAni/caiyuangungun.mp3"},
    {Propid = 150728, FolderName = "cy_shunfeng", FileName = "ssh", ArmatureName = "liuju"},
}

CaiYunPropNewConfig.KW_PROP_JINLONG_ID_FINAL = 101775
CaiYunPropNewConfig.KW_PROP_JINFENG_ID_FINAL = 150738
CaiYunPropNewConfig.KW_PROP_LONGFENG_ID_FINAL = 150739

CaiYunPropNewConfig.CF_ID = {
    CaiYunInfo = 211,
    AddCaiYun = 212,
    JinLongTimestamp = 213,
}

CaiYunPropNewConfig.ANI_TYPE = {
    jinlong = 1,
    jinfeng = 2,
    longfeng = 3
}

return CaiYunPropNewConfig�