local CURRENT_MOUDLE_NAME = ...
local SmartSelectCardBase = import("..GameAlgorithm.SmartSelectCards",CURRENT_MOUDLE_NAME)
local SmartSelectCard = SmartSelectCardBase or {}

local CardAlgorithm = import(".CardAlgorithm",CURRENT_MOUDLE_NAME)
local MyCard = import("..GameAlgorithm.MyCard",CURRENT_MOUDLE_NAME)
-- 跟牌，智能提示
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
                local myCards = {}
                for v,value in pairs(cards) do
                    for i =1,value do
                        local tMyCards = MyCard.new(CardAlgorithm:getIDByValue(v))
                        table.insert(myCards,tMyCards)
                    end
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
                        local tMyCards = MyCard.new(CardAlgorithm:getIDByValue(v))
                        table.insert(myCards,tMyCards)
                    end
                end
                retCards,retCardEndum = CardAlgorithm:filteCard(myCards,preOutCards,jokerData,{lianZhaBuDai})
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
            local myCards = {}
            for v,value in pairs(tmpCards) do
                for i =1,value do
                    local tMyCard = MyCard.new(CardAlgorithm:getIDByValue(v))
                    table.insert(myCards,tMyCard)
                end
            end
            retCards,retCardEndum = CardAlgorithm:filteCard(myCards,preOutCards,jokerData,{lianZhaBuDai})
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
-- 首出，智能提示
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
                if #hintIndex == 5 then
                    return hintIndex          
                end
            end
        end      
    end   
    return
end

return SmartSelectCard
�!