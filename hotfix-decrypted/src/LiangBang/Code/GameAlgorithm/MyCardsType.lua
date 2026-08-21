local CURRENT_MOUDLE_NAME = ...
local MyCardsType = class("MyCardsType")
local MyCard = import(".MyCard",CURRENT_MOUDLE_NAME)

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
        CT_2_JUNKO_1_CONTINUOUS = 202,
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
        CT_3_JUNKO_3_CONTINUOUS = 303,
        CT_3_JUNKO_4_CONTINUOUS = 304,
        CT_3_JUNKO_5_CONTINUOUS = 305,
        CT_3_JUNKO_6_CONTINUOUS = 306,
        CT_3_JUNKO_7_CONTINUOUS = 307,
        CT_3_JUNKO_8_CONTINUOUS = 308,

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

MyCardsType.CardsTypeForClassical = {
    CTID_NONE        = 0,    --无
    CTID_YI_ZHANG    = 1,    --单张
    CTID_ER_ZHANG    = 2,    --对子
    CTID_SAN_ZHANG   = 3,    --三张
    CTID_SI_ZHANG    = 4,    --四张
    CTID_WU_ZHANG    = 5,    --五张
    CTID_LIU_ZHANG   = 6,    --六张
    CTID_QI_ZHANG    = 7,    --七张
    CTID_BA_ZHANG    = 8,    --八张
    CTID_YI_SHUN    = 9,     --单顺
    CTID_ER_SHUN    = 10,     --双顺
    CTID_SAN_SHUN   = 11,     --三顺
    CTID_SI_SHUN    = 12,     --四顺
    CTID_WU_SHUN    = 13,     --五顺
    CTID_LIU_SHUN   = 14,     --六顺
    CTID_QI_SHUN    = 15,     --七顺
    CTID_BA_SHUN    = 16,     --八顺
    CTID_HUO_JIAN   = 17,     --火箭
    CTID_FEI_JI     = 18,    --飞机带翅膀
    CTID_SAN_DAI_YI = 19,    --三带一
    CTID_SI_DAI_ER  = 20,    --四带二

    CTID_COUNT      = 21,
    CTID_USER       = 100,  --用户自定义番种
    CTID_TIAN_WANG  = 102   --天王炸弹
}

function MyCardsType:ctor()
    self._cards = {}
end


function MyCardsType:GetCardsTypeEnum()  
    local mContinuous = #self._cards
    if mContinuous == 0 then
        return MyCardsType.CardsType.CT_0_JUNKO_0_CONTINUOUS
    end
    local nJunko = #self._cards[1]
    if nJunko == 0 then
        return 0
    end
    for i = 1,mContinuous do
        if nJunko > #self._cards[i] then
            nJunko = #self._cards[i]
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

    return nJunko * MyCardsType.CardsType.CT_1_JUNKO_0_CONTINUOUS + mContinuous;
end

function MyCardsType:GetCardsTypeEnumNeedSort(needSortByFrist)
    if needSortByFrist then
        MyCardsType.SortCardsCombByFirstPower(self._cards, true)
    end
    return self:GetCardsTypeEnum()
end



MyCardsType.CompareResult = 
    {
        CR_UNABLE_COMPARE = 0,--不可比较
        CR_EQUAL = 1,             --牌型匹配
        CR_MORE_THAN = 2,         --牌型大
        CR_LESS_THAN = 3         --牌型小 
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

function MyCardsType:MoreThanSecordWithSameCardsType(objCard)
    local isSelfLoop = self:IsLoopCardsType()
    local isObjLoop = objCard:IsLoopCardsType()
    if isSelfLoop == isObjLoop then
        if isSelfLoop then
            local result = self._cards[#self._cards][1]:GetReplacePower() % 14 > objCard._cards[#objCard._cards][1]:GetReplacePower() % 14
            return result
        else
            local result = self._cards[#self._cards][1]:GetReplacePower() > objCard._cards[#objCard._cards][1]:GetReplacePower()
            return result
        end
    elseif isSelfLoop == true and isObjLoop == false then
        return false
    else
        return true
    end
end

MyCardsType.m_MoreThanBoomXunWithNoXunFun = MyCardsType.m_MoreThanBoomXunWithNoXunFun or function(...)
    return MyCardsType.MoreThanBoomXunWithNoXunQianBian(...)
end

--是否符合牌型，函数中自己定义所需的牌型
function MyCardsType.MoreThanBoomXunWithNoXunQianBian(firstTypeEnum,secondTypeEnum)
    return MyCardsType.CompareResult.CR_UNABLE_COMPARE
end

function MyCardsType.MoreThanBoomXunWithNoXunBaiBian(firstTypeEnum,secondTypeEnum)
    return MyCardsType.CompareResult.CR_UNABLE_COMPARE
end

function MyCardsType.MoreThanBoomXunWithNoXunErRen(firstTypeEnum,secondTypeEnum)
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

function MyCardsType:IsLoopCardsType()
    if #self._cards < 2 then
        return false
    end
    local bFind2 = false
    for i = 1,#self._cards do
        if self._cards[i][1]:GetReplacePower() == MyCard.CardPower.CP_2 then
            bFind2 = true
            break
        end
    end

    if not bFind2 then
        return false
    end

    if #self._cards[1] >= 4 then
        return true
    end

    return false
end

function MyCardsType:IsLoop()
    if #self._cards < 2 then
        return false
    end
    for i = 1,#self._cards do
        if self._cards[i][1]:GetReplacePower() == MyCard.CardPower.CP_2 then
            return true
        end  
    end
    return false
end

function MyCardsType.GetCardsTypeComb(inCards,inJokerData,outCardsType,canWithExcess)
    canWithExcess = canWithExcess or {false}

    local nomalCards,jokerCards = MyCard.CaiShenFenLi(inCards,inJokerData)

    local retNKing = MyCardsType.GetNKingCardsType(nomalCards, jokerCards, outCardsType)
    local retNJunko = MyCardsType.GetNJunkoCardsType(nomalCards, jokerCards, outCardsType, canWithExcess)
    local result = retNKing or retNJunko
    return result
end

MyCardsType.m_IsConformCardsType = MyCardsType.m_IsConformCardsType or function(...)
    return MyCardsType.IsConformCardsTypeQianBian(...)
end

--是否符合牌型，函数中自己定义所需的牌型
function MyCardsType.IsConformCardsTypeQianBian(nJunko,mContinuous,canWithExcess)
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

function MyCardsType.IsConformCardsTypeBaiBian(nJunko,mContinuous,canWithExcess)
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

function MyCardsType.IsConformCardsTypeClassical(nJunko,mContinuous,canWithExcess)
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

function MyCardsType.IsConformCardsTypeErRen(nJunko,mContinuous,canWithExcess)
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

function MyCardsType.GetNKingCardsType(normalCards, jokerCards, retCardsType)
    for i = 1,#normalCards do
        if normalCards[i]:GetPower() ~= MyCard.CardPower.CP_SJ and
            normalCards[i]:GetPower() ~= MyCard.CardPower.CP_BJ then
            return false
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
    return true;
end

function MyCardsType.GetNJunkoCardsType(normalCards, jokerCards, retCardsType, canWithExcess)
    local finishCardsType = MyCardsType.new()
    --只用能组成第一个顺子的就可以，因为千变中不可能有这种组合即符合3-10的连炸又符合10-3的连炸
    if MyCardsType.MakeFirstConsequentJunko(normalCards, jokerCards, finishCardsType) == false then
        return false
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

    return #retCardsType > 0
end


function MyCardsType.MakeConsequentJunkoByStartPower(normalCards, jokerCards, startPower, finishCardsType)
    while true do
        if startPower == MyCard.CardPower.CP_NONE1 then
            return false
        end
        local retRemoveNormalCards = {}
        if MyCard.GetCardsByPowerWithRemove(normalCards,startPower,retRemoveNormalCards) then

        else
            if #jokerCards ~= 0 then
                jokerCards[1]:SetReplacePower(startPower)
                table.insert(retRemoveNormalCards,jokerCards[1])
                table.remove(jokerCards,1)
            else
                return false
            end
        end

        table.insert(finishCardsType._cards,(retRemoveNormalCards))
        if #normalCards == 0 then
            return true
        end

        startPower = MyCard.GetNextPowerByCurrentPower(startPower, true)
    end    
end

function MyCardsType.MakeFirstConsequentJunko(normalCards, jokerCards, finishCardsType)  
    --例vNormalCards 中有2,7,9的牌，会先从2->9,7->2,9-7的顺序去找，找到第一种直接返回
    if #normalCards == 0 then
        return false
    end

    --从小到大排序，确保是正序顺子优先
    MyCard.SortByPower(normalCards,true)

    --合法性判断
    if normalCards[#normalCards]:GetPower() < MyCard.CardPower.CP_3 or normalCards[#normalCards]:GetPower() > MyCard.CardPower.CP_2 then    
        return false
    end 

    if normalCards[1]:GetPower() < MyCard.CardPower.CP_3 or normalCards[1]:GetPower() > MyCard.CardPower.CP_2 then    
        return false
    end

    MyCard.SortByPower(jokerCards)

    --找出第一个连续的顺子   
    local startPower = MyCard.CardPower.CP_NONE1
    for i = 1,#normalCards do
        if startPower == normalCards[i]:GetPower() then

        else
            startPower = normalCards[i]:GetPower()

            --填充牌型,只要有一种成功就返回
            local tempNormalCards = clone(normalCards)
            local tempJokerCards = clone(jokerCards)
            local tempCardsType = MyCardsType.new()
            local makeFinish = MyCardsType.MakeConsequentJunkoByStartPower(tempNormalCards,tempJokerCards,startPower,tempCardsType)
            if makeFinish then
                for i = #normalCards,1,-1 do
                    table.remove(normalCards,i)
                end
                for i = 1,#tempNormalCards do
                    table.insert(normalCards,tempNormalCards[i])
                end
                for i = #jokerCards,1,-1 do
                    table.remove(jokerCards,i)
                end
                for i = 1,#tempJokerCards do
                    table.insert(jokerCards,tempJokerCards[i])
                end
                finishCardsType._cards = clone(tempCardsType._cards)

                return true
            end
        end   
    end

    return false
end 

function MyCardsType.LessSecordForSortByFirstPower(cards1,cards2)
    if #cards1 == 0 then
        return false
    end

    if #cards2 == 0 then
        return true
    end

    if cards1[1]:GetPower() < cards1[2]:GetPower() then
        return true
    elseif cards1[1]:GetPower() == cards1[2]:GetPower() then
        if cards1[1]:GetColor() < cards2[1]:GetColor() then
            return true
        else
            return false
        end
    else
        return false   
    end
end

function MyCardsType.SortCardsCombByFirstPower(cardsComb,smallToBig)
    smallToBig = smallToBig or false

    table.sort(cardsComb,MyCardsType.LessSecordForSortByFirstPower)

    if not smallToBig then
        local tmpCardsComb = {}
        for i = #cardsComb,1,-1 do
            table.insert(tmpCardsComb,cardsComb[i])
        end
        cardsComb = tmpCardsComb
    end
end

function MyCardsType.TestMContinuousNJunko(finishCardsType, jokerCards, nJunko, mContinuous, retCardsType, canWithExcess)
    local finishCardsType = clone(finishCardsType)
    local jokerCards = clone(jokerCards)
    local retConform = MyCardsType.m_IsConformCardsType(nJunko,mContinuous,canWithExcess)
    if retConform == false then
        return true
    end 
    if finishCardsType:IsLoop() and nJunko < 4 then
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

function MyCardsType:FindMContinuousNJunko(normalCards, jokerCards, nJunko, mContinuous, retCardsTypes)
    MyCard.SortByPower(normalCards, true)
    local currentPower = MyCard.CardPower.CP_NONE1
    local find = false
    for i = 1,#normalCards do
        if currentPower ~= normalCards[i]:GetPower() then
            local retType = MyCardsType.new()
            if MyCardsType.FindMContinuousNJunkoByPower(normalCards,jokerCards,nJunko,mContinuous,currentPower,retType) then
                table.insert(retCardsTypes,retType)
                find = true
            end
        end
    end

    if find then
        return true
    else
        return false
    end
end

function MyCardsType.FindMContinuousNJunkoByPower(normalCards, jokerCards, nJunko, mContinuous, power, retCardsType)
    local needPower = power
    for j = 1,mContinuous do 
        if needPower ~= MyCard.CardPower.CP_NONE1 then
            local retCards = {}

            if MyCard.FindPowerCardsByCount(normalCards, needPower, nJunko, retCards) < nJunko then

                local currentCount = #retCards
                for i = currentCount,nJunko do
                    if #jokerCards == 0 then
                        return false
                    else
                        jokerCards[#jokerCards]:SetReplacePower(needPower)
                        table.insert(retCards,jokerCards[#jokerCards])
                        jokerCards[#jokerCards] = nil
                    end
                end   
            end

            table.insert(retCardsType._cards,retCards)
            needPower = MyCard.GetNextPowerByCurrentPower(needPower, nJunko >= 4)
        else
            return false
        end
    end

    return true
end

function MyCardsType.TransformCardType(classicalType , count)
    local realCardType = 0
    if classicalType == MyCardsType.CardsTypeForClassical.CTID_NONE then
        realCardType = MyCardsType.CardsType.CT_0_JUNKO_0_CONTINUOUS 
    elseif classicalType == MyCardsType.CardsTypeForClassical.CTID_YI_ZHANG or classicalType == MyCardsType.CardsTypeForClassical.CTID_YI_SHUN then
        realCardType = MyCardsType.CardsType.CT_1_JUNKO_0_CONTINUOUS + count
    elseif classicalType == MyCardsType.CardsTypeForClassical.CTID_ER_ZHANG or classicalType == MyCardsType.CardsTypeForClassical.CTID_ER_SHUN then
        realCardType = MyCardsType.CardsType.CT_2_JUNKO_1_CONTINUOUS + count / 2 - 1
    elseif classicalType == MyCardsType.CardsTypeForClassical.CTID_SAN_ZHANG or classicalType == MyCardsType.CardsTypeForClassical.CTID_SAN_SHUN then
        realCardType = MyCardsType.CardsType.CT_3_JUNKO_1_CONTINUOUS + count / 3 - 1
    elseif classicalType == MyCardsType.CardsTypeForClassical.CTID_SI_ZHANG or classicalType == MyCardsType.CardsTypeForClassical.CTID_SI_SHUN then
        realCardType = MyCardsType.CardsType.CT_4_JUNKO_1_CONTINUOUS + count / 4 - 1
    elseif classicalType == MyCardsType.CardsTypeForClassical.CTID_WU_ZHANG or classicalType == MyCardsType.CardsTypeForClassical.CTID_WU_SHUN then
        realCardType = MyCardsType.CardsType.CT_5_JUNKO_1_CONTINUOUS + count / 5 - 1
    elseif classicalType == MyCardsType.CardsTypeForClassical.CTID_LIU_ZHANG or classicalType == MyCardsType.CardsTypeForClassical.CTID_LIU_SHUN then
        realCardType = MyCardsType.CardsType.CT_6_JUNKO_1_CONTINUOUS + count / 6 - 1
    elseif classicalType == MyCardsType.CardsTypeForClassical.CTID_QI_ZHANG or classicalType == MyCardsType.CardsTypeForClassical.CTID_QI_SHUN then
        realCardType = MyCardsType.CardsType.CT_7_JUNKO_1_CONTINUOUS + count / 7 - 1
    elseif classicalType == MyCardsType.CardsTypeForClassical.CTID_BA_ZHANG or classicalType == MyCardsType.CardsTypeForClassical.CTID_BA_SHUN then
        realCardType = MyCardsType.CardsType.CT_8_JUNKO_1_CONTINUOUS + count / 8 - 1
    elseif classicalType == MyCardsType.CardsTypeForClassical.CTID_TIAN_WANG then
        realCardType = MyCardsType.CardsType.CT_4_KING
    end

    return realCardType
end

function MyCardsType.TransformBackCardType(realCardType , count)
    local iClassicalType = 0
    local iType = math.floor(realCardType / MyCardsType.CardsType.CT_1_JUNKO_0_CONTINUOUS)
    if iType == MyCardsType.CardsTypeForClassical.CTID_NONE then
        iClassicalType = MyCardsType.CardsTypeForClassical.CTID_NONE
    elseif iType == MyCardsType.CardsTypeForClassical.CTID_YI_ZHANG then
        iClassicalType = count == 1 and MyCardsType.CardsTypeForClassical.CTID_YI_ZHANG 
            or MyCardsType.CardsTypeForClassical.CTID_YI_SHUN
    elseif iType == MyCardsType.CardsTypeForClassical.CTID_ER_ZHANG then
        iClassicalType = count == 2 and MyCardsType.CardsTypeForClassical.CTID_ER_ZHANG
            or MyCardsType.CardsTypeForClassical.CTID_ER_SHUN
    elseif iType == MyCardsType.CardsTypeForClassical.CTID_SAN_ZHANG then
        iClassicalType = count == 3 and MyCardsType.CardsTypeForClassical.CTID_SAN_ZHANG
            or MyCardsType.CardsTypeForClassical.CTID_SAN_SHUN
    elseif iType == MyCardsType.CardsTypeForClassical.CTID_SI_ZHANG then
        iClassicalType = count == 4 and MyCardsType.CardsTypeForClassical.CTID_SI_ZHANG
            or MyCardsType.CardsTypeForClassical.CTID_SI_SHUN
    elseif iType == MyCardsType.CardsTypeForClassical.CTID_WU_ZHANG then
        iClassicalType = count == 5 and MyCardsType.CardsTypeForClassical.CTID_WU_ZHANG
            or MyCardsType.CardsTypeForClassical.CTID_WU_SHUN
    elseif iType == MyCardsType.CardsTypeForClassical.CTID_LIU_ZHANG then
        iClassicalType = count == 6 and MyCardsType.CardsTypeForClassical.CTID_LIU_ZHANG
            or MyCardsType.CardsTypeForClassical.CTID_LIU_SHUN
    elseif iType == MyCardsType.CardsTypeForClassical.CTID_QI_ZHANG then
        iClassicalType = count == 7 and MyCardsType.CardsTypeForClassical.CTID_QI_ZHANG
            or MyCardsType.CardsTypeForClassical.CTID_QI_SHUN
    elseif iType == MyCardsType.CardsTypeForClassical.CTID_BA_ZHANG then
        iClassicalType = count == 8 and MyCardsType.CardsTypeForClassical.CTID_BA_ZHANG
            or MyCardsType.CardsTypeForClassical.CTID_BA_SHUN
    elseif iType == MyCardsType.CardsTypeForClassical.CTID_USER then
        iClassicalType = MyCardsType.CardsTypeForClassical.CTID_TIAN_WANG
    end

    return iClassicalType
end

return MyCardsType }  