local GameModule = CF.gameClass("GameModule", CF.ModuleBase)
local GameData = CF.gameRequire("Modules.GameLayer.GameData")
local CardLogic = CF.gameRequire("Modules.GameLayer.CardLogic")

-- 开始游戏
GameModule.EVENT_GAME_START = "EVENT_GAME_START"
GameModule.EVENT_UPDATE_PROP_GUIDE = "EVENT_UPDATE_PROP_GUIDE"
GameModule.EVENT_GAME_STEP = "EVENT_GAME_STEP"
GameModule.EVENT_ALL_CARDS = "EVENT_ALL_CARDS"
GameModule.EVENT_SPECF_CARD = "EVENT_SPECF_CARD"
GameModule.EVENT_SEND_CARDS = "EVENT_SEND_CARDS"
GameModule.EVENT_UPDATE_CLOCK = "EVENT_UPDATE_CLOCK"
GameModule.EVENT_PLAYER_CARDS_COUNT = "EVENT_PLAYER_CARDS_COUNT"
-- 轮流抢关
GameModule.EVENT_ROB_SHUT_POWER = "EVENT_ROB_SHUT_POWER"
-- 抢关返回
GameModule.EVENT_ROB_SHUT_RESPONSE = "EVENT_ROB_SHUT_RESPONSE"
GameModule.EVENT_GAME_POWER = "EVENT_GAME_POWER"
GameModule.EVENT_OUT_CARD = "EVENT_OUT_CARD"
GameModule.EVENT_HOME_SHUT = "EVENT_HOME_SHUT"
GameModule.EVENT_BREAK_SHUT = "EVENT_BREAK_SHUT"
GameModule.EVENT_ALL_HAND_CARDS = "EVENT_ALL_HAND_CARDS"
GameModule.EVENT_GAME_END = "EVENT_GAME_END"

GameModule.EVENT_PLAYER_SHOW_OUT_CARD = "EVENT_PLAYER_SHOW_OUT_CARD"
GameModule.EVENT_CHECK_CARD = "EVENT_CHECK_CARD"
GameModule.EVENT_GAME_CHANGE_BTNS_STATE = "EVENT_GAME_CHANGE_BTNS_STATE"

GameModule.EVENT_HAND_CARD_CHANGED          = "EVENT_HAND_CARD_CHANGED"

function GameModule:ctor()
    GameModule.super.ctor(self)
    self:initDatas()
    self:initEvents()
end

function GameModule:getSubXYDealList()
    return {
        {callback = handler(self, self.onMsgGameStart), msgClass = CF.GameProtocol.msgGameStart},
        {callback = handler(self, self.onMsgGameStep), msgClass = CF.GameProtocol.msgGameStep},
        {callback = handler(self, self.onMsgAllCards), msgClass = CF.GameProtocol.msgAllCards},
        {callback = handler(self, self.onMsgSpecfCard), msgClass = CF.GameProtocol.msgSpecfCard},
        {callback = handler(self, self.onMsgHandCards), msgClass = CF.GameProtocol.msgHandCards},
        {callback = handler(self, self.onMsgPlayerCardsCount), msgClass = CF.GameProtocol.msgPlayerCardsCount},
        {callback = handler(self, self.onMsgClock), msgClass = CF.GameProtocol.msgClock},
        {callback = handler(self, self.onMsgRobShutPower), msgClass = CF.GameProtocol.msgRobShutPower},
        {callback = handler(self, self.onMsgRobShut), msgClass = CF.GameProtocol.msgRobShut},
        {callback = handler(self, self.onMsgPower), msgClass = CF.GameProtocol.msgPower},
        {callback = handler(self, self.onMsgOutCard), msgClass = CF.GameProtocol.msgOutCard},
        {callback = handler(self, self.onMsgHomeShut), msgClass = CF.GameProtocol.msgHomeShut},
        {callback = handler(self, self.onMsgGameEnd), msgClass = CF.GameProtocol.msgGameEnd},
        {callback = handler(self, self.onMsgMustOutCard), msgClass = CF.GameProtocol.msgMustOutCard},
        {callback = handler(self, self.onMsgBreakShut), msgClass = CF.GameProtocol.msgBreakShut},
        {callback = handler(self, self.onMsgAllHandCards), msgClass = CF.GameProtocol.msgAllHandCards},
        {callback = handler(self, self.onMsgAllDirCards), msgClass = CF.GameProtocol.msgAllDirCards},
        {callback = handler(self, self.onMsgUseMarker), msgClass = CF.GameProtocol.msgUseMarker},
    }
end

function GameModule:getProxyEvents()
    return {
        {module = CF.roomData, eventKeyName = "EVENT_PLAYER_START", callBack = "onPlayerStart"}
    }
end

function GameModule:initEvents()
    self._listenerEventOutCard = cc.EventListenerCustom:create("UICardLayer.UICardArea.onEventOutCards", handler(self, self.gameEventOutCards))
    cc.Director:getInstance():getEventDispatcher():addEventListenerWithFixedPriority(self._listenerEventOutCard, 1)

    self._listenerCheckedCard = cc.EventListenerCustom:create("UICardLayer.UICardArea.onEventCheckedCard", handler(self, self.gameEventCheckedCards))
    cc.Director:getInstance():getEventDispatcher():addEventListenerWithFixedPriority(self._listenerCheckedCard, 1)
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

--触摸牌层背景
function GameModule:onTouchCardLayerBg()
    CF.getLobbyModule("Im"):dispatchEvent({name = CF.getLobbyModule("Im").EVENT_HIDE_MESSAGELAYER})
    CF.getLobbyModule("Im"):dispatchEvent({name = CF.getLobbyModule("Im").EVENT_HIDE_NOTIFY_INVITE})
    self:dispatchEvent(
    {
        name = self.EVENT_GAME_CHANGE_BTNS_STATE,
        msg = {btnTagFlag = CF.GameDefine.GAME_BTNS_TAG_FLAG.BTN_OUTCARD, state = false}
    }
)
end

--#玩家开始
function GameModule:onPlayerStart(event)
    if event.msg.seatID == CF.roomData:getSelfSeat() then
        self:initEveryTime()
    end
end

--每小局游戏需要更新的数据
function GameModule:initEveryTime()
    CF.roomData:initEveryTimesDatas()
    CF.roomData:setIsGameOver(false)
    self._gameData:initEveryTime()
    CF.game:getModule("Marker"):initEveryTime()
end

function GameModule:onMsgGameStart(msgData)
    -- if self:isPlayBack() then
    --     if self._playBackData:getGameStartCount() > 0 then
    --         return
    --     end
    --     self._playBackData:addGameStartCount()
    -- end
    CF.game:getModule("Marker"):onAfterGameStart()

    CF.roomData:setIsGameStart(true)

    self:dispatchEvent({ name = self.EVENT_GAME_START })
    self:dispatchEvent({ name = self.EVENT_UPDATE_PROP_GUIDE })
    if CF.roomData:isGoldRoom() then
        CF.getLobbyModule("H5GameWidget"):setGameData(CF.roomData:getRoomID(), CF.gameSub:getGameNameByGameId(CF.roomData:getGameID()),"对局","BMC001")
        CF.getLobbyModule("H5GameWidget"):addH5GameWidget("game_begin",CF.roomData._gameID)
    end
    -- 隐藏牌有列表入口
    if not CF.roomData:getIsSeer() then
        CF.getLobbyModule("Im"):dispatchEvent({name = CF.getLobbyModule("Im").EVENT_HIDE_LIST_ENTRANCE})
        CF.getLobbyModule("Im"):dispatchEvent({name = CF.getLobbyModule("Im").EVENT_HIDE_MSG_ENTRANCE})
        CF.getLobbyModule("Im"):dispatchEvent({name = CF.getLobbyModule("Im").EVENT_HIDE_NOTIFY_INVITE})
    end
    -- 隐藏比赛场在线列表
    local onlineModule = CF.teaHouseManager:getTeaHouseOnlineModule()
    if onlineModule then
        onlineModule:dispatchEvent({name = onlineModule.EVENT_HIDE_ONLINE_LIST})
    end
end

function GameModule:onMsgGameStep(msgData)
    self._gameData:setGameStep(msgData.nStepID)
    self:dispatchEvent({ name = self.EVENT_GAME_STEP, msg = { gameStep =  msgData.nStepID} })
    CF.game:getModule("AddMultiple"):onUpdateStepID(msgData.nStepID)
end

function GameModule:onMsgAllCards(msgData)
    self._gameData:setAllCards(msgData.ucCards)
    self:dispatchEvent( { name = self.EVENT_ALL_CARDS, msg = {msgAllCards = msgData}})
end

function GameModule:onMsgSpecfCard(msgData)
    self:dispatchEvent({name = self.EVENT_SPECF_CARD, msg = {cards = msgData.ucCard, cardCount = msgData.ucCardCount}})
end

function GameModule:onMsgAllOutRecord(msgData)
    for i = 0, CF.roomData:getMaxPlayer() - 1 do
        for j = 1, msgData.sOutRecordCount[i] do
            local cardGroup = {}
            cardGroup.CardIDs = {}
            cardGroup.tType = msgData.sOutRecorfCardsType[i][j]
            for k = 1, msgData.ucOutRecordCardsCount[i][j] do
                table.insert(cardGroup.CardIDs, 1, msgData.ucOutRecordCards[i][j][k])
            end
            self._gameData:addOutCardRecord(i, cardGroup)
        end
    end
end

function GameModule:onMsgHandCards(msgData)
    if CF.roomData:getIsSeer() and not CF.roomData:isDelayWatch() then
        return
    end
    local handCardIDs = {}
    for i = 1, msgData.ucCount do
        table.insert(handCardIDs, msgData.ucCards[i])
    end
    --手牌排序
    local sortType = self._gameData:getSortType()
    local orderCards = CardLogic:ID2MyCards(handCardIDs)
    orderCards = CardLogic:sortCard(orderCards, sortType)
    orderCards = CardLogic:cards2UChar(orderCards)
    self._gameData:setHandCards(msgData.sSeat, orderCards)

    self:dispatchEvent({
        name = self.EVENT_SEND_CARDS,
        msg = {seat = msgData.sSeat, orderCards = orderCards, bShowAni = true}
    })
    self:dispatchEvent({name = self.EVENT_HAND_CARD_CHANGED})

    CF.game:getModule("Marker"):showMarkerIcon(true)
    --每局开始自动打开记牌器，
    local leftTime = CF.game:getModule("Marker"):getLeftTime()
    local leftRound = CF.game:getModule("Marker"):getGoldMarkerCnt()
    if leftTime > 0 or leftRound > 0 then
        local gameid = CF.roomData:getGameID()
        local isShow = cc.UserDefault:getInstance():getBoolForKey("SAVE_MARKER_CLICK_" .. gameid, true)
        CF.game:getModule("Marker"):showMarkerLine(isShow)
    end
end

function GameModule:onMsgPlayerCardsCount(msgData)
    self._gameData:setHandCardsCount(msgData.sSeat, msgData.ucCount)
    self:dispatchEvent({
        name = self.EVENT_PLAYER_CARDS_COUNT,
        msg = { seat = msgData.sSeat, bShow = msgData.bShow}
    })

    if CF.roomData:getIsSeer() and not CF.roomData:isDelayWatch() and msgData.sSeat == CF.roomData:getSelfSeat() then
        local handCardIDs = {}
        for i = 1, msgData.ucCount do
            table.insert(handCardIDs, 0)
        end
        --手牌排序
        local sortType = self._gameData:getSortType()
        local orderCards = CardLogic:ID2MyCards(handCardIDs)
        orderCards = CardLogic:cards2UChar(orderCards)
        self._gameData:setHandCards(CF.roomData:getSelfSeat(), orderCards)
        self:dispatchEvent({
            name = self.EVENT_SEND_CARDS,
            msg = {seat = msgData.sSeat, orderCards = orderCards, bShowAni = false}
        })
        self:dispatchEvent({name = self.EVENT_HAND_CARD_CHANGED})
    end
end

function GameModule:onMsgClock(msgData)
    if msgData.sClock > 60 or msgData.sClock < 0 then
        msgData.sClock = 0
    end

    self:dispatchEvent({
        name = self.EVENT_UPDATE_CLOCK,
        msg = {seat = msgData.sSeat, time = msgData.sClock}
    })
    XH.lobby:getModule("Sxvip.FriendInfo"):onOutStart(msgData.sSeat)
end

function GameModule:onMsgRobShutPower(msgData)
    self:dispatchEvent({
        name = self.EVENT_ROB_SHUT_POWER,
        msg = {seat = msgData.sSeat}
    })
end

function GameModule:onMsgRobShut(msgData)
    self:dispatchEvent({
        name = self.EVENT_ROB_SHUT_RESPONSE,
        msg = {seat = msgData.sSeat, bRobShut = msgData.bRobShut}
    })
end

function GameModule:onMsgPower(msgData)
    self._gameData:setCurrentPlayer(msgData.sPowerSeat)
    self:dispatchEvent({name = self.EVENT_GAME_POWER})
end

function GameModule:onMsgOutCard(msgData)
    self:dispatchEvent({ name = self.EVENT_OUT_CARD, msg = {msgOutCard = msgData} })
end

function GameModule:onMsgHomeShut(msgData)
    self:dispatchEvent({
        name = self.EVENT_HOME_SHUT,
        msg = {ucShutedCount = msgData.ucShutedCount, sShutedSeat = msgData.sShutedSeat, bSpring = msgData.bSpring}
    })
end

function GameModule:onMsgGameEnd(msgData)
    CF.roomData:setIsGameStart(false)
    self._gameData:setGameEndState(true)
    self:dispatchEvent( { name = self.EVENT_GAME_END })
end

function GameModule:onMsgMustOutCard(msgData)
    self._gameData:setMustOutCard( msgData.ucMustOutCardID)
end

function GameModule:onMsgBreakShut(msgData)
    self:dispatchEvent({
        name = self.EVENT_BREAK_SHUT,
        msg = {sBreakShutSeat = msgData.sBreakShutSeat, bBreakShut = msgData.bBreakShut}
    })
end

function GameModule:onMsgAllHandCards(msgData)
    local ucCards = msgData.ucCards
    local sortType = self._gameData:getSortType()
    for i = 1, msgData.ucPlayerCount do
        local orderCards = CardLogic:ID2MyCards(ucCards[i])
        orderCards = CardLogic:sortCard(orderCards, sortType)
        orderCards = CardLogic:cards2UChar(orderCards)
        self._gameData:setHandCardsCount(i - 1, #orderCards)
        self._gameData:setHandCards(i - 1, orderCards)
    end

    self:dispatchEvent({name = self.EVENT_ALL_HAND_CARDS, msg = {ucPlayerCount = msgData.ucPlayerCount, ucCards = msgData.ucCards}})
end

function GameModule:onMsgAllDirCards(msgData)

end

function GameModule:onMsgUseMarker(msgData)
    if msgData.seat == CF.roomData:getSelfSeat() then
        CF.game:getModule("Marker"):sendRequestUseGoldJPQ()
    end
end

function GameModule:onPassClick()
    local selfSeat = CF.roomData:getSelfSeat()
    if self._gameData:getCurrentPlayer() ~= selfSeat then
        return
    end

    CF.msgManager:sendPass()
end

--出牌
function GameModule:gameEventOutCards(event)
    local powerSeat = self._gameData:getCurrentPlayer()
    if powerSeat ~= CF.roomData:getSelfSeat() then
        return
    end
    local outCardIDs = event.outCardIDs
    self:clientOutCard(outCardIDs)
    CF.msgManager:sendOutCard(outCardIDs)
end

function GameModule:clientOutCard(outCardIDs)
    --客户端直接显示出牌
    self:dispatchEvent({
        name = self.EVENT_PLAYER_SHOW_OUT_CARD,
        msg = {seat = CF.roomData:getSelfSeat(), outCardIDs = outCardIDs}
    })
end

--选中手牌后触发事件
--用于更新"出牌"按钮状态以及智能提示
--event.haveUnSelect为true表示有牌被提起，false表示没有牌被提起
function GameModule:gameEventCheckedCards(event)
    local powerSeat = self._gameData:getCurrentPlayer()
    if powerSeat ~= CF.roomData:getSelfSeat() then
        return
    end

    local selectCardIDs = event.selectCardIDs
    self:dispatchEvent({
        name = self.EVENT_CHECK_CARD,
        msg = {selectCardIDs = selectCardIDs}
    })
end

return GameModule
