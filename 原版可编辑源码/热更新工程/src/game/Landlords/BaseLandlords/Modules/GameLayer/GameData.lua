local CardType      = CF.gameRequire("Define.CardType")
local GameData = CF.gameClass("GameData", "game.GameBase.Modules.GameLayer.GameData")

function GameData:ctor()
    GameData.super.ctor(self)
    self:initDatas()
end

function GameData:initDatas()
    GameData.super.initDatas(self)
    self._gameStep              = CF.GameDefine.GAME_STEP.GAME_STEP_NONE --步骤
    self._handSortType          = CF.GameDefine.SORT_TYPE.SORT_TYPE_POWER -- 手牌的排序类型
    self._landlordType          = 0 -- 叫地主类型
    self._landlordStatus        = 0 -- 0-抢地主/1-叫地主
    self._landlordSeat          = 0 -- 最终地主位置
    self._chooseCardTipsCount   = 0
    self._preOutSeat            = 0 -- 上一个出牌的是谁
    self._powerSeat             = 0 -- 轮到谁出牌了
    self._hintIndex             = 1 -- 牌型提示索引
    self._handCard              = {} -- 手牌数据，存放的id
    self._handCardCnt           = {} -- 玩家手牌数
    self._isShowHand            = {} -- 明牌的玩家
    self._preOutCard            = {} -- 上一个玩家出的牌
    self._lastCardsType         = {} -- 上一个玩家出的牌的牌型
    self._hintCardIDs           = {} -- 提示的牌型
    self._winLostMsgData        = {} --小结束数据
    self:resetLastCardsType()
end

function GameData:initEveryTime()
    GameData.super.initEveryTime(self)
    self._landlordType          = 0
    self._landlordStatus        = 0
    self._landlordSeat          = 0
    self._chooseCardTipsCount   = 0
    self._preOutSeat            = 0  -- 上一个出牌的是谁
    self._powerSeat             = 0  -- 轮到谁出牌了
    self._hintIndex             = 1
    self._handCard              = {}
    self._handCardCnt           = {}
    self._isShowHand            = {}
    self._preOutCard            = {} -- 上一个玩家出的牌
    self._hintCardIDs           = {}
    self._winLostMsgData        = {} --小结束数据
    self:resetLastCardsType()
end

function GameData:getHandSortType()
    return self._handSortType
end

function GameData:setHandSortType(type)
    self._handSortType = type
end

function GameData:setGameStep(gameStep)
    self._gameStep = gameStep
end

function GameData:getGameStep()
    return self._gameStep
end

function GameData:getLandlordType()
    return self._landlordType
end

function GameData:setLandlordType(type)
    self._landlordType = type
end

function GameData:getLandlordStatus()
    return self._landlordStatus
end

function GameData:setLandlordStatus(status)
    self._landlordStatus = status
end

function GameData:getLandlordSeat()
    return self._landlordSeat
end

function GameData:setLandlordSeat(seat)
    self._landlordSeat = seat
end

----------------------------------------
--手牌
----------------------------------------
function GameData:setHandCardsCount(seat,count)
    self._handCardCnt[seat] = count
end

function GameData:getHandCardsCount(seat)
    return self._handCardCnt[seat] or 0
end

function GameData:getHandCards(seat)
    return  self._handCard[seat]
end

function GameData:setHandCards(seat, cardsData)
    self._handCard[seat] = cardsData
    if seat == CF.roomData:getSelfSeat() then
        self:setFirstHandData(true)
    end
end

function GameData:clearHandCardData()
    for i = 0 ,CF.roomData:getMaxPlayer() - 1 do
        self._handCard[i] = {}
    end
end

function GameData:setIsShowHand(seat, isShow)
    self._isShowHand[seat] = isShow
end

function GameData:getIsShowHand(seat)
    return self._isShowHand[seat]
end

-- 出牌的数据
function GameData:getChooseCardTipsCount()
    return self._chooseCardTipsCount
end

function GameData:setChooseCardTipsCount(count)
    self._chooseCardTipsCount = count
end

function GameData:getPreOutSeat()
    return self._preOutSeat
end

function GameData:setPreOutSeat(seat)
    self._preOutSeat = seat
end

function GameData:getPreOutCard()
    return self._preOutCard
end

function GameData:setPreOutCard(cards)
    self._preOutCard = cards
end

function GameData:getPowerSeat()
    return self._powerSeat
end

function GameData:setPowerSeat(seat)
    self._powerSeat = seat
end

function GameData:getLastCardsType()
    return self._lastCardsType
end

function GameData:resetLastCardsType()
    self._lastCardsType = {} -- 上一个玩家出的牌的牌型
    self._lastCardsType.cardTypeID = CardType.ID.None
    self._lastCardsType.cardPower = 0
    self._lastCardsType.cardCount = 0
end

function GameData:setLastCardsType(type)
    self._lastCardsType = type
end

function GameData:nextHintIndex()
    self._hintIndex = self._hintIndex + 1
    if self._hintIndex > #self._hintCardIDs then
        self._hintIndex = 1
    end
end

function GameData:getHintCardIDs()
    return self._hintCardIDs[self._hintIndex]
end

function GameData:setHintCardIDs(cardIDs)
    self._hintIndex = 1
    self._hintCardIDs = cardIDs
end

function GameData:setWinLostData(msgData)
    self._winLostMsgData = msgData
end

function GameData:getWinLostData()
    return self._winLostMsgData
end

return GameData