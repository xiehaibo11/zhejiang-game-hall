local CardAlgorithm = {}
local CURRENT_MODULE_NAME = ...

local GameCard = import(".GameCard",CURRENT_MODULE_NAME)
local HintCard = import(".HintCard",CURRENT_MODULE_NAME)
local MyCardsType = import(".MyCardsType",CURRENT_MODULE_NAME)
local MyCard = import(".MyCard",CURRENT_MODULE_NAME)
local GameKeyWord = import("..Config.GameKeyWord",CURRENT_MODULE_NAME)

--数字关键字
local KW_NUM_ZHONGWEN_NUM = {"一","二","三","四","五","六","七","八","九","十","十一","十二"}

function CardAlgorithm:filteCard(cards,preOut,jokerData,lianZhaBudai,gameType)
    local joker = CardAlgorithm:gameCards2IDs(jokerData)
    
    local retCards = {}
    local retCardEndum = {}
    retCards,retCardEndum = XH.GT.SKAlogorithm:GetCardsTypeComb(cards,joker,retCards,lianZhaBudai)

    if #retCards == 0 then
        return
    end
    local cloneRetCards = clone(retCards)
    local cloneRetCardEndum = clone(retCardEndum)
    if preOut == nil then
        
    else
        local outRecord = preOut     
        outRecord[1] = CardAlgorithm:gameCards2IDs(preOut.Cards)
        outRecord[2] = preOut.tType  
        local tmpCards = {}
        --此处用于修改小牌压大牌的bug，原因是m_ucReplacePower没有lua绑定，此处用m_ucReplacePower替代m_ucID，然后进入c++层进行运算；
        --返回失败则return返回的值；返回成功则用修改m_ucID之前的真实值
        --特殊处理：当joker牌为自己本身时，不需要修改m_ucReplacePower
        for i = 1,#retCards do
            local retCard = cloneRetCards[i]
            for j = 1,#retCard do
                local tmpCards = retCard[j]
                for k = 1,#tmpCards do
                    if tmpCards[k].m_ucReplacePower > 0 and tmpCards[k].m_ucReplacePower ~= 16 and tmpCards[k].m_ucReplacePower ~= 17 then
                        tmpCards[k].m_ucID = tmpCards[k].m_ucReplacePower
                        tmpCards[k].m_ucReplacePower = 0
                    end
                end
            end
        end
        
        cloneRetCards,cloneRetCardEndum = XH.GT.SKAlogorithm:FilterCardType(cloneRetCards,outRecord,tmpCards,joker,lianZhaBudai,gameType)
    end
    if #cloneRetCards == 0 then
        return cloneRetCards,cloneRetCardEndum
    else
        local tmpRetCards = {}
        local tmpRetCardEndum = {}
        for i = #retCardEndum , 1,-1 do
            for j = 1 , #cloneRetCardEndum do
                if retCardEndum[i] == cloneRetCardEndum[j] then
                    tmpRetCards[#tmpRetCards + 1] = retCards[i]
                    tmpRetCardEndum[#tmpRetCardEndum + 1] = retCardEndum[i]
                end
            end
        end
        
        return tmpRetCards,tmpRetCardEndum
    end
end

function CardAlgorithm:deleteCards(cards,cardsToDelete)
    if cards == nil then
        return false,{}
    end
    if #cards == 0 then
        return false,{}
    end
    if cardsToDelete == nil then
        return true,{}
    end
    local tempCards = clone(cards)
    local tempcardsToDelete = clone(cardsToDelete)

    for v,value in ipairs(tempcardsToDelete) do 
        tempCards = self:delCard(tempCards,value)
    end
    local iSDeleteSuccess = (#tempCards + #cardsToDelete == #cards ) and (#cardsToDelete ~= 0)
    return iSDeleteSuccess,tempCards
end

function CardAlgorithm:delCard(cards,card)

    if cards == nil or #cards == 0 then
        return
    end

    for v,value in ipairs(cards) do 
        if value:getID() == card:getID() then
            table.remove(cards,v)
            return cards
        end        
    end

    return cards
end

function CardAlgorithm:cardsIsSame(cards1,cards2)
    local cards1 = cards1 or {}
    local cards2 = cards2 or {}
    if #cards1 ~= #cards2 then
        return false
    end
    
    local afterSortCards1 = self:sortCard(cards1,GameKeyWord.KW_NUM_SORT_BY_POWER)
    local afterSortCards2 = self:sortCard(cards2,GameKeyWord.KW_NUM_SORT_BY_POWER)
    
    for v,value in ipairs(afterSortCards1) do 
        if afterSortCards1[v]:getID() ~= afterSortCards2[v]:getID() then
            return false
        end        
    end

    return true
end

function CardAlgorithm:sortCard(cards,sortIndex)
    if sortIndex == GameKeyWord.KW_NUM_SORT_BY_POWER then
        return CardAlgorithm:sortCardByPower(cards)
    elseif sortIndex == GameKeyWord.KW_NUM_SORT_BY_COUNT then
        return CardAlgorithm:sortCardByCountEx(cards)
    end
end

function CardAlgorithm:sortCardByPower(cards)
    local tmpcards = clone(cards)
    if #tmpcards == 0 then
        return tmpcards
    end
    table.sort(tmpcards,  
        function(a,b)    
            if a:GetPower() < b:GetPower() then
                return true
            end

            if a:GetPower() > b:GetPower() then
                return false
            elseif a:GetColor() < b:GetColor() then
                return true
            end
            return false 
        end )
    
    return tmpcards
end

function CardAlgorithm:getPowerbyValue(value)   
    if value == MyCard.CardValue.CV_A then
        return MyCard.CardPower.CP_A
    end

    if value == MyCard.CardValue.CV_2 then
        return MyCard.CardPower.CP_2
    end

    if value == MyCard.CardValue.CV_SJ then
        return MyCard.CardPower.CP_SJ
    end
    if value == MyCard.CardValue.CV_BJ then
        return MyCard.CardPower.CP_BJ
    end  

    return value
end

function CardAlgorithm:changePowerForClassical(power)
    if power == MyCard.CardPower.CP_2 then
        return MyCard.CardPower.CP_2_JD
    end

    if power == MyCard.CardValue.CP_SJ then
        return MyCard.CardPower.CP_SJ_JD
    end
    if power == MyCard.CardValue.CP_BJ then
        return MyCard.CardPower.CP_BJ_JD
    end

    return power
end

function CardAlgorithm:sortCardByCount(cards)
    local tmpcards = clone(cards)
    local cardCount = {}
    for i = 1,#tmpcards do
        local curPower = tmpcards[i]:GetPower()
        if cardCount[curPower] == nil then
            cardCount[curPower] = 1
        else
            cardCount[curPower] = cardCount[curPower] + 1
        end
    end
    local cardsWithCount = {}
    for i = 1,#tmpcards do
        cardsWithCount[i] = {}
        cardsWithCount[i].count = cardCount[tmpcards[i]:GetPower()] 
        cardsWithCount[i].card = tmpcards[i]
    end
    
    table.sort(cardsWithCount,  
        function(a,b) 
            if a.count < b.count then
                return true
            end 
            if a.count > b.count then
                return false
            end
            
            if a.card:GetPower() < b.card:GetPower() then
                return true
            end
            if a.card:GetPower() > b.card:GetPower() then
                return false
            end
            if a.card:GetColor() < b.card:GetColor() then
                return true
            end
            return false 
        end )
    local sortCards = {}
    for i = 1,#cardsWithCount do
        sortCards[i] = cardsWithCount[i].card
    end
    return sortCards
end

function CardAlgorithm:sortCardByCountEx(cards)
    local tmpcards = clone(cards)
    local cardWangIndex = {}
    for i = 1,#tmpcards do
        local curPower = tmpcards[i]:GetPower()
        if curPower >= MyCard.CardPower.CP_SJ then
            table.insert(cardWangIndex,i)
        end
    end
    local wangCards = {}
    for i = #cardWangIndex,1,-1 do
        table.insert(wangCards,tmpcards[cardWangIndex[i]])
        table.remove(tmpcards,cardWangIndex[i])
    end
    local sortCardsWang = CardAlgorithm:sortCardByPower(wangCards)
    local sortCardsFeiWang = CardAlgorithm:sortCardByCount(tmpcards)
    local sortCards = {}
    for i = 1,#sortCardsFeiWang do
        table.insert(sortCards,sortCardsFeiWang[i])
    end
    for i = 1,#sortCardsWang do
        table.insert(sortCards,sortCardsWang[i])
    end

    return sortCards
end

function CardAlgorithm:SZ2CardsGroup(cards,count)
    local gameCards = {}
     
    for i = 1,count do
        local gameCard = GameCard:new()
        gameCard:setID(cards[i])
        gameCards[i] = gameCard
    end
  
    return gameCards
end

function CardAlgorithm:getValueByID(id)
    local value = MyCard.ucCardValue[id]
    return value
end

function CardAlgorithm:SZ2MyCards(cards,count)
    local gameCards = {}

    for i = 1,count do
        table.insert(gameCards,MyCard.new(cards[i]))
    end

    return gameCards
end

function CardAlgorithm:getIDByValue(value)
    if value == MyCard.CardValue.CV_SJ then
        return 53
    elseif value == MyCard.CardValue.CV_BJ then
        return 54
    else
        return value
    end
end

function CardAlgorithm:GetPreValue(value,loop)
    if value == MyCard.CardValue.CV_SJ then
        return
    elseif value == MyCard.CardValue.CV_BJ then
        return
    elseif value == MyCard.CardValue.CV_A then
        return MyCard.CardValue.CV_K
    elseif value == MyCard.CardValue.CV_2 then
        if loop then
            return MyCard.CardValue.CV_A
        else
            return
        end
    elseif value == MyCard.CardValue.CV_3 then
        if loop then
            return MyCard.CardValue.CV_2
        else
            return
        end
    else
        return value - 1
    end   
end

function CardAlgorithm:GetNextValue(value,loop)
    if value == MyCard.CardValue.CV_SJ then
        return
    elseif value == MyCard.CardValue.CV_BJ then
        return
    elseif value == MyCard.CardValue.CV_K then
        return MyCard.CardValue.CV_A
    elseif value == MyCard.CardValue.CV_A then
        if loop then
            return MyCard.CardValue.CV_2
        else
            return
        end
    elseif value == MyCard.CardValue.CV_2 then
        if loop then
            return MyCard.CardValue.CV_3
        else
            return
        end
    else
        return value + 1
    end   
end

CardAlgorithm.m_IsConformCardsType = CardAlgorithm.m_IsConformCardsType or function(...)
    return CardAlgorithm.IsConformCardsTypeQianBian(...)
end

function CardAlgorithm:IsConformCardsTypeQianBian(n,m)
    if n == 1 then
        if m > 1 and m < 5 then
            return false
        else
            return true
        end
    elseif n == 2 or n == 3 then
        if m > 1 and m < 3 then
            return false
        else
            return true
        end
    elseif n == 4 or n == 5 then
        if m > 1 and m < 3 then
            return false
        end
    end

    return true;
end

function CardAlgorithm:IsConformCardsTypeBaiBian(n,m)
    if n == 1 then
        if m > 1 and m < 5 then
            return false
        else
            return true
        end
    elseif n == 2 or n == 3 then
        if m > 1 and m < 3 then
            return false
        else
            return true
        end
    elseif n == 4 or n == 5 then
        if m > 1 and m < 3 then
            return false
        end
    end
    
    if n > 3 then
        if m > 1 and m < 3 then
            return false
        end
    end

    return true;
end

function CardAlgorithm:GameCardPower2String(gameCard)
    local text = ""
    local power = gameCard:GetPower()
    if power <= 10 then
        text = tostring(power)
    elseif power == 11 then
        text = "J"
    elseif power == 12 then
        text = "Q"
    elseif power == 13 then
        text = "K"
    elseif power == 14 then
        text = "A"
    elseif power == 15 then
        text = "2"
    elseif power == 16 then
        text = "F"
    elseif power == 17 then
        text = "Z"
    end 
    return text
end

function CardAlgorithm:isLoop(mctType,typeEnum)
    if #mctType < 2 then
        return false
    end
    if typeEnum > MyCardsType.CardsType.CT_4_JUNKO_0_CONTINUOUS  then
        for i = 1,#mctType do
            if mctType[i][1].m_ucReplacePower == MyCard.CardPower.CP_2 then
                return true 
            else
                if CardAlgorithm:getValueByID(mctType[i][1].m_ucID) ==  MyCard.CardValue.CV_2 then
                    return true  
                end
            end
        end
    end
    return false
end

function CardAlgorithm:getStringByCardType(type)
    local sShun = math.floor(type / 100)
    local sLian = type % 100
    local sRet = nil
    if type < MyCardsType.CardsType.CT_4_JUNKO_0_CONTINUOUS then
        if sShun == 1 then
            sRet = "单顺";
        elseif sShun == 2 then
            sRet = "双顺"
        elseif sShun == 3 then
            sRet = "三顺"
        end
    else
        if sLian == 1 then
            sRet = KW_NUM_ZHONGWEN_NUM[sShun].."线"
        else
            sRet = KW_NUM_ZHONGWEN_NUM[sLian].."连"..KW_NUM_ZHONGWEN_NUM[sShun].."线"
        end
    end
    return sRet
end

function CardAlgorithm:getGameGroupByCardType(cardType,cardEnmu)
    local cardGroup = {}
    cardGroup.Cards = {}


    for  i = 1,#cardType do 
        for  j = 1,#cardType[i] do 
            local gameCard = GameCard:new() 
            gameCard:setID(cardType[i][j].m_ucID)       
            table.insert(cardGroup.Cards,gameCard)
        end
    end

    cardGroup.tPower = CardAlgorithm:getCardTypePower(cardType)
    cardGroup.tType = cardEnmu 
    return cardGroup
end

function CardAlgorithm:getCardTypePower(CardType)
    if CardType == nil then
        return
    end

    local card = CardType[1][#CardType[1]]
    if card.m_ucReplacePower ~= 0 then
        return card.m_ucReplacePower
    end
    local power = CardAlgorithm:getPowerbyValue(CardAlgorithm:getValueByID(card.m_ucID))
    return power
end

function CardAlgorithm:gameCards2IDs(gameCards)
    local IDs = {}
    for i = 1,#gameCards do
        table.insert(IDs,gameCards[i]:getID())
    end
    return IDs
end

function CardAlgorithm:getCardTypesByIDsandType(IDs,Type,jokerData,lianZhabuDai)
    if #IDs == 0 then
        return
    end
    if Type == 0 then
        return
    end
    local joker = {}
    for i = 1,#jokerData do
        table.insert(joker,jokerData[i]:getID())
    end

    local cards = {}
    for i = 1,#IDs do
        table.insert(cards,IDs[i])
    end

    local retCards = {}
    local ret = {}

    retCards,ret = XH.GT.SKAlogorithm:GetCardsTypeComb(cards,joker,retCards,lianZhabuDai)

    if #retCards == 0 then
        return
    end

    if #ret ~= #retCards then
        return
    end

    for i = 1,#ret do
        if ret[i] == Type then
            return retCards[i],ret[i]
        end
    end
    return   
end

function CardAlgorithm:getCardTypesByMyCardsandType(mCards,Type,jokerData,lianZhabuDai)
    mCards = mCards or {}
    if #mCards == 0 then
        return
    end
    if Type == 0 then
        return
    end

    local outCardsType = {}  
    MyCardsType.GetCardsTypeComb(mCards,jokerData,outCardsType,{lianZhabuDai})

    for i = 1,#outCardsType do
        if outCardsType[i]:GetCardsTypeEnum() == Type then
            return outCardsType[i]
        end
    end
    return   
end

function CardAlgorithm:caiShenFenLi(jokerData,cardsValue)
    local normalValue = clone(cardsValue)
    local jokerValue = {}
    for i = 1,#jokerData do
        local value = CardAlgorithm:getValueByID(jokerData[i]:getID())
        if normalValue[value] then
            jokerValue[value] = normalValue[value]
            normalValue[value] = 0
        end
    end

    return jokerValue,normalValue
end


function CardAlgorithm.FindMaxCardTypes(inCardTypes,outCardTypes,canWithExcess)
    for i = #outCardTypes,1,-1 do
        table.remove(outCardTypes,i)
    end
    
    if #inCardTypes == 0 then
        return
    end
    
    local maxTypeIndex = 1
    table.insert(outCardTypes,(inCardTypes[maxTypeIndex]))
    
    for i = maxTypeIndex + 1,#inCardTypes do
        local maxCardtype = inCardTypes[maxTypeIndex]
        
        if maxCardtype:MoreThanSecordCardsType(inCardTypes[i]) == maxCardtype.CompareResult.CR_LESS_THAN then
            outCardTypes = {}
            maxTypeIndex = i
            table.insert(outCardTypes,inCardTypes[maxTypeIndex])
        elseif maxCardtype:MoreThanSecordCardsType(inCardTypes[i]) == maxCardtype.CompareResult.CR_UNABLE_COMPARE then
            table.insert(outCardTypes,inCardTypes[i])
        end
    end


    return
end

function CardAlgorithm.CompareTwoCardTypes(inCardTypes,biJiaoType,outCardTypes,canWithExcess)
    for i = #outCardTypes,1,-1 do
        table.remove(outCardTypes,i)
    end
    
    local tmpCarsTypes = {}
    for i = 1,#inCardTypes do
        local tmp = inCardTypes[i]
        if tmp:MoreThanSecordCardsType(biJiaoType) == biJiaoType.CompareResult.CR_MORE_THAN then
            table.insert(tmpCarsTypes,inCardTypes[i])
        end     
    end
    
    CardAlgorithm.FindMaxCardTypes(tmpCarsTypes,outCardTypes,canWithExcess)
    return
end

function CardAlgorithm.FilterCardType(inCardTypes,octRecord,outCardTypes,joker,canWithExcess)
    local nBiJiaoCardType =  CardAlgorithm.GetCardsTypeByCardsAndType(octRecord.Cards,octRecord.tType,joker,canWithExcess)
    for i = #outCardTypes,1,-1 do
        table.remove(outCardTypes,i)
    end
    if #nBiJiaoCardType._cards ~= 0 then
        CardAlgorithm.CompareTwoCardTypes(inCardTypes,nBiJiaoCardType,outCardTypes,canWithExcess)
    end
end

function CardAlgorithm.GetCardsTypeByCardsAndType(cards, type,joker,canWithExcess)
    local retCardstype = {}
    MyCardsType.GetCardsTypeComb(cards,joker,retCardstype,canWithExcess)
    for i = 1,#retCardstype do
        if retCardstype[i]:GetCardsTypeEnum() == type then
            return retCardstype[i]
        end
    end
    return MyCardsType.new()
end

function CardAlgorithm.GetXianByType( cardType )
    local xian = 0
    if cardType <= MyCardsType.CardsType.CT_4_JUNKO_0_CONTINUOUS then
        xian = 0
        return xian
    end
       
    if cardType > MyCardsType.CardsType.CT_0_KING then
        xian = cardType - MyCardsType.CardsType.CT_0_KING 
        return xian      
    end
    
    if math.floor(cardType % 100) == 1 then
        xian = math.floor(cardType / 100)
    else
        xian = math.floor(cardType / 100) + math.floor(cardType % 100)
    end
    return xian
end

function CardAlgorithm:canOut(preOutSeat,powerSeat,checkCardsID,dragCardsID,outCardsRecord,jokerData,lianZhaBudai,gameType)
    local isPowerSeat = preOutSeat == Game.FrameworkFunction.getMaxPlayer() or powerSeat == Game.FrameworkFunction.getSelfSeat()
    if isPowerSeat == false or powerSeat ~= Game.FrameworkFunction.getSelfSeat() then
        return false
    end
    
    checkCardsID = checkCardsID or {}
    dragCardsID = dragCardsID or {}
    local cardsID = checkCardsID
    if #checkCardsID < 1 then
        cardsID = dragCardsID
    end
    
    if #cardsID < 1 then
        return false
    end
    
    local preOutCards = nil
    local isFirstSeat = preOutSeat == Game.FrameworkFunction.getMaxPlayer() or preOutSeat == Game.FrameworkFunction.getSelfSeat()
    if isFirstSeat then
    else
        local lastOut = outCardsRecord[preOutSeat]
        preOutCards = lastOut[#lastOut]
    end     

    local retCards,retCardEndum = self:filteCard(cardsID,preOutCards,jokerData,lianZhaBudai,gameType)

    if retCards == nil then
        return false
    end

    if #retCards == 0 then
        return false
    end 

    return true
end


function CardAlgorithm:getCardsSZValue(handCardIDs)
    local cardsValue = {}
    for i = MyCard.CardValue.CV_NONE + 1,MyCard.CardValue.CV_COUNT - 1 do
        cardsValue[i] = 0
    end
    for i = 1,#handCardIDs do
        local value = self:getValueByID(handCardIDs[i])
        cardsValue[value] = cardsValue[value] + 1
    end
    return cardsValue
end

function CardAlgorithm:getSameCardCountInRegion(handCardIDs,srartIndex,endIndex,cardValue)
    local count = 0
    local tmpStartIndex = srartIndex
    local tmpEndIndex = endIndex
    if srartIndex > endIndex then
        tmpStartIndex = endIndex
        tmpEndIndex = srartIndex
    end   
    if tmpStartIndex < 1 then
        tmpStartIndex = 1
    end
    if tmpEndIndex > #handCardIDs then
        tmpEndIndex = #handCardIDs
    end

    for i = tmpStartIndex,tmpEndIndex do
        if cardValue == CardAlgorithm:getValueByID(handCardIDs[i]) then
            count = count +1
        end
    end
    return count
end

function CardAlgorithm:getPlayerCardsIndexByGroup(cardGroup,handCardIDs,checkedCardIndexs)
    local cardGroupIndex = {}
    cardGroupIndex.cardindex = {}
    cardGroupIndex.realindex = {}
    local unCheckCardIndexs = {}
    for i = 1,#handCardIDs do
        local isChecked = false
        for j = 1,#checkedCardIndexs do
            if i == checkedCardIndexs[j] then
                isChecked = true
            end
        end
        if not isChecked then
            table.insert(unCheckCardIndexs,i)
        end
    end
    
    local popIndex = {}
    for i = 1,#cardGroup do
        local isFind = false
        for j = 1,#checkedCardIndexs do
            if handCardIDs[checkedCardIndexs[j]] == cardGroup[i]:getID() then
                table.insert(cardGroupIndex.cardindex,checkedCardIndexs[j]) 
                table.insert(cardGroupIndex.realindex,i) 
                table.remove(checkedCardIndexs,j)
                isFind = true
                break
            end
        end

        if not isFind then
            for j = 1,#unCheckCardIndexs do
                if handCardIDs[unCheckCardIndexs[j]] == cardGroup[i]:getID() then
                    table.insert(cardGroupIndex.cardindex,unCheckCardIndexs[j]) 
                    table.insert(cardGroupIndex.realindex,i) 
                    table.remove(unCheckCardIndexs,j)
                    break
                end
            end
        end     
    end 
    return cardGroupIndex.cardindex 
end


return CardAlgorithm  �W  