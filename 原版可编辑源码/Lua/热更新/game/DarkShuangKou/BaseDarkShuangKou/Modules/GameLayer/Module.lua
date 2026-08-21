local GameModule = CF.gameClass("GameModule", CF.ModuleBase)
local GameData = CF.gameRequire("Modules.GameLayer.GameData")
local CardLogic = CF.gameRequire("Logic.CardLogic")
local CardEnum = CF.gameRequire("Define.CardEnum")

GameModule.EVENT_TAKE_CARD = "EVENT_TAKE_CARD"
GameModule.EVENT_GAME_START = "EVENT_GAME_START"
GameModule.EVENT_GAME_END = "EVENT_GAME_END"
GameModule.EVENT_GAME_CLOCK = "EVENT_GAME_CLOCK"
GameModule.EVENT_GAME_PLAYER_START = "EVENT_GAME_PLAYER_START"
GameModule.EVENT_CLEAR_OUT_CARDS = "EVENT_CLEAR_OUT_CARDS"
GameModule.EVENT_HAND_CARD_CHANGED = "EVENT_HAND_CARD_CHANGED" -- 牌发生了变化
GameModule.EVENT_PLAYER_GET_POWER = "EVENT_PLAYER_GET_POWER"
GameModule.EVENT_PLAYER_SHOW_OUT_CARD = "EVENT_PLAYER_SHOW_OUT_CARD"
GameModule.EVENT_PLAYER_FRESH_OUT_CARD = "EVENT_PLAYER_FRESH_OUT_CARD" -- 刷新出牌，无动画，无音效
GameModule.EVENT_PLAYER_OUT_CARD = "EVENT_PLAYER_OUT_CARD"
GameModule.EVENT_SHOW_OUT_CARD_SIGN = "EVENT_SHOW_OUT_CARD_SIGN"
GameModule.EVENT_SHOW_TIP_CARD_TYPE = "EVENT_SHOW_TIP_CARD_TYPE"
GameModule.EVENT_SHOW_ROUND_ANI = "EVENT_SHOW_ROUND_ANI"
GameModule.EVENT_SHOW_ROUND_TEXT = "EVENT_SHOW_ROUND_TEXT"
GameModule.EVENT_SHOW_DOUBLE_ANI = "EVENT_SHOW_DOUBLE_ANI"
GameModule.EVENT_SHOW_START_RESULT_ANI = "EVENT_SHOW_START_RESULT_ANI"
GameModule.EVENT_CLEAR_TIME_OUT_CARD = "EVENT_CLEAR_TIME_OUT_CARD"
GameModule.EVENT_CLEAR_TIME_OUT_CARD_CLOCK = "EVENT_CLEAR_TIME_OUT_CARD_CLOCK"
GameModule.EVENT_SHOW_SCORE_ANI = "EVENT_SHOW_SCORE_ANI"
GameModule.EVENT_SHOW_GOLD_ANI = "EVENT_SHOW_GOLD_ANI"
GameModule.EVENT_SHOW_RESULT_TYPE_ANI = "EVENT_SHOW_RESULT_TYPE_ANI"
GameModule.EVENT_SHOW_BOOM_RESULT_TYPE_ANI = "EVENT_SHOW_BOOM_RESULT_TYPE_ANI" -- 本轮有炸弹，本轮无炸弹
GameModule.EVENT_SHOW_WIN_MULT_ANI = "EVENT_SHOW_WIN_MULT_ANI"
GameModule.EVENT_SHOW_WIN_WIN_ANI = "EVENT_SHOW_WIN_WIN_ANI"
GameModule.EVENT_SHOW_ATTACK_ANI = "EVENT_SHOW_ATTACK_ANI"
GameModule.EVENT_SHOW_ATTACK_MULT_ANI = "EVENT_SHOW_ATTACK_MULT_ANI"
GameModule.EVENT_BEFORE_ATTACK_EFFECT = "EVENT_BEFORE_ATTACK_EFFECT"
GameModule.EVENT_GAME_RULE_CHANGED = "EVENT_GAME_RULE_CHANGED"
GameModule.EVENT_PLAYER_TRUST = "EVENT_PLAYER_TRUST"
GameModule.EVENT_PLAYER_REVIVESTATE = "EVENT_PLAYER_REVIVESTATE"
GameModule.EVENT_CLEAR_TIME_RECHARGE = "EVENT_CLEAR_TIME_RECHARGE" -- 清除复活时间
GameModule.EVENT_CLEAR_PLAYER_INFO = "EVENT_CLEAR_PLAYER_INFO" -- 清除玩家信息界面
GameModule.EVENT_GAME_CONFIG_UPDATE = "EVENT_GAME_CONFIG_UPDATE"
GameModule.EVENT_SPECF_CARD = "EVENT_SPECF_CARD"
GameModule.EVENT_START_SHOW_WINLOST = "EVENT_START_SHOW_WINLOST" -- 开始显示输赢，这个时候要清空动画
GameModule.EVENT_HIDE_GAME_RULE = "EVENT_HIDE_GAME_RULE" -- 隐藏结算界面
GameModule.EVENT_SHOW_TOTAL_WINLOST = "EVENT_SHOW_TOTAL_WINLOST" -- 显示界面界面

function GameModule:ctor()
    GameModule.super.ctor(self)
    self:initDatas()
    self:initEvents()
    self._messageQueue = {}
    self._relink = false
    self._haveOutCards = false
    self._isNewRound = false
end

function GameModule:getSubXYDealList()
    if self._dealMessageScheduleIDs == nil then
        self._dealMessageScheduleIDs =
            cc.Director:getInstance():getScheduler():scheduleScriptFunc(
            function()
                self:triggerEvent()
            end,
            1 / 30,
            false
        )
    end

    return {
        {callback = handler(self, self.onMsgGameStart), msgClass = CF.GameProtocol.msgGameStart},
        {callback = handler(self, self.onMsgGameStep), msgClass = CF.GameProtocol.msgGameStep},
        {callback = handler(self, self.onMsgGameData), msgClass = CF.GameProtocol.msgGameData},
        {callback = handler(self, self.onMsgGameRound), msgClass = CF.GameProtocol.msgGameRound},
        {callback = handler(self, self.onMsgWinLost), msgClass = CF.GameProtocol.msgWinLost},
        {callback = handler(self, self.onMsgReviveState), msgClass = CF.GameProtocol.msgReviveState},
        {callback = handler(self, self.onMsgTotalResult), msgClass = CF.GameProtocol.msgTotalResult},
        {callback = handler(self, self.onMsgTrust), msgClass = CF.GameProtocol.msgTrust},
        {callback = handler(self, self.onMsgSpecfAllCards), msgClass = CF.GameProtocol.msgSpecfAllCards},
        {callback = handler(self, self.onMsgAllDirCards), msgClass = CF.GameProtocol.msgAllDirCards},
        {callback = handler(self, self.onMsgClock), msgClass = CF.GameProtocol.msgClock},
        {callback = handler(self, self.onMsgPower), msgClass = CF.GameProtocol.msgPower},
        {callback = handler(self, self.onMsgOutCard), msgClass = CF.GameProtocol.msgOutCard},
        {callback = handler(self, self.onMsgUpdateGold), msgClass = CF.GameProtocol.msgUpdateGold},
        {callback = handler(self, self.onMsgGameConfig), msgClass = CF.GameProtocol.msgGameConfig},
        {callback = handler(self, self.onMsgGameRevenueResp), msgClass = CF.GameProtocol.msgGameRevenueResp},
        {callback = handler(self, self.onMsgGameEnd), msgClass = CF.GameProtocol.msgGameEnd},
        {callback = handler(self, self.onMsgGameRelink), msgClass = CF.GameProtocol.msgGameRelink}
    }
end

function GameModule:getProxyEvents()
    return {
        -- DEBUG
        {module = CF.game:getModule("DarkShuangKouDebug"), eventKeyName = "EVENT_DEBUG_GAME_MODEL", callBack = "onDebug"},
        --
        {module = XH.sdkManager, eventKeyName = "EVENT_IAP_CALLBACK", callBack = "respBuyDiamond"},
        {module = CF.game, eventKeyName = "EVENT_START_SIGNAL_SEND", callBack = "onStartSignalSend"},
        {module = CF.game:getModule("CenterBtns"), eventKeyName = "EVENT_GAME_JOIN_50_MATCH_LIST", callBack = "onClearTable"},
        {module = XH.lobby:getModule("ReviveGift"), eventKeyName = "EVENT_REVIVE_CLOSE", callBack = "onReviveClose"},
        {module = XH.lobby:getModule("ReviveGift"), eventKeyName = "EVENT_REVIVE_RE_PAY", callBack = "onReviveRepay"},
        {module = XH.lobby:getModule("ReviveGift"), eventKeyName = "EVENT_REVIVE_PAY_SUCCESS", callBack = "onRevivePaySuccess"},
        {module = XH.playerData, eventKeyName = "EVENT_SR_CHANGED", callBack = "onDataChanged"},
        {module = CF.roomData, eventKeyName = "EVENT_PLAYER_START", callBack = "onPlayerStart"}
    }
end

function GameModule:onStartSignalSend(event)
    if self._mobileSignalScheduleIDs == nil then
        self._mobileSignalScheduleIDs =
            cc.Director:getInstance():getScheduler():scheduleScriptFunc(
            function()
                if CF.msgManager then
                    CF.msgManager:sendMobileSignalMsg()
                end
            end,
            3,
            false
        )
    end
end

function GameModule:onRevivePaySuccess(event)
    local selfSeat = CF.roomData:getSelfSeat()
    local reviveState = self._gameData:getReviveState(selfSeat)
    if reviveState == CF.GameDefine.tagReviveState.REVIVE_STATE_DIE then
        CF.TipTool.showToast("充值超时，无法复活，请重新开始对局")
        CF.viewManager:closeView("GoldBankruptcyView")
        self._isRevivePaySuccess = true
    end
end

function GameModule:respBuyDiamond(event)
    local code = event.data.code
    if code == 200 then
        CF.viewManager:closeView("PayTypeView")
        CF.viewManager:closeView("ShopPayCancel")
        CF.viewManager:closeView("ReviveGiftView")
    end
end

function GameModule:doServerToClientMessage(record, msgData, subXYID)
    print(os.date("%Y-%m-%d %H:%M:%S", os.time()) .. " [DarkShuangKou] doServerToClientMessage: " .. subXYID .. " [" .. table.tab2str(msgData) .. "]")
    if CF.GameProtocol.msgClock.XY_ID == subXYID then
        msgData.deadline = socket.gettime() + msgData.sClock
    end
    GameModule.super.doServerToClientMessage(self, record, msgData, subXYID)
end

function GameModule:initEvents()
    self._listenerEventOutCard = cc.EventListenerCustom:create("UICardLayer.UICardArea.onEventOutCards", handler(self, self.gameEventOutCards))
    cc.Director:getInstance():getEventDispatcher():addEventListenerWithFixedPriority(self._listenerEventOutCard, 1)

    self._listenerCheckedCard = cc.EventListenerCustom:create("UICardLayer.UICardArea.onEventCheckedCard", handler(self, self.gameEventCheckedCards))
    cc.Director:getInstance():getEventDispatcher():addEventListenerWithFixedPriority(self._listenerCheckedCard, 1)

    self._listenerForeground = cc.EventListenerCustom:create("APP_ENTER_FOREGROUND_EVENT", handler(self, self.onEnterForeground))
    cc.Director:getInstance():getEventDispatcher():addEventListenerWithFixedPriority(self._listenerForeground, 1)
end

function GameModule:onDestroy()
    GameModule.super.onDestroy(self)
    self:removeAllEventListeners()
end

function GameModule:removeAllEventListeners()
    local eventDispatcher = cc.Director:getInstance():getEventDispatcher()
    if self._listenerEventOutCard then
        eventDispatcher:removeEventListener(self._listenerEventOutCard)
    end

    if self._listenerCheckedCard then
        eventDispatcher:removeEventListener(self._listenerCheckedCard)
    end

    if self._listenerForeground then
        eventDispatcher:removeEventListener(self._listenerForeground)
    end

    if self._dealMessageScheduleIDs ~= nil then
        cc.Director:getInstance():getScheduler():unscheduleScriptEntry(self._dealMessageScheduleIDs)
        self._dealMessageScheduleIDs = nil
    end
    if self._mobileSignalScheduleIDs ~= nil then
        cc.Director:getInstance():getScheduler():unscheduleScriptEntry(self._mobileSignalScheduleIDs)
        self._mobileSignalScheduleIDs = nil
    end
end

-- 进入前台
function GameModule:onEnterForeground()
    -- if self:checkIsInRevive(true) and not CF.viewManager:isViewExist("PayTypeView") and not CF.viewManager:isViewExist("ShopPayCancel") then
    --     CF.TipTool.showLoading()
    --     self:stopReviveClockScheduler()
    --     self._reviveClockScheduler =
    --         cc.Director:getInstance():getScheduler():scheduleScriptFunc(
    --         function()
    --             CF.TipTool.hideLoading()
    --             if self:checkIsInRevive(true) and not CF.viewManager:isViewExist("PayTypeView") and not CF.viewManager:isViewExist("ShopPayCancel") then
    --                 self:sendCancelRevive()
    --             end
    --             self:stopReviveClockScheduler()
    --         end,
    --         5,
    --         false
    --     )
    -- end
end

function GameModule:initDatas()
    self:initGameData()
end

function GameModule:getGameData()
    return self._gameData
end

function GameModule:initGameData()
    if self._gameData then
        self._gameData:initDatas()
    else
        self._gameData = GameData.new()
    end
end

-- 触摸牌层背景
function GameModule:onTouchCardLayerBg()
end

function GameModule:onMsgGameRelink(msgData)
    self._relink = msgData.bIsRelink
    if self._relink == true then
        local resetRelink = function()
            self._relink = false
        end
        CF.SysTool.performWithDelayGlobal(resetRelink, 1)
        self._playingAni_winLostAni = false
    end
end

-- 玩家开始
function GameModule:onPlayerStart(event)
    if event.msg.seatID == CF.roomData:getSelfSeat() then
        self:initEveryTime()
        CF.roomData:setIsGameOver(false)
        -- 旁观视角准备时，不清除旁观玩家的UI
        if CF.roomData:getIsSeer() then
            return
        end
        if CF.roomData:isTeaching() then
            return
        end
        self:dispatchEvent({name = self.EVENT_GAME_PLAYER_START})
    end
end

-- 每小局游戏需要更新的数据，重新匹配也会走这边
function GameModule:initEveryTime()
    CF.roomData:initEveryTimesDatas()
    self._gameData:initEveryTime()
end

function GameModule:refreshHandCard(seat)
    self:dispatchEvent({name = self.EVENT_HAND_CARD_CHANGED, msg = {seat = seat}})
end

-----------------------------------------------------------------
------新的代码
-----------------------------------------------------------------
-- 调试代码
function GameModule:onDebug(event, func)
    if func then
        self[func](self, event.data)
    end
end

local function isTableAllValueSame(table1, table2)
    if #table1 ~= #table2 then
        return false
    end
    for key, value in pairs(table1) do
        local otherValue = table2[key]
        if value ~= otherValue then
            return false
        end
    end
    return true
end

-- 点起牌时，展示牌型和分数
function GameModule:gameEventCheckedCards(event)
    local selectCardIDs = event.selectCardIDs
    self._selectCards = self._selectCards or {}
    if not isTableAllValueSame(self._selectCards, selectCardIDs) then
        local cardsInfo = CardLogic.FindMaxCardType(selectCardIDs)
        local str = string.format("%s |%s|%d x %d|%d", table.concat(cardsInfo.cards, ","), cardsInfo.cardPlayType.name, cardsInfo.score, cardsInfo.cardPlayType.mult, cardsInfo.cardPlayType.id)
        self._selectCards = selectCardIDs
        print(os.date("%Y-%m-%d %H:%M:%S", os.time()) .. " [DarkShuangKou] Checked Cards Info: " .. str)
        if self._gameData:getPowerBySeat(CF.roomData:getSelfSeat()) == CF.GameDefine.tagPowerState.POWER_STATE_CAN_OUT then
            self:dispatchEvent({name = self.EVENT_SHOW_TIP_CARD_TYPE, msg = {cardTypeID = cardsInfo.cardPlayType.id, score = cardsInfo.score}})
        end
    end
end

--出牌
function GameModule:gameEventOutCards(event)
    if self._gameData:getGameStep() ~= CF.GameDefine.GAME_STEP.GAME_STEP_PLAY_CARDS then
        return
    end
    if self._gameData:getPowerBySeat(CF.roomData:getSelfSeat()) ~= CF.GameDefine.tagPowerState.POWER_STATE_CAN_OUT then
        return
    end
    if #event.outCardIDs == 0 then
        CF.TipTool.showToast("请选择要出的牌", 1)
        return
    end

    local cardIDs = event.outCardIDs
    local cardsInfo = CardLogic.FindMaxCardType(cardIDs)
    self:sendOutCard(cardIDs, cardsInfo.cardPlayType.id)
end

-----------------------------------------------------------------
------新的协议发送
-----------------------------------------------------------------
function GameModule:sendStreamPacket(msgObj, bNotFilter)
    if CF.roomData:isTeaching() then
        CF.game:getModule("Teaching"):sendStreamPacket(msgObj)
        return
    end
    -- 旁观玩家，心跳协议调用时传入notfilter，不屏蔽,不然打着打着会收不到消息
    if CF.roomData and CF.roomData:getIsSeer() and not bNotFilter then
        return
    end
    CF.netEngine.sendStreamPacket(msgObj)
end

function GameModule:sendOutCard(Cards, cardType)
    if Cards == nil then
        return
    end
    local msgOutCards = CF.GameProtocol.msgOutCard:new()
    msgOutCards.sSeat = CF.roomData:getSelfSeat()
    msgOutCards.ucCardCount = #Cards
    msgOutCards.ucCard = Cards
    msgOutCards.sCardType = cardType
    self:sendStreamPacket(msgOutCards)

    self:clearShowTipCardType()
    print(os.date("%Y-%m-%d %H:%M:%S", os.time()) .. " [SendMessage] msgOutCards: " .. table.tab2str(msgOutCards))
end

function GameModule:sendEndWait(gameStep)
    if gameStep == nil then
        gameStep = self._gameData:getGameStep()
    else
        if gameStep ~= self._gameData:getGameStep() then
            -- 防止动画交错
            return
        end
    end
    local msgAnimationFinished = CF.GameProtocol.msgAnimationFinished:new()
    msgAnimationFinished.sSeat = CF.roomData:getSelfSeat()
    msgAnimationFinished.sStep = gameStep
    local data = self._gameData:getWinLostData()
    if data.iResultType then
        msgAnimationFinished.sResultType = data.iResultType
    end

    self:sendStreamPacket(msgAnimationFinished)
    print(os.date("%Y-%m-%d %H:%M:%S", os.time()) .. " [SendMessage] msgAnimationFinished: " .. table.tab2str(msgAnimationFinished))
end

function GameModule:sendCancelRevive()
    self:sendRevive(0)
    -- XH.TipTool.showDebugTip("这个是调试代码，不是报错\n\n" .. debug.traceback())
end

function GameModule:sendRevive(isRevive)
    local sendMsg = CF.GameProtocol.msgRevive:new()
    sendMsg.iRevive = isRevive --0 不复活 1 复活

    self:sendStreamPacket(sendMsg)
    print(os.date("%Y-%m-%d %H:%M:%S", os.time()) .. " [SendMessage] msgRevive: " .. table.tab2str(sendMsg))
end

function GameModule:sendGameRevenueReq()
    local sendMsg = CF.GameProtocol.msgGameRevenueReq:new()
    self:sendStreamPacket(sendMsg)
    print(os.date("%Y-%m-%d %H:%M:%S", os.time()) .. " [SendMessage] msgGameRevenueReq")
end

-----------------------------------------------------------------
------新的协议处理
-----------------------------------------------------------------
function GameModule:onMsgGameStart(msgData)
    self._playerInfo = {}
    for i = 0, 3 do
        local playerData = CF.roomData:getPlayerDataBySeatId(i)
        if playerData then
            self._playerInfo[i] = {nickname = playerData:getNickName(), headUrl = playerData:getAvatarUrl()}
        end
    end
    self._isRevivePaySuccess = nil
    CF.goldManager:dispatchEvent({name = CF.goldManager.EVENT_MATCH_FLAG_SHOW, msg = {show = false}})
    CF.roomData:setIsGameStart(true)
    self._isShowTotalResult = false
    self:dispatchEvent({name = self.EVENT_GAME_START, msg = {}})
    if XH.lobby:getModule("TeachingGift") and XH.lobby:getModule("TeachingGift"):getAfterTeachingFirst() then
        XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.dzl25040801, {game_id = string.format("%d_%d", XH.areaData:getAreaID(), CF.roomData:getGameID())})
    end
    CF.game:getModule("Trust"):hideTrustView()
end

function GameModule:onMsgGameStep(msgData)
    self._lastGameStepTime = self._lastGameStepTime or socket.gettime()
    local time = socket.gettime() - self._lastGameStepTime
    print(os.date("%Y-%m-%d %H:%M:%S", os.time()) .. " gameStep: " .. self._gameData:getGameStep() .. " time: " .. time)

    self._gameData:setGameStep(msgData.iGameStep)
    if msgData.iGameStep == CF.GameDefine.GAME_STEP.GAME_STEP_SEND_CARDS then
        self:clearShowOutCards()
    elseif msgData.iGameStep == CF.GameDefine.GAME_STEP.GAME_STEP_PLAY_CARDS then
        self:clearShowOutCards()
    end
    self._lastGameStepTime = socket.gettime()
end

function GameModule:onMsgGameData(msgData)
    -- 轮次播报(进房时发送)
    self._gameData:setGameInfo(msgData)
    self:dispatchEvent({name = self.EVENT_GAME_RULE_CHANGED})
    self._gameData:setRoundInfo(msgData.iRound, msgData.iTotalRound)
    self:dispatchEvent({name = self.EVENT_SHOW_ROUND_TEXT, msg = {round = msgData.iRound, totalround = msgData.iTotalRound}})
end

function GameModule:onMsgGameRound(msgData)
    CF.viewManager:closeView("PayTypeView")
    CF.viewManager:closeView("ShopPayCancel")
    CF.viewManager:closeView("ReviveGiftView")
    -- 轮次播报
    self._playingAni_roundAni = true
    self._gameData:setRoundInfo(msgData.iRound)
    local round, totalround = self._gameData:getRoundInfo()
    if round > 0 then
        local callback2 = function()
            self._playingAni_roundAni = false
        end
        local callback = function()
            if msgData.iMult > 1 then
                self:dispatchEvent({name = self.EVENT_SHOW_DOUBLE_ANI, msg = {mult = msgData.iMult, callback = callback2}})
            else
                callback2()
            end
        end
        self:dispatchEvent({name = self.EVENT_SHOW_ROUND_ANI, msg = {round = round, totalround = totalround, callback = callback}})
    end
end

function GameModule:onMsgSpecfAllCards(msgData)
    if not cc.UserDefault:getInstance():getBoolForKey("KW_DARKSHUANGKOU_SET_CARD", true) then
        local handSize = {6, 8, 10, 12, 14, 16}
        local nowRound = self._gameData:getRoundInfo()
        local handCardSize = #self._gameData:getHandCardIDs(CF.roomData:getSelfSeat())
        local needCnt = handSize[nowRound] - handCardSize
        local cards = {}
        for i = 1, needCnt do
            table.insert(cards, msgData.ucCards[i])
        end
        CF.msgManager:sendSpecCard(cards)
    else
        self:dispatchEvent({name = self.EVENT_SPECF_CARD, msg = {cards = msgData.ucCards, cardCount = msgData.ucCount}})
    end
end

function GameModule:onMsgClock(msgData)
    if not CF.roomData:getIsGameStart() then
        -- 如果不是在游戏中，不处理倒计时消息
        return
    end

    self._gameData:setClock(msgData.sClock)
    self._dispatchMsgClock = {seat = msgData.sSeat}
end

function GameModule:onMsgPower(msgData)
    local data = clone(msgData.playStatus)
    for i = 0, 3 do
        local power = self._gameData:getPowerBySeat(i)
        if power ~= data[i] and data[i] == CF.GameDefine.tagPowerState.POWER_STATE_HAVE_OUT and i ~= CF.roomData:getSelfSeat() then
            self:dispatchEvent({name = self.EVENT_SHOW_OUT_CARD_SIGN, msg = {localSeat = CF.roomData:seatToLocal(i), show = true}})
        end
    end
    self._gameData:setPowers(data)
    self._dispatchMsgPower = msgData
end

-- 排序出牌，成牌型的在左边，不成牌型的在右边，返回排序后的牌，和无效牌
function GameModule:sortOutCards(cards)
    local tmpCards = clone(cards)
    local cardsInfo = CardLogic.FindMaxCardType(tmpCards)
    local leftCards = CardLogic.getCardIDsSort(cardsInfo.cards)
    local _, deletedCards = CardLogic.deleteCardIDs(tmpCards, cardsInfo.cards)
    local rightCards = CardLogic.getCardIDsSort(deletedCards)
    local totalCards = clone(rightCards)
    table.insertto(totalCards, leftCards)
    return totalCards, rightCards
end

function GameModule:onMsgOutCard(msgData)
    if msgData.sCardType == 0 then
        -- 出牌错误,如果有预显示,则要补回牌
        return
    end
    msgData.__round = self._gameData:getRoundInfo()
    self._dispatchMsgOutCards = self._dispatchMsgOutCards or {}
    self._dispatchMsgOutCards[msgData.sSeat] = msgData
end

function GameModule:dealMsgOutCard(msgData)
    if msgData.__round ~= self._gameData:getRoundInfo() then
        return
    end
    msgData.ucCard = CardLogic.getCardIDsSort(msgData.ucCard)

    self._gameData:clearHintCards() --清除提示数据

    if msgData.sSeat ~= CF.roomData:getSelfSeat() then
        self:dispatchEvent({name = self.EVENT_SHOW_OUT_CARD_SIGN, msg = {localSeat = CF.roomData:seatToLocal(msgData.sSeat), show = true}})
    else
        self._haveOutCards = true
        local sortCards, invalidCards = self:sortOutCards(msgData.ucCard)
        self:dispatchEvent({name = self.EVENT_PLAYER_OUT_CARD, msg = {seat = msgData.sSeat, outCardIDs = sortCards, invalidCards = invalidCards, cardType = msgData.sCardType}})
        if CF.roomData:isTeaching() then
            self:dispatchEvent({name = self.EVENT_CLEAR_TIME_OUT_CARD_CLOCK})
        end
    end
end

function GameModule:onMsgUpdateGold(msgData)
    if msgData.llAllScore[CF.roomData:getSelfSeat()] == 0 then
        -- 判断到自己破产了，提前请求复活礼包数据
        local data = {
            gameid = CF.roomData:getGameID(),
            sessionid = CF.roomData:getRoomLevel()
        }
        XH.lobby:getModule("ReviveGift"):reqRevive(data)
    end
    if msgData.source == CF.GameDefine.GoldUpdateSource.GOLD_UPDATE_SOURCE_GAME then
        self._updateGoldMessage = msgData
    else
        if self._updateGoldMessage then
            self._updateGoldMessage = msgData
            return
        end
        for i = 0, 3 do
            CF.game:getModule("Player"):updatePlayerScore(i, msgData.llAllScore[i])
        end
    end
end

function GameModule:onMsgGameConfig(msgData)
    local cnt = table.nums(CardEnum.tagCardTypeID) - 1
    if cnt == #msgData.mult then
        for i = 1, cnt do
            CardEnum.getCardTypeInfoByCardTypeID(i).mult = msgData.mult[i]
        end
    end

    -- CardEnum.CardScore.JOKER = 5
    -- CardEnum.CardScore.NOT_JOKER = 1
    -- CardEnum.CardBoomMult = 5

    self:dispatchEvent({name = self.EVENT_GAME_CONFIG_UPDATE})
end

function GameModule:onMsgGameRevenueResp(msgData)
    local selfSeat = CF.roomData:getSelfSeat()
    local totalWinLost = 0
    local maxRound = 0
    local aboutMe = {}
    for i = 1, msgData.count do
        maxRound = msgData.round[i]
        if msgData.winSeat[i] == selfSeat or msgData.loseSeat[i] == selfSeat then
            local data = {
                round = msgData.round[i],
                winSeat = msgData.winSeat[i],
                loseSeat = msgData.loseSeat[i],
                score = msgData.score[i] * (msgData.winSeat[i] == selfSeat and 1 or -1),
                cardType = msgData.cardType[i],
                attack = msgData.attack[i]
            }
            table.insert(aboutMe, data)
        end
    end

    local aboutMeRound = {}
    for i = 1, maxRound do
        aboutMeRound[i] = {}
    end
    for i = 1, #aboutMe do
        local round = aboutMe[i].round
        table.insert(aboutMeRound[round], aboutMe[i])
    end

    local aboutMeRoundCardType = {}
    for i = 1, maxRound do
        aboutMeRoundCardType[i] = {}
    end
    for i = 1, #aboutMeRound do
        local cardTypes = {}
        for j = 1, #aboutMeRound[i] do
            local cardType = aboutMeRound[i][j].cardType
            local findCardType = false
            for n = 1, #cardTypes do
                if cardTypes[n].cardType == cardType and aboutMeRound[i][j].winSeat == selfSeat then
                    cardTypes[n].score = cardTypes[n].score + aboutMeRound[i][j].score
                    findCardType = true
                end
            end
            if findCardType == false then
                table.insert(cardTypes, aboutMeRound[i][j])
            end
        end
        for j = 1, #cardTypes do
            aboutMeRoundCardType[i] = aboutMeRoundCardType[i] or {}
            table.insert(aboutMeRoundCardType[i], cardTypes[j])
        end
    end

    local myInfos = {}
    for i = 1, #aboutMeRoundCardType do
        for j = 1, #aboutMeRoundCardType[i] do
            table.insert(myInfos, aboutMeRoundCardType[i][j])
            totalWinLost = totalWinLost + aboutMeRoundCardType[i][j].score
        end
    end

    local datas = {
        curScore = totalWinLost,
        myInfos = myInfos
    }
    self._gameData:setGameRevenue(datas)

    if msgData.bIsFromReq then
        self:showGameRevenue()
    end
end

function GameModule:checkNextAnimation()
    local msg = self._gameData:getWinLostData()
    if msg.round ~= self._gameData:getRoundInfo() then
        -- 动画和界面对不上了，直接触发重连
        XH.netEngine:testReconnect(XH.areaData:getGoldSrsGroupID())
        return false
    end
    -- 如果是新一轮了，结算中的回调就停掉。
    if self._isNewRound == true then
        self._playingAni_winLostAni = false
        return false
    end
    -- 可能收不到大结算，这个不准
    if CF.roomData:getIsGameOver() then
        self._playingAni_winLostAni = false
        return false
    end
    return true
end

function GameModule:onMsgWinLost(msgData)
    self._isNewRound = false -- 开始结算，认为已经不是新一轮了
    if not self._playingAni_openOutCards and not self._playingAni_roundAni and not self._playingAni_winLostAni then
        -- 如果在开牌阶段，删除了动画，会导致牌不显示
        -- 开始播下一轮的动画，清除所有正在播放的动画
        self:dispatchEvent({name = self.EVENT_START_SHOW_WINLOST})
        self._playingAni_winLostAni = false
    end
    if self._relink then
        self._gameData:setWinLostData(msgData)
        self:sendEndWait()
        CF.TipTool.showToast("本轮比牌已经开始，请等待...")
        return
    end
    msgData.round = self._gameData:getRoundInfo()
    local fastMode = cc.UserDefault:getInstance():getBoolForKey("KW_TEST_DARKSHUANGKOU_FAST_MODE", false)
    if fastMode then
        self._gameData:setWinLostData(msgData)
        self:sendEndWait()
        if self._updateGoldMessage then
            for i = 0, 3 do
                CF.game:getModule("Player"):updatePlayerScore(i, self._updateGoldMessage.llAllScore[i])
            end
            self._updateGoldMessage = nil
        end
        return
    end
    self._dispatchMsgWinLost = msgData
    CF.viewManager:closeView("PayTypeView")
    CF.viewManager:closeView("ShopPayCancel")
    CF.viewManager:closeView("ReviveGiftView")
end

function GameModule:dealMsgWinLost(msgData)
    self._gameData:setWinLostData(msgData)
    local dealMsgWinLost2 = function()
        self._playingAni_winLostAni = true
        local showResultType = function()
            if self:checkNextAnimation() then
                self:dispatchEvent({name = self.EVENT_SHOW_RESULT_TYPE_ANI, msg = {resultType = msgData.iResultType}})
            end
        end
        if msgData.iResultType == msgData.iResultArray[#msgData.iResultArray] then -- 第一次比较，先显示有无炸弹
            local bHaveBoom = false
            if table.has(msgData.iResultArray, CardEnum.CardType.BOOM.id) then
                bHaveBoom = true
            end
            self:dispatchEvent({name = self.EVENT_SHOW_BOOM_RESULT_TYPE_ANI, msg = {bHaveBoom = bHaveBoom, callback = showResultType}})
        else
            showResultType()
        end
        self._isNeedCollectCards = false
        local msg = self._gameData:getWinLostData()
        if msg.iResultStatus[1] == 1 then
            self._isNeedCollectCards = true
        end
    end
    CF.SysTool.performWithDelayGlobal(dealMsgWinLost2, 0.1)
end

-- 复活
function GameModule:onMsgReviveState(msgData)
    self._gameData:setReviveState(msgData.iState)
    local timeoutCallback = function()
        self:sendCancelRevive()
    end
    local myState = msgData.iState[CF.roomData:getSelfSeat()]
    if myState == CF.GameDefine.tagReviveState.REVIVE_STATE_REVIVE or (myState == CF.GameDefine.tagReviveState.REVIVE_STATE_RECHARGING and self._relink) then
        msgData.timeoutCallback = timeoutCallback
    end
    msgData.deadTime = {}
    for i = 0, 3 do
        msgData.deadTime[i] = msgData.iTime[i] + os.time()
    end
    self:dispatchEvent({name = self.EVENT_PLAYER_REVIVESTATE, msg = msgData})
    local selfSeat = CF.roomData:getSelfSeat()
    if not self:isServerSeatVaild(selfSeat) then
        return
    end

    if myState == CF.GameDefine.tagReviveState.REVIVE_STATE_DIE or myState == CF.GameDefine.tagReviveState.REVIVE_STATE_LIVE then
        CF.TipTool.hideLoading()
    end
    if myState == CF.GameDefine.tagReviveState.REVIVE_STATE_REVIVE or (myState == CF.GameDefine.tagReviveState.REVIVE_STATE_RECHARGING and self._relink) then
        local rechargeCallback = function()
            self:sendRevive(1)
        end
        local closeCallback = function()
            self:sendCancelRevive()
        end
        local reqReviveInfoCallback = function(success)
            local playSound = function()
                if CF and CF.soundManager and CF.soundManager.playSoundReviveGiftPop then
                    CF.soundManager:playSoundReviveGiftPop()
                end
            end
            if success then
                if CF.roomData:getIsGameOver() == true then
                    return
                end
                if CF.viewManager:isViewExist("ReviveGiftView") then
                    return
                end
                CF.viewManager:openView(
                    "ReviveGiftView",
                    nil,
                    {
                        rechargeCallback = rechargeCallback,
                        closeCallback = closeCallback,
                        clock = msgData.deadTime[selfSeat],
                        playSound = playSound,
                        gameid = CF.roomData:getGameID(),
                        roomLevel = CF.roomData:getRoomLevel()
                    }
                )
            end
        end
        local gifts, sessionid = XH.lobby:getModule("ReviveGift"):getReviveGiftInfo()
        if #gifts > 0 and sessionid == CF.roomData:getRoomLevel() then
            reqReviveInfoCallback(true)
        else
            local data = {
                gameid = CF.roomData:getGameID(),
                sessionid = CF.roomData:getRoomLevel()
            }
            XH.lobby:getModule("ReviveGift"):reqRevive(data, reqReviveInfoCallback)
        end
    end
    if myState == CF.GameDefine.tagReviveState.REVIVE_STATE_RECHARGING then
        XH.lobby:getModule("ReviveGift"):updateDeadTime(msgData.deadTime[selfSeat])
    end
end

function GameModule:checkIsInRevive(onlyRecharging)
    local selfSeat = CF.roomData:getSelfSeat()
    local reviveState = self._gameData:getReviveState(selfSeat)
    if onlyRecharging then
        if reviveState == CF.GameDefine.tagReviveState.REVIVE_STATE_RECHARGING then
            return true
        end
    else
        if reviveState == CF.GameDefine.tagReviveState.REVIVE_STATE_REVIVE or reviveState == CF.GameDefine.tagReviveState.REVIVE_STATE_RECHARGING then
            return true
        end
    end
    return false
end

function GameModule:onMsgTotalResult(msgData)
    CF.roomData:setIsGameOver(true)
    self:dispatchEvent({name = self.EVENT_CLEAR_TIME_RECHARGE}) -- 清除充值倒计时
    self:dispatchEvent({name = self.EVENT_CLEAR_TIME_OUT_CARD}) -- 清除出牌倒计时
    self:dispatchEvent({name = self.EVENT_CLEAR_PLAYER_INFO})
    CF.viewManager:closeView("PayTypeView")
    CF.viewManager:closeView("ShopPayCancel")
    CF.viewManager:closeView("ReviveGiftView")
    CF.game:getModule("Trust"):hideTrustView()
    self._gameData:clearTrustData()
    for i = 0, 3 do
        local msg = {sTrustSeat = i, bTrust = false}
        self:dispatchEvent({name = self.EVENT_PLAYER_TRUST, msg = msg})
    end
    self._isWaitSRFlush = true
    XH.playerData:flushGoldCoin()
    self._dispatchMsgTotalResult = msgData
    if msgData.bIsException then
        CF.TipTool.showToast("游戏异常解散")
    end
end

function GameModule:onMsgTrust(msgData)
    if msgData.sTrustSeat == CF.roomData:getSelfSeat() then
        if msgData.bTrust then
            self:dispatchEvent({name = self.EVENT_HIDE_GAME_RULE})
        end
    end
    self._gameData:setTrustData(msgData.sTrustSeat, msgData.bTrust)
    self:dispatchEvent({name = self.EVENT_PLAYER_TRUST, msg = msgData})
end

function GameModule:showWinMultAni()
    if not self:checkNextAnimation() then
        return
    end
    local msgData = self._gameData:getWinLostData()
    local mults = {}
    for i = 0, 3 do
        local tOutCardIDs = self._gameData:getOutCard()
        table.insert(mults, {localSeat = CF.roomData:seatToLocal(i), mult = msgData.iResultMult[i], cards = tOutCardIDs[i]})
    end
    local showAni = function()
        if self:checkNextAnimation() then
            self:dispatchEvent({name = self.EVENT_SHOW_WIN_MULT_ANI, msg = {mults = mults}})
        end
    end
    CF.SysTool.performWithDelayGlobal(showAni, 0.3)
end

function GameModule:getAttackInfo(callback)
    local data = {
        localAttackFromList = {},
        localAttackToList = {},
        cardTypeList = {},
        iResultAttack = {}
    }
    local msgData = self._gameData:getWinLostData()
    local scores = msgData.iResultScore
    local _, cardTypes = self._gameData:getOutCard()
    if (cardTypes == nil) or (#cardTypes == 0) then
        if callback then
            callback()
        end
        return data
    end

    for seat = 0, 3 do
        if scores[seat] > 0 then
            local localSeat = CF.roomData:seatToLocal(seat)
            table.insert(data.localAttackFromList, localSeat)
            data.cardTypeList[localSeat] = CardEnum.getCardTypeInfoByCardTypeID(cardTypes[seat]).cardType
            data.iResultAttack[localSeat] = msgData.iResultAttack[seat]
        elseif scores[seat] < 0 then
            local localSeat = CF.roomData:seatToLocal(seat)
            table.insert(data.localAttackToList, localSeat)
        end
    end
    return data
end

function GameModule:winMultAniCallback()
    if CF.roomData:isTeaching() then
        if CF.game:getModule("Teaching"):isWaitingTeach(handler(self, self.winMultAniCallback)) then
            if CF.game:getModule("Teaching"):getGuideStep() == 9 then
                local callback = function()
                    CF.game:getModule("Teaching"):clickNextGuide()
                end
                CF.SysTool.performWithDelayGlobal(callback, 0.1)
            end
            return
        end
    end
    if not self:checkNextAnimation() then
        return
    end
    -- 动画播放完成：输赢倍数
    -- 接下来播放：攻击前光效
    local data = self:getAttackInfo(handler(self, self.beforeAttackAniCallback))
    data.callback = handler(self, self.beforeAttackAniCallback)
    self:dispatchEvent({name = self.EVENT_BEFORE_ATTACK_EFFECT, msg = data})
end

function GameModule:beforeAttackAniCallback()
    if not self:checkNextAnimation() then
        return
    end
    -- 动画播放完成：攻击前光效
    -- 接下来播放：双赢动画 -- 双赢，三赢，平局
    local msgData = self._gameData:getWinLostData()
    if msgData.iResultScore == nil then -- 重连的时候，进入下一局，可能数据已清除
        return
    end
    local scores = msgData.iResultScore
    local zeroScoreCnt = 0
    local winScoreCnt = 0
    for _, value in pairs(scores) do
        if value == 0 then
            zeroScoreCnt = zeroScoreCnt + 1
        elseif value > 0 then
            winScoreCnt = winScoreCnt + 1
        end
    end
    if winScoreCnt > 1 then
        self:dispatchEvent({name = self.EVENT_SHOW_WIN_WIN_ANI, msg = {winType = winScoreCnt}})
    elseif zeroScoreCnt == 4 then
        self:dispatchEvent({name = self.EVENT_SHOW_WIN_WIN_ANI, msg = {winType = 0}})
    else
        self:showAttackAni()
    end
end

-- 攻击动画
function GameModule:showAttackAni()
    if not self:checkNextAnimation() then
        return
    end
    local data = self:getAttackInfo(handler(self, self.showAttackMultAni))
    local maxMult = 0
    local isResultAttack = false
    local msgData = self._gameData:getWinLostData()
    for _, mult in pairs(msgData.iResultMult) do
        if mult > maxMult then
            maxMult = mult
        end
    end
    for _, mult in pairs(msgData.iResultAttack) do
        if mult > 0 then
            isResultAttack = true
            break
        end
    end
    data.maxMult = maxMult
    data.isResultAttack = isResultAttack
    self:dispatchEvent({name = self.EVENT_SHOW_ATTACK_ANI, msg = data})
end

-- 暴击动画
function GameModule:showAttackMultAni()
    if not self:checkNextAnimation() then
        return
    end
    local msgData = self._gameData:getWinLostData()
    local attackMult = msgData.iResultAttack
    local localAttackMult = {}
    for i = 0, 3 do
        if attackMult[i] > 0 then
            table.insert(localAttackMult, {localSeat = CF.roomData:seatToLocal(i), mult = attackMult[i]})
        end
    end
    -- 暴击
    self:dispatchEvent({name = self.EVENT_SHOW_ATTACK_MULT_ANI, msg = {localAttackMult = localAttackMult}})
end

-- 分数动画
function GameModule:showScoreAni()
    if not self:checkNextAnimation() then
        return
    end
    local msgData = self._gameData:getWinLostData()
    local data = {}
    local isResultAttack = false
    for i = 0, 3 do
        if msgData.iResultAttack[i] > 0 then
            isResultAttack = true
            break
        end
    end

    for i = 0, 3 do
        local flags = {
            limit = (msgData.iMax[i] or 0) ~= 0,
            boom = isResultAttack
        }
        local score = msgData.iResultScore[i]
        table.insert(data, {localSeat = CF.roomData:seatToLocal(i), score = score, flags = flags})
    end
    self:dispatchEvent({name = self.EVENT_SHOW_SCORE_ANI, msg = {scores = data}})
end

function GameModule:showFlyGoldAni()
    if not self:checkNextAnimation() then
        return
    end
    if self._updateGoldMessage then
        for i = 0, 3 do
            CF.game:getModule("Player"):updatePlayerScore(i, self._updateGoldMessage.llAllScore[i])
        end
        self._updateGoldMessage = nil
    end
    local data = self:getAttackInfo(handler(self, self.collectCards))
    self:dispatchEvent({name = self.EVENT_SHOW_GOLD_ANI, msg = data})
end

function GameModule:collectCards()
    if not CF.roomData:getIsGameStart() then
        -- 可能游戏异常解散，就不收牌了
        self._playingAni_winLostAni = false
        return
    end
    if not self:checkNextAnimation() then
        -- 如果已经是新一轮动画了，就不收牌了
        self._playingAni_winLostAni = false
        return
    end
    -- local isLastRound = false
    -- local msgData = self._gameData:getWinLostData()
    -- if msgData.iResultStatus[1] == 1 then
    --     isLastRound = true
    -- end
    local callback = function()
        self._playingAni_winLostAni = false
        self:sendEndWait()
        if CF.roomData:isTeaching() then
            if not CF.game:getModule("Teaching"):isWaitingTeach() then
                CF.game:getModule("Teaching"):clickNextGuide()
            end
        end
    end
    if self._isNeedCollectCards then
        local round, totalround = self._gameData:getRoundInfo()
        if round == totalround then
            -- 最后一局结束不收牌
            callback()
        else
            local haveBankrupt = false
            for i = 0, 3 do
                if self._gameData:getReviveState(i) ~= CF.GameDefine.tagReviveState.REVIVE_STATE_DIE then
                    local playerData = CF.roomData:getPlayerDataBySeatId(i)
                    if playerData and playerData:getPlayTypeScore() == 0 then
                        haveBankrupt = true
                        break
                    end
                end
            end
            if haveBankrupt then
                -- 破产了，不收牌
                callback()
            else
                self:onCollectCards(callback)
            end
        end
    else
        callback()
    end
end

function GameModule:onMsgGameEnd(msgData)
    CF.roomData:setIsGameStart(false)
    self:dispatchEvent({name = self.EVENT_GAME_END})
    if XH.lobby:getModule("TeachingGift") and XH.lobby:getModule("TeachingGift"):getAfterTeachingFirst() then
        XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.dzl25040802, {game_id = string.format("%d_%d", XH.areaData:getAreaID(), CF.roomData:getGameID())})
        XH.lobby:getModule("TeachingGift"):setAfterTeachingFirst(false)
    end
end

function GameModule:onMsgAllDirCards(msgData)
    msgData.relink = self._relink
    local fastMode = cc.UserDefault:getInstance():getBoolForKey("KW_TEST_DARKSHUANGKOU_FAST_MODE", false)
    if fastMode then
        msgData.relink = true
        self:dispatchEvent({name = self.EVENT_CLEAR_TIME_OUT_CARD})
        self:dispatchEvent({name = self.EVENT_CLEAR_TIME_OUT_CARD_CLOCK})
        self:sendEndWait(CF.GameDefine.GAME_STEP.GAME_STEP_COMPARE_CARDS)
        self:sendEndWait(CF.GameDefine.GAME_STEP.GAME_STEP_SEND_CARDS)
    end
    msgData.__round = self._gameData:getRoundInfo()
    self._dispatchMsgAllDirCards = msgData
end

function GameModule:dealMsgAllDirCards(msgData)
    if msgData.__round ~= self._gameData:getRoundInfo() then
        return
    end
    self:clearShowTipCardType()
    if msgData.relink then
        self:dealMsgAllDirCardsRelink(msgData)
        return
    end
    if self._gameData:getGameStep() == CF.GameDefine.GAME_STEP.GAME_STEP_TOTAL_RESULT then -- 大结算
        self:dealMsgAllDirCardsTotalResult(msgData)
        return
    end
    local finalData = clone(msgData)

    for i = 0, 3 do
        if i ~= CF.roomData:getSelfSeat() then
            table.insertto(msgData.ucHandCards[i], msgData.ucOutCards[i])
        end
        msgData.ucHandCards[i] = CardLogic.getCardIDsSort(msgData.ucHandCards[i])
        msgData.ucOutCards[i] = CardLogic.getCardIDsSort(msgData.ucOutCards[i])
    end

    -- 先设置之前的手牌
    for i = 0, 3 do
        local handCardIDs = msgData.ucHandCards[i] or {} -- 如果有抽牌，需要先把抽牌的牌去出
        if msgData.ucDrawCount[i] > 0 then
            local _
            _, handCardIDs = CardLogic.deleteCardIDs(msgData.ucHandCards[i], msgData.ucDrawCards[i])
        end
        self._gameData:setHandCardIDs(i, handCardIDs)
        local openCardIDs = msgData.ucShowCards[i] or {}
        self._gameData:setOpenCardIDs(i, openCardIDs)
        self:dispatchEvent({name = self.EVENT_HAND_CARD_CHANGED, msg = {seat = i}})
    end

    self._haveOutCards = false

    -- 先检测是否是出牌
    local haveOut = false
    for i = 0, 3 do
        if msgData.ucOutCount[i] > 0 then
            haveOut = true
            break
        end
    end
    if haveOut then
        local function ShowOutCards()
            if msgData.__round ~= self._gameData:getRoundInfo() then
                for localSeat = 1, 4 do
                    self:dispatchEvent({name = self.EVENT_SHOW_OUT_CARD_SIGN, msg = {localSeat = localSeat, show = false}})
                end
                self._playingAni_openOutCards = false
                return
            end
            local aniComplete = 0
            local sortedCards = {}
            local invalidCards = {}
            for i = 0, 3 do
                local sortedCard, invalidCard = self:sortOutCards(msgData.ucOutCards[i])
                sortedCards[i] = sortedCard
                invalidCards[i] = invalidCard
            end
            local function aniCompleteFunc(localSeat)
                aniComplete = aniComplete + 1
                self:dispatchEvent({name = self.EVENT_SHOW_OUT_CARD_SIGN, msg = {localSeat = localSeat, show = false}})
                if aniComplete == 4 then
                    self:checkChatMessage(finalData)
                    self:allDirCardsFinalFlush(finalData)
                    local callback = function()
                        self:sendEndWait(CF.GameDefine.GAME_STEP.GAME_STEP_COMPARE_CARDS)
                    end
                    -- 为了动画看清延迟1秒
                    CF.SysTool.performWithDelayGlobal(callback, 1)
                end
                self._playingAni_openOutCards = false
            end
            self:dispatchEvent(
                {
                    name = self.EVENT_PLAYER_SHOW_OUT_CARD,
                    msg = {relink = false, outCardIDs = sortedCards, invalidCards = invalidCards, cardType = msgData.ucOutCardType, callback = aniCompleteFunc}
                }
            )
            self._gameData:setOutCard(msgData.ucOutCards, msgData.ucOutCardType)
        end

        self._playingAni_openOutCards = true
        if CF.roomData:isDebug() then
            ShowOutCards()
        else
            local showStartResultAni = function()
                self:dispatchEvent({name = self.EVENT_CLEAR_TIME_OUT_CARD})
                self:dispatchEvent({name = self.EVENT_SHOW_START_RESULT_ANI, msg = {callback = ShowOutCards}})
            end
            CF.SysTool.performWithDelayGlobal(showStartResultAni, 1)
        end
        return
    end

    -- 在检测是否是补牌
    local haveDraw = false
    for i = 0, 3 do
        if msgData.ucDrawCount[i] > 0 then
            haveDraw = true
            break
        end
    end
    msgData.callback = function()
        self._playingAni_takeCardAni = false
        self:allDirCardsFinalFlush(finalData)
        self:sendEndWait(CF.GameDefine.GAME_STEP.GAME_STEP_SEND_CARDS)
        local handCardIDs = self._gameData:getHandCardIDs(CF.roomData:getSelfSeat())
        local cardsInfo = CardLogic.FindMaxCardType(handCardIDs)
        self._gameData:setHintCards(cardsInfo.cards)
    end
    if haveDraw then
        self._playingAni_winLostAni = false
        self._isNewRound = true -- 发牌，认为是新一轮
        self._playingAni_takeCardAni = true
        local takeCards = function()
            self._dispatchMsgTakeCards = clone(msgData)
        end
        self:onCollectCards(takeCards)
    end
end

function GameModule:allDirCardsFinalFlush(finalData)
    for i = 0, 3 do
        finalData.ucHandCards[i] = CardLogic.getCardIDsSort(finalData.ucHandCards[i])
        finalData.ucOutCards[i] = CardLogic.getCardIDsSort(finalData.ucOutCards[i])
    end

    for i = 0, 3 do
        local handCardIDs = finalData.ucHandCards[i] or {}
        self._gameData:setHandCardIDs(i, handCardIDs)
        local openCardIDs = finalData.ucShowCards[i] or {}
        self._gameData:setOpenCardIDs(i, openCardIDs)
        self:dispatchEvent({name = self.EVENT_HAND_CARD_CHANGED, msg = {seat = i}})
    end

    local sortedCards = {}
    local invalidCards = {}
    for i = 0, 3 do
        local sortedCard, invalidCard = self:sortOutCards(finalData.ucOutCards[i])
        sortedCards[i] = sortedCard
        invalidCards[i] = invalidCard
    end
    self._gameData:setOutCard(finalData.ucOutCards, finalData.ucOutCardType)
    self:dispatchEvent({name = self.EVENT_PLAYER_FRESH_OUT_CARD, msg = {outCardIDs = sortedCards, invalidCards = invalidCards, cardType = finalData.ucOutCardType}})
end

function GameModule:dealMsgAllDirCardsRelink(msgData)
    local finalData = clone(msgData)

    for i = 0, 3 do
        msgData.ucHandCards[i] = CardLogic.getCardIDsSort(msgData.ucHandCards[i])
        msgData.ucOutCards[i] = CardLogic.getCardIDsSort(msgData.ucOutCards[i])
    end

    -- 先设置之前的手牌
    for i = 0, 3 do
        local handCardIDs = msgData.ucHandCards[i] or {} -- 如果有抽牌，需要先把抽牌的牌去出
        self._gameData:setHandCardIDs(i, handCardIDs)
        local openCardIDs = msgData.ucShowCards[i] or {}
        self._gameData:setOpenCardIDs(i, openCardIDs)
        self:dispatchEvent({name = self.EVENT_HAND_CARD_CHANGED, msg = {seat = i}})
    end

    if self._gameData:getGameStep() == CF.GameDefine.GAME_STEP.GAME_STEP_TOTAL_RESULT then
        return
    end

    if self._gameData:getGameStep() == CF.GameDefine.GAME_STEP.GAME_STEP_PLAY_CARDS then
        for seat = 0, 3 do
            local sortedCard, invalidCard = self:sortOutCards(msgData.ucOutCards[seat])
            if #sortedCard > 0 then
                if seat ~= CF.roomData:getSelfSeat() then
                    self:dispatchEvent({name = self.EVENT_SHOW_OUT_CARD_SIGN, msg = {localSeat = CF.roomData:seatToLocal(seat), show = true}})
                else
                    self._haveOutCards = true
                    self:dispatchEvent({name = self.EVENT_PLAYER_OUT_CARD, msg = {seat = seat, outCardIDs = sortedCard, invalidCards = invalidCard, cardType = msgData.ucOutCardType[seat]}})
                end
            end
        end
        local handCardIDs = self._gameData:getHandCardIDs(CF.roomData:getSelfSeat())
        local cardsInfo = CardLogic.FindMaxCardType(handCardIDs)
        self._gameData:setHintCards(cardsInfo.cards)
        return
    end

    -- 先检测是否是出牌
    local haveOut = false
    for i = 0, 3 do
        if msgData.ucOutCount[i] > 0 then
            haveOut = true
            break
        end
    end
    if haveOut then
        local function ShowOutCards()
            local aniComplete = 0
            local sortedCards = {}
            local invalidCards = {}
            for i = 0, 3 do
                local sortedCard, invalidCard = self:sortOutCards(msgData.ucOutCards[i])
                sortedCards[i] = sortedCard
                invalidCards[i] = invalidCard
            end
            local function aniCompleteFunc(localSeat)
                aniComplete = aniComplete + 1
                self:dispatchEvent({name = self.EVENT_SHOW_OUT_CARD_SIGN, msg = {localSeat = localSeat, show = false}})
                if aniComplete == 4 then
                    self:allDirCardsFinalFlush(finalData)
                    self:sendEndWait(CF.GameDefine.GAME_STEP.GAME_STEP_COMPARE_CARDS)
                end
            end
            self:dispatchEvent(
                {
                    name = self.EVENT_PLAYER_SHOW_OUT_CARD,
                    msg = {relink = msgData.relink, outCardIDs = sortedCards, invalidCards = invalidCards, cardType = msgData.ucOutCardType, callback = aniCompleteFunc}
                }
            )
            self._gameData:setOutCard(msgData.ucOutCards, msgData.ucOutCardType)
        end
        ShowOutCards()
        return
    end
end

function GameModule:dealMsgAllDirCardsTotalResult(msgData)
    self:dispatchEvent({name = self.EVENT_CLEAR_TIME_OUT_CARD_CLOCK})
    self:allDirCardsFinalFlush(msgData)
    for localSeat = 1, 4 do
        self:dispatchEvent({name = self.EVENT_SHOW_OUT_CARD_SIGN, msg = {localSeat = localSeat, show = false}})
    end

    self._playingAni_resultCardAni = true
    local endResultCardAniFunc = function()
        self._playingAni_resultCardAni = false
    end
    CF.SysTool.performWithDelayGlobal(endResultCardAniFunc, 0.5)
end

function GameModule:triggerEvent()
    if not self._playingAni_roundAni and self._dispatchMsgTakeCards then
        self:dispatchEvent({name = self.EVENT_TAKE_CARD, msg = self._dispatchMsgTakeCards})
        self._dispatchMsgTakeCards = nil
    end
    if not self._playingAni_roundAni and not self._playingAni_takeCardAni and self._dispatchMsgPower then
        self:dispatchEvent({name = self.EVENT_PLAYER_GET_POWER, msg = self._dispatchMsgPower})
        self._dispatchMsgPower = nil
    end
    if not self._playingAni_roundAni and self._dispatchMsgClock then
        self:dispatchEvent({name = self.EVENT_GAME_CLOCK, msg = self._dispatchMsgClock})
        self._dispatchMsgClock = nil
    end
    if not self._playingAni_takeCardAni and not self._playingAni_roundAni and not self._dispatchMsgAllDirCards and self._dispatchMsgOutCards then
        for k, _ in pairs(self._dispatchMsgOutCards) do
            local msgData = self._dispatchMsgOutCards[k]
            self:dealMsgOutCard(msgData)
        end
        self._dispatchMsgOutCards = nil
    end
    if not self._playingAni_takeCardAni and self._dispatchMsgAllDirCards then
        self:dealMsgAllDirCards(self._dispatchMsgAllDirCards)
        self._dispatchMsgAllDirCards = nil
    end
    if not self._playingAni_resultCardAni and self._dispatchMsgTotalResult then
        self:dispatchEvent({name = self.EVENT_SHOW_TOTAL_WINLOST})
        CF.gameRequire("Modules.WinLostTotal.View").new(self._dispatchMsgTotalResult, self._playerInfo):showSelf()
        self._isShowTotalResult = true
        if not self._isWaitSRFlush then
            self:onBankruptGift()
        end
        CF.roomData:setIsGameStart(false)
        self._dispatchMsgTotalResult = nil
    end
    if not self._playingAni_winLostAni and self._dispatchMsgWinLost then
        self:dealMsgWinLost(clone(self._dispatchMsgWinLost))
        self._dispatchMsgWinLost = nil
    end
end

-----------------------------------------------------------------
------行为控制
-----------------------------------------------------------------
-- 收牌
GameModule.EVENT_COLLECT_CARDS = "EVENT_COLLECT_CARDS"
function GameModule:onCollectCards(callback)
    self:dispatchEvent({name = self.EVENT_COLLECT_CARDS, msg = {callback = callback}})
end

-----------------------------------------------------------------
------Debug
-----------------------------------------------------------------
-- debug使用
function GameModule:setDebugData(msgData)
    self._gameData:setWinLostData(msgData.onMsgWinLost)
    self._gameData:setOutCard(msgData.onMsgAllDirCards.ucOutCards, msgData.onMsgAllDirCards.ucOutCardType)
end

-- 清空出牌区
function GameModule:clearShowOutCards()
    self:dispatchEvent({name = self.EVENT_CLEAR_OUT_CARDS})
end

-- 清空提牌牌型提示
function GameModule:clearShowTipCardType()
    self:dispatchEvent({name = self.EVENT_SHOW_TIP_CARD_TYPE, msg = {cardTypeID = 0}})
end

-- 显示流水界面
function GameModule:showGameRevenue()
    local gameRevenueData = self._gameData:getGameRevenue()
    CF.gameRequire("Modules.GameDetails.View").new(gameRevenueData):showSelf()
end

function GameModule:onClearTable()
    self:dispatchEvent({name = self.EVENT_GAME_PLAYER_START})
    CF.game:getModule("Trust"):hideTrustView()
end

function GameModule:onBankruptGift()
    if CF.roomData:isTeaching() then
        return
    end
    if self._isRevivePaySuccess == true then
        return
    end
    if CF.roomData and CF.roomData:isDKGoldRoom() then
        local selfPlayer = CF.roomData:getSelfPlayerData()
        if selfPlayer then
            local confID = XH.goldConfigManager:getConfIDByGameID(30579, 4)
            if confID == nil then
                return
            end
            local goldInfo = XH.goldConfigManager:getGoldRoomInfoByIndex(confID)
            local roomInfo = goldInfo.roomInfo
            local roomLevelInfos = goldInfo.roomLevelInfos
            if not roomInfo or not roomLevelInfos then
                return
            end
            local roomLevel = CF.roomData:getRoomLevel()
            if roomLevelInfos[roomLevel] == nil then
                return
            end
            local minSr = roomLevelInfos[roomLevel].minrich or 0
            local playSR = selfPlayer:getPlayTypeScore()
            if playSR > minSr then
                return
            end
            if CF.viewManager:isViewExist("GoldBankruptcyView") or CF.viewManager:isViewExist("UnLimitGoldActView") then
                return
            end
            -- 有无限金币先无限金币
            if XH.lobby:getModule("UnlimitGoldAct"):judgeIsShowPopAct() then
                return
            end
            local lobbyId = CF.areaData:getLobbyID()
            local level = cc.UserDefault:getInstance():getIntegerForKey("_KW_DATA_LAST_JOIN_GOLD_LEVEL_" .. lobbyId)
            CF.viewManager:openView("GoldBankruptcyView", nil, {gameID = CF.roomData:getGameID(), goldNotEnough = true, roomFlag = level})
        end
    end
end

function GameModule:getHaveOutCards()
    return self._haveOutCards
end

-- 判断服务端位置是否有效
function GameModule:isServerSeatVaild(seat)
    return seat >= 0 and seat <= 3
end

function GameModule:onReviveClose()
    if self:checkIsInRevive() then
        self:sendCancelRevive()
    end
end

function GameModule:onDataChanged()
    if self._isWaitSRFlush and self._isShowTotalResult then
        self:onBankruptGift()
    end
    self._isWaitSRFlush = false
end

function GameModule:onReviveRepay()
    self:stopReviveClockScheduler()
end

function GameModule:stopReviveClockScheduler()
    if self._reviveClockScheduler ~= nil then
        cc.Director:getInstance():getScheduler():unscheduleScriptEntry(self._reviveClockScheduler)
        self._reviveClockScheduler = nil
    end
end

function GameModule:testKeyBoard()
    self:dispatchEvent({name = self.EVENT_START_SHOW_WINLOST})
end

function GameModule:checkChatMessage(msgData)
    -- pcall(
    --     function()
    --         local selfSeat = CF.roomData:getSelfSeat()
    --         local cardTypes = {
    --             [CardEnum.CardType.NONE.id] = {},
    --             [CardEnum.CardType.SINGLE.id] = {},
    --             [CardEnum.CardType.DOUBLE.id] = {},
    --             [CardEnum.CardType.TRIPLE.id] = {},
    --             [CardEnum.CardType.BOOM.id] = {}
    --         }
    --         for i = 0, 3 do
    --             local cardType = msgData.ucOutCardType[i]
    --             local cardTypeInfo = CardEnum.getCardTypeInfoByCardTypeID(cardType)
    --             table.insert(cardTypes[cardTypeInfo.cardType.id], {seat = i, cardTypeInfo = cardTypeInfo, cardIDs = msgData.ucOutCards[i]})
    --         end

    --         -- 有人放炸，炸的好
    --         if #cardTypes[CardEnum.CardType.BOOM.id] > 0 then -- 有人放炸
    --             for i = CardEnum.CardType.SINGLE.id, CardEnum.CardType.TRIPLE.id do
    --                 if #cardTypes[i] >= 2 then -- 至少2人
    --                     local smallSeat = -1
    --                     local smallCardTypeID = 100
    --                     for j = #cardTypes[i], 1, -1 do
    --                         if cardTypes[i][j].cardTypeInfo.id < smallCardTypeID then
    --                             smallSeat = cardTypes[i][j].seat
    --                             smallCardTypeID = cardTypes[i][j].cardTypeInfo.id
    --                         elseif cardTypes[i][j].cardTypeInfo.id == smallCardTypeID then
    --                             local smallCardIDs = msgData.ucOutCards[smallSeat]
    --                             local findSmallCardsInfo = CardLogic.FindMaxCardType(smallCardIDs)
    --                             local nowCardIDs = cardTypes[i][j].cardIDs
    --                             local findNowCardsInfo = CardLogic.FindMaxCardType(nowCardIDs)
    --                             if CardEnum.CardID2Power[findNowCardsInfo.cards[1]] < CardEnum.CardID2Power[findSmallCardsInfo.cards[1]] then
    --                                 smallSeat = cardTypes[i][j].seat
    --                                 smallCardTypeID = cardTypes[i][j].cardTypeInfo.id
    --                             end
    --                         end
    --                     end
    --                     if smallSeat ~= -1 and smallSeat ~= selfSeat then
    --                         local maxMult = 0
    --                         for j = #cardTypes[i], 1, -1 do
    --                             local mult = cardTypes[i][j].cardTypeInfo.mult
    --                             maxMult = math.max(mult, maxMult)
    --                         end
    --                         local cardCnt = 0
    --                         for j = #cardTypes[i], 1, -1 do
    --                             cardCnt = cardCnt + #cardTypes[i][j].cardIDs
    --                         end
    --                         if maxMult * cardCnt >= 600 then
    --                             if math.random(0, 100) > 50 then
    --                                 local message = "炸的好！"
    --                                 local isExist, index = self:isExistMsg(message)
    --                                 if isExist then
    --                                     CF.game:getModule("Chat"):onMsgClientForwardQaioPiHua({sSeat = smallSeat, strData = index .. "/" .. message})
    --                                     return
    --                                 end
    --                             end
    --                         end
    --                     end
    --                 end
    --             end
    --         end
    --     end
    -- )
end

return GameModule
