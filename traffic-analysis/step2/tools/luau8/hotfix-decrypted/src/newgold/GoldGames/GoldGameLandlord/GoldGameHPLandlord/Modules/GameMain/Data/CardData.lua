local CardData = NG.GAME.gameClass("CardData", NG.ModuleBase)

function CardData:ctor()
    CardData.super.ctor(self)

    self:initData()
end

function CardData:initData()
    self._handCards = {} --手牌数据
    self._outCard = {} --刚刚出的牌
    self._liPaiCards = {} --理出来的一手手牌
    self._liPaiCardsFlag = {} --理出来一手手牌的标记，第一手，第二手
    self._bPass = false --位置是否取消出牌
    self._outBombCnt = 0
end

function CardData:clear()
    self:initData()
end

function CardData:setHandCards(nCards)
    nCards = nCards or {}
    self._handCards = nCards
end

function CardData:getHandCards()
    return self._handCards
end

function CardData:getLastCardNum()
    return #self._handCards
end

function CardData:addHandCards(nCards)
    for _, nCard in pairs(nCards) do
        table.insert(self._handCards, nCard)
    end
end

function CardData:delHandCards(nCards)
    nCards = nCards or {}
    for _, nCard in pairs(nCards) do
        self:delHandCard(nCard)
    end
end

function CardData:delHandCard(nCard)
    for i, v in ipairs(self._handCards) do
        if v == nCard then
            table.remove(self._handCards, i)
            return
        end
    end
end

function CardData:setOutCards(nCards, nTypeID, nPower)
    self._outCard = {
        nCards = nCards,
        nTypeID = nTypeID,
        nPower = nPower,
    }
end

function CardData:getOutCards()
    return self._outCard
end

function CardData:setLiPaiCards(liPaiCards, flags)
    self._liPaiCards = liPaiCards
    self._liPaiCardsFlag = flags
end

function CardData:addLiPaiCards(cards, flag)
    table.insert(self._liPaiCards, cards)
    table.insert(self._liPaiCardsFlag, flag)
end

function CardData:getLiPaiCards()
    return self._liPaiCards
end

function CardData:getLiPaiCardFlags()
    return self._liPaiCardsFlag
end

function CardData:clearLiPaiCards()
    self._liPaiCards = {}
    self._liPaiCardsFlag = {}
end

function CardData:setPassState(bPass)
    self._bPass = bPass
end

function CardData:getPassState()
    return self._bPass
end

function CardData:setOutBombCnt(cnt)
    self._outBombCnt = cnt
end

function CardData:addOutBombCnt(cnt)
    self._outBombCnt = self._outBombCnt + cnt
end

function CardData:getOutBombCnt()
    return self._outBombCnt
end

return CardData�	