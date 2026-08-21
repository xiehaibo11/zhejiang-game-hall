local GameModule    = CF.gameClass("GameModule", "game.Landlords.BaseLandlords.Modules.GameLayer.Module")

local CardType      = CF.gameRequire("Define.CardType")

GameModule.EVENT_SHOW_ROB_LANDLORDS_VIEW        = "EVENT_SHOW_ROB_LANDLORDS_VIEW"
GameModule.EVENT_PLAYER_CALL_POINT              = "EVENT_PLAYER_CALL_POINT"
GameModule.EVENT_GAME_CALL_POINT                = "EVENT_GAME_CALL_POINT"

function GameModule:getSubXYDealList()
    local subXYDealList = {
        {callback = handler(self, self.onMsgGameStart), msgClass = CF.GameProtocol.msgGameStart},
        {callback = handler(self, self.onMsgGameRuleEx), msgClass = CF.GameProtocol.msgGameRule},
        {callback = handler(self, self.onMsgGameStep), msgClass = CF.GameProtocol.msgGameStep},
        {callback = handler(self, self.onMsgClock), msgClass = CF.GameProtocol.msgClock},
        {callback = handler(self, self.onMsgSpecialPower), msgClass = CF.GameProtocol.msgSpecialPower},
        {callback = handler(self, self.onMsgRespSpecialPower), msgClass = CF.GameProtocol.msgRespSpecialPower},
        {callback = handler(self, self.onMsgCallPoint), msgClass = CF.GameProtocol.msgCallPoint},
        {callback = handler(self, self.onMsgBanker), msgClass = CF.GameProtocol.msgBanker},
        {callback = handler(self, self.onMsgAllCardsEx), msgClass = CF.GameProtocol.msgAllCards},
        {callback = handler(self, self.onMsgBaseCards), msgClass = CF.GameProtocol.msgBaseCards},
        {callback = handler(self, self.onMsgHandCards), msgClass = CF.GameProtocol.msgHandCards},
        {callback = handler(self, self.onMsgPreOutCard), msgClass = CF.GameProtocol.msgPreOutCard},
        {callback = handler(self, self.onMsgPlayerCardsCount), msgClass = CF.GameProtocol.msgPlayerCardsCount},
        {callback = handler(self, self.onMsgPowerEx), msgClass = CF.GameProtocol.msgPower},
        {callback = handler(self, self.onMsgOutCardEx), msgClass = CF.GameProtocol.msgOutCard},
        {callback = handler(self, self.onMsgAllHandCards), msgClass = CF.GameProtocol.msgAllHandCards},
    }
    return subXYDealList
end

-- 判断是否有权限
local function havePower(oriPower, desPower)
    if not oriPower or not desPower then return false end
    local result = CF.StringTool.bitAnd(oriPower, desPower)
    return result ~= 0
end

function GameModule:onMsgGameRuleEx(msgData)
    local strGameRule = CF.SysTool.GB_18030_2000_TO_UTF8(msgData.strGameRule)
    local originRule = msgData.strOriginalGameRule
    local temp_config = "return {" .. originRule .. "}"
    local func = loadstring(temp_config)
    if func then
        local ruleTable = func()
        self._gameData:setTeaBigWinStyleRule(ruleTable)
    end

    if string.find(strGameRule, "大小王百搭") then
        local jokerdata = {16,17}
        self._gameData:setJokerData(jokerdata)
    end
    local baseScore = 0
    for _,v in pairs(string.split(strGameRule, "/")) do
        if string.find(v, "底分") then
            baseScore = tonumber(string.sub(v, 7,-4)) 
        end
    end
    CF.roomData:setBaseScore(baseScore) 
    CF.roomData:setDismissType(msgData.iDismissWay)
end

--显示叫分界面按钮状态
function GameModule:onMsgSpecialPower(msgData)
    local seat = msgData.sSeat
    local power = msgData.power
    local landlordType = 0
    self._gameData:setLandlordType(landlordType)
    -- 如果是广播抢地主模式的则只读取模式,不显示UI
    if seat ~= CF.roomData:getSelfSeat() then
        return
    end
    local btnList = {false,false,false,false}
    btnList[1] = havePower(power, CF.GameDefine.CallBanker.CB_NOT_CALL)
    btnList[2] = havePower(power, CF.GameDefine.CallBanker.CB_CALL_ONE)
    btnList[3] = havePower(power, CF.GameDefine.CallBanker.CB_CALL_TWO)
    btnList[4] = havePower(power, CF.GameDefine.CallBanker.CB_CALL_THREE)
    -- 显示界面
    self:dispatchEvent({ name = self.EVENT_SHOW_ROB_LANDLORDS_VIEW, msg = { type = landlordType, btnList = btnList, show = true} })
end

--叫分操作回应
function GameModule:onMsgRespSpecialPower(msgData)
    local power = msgData.power
    local seat = msgData.sSeat
    local callPoint = 0
    if havePower(power, CF.GameDefine.CallBanker.CB_NOT_CALL) then
        callPoint = 0
    elseif havePower(power, CF.GameDefine.CallBanker.CB_CALL_ONE) then
        callPoint = 1
    elseif havePower(power, CF.GameDefine.CallBanker.CB_CALL_TWO) then
        callPoint = 2
    elseif havePower(power, CF.GameDefine.CallBanker.CB_CALL_THREE) then
        callPoint = 3
    end
    self:dispatchEvent({ name = self.EVENT_PLAYER_CALL_POINT, msg = { callPoint = callPoint, isShow = true, seat = seat} })
    if seat ==  CF.roomData:getSelfSeat() then
        self:dispatchEvent({ name = self.EVENT_SHOW_ROB_LANDLORDS_VIEW, msg = { type = 0, show = false} })
    end
end

--最终叫分
function GameModule:onMsgCallPoint(msgData)
    self:dispatchEvent({ name = self.EVENT_GAME_CALL_POINT, msg = { callPoint = msgData.point} })
    self:dispatchEvent({ name = self.EVENT_PLAYER_CALL_POINT, msg = {isShow = false} })
end

function GameModule:onMsgBanker(msgData)
    GameModule.super.onMsgLandlordSeat(self, msgData)
end

function GameModule:onMsgAllCardsEx(msgData)
    GameModule.super.onMsgAllDoCards(self, msgData)
end

function GameModule:onMsgBaseCards(msgData)
    self:dispatchEvent({ name = self.EVENT_SHOW_BACK_CARD, msg = {cards = msgData.nBackCards} })
    --判断是否在GAME_STEP_ADD_BASE步骤。不加这个判断会导致断线重连，重复加手牌
    if self._gameData:getGameStep() == CF.GameDefine.GAME_STEP.GAME_STEP_ADD_BASE then
        local banker = self._gameData:getLandlordSeat()
        -- --如果自己是地主或者是回放，余姚需要把底牌加入到手牌中
         if CF.roomData:isPlayBack() or banker == CF.roomData:getSelfSeat() or CF.roomData:isDelayWatch() then
            local backCards = msgData.nBackCards
            local landlordSeat = self._gameData:getLandlordSeat()
            local handCards = self._gameData:getHandCards(landlordSeat)
            for i=1,#backCards do
                if CF.roomData:getIsSeer() and not CF.roomData:isDelayWatch() then
                    table.insert( handCards, 0)
                else
                    table.insert( handCards, backCards[i])
                end
            end
            local sortType = self._gameData:getHandSortType()
            local orderCards = self._cardLogic:IDToCards(handCards)
            orderCards = self._cardLogic:sortCard(orderCards, sortType)
            orderCards= self._cardLogic:cardsToUChar(orderCards)

            self._gameData:setHandCards(landlordSeat, orderCards)
            self:dispatchEvent( { name = self.EVENT_HAND_CARD_CHANGED, msg = {seatId = landlordSeat, orderCards = orderCards}})
        end 
        --更新庄家手牌数量
        local preHandCardCnt = self._gameData:getHandCardsCount(banker)
        self._gameData:setHandCardsCount(banker, preHandCardCnt + msgData.nBackCardCnt)
        self:dispatchEvent({ name = self.EVENT_PLAYER_CARDS_COUNT, msg = { seatId = banker} })
    end
end

function GameModule:onMsgHandCards(msgData)
    local msgSendHandCard = msgData
    local myHandCardIds = {}
    local handCardCnt = msgSendHandCard.ucCount
    for key, card in ipairs(msgSendHandCard.ucCards) do
        if key <= handCardCnt then
            table.insert(myHandCardIds, card)
        end
    end

    local sortType = self._gameData:getHandSortType()
    local orderCards = self._cardLogic:IDToCards(myHandCardIds)
    orderCards = self._cardLogic:sortCard(orderCards, sortType)
    orderCards= self._cardLogic:cardsToUChar(orderCards)
    
    self._gameData:setHandCards(CF.roomData:getSelfSeat(), orderCards)
    self:dispatchEvent( { name = self.EVENT_HAND_CARD_CHANGED, msg = {seatId = CF.roomData:getSelfSeat(), orderCards = orderCards, bShowAni = true}})
end

function GameModule:onMsgPreOutCard(msgData)
    self:onMsgOutCardEx(msgData)
end

function GameModule:onMsgOutCardEx(msgData)
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
    self._gameData:getLastCardsType().cardPower = msgPlayCard.sEndPower
    self._gameData:getLastCardsType().cardCount = #msgPlayCard.nPlayCard

    local orderCards = self._cardLogic:IDToCards(msgPlayCard.nPlayCard)
    --这里注释掉outcard排序。用服务发过来的顺序。
    orderCards= self._cardLogic:cardsToUChar(orderCards)

    -- 删掉出了的牌
    local isSuccess, newHandCardIDs = self._cardLogic:deleteCardIDs(self._gameData:getHandCards(seat), orderCards)
    if isSuccess then
        self._gameData:setHandCards(seat, newHandCardIDs)
    end

    self:dispatchEvent({ name = self.EVENT_PLAY_CARD_RESULT, msg = {seat = seat, cards = orderCards, 
                        cardType = msgPlayCard.nPlayCardType, endPower = msgPlayCard.sEndPower, first = firstPlay} })
end

function GameModule:onMsgPlayerCardsCount(msgData)
    GameModule.super.onMsgSendHandCardCount(self, msgData)
end

function GameModule:onMsgPowerEx(msgData)
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
            local jokerData = self._gameData:getJokerData()
            self._gameData:setHintCardIDs(self._cardLogic:getTips(handCard, self._gameData:getLastCardsType(), jokerData))
        end
    end
    self:dispatchEvent({name = self.EVENT_PLAYER_GET_POWER,  msg = {seat = msgData.sPowerSeat}})
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

    local jokerData = self._gameData:getJokerData()

    --先判断选取的牌能不能出，如果能出则不执行智能选牌的逻辑，目前过滤掉，点单牌，对子，三张，三带一都要进行智能选牌的处理
    --如果首选就是三代二，顺子，双顺，三顺，四代二等等牌型，则不进行智能选牌的处理，且在选牌也不再进行提示，除非全部落下
    local canOut
    if #(checkedCards) <= 0 then
        canOut = false
    else
        canOut = self._cardLogic:canOut(checkedCards, self._gameData:getLastCardsType(), jokerData, true)
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
            canOut = self._cardLogic:canOut(checkedCards, self._gameData:getLastCardsType(), jokerData, true)
        end
    end

    self:dispatchEvent({name = self.EVENT_GAME_HINTCARDS_CANOUT, msg = {canOut = canOut}})
end

return GameModule