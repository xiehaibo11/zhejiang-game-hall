local MyCard = class("MyCard")

MyCard.CardColor = 
    {
        CC_NONE1 = 0,
        CC_DIAMOND = 1,
        CC_CLUB = 2,
        CC_HEART = 3,
        CC_SPADE = 4,
        CC_COUNT = 5,
    }


MyCard.CardValue =
    {
        CV_NONE = 0,
        CV_A = 1,
        CV_2 = 2,
        CV_3 = 3,
        CV_4 = 4,
        CV_5 = 5,
        CV_6 = 6,
        CV_7 = 7,
        CV_8 = 8,
        CV_9 = 9,
        CV_10 = 10,
        CV_J = 11,
        CV_Q = 12,
        CV_K = 13,
        CV_SJ = 14,
        CV_BJ = 15,
        CV_COUNT = 16
    }


MyCard.CardPower = 
    {
        CP_NONE1 = 0,
        CP_3 = 3,
        CP_4 = 4,
        CP_5 = 5,
        CP_6 = 6,
        CP_7 = 7,
        CP_8 = 8,
        CP_9 = 9,
        CP_10 = 10,
        CP_J = 11,
        CP_Q = 12,
        CP_K = 13,
        CP_A = 14,
        CP_2 = 15,
        CP_SJ = 16,
        CP_BJ = 17,
        CP_COUNT = 18
    }

MyCard.CardID =
    {
        CID_NONE = 0,
        --方块
        CID_DIAMOND_A = 1,
        CID_DIAMOND_2 = 2,
        CID_DIAMOND_3 = 3,
        CID_DIAMOND_4 = 4,
        CID_DIAMOND_5 = 5,
        CID_DIAMOND_6 = 6,
        CID_DIAMOND_7 = 7,
        CID_DIAMOND_8 = 8,
        CID_DIAMOND_9 = 9,
        CID_DIAMOND_10 = 10,
        CID_DIAMOND_J = 11,
        CID_DIAMOND_Q = 12,
        CID_DIAMOND_K = 13,
        --梅花
        CID_CLUB_A = 14,
        CID_CLUB_2 = 15,
        CID_CLUB_3 = 16,
        CID_CLUB_4 = 17,
        CID_CLUB_5 = 18,
        CID_CLUB_6 = 19,
        CID_CLUB_7 = 20,
        CID_CLUB_8 = 21,
        CID_CLUB_9 = 22,
        CID_CLUB_10 = 23,
        CID_CLUB_J = 24,
        CID_CLUB_Q = 25,
        CID_CLUB_K = 26,
        --红心
        CID_HEART_A = 27,
        CID_HEART_2 = 28,
        CID_HEART_3 = 29,
        CID_HEART_4 = 30,
        CID_HEART_5 = 31,
        CID_HEART_6 = 32,
        CID_HEART_7 = 33,
        CID_HEART_8 = 34,
        CID_HEART_9 = 35,
        CID_HEART_10 = 36,
        CID_HEART_J = 37,
        CID_HEART_Q = 38,
        CID_HEART_K = 39,
        --黑桃
        CID_SPADE_A = 40,
        CID_SPADE_2 = 41,
        CID_SPADE_3 = 42,
        CID_SPADE_4 = 43,
        CID_SPADE_5 = 44,
        CID_SPADE_6 = 45,
        CID_SPADE_7 = 46,
        CID_SPADE_8 = 47,
        CID_SPADE_9 = 48,
        CID_SPADE_10 = 49,
        CID_SPADE_J = 50,
        CID_SPADE_Q = 51,
        CID_SPADE_K = 52,
        --大小鬼
        CID_SJ = 53,
        CID_BJ = 54,
        --牌背
        CID_BACK = 55,
        CID_COUNT = 56,
    }

MyCard.strCardValue = {
    [0] = "牌背", 
    [1] = "A", 
    [2] = "2", 
    [3] = "3", 
    [4] = "4", 
    [5] = "5", 
    [6] = "6", 
    [7] = "7", 
    [8] = "8", 
    [9] = "9", 
    [10] = "10", 
    [11] = "J", 
    [12] = "Q", 
    [13] = "K", 
    [14] = "小王", 
    [15] = "大王" }

MyCard.strCardStringValue = { 
    [0] = "b",
    [1] = "A",
    [2] = "2",
    [3] = "3",
    [4] = "4",
    [5] = "5",
    [6] = "6",
    [7] = "7",
    [8] = "8",
    [9] = "9",
    [10] = "10",
    [11] = "J",
    [12] = "Q",
    [13] = "K",
    [14] = "F",
    [15] = "Z" }

MyCard.strCardColor = { 
    [0] = "", 
    [1] = "方", 
    [2] = "梅", 
    [3] = "红",
    [4] = "黑" }

MyCard.strFullCardColor = { 
    [0] = "", 
    [1] = "方块",
    [2] = "梅花",
    [3] = "红桃",
    [4] = "黑桃" }

MyCard.strCardStringColor = { 
    [0] = "", 
    [1] = "D", 
    [2] ="C",
    [3] = "H",
    [4] = "B" }

MyCard.ucCardValue = { 
    MyCard.CardValue.CV_A, 
    MyCard.CardValue.CV_2, 
    MyCard.CardValue.CV_3, 
    MyCard.CardValue.CV_4, 
    MyCard.CardValue.CV_5,
    MyCard.CardValue.CV_6, 
    MyCard.CardValue.CV_7, 
    MyCard.CardValue.CV_8, 
    MyCard.CardValue.CV_9, 
    MyCard.CardValue.CV_10, 
    MyCard.CardValue.CV_J, 
    MyCard.CardValue.CV_Q, 
    MyCard.CardValue.CV_K,
    MyCard.CardValue.CV_A, 
    MyCard.CardValue.CV_2, 
    MyCard.CardValue.CV_3, 
    MyCard.CardValue.CV_4, 
    MyCard.CardValue.CV_5, 
    MyCard.CardValue.CV_6, 
    MyCard.CardValue.CV_7, 
    MyCard.CardValue.CV_8, 
    MyCard.CardValue.CV_9, 
    MyCard.CardValue.CV_10, 
    MyCard.CardValue.CV_J, 
    MyCard.CardValue.CV_Q, 
    MyCard.CardValue.CV_K,
    MyCard.CardValue.CV_A, 
    MyCard.CardValue.CV_2, 
    MyCard.CardValue.CV_3, 
    MyCard.CardValue.CV_4, 
    MyCard.CardValue.CV_5, 
    MyCard.CardValue.CV_6, 
    MyCard.CardValue.CV_7, 
    MyCard.CardValue.CV_8, 
    MyCard.CardValue.CV_9, 
    MyCard.CardValue.CV_10, 
    MyCard.CardValue.CV_J, 
    MyCard.CardValue.CV_Q, 
    MyCard.CardValue.CV_K,
    MyCard.CardValue.CV_A, 
    MyCard.CardValue.CV_2, 
    MyCard.CardValue.CV_3, 
    MyCard.CardValue.CV_4, 
    MyCard.CardValue.CV_5, 
    MyCard.CardValue.CV_6, 
    MyCard.CardValue.CV_7, 
    MyCard.CardValue.CV_8, 
    MyCard.CardValue.CV_9, 
    MyCard.CardValue.CV_10, 
    MyCard.CardValue.CV_J, 
    MyCard.CardValue.CV_Q, 
    MyCard.CardValue.CV_K,
    MyCard.CardValue.CV_SJ, 
    MyCard.CardValue.CV_BJ
}

MyCard.ucCardPower = { 
    MyCard.CardPower.CP_A, 
    MyCard.CardPower.CP_2, 
    MyCard.CardPower.CP_3, 
    MyCard.CardPower.CP_4, 
    MyCard.CardPower.CP_5, 
    MyCard.CardPower.CP_6, 
    MyCard.CardPower.CP_7, 
    MyCard.CardPower.CP_8, 
    MyCard.CardPower.CP_9, 
    MyCard.CardPower.CP_10, 
    MyCard.CardPower.CP_J, 
    MyCard.CardPower.CP_Q, 
    MyCard.CardPower.CP_K,
    MyCard.CardPower.CP_A, 
    MyCard.CardPower.CP_2, 
    MyCard.CardPower.CP_3, 
    MyCard.CardPower.CP_4, 
    MyCard.CardPower.CP_5, 
    MyCard.CardPower.CP_6, 
    MyCard.CardPower.CP_7, 
    MyCard.CardPower.CP_8, 
    MyCard.CardPower.CP_9, 
    MyCard.CardPower.CP_10, 
    MyCard.CardPower.CP_J, 
    MyCard.CardPower.CP_Q, 
    MyCard.CardPower.CP_K,
    MyCard.CardPower.CP_A, 
    MyCard.CardPower.CP_2, 
    MyCard.CardPower.CP_3, 
    MyCard.CardPower.CP_4, 
    MyCard.CardPower.CP_5, 
    MyCard.CardPower.CP_6, 
    MyCard.CardPower.CP_7, 
    MyCard.CardPower.CP_8,
    MyCard.CardPower.CP_9, 
    MyCard.CardPower.CP_10, 
    MyCard.CardPower.CP_J, 
    MyCard.CardPower.CP_Q, 
    MyCard.CardPower.CP_K,
    MyCard.CardPower.CP_A, 
    MyCard.CardPower.CP_2, 
    MyCard.CardPower.CP_3, 
    MyCard.CardPower.CP_4, 
    MyCard.CardPower.CP_5, 
    MyCard.CardPower.CP_6, 
    MyCard.CardPower.CP_7, 
    MyCard.CardPower.CP_8, 
    MyCard.CardPower.CP_9, 
    MyCard.CardPower.CP_10, 
    MyCard.CardPower.CP_J, 
    MyCard.CardPower.CP_Q, 
    MyCard.CardPower.CP_K,
    MyCard.CardPower.CP_SJ, 
    MyCard.CardPower.CP_BJ
}

MyCard.ucCardColor = { 
    MyCard.CardColor.CC_NONE1, 
    MyCard.CardColor.CC_DIAMOND, 
    MyCard.CardColor.CC_DIAMOND, 
    MyCard.CardColor.CC_DIAMOND, 
    MyCard.CardColor.CC_DIAMOND, 
    MyCard.CardColor.CC_DIAMOND, 
    MyCard.CardColor.CC_DIAMOND, 
    MyCard.CardColor.CC_DIAMOND, 
    MyCard.CardColor.CC_DIAMOND, 
    MyCard.CardColor.CC_DIAMOND, 
    MyCard.CardColor.CC_DIAMOND, 
    MyCard.CardColor.CC_DIAMOND, 
    MyCard.CardColor.CC_DIAMOND, 
    MyCard.CardColor.CC_DIAMOND,
    MyCard.CardColor.CC_CLUB, 
    MyCard.CardColor.CC_CLUB, 
    MyCard.CardColor.CC_CLUB, 
    MyCard.CardColor.CC_CLUB, 
    MyCard.CardColor.CC_CLUB, 
    MyCard.CardColor.CC_CLUB, 
    MyCard.CardColor.CC_CLUB, 
    MyCard.CardColor.CC_CLUB, 
    MyCard.CardColor.CC_CLUB, 
    MyCard.CardColor.CC_CLUB, 
    MyCard.CardColor.CC_CLUB, 
    MyCard.CardColor.CC_CLUB, 
    MyCard.CardColor.CC_CLUB,        
    MyCard.CardColor.CC_HEART, 
    MyCard.CardColor.CC_HEART, 
    MyCard.CardColor.CC_HEART, 
    MyCard.CardColor.CC_HEART, 
    MyCard.CardColor.CC_HEART, 
    MyCard.CardColor.CC_HEART, 
    MyCard.CardColor.CC_HEART, 
    MyCard.CardColor.CC_HEART, 
    MyCard.CardColor.CC_HEART, 
    MyCard.CardColor.CC_HEART, 
    MyCard.CardColor.CC_HEART, 
    MyCard.CardColor.CC_HEART, 
    MyCard.CardColor.CC_HEART,      
    MyCard.CardColor.CC_SPADE, 
    MyCard.CardColor.CC_SPADE, 
    MyCard.CardColor.CC_SPADE, 
    MyCard.CardColor.CC_SPADE, 
    MyCard.CardColor.CC_SPADE, 
    MyCard.CardColor.CC_SPADE, 
    MyCard.CardColor.CC_SPADE, 
    MyCard.CardColor.CC_SPADE, 
    MyCard.CardColor.CC_SPADE, 
    MyCard.CardColor.CC_SPADE, 
    MyCard.CardColor.CC_SPADE, 
    MyCard.CardColor.CC_SPADE, 
    MyCard.CardColor.CC_SPADE,          
    MyCard.CardColor.CC_NONE1, 
    MyCard.CardColor.CC_NONE1
}

function MyCard:ctor(id,replacePower)

    self.ID = id or MyCard.CardID.CID_NONE
    self.replacePower = replacePower or MyCard.CardPower.CP_NONE1
end

function MyCard:SetID(id)
    self.ID = id
end

function MyCard:GetID(id)
    return self.ID 
end

function MyCard:GetName()
    return MyCard.strCardColor[MyCard.ucCardColor[self.ID]] .. MyCard.strCardValue[MyCard.ucCardValue[self.ID]] 
end

function MyCard:GetFullName()
    return MyCard.strFullCardColor[MyCard.ucCardColor[self.ID]] .. MyCard.strCardValue[MyCard.ucCardValue[self.ID]] 
end

function MyCard:GetStringName()
    return MyCard.strCardStringColor[MyCard.ucCardColor[self.ID]] .. MyCard.strCardStringValue[MyCard.ucCardValue[self.ID]] 
end

function MyCard:GetStringValue()
    return MyCard.strCardStringValue[MyCard.ucCardValue[self.ID]]
end   

function MyCard:GetValue()
    return MyCard.ucCardValue[self.ID]
end   

function MyCard:GetValueString()
    return MyCard.strCardValue[MyCard.ucCardValue[self.ID]]
end   

function MyCard:GetPower()
    return MyCard.ucCardPower[self.ID]
end   

function MyCard:GetNextPower(bLoop)
    bLoop = bLoop or false

    local curPower = self:GetPower()
    if curPower == MyCard.ucCardPower.CP_SJ then
        return MyCard.ucCardPower.CP_NONE1
    elseif curPower == MyCard.ucCardPower.CP_BJ then
        return MyCard.ucCardPower.CP_NONE1
    elseif curPower == MyCard.ucCardPower.CP_2 then
        if bLoop then
            return MyCard.ucCardPower.CP_3
        else
            return MyCard.ucCardPower.CP_NONE1
        end 
    end

    return curPower + 1
end  

function MyCard:GetPrePower(bLoop)
    bLoop = bLoop or false

    local curPower = self:GetPower()

    if curPower == MyCard.ucCardPower.CP_SJ then
        return MyCard.ucCardPower.CP_NONE1
    elseif curPower == MyCard.ucCardPower.CP_BJ then
        return MyCard.ucCardPower.CP_NONE1
    elseif curPower == MyCard.ucCardPower.CP_3 then
        if bLoop then
            return MyCard.ucCardPower.CP_2
        else
            return MyCard.ucCardPower.CP_NONE1
        end 
    end

    return curPower - 1
end 

function MyCard:GetColor()
    return MyCard.ucCardColor[self.ID]
end 

function MyCard:GetColorString()
    return MyCard.strCardStringColor[self.ID]
end     

function MyCard:SetReplacePower(replacePower)
    self.replacePower = replacePower
end     

function MyCard:GetReplacePower(replacePower)
    if self.replacePower == MyCard.CardPower.CP_NONE1 then
        local power = self:GetPower()
        return power
    end
    return self.replacePower
end  

function MyCard.SortByPower(cards,smallToBig)
    smallToBig = smallToBig or false

    table.sort(cards, function(a, b)
        local isBig = MyCard.LessSecordForSortByPower(a,b)
        return isBig
    end)
    if smallToBig then
        cards = MyCard.ReverseMyCardsKeepSameColor(cards)
    end
    return cards  
end 

function MyCard.LessSecordForSortByPower(card1,card2)
    if card1:GetPower() < card2:GetPower() then
        return true
    elseif card1:GetPower() == card2:GetPower() then  
        if card1:GetColor() < card2:GetColor() then
            return true
        else
            return false
        end
    else
        return false
    end
end 

function MyCard.SortByPowerCountEx(cards,jokerData,smallToBig)
    smallToBig = smallToBig or false

    local normalCards,jokerCards = MyCard.CaiShenFenLi(cards,jokerData)
    jokerCards = MyCard.SortByPower(jokerCards)


    local powertoCards = {}
    for i = 1,#normalCards do
        local  j = 1
        while j <= #powertoCards do
            if powertoCards[j].power == normalCards[i]:GetPower() then
                break
            end
            j = j + 1
        end                                                                                                                   

        if j > #powertoCards then
            powertoCards[j] = {}
            powertoCards[j].power = normalCards[i]:GetPower()
            powertoCards[j].cards = {}
        end
        table.insert(powertoCards[j].cards,normalCards[i])
    end

    table.sort(powertoCards,MyCard.LessSecordForSortByCountThanByPower)

    local retCards = {}
    for i = 1,#powertoCards do
        local tmpCards = MyCard.SortByPower(powertoCards[i])
        for j = 1,#tmpCards.cards do
            table.insert(retCards,tmpCards.cards[j])
        end
    end

    for i = #jokerCards,1,-1 do
        table.insert(retCards,jokerCards[i])
    end

    if smallToBig then
        sortCards = MyCard.ReverseMyCardsKeepSameColor(retCards)
    end  
    return retCards  
end

function MyCard.LessSecordForSortByCountThanByPower(mapPowerToCards1,mapPowerToCards2)
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

function MyCard.ReverseMyCardsKeepSameColor(cards)
    local tmpCards = {}
    local lastPower = nil
    local index = 1
    for i = 1,#cards do
        if cards[i]:GetPower() == lastPower then
            index = index + 1
        else
            index = 1
            lastPower = cards[i]:GetPower()
        end
        table.insert(tmpCards,index,cards[i])
    end

    return tmpCards
end

--function MyCard.CaiShenFenLi(cards,jokerData)
--    local jokerCards = {}
--    local normalCards = clone(cards)
--    for i = 1,#jokerData do
--        for j = #normalCards,1,-1 do
--            if normalCards[j]:GetID() == jokerData[i]:GetID() then
--                table.insert(jokerCards,normalCards[j])
--                table.remove(normalCards,j)
--            end
--        end
--    end
--    return normalCards,jokerCards
--end

function MyCard.CaiShenFenLi(cards,jokerData)
    local tmpjokerData = clone(jokerData)
    local tmpCards = clone(cards)
    
    local function compCards(card1,card2)
        return card1:GetID() < card2:GetID()
    end

    table.sort(tmpjokerData,compCards)
    table.sort(tmpCards,compCards)
    
    local normalCards = {}
    local jokerCards = {}
    if #tmpjokerData == 0 then
        return tmpCards,jokerCards
    else
        local i,j = 1,1
        while(i <= #tmpjokerData and j <= #tmpCards) do
            if tmpjokerData[i]:GetID() > tmpCards[j]:GetID() then
                table.insert(normalCards,tmpCards[j])
                j = j + 1
            elseif tmpjokerData[i]:GetID() == tmpCards[j]:GetID() then
                table.insert(jokerCards,tmpjokerData[i])
                j = j + 1
            else
                i = i + 1
            end
        end
        return normalCards,jokerCards
    end
end

function MyCard.IsPower2(card)
    local isPower2 = card:GetPower() == MyCard.CardPower.CP_2
    return isPower2
end

function MyCard.EquleByPower(card1,card2)
    local isEqule = card1:GetPower() == card2:GetPower() 
    return isEqule
end

function MyCard.GetNextPowerByCurrentPower(currentPower,loop)
    local loop = loop or false

    if currentPower == MyCard.CardPower.CP_SJ then
        return MyCard.CardPower.CP_NONE1
    elseif currentPower == MyCard.CardPower.CP_BJ then
        return MyCard.CardPower.CP_NONE1
    elseif currentPower == MyCard.CardPower.CP_2 then
        if loop then
            return MyCard.CardPower.CP_3
        else
            return MyCard.CardPower.CP_NONE1
        end
    elseif currentPower == MyCard.CardPower.CP_A then
        if not loop then
            return MyCard.CardPower.CP_NONE1
        end
    end

    return currentPower + 1
end 

function MyCard.GetPrePowerByCurrentPower(currentPower,bLoop)
    bLoop = bLoop or false

    local curPower = currentPower

    if curPower == MyCard.ucCardPower.CP_SJ then
        return MyCard.ucCardPower.CP_NONE1
    elseif curPower == MyCard.ucCardPower.CP_BJ then
        return MyCard.ucCardPower.CP_NONE1
    elseif curPower == MyCard.ucCardPower.CP_3 then
        if bLoop then
            return MyCard.ucCardPower.CP_2
        else
            return MyCard.ucCardPower.CP_NONE1
        end 
    end

    return curPower - 1
end 

function MyCard.FindPowerCount(cards,power,retFindCards)
    local count = 0
    retFindCards = {}
    for i = 1,#cards do
        if cards[i]:GetPower() == power then
            table.insert(retFindCards,cards[i])
            count = count + 1
        end
    end

    return count
end

function MyCard.GetCardsByPowerWithRemove(targetCards, power, retRemoveCards)
    for i = #targetCards,1,-1 do
        if targetCards[i]:GetPower() == power then
            table.insert(retRemoveCards,targetCards[i])
            table.remove(targetCards,i)
        end
    end

    if #retRemoveCards == 0 then
        return false
    end
    return true
end

function MyCard.FindPowerCardsByCount(cards,power,count,retFindCards)
    local tmpCount = 0
    retFindCards = {}
    for i = 1,#cards do
        if cards[i]:GetPower() == power then
            table.insert(retFindCards,cards[i])
            tmpCount = tmpCount + 1
        end

        if count == tmpCount then
            break
        end
    end

    return tmpCount
end

return MyCardrG