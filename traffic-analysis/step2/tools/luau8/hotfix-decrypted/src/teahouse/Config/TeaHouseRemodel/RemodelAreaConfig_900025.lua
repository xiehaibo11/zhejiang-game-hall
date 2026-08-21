local RemodelAreaConfig = class("RemodelAreaConfig")

RemodelAreaConfig.CREATESETUPCONFIG = {
    notesNum = 888,
    rechargeNum = 0, 
    modeType = TeaHouse.TeaHouseProtocol.ReqSetPayType.PayModePype.TYPE_PAY_MODEL_BEHID,
    payTypeTable = {[1]=TeaHouse.TeaHouseProtocol.ReqSetPayType.PayType.TEA_PLAYER_OWNER_TEACARD_WIN},
}

--比赛场创建配置
RemodelAreaConfig.CREATECONDITION = {
    {
        tUpgradeTeaCount = -1,
        tUpgradeTableCount = -1,
        tUpgradeManagerCount = -1,
        tMaxTeaCount = 2,
        tLevelCardNum = 0,
        tCanCreateTeaCount = 2,

        tPlayModeNum = 1,
        tHaveLevelUp = false,
        tHaveAddAdmin = false,
        tTableNum = 10,
        tCostTypeNum = 1,
        tHavePropNumLimit = false,
    },
    {
        tUpgradeTeaCount = -1,
        tUpgradeTableCount = 500,
        tUpgradeManagerCount = -1,
        tMaxTeaCount = 2,
        tLevelCardNum = 2000,
        tCanCreateTeaCount = 2,

        tPlayModeNum = 1,
        tHaveLevelUp = true,
        tHaveAddAdmin = false,
        tTableNum = 10,
        tCostTypeNum = 2,
        tHavePropNumLimit = true,
    },
    {
        tUpgradeTeaCount = 3000,
        tUpgradeTableCount = 500,
        tUpgradeManagerCount = 2000,
        tMaxTeaCount = 5,
        tLevelCardNum = 4000,
        tCanCreateTeaCount = 2,

        tPlayModeNum = 6,
        tHaveLevelUp = false,
        tHaveAddAdmin = true,
        tTableNum = 20,
        tCostTypeNum = 2,
        tHavePropNumLimit = true,
    }
}

RemodelAreaConfig.TIP_TEXT_CONFIG = {
    {
        "比赛玩法",
        "1种比赛玩法",
        "1种比赛玩法",
        "6种比赛玩法",
        "固定了以后只能玩已选\n好的玩法"
    },
    {
        "升级功能",
        "无",
        "有",
        "无",
        "可将中级比赛场升级为\n高级比赛场"
    },
    {
        "副领队功能",
        "无",
        "无",
        "有（可通过活跃\n值解锁更多）",
        "副领队可以审批玩家是\n否可以加入比赛场"
    },
    {
        "桌子数量",
        "10",
        "10（可通过活跃\n值升级）最多20",
        "20（可通过活跃\n值升级）最多40",
        ""
    },
    {
        "创建数量",
        "2",
        "2",
        "2（可通过活跃\n值升级）最多5",
        "可创建比赛场的数量"
    },
    {
        "耗卡模式",
        "1种",
        "2种",
        "2种",
        "消耗房卡的可选模式"
    },
    {
        "每500活跃值--增加桌子数量",
        "每2000活跃值--增加副领队数量",
        "每3000活跃值--增加比赛场数量",
        "15000活跃值--可将中级比赛场升级为高级比赛场",
    },
    {
        "创建门槛",
        "无门槛",
        "无门槛",
        "无门槛",
        "创建比赛场的房卡门槛"
    }
}

return RemodelAreaConfig�