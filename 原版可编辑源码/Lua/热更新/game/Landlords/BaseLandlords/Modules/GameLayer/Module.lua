local GameModule    = CF.gameClass("GameModule", CF.ModuleBase)
local GameData      = CF.gameRequire("Modules.GameLayer.GameData")
local CardLogic     = CF.gameRequire("Logic.CardLogic")
local CardType      = CF.gameRequire("Define.CardType")

GameModule.EVENT_GAME_PLAYER_START 			= "EVENT_GAME_PLAYER_START" --开局
GameModule.EVENT_PLAYER_HEAD_CLOCK 			= "EVENT_PLAYER_HEAD_CLOCK" --头像倒计时
GameModule.EVENT_PLAYER_START 				= "EVENT_PLAYER_START" -- 玩家点击开始游戏
GameModule.EVENT_HAND_CARD_CHANGED 			= "EVENT_HAND_CARD_CHANGED" --手牌变换
GameModule.EVENT_GAME_START 				= "EVENT_GAME_START" --游戏开始
GameModule.EVENT_PLAYER_GET_POWER 			= "EVENT_PLAYER_GET_POWER" --玩家获取出牌权
GameModule.EVENT_SHOW_ALL_PLAYER_HANDCARDS 	= "EVENT_SHOW_ALL_PLAYER_HANDCARDS" --显示所有玩家手牌
GameModule.EVENT_GAME_SELECT_HINTCARDS 		= "EVENT_GAME_SELECT_HINTCARDS" --智能提示出牌数据
GameModule.EVENT_GAME_HINTCARDS_CANOUT 		= "EVENT_GAME_HINTCARDS_CANOUT" --智能提示是否能出牌
GameModule.EVENT_GAME_CONTINUE 				= "EVENT_GAME_CONTINUE" 
GameModule.EVENT_PLAYER_CARDS_COUNT 		= "EVENT_PLAYER_CARDS_COUNT" --剩余张数
GameModule.EVENT_DO_CARDS 					= "EVENT_DO_CARDS" --做牌
GameModule.EVENT_SHOW_LANDLORD_SEAT         = "EVENT_SHOW_LANDLORD_SEAT" -- 最终的地主
GameModule.EVENT_SHOW_BACK_CARD             = "EVENT_SHOW_BACK_CARD" -- 显示底牌
GameModule.EVENT_SHOW_HANDCARD_POWER        = "EVENT_SHOW_HANDCARD_POWER" -- 显示明牌权限
GameModule.EVENT_SHOW_HANDCARD_RESULT       = "EVENT_SHOW_HANDCARD_RESULT" -- 显示明牌结果
GameModule.EVENT_SHOW_SET_DOUBLE_POWER      = "EVENT_SHOW_SET_DOUBLE_POWER" -- 显示加倍权限
GameModule.EVENT_SHOW_SET_DOUBLE_RESULT     = "EVENT_SHOW_SET_DOUBLE_RESULT" -- 显示加倍结果
GameModule.EVENT_PLAY_CARD_RESULT           = "EVENT_PLAY_CARD_RESULT" -- 玩家出完牌
GameModule.EVENT_SHOW_ROB_LANDLORDS_VIEW 	= "EVENT_SHOW_ROB_LANDLORDS_VIEW" --抢地主类型后显示抢地主按钮
GameModule.EVENT_SHOW_ROB_LANDLORDS_RESULT_VIEW = "EVENT_SHOW_ROB_LANDLORDS_RESULT_VIEW" -- 抢地主后的结果，显示类似3分，2分，1分

function GameModule:ctor()
    GameModule.super.ctor(self)
    self:initDatas()
    self:initEvents()
end

function GameModule:getSubXYDealList()
    return {
        {callback = handler(self, self.onMsgClock), msgClass = CF.GameProtocol.msgClock},
        {callback = handler(self, self.onMsgGameStart), msgClass = CF.GameProtocol.msgGameStart},
        {callback = handler(self, self.onMsgGameStep), msgClass = CF.GameProtocol.msgGameStep},
        {callback = handler(self, self.onMsgSendHandCard), msgClass = CF.GameProtocol.msgSendHandCard},
        {callback = handler(self, self.onMsgSendHandCardCount), msgClass = CF.GameProtocol.msgPlayerCardsCount},
        {callback = handler(self, self.onMsgRobLandlordInfo),msgClass = CF.GameProtocol.msgRobLandlordInfo},
        {callback = handler(self, self.onMsgRobLandlord),msgClass = CF.GameProtocol.msgRobLandlord},
		{callback = handler(self, self.onMsgLandlordSeat),msgClass = CF.GameProtocol.msgLandlordSeat},
		{callback = handler(self, self.onMsgShowBackCard),msgClass = CF.GameProtocol.msgShowBackCard},
		{callback = handler(self, self.onMsgSetShowHandCardPower),msgClass = CF.GameProtocol.msgSetShowHandCardPower},
		{callback = handler(self, self.onMsgSetShowHandCardResult),msgClass = CF.GameProtocol.msgSetShowHandCardResult},
		{callback = handler(self, self.onMsgSetDouble),msgClass = CF.GameProtocol.msgSetDouble},
		{callback = handler(self, self.onMsgSetDoubleResult),msgClass = CF.GameProtocol.msgSetDoubleResult},
		{callback = handler(self, self.onMsgPower),msgClass = CF.GameProtocol.msgPower},
		{callback = handler(self, self.onMsgPlayCard),msgClass = CF.GameProtocol.msgPlayCard},
		{callback = handler(self, self.onMsgWinLostRate),msgClass = CF.GameProtocol.msgWinLostRate},
		{callback = handler(self, self.onMsgAllHandCards),msgClass = CF.GameProtocol.msgAllHandCards},
		{callback = handler(self, self.onMsgAllPlayOutCards),msgClass = CF.GameProtocol.msgAllPlayOutCards},
        {callback = handler(self, self.onMsgAllDoCards), msgClass = CF.GameProtocol.msgAllDoCards},
        {callback = handler(self, self.onMsgUseMarker), msgClass = CF.GameProtocol.msgUseMarker},
    }
end

function GameModule:print(message, data)
    if data then
        dump(data)
    end
end

function GameModule:getProxyEvents()
    return {
        {module = CF.roomData, eventKeyName = "EVENT_PLAYER_START", callBack = "onPlayerStart"}
    }
end

function GameModule:initDatas()
	CF.roomData:setDismissType(CF.GameDefine.DISMISS_TYPE.GP)
    self:initGameData()
end

function GameModule:initGameData()
    if self._gameData then
        self._gameData:initDatas()
    else
        self._gameData = GameData.new()
    end
    self._cardLogic = CardLogic.new()
end

function GameModule:getGameData()
    return self._gameData
end

function GameModule:getCardLogic()
    return self._cardLogic
end

function GameModule:initEvents()
    self._listenerCheckedCard = cc.EventListenerCustom:create("UICardLayer.UICardArea.onEventCheckedCard", handler(self, self.gameEventCheckedCards))
    cc.Director:getInstance():getEventDispatcher():addEventListenerWithFixedPriority(self._listenerCheckedCard, 1)
end

--每小局游戏需要更新的数据
function GameModule:initEveryTime()
    CF.roomData:initEveryTimesDatas()
    CF.roomData:setIsGameOver(false)
    CF.game:getModule("Marker"):initEveryTime()
    self._gameData:initEveryTime()
end

function GameModule:onDestroy()
    GameModule.super.onDestroy(self)
    self:removeAllEventListeners()
end

function GameModule:removeAllEventListeners()
    local eventDispatcher = cc.Director:getInstance():getEventDispatcher()
    if self._listenerCheckedCard then
        eventDispatcher:removeEventListener(self._listenerCheckedCard)
    end
end

--#玩家开始
function GameModule:onPlayerStart(event)
    if event.msg.seatID == CF.roomData:getSelfSeat() then
        self:initEveryTime()
        -- 旁观视角准备时，不清除旁观玩家的UI
        if CF.roomData:getIsSeer() then
            return
        end
        self:dispatchEvent({name = self.EVENT_GAME_PLAYER_START})
    end
end

-- 倒计时更新
function GameModule:onMsgClock(msgData)
    if msgData.sClock > 60 then
        msgData.sClock = 0
    end
    self:dispatchEvent( { name = self.EVENT_PLAYER_HEAD_CLOCK , msg = {seat = msgData.sSeat, nTime = msgData.sClock}})
    XH.lobby:getModule("Sxvip.FriendInfo"):onOutStart(msgData.sSeat)
end

-- 游戏开始
function GameModule:onMsgGameStart(msgData)
	CF.game:getModule("Marker"):onAfterGameStart()
    CF.roomData:setIsGameStart(true)
    self:dispatchEvent({ name = self.EVENT_GAME_START, msg = {}})

    if CF.roomData:isGoldRoom() then
        CF.getLobbyModule("H5GameWidget"):setGameData(CF.roomData:getRoomID(), CF.gameSub:getGameNameByGameId(CF.roomData:getGameID()),"对局","BMC001")
        CF.getLobbyModule("H5GameWidget"):addH5GameWidget("game_begin",CF.roomData._gameID)
    end

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

-- 游戏步骤
function GameModule:onMsgGameStep(msgData)
    self._gameData:setGameStep(msgData.nGameStep)
end

-- 发送手牌（手牌数据，是否需要动画）
function GameModule:onMsgSendHandCard(msgData)
    local msgSendHandCard = msgData
    local myHandCardIds = {}
    for i = 0, msgSendHandCard.nPlayerCnt - 1 do
        local handCardCnt = msgSendHandCard.nHandCardCnt[i + 1]
        if CF.roomData:getSelfSeat() == i and handCardCnt > 0 then
            for key, card in ipairs(msgSendHandCard.nHandCard[i + 1]) do
                if key <= handCardCnt then
                    table.insert(myHandCardIds, card)
                end
            end
        end
    end

    local sortType = self._gameData:getHandSortType()
    local orderCards = self._cardLogic:IDToCards(myHandCardIds)
    orderCards = self._cardLogic:sortCard(orderCards, sortType)
    orderCards= self._cardLogic:cardsToUChar(orderCards)

    self._gameData:setHandCards(CF.roomData:getSelfSeat(), orderCards)
    self:dispatchEvent( { name = self.EVENT_HAND_CARD_CHANGED, msg = {seatId = CF.roomData:getSelfSeat(), orderCards = orderCards, bShowAni = true}})
end

-- 手牌数量
function GameModule:onMsgSendHandCardCount(msgData)
    local msgPlayerCardsCount = msgData
    self._gameData:setHandCardsCount(msgPlayerCardsCount.nSeat, msgPlayerCardsCount.ucCount)
    self:dispatchEvent({ name = self.EVENT_PLAYER_CARDS_COUNT, msg = { seatId = msgPlayerCardsCount.nSeat} })

    -- 旁观玩家显示主视角手牌
    if CF.roomData:getIsSeer() and not CF.roomData:isDelayWatch() and msgData.nSeat == CF.roomData:getSelfSeat() then
        local handCardIDs = {}
        for i = 1, msgData.ucCount do
            table.insert(handCardIDs, 0)
        end
        --手牌排序
        local sortType = self._gameData:getHandSortType()
        local orderCards = self._cardLogic:IDToCards(handCardIDs)
        orderCards= self._cardLogic:cardsToUChar(orderCards)

        self._gameData:setHandCards(CF.roomData:getSelfSeat(), orderCards)
        self:dispatchEvent( { 
            name = self.EVENT_HAND_CARD_CHANGED, 
            msg = {seatId = CF.roomData:getSelfSeat(), orderCards = orderCards, bShowAni = false}
        })
    end
end

-- 抢地主类型
function GameModule:onMsgRobLandlordInfo(msgData)
    local landlordType = msgData.nLandlordType
    if msgData.nRobLandlordRateCnt == 3 then
        self._gameData:setLandlordStatus(1)
    end
    self._gameData:setLandlordType(landlordType)
    -- 如果是广播抢地主模式的则只读取模式,不显示UI
    if msgData.isSendAllSign then
        return
    end

    local score = 0
    if landlordType == 0 then -- 叫分
        if msgData.nRobLandlordRateCnt > 0 then
            score = msgData.nRobLandlordRate[1] -1
        end
    end
    -- 显示界面
    self:dispatchEvent({ name = self.EVENT_SHOW_ROB_LANDLORDS_VIEW, msg = { type = landlordType, score = score, show = true} })
end

-- 抢地主
function GameModule:onMsgRobLandlord(msgData)
    local msgRobLandlord = msgData
    if msgRobLandlord.nSeat == CF.roomData:getSelfSeat() or CF.roomData:isPlayBack() then
        self:dispatchEvent({ name = self.EVENT_SHOW_ROB_LANDLORDS_VIEW, msg = { type = self._gameData:getLandlordType(), score = 0, show = false} })
    end

    self:dispatchEvent({ name = self.EVENT_SHOW_ROB_LANDLORDS_RESULT_VIEW, msg = {seat = msgRobLandlord.nSeat, robRate = msgRobLandlord.nRobRate} })
end

-- 最终的地主
function GameModule:onMsgLandlordSeat(msgData)
    local msgLandlordSeat = msgData
    self._gameData:setLandlordSeat(msgLandlordSeat.nSeat)
    -- 此处统一关闭，避免与出牌按钮叠层
    self:dispatchEvent({
        name = self.EVENT_SHOW_ROB_LANDLORDS_VIEW,
        msg = { type = self._gameData:getLandlordType(), score = 0, show = false},
    })
    self:dispatchEvent({ name = self.EVENT_SHOW_LANDLORD_SEAT, msg = {seat = msgLandlordSeat.nSeat} })
end

-- 显示底牌
function GameModule:onMsgShowBackCard(msgData)
    if CF.roomData:isPlayBack() or CF.roomData:isDelayWatch() then
        local backCards = msgData.nBackCards
        local landlordSeat = self._gameData:getLandlordSeat()
        local handCards = self._gameData:getHandCards(landlordSeat)
        for i=1,#backCards do
            table.insert( handCards, backCards[i])
        end
        local sortType = self._gameData:getHandSortType()
        local orderCards = self._cardLogic:IDToCards(handCards)
        orderCards = self._cardLogic:sortCard(orderCards, sortType)
        orderCards= self._cardLogic:cardsToUChar(orderCards)

        self._gameData:setHandCards(landlordSeat, orderCards)
    end

    self:dispatchEvent({ name = self.EVENT_SHOW_BACK_CARD, msg = {cards = msgData.nBackCards} })
end

-- 明牌权限
function GameModule:onMsgSetShowHandCardPower(msgData)
    if msgData.nSeat == CF.roomData:getSelfSeat() then
        self:dispatchEvent({ name = self.EVENT_SHOW_HANDCARD_POWER, msg = {show = msgData.bSetShowHandCardPower} })
    end
end

-- 明牌结果
function GameModule:onMsgSetShowHandCardResult(msgData)
    self:print("明牌结果", msgData)
    if msgData.nSeat <= CF.roomData:getChairs() then
        local handCard = msgData.nHandCard
        local seat = msgData.nSeat

        if #handCard > 0 then
            local sortType = self._gameData:getHandSortType()
            local orderCards = self._cardLogic:IDToCards(msgData.nHandCard)
            orderCards = self._cardLogic:sortCard(orderCards, sortType)
            orderCards= self._cardLogic:cardsToUChar(orderCards)

            self._gameData:setIsShowHand(seat, true)
            if seat ~= CF.roomData:getSelfSeat() then
                self._gameData:setHandCards(seat, orderCards)
            end
            self:dispatchEvent({ name = self.EVENT_SHOW_HANDCARD_RESULT, msg = {seat = seat, cards = orderCards} })
        else
            self:dispatchEvent({ name = self.EVENT_SHOW_HANDCARD_RESULT, msg = {seat = seat} })
        end
    end
end

-- 加倍
function GameModule:onMsgSetDouble(msgData)
    self:dispatchEvent({ name = self.EVENT_SHOW_SET_DOUBLE_POWER, msg = {isDouble = msgData.bSetDouble} })
end

-- 加倍结果
function GameModule:onMsgSetDoubleResult(msgData)
    self:dispatchEvent({ name = self.EVENT_SHOW_SET_DOUBLE_RESULT, msg = {seat = msgData.nSeat, isDouble = msgData.bSetDouble} })
end

-- 出牌权限
function GameModule:onMsgPower(msgData)
    self:print("play card power", msgData)
    self._gameData:setPowerSeat(msgData.sPowerSeat)
    self._gameData:setChooseCardTipsCount(0)
    -- 上次出牌为自己时,清空上次出牌记录
    if self._gameData:getPowerSeat() == self._gameData:getPreOutSeat() then
        self._gameData:setPreOutCard({})
        self._gameData:resetLastCardsType()
    end

    if self._gameData:getPowerSeat() == CF.roomData:getSelfSeat() then
        if not CF.roomData:isPlayBack() and not CF.roomData:getIsSeer() then
            local handCard = self._gameData:getHandCards(CF.roomData:getSelfSeat())
            self._gameData:setHintCardIDs(self._cardLogic:getTips(handCard, self._gameData:getLastCardsType(), {}))
        end
    end
    self:dispatchEvent({name = self.EVENT_PLAYER_GET_POWER,  msg = {seat = msgData.sPowerSeat}})
end

-- 打牌
function GameModule:onMsgPlayCard(msgData)
    self:print("play card", msgData)
    local msgPlayCard = msgData
    local seat = msgPlayCard.nSeat
    -- 过
    if msgPlayCard.nPlayCardCnt == 0 then
        self:dispatchEvent({ name = self.EVENT_PLAY_CARD_RESULT, msg = {seat = seat, cards = {}} })
        return
    end

    -- 在一圈中是不是第一个出牌
    local firstPlay = false
    if #self._gameData:getPreOutCard() == 0 then
        firstPlay = true
    end

    self._gameData:setPreOutSeat(seat)
    self._gameData:setPreOutCard(msgPlayCard.nPlayCard)
    local tempCardTypeID = CardType.MappingTable[msgPlayCard.nPlayCardType]
    self._gameData:getLastCardsType().cardTypeID = tempCardTypeID
    -- 计算牌型
    if CardType:isMLianN(tempCardTypeID) then
        self._gameData:getLastCardsType().cardPower = msgPlayCard.sEndPower + (tempCardTypeID - CardType.ID.MLianN) % 100 - 1
    elseif CardType:isN3Dai1(tempCardTypeID) then
        self._gameData:getLastCardsType().cardPower = msgPlayCard.sEndPower + (tempCardTypeID - CardType.ID.N3Dai1) - 1
    elseif CardType:isN3Dai1Dui(tempCardTypeID) then
        self._gameData:getLastCardsType().cardPower = msgPlayCard.sEndPower + (tempCardTypeID - CardType.ID.N3Dai1Dui) - 1
    else
        self._gameData:getLastCardsType().cardPower = msgPlayCard.sEndPower
    end
    self._gameData:getLastCardsType().cardCount = #msgPlayCard.nPlayCard

    local sortType = self._gameData:getHandSortType()
    local orderCards = self._cardLogic:IDToCards(msgPlayCard.nPlayCard)
    orderCards = self._cardLogic:sortCard(orderCards, sortType)
    orderCards= self._cardLogic:cardsToUChar(orderCards)

    -- 删掉出了的牌
    local isSuccess, newHandCardIDs = self._cardLogic:deleteCardIDs(self._gameData:getHandCards(seat), orderCards)
    if isSuccess then
        self._gameData:setHandCards(seat, newHandCardIDs)
    end

    self:dispatchEvent({ name = self.EVENT_PLAY_CARD_RESULT, msg = {seat = seat, cards = orderCards,
                        cardType = msgPlayCard.nPlayCardType, endPower = msgPlayCard.sEndPower, first = firstPlay} })
end

-- 当前胜负的倍数
function GameModule:onMsgWinLostRate(msgData)

end

-- 发送所有人剩余的手牌, 一局结束显示所有人的牌
function GameModule:onMsgAllHandCards(msgData)
    local msgAllHandCards = msgData

    local allHandCards = {}
    for i = 0, msgAllHandCards.ucPlayerCount - 1 do
        local handCardCnt = msgAllHandCards.ucCount[i + 1]

        local handCards = {}
        for key, card in ipairs(msgAllHandCards.ucCards[i + 1]) do
            if key <= handCardCnt then
                table.insert(handCards, card)
            end
        end

        allHandCards[i] = handCards
        self:print("onMsgAllHandCards" .. i, handCards)
        if CF.roomData:isPlayBack() or CF.roomData:isDelayWatch() then
            local sortType = self._gameData:getHandSortType()
            local orderCards = self._cardLogic:IDToCards(handCards)
            orderCards = self._cardLogic:sortCard(orderCards, sortType)
            orderCards= self._cardLogic:cardsToUChar(orderCards)
            self._gameData:setHandCards(i, orderCards)
        end
    end
    self:dispatchEvent({name = self.EVENT_SHOW_ALL_PLAYER_HANDCARDS, msg = {handCards = allHandCards}})
end

-- 全部人这一局内的出的牌, 重连时显示玩家一轮的操作
function GameModule:onMsgAllPlayOutCards(msgData)
end

-- -- 做牌
function GameModule:onMsgAllDoCards(msgData)
    if msgData.sSeat == CF.roomData:getSelfSeat() and not CF.roomData:isPlayBack() then
        self:dispatchEvent( { name = self.EVENT_DO_CARDS, msg = {cards = msgData.ucCards}})
    end
end

function GameModule:onMsgUseMarker(msgData)
    if msgData.seat == CF.roomData:getSelfSeat() then
        CF.game:getModule("Marker"):sendRequestUseGoldJPQ()
    end
end

--触摸牌层背景
function GameModule:onTouchCardLayerBg()
    CF.getLobbyModule("Im"):dispatchEvent({name = CF.getLobbyModule("Im").EVENT_HIDE_MESSAGELAYER})
    CF.getLobbyModule("Im"):dispatchEvent({name = CF.getLobbyModule("Im").EVENT_HIDE_NOTIFY_INVITE})
    self:dispatchEvent({name = self.EVENT_GAME_HINTCARDS_CANOUT, msg = {canOut = false}})
end

--小结束是否显示洗牌按钮
function GameModule:needShowShuffleButton()
    --回放
    if CF.roomData:isPlayBack() or CF.roomData:getIsSeer() then
        return false
    end
    --局数信息
    local playCount = CF.roomData:getPlayCount()
    local maxPlayCount = CF.roomData:getMaxPlayCount()
    --大结束
    if playCount == maxPlayCount then
        return false
    end
    --读取配置,是否开启洗牌
    local isShowShuffle = CF.gameSub:getIsOpenShuffle(CF.roomData:getGameID())
    -- 下局是否预洗牌
    if isShowShuffle then
        isShowShuffle = not CF.game:getModule("PropUse"):isPreShuffle()
    end
    return isShowShuffle
end

--选中手牌后触发事件
--用于更新"出牌"按钮状态以及智能提示
--event.haveUnSelect为true表示有牌被提起，false表示没有牌被提起
function GameModule:gameEventCheckedCards(event)
    local powerSeat = self._gameData:getPowerSeat()
    if powerSeat ~= CF.roomData:getSelfSeat() then
        return
    end

    local allCardIDs = self._gameData:getHandCards(CF.roomData:getSelfSeat())
    local checkedCards = event.selectCardIDs

    if #checkedCards == 0 then
        --牌全部落下的时候，重置次数
        self._gameData:setChooseCardTipsCount(0)
    end

    --先判断选取的牌能不能出，如果能出则不执行智能选牌的逻辑，目前过滤掉，点单牌，对子，三张，三带一都要进行智能选牌的处理
    --如果首选就是三代二，顺子，双顺，三顺，四代二等等牌型，则不进行智能选牌的处理，且在选牌也不再进行提示，除非全部落下
    local canOut
    if #(checkedCards) <= 0 then
        canOut = false
    else
        canOut = self._cardLogic:canOut(checkedCards, self._gameData:getLastCardsType(), {}, true)
        if #(checkedCards) >= 5 and canOut == true then
            self._gameData:setChooseCardTipsCount(1)
        end
    end

    if canOut == false then
        --如果没有成功的提示，则进行搜索
        if self._gameData:getChooseCardTipsCount() == 0 then
            local checkedCardsBak = checkedCards
            checkedCards = self._cardLogic:chooseCardTips(checkedCards, self._gameData:getLastCardsType(), {}, allCardIDs)
            if self._cardLogic:judgeTableSame(checkedCards, checkedCardsBak) then
                self._gameData:setChooseCardTipsCount(0)
            else
                self._gameData:setChooseCardTipsCount(1)
            end
            self:dispatchEvent({name = self.EVENT_GAME_SELECT_HINTCARDS, msg = {cards = checkedCards}})
        end

        if #(checkedCards) <= 0 then
            canOut = false
        else
            canOut = self._cardLogic:canOut(checkedCards, self._gameData:getLastCardsType(), {}, true)
        end
    end

    self:dispatchEvent({name = self.EVENT_GAME_HINTCARDS_CANOUT, msg = {canOut = canOut}})
end

function GameModule:getSortHandCards(seat)
    local sortType = self._gameData:getHandSortType()
    local handCards = self._gameData:getHandCards(seat)
    local orderCards = self._cardLogic:IDToCards(handCards)
    orderCards = self._cardLogic:sortCard(orderCards, sortType)
    orderCards = self._cardLogic:cardsToUChar(orderCards)
    return orderCards
end

return GameModule