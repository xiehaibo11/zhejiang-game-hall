local CURRENT_MOUDLE_NAME = ...

local MyCardsTypeBase = import("..GameAlgorithm.MyCardsType",CURRENT_MOUDLE_NAME)
local MyCardsType = class("MyCardsType",MyCardsTypeBase)
local MyCard = import("..GameAlgorithm.MyCard",CURRENT_MOUDLE_NAME)

MyCardsType._canMixCards = 1 --是否可以飞机带连对

MyCardsType.CardsType =
    {
        CT_0_JUNKO_0_CONTINUOUS = 0,

        CT_1_JUNKO_0_CONTINUOUS = 100,
        CT_1_JUNKO_1_CONTINUOUS = 101, --一张，即1顺1连
        CT_1_JUNKO_5_CONTINUOUS = 105, --一张，即1顺5连   34567
        CT_1_JUNKO_6_CONTINUOUS = 106,
        CT_1_JUNKO_7_CONTINUOUS = 107,
        CT_1_JUNKO_8_CONTINUOUS = 108,
        CT_1_JUNKO_9_CONTINUOUS = 109,
        CT_1_JUNKO_10_CONTINUOUS = 110,
        CT_1_JUNKO_11_CONTINUOUS = 111,
        CT_1_JUNKO_12_CONTINUOUS = 112,

        CT_2_JUNKO_1_CONTINUOUS = 201,
        CT_2_JUNKO_2_CONTINUOUS = 202,
        CT_2_JUNKO_3_CONTINUOUS = 203, 
        CT_2_JUNKO_4_CONTINUOUS = 204,
        CT_2_JUNKO_5_CONTINUOUS = 205,
        CT_2_JUNKO_6_CONTINUOUS = 206,
        CT_2_JUNKO_7_CONTINUOUS = 207,
        CT_2_JUNKO_8_CONTINUOUS = 208,
        CT_2_JUNKO_9_CONTINUOUS = 209,
        CT_2_JUNKO_10_CONTINUOUS = 210,
        CT_2_JUNKO_11_CONTINUOUS = 211,
        CT_2_JUNKO_12_CONTINUOUS = 212,

        CT_3_JUNKO_1_CONTINUOUS = 301,
        CT_3_JUNKO_2_CONTINUOUS = 302,
        CT_3_JUNKO_3_CONTINUOUS = 303,
        CT_3_JUNKO_4_CONTINUOUS = 304,
        CT_3_JUNKO_5_CONTINUOUS = 305,
        CT_3_JUNKO_6_CONTINUOUS = 306,
        CT_3_JUNKO_7_CONTINUOUS = 307,
        CT_3_JUNKO_8_CONTINUOUS = 308,

        FEIJIDAILIANDUI_1_CONTINUOUS = 321, -- 333 55, 三代二
        FEIJIDAILIANDUI_2_CONTINUOUS = 322, -- 333444 5566, 三连张带连对
        FEIJIDAILIANDUI_3_CONTINUOUS = 323, -- 333444555 667788, 飞机带连对
        FEIJIDAILIANDUI_4_CONTINUOUS = 324, -- 333444555666 778899
        FEIJIDAILIANDUI_5_CONTINUOUS = 325, -- 333444555666777 8899OOJJQQ

        --4顺开始都是炸弹
        CT_4_JUNKO_0_CONTINUOUS = 400,
        CT_4_JUNKO_1_CONTINUOUS = 401,
        CT_4_JUNKO_2_CONTINUOUS = 402,  
        CT_4_JUNKO_3_CONTINUOUS = 403,
        CT_4_JUNKO_4_CONTINUOUS = 404,
        CT_4_JUNKO_5_CONTINUOUS = 405,
        CT_4_JUNKO_6_CONTINUOUS = 406,


        CT_5_JUNKO_1_CONTINUOUS = 501,
        CT_5_JUNKO_2_CONTINUOUS = 502,
        CT_5_JUNKO_3_CONTINUOUS = 503,
        CT_5_JUNKO_4_CONTINUOUS = 504,
        CT_5_JUNKO_5_CONTINUOUS = 505,


        CT_6_JUNKO_1_CONTINUOUS = 601,
        CT_6_JUNKO_2_CONTINUOUS = 602,
        CT_6_JUNKO_3_CONTINUOUS = 603,
        CT_6_JUNKO_4_CONTINUOUS = 604,


        CT_7_JUNKO_1_CONTINUOUS = 701,
        CT_7_JUNKO_2_CONTINUOUS = 702,
        CT_7_JUNKO_3_CONTINUOUS = 703,


        CT_8_JUNKO_1_CONTINUOUS = 801,
        CT_8_JUNKO_2_CONTINUOUS = 802,
        CT_8_JUNKO_3_CONTINUOUS = 803,

        CT_9_JUNKO_1_CONTINUOUS = 901,
        CT_9_JUNKO_2_CONTINUOUS = 902,
        CT_9_JUNKO_3_CONTINUOUS = 903,

        CT_10_JUNKO_1_CONTINUOUS = 1001,
        CT_10_JUNKO_2_CONTINUOUS = 1002,

        CT_11_JUNKO_1_CONTINUOUS = 1101,
        CT_11_JUNKO_2_CONTINUOUS = 1102,

        CT_12_JUNKO_1_CONTINUOUS = 1201,
        CT_12_JUNKO_2_CONTINUOUS = 1202,

        CT_0_KING = 10000,
        CT_3_KING = 10006,--三个王
        CT_4_KING = 10007,
    }


function MyCardsType:MoreThanSecordCardsType(objCard)
    local selfCardsTypeValue = self:GetCardsTypeEnum()
    local objCardsTypeValue = objCard:GetCardsTypeEnum()
    if selfCardsTypeValue == MyCardsType.CardsType.CT_0_JUNKO_0_CONTINUOUS then
        if objCardsTypeValue ~= MyCardsType.CardsType.CT_0_JUNKO_0_CONTINUOUS then
            return MyCardsType.CompareResult.CR_LESS_THAN
        else
            return MyCardsType.CompareResult.CR_UNABLE_COMPARE
        end
    else
        if objCardsTypeValue == MyCardsType.CardsType.CT_0_JUNKO_0_CONTINUOUS then
            return MyCardsType.CompareResult.CR_MORE_THAN
        end    
    end

    if selfCardsTypeValue < MyCardsType.CardsType.CT_4_JUNKO_0_CONTINUOUS then
        if objCardsTypeValue < MyCardsType.CardsType.CT_4_JUNKO_0_CONTINUOUS then
            if selfCardsTypeValue == objCardsTypeValue then
                local result = self:MoreThanSecordWithSameCardsType(objCard) and MyCardsType.CompareResult.CR_MORE_THAN or MyCardsType.CompareResult.CR_LESS_THAN       
                return result
            else
                return MyCardsType.CompareResult.CR_UNABLE_COMPARE
            end
        else
            return MyCardsType.CompareResult.CR_LESS_THAN
        end
    elseif selfCardsTypeValue >= MyCardsType.CardsType.CT_4_JUNKO_0_CONTINUOUS and selfCardsTypeValue < MyCardsType.CardsType.CT_0_KING then
        if objCardsTypeValue < MyCardsType.CardsType.CT_4_JUNKO_0_CONTINUOUS then
            return MyCardsType.CompareResult.CR_MORE_THAN
        elseif objCardsTypeValue >= MyCardsType.CardsType.CT_4_JUNKO_0_CONTINUOUS and objCardsTypeValue < MyCardsType.CardsType.CT_0_KING then
            local objJunko = objCardsTypeValue / MyCardsType.CardsType.CT_1_JUNKO_0_CONTINUOUS
            local objContinuous = objCardsTypeValue % MyCardsType.CardsType.CT_1_JUNKO_0_CONTINUOUS
            objContinuous = objContinuous == 1 and 0 or objContinuous

            local selfJunko = selfCardsTypeValue / MyCardsType.CardsType.CT_1_JUNKO_0_CONTINUOUS
            local selfContinuous = selfCardsTypeValue % MyCardsType.CardsType.CT_1_JUNKO_0_CONTINUOUS
            selfContinuous = selfContinuous == 1 and 0 or selfContinuous

            if objJunko + objContinuous == selfJunko + selfContinuous then
                if objJunko == selfJunko and objContinuous == selfContinuous then
                    local result = self:MoreThanSecordWithSameCardsType(objCard) and MyCardsType.CompareResult.CR_MORE_THAN or MyCardsType.CompareResult.CR_LESS_THAN
                    return result
                else

                    return MyCardsType.CompareResult.CR_UNABLE_COMPARE
                end  
            else
                local result = selfJunko + selfContinuous > objJunko + objContinuous and MyCardsType.CompareResult.CR_MORE_THAN or MyCardsType.CompareResult.CR_LESS_THAN
                return result
            end
        else

            local selfJunko = selfCardsTypeValue / MyCardsType.CardsType.CT_1_JUNKO_0_CONTINUOUS
            local selfContinuous = selfCardsTypeValue % MyCardsType.CardsType.CT_1_JUNKO_0_CONTINUOUS
            selfContinuous = selfContinuous == 1 and 0 or selfContinuous

            local objSize = objCardsTypeValue % MyCardsType.CardsType.CT_0_KING
            local result = selfJunko + selfContinuous >= objSize and MyCardsType.CompareResult.CR_MORE_THAN or MyCardsType.CompareResult.CR_LESS_THAN
            return result
        end
    else
        if objCardsTypeValue < MyCardsType.CardsType.CT_4_JUNKO_0_CONTINUOUS then
            return MyCardsType.CompareResult.CR_MORE_THAN
        elseif objCardsTypeValue >= MyCardsType.CardsType.CT_4_JUNKO_0_CONTINUOUS and objCardsTypeValue < MyCardsType.CardsType.CT_0_KING then
            local objJunko = objCardsTypeValue / MyCardsType.CardsType.CT_1_JUNKO_0_CONTINUOUS
            local objContinuous = objCardsTypeValue % MyCardsType.CardsType.CT_1_JUNKO_0_CONTINUOUS
            objContinuous = objContinuous == 1 and 0 or MyCardsType.CardsType.objContinuous

            local selfSize = selfCardsTypeValue % MyCardsType.CardsType.CT_0_KING
            local result = objJunko + objContinuous >= selfSize and MyCardsType.CompareResult.CR_LESS_THAN or MyCardsType.CompareResult.CR_MORE_THAN
            return result
        else
            local result = objCardsTypeValue > selfCardsTypeValue and MyCardsType.CompareResult.CR_MORE_THAN or MyCardsType.CompareResult.CR_LESS_THAN
            return result
        end
    end
    return MyCardsType.CompareResult.CR_UNABLE_COMPARE
end

function MyCardsType.MoreThanBoomXunWithNoXunHangZhou(firstTypeEnum,secondTypeEnum)
    local objJunko = secondTypeEnum / MyCardsType.CardsType.CT_1_JUNKO_0_CONTINUOUS
    local objContinuous = secondTypeEnum % MyCardsType.CardsType.CT_1_JUNKO_0_CONTINUOUS

    local selfJunko = firstTypeEnum / MyCardsType.CardsType.CT_1_JUNKO_0_CONTINUOUS
    local selfContinuous = firstTypeEnum % MyCardsType.CardsType.CT_1_JUNKO_0_CONTINUOUS

    if selfJunko * selfContinuous > objJunko * objContinuous then
        return MyCardsType.CardsType.CR_MORE_THAN
    else
        return MyCardsType.CardsType.CR_LESS_THAN
    end
end

function MyCardsType.GetRemoveCardsFromNormalCards(nomalCards,removeCards,power,count)
    local count_index = 0;
    for i = #nomalCards,1,-1 do
        if nomalCards[i]:GetPower() == power then
            table.insert(removeCards,nomalCards[i])
            table.remove(nomalCards,i)
            count_index = count_index + 1
            if count_index == count then
                break
            end
        end
    end
end

function MyCardsType.GetRemoveCardsFromJokerCards(jokerCards,removeCards,count)
    local count_index = 0;
    for i = #jokerCards,1,-1 do
        table.insert(removeCards,jokerCards[i])
        table.remove(jokerCards,i)
        count_index = count_index + 1
        if count_index == count then
            break
        end
    end
end

function MyCardsType.GetCardsTypeComb(inCards,inJokerData,outCardsType,canWithExcess)
    canWithExcess = canWithExcess or {false}
    if type(canWithExcess) ~= 'table' and canWithExcess == true then
        canWithExcess = {true}
    end
    local nomalCards,jokerCards = MyCard.CaiShenFenLi(inCards,inJokerData)
    -- 错误处理 error 总有一个是number类型的错误
    for i = #nomalCards , 1 , -1 do
        if type(nomalCards[i]) ~= 'table' then
            table.remove(nomalCards,i)
        end
    end

    local nomalCardstemp,jokerCardstemp = clone(nomalCards),clone(jokerCards)

    local retNKing,outCardsType = MyCardsType.GetNKingCardsType(nomalCards, jokerCards, outCardsType)
    local retNJunko,outCardsType = MyCardsType.GetNJunkoCardsType(nomalCards, jokerCards, outCardsType, canWithExcess)
    local result = retNKing or retNJunko

    local nType = {}
    for i = 1,#outCardsType do
        local ret = outCardsType[i]:GetCardsTypeEnum();
        table.insert(nType,ret)
    end
    
    return outCardsType , nType
end

function MyCardsType:GetCardsTypeEnum()  
    local mContinuous = #self._cards -- 连
    if mContinuous == 0 then
        return MyCardsType.CardsType.CT_0_JUNKO_0_CONTINUOUS
    end
    local nJunko = #self._cards[1] --顺
    if nJunko == 0 then
        return 0
    end
    for i = 1,mContinuous do
        local tmpNjunko = #self._cards[i]
        if tmpNjunko > nJunko then
            nJunko = tmpNjunko --找出最大的顺
        end
    end
    
    -- 炸弹以上，顺数按照最小顺开始计算
    if nJunko >= 4 then
        for j = 1 , mContinuous do
            local minNjunko = #self._cards[j]
            if minNjunko < nJunko then
                nJunko = minNjunko
            end
        end
    end

    if mContinuous == 1 then
        if self._cards[1][1]:GetReplacePower() == MyCard.CardPower.CP_SJ or 
            self._cards[1][1]:GetReplacePower() == MyCard.CardPower.CP_BJ then
            if nJunko > 2 then
                return MyCardsType.CardsType.CT_3_KING + nJunko - 3
            else
                return MyCardsType.CardsType.CT_1_JUNKO_0_CONTINUOUS * nJunko + 1 
            end
        end
    end

    local totalNum  = 0
    local haveDuizi = false
    for i = 1 , mContinuous do
        local con = self._cards[i]
        if #con == 2 then 
            haveDuizi = true 
        end
        for j = 1 , #con do
            totalNum = totalNum + 1
        end
    end

    if nJunko == 3 and  haveDuizi and totalNum%5 == 0 then
        return 3* MyCardsType.CardsType.CT_1_JUNKO_0_CONTINUOUS + 2*10 + mContinuous/2
    end

    if nJunko == 3 and  haveDuizi and totalNum%5 ~= 0 then
        return nil
    end

    if nJunko > 3 and haveDuizi then
        return nil
    end

    return nJunko * MyCardsType.CardsType.CT_1_JUNKO_0_CONTINUOUS + mContinuous;
end

function MyCardsType.GetNKingCardsType(normalCards, jokerCards, retCardsType)
    local jokInNormalCards = {}
    local tbtype = type(normalCards)
    for i = 1,#normalCards do
        local t = type(normalCards[i])
        if t == 'table' then
            if normalCards[i]:GetPower() ~= MyCard.CardPower.CP_SJ and
                normalCards[i]:GetPower() ~= MyCard.CardPower.CP_BJ then
                return false, retCardsType
            else
                jokInNormalCards[normalCards[i]:GetPower()] = jokInNormalCards[normalCards[i]:GetPower()] or 0
                jokInNormalCards[normalCards[i]:GetPower()] = jokInNormalCards[normalCards[i]:GetPower()] + 1
            end
        end
    end

    if jokInNormalCards[MyCard.CardPower.CP_SJ] and jokInNormalCards[MyCard.CardPower.CP_BJ] then
        if #normalCards < 4 then
            return false, retCardsType
        end
    end
    --大小王不能成对
    if #normalCards == 0 then
        if #jokerCards == 2 then
            if jokerCards[1]:GetPower() ~= jokerCards[2]:GetPower() then
                return false, retCardsType
            end
        elseif #jokerCards == 3 then
            return false, retCardsType
        end
    end

    local tmpCardsType = MyCardsType.new()
    tmpCardsType._cards = {}
    table.insert(tmpCardsType._cards,clone(normalCards))
    MyCard.SortByPower(tmpCardsType._cards[1],true)

    local replacePower = MyCard.CardPower.CP_NONE1
    if #normalCards == 0 then
        local maxReplacePower = MyCard.CardPower.CP_NONE1
        for i = 1,#jokerCards do
            if jokerCards[i]:GetPower() > maxReplacePower then
                maxReplacePower = jokerCards[i]:GetPower()
            end
            replacePower = maxReplacePower
        end
    else
        replacePower = normalCards[1]:GetPower()
    end

    for i = 1,#jokerCards do
        jokerCards[i]:SetReplacePower(replacePower)
        table.insert(tmpCardsType._cards[1],jokerCards[i])
    end

    table.insert(retCardsType,tmpCardsType)
    return true, retCardsType
end

MyCardsType.m_IsConformCardsType = function(...)
    return MyCardsType.IsConformCardsTypeDaTong(...)
end

--是否符合牌型，函数中自己定义所需的牌型
--[[
nJunko 顺
mContinuous 连
返回      false 没找到牌型
         true 找到了牌型
]]
function MyCardsType.IsConformCardsTypeDaTong(nJunko,mContinuous,canWithExcess)
    canWithExcess[1] = false
    if mContinuous > 1 then
        return false
    else
        return true
    end
end

--[[
    true 没找到牌型，继续找
    false 找到了牌型，不再找了
]]
function MyCardsType.TestMContinuousNJunko(finishCardsType, jokerCards, nJunko, mContinuous, retCardsType, canWithExcess)
    local finishCardsType = clone(finishCardsType)
    local jokerCards = clone(jokerCards)
    local retConform = MyCardsType.m_IsConformCardsType(nJunko,mContinuous,canWithExcess)
    if retConform == false then
        return true
    end 
    
    if finishCardsType:IsLoop() then --连炸中不带2
        return true
    end

    if mContinuous >= 2 then
        return true
    end
    
    if finishCardsType:IsLoop() and nJunko < 4 then
        return true
    end

    if mContinuous == 2 and nJunko == 4 then
        return true
    end

    while #finishCardsType._cards < mContinuous do
        if #jokerCards ~= 0 then
            local biggestPower = finishCardsType._cards[#finishCardsType._cards][1]:GetReplacePower()
            local biggestNextPower = MyCard.GetNextPowerByCurrentPower(biggestPower, true)
            if biggestPower == MyCard.CardPower.CP_NONE1 then
                return false
            end

            if biggestPower == MyCard.CardPower.CP_2 then
                local leastPower = finishCardsType._cards[1][1]:GetReplacePower()
                local leastPrePower = MyCard.GetPrePowerByCurrentPower(leastPower,nJunko >= 4)
                if leastPrePower == MyCard.CardPower.CP_NONE1 then
                    return true
                end
                jokerCards[#jokerCards]:SetReplacePower(leastPrePower)
            else
                jokerCards[#jokerCards]:SetReplacePower(biggestNextPower)
            end
            local insertCards = {}
            table.insert(insertCards,jokerCards[#jokerCards])
            table.remove(jokerCards,#jokerCards)
            local index = biggestNextPower == MyCard.CardPower.CP_2 and 1 or #finishCardsType._cards + 1
            table.insert(finishCardsType._cards,index,insertCards)
        else
            return false
        end
    end

    for i = 1,#finishCardsType._cards do
        if not canWithExcess[1] then
            if #finishCardsType._cards[i] > nJunko then
                return
            end
        end

        while #finishCardsType._cards[i] < nJunko do
            if #jokerCards ~= 0 then
                jokerCards[#jokerCards]:SetReplacePower(finishCardsType._cards[i][1]:GetReplacePower())
                table.insert(finishCardsType._cards[i],jokerCards[#jokerCards])
                jokerCards[#jokerCards] = nil                      
            else
                return false
            end
        end
    end

    if #jokerCards == 0 then
        table.insert(retCardsType,finishCardsType)
    else
        --如果是可以带牌的话，把多余的财神都放到线数最大的里面去
        if canWithExcess[1] and mContinuous > 1 then
            local maxCountIndex = 0
            local maxCount = 0
            for i = 1,#finishCardsType._cards do
                if #finishCardsType._cards[i] > maxCount then
                    maxCount = #finishCardsType._cards[i]
                    maxCountIndex = i
                end
            end
            for i = 1,#jokerCards do
                jokerCards[i]:SetReplacePower(finishCardsType._cards[maxCountIndex][1]:GetReplacePower())
                table.insert(finishCardsType._cards[maxCountIndex],jokerCards[i])
            end
            table.insert(retCardsType,finishCardsType)         
        end
    end
    return true
end

function MyCardsType.GetNJunkoCardsType(normalCards, jokerCards, retCardsType, canWithExcess)
    local finishCardsType = MyCardsType.new()
    --只用能组成第一个顺子的就可以，因为千变中不可能有这种组合即符合3-10的连炸又符合10-3的连炸
    if MyCardsType.MakeFirstConsequentJunko(normalCards, jokerCards, finishCardsType) == false then
        return false, retCardsType
    end

    local startNJunko = 0

    if canWithExcess[1] then
        local minCount = 0xFF
        for i = 1,#finishCardsType._cards do
            if minCount > #finishCardsType._cards[i] then
                minCount = #finishCardsType._cards[i]
            end
        end
        startNJunko = minCount
    else     
        local maxCount = 0
        for i = 1,#finishCardsType._cards do
            if maxCount < #finishCardsType._cards[i] then
                maxCount = #finishCardsType._cards[i]
            end
        end
        startNJunko = maxCount
    end

    local startMContinuous = #finishCardsType._cards 
    for i = 0,#jokerCards  do
        for j = 0,#jokerCards  - i  do
            local canDaiPai = clone(canWithExcess)
            local result = MyCardsType.TestMContinuousNJunko(finishCardsType,jokerCards,startNJunko + i,startMContinuous + j,retCardsType,canDaiPai)
            if result == false then
                break
            end
        end
    end

    return #retCardsType > 0, retCardsType
end

-- 此牌型中所有牌的数量
function MyCardsType:getCardsCountAll()
    local num = 0
    for i = 1 , #self._cards do
        for j = 1 , #self._cards[i] do
            num = num + 1
        end
    end
    return num
end

return MyCardsTypeP