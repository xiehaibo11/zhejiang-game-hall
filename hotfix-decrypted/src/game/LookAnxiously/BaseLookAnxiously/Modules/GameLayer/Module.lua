local GameModule = CF.gameClass("GameModule", CF.ModuleBase)
local GameData = CF.gameRequire("Modules.GameLayer.GameData")
local CardLogic = CF.gameRequire("Modules.GameLayer.CardLogic")
local CardEnum = CF.gameRequire("Define.CardEnum")

GameModule.EVENT_GAME_START = "EVENT_GAME_START"
GameModule.EVENT_UPDATE_CLOCK = "EVENT_UPDATE_CLOCK"
GameModule.EVENT_UPDATE_PLAYER_CARDS_COUNT = "EVENT_UPDATE_PLAYER_CARDS_COUNT"
GameModule.EVENT_ALL_HAND_CARDS = "EVENT_ALL_HAND_CARDS"
GameModule.EVENT_SEND_CARDS = "EVENT_SEND_CARDS"
GameModule.EVENT_ADD_CARDS = "EVENT_ADD_CARDS"
GameModule.EVENT_OUT_CARD = "EVENT_OUT_CARD"
GameModule.EVENT_GAME_POWER = "EVENT_GAME_POWER"
GameModule.EVENT_GAME_END = "EVENT_GAME_END"
GameModule.EVENT_ALL_CARDS = "EVENT_ALL_CARDS"
GameModule.EVENT_CHECK_CARD = "EVENT_CHECK_CARD"
GameModule.EVENT_PLAYER_SHOW_OUT_CARD = "EVENT_PLAYER_SHOW_OUT_CARD"
GameModule.EVENT_LEFT_CARDS_COUNT = "EVENT_LEFT_CARDS_COUNT"
GameModule.EVENT_GAME_CHANGE_BTNS_STATE = "EVENT_GAME_CHANGE_BTNS_STATE"
GameModule.EVENT_SPRING = "EVENT_SPRING"    -- 春天
GameModule.EVENT_FIRST_OUTCARD_INFO = "EVENT_FIRST_OUTCARD_INFO"    -- 是否出过牌

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
        {callback = handler(self, self.onMsgClock), msgClass = CF.GameProtocol.msgClock},
        {callback = handler(self, self.onMsgPower), msgClass = CF.GameProtocol.msgPower},
        {callback = handler(self, self.onMsgOutCard), msgClass = CF.GameProtocol.msgOutCard},
        {callback = handler(self, self.onMsgGameEnd), msgClass = CF.GameProtocol.msgGameEnd},
        -- {callback = handler(self, self.onMsgMustOutCard), msgClass = CF.GameProtocol.msgMustOutCard},
        {callback = handler(self, self.onMsgAllHandCards), msgClass = CF.GameProtocol.msgAllHandCards},
        -- {callback = handler(self, self.onMsgAllDirCards), msgClass = CF.GameProtocol.msgAllDirCards},
        {callback = handler(self, self.onMsgUseMarker), msgClass = CF.GameProtocol.msgUseMarker},
        {callback = handler(self, self.onMsgHandCards), msgClass = CF.GameProtocol.msgHandCards},
        {callback = handler(self, self.onMsgPlayerCardsCount), msgClass = CF.GameProtocol.msgPlayerCardsCount},
        {callback = handler(self, self.onMsgDrawCards), msgClass = CF.GameProtocol.msgDrawCards},
        {callback = handler(self, self.onMsgLeftCardsCount), msgClass = CF.GameProtocol.msgLeftCardsCount},
        {callback = handler(self, self.onMsgSpring), msgClass = CF.GameProtocol.msgSpring},
        {callback = handler(self, self.onMsgObviousCardsDataEx), msgClass = CF.GameProtocol.msgObviousCardsDataEx},
        {callback = handler(self, self.onMsgFirstOutInfo), msgClass = CF.GameProtocol.msgFirstOutInfo},
    }
end

function GameModule:getProxyEvents()
    return {
        {module = CF.roomData, eventKeyName = "EVENT_PLAYER_START", callBack = "onPlayerStart"}
    }
end

function GameModule:onDestroy()
    GameModule.super.onDestroy(self)
    self:removeAllEventListeners()
end

function GameModule:initEvents()
    self._listenerEventOutCard = cc.EventListenerCustom:create("UICardLayer.UICardArea.onEventOutCards", handler(self, self.gameEventOutCards))
    cc.Director:getInstance():getEventDispatcher():addEventListenerWithFixedPriority(self._listenerEventOutCard, 1)

    self._listenerCheckedCard = cc.EventListenerCustom:create("UICardLayer.UICardArea.onEventCheckedCard", handler(self, self.gameEventCheckedCards))
    cc.Director:getInstance():getEventDispatcher():addEventListenerWithFixedPriority(self._listenerCheckedCard, 1)
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

function GameModule:onMsgClock(msgData)
    self:dispatchEvent({
        name = self.EVENT_UPDATE_CLOCK,
        msg = {seat = msgData.seat, time = msgData.clock}
    })
end

function GameModule:onMsgPower(msgData)
    self._gameData:setCurrentPlayer(msgData.sPowerSeat)
    self:dispatchEvent({name = self.EVENT_GAME_POWER})
end

function GameModule:onMsgGameEnd(msgData)
    CF.roomData:setIsGameStart(false)
    self._gameData:setGameEndState(true)
    self:dispatchEvent( { name = self.EVENT_GAME_END })
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

function GameModule:onMsgGameStart(msgData)
    CF.game:getModule("Marker"):onAfterGameStart()
    CF.roomData:setIsGameStart(true)
    self._gameData:setSpringSeat()

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

function GameModule:onMsgHandCards(msgData)
    local handCardIDs = {}
    local isSet = false
    for i = 1, msgData.ucCount do
        if not isSet and msgData.ucCards[i] ~= CardEnum.CARD_ID.ID_NONE and msgData.ucCards[i] ~= CardEnum.CARD_ID.ID_BACK then
            isSet = true
        end
        table.insert(handCardIDs, msgData.ucCards[i])
    end
    --手牌排序
    local sortType = self._gameData:getSortType()
    local orderCards = CardLogic:ID2MyCards(handCardIDs)
    orderCards = CardLogic:sortCard(orderCards, sortType)
    orderCards = CardLogic:cards2UChar(orderCards)
    if isSet then
        self._gameData:setHandCards(msgData.sSeat, orderCards)
    end

    self:dispatchEvent({
        name = self.EVENT_SEND_CARDS,
        msg = {seat = msgData.sSeat, orderCards = orderCards, bShowAni = msgData.bAni}
    })
end

function GameModule:onMsgDrawCards(msgData)
    local handCardIDs = self._gameData:getHandCards(msgData.sSeat)
    for i = 1, msgData.ucCount do
        if msgData.ucCards[i] ~= CardEnum.CARD_ID.ID_NONE and msgData.ucCards[i] ~= CardEnum.CARD_ID.ID_BACK then
            table.insert(handCardIDs, msgData.ucCards[i])
        end
    end

    --手牌排序
    local sortType = self._gameData:getSortType()
    local orderCards = CardLogic:ID2MyCards(handCardIDs)
    orderCards = CardLogic:sortCard(orderCards, sortType)
    orderCards = CardLogic:cards2UChar(orderCards)
    self._gameData:setHandCards(msgData.sSeat, orderCards)
    local insertIndexs = {}
    for j = 1, #msgData.ucCards do
        for i = 1, #orderCards do
            if orderCards[i] == msgData.ucCards[j] then 
                table.insert(insertIndexs,i)
                break
            end
        end
    end
    
    self:dispatchEvent({
        name = self.EVENT_ADD_CARDS,
        msg = {seat = msgData.sSeat, orderCards = msgData.ucCards, insertIndexs = insertIndexs}
    })
end 

function GameModule:onMsgLeftCardsCount(msgData)
    self._gameData:setLeftCardCount(msgData.sLeftCardsCount)
    self:dispatchEvent({
        name = self.EVENT_LEFT_CARDS_COUNT,
        msg = {leftCardsCount = msgData.sLeftCardsCount,totalCardsCount = msgData.sTotalCardsCount}
    })
end 

function GameModule:onMsgPlayerCardsCount(msgData)
    self._gameData:setHandCardsCount(msgData.sSeat, msgData.ucCount)
    self:dispatchEvent({
        name = self.EVENT_UPDATE_PLAYER_CARDS_COUNT,
        msg = {seat = msgData.sSeat, count = msgData.ucCount,isShow = msgData.bShow}
    })
end

function GameModule:onMsgOutCard(msgData)
    self:dispatchEvent({ name = self.EVENT_OUT_CARD, msg = {msgOutCard = msgData} })
end

--触摸牌层背景
function GameModule:onTouchCardLayerBg()
    CF.getLobbyModule("Im"):dispatchEvent({name = CF.getLobbyModule("Im").EVENT_HIDE_MESSAGELAYER})
    CF.getLobbyModule("Im"):dispatchEvent({name = CF.getLobbyModule("Im").EVENT_HIDE_NOTIFY_INVITE})
    self:dispatchEvent(
    {
        name = self.EVENT_GAME_CHANGE_BTNS_STATE,
        msg = {btnTagFlag = CF.GameDefine.GAME_BTNS_TAG_FLAG.BTN_OUTCARD, state = false}
    })
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

function GameModule:onMsgSpring(msgData)
    self._gameData:setSpringSeat(msgData.sSpringSeat)
    self:dispatchEvent({
        name = self.EVENT_SPRING,
        msg = {ucSpringCount = msgData.ucSpringCount, sSpringSeat = msgData.sSpringSeat}
    })
end

-- 全视角数据
function GameModule:onMsgObviousCardsDataEx(msgData)
    -- 本地回放使用，服务端回放不用处理
end

function GameModule:onMsgFirstOutInfo(msgData)
    self._gameData:setHadOutCard(msgData.sSeat, msgData.bFirstOut)
    if msgData.sSeat ~= CF.roomData:getSelfSeat() then
        self:dispatchEvent({ name = self.EVENT_FIRST_OUTCARD_INFO, msg = msgData})
    end
end

return GameModule
 �4  