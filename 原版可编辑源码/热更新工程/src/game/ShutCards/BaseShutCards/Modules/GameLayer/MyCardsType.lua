--
--Description: cardsType
--Date: 2019-07-09 09:59:31
--

local MyCardsType = class("MyCardsType")

local CardEnum = CF.gameRequire("Define.CardEnum")
local GameDefine = CF.gameRequire("Define.GameDefine")

function MyCardsType:ctor()
    self._nCardTypeEnum = CardEnum.CARDS_TYPE.CT_0_JUNKO_0_CONTINUOUS
    self._nEndPower = CardEnum.CARD_POWER.POWER_NONE
    self._orderOutCards = {}
end

function MyCardsType:findCardTypeFromCards(vOutCards, bMatchStrict)
    --先判断特殊牌型
    if self:judgeSpecCardType(vOutCards, bMatchStrict) then
        return self._nCardTypeEnum
    end

    for i = 1, #CardEnum.BASE_CARDTYPE do
        --判断是否为该种牌型
        local bSuccess = self:judgeCardType(vOutCards, CardEnum.BASE_CARDTYPE[i], bMatchStrict)
        if bSuccess == true then
            return self._nCardTypeEnum
        end
    end

    return CardEnum.CARDS_TYPE.CT_0_JUNKO_0_CONTINUOUS
end

function MyCardsType:pushCards(cardsMain, cardsPushed, startpos, endpos)
    for i = startpos,endpos do
        table.insert(cardsMain, cardsPushed[i])
    end
    return cardsMain
end

--
--description: 从给的cardBox中获取对应要求牌型的序列
--cardType：需求牌型
--startpos: 起始位置
--bMatchStrict: 匹配模式,true为严格满足带牌张数,false为带牌张数不要求
--Date: 2019-07-09 11:00:35
--
function MyCardsType:getCombFromCardBox(cardBox, cardsType, startPos, bMatchStrict)
    local iMainNum = math.floor(cardsType / GameDefine.KW_MULTIPLE_THOUSAND)       --主牌张数
    local iWithNum = math.floor(cardsType / GameDefine.KW_MULTIPLE_HUNDRED) % GameDefine.KW_MULTIPLE_TEN   --次牌张数
    local CTSize = cardsType % GameDefine.KW_MULTIPLE_HUNDRED                      --序列长度

    local MainComb = {}
    local WithComb = {}
    local nowpos = startPos
    --主牌标记
    local maincardflag = {}
    for t = 1, CardEnum.CARD_POWER.POWER_COUNT do
        maincardflag[t] = 0
    end

    --添加主牌序列
    for _ = 1, CTSize do
        if nowpos == 0 or #cardBox[nowpos] < iMainNum then
            return false,{}
        end
        local tempcards = {}
        tempcards = self:pushCards(tempcards, cardBox[nowpos], 1, iMainNum)
        table.insert(MainComb,tempcards)
        maincardflag[nowpos] = true
        nowpos = self:getNextPower(nowpos, false, true)
    end

    --添加次牌序列
    for t = CardEnum.CARD_POWER.POWER_3, CardEnum.CARD_POWER.POWER_COUNT do
        --主牌剩余牌做次牌
        if maincardflag[t] == true and #cardBox[t] > iMainNum then
            WithComb = self:pushCards(WithComb, cardBox[t], iMainNum + 1, #cardBox[t])
        --次牌
        elseif maincardflag[t] == 0 and #cardBox[t] > 0 then
            WithComb = self:pushCards(WithComb, cardBox[t], 1, #cardBox[t])
        end
    end

    --次牌序列长度不足
    if bMatchStrict == true and #WithComb < iWithNum * CTSize then
        return false,{}
    end

    --存储最终序列
    local cardsComb = {}
    --local excesspos = 1
    for t = 1, #MainComb do
        --主
        cardsComb = self:pushCards(cardsComb, MainComb[t], 1, #MainComb[t])
        --次
        -- local restwith = iWithNum
        -- while excesspos <= #WithComb and restwith > 0 do
        --     table.insert(cardsComb,WithComb[excesspos])
        --     excesspos = excesspos + 1
        --     restwith = restwith - 1
        -- end
        -- TODO why？
    end

    return true, cardsComb
end

function MyCardsType:judgeSpecCardType(checkCards, bMatchStrict)
    local bSuccess = false
    if CardEnum.S_BSPECFCARD3A == true then
        --3A牌型
        bSuccess = self:judgeSpecCardType_3A(checkCards, bMatchStrict)
    end

    return bSuccess
end

function MyCardsType:setCardTypeEnum(iMainNum, iCTSize, iWithNum)
    self._nCardTypeEnum = iMainNum * GameDefine.KW_MULTIPLE_THOUSAND + iWithNum * GameDefine.KW_MULTIPLE_HUNDRED + iCTSize
end

function MyCardsType:judgeSpecCardType_3A(checkCards, bMatchStrict)
    --整理牌组
    local cardBox = {}
    for i = 1, CardEnum.CARD_POWER.POWER_COUNT do
        cardBox[i] = {}
    end
    for i = 1, #checkCards do
        local power = checkCards[i]:getPower()
        table.insert(cardBox[power], checkCards[i])
    end

    if #cardBox[CardEnum.CARD_POWER.POWER_A] ~= 3 then
        return false
    end

    --次牌
    local withComb = {}
    for i = CardEnum.CARD_POWER.POWER_3, CardEnum.CARD_POWER.POWER_COUNT do
        if #cardBox[i] ~= 0 and i ~= CardEnum.CARD_POWER.POWER_A then
            withComb = self:pushCards(withComb, cardBox[i], 1, #cardBox[i])
        end
    end

    local bSuccess = false
    --炸弹
    if #withComb == 1 or (bMatchStrict == false and #withComb == 0) then
        --AAA带1
        self:setCardTypeEnum(4, 1, 1)
        self._nEndPower = CardEnum.CARD_POWER.POWER_A
        bSuccess = true
    end
    --四带三
    if #withComb == 3 or (bMatchStrict == false and #withComb == 2) then
        self:setCardTypeEnum(4, 1, 3)
        self._nEndPower = CardEnum.CARD_POWER.POWER_A
        bSuccess = true
    end

    --记录出牌
    if bSuccess == true then
        self._orderOutCards = {}
        self._orderOutCards = self:pushCards(self._orderOutCards, cardBox[CardEnum.CARD_POWER.POWER_A], 1, #cardBox[CardEnum.CARD_POWER.POWER_A])
        if #withComb > 0 then
            self._orderOutCards = self:pushCards(self._orderOutCards, withComb, 1, #withComb)
        end
    end

    return bSuccess
end

function MyCardsType:getMinCTLength(baseCardType)
    if baseCardType == CardEnum.CARDS_TYPE.CT_1_JUNKO_0_EXCESS_1_CONTINUOUS
        and CF.roomData
        and CF.roomData.isThreeCardStraightRule
        and CF.roomData:isThreeCardStraightRule() then
        return 3
    end

    for i = 1,#CardEnum.BASE_CARDTYPE do
        if CardEnum.BASE_CARDTYPE[i] == baseCardType then
            return CardEnum.MIN_CTLENGTH[i]
        end
    end

    return 999
end

function MyCardsType:judgeCardType(checkCards, baseCardType, bMatchStrict)
    local iMainNum = math.floor(baseCardType / GameDefine.KW_MULTIPLE_THOUSAND)   --主牌张数
    local iWithNum = math.floor(baseCardType / GameDefine.KW_MULTIPLE_HUNDRED) % GameDefine.KW_MULTIPLE_TEN --次牌张数

    local CTLimit = math.floor(#checkCards / (iMainNum + iWithNum)) --理论组合长度
    if bMatchStrict == false and (#checkCards % (iMainNum + iWithNum)) ~= 0 then
        --非严格匹配时,若有余牌则+1,CTLimit代表最低限度
        CTLimit = CTLimit + 1
    end
    local minCTLength = self:getMinCTLength(baseCardType)

    --无法整除则直接返回
    if bMatchStrict == true and #checkCards % (iMainNum + iWithNum) ~= 0 then
        return false
    end

    --序列长度不满足要求
    if bMatchStrict == true and CTLimit ~= 1 and CTLimit < minCTLength then
        return false
    end

    --整理牌组
    local cardBox = {}
    for i = 1, CardEnum.CARD_POWER.POWER_COUNT do
        cardBox[i] = {}
    end
    for i = 1, #checkCards do
        local power = checkCards[i]:getPower()
        table.insert(cardBox[power], checkCards[i])
    end

    --次牌两张时，需要一样(暂时取消)
    local bCommonWith = false --/*iWithNum == 2*/

    --搜寻序列
    for i = CardEnum.CARD_POWER.POWER_3, CardEnum.CARD_POWER.POWER_COUNT do
        if #cardBox[i] >= iMainNum then
            --可做主牌,检测序列可能性
            local nowpos = i
            local ctlength = 0
            --最佳起始位置
            local startpos = i
            local tempstart = i

            while nowpos ~= CardEnum.CARD_POWER.POWER_NONE do
                local rest = #cardBox[nowpos] - iMainNum
                if rest >= 0 then
                    --如果剩余牌数不能做次牌,则该类牌不能做主牌
                    if bCommonWith == true and rest % 2 ~= 0 then
                        break
                    end
                    ctlength = ctlength + 1
                    --避免 333 444 5555 的情况被判断为 333 55 444 55 (最优应是444 35 555 33)
                    if bMatchStrict == true and ctlength > CTLimit then
                        --更新最佳起始位置
                        tempstart = self:getNextPower(tempstart, false, true)
                        if startpos < tempstart then
                            startpos = tempstart
                        end
                    end
                    nowpos = self:getNextPower(nowpos, false, true)
                else
                    break
                end
            end
            --序列长度不够
            if ctlength >= CTLimit and (ctlength == 1 or ctlength >= minCTLength) then
                if bMatchStrict == true then
                    --严格匹配时,长度确定为理论长度
                    ctlength = CTLimit
                end

                local cardsType = baseCardType + ctlength - 1
                local bSuccess, orderOutCards = self:getCombFromCardBox(cardBox, cardsType, startpos, bMatchStrict)
                self._orderOutCards = clone(orderOutCards)
                if bSuccess == true then
                    --方案可行
                    --记录最优末尾牌权值
                    self._nEndPower = MyCardsType:getNextNPower(startpos, ctlength - 1, false, true)
                    self:setCardTypeEnum(iMainNum, CTLimit, iWithNum)
                    return true
                end
            end
        end
    end

    return false
end

function MyCardsType:getPreNPower(curPower, nextN, bLoop)
    bLoop = bLoop or false

    while nextN > 0 do
        if curPower == CardEnum.CARD_POWER.POWER_SJ then
            return CardEnum.CARD_POWER.POWER_NONE
        elseif curPower == CardEnum.CARD_POWER.POWER_BJ then
            return CardEnum.CARD_POWER.POWER_NONE
        elseif curPower == CardEnum.CARD_POWER.POWER_3 then
            if bLoop then
                return CardEnum.CARD_POWER.POWER_2
            else
                return CardEnum.CARD_POWER.POWER_NONE
            end
        else
            curPower = curPower - 1
        end
        nextN = nextN - 1
    end

    return curPower
end

function MyCardsType:getNextNPower(curPower, nextN, bLoop, bJunko)
    bLoop = bLoop or false

    while nextN > 0 do
        if curPower == CardEnum.CARD_POWER.POWER_SJ then
            return CardEnum.CARD_POWER.POWER_NONE
        elseif curPower == CardEnum.CARD_POWER.POWER_BJ then
            return CardEnum.CARD_POWER.POWER_NONE
        elseif bJunko == true and curPower == CardEnum.CARD_POWER.POWER_A and bLoop == false then
            return CardEnum.CARD_POWER.POWER_NONE
        elseif curPower == CardEnum.CARD_POWER.POWER_2 then
            if bLoop then
                return CardEnum.CARD_POWER.POWER_3
            else
                return CardEnum.CARD_POWER.POWER_NONE
            end
        else
            curPower = curPower + 1
        end
        nextN = nextN - 1
    end

    return curPower
end

function MyCardsType:getNextPower(curPower, bLoop, bJunko)
    bLoop = bLoop or false

    if curPower == CardEnum.CARD_POWER.POWER_SJ then
        return CardEnum.CARD_POWER.POWER_NONE
    elseif curPower == CardEnum.CARD_POWER.POWER_BJ then
        return CardEnum.CARD_POWER.POWER_NONE
    elseif bJunko == true and curPower == CardEnum.CARD_POWER.POWER_A and bLoop == false then
        return CardEnum.CARD_POWER.POWER_NONE
    elseif curPower == CardEnum.CARD_POWER.POWER_2 then
        if bLoop then
            return CardEnum.CARD_POWER.POWER_3
        else
            return CardEnum.CARD_POWER.POWER_NONE
        end
    end

    return curPower + 1
end

function MyCardsType:getLengthByCardsType(cardsType)
    local iMainNum = math.floor(cardsType / GameDefine.KW_MULTIPLE_THOUSAND)
    local iWithNum = math.floor(cardsType / GameDefine.KW_MULTIPLE_HUNDRED) % GameDefine.KW_MULTIPLE_TEN
    local iCTSize = cardsType % GameDefine.KW_MULTIPLE_HUNDRED
    return (iMainNum + iWithNum) * iCTSize
end

function MyCardsType:compareCardType(cardsType, bMatchStrict)
    --local iMainNum = math.floor(self._nCardTypeEnum / GameDefine.KW_MULTIPLE_THOUSAND)
    --local iMainNumCompare = math.floor(cardsType._nCardTypeEnum / GameDefine.KW_MULTIPLE_THOUSAND)
    --local iCTSize = self._nCardTypeEnum % GameDefine.KW_MULTIPLE_HUNDRED
    --local iCTSizeCompare = cardsType._nCardTypeEnum % GameDefine.KW_MULTIPLE_HUNDRED
    if self._nCardTypeEnum == cardsType._nCardTypeEnum then
        if self._nEndPower > cardsType._nEndPower then
            return CardEnum.COMPARE_RESULT.CR_MORE_THAN
        elseif (self._nEndPower == cardsType._nEndPower) then
            return CardEnum.COMPARE_RESULT.CR_EQUAL
        else
            return CardEnum.COMPARE_RESULT.CR_LESS_THAN
        end
    end

    --炸弹可以越牌型(因为只有4线炸弹,所以如果都是炸弹就在上面的if中比大小了)
    if self._nCardTypeEnum >= CardEnum.CARDS_TYPE.CT_4_JUNKO_1_EXCESS_0_CONTINUOUS
        and self._nCardTypeEnum <= CardEnum.CARDS_TYPE.CT_4_JUNKO_1_EXCESS_4_CONTINUOUS then
        return CardEnum.COMPARE_RESULT.CR_MORE_THAN
    end

    return CardEnum.COMPARE_RESULT.CR_UNABLE_COMPARE
end

return MyCardsType