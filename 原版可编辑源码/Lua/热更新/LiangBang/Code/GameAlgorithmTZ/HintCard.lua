local CURRENT_MOUDLE_NAME = ...
local HintCardBase = import("..GameAlgorithm.HintCard",CURRENT_MOUDLE_NAME)
local HintCard = HintCardBase or {}
local MyCardsType = import(".MyCardsType",CURRENT_MOUDLE_NAME)
local hintCards = {}

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

local compareResult = 
    {
        unable = 1,
        equle = 2,
        less = 3,
        biger = 4,

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

function HintCard.GetCardXianBtType(type)
    if type < 400 then
        return 0
    end

    local xian = 0
    if type > 10000 then
        return type
    end

    if type % 100 == 1 then
        xian = math.floor(type / 100)
    else
        xian = math.floor(type / 100 + type % 100)
    end

    return xian
end

function HintCard.IsConformCardsTypeDaTong(nJunko,mContinuous,canWithExcess)
    canWithExcess[1] = false
    if mContinuous > 1 then
        return false
    else
        return true
    end
end

-- x,x, 4 , 1 ,16
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
    if retCount.loop == true then
        return false
    end
    local jokerNum = 0
    local tipJokerNum = 0
    for k,v in pairs(normalCount) do
        if k == 16 or k == 17 then
           jokerNum = jokerNum + v
        end
    end
    for k,v in pairs(retCount.count) do
        if k == 16 or k == 17 then
            tipJokerNum = tipJokerNum + v
        end
    end
    print('hcc>>jokerNum: ' .. jokerNum .. ' ,tipJokerNum: ' .. tipJokerNum)
    -- 炸弹提示，不拆4炸
    if jokerNum >= 4 and (tipJokerNum < 4 and tipJokerNum > 0 )then
        return false
    end
    return true,retCount
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
        if hintCard.type >= 10007 then --hcc
            hintCard.needJokerCount = 1
            table.insert(jokerBombtypes,hintCard)
        end
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
                return true , hintCard -- hcc 不能提示三王癞子修改
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

            local num = 0
            for _,ct in pairs(hintCard.count) do
                if ct > 0 then
                    num = num + ct
                end
            end
            hintCard.cardsCount = num
            return success, hintCard
        end           
    end

    return success
end

function HintCard.CanOneHandOut(cards,jokerData,canWithExcess)--zxb
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
    local loopTimes = 17
    if HintCard.m_IsConformCardsType == HintCard.IsConformCardsTypeDaTong then
        loopTimes = 15
    end
    for i = 3,loopTimes do
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
    if MyCardsType._gametype~=9 and jokerType ~= nil and #cardsPower == 0 then
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
    
    if MyCardsType._canMixCards and MyCardsType._canMixCards==1 then
        local cardSum ,cardKind=0,0
        for k,v in pairs(cards) do
            if v~=0 then
                cardSum = cardSum+ v
                cardKind = cardKind + 1
            end
        end
    end

    return false
end
--跟牌
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
        
        if cardType.type<320 then
            for k = cardType.startPower-mContinuous+2 ,17 do --for k=3,17 do
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
        end
        --zxb
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
    --hcc
    if jokerType ~= nil then
        if HintCard.GetCardXianBtType(jokerType.type) > preOutXian then
            if CompareCardType(jokerType,cardType) == compareResult.biger then
                needJokerHintCardsBomb[jokerType.needJokerCount] = needJokerHintCardsBomb[jokerType.needJokerCount] or {}
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

    if HintCard.m_IsConformCardsType == HintCard.IsConformCardsTypeDaTong then
        if #needJokerHintCardsBomb == 0 and needJokerHintCardsBomb[0] then
            for j = 1,#needJokerHintCardsBomb[0] do
                if needJokerHintCardsBomb[0][j]["type"] ~= 10006 then
                    FindHintCards(needJokerHintCardsBomb[0][j])
                end
            end
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

function HintCard.MyCardsType2CardType(MyCardsType)
    local cardType = {}
    cardType.startPower = MyCardsType._cards[#MyCardsType._cards][1]:GetReplacePower()  
    cardType.type = MyCardsType:GetCardsTypeEnum()
    cardType.loop = MyCardsType:IsLoopCardsType()
    cardType.cardsCount =  MyCardsType:getCardsCountAll()
    if #MyCardsType._cards[1]==3 and #MyCardsType._cards[#MyCardsType._cards]==2 then
        cardType.startPower = MyCardsType._cards[1][1]:GetReplacePower() 
    end
    
    return cardType
end
--首出
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
    -- 找1连
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
    --
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
    
    if MyCardsType._canMixCards and MyCardsType._canMixCards==1 then
        local cardSum ,cardKind=0,0
        for k,v in pairs(cards) do
            if v~=0 then
                cardSum = cardSum+ v
                cardKind = cardKind + 1
            end
        end
        cardSum = cardSum + jokerCount
    end

    local time3 = socket.gettime()
    -- >400
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
    --找王搭 TODO
    --[[
    local jokerNotBombType = HintCard.GetJokerNotBombType(cards,jokerData)
    if #jokerNotBombType > 0 then
        for i = 1,#jokerNotBombType do
            FindHintCards(jokerNotBombType[i])
        end
    end
    ]]
    -- 找王炸
    local jokerType = HintCard.GetJokerType(cards,jokerData)
    if jokerType ~= nil then
        FindHintCards(jokerType)
    end

    local time4 = socket.gettime()
    print("gethintcartfirst cost time1 " ..time2 - time1) 
    print("gethintcartfirst cost time2 " ..time3 - time2) 
    print("gethintcartfirst cost time3 " ..time4 - time3)   
end

return HintCard