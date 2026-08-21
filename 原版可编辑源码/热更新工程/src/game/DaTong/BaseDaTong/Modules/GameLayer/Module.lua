local GameModule    = CF.gameClass("GameModule", CF.ModuleBase)
local GameData      = CF.gameRequire("Modules.GameLayer.GameData")
local CardLogic     = CF.gameRequire("Logic.CardLogic")

GameModule.EVENT_GAME_START                 = "EVENT_GAME_START"
GameModule.EVENT_HAND_CARD_CHANGED          = "EVENT_HAND_CARD_CHANGED"
GameModule.EVENT_PLAYER_SHOW_OUT_CARD       = "EVENT_PLAYER_SHOW_OUT_CARD"
GameModule.EVENT_GAME_OPEN_CARD             = "EVENT_GAME_OPEN_CARD"
GameModule.EVENT_GAME_OPEN_CARD_SEAT        = "EVENT_GAME_OPEN_CARD_SEAT"
GameModule.EVENT_GAME_WIN_ORDER             = "EVENT_GAME_WIN_ORDER"
GameModule.EVENT_GAME_END                   = "EVENT_GAME_END"
GameModule.EVENT_PLAYER_GET_POWER           = "EVENT_PLAYER_GET_POWER"
GameModule.EVENT_SHOW_ALL_PLAYER_HANDCARDS  = "EVENT_SHOW_ALL_PLAYER_HANDCARDS"
GameModule.EVENT_SHOW_CARDTYPE_SELECT       = "EVENT_SHOW_CARDTYPE_SELECT"
GameModule.EVENT_GAME_SELECT_HINTCARDS      = "EVENT_GAME_SELECT_HINTCARDS"
GameModule.EVENT_GAME_CHANGE_BTNS_STATE     = "EVENT_GAME_CHANGE_BTNS_STATE"
GameModule.EVENT_PLAYER_HEAD_CLOCK          = "EVENT_PLAYER_HEAD_CLOCK"
GameModule.EVENT_GAME_PLAYER_START          = "EVENT_GAME_PLAYER_START"
GameModule.EVENT_GAME_SHOW_CHANGE_BTN       = "EVENT_GAME_SHOW_CHANGE_BTN"
GameModule.EVENT_SPECF_CARD                 = "EVENT_SPECF_CARD"
GameModule.EVENT_SURRENDER_COUNT_DOWN      = "EVENT_SURRENDER_COUNT_DOWN"
GameModule.EVENT_SCORE_TABLE_SHOW          = "EVENT_SCORE_TABLE_SHOW"
GameModule.EVENT_SCORE_EVERY_PLAYER_SHOW   = "EVENT_SCORE_EVERY_PLAYER_SHOW"
GameModule.EVENT_SCORE_BOMB                = "EVENT_SCORE_BOMB"
GameModule.EVENT_GAME_WINLOST              = "EVENT_GAME_WINLOST"
GameModule.EVENT_GAME_TOTAL_RESULT         = "EVENT_GAME_TOTAL_RESULT"
GameModule.EVENT_SURRENDER_FLAG            = "EVENT_SURRENDER_FLAG"
GameModule.EVENT_TOTAL_SCORE               = "EVENT_TOTAL_SCORE"
GameModule.EVENT_SHUFFLE_SEATS             = "EVENT_SHUFFLE_SEATS"
GameModule.EVENT_SHUFFLEFINISH             = "EVENT_SHUFFLEFINISH"
GameModule.EVENT_FOUR_JOKER_SCORE          = "EVENT_FOUR_JOKER_SCORE"
GameModule.EVENT_STABLE_BOMB_SEAT          = "EVENT_STABLE_BOMB_SEAT"
GameModule.EVENT_FFZ_SEAT                  = "EVENT_FFZ_SEAT"
GameModule.EVENT_FFZ_BOMB                  = "EVENT_FFZ_BOMB"
GameModule.EVENT_WAIT_SHOW_BOMB_ANI        = "EVENT_WAIT_SHOW_BOMB_ANI"
GameModule.EVENT_FFZ_JOKER                 = "EVENT_FFZ_JOKER"
GameModule.EVENT_STABLE_BOMB_SEAT_ARRAY    = "EVENT_STABLE_BOMB_SEAT_ARRAY"
GameModule.EVENT_GRASP_SCORE_CARDS         = "EVENT_GRASP_SCORE_CARDS"
GameModule.EVENT_NORMAL_NO_BOMB            = "EVENT_NORMAL_NO_BOMB"
GameModule.EVENT_OPEN_CARDS_SEAT_SIX       = "EVENT_OPEN_CARDS_SEAT_SIX"
GameModule.EVENT_UPDATE_PROP_GUIDE         = "EVENT_UPDATE_PROP_GUIDE"
GameModule.EVENT_SHOW_GUIDE                = "EVENT_SHOW_GUIDE"
GameModule.EVENT_HIDE_GUIDE_PROP           = "EVENT_HIDE_GUIDE_PROP"

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
        {callback = handler(self, self.onMsgAllOutRecord), msgClass = CF.GameProtocol.msgAllOutRecord},
        {callback = handler(self, self.onMsgHandCard), msgClass = CF.GameProtocol.msgHandCard},
        {callback = handler(self, self.onMsgShowOutCards), msgClass = CF.GameProtocol.msgShowOutCards},
        {callback = handler(self, self.onMsgLianZhaBuDai), msgClass = CF.GameProtocol.msgLianZhaBuDai},
        {callback = handler(self, self.onMsgGameType), msgClass = CF.GameProtocol.msgGameType},
        {callback = handler(self, self.onMsgHaveMingPai), msgClass = CF.GameProtocol.msgHaveMingPai},
        {callback = handler(self, self.onMsgSwapSeat), msgClass = CF.GameProtocol.msgSwapSeat},
        {callback = handler(self, self.onMsgOpenCard), msgClass = CF.GameProtocol.msgOpenCard},
        {callback = handler(self, self.onMsgOpenCardSeat), msgClass = CF.GameProtocol.msgOpenCardSeat},
        {callback = handler(self, self.onMsgWinOrder), msgClass = CF.GameProtocol.msgWinOrder},
        {callback = handler(self, self.onMsgGameEnd), msgClass = CF.GameProtocol.msgGameEnd},
        {callback = handler(self, self.onMsgPower), msgClass = CF.GameProtocol.msgPower},
        {callback = handler(self, self.onMsgOutCards), msgClass = CF.GameProtocol.msgOutCards},
        {callback = handler(self, self.onMsgShowSwapSeat), msgClass = CF.GameProtocol.msgShowSwapSeat},
        {callback = handler(self, self.onMsgSwapSeatFlag), msgClass = CF.GameProtocol.msgSwapSeatFlag},
        {callback = handler(self, self.onMsgAllHandCards), msgClass = CF.GameProtocol.msgAllHandCards},
        {callback = handler(self, self.onMsgSpecfCards), msgClass = CF.GameProtocol.msgSendAllCard},
        {callback = handler(self, self.onMsgSurrenderCountDown),msgClass = CF.GameProtocol.msgSurrenderCountDown},
        {callback = handler(self, self.onMsgScoreTableShowTurn),msgClass = CF.GameProtocol.msgScoreTableShowTurn},
        {callback = handler(self, self.onMsgScoreEveryPlayerTurn),msgClass = CF.GameProtocol.msgScoreEveryPlayerTurn},
        {callback = handler(self, self.onMsgScoreBombTurn),msgClass = CF.GameProtocol.msgScoreBombTurn},
        {callback = handler(self, self.onMsgSurrenderFlag),msgClass = CF.GameProtocol.msgSurrenderFlag},
        {callback = handler(self, self.onMsgTotalScore),msgClass = CF.GameProtocol.msgTotalScore},
        {callback = handler(self, self.onMsgShuffleSeats),msgClass = CF.GameProtocol.msgShuffleSeats},
        {callback = handler(self, self.onMsgShuffleFinish),msgClass = CF.GameProtocol.msgShuffleFinish},
        {callback = handler(self, self.onMsgFourJokerScore),msgClass = CF.GameProtocol.msgFourJokerScore},
        {callback = handler(self, self.onMsgStableBombSeat),msgClass = CF.GameProtocol.msgStableBombSeat},
        {callback = handler(self, self.onMsgFFZSeat),msgClass = CF.GameProtocol.msgFFZSeat},
        {callback = handler(self, self.onMsgFFZBomb),msgClass = CF.GameProtocol.msgFFZBomb},
        {callback = handler(self, self.onMsgWaitShowBombAni),msgClass = CF.GameProtocol.msgWaitShowBombAni},
        {callback = handler(self, self.onMsgFFZJoker),msgClass = CF.GameProtocol.msgFFZJoker},
        {callback = handler(self, self.onMsgStableBombSeatArray),msgClass = CF.GameProtocol.msgStableBombSeatArray},
        {callback = handler(self, self.onMsgGraspScoreCards),msgClass = CF.GameProtocol.msgGraspScoreCards},
        {callback = handler(self, self.omMsgNormalNoBoom),msgClass = CF.GameProtocol.msgNormalNoBoom},
        {callback = handler(self, self.onMsgOpenCardSeatSix),msgClass = CF.GameProtocol.msgOpenCardSeatSix},
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

function GameModule:onMsgClock(msgData)
    if msgData.sClock > 60 or msgData.sClock < 0 then
        msgData.sClock = 0
    end
    self:dispatchEvent({name = self.EVENT_PLAYER_HEAD_CLOCK, msg = {seat = msgData.sSeat, nTime = msgData.sClock}})
    XH.lobby:getModule("Sxvip.FriendInfo"):onOutStart(msgData.sSeat)
end

function GameModule:onMsgGameStart(msgData)
    CF.game:getModule("Marker"):onAfterGameStart()
    CF.roomData:setIsGameStart(true)
    self:dispatchEvent({name = self.EVENT_GAME_START, msg = {}})
    -- 隐藏牌有列表入口
    if not CF.roomData:getIsSeer() then
        CF.getLobbyModule("Im"):dispatchEvent({name = CF.getLobbyModule("Im").EVENT_HIDE_LIST_ENTRANCE})
        CF.getLobbyModule("Im"):dispatchEvent({name = CF.getLobbyModule("Im").EVENT_HIDE_MSG_ENTRANCE})
        CF.getLobbyModule("Im"):dispatchEvent({name = CF.getLobbyModule("Im").EVENT_HIDE_NOTIFY_INVITE})
    end
end

function GameModule:onMsgGameStep(msgData)
    self._gameData:setGameStep(msgData.iGameStep)
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

--#设置手牌（手牌数据，是否需要动画）
function GameModule:onMsgHandCard(msgData)
    local handCardIDs = {}
    for i = 1, msgData.ucCount do
        table.insert(handCardIDs, msgData.ucCards[i])
    end
    self._gameData:setHandCardIDs(msgData.ucSeat, handCardIDs)
    self:dispatchEvent({name = self.EVENT_HAND_CARD_CHANGED,msg = {seat = msgData.ucSeat, bIsShow = msgData.bIsShow, bPlayAni = msgData.bPlayAni}})
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
end

function GameModule:onMsgLianZhaBuDai(msgData)
    self._gameData:setLianZhaBuDai(msgData.bLianZhaBuDai)
end

function GameModule:onMsgGameType(msgData)
    self._gameData:setGameType(msgData.ucGameType)
end

--#是否明牌
function GameModule:onMsgHaveMingPai(msgData)
    self._gameData:setHaveMingPai(msgData.bMingPai)
end

--#根据翻牌换座位
function GameModule:onMsgSwapSeat(msgData)
    if not msgData.bIsSwapSeatEnd then
        if msgData.bIsHuanWei then
            if msgData.ucnowseat == CF.roomData:getPlayBackSelfSeat() then
                CF.roomData:setPlayBackSelfSeat(msgData.ucotherseat)
            end
            if msgData.ucotherseat == CF.roomData:getPlayBackSelfSeat() then
                CF.roomData:setPlayBackSelfSeat(msgData.ucnowseat)
            end
            self._gameData:swapPlayerSeat(msgData.ucnowseat, msgData.ucotherseat)
            self:swapPlayerSeat(msgData.ucnowseat, msgData.ucotherseat)
        else
            CF.msgManager:sendWaitSwapSeat()
        end
    end
end

function GameModule:swapPlayerSeat(ucnowseat, ucotherseat)
    local playerData = CF.roomData:getPlayerDataBySeatId(ucnowseat)
    local otherPlayerData = CF.roomData:getPlayerDataBySeatId(ucotherseat)
    if playerData then
        playerData._nSeat = ucotherseat
    end
    if otherPlayerData then
        otherPlayerData._nSeat = ucnowseat
    end
end

function GameModule:onMsgOpenCard(msgData)
    self._gameData:setOpenCardID(msgData.ucCardID)
    self:dispatchEvent({name = self.EVENT_GAME_OPEN_CARD,msg = {cardID = msgData.ucCardID, bPlayAni = msgData.bPlayAni}})
end

function GameModule:onMsgOpenCardSeat(msgData)
    self._gameData:setOpenCardFirstSeat(msgData.sFirstSeat)
    self._gameData:setOpenCardSecondSeat(msgData.sSecondSeat)

    self:dispatchEvent(
        {
            name = self.EVENT_GAME_OPEN_CARD_SEAT,
            msg = {
                bPlayAni = msgData.bPlayAni,
                firstSeat = msgData.sFirstSeat,
                secondSeat = msgData.sSecondSeat
            }
        }
    )
end

function GameModule:onMsgWinOrder(msgData)
    self:dispatchEvent({name = self.EVENT_GAME_WIN_ORDER,msg = {seat = msgData.ucSeat, order = msgData.ucOrder + 1}})
end

function GameModule:onMsgGameEnd(msgData)
    CF.roomData:setIsGameStart(false)
    self._gameData:setGameEndState(true)
    self:dispatchEvent({name = self.EVENT_GAME_END})
end

function GameModule:onMsgPower(msgData)
    if msgData.sPrePowerSeat == CF.roomData:getMaxChairs() then
        msgData.sPrePowerSeat = CF.roomData:getMaxPlayer()
    end

    self._gameData:setPreOutSeat(msgData.sPrePowerSeat)
    self._gameData:setPowerSeat(msgData.sPowerSeat)
    self._gameData:setPreconditionOutCards(false)
    self._gameData:clearHintCards() --清除提示数据

    if msgData.sPowerSeat ~= CF.roomData:getSelfSeat() or CF.roomData:getIsSeer() then
        self:dispatchEvent({name = self.EVENT_PLAYER_GET_POWER, msg = {}})
        return
    end

    local hintCards  --轮到自己出牌,刷新提示数据
    local handCardIDs = self._gameData:getHandCardIDs(CF.roomData:getSelfSeat())
    local isFirstSeat, preOutCardIDs, preOutCardType = self:checkIsFreedomOutCard() --是否是自由出牌
    if not isFirstSeat then
        hintCards = CardLogic.getTipsDataByOutCards(handCardIDs, preOutCardIDs, preOutCardType, CF.roomData:getIsLianZha())
    else
        hintCards = CardLogic.getTipsDataFreedom(handCardIDs,CF.roomData:getIsLianZha())
    end
    self._gameData:setHintCards(hintCards)
    self._isHintFirstSelect = true

    self:dispatchEvent({name = self.EVENT_PLAYER_GET_POWER,msg = {isFirstSeat = isFirstSeat}})
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
    local bCanOut = CardLogic.checkCanOutCard(preOutCardIDs, preOutCardType, selectCardIDs, CF.roomData:getIsLianZha())
    return bCanOut
end

function GameModule:onMsgOutCards(msgData)
    if msgData.sSeat == CF.roomData:getSelfSeat() then
        self._gameData:setPreconditionOutCards(false)
    end

    if msgData.sSeat == CF.roomData:getMaxChairs() then
        msgData.sSeat = CF.roomData:getMaxPlayer()
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
        self._gameData:addOutCardRecord(msgData.sSeat, cardGroup)
    end
end

--#是否显示换位置按钮
function GameModule:onMsgShowSwapSeat(msgData)
    self._gameData:setIsShowSwapSeatBtn(msgData.bIsShowSwapSeat)
    self:dispatchEvent({name = self.EVENT_GAME_SHOW_CHANGE_BTN, msg = {bShow = msgData.bIsShowSwapSeat}})
end

--#换位置
function GameModule:onMsgSwapSeatFlag(msgData)
    local srcPlayer = CF.roomData:getPlayerDataBySeatId(msgData.srcSeat)
    local dstPlayer = CF.roomData:getPlayerDataBySeatId(msgData.destSeat)
    if srcPlayer and dstPlayer then
        local tipPlayer = CF.TipTool.showPopLayer("TipLayer", {CF.TipLayer.ENUM_TIP_TYPE.TIP_OK})
        tipPlayer:setText(srcPlayer:getNickName() .. "和" .. dstPlayer:getNickName() .. "成功交换位置!")
    end
    self:dispatchEvent({name = self.EVENT_GAME_SHOW_CHANGE_BTN, msg = {bShow = self._gameData:isShowSwapSeatBtn()}})
    --高德位置互换
    local str1 = self._gameData:getAmapStrBySeat(msgData.srcSeat)
    local str2 = self._gameData:getAmapStrBySeat(msgData.destSeat)
    self._gameData:setAmapStrBySeat(msgData.srcSeat, str2)
    self._gameData:setAmapStrBySeat(msgData.destSeat, str1)
end

--#获取全部人手牌并展示
function GameModule:onMsgAllHandCards(msgData)
    for i = 1, msgData.allRoundCount do
        for n = 1, msgData.allRoundCount do
            local player = CF.roomData:getPlayerDataBySeatId(n - 1)
            if msgData.playerID[i] == player:getNumberID() then
                local handCardIDs = CardLogic.getCardIDsFromDataByCount(msgData.ObviousCards[n].ucCards, msgData.ObviousCards[n].ucCount)
                self._gameData:setHandCardIDs(n - 1, handCardIDs)
            end
        end
    end
    self:dispatchEvent({name = self.EVENT_SHOW_ALL_PLAYER_HANDCARDS})
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
    local bCanOut, cardTypeArr = CardLogic.checkCanOutCard(preOutCardIDs, preOutCardType, cardIDs, CF.roomData:getIsLianZha())
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
                cardType = gameCardGroup.tType
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
        bCanOut = CardLogic.checkCanOutCard(preOutCardIDs, preOutCardType, selectCardIDs, CF.roomData:getIsLianZha())
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

function GameModule:checkClassicsCanout(selectCardIDs, bCan)
    local bCanOut = bCan
    local tCardPower = {}
    for _, cardId in pairs(selectCardIDs) do
        local cardPower = CardLogic.getCardPowerById(cardId)
        table.insert(tCardPower, cardPower)
    end
    local isLianZha = CardLogic.isLianZha(tCardPower)
    local isKinBomb, kingNum = CardLogic.isKingBomb(tCardPower)
    if isLianZha or (isKinBomb and kingNum == 6) or (#tCardPower == 2 and kingNum == 5 and tCardPower[1] ~= tCardPower[2]) then
        bCanOut = false
    end
    return bCanOut
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

--是否显示洗牌按钮
function GameModule:needShowShuffleButton()
    if CF.roomData:isPlayBack() or CF.roomData:getIsSeer() then
        return false
    end
    local playCount = CF.roomData:getPlayCount()
    local maxPlayCount = CF.roomData:getMaxPlayCount()
    if playCount == maxPlayCount then
        return false
    end
    --读取配置,是否开启洗牌
    local isShowShuffle = CF.gameSub:getIsOpenShuffle(CF.roomData:getGameID())
    -- 下局是否预洗牌
    if isShowShuffle then
        local propUseModule = CF.game:getModule("PropUse")
        if propUseModule and propUseModule.isPreShuffle then
            isShowShuffle = not propUseModule:isPreShuffle()
        end
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
        if CF.roomData:getIsSeer() then
            return
        end
        self:initEveryTime()
        -- 旁观视角准备时，不清除旁观玩家的UI
        -- if (CF.roomData:getIsSeer() and not CF.roomData:getIsFFZ()) or CF.roomData:isDelayWatch() then
        --     return
        -- end
        self:dispatchEvent({name = self.EVENT_GAME_PLAYER_START})
    end
end

--每小局游戏需要更新的数据
function GameModule:initEveryTime()
    CF.roomData:initEveryTimesDatas()
    CF.roomData:setIsGameOver(false)
    self._gameData:initEveryTime()
    CF.game:getModule("Marker"):initEveryTime()
end

function GameModule:onMsgSpecfCards(msgData)
    self:dispatchEvent({name = self.EVENT_SPECF_CARD, msg = {cards = msgData.ucCard, cardCount = msgData.ucCardCount}})
end

--请求投降
function GameModule:onMsgSurrenderCountDown(msgData)
    self:dispatchEvent({ name = self.EVENT_SURRENDER_COUNT_DOWN, msg = {msgData = msgData} })
end

--闷拿分，桌面显示
function GameModule:onMsgScoreTableShowTurn(msgData)
    self:dispatchEvent({ name = self.EVENT_SCORE_TABLE_SHOW, msg = {msgData = msgData} })
end

--闷拿分，玩家显示
function GameModule:onMsgScoreEveryPlayerTurn(msgData)
    self:dispatchEvent({ name = self.EVENT_SCORE_EVERY_PLAYER_SHOW, msg = {msgData = msgData} })
end

--炸弹分
function GameModule:onMsgScoreBombTurn(msgData)
    self:dispatchEvent({ name = self.EVENT_SCORE_BOMB, msg = {msgData = msgData} })
end

--投降结果
function GameModule:onMsgSurrenderFlag(msgData)
    self:dispatchEvent({ name = self.EVENT_SURRENDER_FLAG, msg = {msgData = msgData} })
end

function GameModule:onMsgTotalScore(msgData)
    self:dispatchEvent({ name = self.EVENT_TOTAL_SCORE, msg = {msgData = msgData} })   
end

--洗牌协议
function GameModule:onMsgShuffleSeats(msgData)
   self:dispatchEvent({ name = self.EVENT_SHUFFLE_SEATS, msg = {msgData = msgData} })
end

--洗牌结束
function GameModule:onMsgShuffleFinish(msgData)
    self:dispatchEvent({ name = self.EVENT_SHUFFLEFINISH, msg = {msgData = msgData} })
end

--四王分数
function GameModule:onMsgFourJokerScore(msgData)
    self:dispatchEvent({ name = self.EVENT_FOUR_JOKER_SCORE, msg = {msgData = msgData} })
end

--定型炸座位
function GameModule:onMsgStableBombSeat(msgData)
   self:dispatchEvent({ name = self.EVENT_STABLE_BOMB_SEAT, msg = {msgData = msgData} })
end

--翻炸顺序座位
function GameModule:onMsgFFZSeat(msgData)
    self:dispatchEvent({ name = self.EVENT_FFZ_SEAT, msg = {msgData = msgData} })
end

--一个个玩家显示炸弹
function GameModule:onMsgFFZBomb(msgData)
    self:dispatchEvent({ name = self.EVENT_FFZ_BOMB, msg = {msgData = msgData} })
end

--显示炸弹动画
function GameModule:onMsgWaitShowBombAni(msgData)
    self:dispatchEvent({ name = self.EVENT_WAIT_SHOW_BOMB_ANI, msg = {msgData = msgData} })
end

--显示王
function GameModule:onMsgFFZJoker(msgData)
    self:dispatchEvent({ name = self.EVENT_FFZ_JOKER, msg = {msgData = msgData} })
end 

--定型炸座位号
function GameModule:onMsgStableBombSeatArray(msgData)
    self:dispatchEvent({ name = self.EVENT_STABLE_BOMB_SEAT_ARRAY, msg = {msgData = msgData} })
end

--抓分牌
function GameModule:onMsgGraspScoreCards(msgData)
    self:dispatchEvent({ name = self.EVENT_GRASP_SCORE_CARDS, msg = {msgData = msgData} })
    self:getGameData():setAllScoreCards(msgData.allScoreCards or {})
end

--常规无炸必投玩法
function GameModule:omMsgNormalNoBoom(msgData)
    self:dispatchEvent({ name = self.EVENT_NORMAL_NO_BOMB, msg = {msgData = msgData} })
end

--六人开牌，换位
function GameModule:onMsgOpenCardSeatSix(msgData)
    self:dispatchEvent({ name = self.EVENT_OPEN_CARDS_SEAT_SIX, msg = {msgData = msgData} })
end

return GameModule
