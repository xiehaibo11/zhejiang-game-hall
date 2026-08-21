--
--Description: 智能选牌
--Date: 2019-07-09 14:18:24
--
local SmartSelectCard = class("SmartSelectCard")

local CardEnum = CF.gameRequire("Define.CardEnum")
local GameDefine = CF.gameRequire("Define.GameDefine")
local MyCardsType = CF.gameRequire("Modules.GameLayer.MyCardsType")
local CardLogic = CF.gameRequire("Modules.GameLayer.CardLogic")



--置换allCards中牌权相同的牌,使其包含后者selectCards
function SmartSelectCard:replaceSimplePowerByCards(allCards, selectCards)
    --置换标记,换过的牌不能再被其他牌换
    local replaceflag = {}
    for i = 1, #allCards do
        replaceflag[i] = false
    end

    for i = 1, #selectCards do
        local bExist = false
        local replaceIndex = 0
        for t = 1, #allCards do
            if replaceflag[t] == false and allCards[t]:getPower() == selectCards[i]:getPower() then
                if allCards[t]:getCardID() == selectCards[i]:getCardID() then
                    bExist = true
                    replaceflag[t] = true
                    break
                end
                replaceIndex = t
            end
        end
        --如果该牌不存在,则选择相应牌权的牌将其置换
        if bExist == false then
            if replaceIndex == 0 then
                return false,{}
            end
            replaceflag[replaceIndex] = true
            allCards[replaceIndex] = selectCards[i]
        end
    end

    return true,allCards
end

--选中牌的长度是否一致 33 44 还是 333 44等
--一致则返回对应长度,否则返回0
function SmartSelectCard:checkCardsSimpleMainNum(selectCards)
    local cardBox = {}
    for i = 1, CardEnum.CARD_POWER.POWER_COUNT do
        cardBox[i] = {}
    end
    for i = 1, #selectCards do
        local power = selectCards[i]:getPower()
        table.insert(cardBox[power], selectCards[i])
    end

    local iMainNum = 0
    for i = CardEnum.CARD_POWER.POWER_3,CardEnum.CARD_POWER.POWER_COUNT do
        if iMainNum == 0 and #cardBox[i] > 0 then
            iMainNum = #cardBox[i]
        end
        if #cardBox[i] > iMainNum then
            return 0
        end
    end

    return iMainNum
end

--寻找从当前位置开始可以的最长序列
function SmartSelectCard:findMaxCTSize(cardBox, startpos, iMainNum)
    local CTSize = 0
    --if startpos < CardEnum.CARD_POWER.POWER_3 then
    --end
    for i = startpos,CardEnum.CARD_POWER.POWER_A do
        if #cardBox[i] >= iMainNum then
            CTSize = CTSize + 1
        else
            break
        end
    end

    return CTSize
end

function SmartSelectCard:selectOtherCardsAuto(allCards, selectCards, preOutCards)
    if #allCards == 0 or #selectCards < 2 then
        return false,{}
    end

    --整理牌组
    local checkCards = CardLogic:ID2MyCards(allCards)
    local cardBox = {}
    for i = 1, CardEnum.CARD_POWER.POWER_COUNT do
        cardBox[i] = {}
    end
    for i = 1, #checkCards do
        local power = checkCards[i]:getPower()
        table.insert(cardBox[power], checkCards[i])
    end

    local curselectCards = CardLogic:ID2MyCards(selectCards)
    local minpower, maxpower = CardLogic:getPowerRangeFromCards(curselectCards)
    --确定主牌长度
    local iMainNum = self:checkCardsSimpleMainNum(curselectCards)
    --前后长度不对,取消匹配
    if minpower == maxpower or iMainNum == 0 then
        return false,{}
    end

    --推测牌型
    local cardTypeTest = iMainNum * GameDefine.KW_MULTIPLE_THOUSAND
    local CTSize
    --如果是先手
    if #preOutCards == 0 then
        local minCTSize = MyCardsType:getMinCTLength(cardTypeTest + 1)
        --根据选起的牌决定是5 6 - - -还是5 - - - 9确定长度
        if maxpower - minpower + 1 < minCTSize then
            local maxCTSize = self:findMaxCTSize(cardBox, minpower, iMainNum)
            if maxCTSize < minCTSize then
                return false, {}
            end
            CTSize = maxCTSize
        else
            CTSize = maxpower - minpower + 1
        end
    else
        --后手则根据已出牌实际长度来
        local comCards = CardLogic:ID2MyCards(preOutCards)
        local comCardsType = MyCardsType:new()
        comCardsType:findCardTypeFromCards(comCards, true)
        CTSize = comCardsType._nCardTypeEnum % GameDefine.KW_MULTIPLE_HUNDRED
        --不是顺子则不做操作
        if comCardsType._nCardTypeEnum == CardEnum.CARDS_TYPE.CT_0_JUNKO_0_CONTINUOUS or CTSize < 2 then
            return false, {}
        end
        local startPower = MyCardsType:getPreNPower(comCardsType._nEndPower, CTSize - 1, false)
        --如果选中的牌型对不上，或者小于前者则直接返回
        if minpower <= startPower or maxpower - minpower + 1 > CTSize or iMainNum ~= math.floor(comCardsType._nCardTypeEnum / GameDefine.KW_MULTIPLE_THOUSAND) then
            return false, {}
        end
    end

    --不算带牌
    cardTypeTest = cardTypeTest + CTSize

    local bSuccess, orderOutCards = MyCardsType:getCombFromCardBox(cardBox, cardTypeTest, minpower, false)
    if bSuccess == true then
        return self:replaceSimplePowerByCards(orderOutCards, curselectCards)
    end
    return false,{}

end


return SmartSelectCard