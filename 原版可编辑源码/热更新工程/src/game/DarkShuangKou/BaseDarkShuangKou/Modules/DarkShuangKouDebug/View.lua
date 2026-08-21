local DarkShuangKouDebugView = CF.gameClass("DarkShuangKouDebugView", CF.ViewBase)

function DarkShuangKouDebugView:ctor(param)
    param = param or {}
    DarkShuangKouDebugView.super.ctor(self, param)

    self:initUI()
    self._handCards = {
        [0] = {},
        [1] = {},
        [2] = {},
        [3] = {}
    }
    self._outCards = {
        [0] = {},
        [1] = {},
        [2] = {},
        [3] = {}
    }
end

function DarkShuangKouDebugView:getCSBPath()
    return CF.gameResourceRootPath .. "DarkShuangKou/GameLayer/CSB/DebugLayer.csb"
end

function DarkShuangKouDebugView:getBindingInfo()
    return {
        ["_KW_PANAEL_BG"] = {varName = "_settingBg", onTouchEnded = "onBtnClose"},
        ["_KW_PANAEL_DEBUG_ROOT"] = {varName = "_debugRoot"},
        ["_KW_BTN_CLOSE"] = {varName = "_btnClose", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onBtnClose"},
        ["_DEBUG_LIST"] = {varName = "_debugList"},
        ["_KW_CLICK_TEXT"] = {varName = "_btnText"},
        ["_KW_DEBUG_OPEN_BTN"] = {varName = "_btnDebug", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onBtnOpen"}
    }
end

function DarkShuangKouDebugView:initUI()
    self._debugList:setItemModel(self._btnText)
    self._debugList:removeAllItems()
    self._config = self:getConfig()
    for index, config in ipairs(self._config) do
        self._debugList:pushBackDefaultItem()
        local item = self._debugList:getItem(index - 1)
        local name = item:getChildByName("_TEST_NAME")
        name:setString(config.name)
        item:setTouchEnabled(true)
        item:addTouchEventListener(handler(self, self.onNameClicked))
        item:setTag(index)
    end
end

function DarkShuangKouDebugView:onNameClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    local index = send:getTag()

    self:prepraData()
    if (self._config[index].func) then
        self._config[index].func(self._config[index].ext)
    end
end

--进入动画
function DarkShuangKouDebugView:moveInAnimation()
    if self._debugRoot then
        self._debugRoot:stopAllActions()
        local yPos = self._debugRoot:getPositionY()
        local endPosX = 0
        local moveAni = cc.MoveTo:create(0.2, cc.p(endPosX, yPos))
        self._debugRoot:runAction(moveAni)
        self._settingBg:setVisible(true)
    end
end

--关闭动画
function DarkShuangKouDebugView:moveOutAnimation()
    if self._debugRoot then
        self._debugRoot:stopAllActions()

        local yPos = self._debugRoot:getPositionY()
        local endPosX = -self._debugRoot:getContentSize().width
        local moveAni = cc.MoveTo:create(0, cc.p(endPosX, yPos))

        local ani = cc.Sequence:create(moveAni)
        self._debugRoot:runAction(ani)
        self._settingBg:setVisible(false)
    end
end

function DarkShuangKouDebugView:onBtnClose(send, eventType)
    self:moveOutAnimation()
end

function DarkShuangKouDebugView:onBtnOpen(send, eventType)
    self:moveInAnimation()
end

function DarkShuangKouDebugView:getProxyEvents()
    local eventTable = {}
    return eventTable
end

function DarkShuangKouDebugView:getConfig()
    return {
        -- 流程类
        {name = "发牌动画", desc = "", func = handler(self, self.onSendCardAni)},
        {name = "倒计时开始", desc = "", func = handler(self, self.onMsgClock)},
        {name = "出牌动画-出", desc = "", func = handler(self, self.onOutCard)},
        {name = "出牌动画", desc = "", func = handler(self, self.onOutCardAni)},
        {name = "结束流程", desc = "", func = handler(self, self.onAnimationResult)},
        -- 调试类
        {name = "重置计数", desc = "", func = handler(self, self.onResetCnt)},
        {name = "轮次数据", desc = "", func = handler(self, self.onMsgGameData)},
        {name = "轮次数据2", desc = "", func = handler(self, self.onMsgGameRound)},
        {name = "收牌动画", desc = "", func = handler(self, self.test6)},
        {name = "牌型动画-无动画", desc = "", func = handler(self, self.onAnimationOpen), ext = {ani = false}},
        {name = "牌型动画-有动画", desc = "", func = handler(self, self.onAnimationOpen), ext = {ani = true}},
        {name = "攻击动画Lv1", desc = "", func = handler(self, self.onMsgAttack1), ext = {mult = 1}},
        {name = "攻击动画Lv2", desc = "", func = handler(self, self.onMsgAttack1), ext = {mult = 600}},
        {name = "攻击动画Lv3", desc = "", func = handler(self, self.onMsgAttack1), ext = {mult = 2000}},
        {name = "胜N倍", desc = "", func = handler(self, self.onWinMult)},
        {name = "显示胜负金币", desc = "", func = handler(self, self.onShowWinLostScore)},
        {name = "飞金币", desc = "", func = handler(self, self.onGoldAniCallback)},
        {name = "全部牌", desc = "", func = handler(self, self.onAllCards)},
        {name = "测提示", desc = "", func = handler(self, self.onTipsCards)},
        {name = "流水", desc = "", func = handler(self, self.onMsgGameRevenueResp)},
        {name = "全部结束", desc = "", func = handler(self, self.onMsgTotalResult)},
        {name = "做牌自测", desc = "", func = handler(self, self.onMsgSpecfAllCards)},
        -- {name = "托管", desc = "", func = handler(self, self.onMsgTrust)},
        -- {name = "配置", desc = "", func = handler(self, self.onMsgGameConfig)},
        {name = "摊手牌", desc = "", func = handler(self, self.onOpenCards)},
        {name = "复活", desc = "", func = handler(self, self.onRevive)}
    }
end

function DarkShuangKouDebugView:prepraData()
    CF.roomData.getSelfSeat = function()
        return 0
    end

    local outCards = {
        [0] = {2, 1, 3, 4, 5},
        [1] = {40, 42, 43},
        [2] = {12, 35, 34},
        [3] = {43}
    }
    local outCardType = {
        [0] = 1,
        [1] = 10,
        [2] = 17,
        [3] = 22
    }
    local onMsgAllDirCards = self:buildCards(nil, nil, nil, outCards, outCardType)
    local onMsgWinLost = {
        iResultType = CF.GameDefine.tagWinLostType.WIN_LOST_SINGLE,
        iResultScore = {[0] = 1000000, [1] = -123456, [2] = -12345, [3] = -1234567},
        iResultMult = {[0] = 123456, [1] = 0, [2] = 1234567, [3] = 0},
        iResultAttack = {[0] = 1, [1] = 0, [2] = 0, [3] = 0},
        iResultStatus = {1, 1, 1},
        iMax = {[0] = 0, [1] = 0, [2] = 0, [3] = 0}
    }
    local dataX = {
        onMsgWinLost = onMsgWinLost,
        onMsgAllDirCards = onMsgAllDirCards
    }
    CF.game:getModule("DarkShuangKouDebug"):dispatchMessage("EVENT_DEBUG_GAME_MODEL", dataX, "setDebugData")
end

function DarkShuangKouDebugView:onResetCnt()
    self._cnt = 0

    self._outCards = {
        [0] = {},
        [1] = {},
        [2] = {},
        [3] = {}
    }

    local data = self:buildCards()
    CF.game:getModule("DarkShuangKouDebug"):dispatchMessage("EVENT_DEBUG_GAME_MODEL", data, "onMsgAllDirCards")
end

function DarkShuangKouDebugView:onAllCards()
    local card = {}
    for i = 1, 108 do
        table.insert(card, i)
    end
    local handCards = {
        [0] = card
    }
    local data = self:buildCards(handCards)
    CF.game:getModule("DarkShuangKouDebug"):dispatchMessage("EVENT_DEBUG_GAME_MODEL", data, "onMsgAllDirCards")
end

function DarkShuangKouDebugView:onTipsCards()
    local card = {}
    for _ = 1, 16 do
        table.insert(card, math.random(1, 54))
    end
    local handCards = {
        [0] = card,
        [1] = {},
        [2] = {},
        [3] = {}
    }
    local data = self:buildCards(handCards)
    CF.game:getModule("DarkShuangKouDebug"):dispatchMessage("EVENT_DEBUG_GAME_MODEL", data, "onMsgAllDirCards")
    CF.game:getModule("DarkShuangKouDebug"):dispatchMessage("EVENT_DEBUG_GAME_MODEL", {playStatus = {[0] = 1, [1] = 1, [2] = 1, [3] = 1}}, "onMsgPower")
end

function DarkShuangKouDebugView:test6()
    CF.game:getModule("DarkShuangKouDebug"):dispatchMessage("EVENT_DEBUG_GAME_MODEL", nil, "onCollectCards")
end

function DarkShuangKouDebugView:buildCards(handCards, drawCards, showCards, outCards, outCardType)
    handCards = handCards or {[0] = {}, [1] = {}, [2] = {}, [3] = {}}
    drawCards = drawCards or {[0] = {}, [1] = {}, [2] = {}, [3] = {}}
    showCards = showCards or {[0] = {}, [1] = {}, [2] = {}, [3] = {}}
    outCards = outCards or {[0] = {}, [1] = {}, [2] = {}, [3] = {}}
    outCardType = outCardType or {[0] = {}, [1] = {}, [2] = {}, [3] = {}}
    local data = {}
    data.ucHandCards = {}
    data.ucHandCount = {}
    data.ucDrawCards = {}
    data.ucDrawCount = {}
    data.ucShowCards = {}
    data.ucShowCount = {}
    data.ucOutCards = {}
    data.ucOutCount = {}
    data.ucOutCardType = {}
    data.ucOutStep = {}
    for i = 0, 3 do
        data.ucHandCount[i] = 0
        data.ucDrawCount[i] = 0
        data.ucShowCount[i] = 0
        data.ucOutCount[i] = 0
    end
    data.ucHandCards = handCards
    for i = 0, table.nums(data.ucHandCards) - 1 do
        data.ucHandCount[i] = #data.ucHandCards[i]
    end

    data.ucDrawCards = drawCards
    for i = 0, table.nums(data.ucDrawCards) - 1 do
        data.ucDrawCount[i] = #data.ucDrawCards[i]
    end

    data.ucShowCards = showCards
    for i = 0, table.nums(data.ucShowCards) - 1 do
        data.ucShowCount[i] = #data.ucShowCards[i]
    end

    data.ucOutCards = outCards
    for i = 0, table.nums(data.ucOutCards) - 1 do
        data.ucOutCount[i] = #data.ucOutCards[i]
    end

    data.ucOutCardType = outCardType
    return data
end

function DarkShuangKouDebugView:onSendCardAni()
    local card = {}
    for _ = 1, 16 do
        table.insert(card, math.random(1, 54))
    end
    self._handCards = {
        [0] = card,
        [1] = card,
        [2] = card,
        [3] = card
    }
    local drawCards = {
        [0] = card,
        [1] = card,
        [2] = card,
        [3] = card
    }
    local showCards = {
        [0] = {2, 6},
        [1] = {40, 41},
        [2] = {12, 35},
        [3] = {30, 27}
    }
    local data = self:buildCards(self._handCards, drawCards, showCards)
    CF.game:getModule("DarkShuangKouDebug"):dispatchMessage("EVENT_DEBUG_GAME_MODEL", data, "onMsgAllDirCards")
end

function DarkShuangKouDebugView:onOutCard()
    for i = 0, 3 do
        local outCard = {}
        local outCardCnt = math.random(1, #self._handCards[i])
        if i == 0 then
            outCardCnt = 6
            outCard = {2, 3, 4, 5, 6, 7}
        else
            for cnt = 1, outCardCnt do
                if self._handCards[i][cnt] ~= 0 then
                    table.insert(outCard, self._handCards[i][cnt])
                else
                    table.insert(outCard, math.random(1, 54))
                end
            end
        end
        local data = {
            ucCard = outCard,
            ucCardCount = outCardCnt,
            sSeat = i
        }
        CF.game:getModule("DarkShuangKouDebug"):dispatchMessage("EVENT_DEBUG_GAME_MODEL", data, "onMsgOutCard")
    end
    CF.game:getModule("DarkShuangKouDebug"):dispatchMessage("EVENT_DEBUG_GAME_MODEL", {playStatus = {[0] = 2, [1] = 2, [2] = 2, [3] = 2}}, "onMsgPower")
end

function DarkShuangKouDebugView:onOutCardAni()
    local card = {}
    for _ = 1, 16 do
        table.insert(card, math.random(1, 54))
    end
    local outCards = {
        [0] = card,
        [1] = card,
        [2] = card,
        [3] = card
    }
    local outCardType = {
        [0] = 1,
        [1] = 14,
        [2] = 22,
        [3] = 26
    }
    local data = self:buildCards(nil, nil, nil, outCards, outCardType)
    CF.game:getModule("DarkShuangKouDebug"):dispatchMessage("EVENT_DEBUG_GAME_MODEL", data, "onMsgAllDirCards")
end

function DarkShuangKouDebugView:onAnimationOpen(data)
    self._cnt = self._cnt or 0
    self._cnt = self._cnt + 1

    local outCards = {}
    local outCardType = {}
    for i = 0, 3 do
        local cards = self._outCards[i]
        for _ = #cards, self._cnt - 1 do
            table.insert(cards, math.random(1, 108))
        end
        outCards[i] = cards
        self._outCards[i] = cards
        local CardLogic = CF.gameRequire("Logic.CardLogic")
        local cardsInfo = CardLogic.FindMaxCardType(cards)
        outCardType[i] = cardsInfo.cardPlayType.id
    end

    local data2 = self:buildCards(nil, nil, nil, outCards, outCardType)
    data2.relink = not data.ani
    CF.game:getModule("DarkShuangKouDebug"):dispatchMessage("EVENT_DEBUG_GAME_MODEL", data2, "onMsgAllDirCards")
end

function DarkShuangKouDebugView:onAnimationResult()
    local data = {
        iResultType = CF.GameDefine.tagWinLostType.WIN_LOST_TRIPLE,
        iResultScore = {[0] = -1000, [1] = 1000, [2] = 1000, [3] = -3000}, -- 双赢
        -- iResultScore = {[0] = -1000, [1] = 1000, [2] = 1000, [3] = 3000}, -- 三赢
        -- iResultScore = {[0] = -1000, [1] = 1000, [2] = -1000, [3] = -3000},
        iResultMult = {[0] = 0, [1] = 8000, [2] = 0, [3] = 0},
        iResultAttack = {[0] = 10, [1] = 0, [2] = 10, [3] = 0},
        iResultStatus = {1, 1, 1},
        iResultArray = {4},
        iMax = {[0] = 0, [1] = 0, [2] = 0, [3] = 0}
    }
    -- 平局
    -- local data = {
    --     iResultType = CF.GameDefine.tagWinLostType.WIN_LOST_SINGLE,
    --     iResultScore = {[0] = 0, [1] = 0, [2] = 0, [3] = 0}, -- 平局
    --     iResultMult = {[0] = 0, [1] = 0, [2] = 0, [3] = 0},
    --     iResultAttack = {[0] = 0, [1] = 0, [2] = 0, [3] = 0},
    --     iResultStatus = {1, 1, 1},
    --     iResultArray = {4}
    -- }
    CF.game:getModule("DarkShuangKouDebug"):dispatchMessage("EVENT_DEBUG_GAME_MODEL", data, "onMsgWinLost")
end

function DarkShuangKouDebugView:onMsgGameData()
    self._totalRound = 6
    self._roundCnt = self._roundCnt or 0
    self._roundCnt = (self._roundCnt % self._totalRound) + 1
    local data2 = {iRound = self._roundCnt, iTotalRound = self._totalRound, iMaximumLimit = 10000, iBaseScore = 1000, iTableFee = 444}
    CF.game:getModule("DarkShuangKouDebug"):dispatchMessage("EVENT_DEBUG_GAME_MODEL", data2, "onMsgGameData")
end

function DarkShuangKouDebugView:onMsgGameRound()
    self._totalRound = 6
    self._roundCnt = self._roundCnt or 0
    self._roundCnt = self._roundCnt % self._totalRound + 1
    local data2 = {iRound = self._roundCnt, iMult = 3}
    CF.game:getModule("DarkShuangKouDebug"):dispatchMessage("EVENT_DEBUG_GAME_MODEL", data2, "onMsgGameRound")
end

function DarkShuangKouDebugView:onMsgClock()
    CF.roomData:setIsGameStart(true)
    local data2 = {sClock = 13}
    CF.game:getModule("DarkShuangKouDebug"):dispatchMessage("EVENT_DEBUG_GAME_MODEL", data2, "onMsgClock")
end

function DarkShuangKouDebugView:onMsgAttack1(data2)
    self._cnt2 = self._cnt2 or 0
    self._cnt2 = self._cnt2 + 1
    local outCards = {
        [0] = {2, 1, 3, 4, 5},
        [1] = {40, 42, 43},
        [2] = {12, 35, 34},
        [3] = {43}
    }
    local x = {
        [0] = 1,
        [1] = 10,
        [2] = 17,
        [3] = 22
    }
    local outCardType = {
        [0] = x[self._cnt2 % 4],
        [1] = x[self._cnt2 % 4],
        [2] = x[self._cnt2 % 4],
        [3] = x[self._cnt2 % 4]
    }
    local onMsgAllDirCards = self:buildCards(nil, nil, nil, outCards, outCardType)
    local onMsgWinLost = {
        iResultType = CF.GameDefine.tagWinLostType.WIN_LOST_NONE,
        iResultScore = {[0] = -1000, [1] = 1000, [2] = -1000, [3] = -3000},
        iResultMult = {[0] = data2.mult, [1] = 0, [2] = 0, [3] = 0},
        iResultAttack = {[0] = 0, [1] = 0, [2] = 0, [3] = 0},
        iResultStatus = {1, 1, 1},
        iMax = {[0] = 0, [1] = 0, [2] = 0, [3] = 0}
    }
    local dataX = {
        onMsgWinLost = onMsgWinLost,
        onMsgAllDirCards = onMsgAllDirCards
    }
    CF.game:getModule("DarkShuangKouDebug"):dispatchMessage("EVENT_DEBUG_GAME_MODEL", dataX, "setDebugData")
    CF.game:getModule("DarkShuangKouDebug"):dispatchMessage("EVENT_DEBUG_GAME_MODEL", {}, "showAttackAni")
    self:moveOutAnimation()
end

-- 赢N倍
function DarkShuangKouDebugView:onWinMult()
    CF.game:getModule("DarkShuangKouDebug"):dispatchMessage("EVENT_DEBUG_GAME_MODEL", {}, "showWinMultAni")
end

-- 显示胜负金币
function DarkShuangKouDebugView:onShowWinLostScore()
    CF.game:getModule("DarkShuangKouDebug"):dispatchMessage("EVENT_DEBUG_GAME_MODEL", {}, "showScoreAni")
end

function DarkShuangKouDebugView:onGoldAniCallback()
    CF.game:getModule("DarkShuangKouDebug"):dispatchMessage("EVENT_DEBUG_GAME_MODEL", {}, "showFlyGoldAni")
end

-- 流水
function DarkShuangKouDebugView:onMsgGameRevenueResp()
    local data = {
        bIsFromReq = true,
        curScore = 30000000,
        count = 6,
        round = {1, 1, 1, 2, 2, 4},
        winSeat = {0, 0, 0, 1, 2, 3},
        loseSeat = {1, 2, 3, 0, 3, 0},
        cardType = {1, 2, 3, 4, 5, 6},
        score = {100, 2000, 3000, 40, 500, 30},
        attack = {0, 0, 0, 0, 0, 0}
    }

    -- 双赢测试数据
    -- CF.roomData.getSelfSeat = function()
    --     return 2
    -- end
    -- local data = {
    --     bIsFromReq = true,
    --     curScore = 30000000,
    --     count = 13,
    --     round = {1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2},
    --     winSeat = {3, 3, 3, 0, 0, 0, 0, 0, 0, 2, 3, 2, 3},
    --     loseSeat = {0, 1, 2, 1, 2, 3, 1, 2, 3, 0, 0, 1, 1},
    --     cardType = {10, 10, 10, 1, 1, 1, 17, 17, 17, 10, 10, 10, 10},
    --     score = {240, 240, 240, 6000, 6000, 200, 320, 320, 320, 120, 120, 2100, 2100},
    --     attack = {240, 240, 240, 6000, 6000, 200, 320, 320, 320, 120, 120, 2100, 2100}
    -- }

    -- CF.roomData.getSelfSeat = function()
    --     return 1
    -- end
    -- local data = {
    --     bIsFromReq = true,
    --     curScore = 30000000,
    --     count = 9,
    --     round = {1, 1, 1, 1, 1, 1, 1, 1, 1},
    --     winSeat = {1, 1, 1, 0, 0, 0, 3, 3, 3},
    --     loseSeat = {0, 2, 3, 1, 2, 3, 0, 1, 2},
    --     cardType = {17, 17, 17, 10, 10, 10, 1, 1, 1},
    --     score = {480, 480, 480, 240, 3000, 240, 40, 40, 40},
    --     attack = {480, 480, 480, 240, 3000, 240, 40, 40, 40}
    -- }
    CF.game:getModule("DarkShuangKouDebug"):dispatchMessage("EVENT_DEBUG_GAME_MODEL", data, "onMsgGameRevenueResp")
end

function DarkShuangKouDebugView:onMsgTotalResult()
    local data = {
        iMaxCardType = {[0] = 1, [1] = 10, [2] = 17, [3] = 22},
        iAttackTimes = {[0] = 1, [1] = 2, [2] = 0, [3] = 1},
        iScore = {[0] = 1000, [1] = 2000, [2] = -1000, [3] = -3000},
        iBankruptcy = {[0] = 0, [1] = 0, [2] = 0, [3] = 1}
    }
    self:moveOutAnimation()
    CF.game:getModule("DarkShuangKouDebug"):dispatchMessage("EVENT_DEBUG_GAME_MODEL", data, "onMsgTotalResult")
end

-- 复活数据
function DarkShuangKouDebugView:onRevive()
    local data = {
        iState = {
            [0] = CF.GameDefine.tagReviveState.REVIVE_STATE_LIVE,
            [1] = CF.GameDefine.tagReviveState.REVIVE_STATE_REVIVE,
            [2] = CF.GameDefine.tagReviveState.REVIVE_STATE_LIVE,
            [3] = CF.GameDefine.tagReviveState.REVIVE_STATE_LIVE
        },
        iTime = {[0] = 0, [1] = 20, [2] = 0, [3] = 0}
    }
    CF.game:getModule("DarkShuangKouDebug"):dispatchMessage("EVENT_DEBUG_GAME_MODEL", data, "onMsgReviveState")
end

function DarkShuangKouDebugView:onMsgSpecfAllCards()
    local data = CF.GameProtocol.msgSpecfHandCard:new()
    data.sSeat = 0
    data.ucCount = 108
    data.ucCards = {}
    for i = 1, 108 do
        table.insert(data.ucCards, i)
    end
    CF.game:getModule("DarkShuangKouDebug"):dispatchMessage("EVENT_DEBUG_GAME_MODEL", data, "onMsgSpecfAllCards")
end

-- 配置数据
function DarkShuangKouDebugView:onMsgGameConfig()
    local data = CF.GameProtocol.msgGameConfig.new()
    data.mult = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29}
    CF.game:getModule("DarkShuangKouDebug"):dispatchMessage("EVENT_DEBUG_GAME_MODEL", data, "onMsgGameConfig")
end

function DarkShuangKouDebugView:onMsgTrust()
    self._trustCnt = self._trustCnt or 0
    self._trustCnt = self._trustCnt + 1
    self._trustCnt = self._trustCnt % 4
    local data = {
        sTrustSeat = self._trustCnt,
        bTrust = true
    }
    CF.game:getModule("DarkShuangKouDebug"):dispatchMessage("EVENT_DEBUG_GAME_MODEL", data, "onMsgTrust")
end

function DarkShuangKouDebugView:onOpenCards()
    CF.game:getModule("DarkShuangKouDebug"):dispatchMessage("EVENT_DEBUG_GAME_MODEL", {iGameStep = CF.GameDefine.GAME_STEP.GAME_STEP_TOTAL_RESULT}, "onMsgGameStep")
    self._handCards = {
        [0] = {2, 3, 4, 1, 5, 6},
        [1] = {107, 108, 40, 41, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
        [2] = {12, 1, 35, 107, 108, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
        [3] = {1, 1, 30, 27, 1, 107, 108, 1, 1, 1, 1, 1, 1, 1, 1, 1}
    }
    local showCards = {
        [0] = {2, 6},
        [1] = {40, 41},
        [2] = {12, 35},
        [3] = {30, 27}
    }
    local data = self:buildCards(self._handCards, nil, showCards)
    CF.game:getModule("DarkShuangKouDebug"):dispatchMessage("EVENT_DEBUG_GAME_MODEL", data, "onMsgAllDirCards")
end

return DarkShuangKouDebugView
