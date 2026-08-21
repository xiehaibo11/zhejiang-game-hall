local GameData = CF.gameClass("GameData", "game.GameBase.Modules.GameLayer.GameData")
local WinLostData = CF.gameRequire("Modules.GameLayer.WinLostData")
local CardsType = CF.gameRequire("Modules.GameLayer.MyCardsType")

function GameData:ctor()
    GameData.super.ctor(self)
    self:initDatas()
end

function GameData:initDatas()
    GameData.super.initDatas(self)
    self._gameStep = CF.GameDefine.ENUM_GAME_STEP.GAME_STEP_NONE

    -- 手牌数据
    self._handCardsData = {}
    -- 出牌数据
    self._outCardData = {}
    -- 玩家手牌数
    self._handCardCnt = {}
    -- 当前操作玩家
    self._curPlayer = 0
    -- 游戏当前阶段
    self._gameStep = 0
    -- 上个出牌玩家
    self._lastPlayer = 0
    self._lastOutCard = {}
    self._lastCardType = CardsType:new()
    self._isTrust = false --是否托管状态
    self._robSeat = -1

    self._mustOutCardID = nil
    self._allCards = {}

    self._lastCheckCardsCount = 0
    self._preShowOut = false

    self._sortType = nil

    self._winLostData = WinLostData.new()
    self._bigSettleData = nil
    self._isHaveResult = false
    self._gameEndState = false
end

function GameData:initEveryTime()
    GameData.super.initEveryTime(self)
    self._gameStep = CF.GameDefine.ENUM_GAME_STEP.GAME_STEP_NONE

    self._handCardsData = {}
    self._outCardData = {}
    self._handCardCnt = {}
    self._curPlayer = 0
    self._gameStep = 0
    self._lastPlayer = 0
    self._lastOutCard = {}
    self._lastCardType = CardsType:new()

    self:resetCardsData()
    self._isTrust = false --是否托管状态
    self._robSeat = -1

    self._mustOutCardID = nil
    self._allCards = {}

    self._lastCheckCardsCount = 0
    self._preShowOut = false

    self:clearWinLostData()

    self._isHaveResult = false
    self._gameEndState = false
end

function GameData:setAllCards(allCards)
    self._allCards = allCards
end

function GameData:getAllCards()
    return self._allCards
end

function GameData:setHandCardsCount(seat,count)
    self._handCardCnt[seat] = count
end

function GameData:getHandCardsCount(seat)
    return self._handCardCnt[seat]
end

function GameData:isTrust()
    return  self._isTrust
end

function GameData:setTrust(bTrust)
    self._isTrust = bTrust
end

function GameData:setGameStep(step)
    self._gameStep = step
end

function GameData:getGameStep()
    return self._gameStep
end

function GameData:setCurrentPlayer(seatId)
    self._curPlayer = seatId
end

function GameData:getCurrentPlayer()
    return self._curPlayer
end

function GameData:setHandCards(seat, cardsData)
    self._handCardsData[seat] = cardsData
    if seat == CF.roomData:getSelfSeat() then
        self:setFirstHandData(true)
    end
end

function GameData:getHandCards(seat)
    return self._handCardsData[seat]
end

function GameData:deleteHandCards(seat, outCard)
    local cards = self._handCardsData[seat]
    for i = 1,#outCard do
        for j = #cards,1,-1 do
            if outCard[i] == cards[j] then
                table.remove(cards,j)
            end
        end
    end
    self:dispatchEvent({name = self.EVENT_HANDCARD_UPDATE, msg = {seat = seat, bDeleteCard = true}})
end

function GameData:getOutCard(seat)
    return self._outCardData[seat]
end

function GameData:setOutCard(seat, outCard)
    self._outCardData[seat] = outCard
end

function GameData:resetCardsData()
    self._handCardsData = {}
    self._outCardData = {}
end

function GameData:setLastPlayer(seatId)
    self._lastPlayer = seatId
end

function GameData:getLastPlayer()
    return self._lastPlayer
end

function GameData:setLastOutCard(cards)
    self._lastOutCard = cards
end

function GameData:getLastOutCard()
    return self._lastOutCard
end

function GameData:resetLastOutCard()
    self._lastOutCard = {}
end

function GameData:updateCardType(OutCard)
    self._lastCardType._nCardTypeEnum = OutCard.sCardType
    self._lastCardType._nEndPower = OutCard.sEndPower
end

function GameData:getLastCardType()
    return self._lastCardType
end

function GameData:resetCardType()
    self._lastCardType._nCardTypeEnum = 0
end

function GameData:setRobSeat(seat)
    self._robSeat = seat
end

function GameData:getRobSeat()
    return self._robSeat
end

function GameData:clearRobSeat()
    self._robSeat = -1
end

function GameData:setMustOutCard(mustOutCardID)
    self._mustOutCardID = mustOutCardID
end

function GameData:getMustOutCard()
    return self._mustOutCardID
end

function GameData:clearMustOutCard()
    self._mustOutCardID = nil
end

function GameData:setLastCheckCardsCount(lastCheckCardsCount)
    self._lastCheckCardsCount = lastCheckCardsCount
end

function GameData:getLastCheckCardsCount()
    return self._lastCheckCardsCount
end

function GameData:resetLastCheckCardsCount()
    self._lastCheckCardsCount = 0
end

function GameData:isPreShowOut()
    return  self._preShowOut
end

function GameData:setPreShowOut(preShowOut)
    self._preShowOut = preShowOut
end

function GameData:clearWinLostData()
    self._winLostData:clearData()
end

function GameData:getWinLostData()
    return self._winLostData
end

function GameData:setGameEndState(endState)
    self._gameEndState = endState
end

function GameData:isGameEndState()
    return self._gameEndState
end

function GameData:setSortType(sortType)
    self._sortType = sortType
    cc.UserDefault:getInstance():setIntegerForKey("KW_DATA_SORT_TYPE", sortType)
end

function GameData:getSortType()
    if not self._sortType then
        self._sortType = cc.UserDefault:getInstance():getIntegerForKey("KW_DATA_SORT_TYPE", CF.GameDefine.KW_NUM_SORT_BY_POWER)
    end
    return self._sortType
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

return GameData
