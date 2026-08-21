local RecallNewTestConfig = {}

-- 开启后走本地数据
RecallNewTestConfig.IsDebug = false

RecallNewTestConfig.GetReBackBaseInfoRequest = {
    isReback = true,
    playDay = 300, --游玩天数
    friendNum = 30, --牌友数量
    gameNum = 99, --对局数量
    lastTime = "1753960566", --上次登录时间
    isRewardGift = false, --是否领取礼包
    props = {
        {
            id = 101032,
            count = 20,
            icon = "https://img1-cdn.bianfeng.com/uploads/materials//wechat/ExchangeShop/201805/2018050711000963101.png",
            name = "房卡"
        }
    }, --回归礼包道具
    playerTag = "ReTag_Gold", --玩家类型标签
}

RecallNewTestConfig.RewardReBackGiftRequest = {
    props = {
        {
            id = 101032,
            count = 20,
            icon = "https://img1-cdn.bianfeng.com/uploads/materials//wechat/ExchangeShop/201805/2018050711000963101.png",
            name = "房卡"
        }
    },
}

RecallNewTestConfig.GetReBackSignInfoRequest = {
    currentIndex = 2,
    signInfos = {
        {
            isReward = false,
            props = {
                {
                    id = 101032,
                    count = 20,
                    icon = "https://img1-cdn.bianfeng.com/uploads/materials//wechat/ExchangeShop/201805/2018050711000963101.png",
                    name = "房卡"
                }
            },
        },
        {
            isReward = false,
            props = {
                {
                    id = 101032,
                    count = 20,
                    icon = "https://img1-cdn.bianfeng.com/uploads/materials//wechat/ExchangeShop/201805/2018050711000963101.png",
                    name = "房卡"
                }
            },
        },
        {
            isReward = false,
            props = {
                {
                    id = 101032,
                    count = 20,
                    icon = "https://img1-cdn.bianfeng.com/uploads/materials//wechat/ExchangeShop/201805/2018050711000963101.png",
                    name = "房卡"
                }
            },
        },
        {
            isReward = false,
            props = {
                {
                    id = 101032,
                    count = 20,
                    icon = "https://img1-cdn.bianfeng.com/uploads/materials//wechat/ExchangeShop/201805/2018050711000963101.png",
                    name = "房卡"
                }
            },
        },
        {
            isReward = false,
            props = {
                {
                    id = 101032,
                    count = 20,
                    icon = "https://img1-cdn.bianfeng.com/uploads/materials//wechat/ExchangeShop/201805/2018050711000963101.png",
                    name = "房卡"
                }
            },
        },
        {
            isReward = false,
            props = {
                {
                    id = 101032,
                    count = 20,
                    icon = "https://img1-cdn.bianfeng.com/uploads/materials//wechat/ExchangeShop/201805/2018050711000963101.png",
                    name = "房卡"
                }
            },
        },
        {
            isReward = false,
            props = {
                {
                    id = 101032,
                    count = 20,
                    icon = "https://img1-cdn.bianfeng.com/uploads/materials//wechat/ExchangeShop/201805/2018050711000963101.png",
                    name = "房卡"
                }
            },
        },
    }
}

RecallNewTestConfig.ReBackSignRequest = {
    props = {
        {
            id = 101032,
            count = 20,
            icon = "https://img1-cdn.bianfeng.com/uploads/materials//wechat/ExchangeShop/201805/2018050711000963101.png",
            name = "房卡"
        }
    },
}

RecallNewTestConfig.GetReBackTaskInfoRequest = {
    todayActive = 50, --今日活跃
    taskInfos = {
        {
            status = "ReStatus_None", --状态
            currentValue = 2, --当前进度值
            targetValue = 3, --目标进度值
            taskType = "CBTTShareGame",
            taskId = 1, --任务id
            activeValue = 1,
        },
        {
            status = "ReStatus_None", --状态
            currentValue = 2, --当前进度值
            targetValue = 3, --目标进度值
            taskType = "CBTTUseEmoji",
            taskId = 2, --任务id
            activeValue = 2,
        },
        {
            status = "ReStatus_None", --状态
            currentValue = 2, --当前进度值
            targetValue = 3, --目标进度值
            taskType = "CBTTRecallFriend",
            taskId = 3, --任务id
            activeValue = 3,
        },
        {
            status = "ReStatus_None", --状态
            currentValue = 2, --当前进度值
            targetValue = 3, --目标进度值
            taskType = "CBTTInviteNew",
            taskId = 4, --任务id
            activeValue = 4,
        },
        {
            status = "ReStatus_None", --状态
            currentValue = 2, --当前进度值
            targetValue = 3, --目标进度值
            taskType = "CBTTAllGame",
            taskId = 5, --任务id
            activeValue = 5,
        },
        {
            status = "ReStatus_None", --状态
            currentValue = 2, --当前进度值
            targetValue = 3, --目标进度值
            taskType = "CBTTLobbyGame",
            taskId = 6, --任务id
            activeValue = 6,
        },
        {
            status = "ReStatus_None", --状态
            currentValue = 2, --当前进度值
            targetValue = 3, --目标进度值
            taskType = "CBTTClubGame",
            taskId = 7, --任务id
            activeValue = 7,
        },
        {
            status = "ReStatus_None", --状态
            currentValue = 2, --当前进度值
            targetValue = 3, --目标进度值
            taskType = "CBTTGoldGame",
            taskId = 8, --任务id
            activeValue = 5,
        },
        {
            status = "ReStatus_None", --状态
            currentValue = 2, --当前进度值
            targetValue = 3, --目标进度值
            taskType = "CBTTSign",
            taskId = 9, --任务id
            activeValue = 2,
        },
        {
            status = "ReStatus_None", --状态
            currentValue = 2, --当前进度值
            targetValue = 3, --目标进度值
            taskType = "CBTTCreateRoom",
            taskId = 10, --任务id
            activeValue = 3,
        },
        {
            status = "ReStatus_None", --状态
            currentValue = 2, --当前进度值
            targetValue = 3, --目标进度值
            taskType = "CBTTRecharge",
            taskId = 11, --任务id
            activeValue = 2,
        },
        {
            status = "ReStatus_None", --状态
            currentValue = 2, --当前进度值
            targetValue = 3, --目标进度值
            taskType = "CBTTBrowseShop",
            taskId = 12, --任务id
            activeValue = 7,
        },
        {
            status = "ReStatus_None", --状态
            currentValue = 2, --当前进度值
            targetValue = 3, --目标进度值
            taskType = "CBTTBiessedProp",
            taskId = 13, --任务id
            activeValue = 8,
        },
    },
    stageInfos = {
        {
            props = {
                {
                    id = 101032,
                    count = 20,
                    icon = "https://img1-cdn.bianfeng.com/uploads/materials//wechat/ExchangeShop/201805/2018050711000963101.png",
                    name = "房卡"
                }
            },
            status = "ReStatus_None", -- 状态
            targetValue = 20, -- 目标进度
            index = 1, -- 奖励下标
        },
        {
            props = {
                {
                    id = 101032,
                    count = 20,
                    icon = "https://img1-cdn.bianfeng.com/uploads/materials//wechat/ExchangeShop/201805/2018050711000963101.png",
                    name = "房卡"
                }
            },
            status = "ReStatus_None", -- 状态
            targetValue = 40, -- 目标进度
            index = 2, -- 奖励下标
        },
        {
            props = {
                {
                    id = 101032,
                    count = 20,
                    icon = "https://img1-cdn.bianfeng.com/uploads/materials//wechat/ExchangeShop/201805/2018050711000963101.png",
                    name = "房卡"
                }
            },
            status = "ReStatus_None", -- 状态
            targetValue = 60, -- 目标进度
            index = 3, -- 奖励下标
        },
        {
            props = {
                {
                    id = 101032,
                    count = 20,
                    icon = "https://img1-cdn.bianfeng.com/uploads/materials//wechat/ExchangeShop/201805/2018050711000963101.png",
                    name = "房卡"
                }
            },
            status = "ReStatus_None", -- 状态
            targetValue = 200, -- 目标进度
            index = 4, -- 奖励下标
        },
    },
    startDay = 1, --开始天数
    endDay = 7, --结束天数
    curDay = 2, --当前天数
}

RecallNewTestConfig.RewardReBackTaskRequest = {

}

RecallNewTestConfig.RewardReBackTaskStageRequest = {
    props = {
        {
            id = 101032,
            count = 20,
            icon = "https://img1-cdn.bianfeng.com/uploads/materials//wechat/ExchangeShop/201805/2018050711000963101.png",
            name = "房卡"
        }
    },
}

RecallNewTestConfig.GetReBackSupportInfoRequest = {
    todayActive = 20, -- 今日活跃
    todayRecharge = 21, --今日充值
    todayCard = 31, --今日房卡消耗
    todayGold = 41, --今日金币消耗
    todayDiamondInherit = 51, --今日钻石继承
    todayCardInherit = 61, --今日房卡继承
    todayGoldInherit = 71, --今日金币继承
    todayPercent = 0.68, --今日继承百分比
    stagePercents = {
        {
            target = 20, -- 目标值
            percent = 0.01, -- 返还百分比
        },
        {
            target = 60,
            percent = 0.02,
        },
        {
            target = 100,
            percent = 0.2,
        },
        {
            target = 200,
            percent = 0.2,
        }
    }, --阶段继承百分比
    yesterdayRoomMode = 4, --昨日游戏类型
    isReward = false,
}

RecallNewTestConfig.RewardReBackSupportRequest = {

}

RecallNewTestConfig.ListClubReBackPlayersRequest = {
    players = {
        {
            userId = 1080714646,
            name = "测试1111",
            avatar = "",
            status = "Re_Online",
            rebackStartTime = "1753939080",
            todayGame = 3,
            rewardStatus = "ReStatus_None",
        },
        {
            userId = 1080714646,
            name = "测试2",
            avatar = "",
            status = "Re_Offline",
            rebackStartTime = "1755250018",
            todayGame = 3,
            rewardStatus = "ReStatus_Can_Reward",
        },
        {
            userId = 1080714646,
            name = "测试333",
            avatar = "",
            status = "Re_Gaming",
            rebackStartTime = "1753939580",
            todayGame = 15,
            rewardStatus = "ReStatus_Rewarded",
        },
        {
            userId = 1080714646,
            name = "测试4",
            avatar = "",
            status = "Re_Offline",
            rebackStartTime = "1753939080",
            todayGame = 3,
            rewardStatus = "ReStatus_None",
        },
        {
            userId = 1080714646,
            name = "测试5",
            avatar = "",
            status = "Re_Offline",
            rebackStartTime = "1753939000",
            todayGame = 3,
            rewardStatus = "ReStatus_Can_Reward",
        },
        {
            userId = 1080714646,
            name = "测试6",
            avatar = "",
            status = "Re_Gaming",
            rebackStartTime = "1753939580",
            todayGame = 15,
            rewardStatus = "ReStatus_Rewarded",
        },
        {
            userId = 1080714646,
            name = "测试7",
            avatar = "",
            status = "Re_Online",
            rebackStartTime = "1753939080",
            todayGame = 3,
            rewardStatus = "ReStatus_None",
        },
        {
            userId = 1080714646,
            name = "测试8",
            avatar = "",
            status = "Re_Offline",
            rebackStartTime = "1753939000",
            todayGame = 3,
            rewardStatus = "ReStatus_Can_Reward",
        },
        {
            userId = 1080714646,
            name = "测试9",
            avatar = "",
            status = "Re_Gaming",
            rebackStartTime = "1753939580",
            todayGame = 15,
            rewardStatus = "ReStatus_Rewarded",
        }, {
            userId = 1080714646,
            name = "测试10",
            avatar = "",
            status = "Re_Online",
            rebackStartTime = "1753939080",
            todayGame = 3,
            rewardStatus = "ReStatus_None",
        },
        {
            userId = 1080714646,
            name = "测试11",
            avatar = "",
            status = "Re_Offline",
            rebackStartTime = "1753939000",
            todayGame = 3,
            rewardStatus = "ReStatus_Can_Reward",
        },
        {
            userId = 1080714646,
            name = "测试12",
            avatar = "",
            status = "Re_Gaming",
            rebackStartTime = "1753939580",
            todayGame = 15,
            rewardStatus = "ReStatus_Rewarded",
        },
    },
    targetGame = 30,
    total = 1,
    props = {
        {
            id = 101032,
            count = 20,
            icon = "https://img1-cdn.bianfeng.com/uploads/materials//wechat/ExchangeShop/201805/2018050711000963101.png",
            name = "房卡"
        }
    },
}

RecallNewTestConfig.QueryReBackPlayersRequest = {
    rebackUserIds = { 1080714646, 1080714647 }
}

RecallNewTestConfig.RewardClubReBackRequest = {
    props = {
        {
            id = 101032,
            count = 20,
            icon = "https://img1-cdn.bianfeng.com/uploads/materials//wechat/ExchangeShop/201805/2018050711000963101.png",
            name = "房卡"
        }
    },
}

RecallNewTestConfig.GetReBackRedPointRequest = {
    isAllSign = false, -- 是否完成所有签到
    isReback = true, -- 是否回归
    rebackGift = true,
    rebackSign = true,
    rebackTask = true,
    rebackSupport = true,
    click = true, --是否开启标识
    isGameFree = true, --今日是否能免费对局
    playerTag = "ReTag_Gold", --玩家类型标签
    maxRoomMode = "LOBBY", --最多游戏房间类型
    todayPropFree = 10, --今日剩余免费道具次数
    totalPropFree = 11, --总剩余免费道具次数
    curDay = 1,
    rebackEndTime = "1756638966", -- 回归结束时间
    reGoldGameId = 30117, --回归前金币gameid
}

RecallNewTestConfig.NotifyReBackTaskRequest = {

}

RecallNewTestConfig.NotifyClubReBackPlayerInviteRequest = {

}

RecallNewTestConfig.ClickReBackRequest = {

}

return RecallNewTestConfig