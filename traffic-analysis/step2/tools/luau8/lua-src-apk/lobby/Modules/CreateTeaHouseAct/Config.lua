local CreateTeaHouseActConfig = {}

-- 各区活动开关配置
CreateTeaHouseActConfig.IS_OPEN = {
    [XH.LOBBY_ID.LISHUI] = false,
    [XH.LOBBY_ID.WENZHOU] = true,
    [XH.LOBBY_ID.SHUKE] = true,
    [XH.LOBBY_ID.HANGMAQUAN] = false,
    [XH.LOBBY_ID.TAIZHOU] = false,
    [XH.LOBBY_ID.ZHOUSHAN] = false,
    [XH.LOBBY_ID.HUZHOU] = false,
    [XH.LOBBY_ID.QUZHOU] = false,
    [XH.LOBBY_ID.RUIAN] = false,
    [XH.LOBBY_ID.JINHUA] = false,
    [XH.LOBBY_ID.YUEQING] = false,
    [XH.LOBBY_ID.SHAOXING] = false,
    [XH.LOBBY_ID.QINGTIAN] = false,
    [XH.LOBBY_ID.NINGBO] = false,
    [XH.LOBBY_ID.JIAXING] = false,
    [XH.LOBBY_ID.YUYAO] = false,
    [XH.LOBBY_ID.SHAOXING3D] = false,
    [XH.LOBBY_ID.BAOBAO] = false,
}


--各区默认的比赛场创建参数
CreateTeaHouseActConfig.TeaHouseDefaultConfig =
{
    [XH.LOBBY_ID.WENZHOU] = {
        notesNum = 888,
        everyDayCostLimitNum = 888888,
        newerNum = 8888,
        rechargeNum = 0,
        bOthersHiden = false,
        bAutoAddRoomCard = false,
        nLowCardNum = 0,
        nTransferCardNum = 0,
        nRemindLowCardNum = -1,
        modeType = 1,
        payTypeTable = {999},
        nLevel = 3
    },
    [XH.LOBBY_ID.SHUKE] = {
        notesNum = 123,
        everyDayCostLimitNum = 888888,
        newerNum = 8888,
        rechargeNum = 0,
        bOthersHiden = nil,
        bAutoAddRoomCard = nil,
        nLowCardNum = 0,
        nTransferCardNum = 0,
        nRemindLowCardNum = -1,
        modeType = 2,
        payTypeTable = {0},
        nLevel = 0
    }		 
}

return CreateTeaHouseActConfig
q