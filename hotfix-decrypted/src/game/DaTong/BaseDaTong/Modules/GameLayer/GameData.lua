local GameData      = CF.gameClass("GameData", CF.ModuleBase)
local CardEnum      = CF.gameRequire("Define.CardEnum")
local CardLogic     = CF.gameRequire("Logic.CardLogic")
local WinLostData   = CF.gameRequire("Modules.GameLayer.WinLostData")

GameData.EVENT_HANDCARD_UPDATE = "EVENT_HANDCARD_UPDATE"
GameData.EVENT_PLAYER_SEAT_CHANGED = "EVENT_PLAYER_SEAT_CHANGED"

function GameData:ctor()
    GameData.super.ctor(self)
    self:initDatas()
end

function GameData:initDatas()
    self._amapArrayList = {--高德地理数据
        [0] = "",
        [1] = "",
        [2] = "",
        [3] = ""
    }
    self._gameStep              = CF.GameDefine.GAME_STEP.GAME_STEP_NONE
    self._sortType              = CardLogic.SrotType.CardPower --排序方式
    self._winLostData           = WinLostData.new()
    self._gameType              = 0
    self._outCardsRecord        = {}
    self._tOutCardIDs           = {} --新增打出牌数据
    self._handCard              = {}
    self._jokerData             = {}
    self._localtion             = {}
    self._hintCards             = {} --提示数据
    self._allScoreCards         = {}
    self._openCardID            = 0
    self._preOutSeat            = 0
    self._powerSeat             = 0
    self._openCardFirstSeat     = 0
    self._openCardSecondSeat    = 0
    self._hintIndex             = 0 --提示顺序序号
    self._bigSettleData         = nil
    self._preconditionOutCards  = false
    self._lianZhaBuDai          = false
    self._haveMingPai           = false
    self._isHaveResult          = false
    self._isGameOver            = false
    self._playerEndState        = false
    self._isShowSwapSeatBtn     = false --换座按钮是否显示
    self._firstHandData = false
end

function GameData:setGameEndState(endState)
    self._playerEndState = endState
end

function GameData:initEveryTime()
    self._gameStep              = CF.GameDefine.GAME_STEP.GAME_STEP_NONE
    self._localtion             = {}
    self._hintCards             = {}
    self._openCardID            = 0
    self._hintIndex             = 0
    self._preOutSeat            = CF.roomData:getMaxPlayer()
    self._powerSeat             = CF.roomData:getMaxPlayer()
    self._sortType              = CardLogic.SrotType.CardPower --排序方式
    self._preconditionOutCards  = false
    self._isHaveResult          = false
    self._isGameOver            = false
    self._firstHandData = false
    self:clearWinLostData()
    self:clearHandCardData()
    self:resetRecordData()
end

function GameData:clearWinLostData()
    self._winLostData:clearData()
end

function GameData:getWinLostData()
    return self._winLostData
end

function GameData:setGameType(gameType)
    self._gameType = gameType
end

function GameData:getGameType()
    return self._gameType
end

function GameData:setHaveMingPai(haveMingPai)
    self._haveMingPai = haveMingPai
end

function GameData:setJokerIDs(cardIds)
    for _, v in ipairs(cardIds) do
        self._jokerData[v] = true
    end
end

function GameData:isJokerById(cardId)
    if self._jokerData[cardId] then
        return true
    end
    return false
end

function GameData:setLianZhaBuDai(lianZhaBuDai)
    self._lianZhaBuDai = lianZhaBuDai
end

function GameData:getLianZhaBuDai()
    return self._lianZhaBuDai
end

function GameData:setAmapStrBySeat(seat, str)
    self._amapArrayList[seat] = str
end

function GameData:getAmapStrBySeat(seat)
    return self._amapArrayList[seat]
end

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

function GameData:setOpenCardFirstSeat(openCardFirstSeat)
    self._openCardFirstSeat = openCardFirstSeat
end

function GameData:getOpenCardFirstSeat()
    return self._openCardFirstSeat
end

function GameData:setOpenCardSecondSeat(openCardSecondSeat)
    self._openCardSecondSeat = openCardSecondSeat
end

function GameData:getOpenCardSecondSeat()
    return self._openCardSecondSeat
end

function GameData:setOpenCardID(openCardID)
    self._openCardID = openCardID
end

function GameData:getOpenCardID(openCardID)
    return self._openCardID
end

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
        if(outCardType == CardEnum.CARDS_TYPE.CT_1_JUNKO_1_CONTINUOUS and #cardIDs == 1) or
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

    local tmpCardPower = {}
    for _, cardId in pairs(cardIDs) do
        local cardPower = CardLogic.getCardPowerById(cardId)
        table.insert(tmpCardPower, cardPower)
    end
    local isLianZha, _, _, _ = CardLogic.isLianZha(tmpCardPower)
    if not CF.roomData:getIsLianZha() and isLianZha then
        return {}
    end

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

function GameData:setHandCardIDs(seat, cardIDs)
    local handCardIDs = CardLogic.getCardIDsBySortType(self._sortType, cardIDs)
    self._handCard[seat] = handCardIDs
    if seat == CF.roomData:getSelfSeat() then
        self:setFirstHandData(true)
    end
end

function GameData:getHandCardIDs(seat)
    return self._handCard[seat]
end

function GameData:getHandCardNum(seat)
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

    self:dispatchEvent({name = self.EVENT_HANDCARD_UPDATE, msg = {seat = seat, bDeleteCard = true}})
end

function GameData:dispatchUpdateHandCardEvent(seat)
    local msg = nil
    if seat ~= nil then
        msg = {seat = seat}
    end
    self:dispatchEvent({name = self.EVENT_HANDCARD_UPDATE, msg = msg})
end

function GameData:setSortType(sortType)
    self._sortType = sortType

    for seat = 0, CF.roomData:getMaxPlayer() - 1 do
        if self._handCard[seat] then
            local handCardIDs = CardLogic.getCardIDsBySortType(self._sortType, self._handCard[seat])
            self._handCard[seat] = handCardIDs
        end
    end

    self:dispatchEvent({name = self.EVENT_HANDCARD_UPDATE})
end

function GameData:getSortType()
    return self._sortType
end

function GameData:swapPlayerSeat(nowseat, otherseat)
    local tempcards1 = clone(self:getHandCardIDs(otherseat))
    local tempcards2 = clone(self:getHandCardIDs(nowseat))
    self:setHandCardIDs(otherseat, tempcards2)
    self:setHandCardIDs(nowseat, tempcards1)

    --高德位置互换
    local str1 = self:getAmapStrBySeat(otherseat)
    local str2 = self:getAmapStrBySeat(nowseat)
    self:setAmapStrBySeat(otherseat, str2)
    self:setAmapStrBySeat(nowseat, str1)

    self:dispatchEvent({name = self.EVENT_HANDCARD_UPDATE})
    self:dispatchEvent(
        {
            name = self.EVENT_PLAYER_SEAT_CHANGED,
            msg = {nowseat = nowseat, otherseat = otherseat}
        }
    )
end

function GameData:resetRecordData()
    for i = 0, CF.roomData:getMaxPlayer() - 1 do
        self._outCardsRecord[i] = {}
    end
end

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

--相同连炸判断线数比较大小 901>504>405
function GameData:isLianZhanCompareWithLian()
    return false
end

--一张大王加一张小王是否可以当对子出
function GameData:isOneBJAndOneSJCanDui()
    return false
end

--四王是最大的7线
function GameData:isSiWangIsBig7Xian()
    return false
end

--四王无癞子是最大的8线 (暂定不支持)
function GameData:isSiWangIsBig8Xian()
    return false
end

function GameData:setIsShowSwapSeatBtn(isShowSwapSeatBtn)
    if type(isShowSwapSeatBtn) ~= "boolean" then
        return
    end
    self._isShowSwapSeatBtn = isShowSwapSeatBtn
end

function GameData:isShowSwapSeatBtn()
    return self._isShowSwapSeatBtn
end

function GameData:setAllScoreCards(cards)
    self._allScoreCards = cards
end

function GameData:getAllScoreCards()
    return self._allScoreCards
end

-- 首发自己手牌事件（与 game.GameBase...GameData / QingShen 监听的事件名保持一致）
GameData.EVENT_FIRST_HAND_DATA = "EVENT_FIRST_HAND_DATA"

--- 本类直接继承 CF.ModuleBase，未继承公共 GameData 基类，此处本地实现首手牌标记
function GameData:setFirstHandData(firstHandMah)
    local changed = (self._firstHandData ~= firstHandMah)
    self._firstHandData = firstHandMah
    if changed and firstHandMah == true then
        self:dispatchEvent({ name = self.EVENT_FIRST_HAND_DATA })
    end
end

function GameData:getFirstHandData()
    return self._firstHandData or false
end

return GameData
  �6  