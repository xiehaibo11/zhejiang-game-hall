local GameModule = CF.gameClass("GameModule", CF.ModuleBase)
local GameData = CF.gameRequire("Modules.GameLayer.GameData")
local CardLogic = CF.gameRequire("Logic.CardLogic")
local CardEnum = CF.gameRequire("Define.CardEnum")

GameModule.EVENT_PLAYER_HEAD_CLOCK = "EVENT_PLAYER_HEAD_CLOCK"
GameModule.EVENT_GAME_START = "EVENT_GAME_START"
GameModule.EVENT_GAME_END = "EVENT_GAME_END"
GameModule.EVENT_PLAYER_GET_POWER = "EVENT_PLAYER_GET_POWER"
GameModule.EVENT_GAME_PLAYER_START = "EVENT_GAME_PLAYER_START"
GameModule.EVENT_SPECF_CARD = "EVENT_SPECF_CARD"
GameModule.EVENT_PLAYER_SHOW_OUT_CARD = "EVENT_PLAYER_SHOW_OUT_CARD"
GameModule.EVENT_LEFT_CARDS_CHANGED = "EVENT_LEFT_CARDS_CHANGED"
GameModule.EVENT_SHOW_CARD_HOLDER = "EVENT_SHOW_CARD_HOLDER"
GameModule.EVENT_WAITE_SHOW_RED_TEN = "EVENT_WAITE_SHOW_RED_TEN"
GameModule.EVENT_HAND_CARD_CHANGED = "EVENT_HAND_CARD_CHANGED"
GameModule.EVENT_CLEAR_OUT_CARDS = "EVENT_CLEAR_OUT_CARDS"
GameModule.EVENT_SHOW_CARDTYPE_SELECT = "EVENT_SHOW_CARDTYPE_SELECT"
GameModule.EVENT_GAME_SELECT_HINTCARDS = "EVENT_GAME_SELECT_HINTCARDS"
GameModule.EVENT_GAME_CHANGE_BTNS_STATE = "EVENT_GAME_CHANGE_BTNS_STATE"
GameModule.EVENT_SHOW_RED_TEN = "EVENT_SHOW_RED_TEN"
GameModule.EVENT_GAME_WIN_ORDER = "EVENT_GAME_WIN_ORDER"

function GameModule:ctor()
    GameModule.super.ctor(self)
    self:initDatas()
    self:initEvents()
end

function GameModule:getSubXYDealList()
    return {
        {callback = handler(self, self.onMsgClock), msgClass = CF.GameProtocol.msgClock},
        {callback = handler(self, self.onMsgGameStart), msgClass = CF.GameProtocol.msgStartGame},
        {callback = handler(self, self.onMsgGameStep), msgClass = CF.GameProtocol.msgGameStep},
        {callback = handler(self, self.onMsgRelinkEnter), msgClass = CF.GameProtocol.msgRelinkEnter},
        {callback = handler(self, self.onMsgCurPanShu), msgClass = CF.GameProtocol.msgCurPanShu},
        {callback = handler(self, self.onMsgHandCards), msgClass = CF.GameProtocol.msgHandCard},
        {callback = handler(self, self.onMsgGameEnd), msgClass = CF.GameProtocol.msgEndGame},
        {callback = handler(self, self.onMsgPower), msgClass = CF.GameProtocol.msgPower},
        {callback = handler(self, self.onMsgSpecfCards), msgClass = CF.GameProtocol.msgSendAllCard},
        {callback = handler(self, self.onMsgPlayerCardsCount), msgClass = CF.GameProtocol.msgHandBack},
        {callback = handler(self, self.onMsgPlayCard), msgClass = CF.GameProtocol.msgPlayCard},
        {callback = handler(self, self.onMsgOutCard), msgClass = CF.GameProtocol.msgOutCard},
        {callback = handler(self, self.onMsgOpenRedTen), msgClass = CF.GameProtocol.msgOpenRedTen},
        {callback = handler(self, self.onMsgRedTenPower), msgClass = CF.GameProtocol.msgRedTenPower},
        {callback = handler(self, self.onMsgRank), msgClass = CF.GameProtocol.msgRank},
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

--#
function GameModule:onMsgClock(msgData)
    if msgData.time > 60 or msgData.time < 0 then
        msgData.time = 0
    end
    self._gameData:setPreconditionOutCards(false)
    self._gameData:setClockSeat(msgData.seat)
    local localSeat = CF.roomData:seatToLocal(msgData.seat)
    if localSeat == -1 then
        return
    end
    self:dispatchEvent( { name = self.EVENT_CLEAR_OUT_CARDS, msg = {localSeat = localSeat}})
    self:dispatchEvent( { name = self.EVENT_PLAYER_HEAD_CLOCK , msg = {seat = msgData.seat, nTime = msgData.time}})
    -- 设置等待接风轮数
    if self._gameData:getWaitFollowSeat() == msgData.seat and self._gameData:getFollowTurn() >= 1 then
        -- 把牌桌上出的牌都清掉
        for i = 1,4 do
            self:dispatchEvent( { name = self.EVENT_CLEAR_OUT_CARDS, msg = {localSeat = i}})
        end
    end
    if tonumber(msgData.seat) == self._gameData:getPreOutSeat() then
        -- 把牌桌上出的牌都清掉
        for i = 1,4 do
            self:dispatchEvent( { name = self.EVENT_CLEAR_OUT_CARDS, msg = {localSeat = i}})
        end
    end
    XH.lobby:getModule("Sxvip.FriendInfo"):onOutStart(msgData.seat)
end

function GameModule:onMsgGameStart(msgData)
    CF.roomData:setIsGameStart(true)
    self._gameData:initEveryTime()
    self:dispatchEvent({name = self.EVENT_GAME_START, msg = {}})
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
    self._gameData:setGameStep(msgData.stepID)
    if msgData.stepID == CF.GameDefine.GAME_STEP.GAME_STEP_OPEN_TEN then
        self:dispatchEvent( { name = self.EVENT_WAITE_SHOW_RED_TEN, msg = {show = true}})
    else
        self:dispatchEvent( { name = self.EVENT_WAITE_SHOW_RED_TEN, msg = {show = false}})
    end
end

function GameModule:onMsgRelinkEnter(msgData)
    local step = self._gameData:getGameStep()
    if step == CF.GameDefine.GAME_STEP.GAME_STEP_TAKE_FIRST or
        step == CF.GameDefine.GAME_STEP.GAME_STEP_OPEN_TEN or
        step == CF.GameDefine.GAME_STEP.GAME_STEP_PLAY_CARD then
        self._gameData:setWaitFollowSeat(CF.roomData:getSelfSeat())
    end
end

function GameModule:onMsgCurPanShu(msgData)
    CF.roomData:setPlayCount(msgData.cur)
    CF.roomData:setMaxPlayCount(msgData.goal)
    if msgData.cur > 0 and not CF.roomData:getIsSeer() then
        -- 隐藏牌有列表入口
        CF.getLobbyModule("Im"):dispatchEvent({name = CF.getLobbyModule("Im").EVENT_HIDE_LIST_ENTRANCE})
        CF.getLobbyModule("Im"):dispatchEvent({name = CF.getLobbyModule("Im").EVENT_HIDE_MSG_ENTRANCE})
        CF.getLobbyModule("Im"):dispatchEvent({name = CF.getLobbyModule("Im").EVENT_HIDE_NOTIFY_INVITE})
    end
end

function GameModule:onMsgHandCards(msgData)
    local handCardIDs = {}
    for i = 1,msgData.count do
        table.insert(handCardIDs, msgData.cards[i])
    end
    self._gameData:setHandCardIDs(msgData.seat, handCardIDs)
    self._gameData:setHandCardNum(msgData.seat, #handCardIDs)
    self:dispatchEvent( { name = self.EVENT_HAND_CARD_CHANGED , 
            msg = {seat = msgData.seat, bIsShow = true, bPlayAni = false}})
end

function GameModule:onMsgPlayerCardsCount(msgData)
    self._gameData:setHandCardNum(msgData.seat, msgData.count)
    self:dispatchEvent( { name = self.EVENT_LEFT_CARDS_CHANGED, msg = {seat = msgData.seat}})

    if CF.roomData:getIsSeer() and msgData.seat == CF.roomData:getSelfSeat() then
        local handCardIDs = {}
        for i = 1,msgData.count do
            table.insert(handCardIDs, 0)
        end
        self._gameData:setHandCardIDs(msgData.seat, handCardIDs)
        self:dispatchEvent( { name = self.EVENT_HAND_CARD_CHANGED , 
                msg = {seat = msgData.seat, bIsShow = true, bPlayAni = false}})
    end
end

-- 下发亮十权限, 显示亮红十按钮
function GameModule:onMsgRedTenPower(msgData)
    local hongType = tonumber(msgData.hongType)
    local bOpenOne = tonumber(msgData.openOne) ~= 0
    self._gameData:setLightTenPower(hongType)
    -- UI 显示亮十按钮
    self:dispatchEvent( { name = self.EVENT_SHOW_RED_TEN, msg = {show = true, power = hongType, openOne = bOpenOne}})
end

function GameModule:onMsgOpenRedTen(msgData)
    local localSeat = CF.roomData:seatToLocal(msgData.seat)
    if localSeat == -1 then
        return
    end
    -- 收到了自己发的亮十协议
    if CF.roomData:getSelfSeat() == msgData.seat then
        self:dispatchEvent( { name = self.EVENT_SHOW_RED_TEN, msg = {show = false}})        --隐藏亮十按钮
    end
    if msgData.openType == CF.GameDefine.LIANG_SHI_TYPE.OPEN_DOUBLE or
        msgData.openType == CF.GameDefine.LIANG_SHI_TYPE.OPEN_FANG or
        msgData.openType == CF.GameDefine.LIANG_SHI_TYPE.OPEN_TAO then
        if localSeat == CF.roomData:getSelfLocalSeat() then
            self._gameData:setSelfLightTen(true)
        end
        self._gameData:setLightTenType(msgData.seat, msgData.openType)
    end
end

--#
function GameModule:onMsgGameEnd(msgData)
    CF.roomData:setIsGameStart(false)
    self._gameData:setGameEndState(true)
    self:dispatchEvent({name = self.EVENT_GAME_END})
end

--#
function GameModule:onMsgPower(msgData)
    self._gameData:setPowerSeat(msgData.seat)
    self._gameData:setPreconditionOutCards(false)
    self._gameData:clearHintCards() --清除提示数据

    if msgData.seat ~= CF.roomData:getSelfSeat() or CF.roomData:getIsSeer() then
        self:dispatchEvent({name = self.EVENT_PLAYER_GET_POWER, msg = {}})
        return
    end

    -- 轮到我接风出牌了, 清空上次出牌记录
    if self._gameData:getWaitFollowSeat() == msgData.seat and self._gameData:getFollowTurn() >= 1 then       -- 设置等待接风轮数
        self._gameData:setPreOutSeat(CF.roomData:getMaxPlayer())
        -- 把牌桌上出的牌都清掉
        for i = 1,4 do
            self:dispatchEvent( { name = self.EVENT_CLEAR_OUT_CARDS, msg = {localSeat = i}})
        end
    end
    local hintCards  --轮到自己出牌,刷新提示数据
    local handCardIDs = self._gameData:getHandCardIDs(CF.roomData:getSelfSeat())
    local isFirstSeat, preOutCardIDs, preOutCardType = self:checkIsFreedomOutCard() --是否是自由出牌
    if not isFirstSeat then
        hintCards = CardLogic.getTipsDataByOutCards(handCardIDs, preOutCardIDs, preOutCardType)
    else
        hintCards = CardLogic.getTipsDataFreedom(handCardIDs)
    end
    self._gameData:setHintCards(hintCards)
    self._isHintFirstSelect = true

    self:dispatchEvent(
        {
            name = self.EVENT_PLAYER_GET_POWER,
            msg = {
                bChaoDi = false,
                isFirstSeat = isFirstSeat
            }
        }
    )
end

--是否自由出牌
function GameModule:checkIsFreedomOutCard()
    local preOutSeat = self._gameData:getPreOutSeat()
    local preOutCardIDs = {} --上一个出牌数据
    local preOutCardType = 0
    local isFreedom = preOutSeat == CF.roomData:getMaxPlayer() or preOutSeat == CF.roomData:getSelfSeat()
    if isFreedom then
        return true, preOutCardIDs, preOutCardType
    end
    local lastOut = self._gameData:getOutCardRecord(preOutSeat) or {}
    local preOut = lastOut[#lastOut]
    if preOut ~= nil then
        preOutCardType = preOut.tType
        for _, cardID in ipairs(preOut.CardIDs) do
            table.insert(preOutCardIDs, cardID)
        end
    end
    return false, preOutCardIDs, preOutCardType
end

function GameModule:checkSelfCanOutCard(selectCardIDs)
    local _, preOutCardIDs, preOutCardType = self:checkIsFreedomOutCard()
    local bCanOut = CardLogic.checkCanOutCard(preOutCardIDs, preOutCardType, selectCardIDs)
    return bCanOut
end

function GameModule:onNotOutCardClick()
    local selfSeat = CF.roomData:getSelfSeat()
    local gameData = self:getGameData()
    local preOutSeat = gameData:getPreOutSeat()
    if gameData:getPowerSeat() ~= selfSeat then
        return
    end

    if preOutSeat == selfSeat or preOutSeat == CF.roomData:getMaxPlayer() then
        return
    end

    CF.msgManager:sendNotOutCards()
    gameData:setPreconditionOutCards(true)
end

--出牌
function GameModule:gameEventOutCards(event)
    local powerSeat = self._gameData:getPowerSeat()
    local clockSeat = self._gameData:getClockSeat()
    -- 牌权是自己且有倒计时，才表示真正的牌权。因为轮到其他玩家出牌时，服务没有下发权限协议
    if powerSeat ~= CF.roomData:getSelfSeat() or clockSeat ~= CF.roomData:getSelfSeat() then
        self._gameData:dispatchUpdateHandCardEvent(CF.roomData:getSelfSeat())
        return
    end
    local cardIDs = event.outCardIDs
    local _, preOutCardIDs, preOutCardType = self:checkIsFreedomOutCard()
    local bCanOut, cardTypeArr = CardLogic.checkCanOutCard(preOutCardIDs, preOutCardType, cardIDs)
    if CF.roomData:isPlayBack() or not bCanOut then
        self._gameData:dispatchUpdateHandCardEvent(CF.roomData:getSelfSeat())
        return
    end

    if #cardTypeArr > 1 then
        self._gameData:dispatchUpdateHandCardEvent(CF.roomData:getSelfSeat())

        self:dispatchEvent(
            {
                name = self.EVENT_SHOW_CARDTYPE_SELECT,
                msg = {
                    cardIDs = cardIDs,
                    cardTypeArr = cardTypeArr
                }
            }
        )
        return
    end

    local outCardType = cardTypeArr[1].type
    local jokerReplaceData = cardTypeArr[1].jokerReplaceData
    local finalCardIDs = CardLogic.getCardIDsWithJokerReplaceData(cardIDs, jokerReplaceData)
    local gameCardGroup = {}
    gameCardGroup.tType = outCardType
    gameCardGroup.Cards = finalCardIDs

    self:sendOutCard(gameCardGroup)
end

function GameModule:sendOutCard(gameCardGroup)
    local typeID  = 1
    local powerID = 0
    if gameCardGroup.tType == CardEnum.CARDS_TYPE.CT_1_JUNKO_0_EXCESS_1_CONTINUOUS then
        -- 单张牌型
        typeID = CardEnum.cardType.CTID_YI_ZHANG

        if powerID == 15 then
            -- 一张2老的power是19
            powerID = 19
        elseif powerID == 16 then
            -- 一张小王老的power是21
            powerID = 21
        elseif powerID == 17 then
            -- 一张大王老的power是22
            powerID = 22
        end

    elseif gameCardGroup.tType == CardEnum.CARDS_TYPE.CT_2_JUNKO_0_EXCESS_1_CONTINUOUS then
        -- 对子牌型
        typeID = CardEnum.cardType.CTID_ER_ZHANG
        if powerID == 15 then
            -- 一张2老的power是19
            powerID = 19
        end
    elseif gameCardGroup.tType >= CardEnum.CARDS_TYPE.CT_1_JUNKO_0_EXCESS_3_CONTINUOUS
        and gameCardGroup.tType <= CardEnum.CARDS_TYPE.CT_1_JUNKO_0_EXCESS_13_CONTINUOUS then
        -- 表示是单顺牌型, 345
        typeID = CardEnum.cardType.CTID_YI_SHUN
    elseif gameCardGroup.tType == CardEnum.CARDS_TYPE.CT_3_JUNKO_0_EXCESS_1_CONTINUOUS then
        -- 表示是三张牌型, 333
        typeID = CardEnum.cardType.CTID_SAN_ZHANG
    elseif gameCardGroup.tType == CardEnum.CARDS_TYPE.CT_4_JUNKO_0_EXCESS_1_CONTINUOUS then
        -- 表示是四张牌型, 3333
        typeID = CardEnum.cardType.CTID_SI_ZHANG
    elseif gameCardGroup.tType == CardEnum.CARDS_TYPE.CT_5_JUNKO_0_EXCESS_1_CONTINUOUS then
        -- 王炸, 王炸的老的红十的power是22, 用光牌这个方法算出来的是0
        typeID  = CardEnum.cardType.CTID_HUO_JIAN
        powerID = 22
    elseif gameCardGroup.tType == CardEnum.CARDS_TYPE.CT_6_JUNKO_0_EXCESS_1_CONTINUOUS then
        -- 一对红十, 老的红十的power是10, 用光牌这个方法算出来的是0
        typeID  = CardEnum.cardType.CTID_ER_ZHANG  
        powerID = 10  
    end
    gameCardGroup.typeID = typeID
    gameCardGroup.power = powerID
    CF.msgManager:sendOutCards(gameCardGroup)
    self:clientOutCard(gameCardGroup)
end

function GameModule:clientOutCard(gameCardGroup)
    --记录已经出牌
    self._gameData:setPreconditionOutCards(true)
end

--选中手牌后触发事件
--用于更新"出牌"按钮状态以及智能提示
--event.haveUnSelect为true表示有牌被提起，false表示没有牌被提起
function GameModule:gameEventCheckedCards(event)
    local powerSeat = self._gameData:getPowerSeat()
    if powerSeat ~= CF.roomData:getSelfSeat() then
        return
    end

    local bCanOut = false
    local selectCardIDs = event.selectCardIDs
    local isFreedomutCard, preOutCardIDs, preOutCardType = self:checkIsFreedomOutCard()
    if not isFreedomutCard and self._isHintFirstSelect and #selectCardIDs > 0 then
        local hintCardIDs = self._gameData:getHintCardIdsBySomeCardIds(selectCardIDs, preOutCardIDs, preOutCardType)
        if hintCardIDs and #hintCardIDs > 0 then
            bCanOut = true
            --设置选中牌数据
            self:dispatchEvent(
                {
                    name = self.EVENT_GAME_SELECT_HINTCARDS,
                    msg = {
                        hintCardIDs = hintCardIDs
                    }
                }
            )
        end
        --只智能提示一次
        self._isHintFirstSelect = false
    end
    if not bCanOut and event.haveUnSelect then
        local handCardIDs = self._gameData:getHandCardIDs(powerSeat)
        local bHaveShun, resultData = CardLogic.smartTipsBySelectCardIDs(handCardIDs, selectCardIDs, preOutCardType, preOutCardIDs)
        if bHaveShun then
            bCanOut = true
            --设置选中牌数据
            self:dispatchEvent(
                {
                    name = self.EVENT_GAME_SELECT_HINTCARDS,
                    msg = {
                        hintCardIDs = resultData
                    }
                }
            )
        end
    end

    if not bCanOut then
        bCanOut = CardLogic.checkCanOutCard(preOutCardIDs, preOutCardType, selectCardIDs)
    end
    --跟新出牌按钮状态
    self:dispatchEvent(
        {
            name = self.EVENT_GAME_CHANGE_BTNS_STATE,
            msg = {
                btnTagFlag = CF.GameDefine.GAME_BTNS_TAG_FLAG.BTN_OUTCARD,
                state = bCanOut
            }
        }
    )
end

--触摸牌层背景
function GameModule:onTouchCardLayerBg()
    CF.getLobbyModule("Im"):dispatchEvent({name = CF.getLobbyModule("Im").EVENT_HIDE_MESSAGELAYER})
    CF.getLobbyModule("Im"):dispatchEvent({name = CF.getLobbyModule("Im").EVENT_HIDE_NOTIFY_INVITE})
    self:dispatchEvent(
        {
            name = self.EVENT_GAME_CHANGE_BTNS_STATE,
            msg = {
                btnTagFlag = CF.GameDefine.GAME_BTNS_TAG_FLAG.BTN_OUTCARD,
                state = false
            }
        }
    )
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

function GameModule:changeHandCardSortType()
    local gameData = self:getGameData()
    local oldSortType = gameData:getSortType()
    if oldSortType == CardLogic.SrotType.CardPower then
        gameData:setSortType(CardLogic.SrotType.CardGroupPower)
    else
        gameData:setSortType(CardLogic.SrotType.CardPower)
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

--每小局游戏需要更新的数据
function GameModule:initEveryTime()
    CF.roomData:initEveryTimesDatas()
    CF.roomData:setIsGameOver(false)
    self._gameData:initEveryTime()
end

function GameModule:onMsgSpecfCards(msgData)
    self:dispatchEvent({name = self.EVENT_SPECF_CARD, msg = {cards = msgData.ucCard, cardCount = msgData.ucCardCount}})
end

function GameModule:onMsgOutCard(msgData)
    if msgData.cardCount ~= 0 then
        local deleteCardIDs = {}
        for i = 1, msgData.cardCount do
            table.insert(deleteCardIDs, msgData.cards[i])
        end
        self._gameData:deleteHandCardIDs(msgData.seat, deleteCardIDs)

        local cardGroup = {}
        cardGroup.CardIDs = {}
        cardGroup.tType = CardLogic.getCardType(msgData.cards)[1].type
        for k = 1, msgData.cardCount do
            table.insert(cardGroup.CardIDs, 1, msgData.cards[k])
        end
        self._gameData:addOutCardRecord(msgData.seat, cardGroup)

        local preOutSeat = self._gameData:getPreOutSeat()
        if preOutSeat == CF.roomData:getMaxPlayer() then
            self._gameData:setPreOutSeat(msgData.seat)
        else
            local lastOut = self._gameData:getOutCardRecord(preOutSeat)
            local preOut = lastOut[#lastOut]
            if preOut ~= nil then
                if CardLogic.checkCanOutCard(preOut.CardIDs, preOut.tType, msgData.cards) then
                    self._gameData:setPreOutSeat(msgData.seat)
                end
            end
        end
    else
        if self._gameData:getWaitFollowSeat() == msgData.seat then
            self._gameData:addFollowTurn()
        end
    end

    self._gameData:clearHintCards() --清除提示数据
    if self._gameData:getPreconditionOutCards() then
        return
    end
    
    local outCardIDs = {}
    if msgData.cardCount > 0 then
        --为了兼容老包，排序方式改变（老包按从大到小排序）
        for i = msgData.cardCount, 1, -1 do
            table.insert(outCardIDs, msgData.cards[i])
        end
    end

    self:dispatchEvent({name = self.EVENT_PLAYER_SHOW_OUT_CARD ,
                        msg = {
                            seat = msgData.seat,
                            outCardIDs = outCardIDs,
                            cardType = msgData.typeID
                        }})
    
    self:dispatchEvent( { name = self.EVENT_LEFT_CARDS_CHANGED, msg = {seat = msgData.seat}})
    
    if msgData.cardCount ~= 0 then
        self._gameData:setWaitFollowSeat(-1)
        self._gameData:resetFollowTurn()
        if self._gameData:getHandCardNum(msgData.seat) <= 0 then
            local waitFollowSeat = self._gameData:getNextHaveCards(msgData.seat)
            self._gameData:setWaitFollowSeat(waitFollowSeat)
        end
    end
end

function GameModule:onMsgPlayCard(msgData)
    if msgData.seat == CF.roomData:getSelfSeat() then
        self._gameData:setPreconditionOutCards(false)
    end

    if msgData.cardCount ~= 0 then
        self._gameData:setPreOutSeat(msgData.seat)
        local deleteCardIDs = {}
        for i = 1, msgData.cardCount do
            table.insert(deleteCardIDs, msgData.cards[i])
        end
        self._gameData:deleteHandCardIDs(msgData.seat, deleteCardIDs)

        local cardGroup = {}
        cardGroup.CardIDs = {}
        cardGroup.tType = CardLogic.getCardType(msgData.cards)[1].type
        for k = 1, msgData.cardCount do
            table.insert(cardGroup.CardIDs, 1, msgData.cards[k])
        end
        self._gameData:addOutCardRecord(msgData.seat, cardGroup)
    else
        -- 如果要接风的玩家选择了不出, 则下一把轮到自己的时候就是接风了
        if self._gameData:getWaitFollowSeat() == msgData.seat then       -- 设置等待接风轮数
            self._gameData:addFollowTurn()
        end
    end

    self._gameData:clearHintCards() --清除提示数据
    if self._gameData:getPreconditionOutCards() then
        return
    end
    
    local outCardIDs = {}
    if msgData.cardCount > 0 then
        --为了兼容老包，排序方式改变（老包按从大到小排序）
        for i = msgData.cardCount, 1, -1 do
            table.insert(outCardIDs, msgData.cards[i])
        end
    end

    self:dispatchEvent({name = self.EVENT_PLAYER_SHOW_OUT_CARD ,
                        msg = {
                            seat = msgData.seat,
                            outCardIDs = outCardIDs,
                            cardType = msgData.typeID
                        }})
    
    self._gameData:setHandCardNum(msgData.seat, self._gameData:getHandCardNum(msgData.seat) - msgData.cardCount)
    self:dispatchEvent( { name = self.EVENT_LEFT_CARDS_CHANGED, msg = {seat = msgData.seat}})

    if msgData.cardCount ~= 0 then
        self._gameData:setWaitFollowSeat(-1)
        self._gameData:resetFollowTurn()
        if self._gameData:getHandCardNum(msgData.seat) <= 0 then
            local waitFollowSeat = self._gameData:getNextHaveCards(msgData.seat)
            self._gameData:setWaitFollowSeat(waitFollowSeat)
        end
    end
end

function GameModule:onMsgRank(msgData)
    local serverSeat = tonumber(msgData.seat)
    local rank = tonumber(msgData.rank)
    self._gameData:setRanList(serverSeat, rank)
    self:dispatchEvent({name = self.EVENT_GAME_WIN_ORDER, msg = {seat = serverSeat, order = rank}})
end

-- 清除桌面数据，亮十按钮
function GameModule:clearTableUI()
    self:dispatchEvent( { name = self.EVENT_WAITE_SHOW_RED_TEN, msg = {show = false}})
    self:dispatchEvent( { name = self.EVENT_SHOW_RED_TEN, msg = {show = false}})
end

return GameModule5j