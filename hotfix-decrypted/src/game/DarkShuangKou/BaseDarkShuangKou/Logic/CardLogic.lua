local CardLogic = class("CardLogic")
local CardEnum = CF.gameRequire("Define.CardEnum")

-------------------------------------------
--根据ID获取牌权
-------------------------------------------
function CardLogic.getCardPowerById(cardId)
    return CardEnum.CardID2Power[cardId]
end

-------------------------------------------
--将牌数据转换为[power] = {cardID1, cardID2, cardID3}形式
-------------------------------------------
function CardLogic.switchCardIDsToPowerKey(tHandCards)
    local tResultData = {}
    for _, cardId in pairs(tHandCards) do
        local cardPower = CardLogic.getCardPowerById(cardId)
        if not tResultData[cardPower] then
            tResultData[cardPower] = {}
        end
        table.insert(tResultData[cardPower], cardId)
    end
    return tResultData
end

-------------------------------------------
--手牌是否全为牌背
-------------------------------------------
function CardLogic.isBackHandCards(handCards)
    if handCards == nil or #handCards == 0 then
        return true
    end
    for i = 1, #handCards do
        if handCards[i] ~= 0 then -- 0是牌背
            return false
        end
    end
    return true
end

-------------------------------------------
--对cardIDs进行排序
-------------------------------------------
function CardLogic.getCardIDsSort(cardIDs)
    if CardLogic.isBackHandCards(cardIDs) then
        return cardIDs
    end
    cardIDs = cardIDs or {}
    local resultCardIDs = {}
    local tCardPower = CardLogic.switchCardIDsToPowerKey(cardIDs)

    --先将每一种power内部排序
    for i = CardEnum.CARD_POWER.CP_3, CardEnum.CARD_POWER.CP_BJ do
        if tCardPower[i] then
            table.sort(
                tCardPower[i],
                function(a, b)
                    if a % 54 == b % 54 then
                        return a < b
                    else
                        return a % 54 < b % 54
                    end
                end
            )
        end
    end
    for i = CardEnum.CARD_POWER.CP_3, CardEnum.CARD_POWER.CP_BJ do
        local tempPowerData = tCardPower[i] or {}
        for _, cardID in ipairs(tempPowerData) do
            table.insert(resultCardIDs, cardID)
        end
    end
    local tempPowerData = tCardPower[CardEnum.CARD_POWER.CP_NONE] or {}
    for _, cardID in ipairs(tempPowerData) do
        table.insert(resultCardIDs, cardID)
    end
    return resultCardIDs
end

-------------------------------------------
--从cardIDs中删除cardIDsToDelete数据
-------------------------------------------
function CardLogic.deleteCardIDs(cardIDs, cardIDsToDelete)
    if cardIDs == nil or #cardIDs == 0 then
        return false, {}
    end
    if cardIDsToDelete == nil then
        return true, {}
    end
    local tempCards = clone(cardIDs)
    local tempcardsToDelete = clone(cardIDsToDelete)

    for _, value in ipairs(tempcardsToDelete) do
        CardLogic.deleteOneCardID(tempCards, value)
    end
    local iSDeleteSuccess = (#tempCards + #cardIDsToDelete == #cardIDs) and (#cardIDsToDelete ~= 0)
    return iSDeleteSuccess, tempCards
end

-------------------------------------------
--从cardIDs中删除
-------------------------------------------
function CardLogic.deleteOneCardID(cardIDs, cardID)
    if cardIDs == nil or #cardIDs == 0 then
        return
    end

    for index, tempID in ipairs(cardIDs) do
        if cardID == tempID then
            table.remove(cardIDs, index)
            return
        end
    end
    -- 找不到，从0（牌背）删除
    for index, _ in ipairs(cardIDs) do
        if cardID == 0 then
            table.remove(cardIDs, index)
            return
        end
    end
end

-------------------------------------------
--判断两个cardIDs是否相等
------------------------------------------
function CardLogic.checkTwoCardDataIsSame(cardIDs1, cardIDs2)
    local tempHandCardIDs1 = clone(cardIDs1)
    local tempHandCardIDs2 = clone(cardIDs2)
    table.sort(
        tempHandCardIDs1,
        function(a, b)
            return a < b
        end
    )
    table.sort(
        tempHandCardIDs2,
        function(a, b)
            return a < b
        end
    )
    for i, v in ipairs(tempHandCardIDs1) do
        if v ~= tempHandCardIDs2[i] then
            return false
        end
    end
    return true
end

------------------------------------------------------------------------
---------------------------Dark ShuangKou Logic
------------------------------------------------------------------------

-- 计算牌分
function CardLogic.getCardScore(cardIDs)
    local score = 0
    for i = 1, #cardIDs do
        if cardIDs[i] == CardEnum.CARD_ID.CID_SJ or cardIDs[i] == CardEnum.CARD_ID.CID_BJ or cardIDs[i] == CardEnum.CARD_ID.CID_2_SJ or cardIDs[i] == CardEnum.CARD_ID.CID_2_BJ then
            score = score + CardEnum.CardScore.JOKER
        else
            score = score + CardEnum.CardScore.NOT_JOKER
        end
    end
    return score
end

-- 找出最大牌型
function CardLogic.FindMaxCardType(cardIDs)
    cardIDs = cardIDs or {}
    local powers = CardLogic.switchCardIDsToPowerKey(cardIDs)
    local jokerBoomReturn = CardLogic.FindMaxJokerBoom(powers) -- 找王炸
    local boomReturn = CardLogic.FindMaxBoom(powers) -- 找线炸
    local tripleReturn = CardLogic.FindTriple(powers) -- 找三张牌型
    local doubleReturn = CardLogic.FindDouble(powers) -- 找两张
    local singleReturn = CardLogic.FindSingle(powers) -- 找单张
    local cardPlayTypes = {jokerBoomReturn, boomReturn, tripleReturn, doubleReturn, singleReturn}
    table.sort(
        cardPlayTypes,
        function(a, b)
            return a.cardPlayType.sortid > b.cardPlayType.sortid
        end
    )
    local cardsInfo = cardPlayTypes[1]
    cardsInfo.score = CardLogic.getCardScore(cardIDs)
    return cardsInfo
end

-- 找带王的炸，返回点数和类型，王炸不用返回点数
function CardLogic.FindMaxJokerBoom(powers)
    local cnt = #(powers[CardEnum.CARD_POWER.CP_SJ] or {}) + #(powers[CardEnum.CARD_POWER.CP_BJ] or {})
    local cards = {}
    table.insertto(cards, powers[CardEnum.CARD_POWER.CP_SJ] or {})
    table.insertto(cards, powers[CardEnum.CARD_POWER.CP_BJ] or {})
    return {cardPlayType = CardEnum.tagCardTypeID["CT_JOKER_" .. cnt] or CardEnum.tagCardTypeID.CT_0_JUNKO_0_EXCESS_CONTINUOUS_0, cards = cards}
end

-- 找炸，返回点数和类型，王炸不用返回点数
function CardLogic.FindMaxBoom(powers)
    local maxBoomPoint = 0 -- 最大炸弹的点数
    local cardPlayType = CardEnum.tagCardTypeID.CT_0_JUNKO_0_EXCESS_CONTINUOUS_0
    for i = CardEnum.CARD_POWER.CP_3, CardEnum.CARD_POWER.CP_2 do
        local cnt = #(powers[i] or {})
        local maxCnt = #(powers[maxBoomPoint] or {})
        if cnt >= 4 then -- 张数是4张以上
            if cnt > maxCnt then -- 比现在最大的大
                maxBoomPoint = i
                cardPlayType = CardEnum.tagCardTypeID["CT_BOOM_" .. cnt]
            elseif cnt == maxCnt and i > maxBoomPoint then -- 如果张数相同，看权值
                maxBoomPoint = i
                cardPlayType = CardEnum.tagCardTypeID["CT_BOOM_" .. cnt]
            end
        end
    end
    return {cardPlayType = cardPlayType, cards = powers[maxBoomPoint]}
end

-- 找最大连续的牌
function CardLogic.findLongestStraight(powers)
    local longestStart = 0
    local longestLength = 0
    local currentStart
    local currentLength
    for i = CardEnum.CARD_POWER.CP_3, CardEnum.CARD_POWER.CP_2 do
        local cnt = #(powers[i] or {})
        if cnt > 0 then
            currentStart = i
            currentLength = 1
            for addcnt = 1, CardEnum.CARD_POWER.CP_2 do
                local nowNum = i + addcnt
                local nowCnt = #(powers[nowNum] or {})
                if nowNum < CardEnum.CARD_POWER.CP_2 and nowCnt > 0 then
                    currentLength = currentLength + 1
                else
                    if currentLength >= longestLength then
                        longestStart = currentStart
                        longestLength = currentLength
                    end
                    break
                end
            end
        end
    end
    return longestStart, longestLength
end

-- 找三张，返回类型和点数
function CardLogic.FindTriple(powers)
    local COMPARE_CARD_CNT = 3
    local newPowers = {} -- 3张的点数（没有以上，以上就是炸）
    for i = CardEnum.CARD_POWER.CP_3, CardEnum.CARD_POWER.CP_2 do
        local cnt = #(powers[i] or {})
        if cnt == COMPARE_CARD_CNT then
            newPowers[i] = powers[i]
        end
    end
    -- 找顺
    local powerStart, powerLength = CardLogic.findLongestStraight(newPowers)
    if powerStart ~= 0 and powerLength ~= 0 then
        local cards = {}
        for i = powerStart, powerStart + powerLength - 1 do
            if powerLength < 2 then
                cards = {}
            end
            for j = 1, COMPARE_CARD_CNT do
                table.insert(cards, newPowers[i][j])
            end
        end
        if powerLength >= 2 then
            return {cardPlayType = CardEnum.tagCardTypeID["CT_3_" .. powerLength], cards = cards}
        else
            return {cardPlayType = CardEnum.tagCardTypeID.CT_3_1, cards = cards}
        end
    end
    return {cardPlayType = CardEnum.tagCardTypeID.CT_0_JUNKO_0_EXCESS_CONTINUOUS_0, cards = {}}
end

-- 找两张，返回类型和点数
function CardLogic.FindDouble(powers)
    local COMPARE_CARD_CNT = 2
    local newPowers = {} -- 3张的点数（没有以上，以上就是炸）
    local maxPower = 0
    for i = CardEnum.CARD_POWER.CP_3, CardEnum.CARD_POWER.CP_2 do
        local cnt = #(powers[i] or {})
        if cnt >= COMPARE_CARD_CNT then
            newPowers[i] = powers[i]
            maxPower = i
        end
    end
    -- 找顺
    local powerStart, powerLength = CardLogic.findLongestStraight(newPowers)
    if powerStart ~= 0 then
        if powerLength >= 3 then
            local cards = {}
            for i = powerStart, powerStart + powerLength - 1 do
                for j = 1, COMPARE_CARD_CNT do
                    table.insert(cards, newPowers[i][j])
                end
            end
            return {cardPlayType = CardEnum.tagCardTypeID["CT_2_" .. powerLength], cards = cards}
        else
            local cards = {}
            for j = 1, COMPARE_CARD_CNT do
                table.insert(cards, newPowers[maxPower][j])
            end
            return {cardPlayType = CardEnum.tagCardTypeID.CT_2_1, cards = cards}
        end
    end
    return {cardPlayType = CardEnum.tagCardTypeID.CT_0_JUNKO_0_EXCESS_CONTINUOUS_0, cards = {}}
end

-- 找单张，返回类型和点数
function CardLogic.FindSingle(powers)
    local COMPARE_CARD_CNT = 1
    local newPowers = {} -- 3张的点数（没有以上，以上就是炸）
    local maxPower = 0
    for i = CardEnum.CARD_POWER.CP_3, CardEnum.CARD_POWER.CP_2 do
        local cnt = #(powers[i] or {})
        if cnt >= COMPARE_CARD_CNT then
            newPowers[i] = powers[i]
            maxPower = i
        end
    end
    local haveJoker = false
    if (powers[CardEnum.CARD_POWER.CP_BJ] and #powers[CardEnum.CARD_POWER.CP_BJ] >= COMPARE_CARD_CNT) or (powers[CardEnum.CARD_POWER.CP_SJ] and #powers[CardEnum.CARD_POWER.CP_SJ] >= COMPARE_CARD_CNT) then
        haveJoker = true
    end
    -- 找顺
    local powerStart, powerLength = CardLogic.findLongestStraight(newPowers)
    if powerStart ~= 0 then
        if powerLength >= 5 then
            local cards = {}
            for i = powerStart, powerStart + powerLength - 1 do
                for j = 1, COMPARE_CARD_CNT do
                    table.insert(cards, newPowers[i][j])
                end
            end
            return {cardPlayType = CardEnum.tagCardTypeID["CT_1_" .. powerLength], cards = cards}
        else
            if not haveJoker then
                local cards = {}
                for j = 1, COMPARE_CARD_CNT do
                    table.insert(cards, newPowers[maxPower][j])
                end
                return {cardPlayType = CardEnum.tagCardTypeID.CT_1_1, cards = cards}
            end
        end
    end
    -- 大小王判断
    local cards = {}
    if powers[CardEnum.CARD_POWER.CP_BJ] and #powers[CardEnum.CARD_POWER.CP_BJ] >= COMPARE_CARD_CNT then
        for j = 1, COMPARE_CARD_CNT do
            table.insert(cards, powers[CardEnum.CARD_POWER.CP_BJ][j])
        end
    elseif powers[CardEnum.CARD_POWER.CP_SJ] and #powers[CardEnum.CARD_POWER.CP_SJ] >= COMPARE_CARD_CNT then
        for j = 1, COMPARE_CARD_CNT do
            table.insert(cards, powers[CardEnum.CARD_POWER.CP_SJ][j])
        end
    end
    if #cards > 0 then
        return {cardPlayType = CardEnum.tagCardTypeID.CT_1_1, cards = cards}
    end
    return {cardPlayType = CardEnum.tagCardTypeID.CT_0_JUNKO_0_EXCESS_CONTINUOUS_0, cards = {}}
end

return CardLogic
 4  