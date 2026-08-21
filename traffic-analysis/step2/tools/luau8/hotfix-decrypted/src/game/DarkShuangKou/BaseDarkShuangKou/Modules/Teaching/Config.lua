local config = {
    players = {
        {
            nBrandID = CF.selfPlayerData:getBrandID(),
            nNumberID = CF.selfPlayerData:getNumberID(),
            szNickname = CF.selfPlayerData:getNickName() or "",
            nPlayTypeScore = 490000,
            nClientType = 2,
            nSex = 48,
            nSeat = 0
        },
        {nBrandID = XH.areaData:getAreaID(), nNumberID = 1111111111, szNickname = "牌艺导师1号", nSex = 48, nPlayTypeScore = 490000, nClientType = 2, nSeat = 1},
        {nBrandID = XH.areaData:getAreaID(), nNumberID = 1111111112, szNickname = "牌艺导师2号", nSex = 48, nPlayTypeScore = 490000, nClientType = 2, nSeat = 2},
        {nBrandID = XH.areaData:getAreaID(), nNumberID = 1111111113, szNickname = "牌艺导师3号", nSex = 48, nPlayTypeScore = 490000, nClientType = 2, nSeat = 3}
    },
    protocolQueue = {
        --玩家分组引导
        {
            -- 玩家0号，自己
            {delay = 0, xy = CF.LogicBaseProtocol.msgPlayerData, ext = {player = 1}},
            {delay = 0, xy = CF.LogicBaseProtocol.msgPlayerEnter, ext = {player = 1}},
            -- 玩家1号
            {delay = 0, xy = CF.LogicBaseProtocol.msgPlayerData, ext = {player = 2}},
            {delay = 0, xy = CF.LogicBaseProtocol.msgPlayerEnter, ext = {player = 2}},
            -- 玩家2号
            {delay = 0, xy = CF.LogicBaseProtocol.msgPlayerData, ext = {player = 3}},
            {delay = 0, xy = CF.LogicBaseProtocol.msgPlayerEnter, ext = {player = 3}},
            -- 玩家3号
            {delay = 0, xy = CF.LogicBaseProtocol.msgPlayerData, ext = {player = 4}},
            {delay = 0, xy = CF.LogicBaseProtocol.msgPlayerEnter, ext = {player = 4}},
            -- 玩家开始
            {delay = 0, xy = CF.LogicBaseProtocol.msgPlayerStart, ext = {player = 1}},
            {delay = 0, xy = CF.LogicBaseProtocol.msgPlayerStart, ext = {player = 2}},
            {delay = 0, xy = CF.LogicBaseProtocol.msgPlayerStart, ext = {player = 3}},
            {delay = 0, xy = CF.LogicBaseProtocol.msgPlayerStart, ext = {player = 4}},
            -- 玩家开始
            {delay = 0, xy = CF.LogicBaseProtocol.msgPlayerDataEx, data = {nPlayState = 3}, ext = {player = 1}},
            {delay = 0, xy = CF.LogicBaseProtocol.msgPlayerDataEx, data = {nPlayState = 3}, ext = {player = 2}},
            {delay = 0, xy = CF.LogicBaseProtocol.msgPlayerDataEx, data = {nPlayState = 3}, ext = {player = 3}},
            {delay = 0, xy = CF.LogicBaseProtocol.msgPlayerDataEx, data = {nPlayState = 3}, ext = {player = 4}},
            -- 游戏基本数据
            {delay = 2, xy = CF.GameProtocol.msgGameData, data = {iTotalRound = 5, iTableFee = 100000, iBaseScore = 2000, iMaximumLimit = 5000000, iRound = 0}},
            {delay = 0, xy = CF.GameProtocol.msgGameConfig, data = {mult = {2, 10, 10, 10, 10, 10, 10, 10, 10, 3, 10, 10, 10, 10, 10, 10, 4, 10, 10, 10, 10, 5, 10, 15, 25, 30, 8, 20, 50}}},
            {delay = 0, xy = CF.GameProtocol.msgGameStep, data = {iGameStep = 1}},
            {delay = 3, xy = CF.GameProtocol.msgGameRound, data = {iMult = 1, iRound = 1}},
            -- 游戏开始
            {delay = 0, xy = CF.GameProtocol.msgGameStart, data = {nFlag = true}},
            {delay = 5, xyid = 0, data = {stepName = "轮次信息展示", step = 1}}
        },
        {
            {delay = 0, xyid = 0, data = {stepName = "规则说明", step = 2}}
        },
        {
            {delay = 0, xy = CF.GameProtocol.msgGameStep, data = {iGameStep = 3}},
            {
                delay = 0,
                xy = CF.GameProtocol.msgAllDirCards,
                data = {
                    ucHandCount = {[0] = 6, [1] = 6, [2] = 6, [3] = 6},
                    ucHandCards = {[0] = {2, 15, 6, 32, 46, 34}, [1] = {3, 48, 0, 0, 0, 0}, [2] = {22, 25, 0, 0, 0, 0}, [3] = {9, 39, 0, 0, 0, 0}},
                    ucDrawCount = {[0] = 6, [1] = 6, [2] = 6, [3] = 6},
                    ucDrawCards = {[0] = {2, 15, 6, 32, 46, 34}, [1] = {3, 48, 0, 0, 0, 0}, [2] = {22, 25, 0, 0, 0, 0}, [3] = {9, 39, 0, 0, 0, 0}},
                    ucOutCount = {[0] = 0, [1] = 0, [2] = 0, [3] = 0},
                    ucOutCards = {[0] = {}, [1] = {}, [2] = {}, [3] = {}},
                    ucOutCardType = {[0] = 0, [1] = 0, [2] = 0, [3] = 0},
                    ucShowCount = {[0] = 2, [1] = 2, [2] = 2, [3] = 2},
                    ucShowCards = {[0] = {46, 34}, [1] = {3, 48}, [2] = {22, 25}, [3] = {9, 39}}
                }
            },
            {delay = 9999, xyid = 0, data = {stepName = "首次出牌提示", step = 3}}
        },
        {
            {delay = 0, xy = CF.GameProtocol.msgGameStep, data = {iGameStep = 4}},
            {delay = 0, xy = CF.GameProtocol.msgPower, data = {playStatus = {[0] = 1, [1] = 1, [2] = 1, [3] = 1}}},
            {delay = 0, xy = CF.GameProtocol.msgClock, data = {sClock = 20}},
            {delay = 0, xyid = 0, data = {stepName = "首次出牌", step = 4}}
        },
        {
            {delay = 0, xy = CF.GameProtocol.msgOutCard, data = {ucCardCount = 2, sCardType = 10, ucCard = {2, 15}, sSeat = 0}},
            {delay = 0, xy = CF.GameProtocol.msgPower, data = {playStatus = {[0] = 2, [1] = 2, [2] = 2, [3] = 2}}},
            {delay = 1, xy = CF.GameProtocol.msgGameStep, data = {iGameStep = 5}},
            {
                delay = 0,
                xy = CF.GameProtocol.msgAllDirCards,
                data = {
                    ucHandCount = {[0] = 4, [1] = 5, [2] = 4, [3] = 1},
                    ucHandCards = {[0] = {6, 32, 46, 34}, [1] = {3, 48, 0, 0, 0}, [2] = {22, 0, 0, 0}, [3] = {39}},
                    ucDrawCount = {[0] = 0, [1] = 0, [2] = 0, [3] = 0},
                    ucDrawCards = {[0] = {}, [1] = {}, [2] = {}, [3] = {}},
                    ucOutCount = {[0] = 2, [1] = 1, [2] = 2, [3] = 5},
                    ucOutCards = {[0] = {2, 15}, [1] = {53}, [2] = {25, 79}, [3] = {18, 32, 20, 8, 9}},
                    ucOutCardType = {[0] = 10, [1] = 1, [2] = 10, [3] = 2},
                    ucShowCount = {[0] = 2, [1] = 2, [2] = 2, [3] = 2},
                    ucShowCards = {[0] = {46, 34}, [1] = {3, 48}, [2] = {22, 25}, [3] = {9, 39}}
                }
            },
            {delay = 9999, xyid = 0, data = {stepName = "第一轮比牌阶段1前卡点", stop = false}}
        },
        {
            {delay = 0, xy = CF.GameProtocol.msgGameStep, data = {iGameStep = 6}},
            {
                delay = 0,
                xy = CF.GameProtocol.msgWinLost,
                data = {
                    iMax = {[0] = 0, [1] = 0, [2] = 0, [3] = 0},
                    iResultArrayCount = 2,
                    iResultArray = {1, 2},
                    iResultType = 2,
                    iResultStatus = {2, 1},
                    iResultMult = {[0] = 72, [1] = 0, [2] = 0, [3] = 0},
                    iResultScore = {[0] = 144000, [1] = -12000, [2] = -120000, [3] = -12000},
                    iResultAttack = {[0] = 0, [1] = 0, [2] = 5, [3] = 0}
                }
            },
            {delay = 0, xy = CF.GameProtocol.msgUpdateGold, data = {source = 1, llAllScore = {[0] = 634000, [1] = 478000, [2] = 370000, [3] = 478000}}},
            {delay = 9999, xyid = 0, data = {stepName = "第一轮比牌阶段1", step = 5}}
        },
        {
            {
                delay = 0,
                xy = CF.GameProtocol.msgWinLost,
                data = {
                    iMax = {[0] = 0, [1] = 0, [2] = 0, [3] = 0},
                    iResultArrayCount = 2,
                    iResultArray = {1, 2},
                    iResultType = 1,
                    iResultStatus = {1, 2},
                    iResultMult = {[0] = 0, [1] = 0, [2] = 0, [3] = 1200},
                    iResultScore = {[0] = -200000, [1] = -478000, [2] = -200000, [3] = 878000},
                    iResultAttack = {[0] = 0, [1] = 5, [2] = 0, [3] = 0}
                }
            },
            {delay = 0, xy = CF.GameProtocol.msgUpdateGold, data = {source = 1, llAllScore = {[0] = 434000, [1] = 0, [2] = 170000, [3] = 1356000}}},
            {delay = 9999, xyid = 0, data = {stepName = "第一轮比牌阶段2", step = 6}}
        },
        {
            {delay = 0, xy = CF.GameProtocol.msgReviveState, data = {iState = {[0] = 1, [1] = 4, [2] = 1, [3] = 1}, iTime = {[0] = 0, [1] = 0, [2] = 0, [3] = 0}}},
            {delay = 0, xy = CF.GameProtocol.msgGameRound, data = {iMult = 1, iRound = 2}},
            {delay = 0, xy = CF.GameProtocol.msgGameStep, data = {iGameStep = 3}},
            {
                delay = 0,
                xy = CF.GameProtocol.msgAllDirCards,
                data = {
                    ucHandCount = {[0] = 8, [1] = 0, [2] = 8, [3] = 8},
                    ucHandCards = {[0] = {6, 32, 46, 34, 53, 54, 7, 21}, [1] = {}, [2] = {22, 5, 0, 0, 0, 0, 0, 0}, [3] = {59, 39, 0, 0, 0, 0, 0, 0}},
                    ucDrawCount = {[0] = 4, [1] = 0, [2] = 4, [3] = 7},
                    ucDrawCards = {[0] = {53, 54, 7, 21}, [1] = {}, [2] = {5, 0, 0, 0}, [3] = {59, 39, 0, 0, 0, 0, 0}},
                    ucOutCount = {[0] = 0, [1] = 0, [2] = 0, [3] = 0},
                    ucOutCards = {[0] = {}, [1] = {}, [2] = {}, [3] = {}},
                    ucOutCardType = {[0] = 0, [1] = 0, [2] = 0, [3] = 0},
                    ucShowCount = {[0] = 2, [1] = 0, [2] = 2, [3] = 2},
                    ucShowCards = {[0] = {46, 34}, [1] = {}, [2] = {22, 5}, [3] = {59, 39}}
                }
            },
            {delay = 0, xy = CF.GameProtocol.msgGameStep, data = {iGameStep = 4}},
            {delay = 0, xy = CF.GameProtocol.msgPower, data = {playStatus = {[0] = 1, [1] = 0, [2] = 1, [3] = 1}}},
            {delay = 5, xyid = 0, data = {stepName = "第二轮补牌", step = 7}}
        },
        {
            {delay = 0, xy = CF.GameProtocol.msgClock, data = {sClock = 20}},
            {delay = 0, xyid = 0, data = {stepName = "第二轮出牌", step = 8}}
        },
        {
            {delay = 0, xy = CF.GameProtocol.msgOutCard, data = {ucCardCount = 8, sCardType = 27, ucCard = {6, 32, 46, 34, 53, 54, 7, 21}, sSeat = 0}},
            {delay = 0, xy = CF.GameProtocol.msgPower, data = {playStatus = {[0] = 2, [1] = 0, [2] = 2, [3] = 2}}},
            {delay = 1, xy = CF.GameProtocol.msgGameStep, data = {iGameStep = 5}},
            {
                delay = 0,
                xy = CF.GameProtocol.msgAllDirCards,
                data = {
                    ucHandCount = {[0] = 0, [1] = 0, [2] = 3, [3] = 4},
                    ucHandCards = {[0] = {}, [1] = {}, [2] = {5, 0, 0}, [3] = {59, 0, 0, 0}},
                    ucDrawCount = {[0] = 0, [1] = 0, [2] = 0, [3] = 0},
                    ucDrawCards = {[0] = {}, [1] = {}, [2] = {}, [3] = {}},
                    ucOutCount = {[0] = 8, [1] = 0, [2] = 5, [3] = 5},
                    ucOutCards = {[0] = {6, 32, 46, 34, 53, 54, 7, 21}, [1] = {}, [2] = {8, 47, 101, 22, 48}, [3] = {39, 80, 13, 67}},
                    ucOutCardType = {[0] = 27, [1] = 0, [2] = 17, [3] = 22},
                    ucShowCount = {[0] = 2, [1] = 0, [2] = 2, [3] = 2},
                    ucShowCards = {[0] = {46, 34}, [1] = {}, [2] = {22, 5}, [3] = {59, 39}}
                }
            },
            {delay = 9999, xyid = 0, data = {stepName = "第二轮比牌阶段1", step = 9}}
        },
        {
            {delay = 0, xy = CF.GameProtocol.msgGameStep, data = {iGameStep = 6}},
            {
                delay = 0,
                xy = CF.GameProtocol.msgWinLost,
                data = {
                    iMax = {[0] = 0, [1] = 0, [2] = 0, [3] = 0},
                    iResultArrayCount = 1,
                    iResultArray = {4},
                    iResultType = 4,
                    iResultStatus = {1},
                    iResultMult = {[0] = 1740, [1] = 0, [2] = 0, [3] = 0},
                    iResultScore = {[0] = 1526000, [1] = 0, [2] = -170000, [3] = -1356000},
                    iResultAttack = {[0] = 0, [1] = 0, [2] = 0, [3] = 5}
                }
            },
            {delay = 0, xy = CF.GameProtocol.msgUpdateGold, data = {source = 1, llAllScore = {[0] = 1960000, [1] = 0, [2] = 0, [3] = 0}}},
            -- {delay = 9999, xyid = 0, data = {stepName = "卡一下1", stop = false}}
            {delay = 9999, xyid = 0, data = {stepName = "第二轮比牌阶段2", step = 10}}
        },
        {
            {delay = 0, xy = CF.GameProtocol.msgReviveState, data = {iState = {[0] = 1, [1] = 4, [2] = 4, [3] = 4}, iTime = {[0] = 0, [1] = 0, [2] = 0, [3] = 0}}}
        },
        {
            {delay = 2, xyid = 0, data = {stepName = "奖励获取", step = 12}}
        },
        {
            {delay = 0, xy = CF.GameProtocol.msgGameStep, data = {iGameStep = 7}},
            {
                delay = 0,
                xy = CF.GameProtocol.msgTotalResult,
                data = {
                    iBankruptcy = {[0] = 0, [1] = 1, [2] = 1, [3] = 1},
                    iScore = {[0] = 1970000, [1] = -490000, [2] = -490000, [3] = -990000},
                    iAttackTimes = {[0] = 2, [1] = 0, [2] = 0, [3] = 1},
                    iMaxCardType = {[0] = 27, [1] = 1, [2] = 17, [3] = 22}
                }
            },
            {delay = 0, xyid = 0, data = {stepName = "结算界面", step = 13}}
        }
    },
    protocolQueueDebug = {
        {
            {delay = 0, xy = CF.GameProtocol.msgGameStep, data = {iGameStep = 7}},
            {
                delay = 0,
                xy = CF.GameProtocol.msgTotalResult,
                data = {
                    iBankruptcy = {[0] = 0, [1] = 1, [2] = 1, [3] = 1},
                    iScore = {[0] = 1970000, [1] = -490000, [2] = -490000, [3] = -990000},
                    iAttackTimes = {[0] = 2, [1] = 0, [2] = 0, [3] = 1},
                    iMaxCardType = {[0] = 27, [1] = 1, [2] = 17, [3] = 22}
                }
            },
            {delay = 0, xyid = 0, data = {stepName = "结算界面", step = 13}}
        }
    },
    recvPass = {}
}

return config
�7