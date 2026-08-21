local ScoringAssistantConfig = {}

ScoringAssistantConfig.OPT = {
    Get_In = 0, -- 0 获对局中的
    Set = 1, -- 1 设置
    End = 2, -- 标记结束
    Del = 3, -- 删除
    Get_His = 4, -- 获取历史记录
    Get_Month = 5, -- 获取本月数据
    Like = 6, -- 收藏
    UnLike = 7, -- 取消收藏
}

ScoringAssistantConfig.INDEX = {
    MATCH = 1,
    RECORD = 2,
    MY = 3
}

ScoringAssistantConfig.MAIN_INDEX = {
    MAIN = 1,
    SCORE = 2,
    RESULT = 3,
    BIGRESULT = 4,
}

ScoringAssistantConfig.RECORD_INDEX = {
    TOTAL = 1,
    DETAIL = 2,
}

-- 测试数据
-- 测试我的数据
ScoringAssistantConfig.TEST_MY_DATA = {
    totalPlay = 3,
    totalScore = 99,
    winPlay = 2,
    winScore = 2,
    winMax = "zx",
    lostMax = "ys",
}

-- 测试详单
ScoringAssistantConfig.TEST_DETAIL_DATA = {
    {
        score = {
            {
                userId = 1,
                userName = "1",
                score = 3,
            },
            {
                userId = 2,
                userName = "2",
                score = -3,
            }
        },
        juId = 1,
        juTime = 1727142080
    },
    {
        score = {
            {
                userId = 1,
                userName = "1",
                score = 33,
            },
            {
                userId = 2,
                userName = "2",
                score = -33,
            }
        },
        juId = 2,
        juTime = 1727142180
    },
    {
        score = {
            {
                userId = 1,
                userName = "1",
                score = 33,
            },
            {
                userId = 2,
                userName = "2",
                score = -33,
            }
        },
        juId = 3,
        juTime = 1727142180
    },
    {
        score = {
            {
                userId = 1,
                userName = "1",
                score = 33,
            },
            {
                userId = 2,
                userName = "2",
                score = -33,
            }
        },
        juId = 4,
        juTime = 1727142180
    },
    {
        score = {
            {
                userId = 1,
                userName = "1",
                score = 33,
            },
            {
                userId = 2,
                userName = "2",
                score = -33,
            }
        },
        juId = 5,
        juTime = 1727142180
    },
    {
        score = {
            {
                userId = 1,
                userName = "1",
                score = 33,
            },
            {
                userId = 2,
                userName = "2",
                score = -33,
            }
        },
        juId = 6,
        juTime = 1727142180
    },
    {
        score = {
            {
                userId = 1,
                userName = "1",
                score = 33,
            },
            {
                userId = 2,
                userName = "2",
                score = -33,
            }
        },
        juId = 7,
        juTime = 1727142180
    },
    {
        score = {
            {
                userId = 1,
                userName = "1",
                score = 33,
            },
            {
                userId = 2,
                userName = "2",
                score = -33,
            }
        },
        juId = 8,
        juTime = 1727142180
    },
    {
        score = {
            {
                userId = 1,
                userName = "1",
                score = 33,
            },
            {
                userId = 2,
                userName = "2",
                score = -33,
            }
        },
        juId = 9,
        juTime = 1727142180
    },
    {
        score = {
            {
                userId = 1,
                userName = "1",
                score = 33,
            },
            {
                userId = 2,
                userName = "2",
                score = -33,
            }
        },
        juId = 10,
        juTime = 1727142180
    },
    {
        score = {
            {
                userId = 1,
                userName = "1",
                score = 33,
            },
            {
                userId = 2,
                userName = "2",
                score = -33,
            }
        },
        juId = 11,
        juTime = 1727142180
    },
    {
        score = {
            {
                userId = 1,
                userName = "1",
                score = 33,
            },
            {
                userId = 2,
                userName = "2",
                score = -33,
            }
        },
        juId = 12,
        juTime = 1727142180
    },
    {
        score = {
            {
                userId = 1,
                userName = "1",
                score = 33,
            },
            {
                userId = 2,
                userName = "2",
                score = -33,
            }
        },
        juId = 13,
        juTime = 1727142180
    },
    {
        score = {
            {
                userId = 1,
                userName = "1",
                score = 33,
            },
            {
                userId = 2,
                userName = "2",
                score = -33,
            }
        },
        juId = 14,
        juTime = 1727142180
    },
    {
        score = {
            {
                userId = 1,
                userName = "1",
                score = 33,
            },
            {
                userId = 2,
                userName = "2",
                score = -33,
            }
        },
        juId = 15,
        juTime = 1727142180
    },
    {
        score = {
            {
                userId = 1,
                userName = "1",
                score = 33,
            },
            {
                userId = 2,
                userName = "2",
                score = -33,
            }
        },
        juId = 16,
        juTime = 1727142180
    }
}

-- 测试总单
ScoringAssistantConfig.TEST_TOTAL_DATA = {
    ledgerScoreList = {
        {
            ledgerScore = {
                {
                    userId = 1,
                    userName = "我我我我我我",
                    score = 3,
                },
                {
                    userId = 2,
                    userName = "你你你你你你",
                    score = 4,
                },
                {
                    userId = 2,
                    userName = "你你你你你你",
                    score = 5,
                },
                {
                    userId = 2,
                    userName = "你你你你你你",
                    score = -5,
                },
                {
                    userId = 2,
                    userName = "你你你你你你",
                    score = -3,
                },
                {
                    userId = 2,
                    userName = "你你你你你你",
                    score = -4,
                }
            },
            isLike = 1,
            ledgerId = 1,
            ledgerTime = 1727142080,
        },
        {
            ledgerScore = {
                {
                    userId = 1,
                    userName = "5",
                    score = 5,
                },
                {
                    userId = 2,
                    userName = "7",
                    score = -7,
                }
            },
            isLike = 0,
            ledgerId = 1,
            ledgerTime = 1727142030,
        },
        {
            ledgerScore = {
                {
                    userId = 1,
                    userName = "11",
                    score = 31,
                },
                {
                    userId = 2,
                    userName = "21",
                    score = -31,
                }
            },
            isLike = 1,
            ledgerId = 1,
            ledgerTime = 1727142180,
        },
        {
            ledgerScore = {
                {
                    userId = 1,
                    userName = "111",
                    score = 322,
                },
                {
                    userId = 2,
                    userName = "211",
                    score = -322,
                }
            },
            isLike = 0,
            ledgerId = 1,
            ledgerTime = 1727142280,
        },
        {
            ledgerScore = {
                {
                    userId = 1,
                    userName = "1456",
                    score = 3,
                },
                {
                    userId = 2,
                    userName = "223",
                    score = -3,
                }
            },
            isLike = 1,
            ledgerId = 1,
            ledgerTime = 1727142380,
        },
        {
            ledgerScore = {
                {
                    userId = 1,
                    userName = "1456",
                    score = 3,
                },
                {
                    userId = 2,
                    userName = "223",
                    score = -3,
                }
            },
            isLike = 1,
            ledgerId = 1,
            ledgerTime = 1727142380,
        },
        {
            ledgerScore = {
                {
                    userId = 1,
                    userName = "1456",
                    score = 3,
                },
                {
                    userId = 2,
                    userName = "223",
                    score = -3,
                }
            },
            isLike = 1,
            ledgerId = 1,
            ledgerTime = 1727142380,
        },
        {
            ledgerScore = {
                {
                    userId = 1,
                    userName = "1456",
                    score = 3,
                },
                {
                    userId = 2,
                    userName = "223",
                    score = -3,
                }
            },
            isLike = 1,
            ledgerId = 1,
            ledgerTime = 1727142380,
        },
        {
            ledgerScore = {
                {
                    userId = 1,
                    userName = "1456",
                    score = 3,
                },
                {
                    userId = 2,
                    userName = "223",
                    score = -3,
                }
            },
            isLike = 1,
            ledgerId = 1,
            ledgerTime = 1727142380,
        },
    },
    totalPage = 9
}

return ScoringAssistantConfig