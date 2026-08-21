--
--Description: 牌的计算工具
--Date: 2019-07-08 16:44:41
--

local MyCard = class("MyCard")

local CardEnum = CF.gameRequire("Define.CardEnum")

function MyCard:ctor(id,replacePower)

    self._cardID = id or CardEnum.CARD_ID.ID_NONE
    self._replacePower = replacePower or CardEnum.CARD_POWER.POWER_NONE
end

function MyCard:setCardID(id)
    self._cardID = id
end

function MyCard:getCardID(id)
    return self._cardID
end

function MyCard:getName()
    return CardEnum.strCardColor[CardEnum.ucCardColor[self._cardID]] .. CardEnum.strCardValue[CardEnum.ucCardValue[self._cardID]]
end

function MyCard:getFullName()
    return CardEnum.strFullCardColor[CardEnum.ucCardColor[self._cardID]] .. CardEnum.strCardValue[CardEnum.ucCardValue[self._cardID]]
end

function MyCard:getStringName()
    return CardEnum.strCardStringColor[CardEnum.ucCardColor[self._cardID]] .. CardEnum.strCardStringValue[CardEnum.ucCardValue[self._cardID]]
end

function MyCard:getStringValue()
    return CardEnum.strCardStringValue[CardEnum.ucCardValue[self._cardID]]
end

function MyCard:getValue()
    return CardEnum.ucCardValue[self._cardID]
end

function MyCard:getValueString()
    return CardEnum.strCardValue[CardEnum.ucCardValue[self._cardID]]
end

function MyCard:getPower()
    return CardEnum.ucCardPower[self._cardID] or 0
end

function MyCard:getNextPower(bLoop)
    bLoop = bLoop or false

    local curPower = self:getPower()
    if curPower == CardEnum.ucCardPower.POWER_SJ then
        return CardEnum.ucCardPower.POWER_NONE
    elseif curPower == CardEnum.ucCardPower.POWER_BJ then
        return CardEnum.ucCardPower.POWER_NONE
    elseif curPower == CardEnum.ucCardPower.POWER_2 then
        if bLoop then
            return CardEnum.ucCardPower.POWER_3
        else
            return CardEnum.ucCardPower.POWER_NONE
        end
    end

    return curPower + 1
end

function MyCard:getPrePower(bLoop)
    bLoop = bLoop or false

    local curPower = self:getPower()

    if curPower == CardEnum.ucCardPower.POWER_SJ then
        return CardEnum.ucCardPower.POWER_NONE
    elseif curPower == CardEnum.ucCardPower.POWER_BJ then
        return CardEnum.ucCardPower.POWER_NONE
    elseif curPower == CardEnum.ucCardPower.POWER_3 then
        if bLoop then
            return CardEnum.ucCardPower.POWER_2
        else
            return CardEnum.ucCardPower.POWER_NONE
        end
    end

    return curPower - 1
end

function MyCard:getColor()
    return CardEnum.ucCardColor[self._cardID]
end

function MyCard:getColorString()
    return CardEnum.strCardStringColor[self._cardID]
end

function MyCard:setReplacePower(replacePower)
    self._replacePower = replacePower
end

function MyCard:getReplacePower(replacePower)
    if self._replacePower == CardEnum.CARD_POWER.POWER_NONE then
        local power = self:getPower()
        return power
    end
    return self._replacePower
end

function MyCard.sortByPower(cards,smallToBig)
    smallToBig = smallToBig or false

    table.sort(cards, function(a, b)
        local isBig = MyCard.lessSecordForSortByPower(a,b)
        return isBig
    end)
    if smallToBig then
        cards = MyCard.reverseCardToolsKeepSameColor(cards)
    end
    return cards
end

function MyCard.lessSecordForSortByPower(card1,card2)
    if card1:getPower() < card2:getPower() then
        return true
    elseif card1:getPower() == card2:getPower() then
        if card1:getColor() < card2:getColor() then
            return true
        else
            return false
        end
    else
        return false
    end
end

function MyCard.sortByPowerCountEx(cards,jokerData,smallToBig)
    smallToBig = smallToBig or false

    local normalCards,jokerCards = MyCard.caiShenFenLi(cards,jokerData)
    jokerCards = MyCard.sortByPower(jokerCards)


    local powertoCards = {}
    for i = 1,#normalCards do
        local  j = 1
        while j <= #powertoCards do
            if powertoCards[j].power == normalCards[i]:getPower() then
                break
            end
            j = j + 1
        end

        if j > #powertoCards then
            powertoCards[j] = {}
            powertoCards[j].power = normalCards[i]:getPower()
            powertoCards[j].cards = {}
        end
        table.insert(powertoCards[j].cards,normalCards[i])
    end

    table.sort(powertoCards,MyCard.lessSecordForSortByCountThanByPower)

    local retCards = {}
    for i = 1,#powertoCards do
        local tmpCards = MyCard.sortByPower(powertoCards[i])
        for j = 1,#tmpCards.cards do
            table.insert(retCards,tmpCards.cards[j])
        end
    end

    for i = #jokerCards,1,-1 do
        table.insert(retCards,jokerCards[i])
    end

    if smallToBig then
        retCards = MyCard.reverseCardToolsKeepSameColor(retCards)
    end
    return retCards
end

function MyCard.lessSecordForSortByCountThanByPower(mapPowerToCards1,mapPowerToCards2)
    if #mapPowerToCards1.cards < #mapPowerToCards2.cards then
        return true
    elseif #mapPowerToCards1.cards == #mapPowerToCards2.cards then
        if mapPowerToCards1.power < mapPowerToCards2.power then
            return true
        else
            return false
        end
    else
        return false
    end
end

function MyCard.reverseCardToolsKeepSameColor(cards)
    local tmpCards = {}
    local lastPower = nil
    local index = 1
    for i = 1,#cards do
        if cards[i]:getPower() == lastPower then
            index = index + 1
        else
            index = 1
            lastPower = cards[i]:getPower()
        end
        table.insert(tmpCards,index,cards[i])
    end

    return tmpCards
end

function MyCard.caiShenFenLi(cards,jokerData)
    local jokerCards = {}
    local normalCards = clone(cards)
    for i = 1,#jokerData do
        for j = #normalCards,1,-1 do
            if normalCards[j]:getCardID() == jokerData[i]:getCardID() then
                table.insert(jokerCards,normalCards[j])
                table.remove(normalCards,j)
            end
        end
    end
    return normalCards,jokerCards
end

function MyCard.isPower2(card)
    local isPower2 = card:petPower() == MyCard.CARD_POWER.POWER_2
    return isPower2
end

function MyCard.equleByPower(card1,card2)
    local isEqule = card1:getPower() == card2:getPower()
    return isEqule
end

function MyCard.getNextPowerByCurrentPower(currentPower, loop)
    loop = loop or false

    if currentPower == CardEnum.CARD_POWER.POWER_SJ then
        return CardEnum.CARD_POWER.POWER_NONE
    elseif currentPower == CardEnum.CARD_POWER.POWER_BJ then
        return CardEnum.CARD_POWER.POWER_NONE
    elseif currentPower == CardEnum.CARD_POWER.POWER_2 then
        if loop then
            return CardEnum.CARD_POWER.POWER_3
        else
            return CardEnum.CARD_POWER.POWER_NONE
        end
    elseif currentPower == CardEnum.CARD_POWER.POWER_A then
        if not loop then
            return CardEnum.CARD_POWER.POWER_NONE
        end
    end

    return currentPower + 1
end

function MyCard.getPrePowerByCurrentPower(currentPower,bLoop)
    bLoop = bLoop or false

    local curPower = currentPower

    if curPower == CardEnum.ucCardPower.POWER_SJ then
        return CardEnum.ucCardPower.POWER_NONE
    elseif curPower == CardEnum.ucCardPower.POWER_BJ then
        return CardEnum.ucCardPower.POWER_NONE
    elseif curPower == CardEnum.ucCardPower.POWER_3 then
        if bLoop then
            return CardEnum.ucCardPower.POWER_2
        else
            return CardEnum.ucCardPower.POWER_NONE
        end
    end

    return curPower - 1
end

function MyCard.findPowerCount(cards,power)
    local count = 0
    local retFindCards = {}
    for i = 1,#cards do
        if cards[i]:getPower() == power then
            table.insert(retFindCards,cards[i])
            count = count + 1
        end
    end

    return count, retFindCards
end

function MyCard.getCardsByPowerWithRemove(targetCards, power, retRemoveCards)
    for i = #targetCards,1,-1 do
        if targetCards[i]:getPower() == power then
            table.insert(retRemoveCards,targetCards[i])
            table.remove(targetCards,i)
        end
    end

    if #retRemoveCards == 0 then
        return false
    end
    return true
end

function MyCard.findPowerCardsByCount(cards,power,count)
    local tmpCount = 0
    local retFindCards = {}
    for i = 1,#cards do
        if cards[i]:getPower() == power then
            table.insert(retFindCards,cards[i])
            tmpCount = tmpCount + 1
        end

        if count == tmpCount then
            break
        end
    end

    return tmpCount, retFindCards
end

return MyCard
�"