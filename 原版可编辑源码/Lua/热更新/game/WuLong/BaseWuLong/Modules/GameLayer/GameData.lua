local GameData = CF.gameClass("GameData", "game.GameBase.Modules.GameLayer.GameData")
local CardEnum = CF.gameRequire("Define.CardEnum")
local CardLogic = CF.gameRequire("Logic.CardLogic")
local WinLostData = CF.gameRequire("Modules.GameLayer.WinLostData")
local KW_DISTANCE_WARNNING = 50

GameData.EVENT_HANDCARD_UPDATE = "EVENT_HANDCARD_UPDATE"
GameData.EVENT_CHAODI_BOOL_CHANGED = "EVENT_CHAODI_BOOL_CHANGED"
GameData.EVENT_BANKER_CHANGED = "EVENT_BANKER_CHANGED"

function GameData:ctor()
    GameData.super.ctor(self)
    self:initDatas()
end

function GameData:initDatas()
    GameData.super.initDatas(self)
    self._gameStep = CF.GameDefine.GAME_STEP.GAME_STEP_NONE
    self._roomHostSeat = -1 --
    self._bankerSeatId = -1
    self._outCardsRecord = {}
    self._tOutCardIDs = {} --新增打出牌数据

    self._handCard = {}
    self._jokerData = {}
    self._lianZhaBuDai = false

    self._bChaoDi = {}

    self._playerExScore = nil

    self._preOutSeat = 4
    self._powerSeat = 0

    self._preconditionOutCards = false

    self._hintCards = {} --提示数据
    self._hintIndex = 0 --提示顺序序号
    self._winLostData = WinLostData.new()

    self._bigSettleData = nil
    self._isHaveResult = false
    self._isGameOver = false
    self._playerEndState = false
    self._handCardsStates = {}  -- 手牌状态
    self._servicePay = 0
    self._showWinOrder = {} -- 是否显示标识
    self._handCardCnt = {}
    self._isShowLeft = false
end

function GameData:setGameEndState(endState)
    self._playerEndState = endState
end

function GameData:initEveryTime()
    GameData.super.initEveryTime(self)
    self._gameStep = CF.GameDefine.GAME_STEP.GAME_STEP_NONE

    self._isShowLeft = false
    self._handCardCnt = {}
    self._preconditionOutCards = false

    self:clearHandCardData()
    self._playerExScore = nil
    self:resetRecordData()

    self._preOutSeat = CF.roomData:getMaxPlayer()
    self._powerSeat = CF.roomData:getMaxPlayer()

    self._hintCards = {}
    self._hintIndex = 0

    self:clearWinLostData()

    self._isHaveResult = false
    self._isGameOver = false

    self._showWinOrder = {} -- 是否显示标识
end

function GameData:clearWinLostData()
    self._winLostData:clearData()
end

function GameData:getWinLostData()
    return self._winLostData
end

function GameData:setJokerIDs(cardIds)
    for _, v in ipairs(cardIds) do
        self._jokerData[v] = true
    end
end

function GameData:setLianZhaBuDai(lianZhaBuDai)
    self._lianZhaBuDai = lianZhaBuDai
end

function GameData:getLianZhaBuDai()
    return self._lianZhaBuDai
end

----------------------------------------
--preconditionOutCards
----------------------------------------
function GameData:setPreconditionOutCards(preconditionOutCards)
    self._preconditionOutCards = preconditionOutCards
end

function GameData:getPreconditionOutCards()
    return self._preconditionOutCards
end

function GameData:setGameStep(gameStep)
    self._gameStep = gameStep
end

function GameData:getGameStep()
    return self._gameStep
end

----------------------------------------
--出牌数据
----------------------------------------
function GameData:setOutCardIDs(seat, cardIDs)
    self._tOutCardIDs[seat] = cardIDs
end

function GameData:getOutCardIDs(seat)
    return self._tOutCardIDs[seat]
end

function GameData:clearOutCardData()
    for i = 0, CF.roomData:getMaxPlayer() - 1 do
        self._tOutCardIDs[i] = {}
    end
end

function GameData:addOutCardRecord(nSeat, outGroup)
    local cards = clone(outGroup)
    if not self._outCardsRecord[nSeat] then
        self._outCardsRecord[nSeat] = {}
    end
    table.insert(self._outCardsRecord[nSeat], cards)
end

function GameData:getOutCardRecord(nSeat)
    return self._outCardsRecord[nSeat]
end

----------------------------------------
--手牌
----------------------------------------
function GameData:setHintCards(hintCards)
    self._hintCards = hintCards
    self._hintIndex = 0
end

function GameData:getHintCards()
    return self._hintCards
end

function GameData:clearHintCards()
    self._hintCards = {}
    self._hintIndex = 0
end

function GameData:setHintIndex(hintIndex)
    self._hintIndex = hintIndex
end

function GameData:getHintCardIdsBySomeCardIds(cardIDs, outCardIDs, outCardType)
    if outCardIDs and outCardType then
        --别家出单张，如果选择的是单张，并且大于出的单张，则不拆炸弹
        --别家出对子，如果选择的是对子，并且大于出的对子，则不拆炸弹
        --别家出三张，如果选择的是三张，并且大于出的三张，则不拆炸弹
        if
        (outCardType == CardEnum.CARDS_TYPE.CT_1_JUNKO_1_CONTINUOUS and #cardIDs == 1) or
        (outCardType == CardEnum.CARDS_TYPE.CT_2_JUNKO_1_CONTINUOUS and #cardIDs == 2 and CardLogic.isSameCardPowerByIds(cardIDs)) or
        (outCardType == CardEnum.CARDS_TYPE.CT_3_JUNKO_1_CONTINUOUS and #cardIDs == 3 and CardLogic.isSameCardPowerByIds(cardIDs))
        then
            local powerOutCard = CardLogic.getCardPowerById(outCardIDs[1])
            local powerSelect = CardLogic.getCardPowerById(cardIDs[1])
            if powerSelect > powerOutCard then
                return clone(cardIDs)
            end
        end

        local lianNum = outCardType % 100
        local shunNum = math.floor(outCardType / 100)
        if shunNum == 1 and lianNum >= 5 and #cardIDs == 1 then
            local powerSelect = CardLogic.getCardPowerById(cardIDs[1])
            local maxPower = powerSelect + lianNum - 1
            if maxPower <= CardEnum.CARD_POWER.CP_A then
                local maxCardValue = CardLogic.getCardValueByPower(maxPower)
                local maxCardID = CardLogic.getCardIdByValueAndColor(maxCardValue, CardEnum.CARD_COLOR.CC_DIAMOND)
                local tempCardIDs = {}
                table.insert(tempCardIDs, cardIDs[1])
                table.insert(tempCardIDs, maxCardID)
                local tempHintCardIDs = self:getHintCardIDsFromHintDate(tempCardIDs)
                if #tempHintCardIDs > 0 then
                    return tempHintCardIDs
                end
            end
        end
    end
    return self:getHintCardIDsFromHintDate(cardIDs)
end

function GameData:getHintCardIDsFromHintDate(cardIDs)
    if not self._hintCards or #self._hintCards <= 0 then
        return {}
    end
    if #cardIDs <= 0 then
        return {}
    end
    local tempHintCards = clone(self._hintCards)
    local tCardPowers = CardLogic.switchCardIDsToPowerKey(cardIDs)
    for _, hintCardIds in ipairs(tempHintCards) do
        local hintCardPowers = CardLogic.switchCardIDsToPowerKey(hintCardIds)
        local bHintThis = true
        for cardPower, v in pairs(tCardPowers) do
            if not hintCardPowers[cardPower] or #v > #hintCardPowers[cardPower] then
                bHintThis = false
                break
            end
        end
        if bHintThis then
            return hintCardIds
        end
    end
    return {}
end

function GameData:getHintCardIDs()
    if self._hintIndex >= #self._hintCards then
        self._hintIndex = 1
    else
        self._hintIndex = self._hintIndex + 1
    end
    return clone(self._hintCards[self._hintIndex]) or {}
end

----------------------------------------
--手牌
----------------------------------------
function GameData:setHandCardsState(nLocalSeat, bOpen)
    if self._handCardsStates == nil then
        self._handCardsStates = {}
    end
    self._handCardsStates[nLocalSeat] = bOpen
end

function GameData:getHandCardsState(nLocalSeat)
    if self._handCardsStates == nil then
        return false
    end
    return self._handCardsStates[nLocalSeat] or false
end

function GameData:clearShowWinOrder()
    self._showWinOrder = {}
end

function GameData:setShowWinOrder(nLocalSeat, nIndex)
    if self._showWinOrder == nil then
        self._showWinOrder = {}
    end
    self._showWinOrder[nLocalSeat] = nIndex
end

function GameData:getShowWinOrder(nLocalSeat)
    if self._showWinOrder == nil then
        return nil
    end
    return self._showWinOrder[nLocalSeat]
end

function GameData:setHandCardIDs(seat, cardIDs)
    local handCardIDs = CardLogic.getCardIDsBySortType(cardIDs)
    self._handCard[seat] = handCardIDs
    if seat == CF.roomData:getSelfSeat() then
        self:setFirstHandData(true)
    end
end

function GameData:getHandCardIDs(seat)
    return self._handCard[seat]
end

function GameData:getHandCardNum(seat)
    if self._handCardCnt[seat] then
        return self._handCardCnt[seat]
    end
    if not self._handCard[seat] then
        return 0
    end
    return #self._handCard[seat]
end

function GameData:clearHandCardData()
    for i = 0, CF.roomData:getMaxPlayer() - 1 do
        self._handCard[i] = {}
    end
end

function GameData:deleteHandCardIDs(seat, delectCardIDs)
    local delCardIDs = clone(delectCardIDs)
    if not self._handCard[seat] or not delectCardIDs then
        return
    end

    if CardLogic.isBackHandCards(self._handCard[seat]) then
        delCardIDs = {}
        for _ = 1, #delectCardIDs do
            table.insert(delCardIDs, 0)
        end
    end
    local _, newHandCardIDs = CardLogic.deleteCardIDs(self._handCard[seat], delCardIDs)
    self:setHandCardIDs(seat, newHandCardIDs)

    self:dispatchEvent({ name = self.EVENT_HANDCARD_UPDATE, msg = { seat = seat, bDeleteCard = true } })
end

function GameData:dispatchUpdateHandCardEvent(seat)
    local msg = nil
    if seat ~= nil then
        msg = { seat = seat }
    end
    self:dispatchEvent({ name = self.EVENT_HANDCARD_UPDATE, msg = msg })
end

function GameData:setPlayerScore(msgData)
    self._playerExScore = msgData
end

function GameData:getPlayerScore()
    return self._playerExScore
end

function GameData:setChaoDiBool(seat, bChaoDi)
    self._bChaoDi[seat] = bChaoDi

    self:dispatchEvent({name = self.EVENT_CHAODI_BOOL_CHANGED})
end

function GameData:getChaoDiBool(seat)
    return self._bChaoDi[seat]
end

function GameData:resetChaoDiData()
    for i = 0, CF.roomData:getMaxPlayer() - 1 do
        self._bChaoDi[i] = false
    end
end

function GameData:resetRecordData()
    for i = 0, CF.roomData:getMaxPlayer() - 1 do
        self._outCardsRecord[i] = {}
    end
end

----------------------------------------
--出牌
----------------------------------------
function GameData:setPreOutSeat(preOutSeat)
    self._preOutSeat = preOutSeat
end

function GameData:getPreOutSeat()
    return self._preOutSeat
end

function GameData:setPowerSeat(powerSeat)
    self._powerSeat = powerSeat
end

function GameData:getPowerSeat()
    return self._powerSeat
end

function GameData:setBigSettleData(data)
    self._bigSettleData = data
end

function GameData:getBigSettleData()
    return self._bigSettleData
end

function GameData:setIsHaveResult(isHaveResult)
    self._isHaveResult = isHaveResult or false
end

function GameData:getIsHaveResult()
    return self._isHaveResult
end

function GameData:setServicePay(servicePay)
    self._servicePay = servicePay
end

function GameData:getServicePay()
    return self._servicePay
end

function GameData:setHandCardsCount(seat, count)
    self._handCardCnt[seat] = count
end

function GameData:getHandCardsCount(seat)
    return self._handCardCnt[seat]
end

function GameData:setShowLeft(isShow)
    self._isShowLeft = isShow
end

function GameData:getShowLeft()
    return self._isShowLeft
end

--设置庄座位
function GameData:setBankerSeat(seatId)
    if not seatId then
        return
    end
    self._bankerSeatId = seatId

    self:dispatchEvent({ name = self.EVENT_BANKER_CHANGED })
end

function GameData:getBankerSeat()
    return self._bankerSeatId
end

function GameData:isBanker(seatId)
    return self._bankerSeatId == seatId
end

return GameData