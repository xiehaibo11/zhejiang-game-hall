local SmartSelectCard = {}
local CURRENT_MOUDLE_NAME = ...
local GameCard = import(".GameCard",CURRENT_MOUDLE_NAME)
local CardAlgorithm = import(".CardAlgorithm",CURRENT_MOUDLE_NAME)
local MyCard = import(".MyCard",CURRENT_MOUDLE_NAME)

local ENUM_SMART_SELECT_MODE = {
    SMART_SELECT_MODE_FIRST = 0,
    SMART_SELECT_MODE_FLOWER = 1,
}

SmartSelectCard._firstCheckIndex = nil
SmartSelectCard._secondCheckIndex = nil
SmartSelectCard._lastCheckCount = 0
SmartSelectCard._smartMode = ENUM_SMART_SELECT_MODE.SMART_SELECT_MODE_FIRST
SmartSelectCard._canFlower = true 

function SmartSelectCard:reset()
    SmartSelectCard._firstCheckIndex = nil
    SmartSelectCard._secondCheckIndex = nil
    SmartSelectCard._lastCheckCount = 0
end

function SmartSelectCard:smartHintCardFollow(handCardIDs,checkedCardIndexs,preOutCards,jokerData,lianZhaBuDai,gameType)   
    local checkCards = checkedCardIndexs
    if #checkCards ~= 1 then
        return
    end
    SmartSelectCard._firstCheckIndex = checkCards[1]
    local handCards = handCardIDs
    local hintID = handCards[checkCards[1]]
    local cardsValue = CardAlgorithm:getCardsSZValue(handCardIDs)
    local jokerCardsValue,normalCardsValue = CardAlgorithm:caiShenFenLi(jokerData,cardsValue)
    local jokerCount = 0
    for v,value in pairs(jokerCardsValue) do
        jokerCount = jokerCount + value
    end

    local nJunko = math.floor(preOutCards.tType / 100)
    local mContinuous = preOutCards.tType % 100

    local cards,useJokerCount
    if preOutCards.tType > 400 then

    else            
        for i = 1,mContinuous do
            while true do        
                local hintValue = CardAlgorithm:getValueByID(hintID)
                local startValue = hintValue
                for j = 1,i - 1 do
                    startValue = CardAlgorithm:GetPreValue(startValue,nJunko >= 4)
                    if startValue == nil then
                        break  
                    end   
                end
                if startValue == nil then
                    break  
                end     
                local endValue = startValue
                for j = 1,mContinuous - 1 do
                    local endValue = CardAlgorithm:GetNextValue(endValue,nJunko >= 4)
                end
                if endValue == nil then
                    break  
                end

                local endID = CardAlgorithm:getIDByValue(endValue)
                local startID = CardAlgorithm:getIDByValue(startValue)
                cards,useJokerCount = SmartSelectCard:testNM(jokerCount,normalCardsValue,nJunko,mContinuous,startID,endID)    
                break
            end
            if cards then
                local retCards,retCardEndum
                local IDs = {}
                for v,value in pairs(cards) do
                    for i =1,value do
                        --table.insert(IDs,CardAlgorithm:getIDByValue(v))
                        table.insert(IDs,MyCard.new(CardAlgorithm:getIDByValue(v)))
                    end
                    IDs.tType = preOutCards.tType
                end
                local needJoker = useJokerCount
                for v,value in pairs(jokerCardsValue) do
                    local count = value
                    if count > needJoker then
                        count = needJoker
                    else
                        needJoker = needJoker - value
                    end
                    for i =1,count do
                        --table.insert(IDs,CardAlgorithm:getIDByValue(v))
                        table.insert(IDs,MyCard.new(CardAlgorithm:getIDByValue(v)))
                    end
                    IDs.tType = preOutCards.tType
                end
                retCards,retCardEndum = CardAlgorithm:filteCard(IDs,preOutCards,jokerData,lianZhaBuDai,gameType) --hcc error IDs
                if #retCards == 0 then
                    cards = nil 
                end
                break         
            end
        end             
    end

    if cards == nil then
        local maxCount = CardAlgorithm:getSameCardCountInRegion(handCardIDs,1,#handCardIDs,CardAlgorithm:getValueByID(hintID))
        local handCards = {}
        for i = 1,maxCount do
            table.insert(handCards,hintID)
        end
        local tmpCards = {}
        tmpCards[CardAlgorithm:getValueByID(hintID)] = maxCount
        useJokerCount = 0
        local handJokerValue = {}
        for v,value in pairs(jokerCardsValue) do
            for i = 1,value do
                table.insert(handJokerValue,v)
            end
            tmpCards[v] = 0
        end
        local retCards,retCardEndum
        for i = 0,jokerCount do
            if i > 0 then
                table.insert(handCards,handJokerValue[i]) 
                useJokerCount = useJokerCount + 1
                tmpCards[handJokerValue[i]] = tmpCards[handJokerValue[i]] + 1
            end
            local IDs = {}
            for v,value in pairs(tmpCards) do
                for i =1,value do
                    table.insert(IDs,CardAlgorithm:getIDByValue(v))
                end
            end
            retCards,retCardEndum = CardAlgorithm:filteCard(IDs,preOutCards,jokerData,lianZhaBuDai,gameType)
            if #retCards ~= 0 then
                cards = tmpCards
                break
            end
        end
    end

    if cards then
        local needJokerCount = useJokerCount
        for i = #jokerData,1,-1 do
            local count = jokerCardsValue[jokerData[i]:GetNum()] 
            if count > needJokerCount then
                count = needJokerCount       
            end
            needJokerCount = needJokerCount - count
            cards[jokerData[i]:GetNum()] = count
            if needJokerCount < 0 then
                return
            end
        end
        local hintIndex = SmartSelectCard:conversionToPlayCardIndex(handCardIDs,checkedCardIndexs,cards)
        return hintIndex    
    end   
end

function SmartSelectCard:judgeSmartMode(curCheckCount,preOutSeat,powerSeat)
    local smartMode = ENUM_SMART_SELECT_MODE.SMART_SELECT_MODE_FIRST
    if powerSeat == preOutSeat or preOutSeat == Game.FrameworkFunction.getMaxPlayer() then 
        return smartMode      
    end

    if Game.FrameworkFunction.getSelfSeat() == preOutSeat then
        return smartMode
    end   

    if curCheckCount ~= 1 then
        return smartMode
    end

    if SmartSelectCard._lastCheckCount ~= 0 then
        return smartMode   
    end

    if not SmartSelectCard._canFlower then
        return smartMode
    end
    smartMode = ENUM_SMART_SELECT_MODE.SMART_SELECT_MODE_FLOWER
    return smartMode
end

function SmartSelectCard:smartHintCard(handCardIDs,checkedCardIndexs,preOutCards,preOutSeat,powerSeat,jokerData,lianZhaBuDai,gameType)
    if not handCardIDs then
        return nil
    end
    if not checkedCardIndexs then
        return nil
    end
    local selfLocalSeat = Game.FrameworkFunction.getSelfLocalSeat()
    local checkCards = checkedCardIndexs
    SmartSelectCard._smartMode = SmartSelectCard:judgeSmartMode(#checkCards,preOutSeat,powerSeat) 
    if SmartSelectCard._lastCheckCount > #checkCards then
        SmartSelectCard._lastCheckCount = #checkCards
        return
    end
    SmartSelectCard._lastCheckCount = #checkCards
    for i = 1,#checkCards do
        for j,v in pairs(jokerData) do
            if handCardIDs[checkCards[i]] == v.id then
                return
            end
        end
    end

    if SmartSelectCard._smartMode == ENUM_SMART_SELECT_MODE.SMART_SELECT_MODE_FLOWER then
        SmartSelectCard._canFlower = false
    end

    if SmartSelectCard._smartMode == ENUM_SMART_SELECT_MODE.SMART_SELECT_MODE_FLOWER then
        return SmartSelectCard:smartHintCardFollow(handCardIDs,checkedCardIndexs,preOutCards,jokerData,lianZhaBuDai,gameType)
    else
        return SmartSelectCard:smartHintCardFirst(handCardIDs,checkedCardIndexs,jokerData)
    end     
end

function SmartSelectCard:smartHintCardFirst(handCardIDs,checkedCardIndexs,jokerData)
    local checkCards = checkedCardIndexs    

    if #checkCards == 2 then
        if SmartSelectCard._lastCheckCount > 2 then
            return
        end

        local firstValue = CardAlgorithm:getValueByID(handCardIDs[checkCards[1]])
        local secondValue = CardAlgorithm:getValueByID(handCardIDs[checkCards[2]])
        if firstValue == secondValue then
            return
        end
    end

    if #checkCards == 1 then
        SmartSelectCard._firstCheckIndex = checkCards[1]
    elseif #checkCards == 2 then       
        SmartSelectCard._secondCheckIndex = checkCards[1]
        if SmartSelectCard._secondCheckIndex == SmartSelectCard._firstCheckIndex then
            SmartSelectCard._secondCheckIndex = checkCards[2]
        end 

        local cardsValue = CardAlgorithm:getCardsSZValue(handCardIDs)
        local jokerCardsValue,normalCardsValue = CardAlgorithm:caiShenFenLi(jokerData,cardsValue)
        local jokerCount = 0
        for v,value in pairs(jokerCardsValue) do
            jokerCount = jokerCount + value
        end
        local lastCheckValue = CardAlgorithm:getValueByID(handCardIDs[SmartSelectCard._secondCheckIndex])
        local maxJunko = CardAlgorithm:getSameCardCountInRegion(handCardIDs,SmartSelectCard._firstCheckIndex,SmartSelectCard._secondCheckIndex,lastCheckValue)
        local length = SmartSelectCard:getLength(handCardIDs[SmartSelectCard._firstCheckIndex],handCardIDs[SmartSelectCard._secondCheckIndex])

        for i = maxJunko,1,-1 do 
            local MContinuous = nil    
            for j = length,16 do
                if CardAlgorithm:m_IsConformCardsType(i,j) then
                    MContinuous = j
                    break
                end
            end   
            local cards,useJokerCount = SmartSelectCard:testNM(jokerCount,normalCardsValue,i,MContinuous,handCardIDs[SmartSelectCard._firstCheckIndex],handCardIDs[SmartSelectCard._secondCheckIndex])    
            if cards then
                local needJokerCount = useJokerCount
                for i = #jokerData,1,-1 do
                    local count = jokerCardsValue[jokerData[i]:GetNum()] 
                    if count > needJokerCount then
                        count = needJokerCount       
                    end
                    needJokerCount = needJokerCount - count
                    cards[jokerData[i]:GetNum()] = count
                    if needJokerCount < 0 then
                        return
                    end
                end
                local hintIndex = SmartSelectCard:conversionToPlayCardIndex(handCardIDs,checkedCardIndexs,cards)
                return hintIndex          
            end
        end      
    end   
    return
end

function SmartSelectCard:getLength(firstID,secondID)
    local gameCard = GameCard:new()
    gameCard:setID(firstID)
    local firstPower = gameCard:GetPower()
    gameCard:setID(secondID)
    local secondPower = gameCard:GetPower()
    if firstPower > secondPower then
        local tmpPower = firstPower
        firstPower = secondPower
        secondPower = tmpPower
    end
    return secondPower - firstPower + 1
end



function SmartSelectCard:testNM(jokercount,normalCardsValue,nJunko,mContinuous,firstId,secondId)
    local useJokerCount = 0
    local firstValue,secondValue = SmartSelectCard:judgeStartAndEndValue(firstId,secondId)
    if firstValue == nil or secondValue == nil then
        return
    end

    local gameCardfirst = GameCard:new() 
    gameCardfirst:setID(firstId)
    local gameCardSecond = GameCard:new() 
    gameCardSecond:setID(secondId)

    local startValue = firstValue
    if gameCardfirst:GetPower() > gameCardSecond:GetPower() then
        local length = SmartSelectCard:getLength(firstId,secondId)
        if length < mContinuous then
            for i = 1,mContinuous - length do
                local tmpValue = CardAlgorithm:GetPreValue(startValue,nJunko >= 4)
                if tmpValue == nil then
                    break
                end
                startValue = tmpValue
            end
        end
    end

    local hintCards,useJokerCount = SmartSelectCard:cardsIsEnough(jokercount,normalCardsValue,nJunko,mContinuous,startValue)
    if hintCards ~= nil then
        return hintCards,useJokerCount
    end           
end

function SmartSelectCard:cardsIsEnough(jokercount,normalCardsValue,nJunko,mContinuous,startValue)
    local curValue = startValue
    local hintCards = {}
    for i = 1,mContinuous do
        if curValue == nil then
            return
        end
        hintCards[curValue] = normalCardsValue[curValue] 
        if hintCards[curValue] > nJunko then
            hintCards[curValue] = nJunko
        end
        curValue = CardAlgorithm:GetNextValue(curValue,nJunko >= 4)
    end
    local count = 0
    for v,value in pairs(hintCards) do
        count = count + value
    end
    if count + jokercount < nJunko * mContinuous then
        return
    end
    return hintCards,nJunko * mContinuous - count 
end

function SmartSelectCard:judgeStartAndEndValue(firstId,secondId)
    local firstCard = GameCard:new()
    firstCard:setID(firstId)
    local secondCard = GameCard:new()
    secondCard:setID(secondId)

    if firstCard:GetPower() < secondCard:GetPower() then
        return firstCard:GetNum(),secondCard:GetNum()
    else
        return secondCard:GetNum(),firstCard:GetNum()
    end   
end

function SmartSelectCard:conversionToPlayCardIndex(handCardIDs,checkedCardIndexs,hintCards)
    local hintIndex = {}
    local firstIndex = SmartSelectCard._firstCheckIndex

    local secondIndex
    if SmartSelectCard._secondCheckIndex ~= nil then   
        secondIndex = SmartSelectCard._secondCheckIndex
        if SmartSelectCard._firstCheckIndex > SmartSelectCard._secondCheckIndex then
            firstIndex = SmartSelectCard._secondCheckIndex
            secondIndex = SmartSelectCard._firstCheckIndex 
        end                  
    else
        secondIndex = firstIndex
    end

    table.insert(hintIndex,firstIndex)
    local value = CardAlgorithm:getValueByID(handCardIDs[firstIndex])
    hintCards[value] = hintCards[value] - 1
    if firstIndex ~= secondIndex then
        table.insert(hintIndex,secondIndex)
        value = CardAlgorithm:getValueByID(handCardIDs[secondIndex])
        hintCards[value] = hintCards[value] - 1
    end    


    for i = firstIndex + 1,secondIndex - 1 do
        local curCardValue = CardAlgorithm:getValueByID(handCardIDs[i])
        for v,value in pairs(hintCards) do
            if v == curCardValue then
                if hintCards[curCardValue] > 0 then
                    hintCards[curCardValue] = hintCards[curCardValue] - 1
                    table.insert(hintIndex,i)
                end
            end
        end
    end

    for i = 1,firstIndex - 1 do
        local curCardValue = CardAlgorithm:getValueByID(handCardIDs[i])
        for v,value in pairs(hintCards) do
            if v == curCardValue then
                if hintCards[curCardValue] > 0 then
                    hintCards[curCardValue] = hintCards[curCardValue] - 1
                    table.insert(hintIndex,i)
                end
            end
        end
    end

    local handCardCount = #handCardIDs
    for i = secondIndex + 1,handCardCount do
        local curCardValue = CardAlgorithm:getValueByID(handCardIDs[i])
        for v,value in pairs(hintCards) do
            if v == curCardValue then
                if hintCards[curCardValue] > 0 then
                    hintCards[curCardValue] = hintCards[curCardValue] - 1
                    table.insert(hintIndex,i)
                end
            end
        end
    end

    return hintIndex
end

return SmartSelectCardL?