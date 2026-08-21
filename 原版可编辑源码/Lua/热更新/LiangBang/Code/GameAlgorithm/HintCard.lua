local HintCard = {}
local CURRENT_MOUDLE_NAME = ...
local MyCardsType = import(".MyCardsType",CURRENT_MOUDLE_NAME)
local MyCard = import(".MyCard",CURRENT_MOUDLE_NAME)
--debugLevel 
--0 正常模式
--1 调试模式 记录结果
local debugMode =
    {
        ["noDebug"] = 0,
        ["writeUI"] = 1,
        ["writeLocal"] = 2,
    }
local debugLevel = debugMode.noDebug
local saveCount = 0
local saveIndex = 0
local HintCardTmp = {
    count = {
        [3] = 0,--3
        [4] = 0,--4
        [5] = 0,--5
        [6] = 0,--6
        [7] = 0,--7
        [8] = 0,--8
        [9] = 0,--9
        [10] = 0,--10
        [11] = 0,--J
        [12] = 0,--Q
        [13] = 0,--K
        [14] = 0,--A
        [15] = 0,--2
        [16] = 0,--xiaowang
        [17] = 0,--dawang
    },
    needJokerCount = 0,
    type = 0,
    startPower = 0,
    nJunko = 0,
    mContinuous = 0,
    loop = false,
    chai = false,
}

local CardCountTmp = {
    [3] = 0,--3
    [4] = 0,--4
    [5] = 0,--5
    [6] = 0,--6
    [7] = 0,--7
    [8] = 0,--8
    [9] = 0,--9
    [10] = 0,--10
    [11] = 0,--J
    [12] = 0,--Q
    [13] = 0,--K
    [14] = 0,--A
    [15] = 0,--2
    [16] = 0,--xiaowang
    [17] = 0,--dawang
}

local CardTypeTmp = 
    {
        type = 0,
        startPower = 0,
        loop = false,
    }

local NextPowerNoLoop = 
    {
        [3] = 4,
        [4] = 5,
        [5] = 6,
        [6] = 7,
        [7] = 8,
        [8] = 9,
        [9] = 10,
        [10] = 11,
        [11] = 12,
        [12] = 13,
        [13] = 14,
    }

local NextPowerLoop = 
    {
        [3] = 4,
        [4] = 5,
        [5] = 6,
        [6] = 7,
        [7] = 8,
        [8] = 9,
        [9] = 10,
        [10] = 11,
        [11] = 12,
        [12] = 13,
        [13] = 14,
        [14] = 15,
        [15] = 3,
    }

local BombCredibleTmp = 
    {
        [3] = {[401] = true},
        [4] = {[401] = true},
        [5] = {[401] = true},
        [6] = {[401] = true},
        [7] = {[401] = true},
        [8] = {[401] = true},
        [9] = {[401] = true},
        [10] = {[401] = true},
        [11] = {[401] = true},
        [12] = {[401] = true},
        [13] = {[401] = true},
        [14] = {[401] = true},
        [15] = {[401] = true},
    }

local NotBombCredibleTmp = 
    {
        [3] = {[101] = true},
        [4] = {[101] = true},
        [5] = {[101] = true},
        [6] = {[101] = true},
        [7] = {[101] = true},
        [8] = {[101] = true},
        [9] = {[101] = true},
        [10] = {[101] = true},
        [11] = {[101] = true},
        [12] = {[101] = true},
        [13] = {[101] = true},
        [14] = {[101] = true},
        [15] = {[101] = true},
        [16] = {[101] = true},
        [17] = {[101] = true},
    }

local hintCards = {}
local needJokerHintCards = {}
local curIndex = 0
local needReHint = true
local loadingCoroutine = nil


function HintCard.GetNextPower(power,loop)
    if loop then
        return NextPowerLoop[power]
    else
        return NextPowerNoLoop[power]
    end
end

local PrePowerNoLoop = 
    {
        [4] = 3,
        [5] = 4,
        [6] = 5,
        [7] = 6,
        [8] = 7,
        [9] = 8,
        [10] = 9,
        [11] = 10,
        [12] = 11,
        [13] = 12,
        [14] = 13,
    }

local PrePowerLoop = 
    {
        [3] = 15,
        [4] = 3,
        [5] = 4,
        [6] = 5,
        [7] = 6,
        [8] = 7,
        [9] = 8,
        [10] = 9,
        [11] = 10,
        [12] = 11,
        [13] = 12,
        [14] = 13,
        [15] = 14,
    }

function HintCard.GetPrePower(power,loop)
    if loop then
        return PrePowerLoop[power]
    else
        return PrePowerNoLoop[power]
    end
end

function  HintCard.DealHintCard(cards,jokerData,canWithExcess,preOutCard)
    if preOutCard == nil or preOutCard:GetCardsTypeEnum() == 0 then
        HintCard.GetHintCardsFirstOut(cards,jokerData,canWithExcess)
    else
        HintCard.GetHintCardsFirstFollow(cards,jokerData,canWithExcess,preOutCard)
    end
end

function HintCard.MyCards2HintCards(cards)
    local cardCount = {}
    for i = 1,#cards do
        local power = cards[i]:GetPower() 
        cardCount[power] = (cardCount[power] or 0) + 1        
    end
    return cardCount
end

function HintCard.MyCardsType2CardType(MyCardsType)
    local cardType = {}
    cardType.startPower = MyCardsType._cards[#MyCardsType._cards][1]:GetReplacePower()  
    cardType.type = MyCardsType:GetCardsTypeEnum()
    cardType.loop = MyCardsType:IsLoopCardsType()
    return cardType
end

local compareResult = 
    {
        unable = 1,
        equle = 2,
        less = 3,
        biger = 4,

    }
function HintCard.CompareCardType(cardType1,cardType2)
    if cardType1.type < 400 then
        if cardType2.type < 400 then
            if cardType1.type == cardType2.type then
                if cardType1.startPower == cardType2.startPower then
                    return compareResult.equle
                elseif cardType1.startPower > cardType2.startPower then
                    return compareResult.biger
                else
                    return compareResult.less
                end
            else
                return compareResult.unable
            end
        else
            return compareResult.less
        end
    else
        if cardType2.type < 400 then
            return compareResult.biger
        else
            local xian1 = HintCard.GetCardXianBtType(cardType1.type)
            local xian2 = HintCard.GetCardXianBtType(cardType2.type)
            if xian1 < xian2 then
                return compareResult.less
            elseif xian1 == xian2 then
                if cardType1.type > 10000 then
                    if cardType2.type > 10000 then
                        return compareResult.equle
                    else
                        return compareResult.less
                    end  
                else
                    if cardType2.type > 10000 then
                        return compareResult.biger
                    end          
                end


                if cardType1.type % 100 ~= cardType2.type % 100 then
                    return compareResult.unable
                else
                    if cardType1.loop == cardType2.loop then
                        if cardType1.loop then
                            if cardType1.startPower == cardType2.startPower then
                                return compareResult.equle
                            elseif cardType1.startPower % 14 > cardType2.startPower % 14 then
                                return compareResult.biger
                            else
                                return compareResult.less
                            end
                        else
                            if cardType1.startPower == cardType2.startPower then
                                return compareResult.equle
                            elseif cardType1.startPower > cardType2.startPower then
                                return compareResult.biger
                            else
                                return compareResult.less
                            end
                        end
                    else
                        if cardType1.loop then
                            return compareResult.less
                        else
                            return compareResult.biger
                        end
                    end
                end
            else
                return compareResult.biger
            end
        end 
    end
end

function HintCard.CaiShenFenLi(cards,jokerData)
    local jokerCards = {}
    local normalCards = clone(cards)
    for i = 1,#jokerData do
        for j = #normalCards,1,-1 do
            if normalCards[j]:GetID() == jokerData[i]:GetID() then
                table.insert(jokerCards,normalCards[j])
                table.remove(normalCards,j)
            end
        end
    end
    return normalCards,jokerCards
end

function HintCard.HintCards2MyCards(hintCard,cards,jokerData)
    local MyCards = {}
    local hintCard = clone(hintCard) 
    local tmpCards = clone(cards)
    local normalCards,jokerCards = HintCard.CaiShenFenLi(cards,jokerData)

    for k = #tmpCards,1,-1 do
        local power =  tmpCards[k]:GetPower()
        if hintCard.count[power] > 0 then
            table.insert(MyCards,MyCard.new(tmpCards[k]:GetID()))
            hintCard.count[power] = hintCard.count[power] - 1
            table.remove(tmpCards,k)
        end   
    end

    local tmpNeedJokerCount = hintCard.needJokerCount
    for _,v in pairs(jokerData) do
        for i = #tmpCards,1,-1 do
            if tmpNeedJokerCount > 0 then
                if tmpCards[i]:GetPower() == v:GetPower() then
                    table.insert(MyCards,MyCard.new(tmpCards[i]:GetID()))
                    table.remove(tmpCards,i)
                    tmpNeedJokerCount = tmpNeedJokerCount - 1
                end
            end        
        end
    end


    return MyCards
end

function HintCard.ReCalHintCard()
    needReHint = true
end 

function HintCard.GetHintCards(cards,jokerData,canWithExcess,preOutCard)
    local cardCount = HintCard.MyCards2HintCards(cards)

    if needReHint then
        local jokerCount = 0
        for i,v in pairs(jokerData) do
            jokerCount = jokerCount + (cardCount[v:GetPower()] or 0)
        end 
        needReHint = false
        curIndex = 0
        hintCards = {}
        needJokerHintCards = {}
        for i = 1,jokerCount do
            needJokerHintCards[i] = {}
        end
        loadingCoroutine = coroutine.create(
            function(...)

                HintCard.DealHintCard(...)
            end
        )         
    end
    local time1 = socket.gettime()
    coroutine.resume(loadingCoroutine,cardCount,jokerData,canWithExcess,preOutCard)
    local time2 = socket.gettime()
    print("hintcard cost time "..time2 - time1)
    if #hintCards == 0 then
        return {}
    end
    curIndex = (curIndex + 1) % #hintCards
    if curIndex == 0 then
        curIndex = #hintCards
    end
    local hintCard = HintCard.HintCards2MyCards(hintCards[curIndex],cards,jokerData)

    if debugLevel > debugMode.noDebug then
        saveIndex = saveIndex + 1
        if saveIndex % 20 == 0 then
            saveCount = saveCount + 1
        end
        local txtFile = io.open(string.format("%s%s%d.txt",cc.FileUtils:getInstance():getWritablePath(),"record_",saveCount),"a+")
        local sortCards = MyCard.SortByPower(cards)

        txtFile:write("----------------------------------------------------" .. "\n")
        txtFile:write("第"..saveIndex.."次提示记录" .. "\n")
        txtFile:write("提示花时"..time2-time1 .."秒" .. "\n")
        local cardText = "handCards :"
        for i = 1,#sortCards do
            cardText = cardText.." "..sortCards[i]:GetPower()
        end
        txtFile:write(cardText .. "\n")
        for i = 1,#hintCards do
            txtFile:write("第"..i.."次提示记录" .. "\n")  

            local hintCardText = "提示牌"
            for j = 3,17 do
                hintCardText = hintCardText.." "..j..":"..hintCards[i].count[j].."张 "
            end
            txtFile:write(hintCardText .. "\n")  
            local otherInfoText = "needJokerCount:"..hintCards[i].needJokerCount.." type:"..hintCards[i].type.." chai:"..(hintCards[i].chai and 1 or 0).." startPower:"..hintCards[i].startPower
            txtFile:write(otherInfoText .. "\n")
            txtFile:write("\n")
        end
        txtFile:write("----------------------------------------------------" .. "\n")
        txtFile:write("\n")
        txtFile:close()
    end

    return hintCard
end

function HintCard.FindHintCards(cards)
    table.insert(hintCards,cards)
    if debugLevel < debugMode.writeLocal then
        coroutine.yield()
    end
end

function HintCard.GetCardXianBtType(type)
    if type < 400 then
        return 0
    end

    local xian = 0
    if type > 10000 then
        return type % 10000
    end

    if type % 100 == 1 then
        xian = math.floor(type / 100)
    else
        xian = math.floor(type / 100 + type % 100)
    end

    return xian
end

function HintCard.GetHintCardsFirstFollow(cardCounts,jokerData,canWithExcess,preOutCards)   

    local cards = clone(cardCounts)
    local jokerType = HintCard.GetJokerType(cards,jokerData)

    local jokerCount = 0
    for i,v in pairs(jokerData) do
        jokerCount = jokerCount + (cards[v:GetPower()] or 0)
        cards[v:GetPower()] = 0
    end 

    local IsConformCardsTypeQianBian = HintCard.m_IsConformCardsType
    local FindMContinuousNJunkoByPower = HintCard.FindMContinuousNJunkoByPower
    local FindMaxMContinuousByStartPower = HintCard.FindMaxMContinuousByStartPower
    local FindHintCards = HintCard.FindHintCards
    local CompareCardType = HintCard.CompareCardType 
    local pairs = pairs
    local cardType = HintCard.MyCardsType2CardType(preOutCards)   

    local nJunko = math.floor(cardType.type / 100)
    local mContinuous = math.floor(cardType.type % 100)
    local needJokerHintCardsNotBomb = {}
    for i = 1,jokerCount do
        needJokerHintCardsNotBomb[i] = {}
    end
    local time1 = socket.gettime()
    if cardType.type < 400 then
        local hintCardsNotBomb = {}       
        for k = 3,17 do
            local canDaiPai = {canWithExcess}
            if IsConformCardsTypeQianBian(nJunko,mContinuous,canDaiPai) then
                local success,oneHintCard = FindMContinuousNJunkoByPower(cards,jokerCount,nJunko,mContinuous,k,canDaiPai)               
                if oneHintCard ~= nil then
                    if CompareCardType(oneHintCard,cardType) == compareResult.biger then
                        table.insert(hintCardsNotBomb,oneHintCard)                     
                    end                        
                end  
            end
        end 

        for i = 1,#hintCardsNotBomb do
            if hintCardsNotBomb[i].chai == false then                         
                if hintCardsNotBomb[i].needJokerCount == 0 then
                    FindHintCards(hintCardsNotBomb[i]) 
                else
                    table.insert(needJokerHintCardsNotBomb[hintCardsNotBomb[i].needJokerCount],hintCardsNotBomb[i])   
                end
            end        
        end 

        for i = 1,#hintCardsNotBomb do
            if hintCardsNotBomb[i].chai then      
                if hintCardsNotBomb[i].needJokerCount == 0 then
                    FindHintCards(hintCardsNotBomb[i])  
                else
                    table.insert(needJokerHintCardsNotBomb[hintCardsNotBomb[i].needJokerCount],hintCardsNotBomb[i])   
                end  
            end        
        end                      
    end


    local time2 = socket.gettime()

    local needJokerHintCardsBomb = {}
    for i = 1,jokerCount do
        needJokerHintCardsBomb[i] = {}
    end
    local cardNum = 0
    for i,v in pairs(cards) do
        cardNum = cardNum + v
    end
    cardNum = cardNum + jokerCount
    local preOutXian = HintCard.GetCardXianBtType(cardType.type)   
    local bombCredible = clone(BombCredibleTmp)

    for i = 4,12 do     
        local findHints = {}       
        if preOutXian <= i then              
            for j = 1,6 do                                                          
                local index = i
                if j ~= 1 then
                    index = i - j
                end
                if index < 4 then
                    break
                end                                          

                local mContinuous = j             
                if index * mContinuous > cardNum then
                    break
                end

                for k = 3,15 do  
                    if bombCredible[k][index * 100 + mContinuous] == nil then
                        bombCredible[k][index * 100 + mContinuous] = true
                    end              
                    if bombCredible[k][index * 100 + mContinuous] then  
                        local canDaiPai = {canWithExcess}           
                        if IsConformCardsTypeQianBian(index,mContinuous,canDaiPai) then
                            local success,oneHintCard = FindMContinuousNJunkoByPower(cards,jokerCount,index,mContinuous,k,canDaiPai)                      
                            if oneHintCard ~= nil then
                                if CompareCardType(oneHintCard,cardType) == compareResult.biger then 
                                    if oneHintCard.needJokerCount > 0 then
                                        table.insert(needJokerHintCardsBomb[oneHintCard.needJokerCount],oneHintCard)
                                    else
                                        table.insert(findHints,oneHintCard)
                                    end 
                                end      
                            end

                            if success == false then
                                for m = index + 1,12 do
                                    bombCredible[k][(m) * 100 + mContinuous] = false
                                end

                                for m = mContinuous + 1,13 do
                                    bombCredible[k][index * 100 + m] = false
                                end
                            else
                                bombCredible[k][(index + 1) * 100 + mContinuous] = success
                                bombCredible[k][index * 100 + mContinuous + 1] = success
                            end

                        else
                            bombCredible[k][(index + 1) * 100 + mContinuous] = true
                            bombCredible[k][index * 100 + mContinuous + 1] = true
                        end
                    end
                end                                     
            end  
        end 

        table.sort(findHints,function(a,b)
            local result = CompareCardType(a,b)
            if result == compareResult.biger then
                return false
            elseif result == compareResult.less then
                return true
            else
                if a.nJunko * a.mContinuous < b.nJunko * b.mContinuous then
                    return true
                else
                    return false
                end
            end
        end)

        for i = 1,#findHints do
            FindHintCards(findHints[i])
        end             
    end 

    local time3 = socket.gettime()

    for i = 1,#needJokerHintCardsNotBomb do
        for j = 1,#needJokerHintCardsNotBomb[i] do
            FindHintCards(needJokerHintCardsNotBomb[i][j])
        end
    end

    if jokerType ~= nil then
        if HintCard.GetCardXianBtType(jokerType.type) > preOutXian then
            if CompareCardType(jokerType,cardType) == compareResult.biger then                
                table.insert(needJokerHintCardsBomb[jokerType.needJokerCount],jokerType)
            end         
        end
    end

    for i = 1,#needJokerHintCardsBomb do
        table.sort(needJokerHintCardsBomb[i],function(a,b)
            local result = CompareCardType(a,b)
            if result == compareResult.biger then
                return false
            elseif result == compareResult.less then
                return true
            else
                if a.nJunko * a.mContinuous < b.nJunko * b.mContinuous then
                    return true
                else
                    return false
                end
            end
        end)
        for j = 1,#needJokerHintCardsBomb[i] do
            FindHintCards(needJokerHintCardsBomb[i][j])
        end
    end

    if #hintCards == 0 then
        local jokerNotBombType = HintCard.GetJokerNotBombType(cardCounts,jokerData)
        for i = 1,#jokerNotBombType do
            if CompareCardType(jokerNotBombType[i],cardType) == compareResult.biger then                
                FindHintCards(jokerNotBombType[i])
            end 
        end
    end
    local time4 = socket.gettime()  
    print("gethintcartfollow cost time1 " ..time2 - time1) 
    print("gethintcartfollow cost time2 " ..time3 - time2) 
    print("gethintcartfollow cost time3 " ..time4 - time3)   
end

function HintCard.GetHintCardsFirstOut(cardCounts,jokerData,canWithExcess)
    local onOut,oneOutType = HintCard.CanOneHandOut(cardCounts,jokerData,canWithExcess)
    if oneOutType ~= nil then
        HintCard.FindHintCards(oneOutType)
        return
    end

    local cards = clone(cardCounts)

    local jokerCount = 0
    for i,v in pairs(jokerData) do
        jokerCount = jokerCount + (cards[v:GetPower()] or 0)
        cards[v:GetPower()] = 0
    end 
    jokerCount = 0
    local IsConformCardsTypeQianBian = HintCard.m_IsConformCardsType
    local FindMContinuousNJunkoByPower = HintCard.FindMContinuousNJunkoByPower
    local FindMaxMContinuousByStartPower = HintCard.FindMaxMContinuousByStartPower
    local FindHintCards = HintCard.FindHintCards
    local GetNextPower = HintCard.GetNextPower
    -- <400
    local time1 = socket.gettime()
    local cardsCount = {}
    for i = 1,3 do
        cardsCount[i] = {}
    end
    for i,v in pairs(cards) do
        if v < 4 and v > 0 then 
            table.insert(cardsCount[v],i) 
        end
    end

    for index = 1,3 do
        table.sort(cardsCount[index])
        for i = 1,#cardsCount[index] do
            local success,oneHintCard = FindMContinuousNJunkoByPower(cards,jokerCount,index,1,cardsCount[index][i],{false})
            if oneHintCard ~= nil then
                FindHintCards(oneHintCard) 
            end       
        end
    end  

    local time2 = socket.gettime()

    for index = 1,3 do  
        local tmpCards = clone(cardsCount[index])           
        while #tmpCards > 0 do
            local mContinuous = FindMaxMContinuousByStartPower(tmpCards, math.floor(jokerCount / index) , tmpCards[1],index >= 4)        
            local canDaiPai = {canWithExcess}  
            if IsConformCardsTypeQianBian(index,mContinuous,canDaiPai) and mContinuous ~= 1 then
                local success,oneHintCard = FindMContinuousNJunkoByPower(cards,jokerCount,index,mContinuous,tmpCards[1],{false})
                if oneHintCard ~= nil then
                    for i,v in pairs(oneHintCard.count) do
                        if v > 0 then
                            for j = 1,#tmpCards do
                                if tmpCards[j] == i then
                                    table.remove(tmpCards,j)      
                                    break
                                end 
                            end
                        end
                    end
                    FindHintCards(oneHintCard) 
                else
                    table.remove(tmpCards,1)                 
                end  
            else
                table.remove(tmpCards,1)      
            end
        end
    end

    local time3 = socket.gettime()
    --  >400
    local bombCredible = clone(BombCredibleTmp)

    for i = 4,12 do 
        local findHints = {}           
        for j = 1,6 do     
            local index = i
            if j ~= 1 then
                index = i - j
            end
            if index < 4 then
                break
            end                                          

            local mContinuous = j                   
            for k = 3,15 do
                if bombCredible[k][index * 100 + mContinuous] == nil then
                    bombCredible[k][index * 100 + mContinuous] = true
                end
                if bombCredible[k][index * 100 + mContinuous] then      
                    local canDaiPai = {canWithExcess}       
                    if IsConformCardsTypeQianBian(index,mContinuous,canDaiPai) then
                        local success,oneHintCard = FindMContinuousNJunkoByPower(cards,jokerCount,index,mContinuous,k,canDaiPai)                      
                        if oneHintCard ~= nil then
                            table.insert(findHints,oneHintCard)  
                        end

                        if success == false then
                            for m = index + 1,12 do
                                bombCredible[k][(m) * 100 + mContinuous] = false
                            end

                            for m = mContinuous + 1,13 do
                                bombCredible[k][index * 100 + m] = false
                            end
                        else
                            bombCredible[k][(index + 1) * 100 + mContinuous] = success
                            bombCredible[k][index * 100 + mContinuous + 1] = success
                        end

                    else
                        bombCredible[k][(index + 1) * 100 + mContinuous] = true
                        bombCredible[k][index * 100 + mContinuous + 1] = true
                    end
                end
            end                                     
        end    

        table.sort(findHints,function(a,b)
            local result = HintCard.CompareCardType(a,b)
            if result == compareResult.biger then
                return false
            elseif result == compareResult.less then
                return true
            else
                if a.nJunko * a.mContinuous < b.nJunko * b.mContinuous then
                    return true
                else
                    return false
                end
            end
        end)

        for i = 1,#findHints do
            FindHintCards(findHints[i])
        end       
    end 

    local time4 = socket.gettime()
    print("gethintcartfirst cost time1 " ..time2 - time1) 
    print("gethintcartfirst cost time2 " ..time3 - time2) 
    print("gethintcartfirst cost time3 " ..time4 - time3)   
end

function HintCard.GetJokerNotBombType(cards,caiSHenData)
    local joker = {}
    local jokerCount = 0
    for i = 17,16,-1 do
        cards[i] = cards[i] or 0
        for j = 1,cards[i] do
            table.insert(joker,i)           
        end 
    end

    local caiShenPower = {}
    for i,v in pairs(caiSHenData) do
        local power = v:GetPower()
        if power == 16 or power == 17 then 
            table.insert(caiShenPower,power)
            jokerCount = jokerCount + cards[power]
        end
    end 

    local types = {}
    for i = 1,2 do
        for _,v in pairs(caiShenPower) do
            local hintCard = nil
            if cards[v] >= i then
                hintCard = clone(HintCardTmp)
                hintCard.count[v] = i
            elseif cards[v] ~= 0 then
                hintCard = clone(HintCardTmp)
                hintCard.count[v] = cards[v]
                local tmpJokerCount = clone(jokerCount)
                for j = 1,#caiShenPower do
                    if caiShenPower[j] == v then
                        tmpJokerCount = tmpJokerCount - cards[v] 
                    end
                    hintCard.needJokerCount = i - cards[v]
                    if hintCard.needJokerCount > tmpJokerCount then
                        hintCard = nil
                        break
                    end
                end 
            end

            if hintCard ~= nil then
                hintCard.type = i * 100 + 1
                hintCard.startPower = v
                hintCard.nJunko = i
                hintCard.mContinuous = 1
                table.insert(types,hintCard)
            end
        end    
    end


    return types
end

function HintCard.GetJokerType(cards,caiSHenData)
    local joker = {}
    local jokerCount = 0
    for i = 17,16,-1 do
        for j = 1,cards[i] or 0 do
            table.insert(joker,i)
            jokerCount = jokerCount + 1
        end 
    end

    local caiShenPower = {}
    for i,v in pairs(caiSHenData) do
        local power = v:GetPower()
        if power == 16 or power == 17 then 
            table.insert(caiShenPower,power)
        end
    end 

    local jokerBombtypes = {}
    for i = 3,#joker do
        local hintCard = clone(HintCardTmp)
        for j = 1,i do
            hintCard.count[joker[j]] = hintCard.count[joker[j]] + 1
        end

        for i,v in pairs(caiShenPower) do
            hintCard.needJokerCount = hintCard.needJokerCount + hintCard.count[v]
            hintCard.count[v] = 0
        end

        hintCard.type = 10000 + i + 3
        table.insert(jokerBombtypes,hintCard)
    end

    table.sort(jokerBombtypes,function(a,b)
        local result = HintCard.CompareCardType(a,b)
        if result == compareResult.biger then
            return false
        elseif result == compareResult.less then
            return true
        else
            if a.nJunko * a.mContinuous < b.nJunko * b.mContinuous then
                return true
            else
                return false
            end
        end
    end)

    if #jokerBombtypes > 0 then
        return jokerBombtypes[#jokerBombtypes]
    end
    return nil
end

function HintCard.FindMaxMContinuousByStartPower(cards, jokerCount, startPower,loop)
    local cardCount = clone(CardCountTmp) 
    for i = 1,#cards do
        cardCount[cards[i]] = 1
    end 
    local mContinuous = 0
    local power = startPower
    local jokerCount = jokerCount
    local GetNextPower = HintCard.GetNextPower
    while true do
        if cardCount[power] == 0 then
            if jokerCount > 0 then          
                jokerCount = jokerCount - 1
            else
                break
            end
        end
        power = GetNextPower(power,loop)
        mContinuous = mContinuous + 1
        if power == startPower or power == nil then
            break
        end
    end
    return mContinuous
end

HintCard.m_IsConformCardsType = HintCard.m_IsConformCardsType or function(...)
    return HintCard.IsConformCardsTypeDaTong(...)
end

function HintCard.IsConformCardsTypeQianBian(nJunko,mContinuous,canWithExcess)
    if nJunko == 1 then
        if mContinuous > 1 and mContinuous < 5 then
            return false
        else
            canWithExcess[1] = false
            return true
        end
    elseif nJunko == 2 or nJunko == 3 then
        if mContinuous > 1 and mContinuous < 3 then
            return false 
        else
            canWithExcess[1] = false
            return true
        end
    elseif nJunko ==4 or nJunko ==5 then
        if mContinuous > 1 and mContinuous < 3 then
            return false
        end
    end

    return true
end


function HintCard.IsConformCardsTypeBaiBian(nJunko,mContinuous,canWithExcess)
    if nJunko == 1 then
        if mContinuous > 1 and mContinuous < 5 then
            return false
        else
            canWithExcess[1] = false
            return true
        end
    elseif nJunko == 2 or nJunko == 3 then
        if mContinuous > 1 and mContinuous < 3 then
            return false 
        else
            canWithExcess[1] = false
            return true
        end
    elseif nJunko ==4 or nJunko ==5 then
        if mContinuous > 1 and mContinuous < 3 then
            return false
        end
    end

    if nJunko > 3 then
        if mContinuous > 1 and mContinuous < 3 then
            return false
        end
    end
    return true
end

function HintCard.IsConformCardsTypeDaTong(nJunko,mContinuous,canWithExcess)
    canWithExcess[1] = false
    if mContinuous > 1 then
        return false
    else
        return true
    end
end

function HintCard.IsConformCardsTypeClassical(nJunko,mContinuous,canWithExcess)
    canWithExcess[1] = false
    if nJunko == 1 then
        if mContinuous > 1 and mContinuous < 5 then
            return false
        else
            return true
        end
    elseif nJunko == 2 or nJunko == 3 then
        if mContinuous > 1 and mContinuous < 3 then
            return false 
        else
            return true
        end
    else
        if mContinuous == 1 then
            return true
        else
            return false
        end
    end

    return true
end

function HintCard.IsConformCardsTypeErRen(nJunko,mContinuous,canWithExcess)
    if nJunko == 1 then
        if mContinuous > 1 and mContinuous < 5 then
            return false
        else
            canWithExcess[1] = false
            return true
        end
    elseif nJunko == 2 or nJunko == 3 then
        if mContinuous > 1 and mContinuous < 3 then
            return false 
        else
            canWithExcess[1] = false
            return true
        end
    end

    return true
end

function HintCard.TestMContinuousNJunkoByPower(normalCount, jokerCount , nJunko, mContinuous, startPower,canWithExcess)    
    local GetNextPower = HintCard.GetNextPower
    local power = startPower
    local retCount = clone(HintCardTmp)
    for i = startPower,startPower + mContinuous - 1 do        
        normalCount[power] = normalCount[power] or 0
        if normalCount[power] < nJunko then
            retCount.needJokerCount = retCount.needJokerCount + nJunko - normalCount[power]
            retCount.count[power] = normalCount[power]
        elseif normalCount[power] == nJunko then
            retCount.count[power] = nJunko
        elseif normalCount[power] > nJunko then
            retCount.count[power] = nJunko
        end
        if retCount.needJokerCount > jokerCount then
            return false
        end     
        if i == startPower + mContinuous - 1 then
            break
        end 
        power = GetNextPower(power,nJunko >= 4)
        if power == nil then        
            return false
        end
    end 

    retCount.startPower = power
    retCount.nJunko = nJunko
    retCount.mContinuous = mContinuous
    retCount.loop = retCount.count[15] > 0 and retCount.nJunko >=4 and retCount.mContinuous > 1
    retCount.type = nJunko * 100 + mContinuous
    return true,retCount 
end

--专门对提示的查找牌型算法
--会过滤掉有财神时的小牌型
--可加牌的，如果 加牌后线数变大了，那么也返回false
function HintCard.FindMContinuousNJunkoByPower(normalCount, jokerCount , nJunko, mContinuous, startPower,canWithExcess)    
    local success,hintCard = HintCard.TestMContinuousNJunkoByPower(normalCount, jokerCount , nJunko, mContinuous, startPower,canWithExcess)
    if hintCard ~= nil then
        if hintCard.nJunko * hintCard.mContinuous == hintCard.needJokerCount then
            return false
        end

        if hintCard.needJokerCount >= 3 then
            local jokerCard = {}
            jokerCard.type = 10000 + hintCard.needJokerCount + 3
            if HintCard.CompareCardType(jokerCard,hintCard) == compareResult.biger then
                return true
            end
        end
        if hintCard.count[startPower] == 0 then
            local endPower = startPower
            for i = 1,hintCard.mContinuous do
                endPower = HintCard.GetNextPower(endPower,hintCard.nJunko >= 4)
            end

            if endPower ~= nil then
                return true
            end
        end

        local canBigger = true
        local maxCount = 0
        for i = 3,17 do
            if (hintCard.count[i] or 0) > 0 then
                if normalCount[i] > hintCard.count[i] then
                    if canWithExcess[1] then
                        hintCard.count[i] = normalCount[i]
                    else                    
                        hintCard.chai = true
                    end
                else
                    canBigger = false
                end    

                if normalCount[i] > maxCount then
                    maxCount = normalCount[i]
                end     
            end        
        end

        if hintCard.type < 400 and maxCount >= 4 then
            return true
        end

        if hintCard.nJunko < 4 then
            canBigger = false
        end

        if canBigger then
            return true
        else    
            return success,hintCard
        end           
    end

    return success
end

--能否找到
function HintCard.CanMContinuousNJunkoByPower(normalCount, jokerCount , nJunko, mContinuous, startPower,canWithExcess)    
    local success,hintCard = HintCard.TestMContinuousNJunkoByPower(normalCount, jokerCount , nJunko, mContinuous, startPower,canWithExcess)
    if hintCard ~= nil then

        for i = 3,17 do
            if (hintCard.count[i] or 0) > 0 then
                if normalCount[i] > hintCard.count[i] then
                    if canWithExcess[1] then
                        hintCard.count[i] = normalCount[i]
                    else                    
                        hintCard.chai = true
                    end

                end        
            end        
        end

        return success,hintCard         
    end

    return success
end

function HintCard.CanOneHandOut(cards,jokerData,canWithExcess)
    local cards = clone(cards)
    local jokerType = HintCard.GetJokerType(cards,jokerData)
    local jokerCount = 0
    for i,v in pairs(jokerData) do
        jokerCount = jokerCount + (cards[v:GetPower()] or 0)
        cards[v:GetPower()] = 0
    end 

    local cardsPower = {}
    local maxNjunko = 0
    local minNjunko = 12
    for i = 3,17 do
        if (cards[i] or 0) > 0 then
            table.insert(cardsPower,i)
            if cards[i] > maxNjunko then
                maxNjunko = cards[i]
            end

            if cards[i] < minNjunko then
                minNjunko = cards[i]
            end
        end
    end

    --王炸一手出完
    if jokerType ~= nil and #cardsPower == 0 then
        return true,jokerType
    end
    local jokerNotBombType = HintCard.GetJokerNotBombType(cards,jokerData)
    if #jokerNotBombType > 0 and #cardsPower == 0 then
        return true,jokerNotBombType[#jokerNotBombType]
    end

    local nJunko = maxNjunko
    local canWithExcess = canWithExcess or false     
    if canWithExcess  then
        if maxNjunko >= 4 then
            nJunko = 4
        end
    end

    local typeCredible = {}
    for i = 3,17 do
        typeCredible[i] = {}
        typeCredible[i][nJunko * 100 + #cardsPower] = true
    end

    for i = #cardsPower,#cardsPower + jokerCount / nJunko do
        for j = 3,17 do
            local maxTmpNJunko = 0
            if #cardsPower == 0 then
                maxTmpNJunko = nJunko + jokerCount
            else
                maxTmpNJunko = nJunko + jokerCount / #cardsPower
            end
            for k = nJunko,maxTmpNJunko do
                if typeCredible[j][k * 100 + i] == nil then
                    typeCredible[j][k * 100 + i] = true
                end
                if typeCredible[j][k * 100 + i] then
                    local canDaiPai = {canWithExcess}
                    if HintCard.m_IsConformCardsType(k,i,canDaiPai) then
                        local success,hintCard = HintCard.CanMContinuousNJunkoByPower(cards, jokerCount , k, i, j ,canDaiPai)    
                        if hintCard ~= nil then
                            local normalCardsCount = 0
                            for _,v in pairs(hintCard.count) do
                                if v > 0 then
                                    normalCardsCount = normalCardsCount +1
                                end
                            end
                            if normalCardsCount == #cardsPower then
                                if jokerCount - hintCard.needJokerCount ~= 0 then
                                    if canDaiPai[1] then
                                        hintCard.needJokerCount = jokerCount
                                        return true,hintCard
                                    end
                                else
                                    return true,hintCard
                                end

                            end
                        end
                        if success == false then
                            for m = i,13 do
                                typeCredible[j][k * 100 + m] = false
                            end
                        else
                            typeCredible[j][k * 100 + i + 100] = success
                            typeCredible[j][k * 100 + i + 1] = success
                        end
                        --                    typeCredible[j][nJunko * 100 + i + 100] = success
                        --                    typeCredible[j][nJunko * 100 + i + 1] = success
                    else
                        typeCredible[j][k * 100 + i + 1] = true
                    end
                end
            end
        end
    end

    return false
end

return HintCard