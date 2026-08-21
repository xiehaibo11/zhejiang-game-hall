local TeaHouseBusinessActConfig = {}

local ACT_STATE = {
    CLOSE = false,
    OPEN = true,
}

TeaHouseBusinessActConfig.isOpenRecallAct = {
    [XH.LOBBY_ID.LISHUI] = 1,
    [XH.LOBBY_ID.SHUKE] = 1,
    [XH.LOBBY_ID.HANGMAQUAN] = 1,
    [XH.LOBBY_ID.QUZHOU] = 1,
    [XH.LOBBY_ID.RUIAN] = 1,
    [XH.LOBBY_ID.QINGTIAN] = 1,
    [XH.LOBBY_ID.SHAOXING3D] = 1,
    [XH.LOBBY_ID.SHAOXING] = 1,
    [XH.LOBBY_ID.NINGBO] = 1,
    [XH.LOBBY_ID.YUYAO] = 1,

    [XH.LOBBY_ID.WENZHOU] = 1,
    [XH.LOBBY_ID.HUZHOU] = 1,
    [XH.LOBBY_ID.TAIZHOU] = 1,
    [XH.LOBBY_ID.YUEQING] = 1,
    [XH.LOBBY_ID.JIAXING] = 1,
    [XH.LOBBY_ID.JINHUA] = 1,
    [XH.LOBBY_ID.ZHOUSHAN] = 1,
    [XH.LOBBY_ID.BAOBAO] = 1,
}

TeaHouseBusinessActConfig.aidConfig = {
    [900038] = 629, -- 丽水
	[900037] = 623, -- 温茶
    [900043] = 631, -- 舟山
	[900017] = 630, -- 熟客
    --[40165] = 623, -- 嘉兴
    [900021] = 651, -- 杭麻圈
    [900008] = 652, -- 湖州
    [900003] = 653, -- 衢州
    [900036] = 654, -- 瑞安
    [900039] = 655, --青田
    [900006] = 657, --宁波
    [900029] = 658, --余姚
    [40165] = 659, --嘉兴
    [900007] = 660, --绍兴
    [900046] = 661, --绍兴3d
    [900020] = 662, --金华
}

TeaHouseBusinessActConfig.isOpenConsumeAct = {
    [XH.LOBBY_ID.LISHUI] = ACT_STATE.OPEN,
    [XH.LOBBY_ID.SHUKE] = ACT_STATE.OPEN,
    [XH.LOBBY_ID.HANGMAQUAN] = ACT_STATE.OPEN,
    [XH.LOBBY_ID.QUZHOU] = ACT_STATE.OPEN,
    [XH.LOBBY_ID.RUIAN] = ACT_STATE.OPEN,
    [XH.LOBBY_ID.QINGTIAN] = ACT_STATE.OPEN,
    [XH.LOBBY_ID.SHAOXING3D] = ACT_STATE.OPEN,
    [XH.LOBBY_ID.SHAOXING] = ACT_STATE.OPEN,
    [XH.LOBBY_ID.NINGBO] = ACT_STATE.OPEN,
    [XH.LOBBY_ID.YUYAO] = ACT_STATE.OPEN,

    [XH.LOBBY_ID.WENZHOU] = ACT_STATE.OPEN,
    [XH.LOBBY_ID.HUZHOU] = ACT_STATE.OPEN,
    [XH.LOBBY_ID.TAIZHOU] = ACT_STATE.OPEN,
    [XH.LOBBY_ID.YUEQING] = ACT_STATE.OPEN,
    [XH.LOBBY_ID.JIAXING] = ACT_STATE.OPEN,
    [XH.LOBBY_ID.JINHUA] = ACT_STATE.OPEN,
    [XH.LOBBY_ID.ZHOUSHAN] = ACT_STATE.OPEN,
    [XH.LOBBY_ID.BAOBAO] = ACT_STATE.OPEN,
}

return TeaHouseBusinessActConfigo