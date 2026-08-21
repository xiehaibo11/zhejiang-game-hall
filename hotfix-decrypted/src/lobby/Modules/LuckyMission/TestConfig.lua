local LuckyMissionTestConfig = {}

-- 开启后走本地数据
LuckyMissionTestConfig.IsDebug = false

-- 红点请求
LuckyMissionTestConfig.GetTaskV2RequestRedPoint = {
    pageList = {
        {
            name = "每日任务", -- 不为空就是有
            redPoint = 1, -- 1有红点，0无红底按
        }
    }
}

-- 信息列表请求
LuckyMissionTestConfig.GetTaskV2RequestContent = {
    pageList = {
        {
            id = {
                1, 2, 3, 4, 5
            },
            name = "每日任务", -- 不为空就是有
            redPoint = 1, -- 1有红点，0无红底按
            startTime = "1758272808",
            endTime = "1768272808",
            titleImage = "",
        },
        {
            id = {
                1, 2, 3, 4, 5
            },
            name = "每周任务", -- 不为空就是有
            redPoint = 0, -- 1有红点，0无红底按
            startTime = "1758272808",
            endTime = "1761272808",
            titleImage = "https://img1-cdn.bianfeng.com/uploads/materials//wechat/ExchangeShop/201805/2018050711000963101.png",
        },
        {
            id = {
                1, 2, 3, 4, 5
            },
            name = "中秋\n幸运任务", -- 不为空就是有
            redPoint = 0, -- 1有红点，0无红底按
            startTime = "1758272808",
            endTime = "1778272808",
            titleImage = "",
        }
    },
    boxList = {
        {
            content = { --奖励
                {
                    id = 1,
                    rewards = {
                        {
                            id = 101032,
                            count = 20,
                            icon = "https://img1-cdn.bianfeng.com/uploads/materials//wechat/ExchangeShop/201805/2018050711000963101.png",
                            name = "房卡"
                        },
                        {
                            id = 101032,
                            count = 30,
                            icon = "https://img1-cdn.bianfeng.com/uploads/materials//wechat/ExchangeShop/201805/2018050711000963101.png",
                            name = "房卡"
                        }
                    },
                    draw = 0, --0 未领取
                    target = 40,
                }
            },
            progress = 2,
            jump = {
                jump = "AC_JUMPTYPE_GAME",
                gameId = 0
            },
            startTime = "1758272808",
            endTime = "1765272808",
            --   int64 draw_deadline = 7;
            activityId = 1,
            intro = "任务1",
            --   repeated int32 progress_log = 10;
            --   AwardCond award_cond = 11;
            actType = "",
            --   ActTypeInfo act_type_info = 13;
            actPoint = 12, -- 0 表示没有 
        },
        {
            content = { --奖励
                {
                    id = 2,
                    rewards = {
                        {
                            id = 101032,
                            count = 20,
                            icon = "https://img1-cdn.bianfeng.com/uploads/materials//wechat/ExchangeShop/201805/2018050711000963101.png",
                            name = "房卡"
                        },
                        {
                            id = 101032,
                            count = 30,
                            icon = "https://img1-cdn.bianfeng.com/uploads/materials//wechat/ExchangeShop/201805/2018050711000963101.png",
                            name = "房卡"
                        },
                        {
                            id = 101032,
                            count = 40,
                            icon = "https://img1-cdn.bianfeng.com/uploads/materials//wechat/ExchangeShop/201805/2018050711000963101.png",
                            name = "房卡"
                        }
                    },
                    draw = 1, --0 未领取
                    target = 20,
                }
            },
            progress = 20,
            jump = {
                jump = "AC_JUMPTYPE_GAME",
                gameId = 0
            },
            startTime = "1758272808",
            endTime = "1768272808",
            --   int64 draw_deadline = 7;
            activityId = 2,
            intro = "任务2",
            --   repeated int32 progress_log = 10;
            --   AwardCond award_cond = 11;
            actType = "",
            --   ActTypeInfo act_type_info = 13;
            actPoint = 12, -- 0 表示没有 
        },
        {
            content = { --奖励
                {
                    id = 3,
                    rewards = {
                        {
                            id = 101032,
                            count = 20,
                            icon = "https://img1-cdn.bianfeng.com/uploads/materials//wechat/ExchangeShop/201805/2018050711000963101.png",
                            name = "房卡"
                        },
                        {
                            id = 101032,
                            count = 30,
                            icon = "https://img1-cdn.bianfeng.com/uploads/materials//wechat/ExchangeShop/201805/2018050711000963101.png",
                            name = "房卡"
                        },
                        {
                            id = 101032,
                            count = 40,
                            icon = "https://img1-cdn.bianfeng.com/uploads/materials//wechat/ExchangeShop/201805/2018050711000963101.png",
                            name = "房卡"
                        }
                    },
                    draw = 0, --0 未领取
                    target = 45,
                }
            },
            progress = 45,
            jump = {
                jump = "AC_JUMPTYPE_GAME",
                gameId = 0
            },
            startTime = "1758272808",
            endTime = "1758522790",
            --   int64 draw_deadline = 7;
            activityId = 3,
            intro = "任务3",
            --   repeated int32 progress_log = 10;
            --   AwardCond award_cond = 11;
            actType = "",
            --   ActTypeInfo act_type_info = 13;
            actPoint = 23, -- 0 表示没有 
        },
        {
            content = { --奖励
                {
                    id = 3,
                    rewards = {
                        {
                            id = 101032,
                            count = 20,
                            icon = "https://img1-cdn.bianfeng.com/uploads/materials//wechat/ExchangeShop/201805/2018050711000963101.png",
                            name = "房卡"
                        },
                        {
                            id = 101032,
                            count = 30,
                            icon = "https://img1-cdn.bianfeng.com/uploads/materials//wechat/ExchangeShop/201805/2018050711000963101.png",
                            name = "房卡"
                        }
                    },
                    draw = 0, --0 未领取
                    target = 45,
                }
            },
            progress = 45,
            jump = {
                jump = "AC_JUMPTYPE_GAME",
                gameId = 0
            },
            startTime = "1758272808",
            endTime = "1768272808",
            --   int64 draw_deadline = 7;
            activityId = 4,
            intro = "任务4",
            --   repeated int32 progress_log = 10;
            --   AwardCond award_cond = 11;
            actType = "",
            --   ActTypeInfo act_type_info = 13;
            actPoint = 0, -- 0 表示没有 
        },
        {
            content = { --奖励
                {
                    id = 3,
                    rewards = {
                        {
                            id = 101032,
                            count = 20,
                            icon = "https://img1-cdn.bianfeng.com/uploads/materials//wechat/ExchangeShop/201805/2018050711000963101.png",
                            name = "房卡"
                        },
                        {
                            id = 101032,
                            count = 30,
                            icon = "https://img1-cdn.bianfeng.com/uploads/materials//wechat/ExchangeShop/201805/2018050711000963101.png",
                            name = "房卡"
                        },
                        {
                            id = 101032,
                            count = 40,
                            icon = "https://img1-cdn.bianfeng.com/uploads/materials//wechat/ExchangeShop/201805/2018050711000963101.png",
                            name = "房卡"
                        }
                    },
                    draw = 0, --0 未领取
                    target = 45,
                }
            },
            progress = 45,
            jump = {
                jump = "AC_JUMPTYPE_GAME",
                gameId = 0
            },
            startTime = "1758272808",
            endTime = "1768272808",
            --   int64 draw_deadline = 7;
            activityId = 5,
            intro = "任务5",
            --   repeated int32 progress_log = 10;
            --   AwardCond award_cond = 11;
            actType = "",
            --   ActTypeInfo act_type_info = 13;
            actPoint = 23, -- 0 表示没有 
        }
    },
    actPointInfo = {
        point = 50,
        actPoint = {
            {
                pointTarget = 10,
                rewards = {
                    {
                        id = 101032,
                        count = 20,
                        icon = "https://img1-cdn.bianfeng.com/uploads/materials//wechat/ExchangeShop/201805/2018050711000963101.png",
                        name = "房卡"
                    }
                },
                isGet = 1,
            },
            {
                pointTarget = 60,
                rewards = {
                    {
                        id = 101032,
                        count = 43,
                        icon = "https://img1-cdn.bianfeng.com/uploads/materials//wechat/ExchangeShop/201805/2018050711000963101.png",
                        name = "房卡"
                    }
                },
                isGet = 0,
            },
            {
                pointTarget = 100,
                rewards = {
                    {
                        id = 101032,
                        count = 50,
                        icon = "https://img1-cdn.bianfeng.com/uploads/materials//wechat/ExchangeShop/201805/2018050711000963101.png",
                        name = "房卡"
                    }
                },
                isGet = 0,
            }
        }
    }
}

-- 任务奖励请求
LuckyMissionTestConfig.TaskV2RewardRequest = {
    rewards = {
        {
            id = 101032,
            count = 20,
            icon = "https://img1-cdn.bianfeng.com/uploads/materials//wechat/ExchangeShop/201805/2018050711000963101.png",
            name = "房卡"
        }
    },
}

-- 活跃度请求
LuckyMissionTestConfig.ActPointRewardRequest = {
    rewards = {
        {
            id = 101032,
            count = 20,
            icon = "https://img1-cdn.bianfeng.com/uploads/materials//wechat/ExchangeShop/201805/2018050711000963101.png",
            name = "房卡"
        }
    },
}

return LuckyMissionTestConfig K.  