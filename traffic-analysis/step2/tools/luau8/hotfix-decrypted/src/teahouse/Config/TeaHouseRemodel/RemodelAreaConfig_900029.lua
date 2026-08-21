local RemodelAreaConfig = class("RemodelAreaConfig")


RemodelAreaConfig.CREATESETUPCONFIG = {
    notesNum = 888,
    rechargeNum = 0, 
    modeType = TeaHouse.TeaHouseProtocol.ReqSetPayType.PayModePype.TYPE_PAY_MODEL_BEHID,
    payTypeTable = {[1]=TeaHouse.TeaHouseProtocol.ReqSetPayType.PayType.TEA_PLAYER_OWNER_TEACARD_WIN},
    -- 比赛场默认创建依赖等级
    creatInfoWithLevel = {
        [1] = {
            modeType = TeaHouse.TeaHouseProtocol.ReqSetPayType.PayModePype.TYPE_PAY_MODEL_BEHID,
            payTypeTable = {TeaHouse.TeaHouseProtocol.ReqSetPayType.PayType.TEA_PLAYER_OWNER_TEACARD_WIN},
        },
        [2] = {
            modeType = TeaHouse.TeaHouseProtocol.ReqSetPayType.PayModePype.TYPE_PAY_MODEL_BEHID,
            payTypeTable = {TeaHouse.TeaHouseProtocol.ReqSetPayType.PayType.TYPE_AGENT_PLAYER_AA,TeaHouse.TeaHouseProtocol.ReqSetPayType.PayType.TYPE_AGENT_PLAYER_WINNER},
        },
        [3] = {
            modeType = TeaHouse.TeaHouseProtocol.ReqSetPayType.PayModePype.TYPE_PAY_MODEL_BEHID,
            payTypeTable = {TeaHouse.TeaHouseProtocol.ReqSetPayType.PayType.TYPE_AGENT_PLAYER_AA,TeaHouse.TeaHouseProtocol.ReqSetPayType.PayType.TYPE_AGENT_PLAYER_WINNER},
        }
    }
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
        tLevelCardNum = 100,
        tCanCreateTeaCount = 2,

        tPlayModeNum = 3,
        tHaveLevelUp = true,
        tHaveAddAdmin = false,
        tTableNum = 20,
        tCostTypeNum = 3,
        tHavePropNumLimit = true,
    },
    {
        tUpgradeTeaCount = 3000,--解锁比赛场数量的活跃值
        tUpgradeTableCount = 500,--解锁桌子数量的活跃值
        tUpgradeManagerCount = -1,--解锁副领队数量的活跃值
        tMaxTeaCount = 5, -- 比赛场最多数量
        tLevelCardNum = 300, -- 创建第n个需要的卡数量n*300,
        tCanCreateTeaCount = 2,--未解锁前可以创建的比赛场数量

        tPlayModeNum = 10,
        tHaveLevelUp = false,
        tHaveAddAdmin = true,
        tTableNum = 45,
        tCostTypeNum = 3,
        tHavePropNumLimit = true,
    }
}

RemodelAreaConfig.TIP_TEXT_CONFIG = {
    {
        "创建数量",
        "2",
        "2",
        "2（可通过活跃\n值升级）最多5",
        "可创建比赛场的数量"
    },
    {
        "比赛玩法",
        "1种",
        "3种",
        "10种",
        "固定了以后只能玩已选\n好的玩法"
    },
    {
        "桌子数量",
        "10",
        "20（可通过活跃\n值升级）最高30",
        "45（可通过活跃\n值升级）最高60",
        ""
    },
    {
        "副领队功能",
        "无",
        "无",
        "有",
    },
    {
        "升级功能",
        "无",
        "有",
        "无",
        "可将中级比赛场升级为\n高级比赛场"
    },
    
    {
        "耗卡模式",
        "1种",
        "3种",
        "3种",
        "消耗房卡的可选模式"
    },
    {
        "每500活跃值--增加1张桌子数量",
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

return RemodelAreaConfigD