local GameModule = CF.gameClass("GameModule", CF.ModuleBase)
local GameData = CF.gameRequire("Modules.GameLayer.GameData")
local CardLogic = CF.gameRequire("Logic.CardLogic")
local CardEnum = CF.gameRequire("Define.CardEnum")

GameModule.EVENT_GAME_START = "EVENT_GAME_START"
GameModule.EVENT_HAND_CARD_CHANGED = "EVENT_HAND_CARD_CHANGED"
GameModule.EVENT_PLAYER_SHOW_OUT_CARD = "EVENT_PLAYER_SHOW_OUT_CARD"
GameModule.EVENT_GAME_WIN_ORDER = "EVENT_GAME_WIN_ORDER"
GameModule.EVENT_GAME_END = "EVENT_GAME_END"
GameModule.EVENT_GAME_CAN_CHAODI = "EVENT_GAME_CAN_CHAODI"
GameModule.EVENT_PLAYER_GET_POWER = "EVENT_PLAYER_GET_POWER"
GameModule.EVENT_SHOW_ALL_PLAYER_HANDCARDS = "EVENT_SHOW_ALL_PLAYER_HANDCARDS"
GameModule.EVENT_GAME_SELECT_HINTCARDS = "EVENT_GAME_SELECT_HINTCARDS"
GameModule.EVENT_GAME_CHANGE_BTNS_STATE = "EVENT_GAME_CHANGE_BTNS_STATE"
GameModule.EVENT_PLAYER_HEAD_CLOCK = "EVENT_PLAYER_HEAD_CLOCK"
GameModule.EVENT_GAME_PLAYER_START = "EVENT_GAME_PLAYER_START"
GameModule.EVENT_AUTO_PASS = "EVENT_AUTO_PASS"
GameModule.EVENT_GAME_SHOW_CHANGE_BTN = "EVENT_GAME_SHOW_CHANGE_BTN"
GameModule.EVENT_SPECF_CARD = "EVENT_SPECF_CARD"
GameModule.EVENT_GAME_CAN_CHAODI_PLAY_BACK = "EVENT_GAME_CAN_CHAODI_PLAY_BACK"
GameModule.EVENT_CLEAR_WIN_FIRE_ANI = "EVENT_CLEAR_WIN_FIRE_ANI"
GameModule.EVENT_ALL_CARDS = "EVENT_ALL_CARDS"
GameModule.EVENT_DESK_SCORE = "EVENT_DESK_SCORE"
GameModule.EVENT_PLAYERS_SCORE = "EVENT_PLAYERS_SCORE"
GameModule.EVENT_CLEAR_ALL_DESK = "EVENT_CLEAR_ALL_DESK"
GameModule.EVENT_SHOW_FLY_ANI = "EVENT_SHOW_FLY_ANI"

function GameModule:ctor()
    GameModule.super.ctor(self)
    self:initDatas()
    self:initEvents()
end

function GameModule:getSubXYDealList()
    return {
        { callback = handler(self, self.onMsgGameStart), msgClass = CF.GameProtocol.msgGameStart },
        { callback = handler(self, self.onMsgGameStep), msgClass = CF.GameProtocol.msgGameStep },
        { callback = handler(self, self.onMsgClock), msgClass = CF.GameProtocol.msgClock },
        { callback = handler(self, self.onMsgPlayerCardsCount), msgClass = CF.GameProtocol.msgPlayerCardsCount },
        { callback = handler(self, self.onMsgSpecfCards), msgClass = CF.GameProtocol.msgSpecfCard },
        { callback = handler(self, self.onMsgPower), msgClass = CF.GameProtocol.msgPower },
        { callback = handler(self, self.onMsgAllHandCards), msgClass = CF.GameProtocol.msgAllHandCards },
        { callback = handler(self, self.onMsgHandCard), msgClass = CF.GameProtocol.msgHandCard },
        { callback = handler(self, self.onMsgGameEnd), msgClass = CF.GameProtocol.msgGameEnd },
        { callback = handler(self, self.onMsgUseMarkerEx), msgClass = CF.GameProtocol.msgUseMarker },
        { callback = handler(self, self.onMsgOutCards), msgClass = CF.GameProtocol.msgOutCard },
        { callback = handler(self, self.onMsgDesktopScore), msgClass = CF.GameProtocol.msgDesktopScore }, --桌面分
        { callback = handler(self, self.onMsgPlayerScores), msgClass = CF.GameProtocol.msgPlayerScores }, --各个玩家分数
        { callback = handler(self, self.onMsgWinOrder), msgClass = CF.GameProtocol.msgFinishOrder }, --出完牌顺序
        { callback = handler(self, self.onMsgAllCards), msgClass = CF.GameProtocol.msgAllCards },
        { callback = handler(self, self.onMsgZhuang), msgClass = CF.GameProtocol.msgBanker },
        { callback = handler(self, self.onMsgCanChaoDi), msgClass = CF.GameProtocol.msgCanChaoDi },
    }
end

function GameModule:getProxyEvents()
    return {
        { module = CF.roomData, eventKeyName = "EVENT_PLAYER_START", callBack = "onPlayerStart" }
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

function GameModule:onMsgPlayerScores(msgData)
    self._gameData:setPlayerScore(msgData)
    self:dispatchEvent({ name = self.EVENT_PLAYERS_SCORE, msg = { msg = msgData } })
end

function GameModule:onMsgDesktopScore(msgData)
    self:dispatchEvent({ name = self.EVENT_DESK_SCORE, msg = { msg = msgData } })
end

function GameModule:onMsgAllCards(msgData)
    self:dispatchEvent({ name = self.EVENT_ALL_CARDS, msg = { msg = msgData } })
end

function GameModule:showFlyAni(seat, pos)
    self:dispatchEvent({ name = self.EVENT_SHOW_FLY_ANI, msg = { msg = { seat = seat, pos = pos } } })
end

function GameModule:onMsgPlayerCardsCount(msgData)
    if CF.roomData:isPlayBack() then
        return
    end
    self._gameData:setShowLeft(msgData.bShow)
    self._gameData:setHandCardsCount(msgData.sSeat, msgData.ucCount)
    self._gameData:dispatchUpdateHandCardEvent(msgData.sSeat)

    if CF.roomData:getIsSeer() and not CF.roomData:isDelayWatch() and msgData.sSeat == CF.roomData:getSelfSeat() then
        local handCardIDs = {}
        for i = 1, msgData.ucCount do
            table.insert(handCardIDs, 0)
        end
        self._gameData:setHandCardsState(CF.roomData:getSelfSeat(), true)
        self._gameData:setHandCardIDs(msgData.sSeat, handCardIDs)
        self:dispatchEvent(
        {
            name = self.EVENT_HAND_CARD_CHANGED,
            msg = { seat = msgData.sSeat, bIsShow = true, bPlayAni = false }
        }
        )
    end
end

function GameModule:onMsgClock(msgData)
    if msgData.sClock > 60 or msgData.sClock < 0 then
        msgData.sClock = 0
    end

    self:dispatchEvent({ name = self.EVENT_PLAYER_HEAD_CLOCK, msg = { seat = msgData.sSeat, nTime = msgData.sClock } })
    XH.lobby:getModule("Sxvip.FriendInfo"):onOutStart(msgData.sSeat)
end

function GameModule:onMsgGameStart(msgData)
    CF.goldManager:dispatchEvent({ name = CF.goldManager.EVENT_MATCH_FLAG_SHOW, msg = { show = false } })
    CF.game:getModule("Marker"):onAfterGameStart()

    CF.roomData:setIsGameStart(true)

    self:dispatchEvent({ name = self.EVENT_GAME_START, msg = {} })
    if CF.roomData:isGoldRoom() then
        CF.getLobbyModule("H5GameWidget"):setGameData(CF.roomData:getRoomID(), CF.gameSub:getGameNameByGameId(CF.roomData:getGameID()), "对局", "BMC001")
        CF.getLobbyModule("H5GameWidget"):addH5GameWidget("game_begin", CF.roomData._gameID)
    end
    -- 隐藏牌有列表入口
    if not CF.roomData:getIsSeer() then
        CF.getLobbyModule("Im"):dispatchEvent({ name = CF.getLobbyModule("Im").EVENT_HIDE_LIST_ENTRANCE })
        CF.getLobbyModule("Im"):dispatchEvent({ name = CF.getLobbyModule("Im").EVENT_HIDE_MSG_ENTRANCE })
        CF.getLobbyModule("Im"):dispatchEvent({ name = CF.getLobbyModule("Im").EVENT_HIDE_NOTIFY_INVITE })
    end
    -- 隐藏比赛场在线列表
    local onlineModule = CF.teaHouseManager:getTeaHouseOnlineModule()
    if onlineModule then
        onlineModule:dispatchEvent({ name = onlineModule.EVENT_HIDE_ONLINE_LIST })
    end
end

function GameModule:onMsgGameStep(msgData)
    self._gameData:setGameStep(msgData.iGameStep)
    CF.game:getModule("AddMultiple"):onUpdateStepID(msgData.iGameStep)
end

--#设置手牌（手牌数据，是否需要动画）
function GameModule:onMsgHandCard(msgData)
    local handCardIDs = {}
    for i = 1, msgData.ucCount do
        table.insert(handCardIDs, msgData.ucCards[i])
    end
    local localSeat = CF.roomData:seatToLocal(msgData.sSeat)
    local bHadShow = self._gameData:getHandCardsState(localSeat)
    if not bHadShow then
        CF.game:getModule("Marker"):updateRecoorder(handCardIDs)
    end
    self._gameData:setHandCardsState(localSeat, true)
    self._gameData:setHandCardIDs(msgData.sSeat, handCardIDs)

    self:dispatchEvent(
    {
        name = self.EVENT_HAND_CARD_CHANGED,
        msg = { seat = msgData.sSeat, bIsShow = true, bPlayAni = false }
    }
    )

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

--#用于显示打出牌
function GameModule:onMsgShowOutCards(msgData)
    self._gameData:clearHintCards() --清除提示数据
    if self._gameData:getPreconditionOutCards() then
        return
    end

    local outCardIDs = {}
    if msgData.ucCount > 0 then
        --为了兼容老包，排序方式改变（老包按从大到小排序）
        for i = msgData.ucCount, 1, -1 do
            table.insert(outCardIDs, msgData.ucCards[i])
        end
    end

    self:dispatchEvent(
    {
        name = self.EVENT_PLAYER_SHOW_OUT_CARD,
        msg = {
            seat = msgData.sSeat,
            outCardIDs = outCardIDs,
            cardType = msgData.sCardType
        }
    }
    )
    if msgData.sSeat ~= CF.roomData:getSelfSeat() then
        self:dispatchEvent({ name = self.EVENT_CLEAR_WIN_FIRE_ANI })
    end
end

function GameModule:onMsgWinOrder(msgData)
    for i = 1, msgData.sFinishCount do
        self:dispatchEvent(
        {
            name = self.EVENT_GAME_WIN_ORDER,
            msg = { seat = msgData.sFinishOrder[i], order = i }
        }
        )
    end
end

function GameModule:onMsgGameEnd(msgData)
    CF.roomData:setIsGameStart(false)
    self._gameData:setGameEndState(true)
    self:dispatchEvent({ name = self.EVENT_GAME_END })
end

function GameModule:onMsgCanChaoDi(msgData)
    for i = 0, 3 do
        self._gameData:setChaoDiBool(i, msgData.sStatus[i] == 1)
    end
    if CF.roomData:isPlayBack() then
        for i = 0, 3 do
            if msgData.sStatus[i] == 1 then
                self:dispatchEvent({ name = self.EVENT_GAME_CAN_CHAODI_PLAY_BACK, seat = i })
            end
        end
        return
    end
    if msgData.sStatus[CF.roomData:getSelfSeat()] == 1 then
        self:dispatchEvent({ name = self.EVENT_GAME_CAN_CHAODI })
    end
end

function GameModule:onMsgPower(msgData)
    -- 一轮打完了，清空
    if msgData.sPowerSeat == msgData.sPrePowerSeat then
        self._gameData:setPreOutSeat(4)
        self:dispatchEvent({ name = self.EVENT_CLEAR_ALL_DESK, msg = {} })
    end
    self._gameData:setPowerSeat(msgData.sPowerSeat)
    self._gameData:setPreconditionOutCards(false)
    self._gameData:clearHintCards() --清除提示数据

    if msgData.sPowerSeat ~= CF.roomData:getSelfSeat() or CF.roomData:getIsSeer() then
        self:dispatchEvent({ name = self.EVENT_PLAYER_GET_POWER, msg = {} })
        return
    end

    self:dispatchEvent({ name = self.EVENT_CLEAR_WIN_FIRE_ANI })
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

function GameModule:onMsgOutCards(msgData)
    if msgData.sSeat == CF.roomData:getSelfSeat() then
        self._gameData:setPreconditionOutCards(false)
    end
    if msgData.ucCount == 0 then
        self:onMsgShowOutCards(msgData)
        return
    end
    self._gameData:setPreOutSeat(msgData.sSeat)

    if msgData.ucCount ~= 0 then
        local deleteCardIDs = {}
        for i = 1, msgData.ucCount do
            table.insert(deleteCardIDs, msgData.ucCards[i])
        end
        self._gameData:deleteHandCardIDs(msgData.sSeat, deleteCardIDs)

        local cardGroup = {}
        cardGroup.CardIDs = {}
        cardGroup.tType = msgData.sCardType
        for k = 1, msgData.ucCount do
            table.insert(cardGroup.CardIDs, 1, msgData.ucCards[k])
        end
        local localSeat = CF.roomData:seatToLocal(msgData.sSeat)
        local bHandCardsOpen = self._gameData:getHandCardsState(localSeat)
        if not bHandCardsOpen then
            CF.game:getModule("Marker"):updateRecoorder(deleteCardIDs)
        end
        self._gameData:addOutCardRecord(msgData.sSeat, cardGroup)
    end
    self:onMsgShowOutCards(msgData)
end

--#获取全部人手牌并展示
function GameModule:onMsgAllHandCards(msgData)
    local ucCards = msgData.ucCards
    for i = 1, msgData.ucPlayerCount do
        self._gameData:setHandCardIDs(i - 1, ucCards[i])
    end
    self:dispatchEvent({ name = self.EVENT_SHOW_ALL_PLAYER_HANDCARDS })
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

    --客户端直接显示出牌
    self:dispatchEvent(
    {
        name = self.EVENT_PLAYER_SHOW_OUT_CARD,
        msg = {
            seat = CF.roomData:getSelfSeat(),
            outCardIDs = {},
            cardType = 0
        }
    }
    )

    gameData:setPreconditionOutCards(true)
end

--出牌
function GameModule:gameEventOutCards(event)
    local powerSeat = self._gameData:getPowerSeat()
    if powerSeat ~= CF.roomData:getSelfSeat() then
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

    local outCardType = cardTypeArr[1].type
    local jokerReplaceData = cardTypeArr[1].jokerReplaceData
    local finalCardIDs = CardLogic.getCardIDsWithJokerReplaceData(cardIDs, jokerReplaceData)
    local gameCardGroup = {}
    gameCardGroup.tType = outCardType
    gameCardGroup.Cards = finalCardIDs

    self:sendOutCard(gameCardGroup)
end

function GameModule:sendOutCard(gameCardGroup)
    CF.msgManager:sendOutCards(gameCardGroup)
    self:clientOutCard(gameCardGroup)
end

function GameModule:clientOutCard(gameCardGroup)
    --客户端直接显示出牌
    self:dispatchEvent(
    {
        name = self.EVENT_PLAYER_SHOW_OUT_CARD,
        msg = {
            seat = CF.roomData:getSelfSeat(),
            outCardIDs = gameCardGroup.Cards,
            cardType = gameCardGroup.tType,
            ani = false
        }
    }
    )
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
    CF.getLobbyModule("Im"):dispatchEvent({ name = CF.getLobbyModule("Im").EVENT_HIDE_MESSAGELAYER })
    CF.getLobbyModule("Im"):dispatchEvent({ name = CF.getLobbyModule("Im").EVENT_HIDE_NOTIFY_INVITE })
    self:dispatchEvent(
    {
        name = self.EVENT_GAME_CHANGE_BTNS_STATE,
        msg = {
            btnTagFlag = CF.GameDefine.GAME_BTNS_TAG_FLAG.BTN_OUTCARD,
            state = false,
            isBg = true
        }
    }
    )
end

--小结束是否显示洗牌按钮
function GameModule:needShowShuffleButton(isCutCard)
    --回放
    if CF.roomData:isPlayBack() or CF.roomData:getIsSeer() then
        return false
    end
    --局数信息
    local playCount = CF.roomData:getPlayCount()
    local maxPlayCount = CF.roomData:getMaxPlayCount()
    if playCount == maxPlayCount then
        return false
    end
    --读取配置,是否开启洗牌
    local isShowShuffle = CF.gameSub:getIsOpenShuffle(CF.roomData:getGameID())
    -- 下局是否预洗牌
    if isShowShuffle and not isCutCard then
        local propUseModule = CF.game:getModule("PropUse")
        if propUseModule and propUseModule.isPreShuffle then
            isShowShuffle = not propUseModule:isPreShuffle()
        end
    end
    return isShowShuffle
end

--#玩家开始
function GameModule:onPlayerStart(event)
    if event.msg.seatID == CF.roomData:getSelfSeat() then
        self:initEveryTime()
        -- 旁观视角准备时，不清除旁观玩家的UI
        if CF.roomData:getIsSeer() then
            return
        end
        self:dispatchEvent({ name = self.EVENT_GAME_PLAYER_START })
    end
end

--每小局游戏需要更新的数据
function GameModule:initEveryTime()
    CF.roomData:initEveryTimesDatas()
    CF.roomData:setIsGameOver(false)
    self._gameData:initEveryTime()
    CF.game:getModule("Marker"):initEveryTime()
end

-- GS请求使用计局记牌器
function GameModule:onMsgUseMarkerEx(msgData)
    if msgData.seat == CF.roomData:getSelfSeat() then
        CF.game:getModule("Marker"):sendRequestUseGoldJPQ()
    end
end

function GameModule:onMsgSpecfCards(msgData)
    self:dispatchEvent({ name = self.EVENT_SPECF_CARD, msg = { cards = msgData.ucCard, cardCount = msgData.ucCardCount } })
end

function GameModule:onMsgZhuang(msgData)
    self:getGameData():setBankerSeat(msgData.sSeat)
end

return GameModule�T