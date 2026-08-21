--
-- Description: 牌值逻辑，出牌提示等
-- Author: hejiafeng
-- Date: 2019-07-08
--
local CardLogic = class("CardLogic")

local CardEnum = CF.gameRequire("Define.CardEnum")

CardLogic.SrotType = {
    CardPower = 1,
    CardGroupPower = 2
}

--后期新增判断，不改变原逻辑，额外判断
local LIANZHA_POWER_LINE = {
    {3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14},
    {9, 10, 11, 12, 13, 14, 15, 3, 4, 5, 6, 7, 8}
 --这里是为了兼容考虑2可以带入连炸的情况，若不需要2带入连炸，将这行注释即可
}

function CardLogic.getGameType()
    return CF.game:getModule("GameLayer"):getGameData():getGameType()
end

-------------------------------------------
--根据牌值获取牌权
-------------------------------------------
function CardLogic.getCardPowerByValue(cardValue)
    local cardStr = CardEnum.CARD_STR[cardValue]
    if not cardStr then
        return 0
    end

    local cardPower = CardEnum.CARD_POWER["CP_" .. cardStr]
    if not cardPower then
        return 0
    end

    return cardPower
end

-------------------------------------------
--根据ID获取牌值
-------------------------------------------
function CardLogic.getCardValueAndColorById(cardId)
    if cardId == CardEnum.CARD_ID.CID_SJ then
        return CardEnum.CARD_VALUE.CV_SJ
    end
    if cardId == CardEnum.CARD_ID.CID_BJ then
        return CardEnum.CARD_VALUE.CV_BJ
    end

    local cardValue = cardId % 13
    if cardValue == 0 then
        cardValue = 13
    end
    local cardColor = math.ceil(cardId / 13)
    return cardValue, cardColor
end

-------------------------------------------
--根据ID获取牌权
-------------------------------------------
function CardLogic.getCardPowerById(cardId)
    local cardValue = CardLogic.getCardValueAndColorById(cardId)
    local cardPower = CardLogic.getCardPowerByValue(cardValue)
    return cardPower
end

-------------------------------------------
--根据ID获取牌权
-------------------------------------------
function CardLogic.getCardValueByPower(cardPower)
    for _, value in pairs(CardEnum.CARD_VALUE) do
        local tempPower = CardLogic.getCardPowerByValue(value)
        if cardPower == tempPower then
            return value
        end
    end
    return CardEnum.CARD_VALUE.CV_NONE
end

-------------------------------------------
--根据ID判断牌权是否相等
-------------------------------------------
function CardLogic.isSameCardPowerByIds(cardIDs)
    if #cardIDs <= 1 then
        return false
    end
    local cardPower
    for _, cardID in ipairs(cardIDs) do
        local tempPower = CardLogic.getCardPowerById(cardID)
        if cardPower == nil then
            cardPower = tempPower
        elseif cardPower ~= tempPower then
            return false
        end
    end
    return true
end

-------------------------------------------
--根据牌值和花色确定ID值
--1-13方块1-13
--14-26梅花1-13
--27-39红心1-13
--40-52黑桃1-13
--53小王
--54大王
-------------------------------------------
function CardLogic.getCardIdByValueAndColor(cardValue, cardColor)
    if cardValue == CardEnum.CARD_VALUE.CV_SJ then
        return CardEnum.CARD_ID.CID_SJ
    end
    if cardValue == CardEnum.CARD_VALUE.CV_BJ then
        return CardEnum.CARD_ID.CID_BJ
    end
    return (cardColor - 1) * 13 + cardValue
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
--获取自由出牌提示数据
--自由提示遵循不拆牌原则
--tHandCards为手牌数据，数据元素为cardID值
-------------------------------------------
function CardLogic.getTipsDataFreedom(tHandCards)
    if CardLogic.isCanPlayAllHandCardsOneStep(tHandCards) then
        return {tHandCards}
    end
    local resultData = {}
    CardLogic.getTipsDataFreedomNormal(tHandCards, resultData)
    CardLogic.getTipsDataFreedomBomb(tHandCards, resultData)
    return resultData
end

-------------------------------------------
--获取出牌提示数据
--tOutCards为别人打出牌数据，数据元素为cardID值
-------------------------------------------
function CardLogic.getTipsDataByOutCards(tHandCards, tOutCards, cardType)
    if cardType == CardEnum.CARDS_TYPE.CT_1_JUNKO_1_CONTINUOUS or cardType == CardEnum.CARDS_TYPE.CT_2_JUNKO_1_CONTINUOUS or cardType == CardEnum.CARDS_TYPE.CT_3_JUNKO_1_CONTINUOUS then
        --单张\对子\三张
        return CardLogic.getTipsDataOneTwoThreeCount(tHandCards, tOutCards)
    elseif
        (cardType >= CardEnum.CARDS_TYPE.CT_1_JUNKO_5_CONTINUOUS and cardType <= CardEnum.CARDS_TYPE.CT_1_JUNKO_12_CONTINUOUS) or
            (cardType >= CardEnum.CARDS_TYPE.CT_2_JUNKO_3_CONTINUOUS and cardType <= CardEnum.CARDS_TYPE.CT_2_JUNKO_12_CONTINUOUS) or
            (cardType >= CardEnum.CARDS_TYPE.CT_3_JUNKO_3_CONTINUOUS and cardType <= CardEnum.CARDS_TYPE.CT_3_JUNKO_8_CONTINUOUS)
     then
        --单顺\双顺\三顺
        return CardLogic.getTipsDataShun(tHandCards, tOutCards, cardType)
    elseif cardType > CardEnum.CARDS_TYPE.CT_4_JUNKO_0_CONTINUOUS then
        --炸弹
        return CardLogic.getTipsDataBomb(tHandCards, tOutCards, cardType)
    end
end

-------------------------------------------
--获取单张\对子\三张的提示数据
-------------------------------------------
function CardLogic.getTipsDataOneTwoThreeCount(tHandCards, tOutCards)
    local outCardCount = #tOutCards
    local resultData = {}
    local outCardPower = CardLogic.getMinPowerInCardIDs(tOutCards)
    local powerToCardId = CardLogic.switchCardIDsToPowerKey(tHandCards)
    local dataExpectSameCount = {}
    local jokerData = CardLogic.getJokerDataFromCardIDs(tHandCards)
    local jokerCount = #jokerData
    local dataWithJoker = {}
    --如果一张大王加一张小王是否可以当对子出，在GameManager中添加isOneBJAndOneSJCanDui方法并返回true
    local isOneBJAndOneSJCanDui = false
    if CF.game:getModule("GameLayer"):getGameData().isOneBJAndOneSJCanDui then
        local tempBool = CF.game:getModule("GameLayer"):getGameData():isOneBJAndOneSJCanDui()
        if type(tempBool) == "boolean" and tempBool == true then
            isOneBJAndOneSJCanDui = true
        end
    end
    --只判断对子
    if isOneBJAndOneSJCanDui and outCardCount == 2 then
        local sjPowerList = powerToCardId[CardEnum.CARD_POWER.CP_SJ]
        local bjPowerList = powerToCardId[CardEnum.CARD_POWER.CP_BJ]
        if sjPowerList and bjPowerList then
            if #sjPowerList >= 1 and #bjPowerList >= 1 then
                local tempData = {}
                tempData.jokerCount = outCardCount
                tempData.cardIDs = {53, 54}
                tempData.cardPower = CardEnum.CARD_POWER.CP_BJ
                table.insert(dataWithJoker, tempData)
            end
        end
    end
    for power = CardEnum.CARD_POWER.CP_3, CardEnum.CARD_POWER.CP_BJ do
        local v = powerToCardId[power] or {}
        local thisPowerCount = #v
        --先不考虑带王提示
        if thisPowerCount >= outCardCount and power > outCardPower then
            if thisPowerCount == outCardCount then
                if CardLogic.isJokerByPower(power) then
                    local tempData = {}
                    tempData.jokerCount = outCardCount
                    tempData.cardIDs = clone(v)
                    tempData.cardPower = power
                    table.insert(dataWithJoker, tempData)
                else
                    --按牌值优先插入
                    table.insert(resultData, clone(v))
                end
            else
                local tempCardIDs = {}
                for i = 1, outCardCount do
                    table.insert(tempCardIDs, v[i])
                end
                if CardLogic.isJokerByPower(power) then
                    local tempData = {}
                    tempData.jokerCount = outCardCount
                    tempData.cardIDs = tempCardIDs
                    tempData.cardPower = power
                    table.insert(dataWithJoker, tempData)
                else
                    local tempData = {}
                    tempData.oldCount = thisPowerCount
                    tempData.cardIDs = tempCardIDs
                    tempData.cardPower = power
                    table.insert(dataExpectSameCount, tempData)
                end
            end
        elseif not CardLogic.isJokerByPower(power) and thisPowerCount > 0 and (thisPowerCount + jokerCount) >= outCardCount and power > outCardPower then
            if not (CardLogic.isKingByPower(power) and outCardCount == 3) then
                local tempCardIDs = clone(v)
                for i = 1, (outCardCount - thisPowerCount) do
                    table.insert(tempCardIDs, jokerData[i])
                end
                local tempData = {}
                tempData.jokerCount = outCardCount - thisPowerCount
                tempData.cardIDs = tempCardIDs
                tempData.cardPower = power
                table.insert(dataWithJoker, tempData)
            end
        end
    end

    if CardLogic.isJokerByPower(CardEnum.CARD_POWER.CP_BJ) and CardLogic.isJokerByPower(CardEnum.CARD_POWER.CP_SJ) then
        local v1 = powerToCardId[CardEnum.CARD_POWER.CP_SJ] or {}
        local v2 = powerToCardId[CardEnum.CARD_POWER.CP_BJ] or {}
        if #v1 == 1 and #v2 == 1 and outCardCount == 2 then
            local tempCardIDs = {}
            table.insert(tempCardIDs, v1[1])
            table.insert(tempCardIDs, v2[1])
            local tempData = {}
            tempData.jokerCount = outCardCount
            tempData.cardIDs = tempCardIDs
            tempData.cardPower = CardEnum.CARD_POWER.CP_SJ
            table.insert(dataWithJoker, tempData)
        end
    end

    --插入炸弹数据
    CardLogic.getTipsDataFreedomBomb(tHandCards, resultData)

    --拆牌排序
    table.sort(
        dataExpectSameCount,
        function(a, b)
            if a.oldCount ~= b.oldCount then
                return a.oldCount < b.oldCount
            end
            return a.cardPower < b.cardPower
        end
    )
    --插入拆牌
    for _, data in ipairs(dataExpectSameCount) do
        table.insert(resultData, data.cardIDs)
    end

    --如果没有不带百搭牌的提示，则将有百搭的加进去
    -- if #resultData == 0 then
    table.sort(
        dataWithJoker,
        function(a, b)
            if a.jokerCount ~= b.jokerCount then
                return a.jokerCount < b.jokerCount
            end
            return a.cardPower < b.cardPower
        end
    )
    --插入带百搭的提示
    for _, data in ipairs(dataWithJoker) do
        table.insert(resultData, data.cardIDs)
    end
    -- end

    return resultData
end

-------------------------------------------
--获取单顺\双顺\三顺的提示数据
-------------------------------------------
function CardLogic.getTipsDataShun(tHandCards, tOutCards, cardType)
    --转换为[power] = {cardID1, cardID2, cardID3}
    local powerToCardId = CardLogic.switchCardIDsToPowerKey(tHandCards)
    local everyPowerCount = math.floor(cardType / 100) --1,2,3表示单双三顺
    local powerCount = cardType % 100 --表示几连
    local minNormalPower = CardLogic.getMinNormalPowerFromCardIDs(tOutCards, powerCount)
    local jokerData = CardLogic.getJokerDataFromCardIDs(tHandCards)
    local jokerCount = #jokerData
    local resultData = {}
    local dataExpectBomb = {}
    --按牌权值从小到大遍历
    for cardPower = (minNormalPower + 1), (CardEnum.CARD_POWER.CP_A - powerCount + 1) do
        local needJokerCount = 0
        local tempJokerData = clone(jokerData)
        local tempData = {}
        tempData.cardIDs = {}
        tempData.isChaiPai = 0
        tempData.jokerCount = 0
        tempData.id = #dataExpectBomb
        for i = cardPower, (cardPower + powerCount - 1) do
            local thisPowerCardIDs = powerToCardId[i] or {}
            local thisPowerCount = #thisPowerCardIDs
            --炸弹不拆
            if thisPowerCount >= 4 then
                break
            end
            if thisPowerCount < everyPowerCount then
                needJokerCount = needJokerCount + everyPowerCount - thisPowerCount
                for j = 1, thisPowerCount do
                    table.insert(tempData.cardIDs, thisPowerCardIDs[j])
                end
            else
                for j = 1, everyPowerCount do
                    table.insert(tempData.cardIDs, thisPowerCardIDs[j])
                end
                if thisPowerCount > everyPowerCount then
                    tempData.isChaiPai = 1
                end
            end
            if needJokerCount > jokerCount then
                break
            end
            if i == (cardPower + powerCount - 1) then
                CardLogic.insertCardIdsToData(tempData.cardIDs, tempJokerData, needJokerCount)
                tempData.jokerCount = needJokerCount
                table.insert(dataExpectBomb, tempData)
            end
        end
    end

    table.sort(
        dataExpectBomb,
        function(a, b)
            if a.jokerCount ~= b.jokerCount then
                return a.jokerCount < b.jokerCount
            end
            if a.isChaiPai ~= b.isChaiPai then
                return a.isChaiPai < b.isChaiPai
            end
            return a.id < b.id
        end
    )

    for _, data in ipairs(dataExpectBomb) do
        table.insert(resultData, data.cardIDs)
    end

    --插入炸弹数据
    CardLogic.getTipsDataFreedomBomb(tHandCards, resultData)

    return resultData
end

function CardLogic.isBiggerPowerSameLine(cardType, cardIDs1, cardIDs2)
    local powerKeyData1 = CardLogic.switchCardIDsToPowerKey(cardIDs1)
    local powerKeyData2 = CardLogic.switchCardIDsToPowerKey(cardIDs2)

    local isHave2_1 = false
    if powerKeyData1[CardEnum.CARD_POWER.CP_2] or (powerKeyData1[CardEnum.CARD_POWER.CP_A] and powerKeyData1[CardEnum.CARD_POWER.CP_3]) then
        isHave2_1 = true
    end

    local isHave2_2 = false
    if powerKeyData2[CardEnum.CARD_POWER.CP_2] or (powerKeyData2[CardEnum.CARD_POWER.CP_A] and powerKeyData2[CardEnum.CARD_POWER.CP_3]) then
        isHave2_2 = true
    end

    if isHave2_1 and not isHave2_2 then
        return false
    end

    if not isHave2_1 and isHave2_2 then
        return true
    end

    if not isHave2_1 and not isHave2_2 then
        local power1 = CardLogic.getMinNormalPowerFromCardIDs(cardIDs1, cardType % 100)
        local power2 = CardLogic.getMinNormalPowerFromCardIDs(cardIDs2, cardType % 100)
        return power1 > power2
    end

    if isHave2_1 and isHave2_2 then
        local powerLine = LIANZHA_POWER_LINE[2]
        --如果有四王且连线
        local everyNumber = math.floor(cardType / 100)
        if everyNumber == 4 then
            local getInfo = function(powerKeyData, everyNumber2)
                local kingNum, needJokerCount = 0, 0
                local indexData = {} --保存连炸牌值的从3-8顺序
                local powerIndex = {} --保存连炸牌值对应Index
                local jokerReplaceAllCards = false --连炸中是否有某一牌值全部由百搭代替（不包含最前后）
                for key, _ in pairs(powerKeyData) do
                    if CardLogic.isKingByPower(key) then
                        kingNum = kingNum + #powerKeyData[key]
                    else
                        if #powerKeyData[key] - everyNumber2 < 0 then
                            needJokerCount = needJokerCount + everyNumber2 - #powerKeyData[key]
                        end
                    end
                end
                for key, _ in pairs(powerKeyData) do
                    if key < 9 then
                        table.insert(indexData, key)
                    end
                end
                table.sort(indexData)
                for key, _ in pairs(powerKeyData) do
                    for key1, value1 in pairs(powerLine) do
                        if key == value1 then
                            table.insert(powerIndex, key1)
                        end
                    end
                end
                table.sort(powerIndex)
                for index = 1, #powerIndex - 1 do
                    if powerIndex[index] + 1 ~= powerIndex[index + 1] then
                        jokerReplaceAllCards = true
                    end
                end
                return kingNum, needJokerCount, indexData, jokerReplaceAllCards
            end
            local kingNum1, needJokerCount1, indexData1, jokerReplaceAllCards1 = getInfo(powerKeyData1, everyNumber)
            local kingNum2, needJokerCount2, indexData2, jokerReplaceAllCards2 = getInfo(powerKeyData2, everyNumber)
            if kingNum1 - needJokerCount1 >= 4 and not jokerReplaceAllCards1 then
                if #indexData1 > 0 then --如果为0说明连炸正好到2
                    powerKeyData1[indexData1[#indexData1] + 1] = {0}
                else
                    powerKeyData1[3] = {0}
                end
            elseif kingNum2 - needJokerCount2 >= 4 and not jokerReplaceAllCards2 then
                if #indexData2 > 0 then
                    powerKeyData2[indexData2[#indexData2] + 1] = {0}
                else
                    powerKeyData2[3] = {0}
                end
            end
        end

        local maxPower = powerLine[#powerLine]
        for i = maxPower, CardEnum.CARD_VALUE.CV_2, -1 do
            if powerKeyData1[i] and not powerKeyData2[i] then
                return true
            end
            if not powerKeyData1[i] and powerKeyData2[i] then
                return false
            end
        end
    end

    return false
end

-------------------------------------------
--获取炸弹的提示数据
-------------------------------------------
function CardLogic.getTipsDataBomb(tHandCards, tOutCards, cardType)
    --线数
    local bombLineCount = CardLogic.GetBombLineNumberByType(cardType)
    --炸弹数据
    local tempOutBombData = {lineCount = bombLineCount, tOutCards = tOutCards, cardType = cardType}
    local tBombData = CardLogic.getBombDataFromCardIDs(tHandCards, tempOutBombData)

    --炸弹排序
    table.sort(
        tBombData,
        function(a, b)
            if a.jokerCount ~= b.jokerCount then
                return a.jokerCount < b.jokerCount
            end

            if a.lineCount ~= b.lineCount then
                return a.lineCount < b.lineCount
            end

            if a.power ~= b.power then
                return a.power < b.power
            end
            return false
        end
    )

    local resultData = {}
    for _, v in ipairs(tBombData) do
        table.insert(resultData, v.data)
    end
    return resultData
end

-------------------------------------------
--获取最小的牌权值
--如果是单张\对子\三张,最小的牌权值即为牌型的牌权值
-------------------------------------------
function CardLogic.getMinPowerInCardIDs(cardIDs)
    local outCardPower = CardEnum.CARD_POWER.CP_BJ + 1
    for _, cardID in pairs(cardIDs) do
        local tempPower = CardLogic.getCardPowerById(cardID)
        if tempPower < outCardPower then
            outCardPower = tempPower
        end
    end
    return outCardPower
end

-------------------------------------------
--获取最小牌权值(帶2连炸除外)
-------------------------------------------
function CardLogic.getMinNormalPowerFromCardIDs(cardIDs, powerCount)
    local normalPowerCount = 0 --普通牌种类数(已此来判断百搭牌替换了几种牌)
    local maxNormalPower = 0 --最大普通牌权值
    local minNormalPower = CardEnum.CARD_POWER.CP_BJ + 1 --最小普通牌权值
    for _, cardID in ipairs(cardIDs) do
        local power = CardLogic.getCardPowerById(cardID)
        if not CardLogic.isJokerByPower(power) then
            normalPowerCount = normalPowerCount + 1
            if maxNormalPower < power then
                maxNormalPower = power
            end
            if minNormalPower > power then
                minNormalPower = power
            end
        end
    end
    if minNormalPower + powerCount - 1 > CardEnum.CARD_POWER.CP_A and powerCount > 1 then
        minNormalPower = CardEnum.CARD_POWER.CP_A - powerCount + 1
    end

    return minNormalPower
end

-------------------------------------------
--将cardIDs数据插入到data中
-------------------------------------------
function CardLogic.insertCardIdsToData(data, cardIDs, insertCount)
    local count = insertCount or #cardIDs
    for i, v in ipairs(cardIDs) do
        if i <= count then
            table.insert(data, v)
        end
    end
end

-------------------------------------------
--判断手牌是否能一手出完
-------------------------------------------
function CardLogic.isCanPlayAllHandCardsOneStep(tHandCards)
    local handCardTotal = #tHandCards
    local tCardPower = {}
    for _, cardId in pairs(tHandCards) do
        local cardPower = CardLogic.getCardPowerById(cardId)
        table.insert(tCardPower, cardPower)
    end

    --先根据手牌数量筛选可能的情况，减少计算次数
    if handCardTotal <= 1 then
        return true
    elseif handCardTotal == 2 then
        return CardLogic.isDui(tCardPower)
    elseif handCardTotal == 3 then
        return CardLogic.isSanZhang(tCardPower)
            or CardLogic.isKingBomb(tCardPower)
    elseif handCardTotal == 4 then
        return CardLogic.isNormalBomb(tCardPower)
            or CardLogic.isKingBomb(tCardPower)
    elseif handCardTotal == 5 then
        --5张牌可以为炸弹、单顺
        return CardLogic.isNormalBomb(tCardPower) 
            or CardLogic.isDanShun(tCardPower)
    elseif handCardTotal < 9 then
        --6~8张牌可以为炸弹、单顺、双顺
        return CardLogic.isNormalBomb(tCardPower) 
            or CardLogic.isDanShun(tCardPower) 
            or CardLogic.isShuangShun(tCardPower)
    elseif handCardTotal <= 12 then
        --9~12张牌可以为炸弹、单顺、双顺、三顺、连炸
        return CardLogic.isNormalBomb(tCardPower) 
            or CardLogic.isDanShun(tCardPower) 
            or CardLogic.isShuangShun(tCardPower)
            or CardLogic.isSanShun(tCardPower)
            or CardLogic.isLianZha(tCardPower)
    else
        --12张以上为双顺、三顺、连炸（因为单个炸弹最多为12线，顺子最大3~A为12张）
        return CardLogic.isShuangShun(tCardPower)
            or CardLogic.isSanShun(tCardPower)
            or CardLogic.isLianZha(tCardPower)
    end
end

-------------------------------------------
--获取自由出牌普通牌（除炸弹）提示
-------------------------------------------
function CardLogic.getTipsDataFreedomNormal(tHandCards, resultData)
    local tDanZhang = {}
    local tDui = {}
    local tSanZhang = {}
    local tDanShun = {}
    local tShuangShun = {}
    local tSanShun = {}
    local tempDanShun = {} --单顺临时存储值
    local tempShuangShun = {} --双顺临时存储值
    local tempSanShun = {} --三顺临时存储值
    local tValueKeyData = CardLogic.switchCardIDsToPowerKey(tHandCards) --转换为[power] = {cardID1, cardID2, cardID3}

    --判读缓存的单顺是否已经满足条件
    local checkTempDanShun = function()
        if #tempDanShun >= 5 then
            table.insert(tDanShun, tempDanShun)
        end
        tempDanShun = {}
    end
    --判读缓存的双顺是否已经满足条件
    local checkTempShuangShun = function()
        if #tempShuangShun >= 2 * 3 then
            table.insert(tShuangShun, tempShuangShun)
        end
        tempShuangShun = {}
    end
    --判读缓存的三顺是否已经满足条件
    local checkTempSanShun = function()
        if #tempSanShun >= 3 * 3 then
            table.insert(tSanShun, tempSanShun)
        end
        tempSanShun = {}
    end
    --手牌仅剩王时

    if tValueKeyData[CardEnum.CARD_POWER.CP_SJ] and tValueKeyData[CardEnum.CARD_POWER.CP_BJ] and (#tValueKeyData[CardEnum.CARD_POWER.CP_SJ] + #tValueKeyData[CardEnum.CARD_POWER.CP_BJ] == #tHandCards) then
        if #tValueKeyData[CardEnum.CARD_POWER.CP_SJ] == 1 then
            table.insert(tDanZhang, clone(tValueKeyData[CardEnum.CARD_POWER.CP_SJ]))
        elseif #tValueKeyData[CardEnum.CARD_POWER.CP_SJ] == 2 then
            table.insert(tDui, clone(tValueKeyData[CardEnum.CARD_POWER.CP_SJ]))
        end
        if #tValueKeyData[CardEnum.CARD_POWER.CP_BJ] == 1 then
            table.insert(tDanZhang, clone(tValueKeyData[CardEnum.CARD_POWER.CP_BJ]))
        elseif #tValueKeyData[CardEnum.CARD_POWER.CP_BJ] == 2 then
            table.insert(tDui, clone(tValueKeyData[CardEnum.CARD_POWER.CP_BJ]))
        end
    else
        --按牌权值从小到大遍历3-k
        for cardPower = CardEnum.CARD_POWER.CP_3, CardEnum.CARD_POWER.CP_2 do
            local tempCardData = tValueKeyData[cardPower] or {}
            tempCardData = clone(tempCardData)
            local cardCount = #tempCardData --牌权对应手牌数量

            if cardCount == 1 then
                table.insert(tDanZhang, tempCardData)
                if CardEnum.CARD_POWER.CP_2 ~= cardPower then
                    for _, tempCardId in pairs(tempCardData) do
                        table.insert(tempDanShun, tempCardId)
                    end
                end

                checkTempShuangShun()
                checkTempSanShun()
            elseif cardCount == 2 then
                table.insert(tDui, tempCardData)
                if CardEnum.CARD_POWER.CP_2 ~= cardPower then
                    for _, tempCardId in pairs(tempCardData) do
                        table.insert(tempShuangShun, tempCardId)
                    end
                end

                checkTempDanShun()
                checkTempSanShun()
            elseif cardCount == 3 then
                table.insert(tSanZhang, tempCardData)
                if CardEnum.CARD_POWER.CP_2 ~= cardPower then
                    for _, tempCardId in pairs(tempCardData) do
                        table.insert(tempSanShun, tempCardId)
                    end
                end

                checkTempDanShun()
                checkTempShuangShun()
            else
                checkTempDanShun()
                checkTempShuangShun()
                checkTempSanShun()
            end
        end
    end

    for _, v in ipairs(tDanZhang) do
        table.insert(resultData, v)
    end
    for _, v in ipairs(tDui) do
        table.insert(resultData, v)
    end
    for _, v in ipairs(tSanZhang) do
        table.insert(resultData, v)
    end
    for _, v in ipairs(tDanShun) do
        table.insert(resultData, v)
    end
    for _, v in ipairs(tShuangShun) do
        table.insert(resultData, v)
    end
    for _, v in ipairs(tSanShun) do
        table.insert(resultData, v)
    end
end

-------------------------------------------
--提取百搭牌
-------------------------------------------
function CardLogic.getJokerDataFromCardIDs(cardIDs)
    local jokerData = {}
    for _, cardID in ipairs(cardIDs) do
        if CardLogic.isJokerByCardID(cardID) then
            table.insert(jokerData, cardID)
        end
    end

    table.sort(
        jokerData,
        function(a, b)
            return a < b
        end
    )

    return jokerData
end

-------------------------------------------
--自由出牌时炸弹提示
-------------------------------------------
function CardLogic.getTipsDataFreedomBomb(tHandCards, resultData)
    local tBombData = CardLogic.getBombDataFromCardIDs(tHandCards)
    --炸弹排序
    table.sort(
        tBombData,
        function(a, b)
            if a.jokerCount ~= b.jokerCount then
                return a.jokerCount < b.jokerCount
            end

            if a.lineCount ~= b.lineCount then
                return a.lineCount < b.lineCount
            end

            if a.power ~= b.power then
                return a.power < b.power
            end
            return false
        end
    )

    for _, v in ipairs(tBombData) do
        table.insert(resultData, v.data)
    end
end

function CardLogic.getBombDataFromCardIDs(tHandCards, outBombData)
    --转换为[power] = {cardID1, cardID2, cardID3}
    local tValueKeyData = CardLogic.switchCardIDsToPowerKey(tHandCards)
    --手牌中的百搭牌
    local jokerData = CardLogic.getJokerDataFromCardIDs(tHandCards)
    local jokerNumber = #jokerData
    local tBombData = {}
    local kingTotal = 0
    local kingData = {}
    --四王是否是最大的7线炸弹，在GameManager中添加isSiWangIsBig7Xian方法并返回true
    local isSiWangIsBig7Xian = false
    if CF.game:getModule("GameLayer"):getGameData().isSiWangIsBig7Xian then
        local tempBool = CF.game:getModule("GameLayer"):getGameData():isSiWangIsBig7Xian()
        if type(tempBool) == "boolean" and tempBool == true then
            isSiWangIsBig7Xian = true
        end
    end
    local isEightKing = CF.game:getModule("GameLayer"):getGameData():getEightKing()

    --相同连炸判断线数比较大小 901>504>405，在GameManager中添加isLianZhanCompareWithLian方法并返回true
    local isLianZhanCompareWithLian = false
    if CF.game:getModule("GameLayer"):getGameData().isLianZhanCompareWithLian then
        local tempBool = CF.game:getModule("GameLayer"):getGameData():isLianZhanCompareWithLian()
        if type(tempBool) == "boolean" and tempBool == true then
            isLianZhanCompareWithLian = true
        end
    end

    --按牌权值从小到大遍历(普通牌值炸弹)
    for cardPower = CardEnum.CARD_POWER.CP_3, CardEnum.CARD_POWER.CP_BJ do
        local tempCardData = tValueKeyData[cardPower] or {}
        local cardCount = #tempCardData --牌权对应手牌数量

        if CardLogic.isKingByPower(cardPower) then
            kingTotal = kingTotal + cardCount
            for _, kingCardID in pairs(tempCardData) do
                table.insert(kingData, kingCardID)
            end
        elseif cardCount > 0 and jokerNumber >= 4 - cardCount then
            local needJokerMin = 0
            if 4 - cardCount > 0 then
                needJokerMin = 4 - cardCount
            end
            for j = needJokerMin, jokerNumber do
                local tempBombData = clone(tempCardData)
                for i = 1, j do
                    table.insert(tempBombData, jokerData[i])
                end
                local bombData = {
                    jokerCount = j, --百搭牌数
                    lineCount = cardCount + j,
                    power = cardPower,
                    data = tempBombData
                }
                if outBombData == nil then
                    table.insert(tBombData, bombData)
                else
                    local selectCardType = CardEnum.CARDS_TYPE["CT_" .. bombData.lineCount .. "_JUNKO_1_CONTINUOUS"]
                    if bombData.lineCount > outBombData.lineCount then
                        table.insert(tBombData, bombData)
                    elseif bombData.lineCount == outBombData.lineCount then
                        if outBombData.cardType % 100 == 1 then
                            --出的是普通炸
                            local lastOutCardPower = CardLogic.getMinNormalPowerFromCardIDs(outBombData.tOutCards, 1)
                            if cardPower > lastOutCardPower then
                                table.insert(tBombData, bombData)
                            end
                        elseif outBombData.cardType == CardEnum.CARDS_TYPE.CT_3_KING then
                            --出的是王炸
                            table.insert(tBombData, bombData)
                        elseif outBombData.cardType == CardEnum.CARDS_TYPE.CT_4_KING and not isSiWangIsBig7Xian then
                            --出的是王炸
                            table.insert(tBombData, bombData)
                        elseif isEightKing and outBombData.cardType >= CardEnum.CARDS_TYPE.CT_5_KING then
                            table.insert(tBombData, bombData)
                        elseif
                            outBombData.cardType % 100 >= 2 and outBombData.cardType % 100 < 6 and selectCardType % 100 >= 2 and selectCardType % 100 < 6 and
                                outBombData.cardType % 100 > selectCardType % 100 and
                                isLianZhanCompareWithLian
                         then
                            table.insert(tBombData, bombData)
                        elseif (CardLogic.getGameType() == 10 or isLianZhanCompareWithLian) and outBombData.cardType % 100 >= 2 and outBombData.cardType % 100 < 6 and selectCardType % 100 == 1 then
                            --衢州开化，对方是连炸，我是纯炸 --add by xuwen01
                            table.insert(tBombData, bombData)
                        end
                    end
                end
            end
        end
    end

    --连炸
    --最大12线2连
    for xianNum = 4, 12 do
        local minLianNum = 3
        if xianNum >= 6 then
            minLianNum = 2
        end

        CardLogic.callLianZhaPowerKeyData(tBombData, tValueKeyData, jokerData, xianNum, minLianNum, outBombData)
    end

    --三王炸，天王炸,5-8王炸
    if kingTotal >= 3 then
        --四王是否是最大的8线炸弹，在GameManager中添加isSiWangIsBig8Xian方法并返回true
        local isSiWangIsBig8Xian = false
        if CF.game:getModule("GameLayer"):getGameData().isSiWangIsBig8Xian then
            local tempBool = CF.game:getModule("GameLayer"):getGameData():isSiWangIsBig8Xian()
            if type(tempBool) == "boolean" and tempBool == true and kingTotal == 4 then
                isSiWangIsBig8Xian = true
            end
        end
        local bombData = {
            jokerCount = kingTotal,
            lineCount = isSiWangIsBig8Xian and 8 or kingTotal + 3,
            power = CardEnum.CARD_POWER.CP_SJ,
            data = kingData
        }

        if kingTotal == 3 or not isSiWangIsBig7Xian then
            if outBombData == nil or (bombData.lineCount > outBombData.lineCount) then
                table.insert(tBombData, bombData)
            end
        else
            if outBombData == nil or (bombData.lineCount >= outBombData.lineCount) then
                table.insert(tBombData, bombData)
            end
        end
    end
    return tBombData
end

function CardLogic.getLianZhaPowerLineConf()
    local isLianZhaCanTakeWith2 = true --连炸是否可以带2
    --如果连炸不需要带2，在GameManager中添加isLianZhaCanTakeWith2方法并返回false
    if CF.game:getModule("GameLayer"):getGameData().isLianZhaCanTakeWith2 then
        local tempBool = CF.game:getModule("GameLayer"):getGameData():isLianZhaCanTakeWith2()
        if type(tempBool) == "boolean" and tempBool == false then
            isLianZhaCanTakeWith2 = false
        end
    end

    local conf = clone(LIANZHA_POWER_LINE)
    if isLianZhaCanTakeWith2 then
        return conf
    end
    conf[2] = nil
    return conf
end

function CardLogic.callLianZhaPowerKeyData(tBombData, powerKeyData, jokerData, xianNum, minLianNum, outBombData)
    local jokerNum = #jokerData
    local lianZhaPowerLineConf = CardLogic.getLianZhaPowerLineConf()
    --四王是否是最大的7线炸弹，在GameManager中添加isSiWangIsBig7Xian方法并返回true
    local isSiWangIsBig7Xian = false
    if CF.game:getModule("GameLayer"):getGameData().isSiWangIsBig7Xian then
        local tempBool = CF.game:getModule("GameLayer"):getGameData():isSiWangIsBig7Xian()
        if type(tempBool) == "boolean" and tempBool == true then
            isSiWangIsBig7Xian = true
        end
    end
    local isEightKing = CF.game:getModule("GameLayer"):getGameData():getEightKing()
    for type, v in ipairs(lianZhaPowerLineConf) do --两种（带2，不带2）
        local powerCardIDs2 = powerKeyData[CardEnum.CARD_POWER.CP_2] or {}
        local powerCount2 = #powerCardIDs2
        if type == 2 and xianNum - powerCount2 > jokerNum then
            --若为带2的情况，此时2不能组成炸弹，则无需再执行下面逻辑
            break
        end
        for startIndex = 1, #v - minLianNum + 1 do
            local tempBombData = {}
            local lianNum = 0
            local minSingleXianNum = 12
            local needJokerNum = 0
            local isHave2 = false --是否带2，在type==2时使用，如果type为2时，最终这个值为false，则此情况肯定已经在1处考虑
            for thisPowerIndex = startIndex, #v do
                local power = v[thisPowerIndex]
                local powerCardIDs = powerKeyData[power] or {}
                local powerCount = #powerCardIDs
                if power == CardEnum.CARD_POWER.CP_2 then
                    isHave2 = true
                end

                local bNeedBreak = false
                if powerCount >= xianNum then
                    local addCount = powerCount
                    --连炸不带
                    if not CF.game:getModule("GameLayer"):getGameData():getLianZhaBuDai() then
                        addCount = xianNum
                    end

                    for addCountIndex = 1, addCount do
                        table.insert(tempBombData, powerCardIDs[addCountIndex])
                    end

                    if minSingleXianNum > addCount then
                        minSingleXianNum = addCount
                    end
                    lianNum = lianNum + 1
                else
                    if needJokerNum + (xianNum - powerCount) > jokerNum then
                        bNeedBreak = true
                    else
                        for _, cardID in ipairs(powerCardIDs) do
                            table.insert(tempBombData, cardID)
                        end
                        for needIndex = needJokerNum + 1, needJokerNum + (xianNum - powerCount) do
                            table.insert(tempBombData, jokerData[needIndex])
                        end
                        needJokerNum = needJokerNum + (xianNum - powerCount)
                        if minSingleXianNum > xianNum then
                            minSingleXianNum = xianNum
                        end
                        lianNum = lianNum + 1
                    end
                end

                if bNeedBreak or thisPowerIndex == #v then
                    --只挑选当前需要的线数
                    if CardLogic.checkLianZhaByXianAndLianNum(minSingleXianNum, lianNum) and lianNum >= minLianNum and minSingleXianNum == xianNum and (type == 1 or (type == 2 and isHave2)) then
                        local bombData = {
                            jokerCount = needJokerNum,
                            lineCount = lianNum + xianNum,
                            power = v[thisPowerIndex - 1] / 100,
                            data = clone(tempBombData)
                        }
                        --衢州双扣的衢州玩法，5线以上连炸算多一线
                        if CardLogic.getGameType() == CF.GameDefine.ENUM_GAME_TYPE.KW_NUM_GAME_TYPE_HUOPING_QUZHOU then
                            if xianNum >= 5 then
                                lianNum = lianNum + 1
                            end
                            bombData.lineCount = lianNum + xianNum
                        end
                        if not outBombData then
                            table.insert(tBombData, bombData)
                            break
                        end
                        local selectCardType = xianNum * 100 + lianNum
                        if bombData.lineCount > outBombData.lineCount then
                            table.insert(tBombData, bombData)
                        elseif bombData.lineCount == outBombData.lineCount then
                            if outBombData.cardType == CardEnum.CARDS_TYPE.CT_3_KING then
                                table.insert(tBombData, bombData)
                            elseif outBombData.cardType == CardEnum.CARDS_TYPE.CT_4_KING and not isSiWangIsBig7Xian then
                                table.insert(tBombData, bombData)
                            elseif isEightKing and outBombData.cardType >= CardEnum.CARDS_TYPE.CT_5_KING then
                                table.insert(tBombData, bombData)
                            elseif selectCardType == outBombData.cardType and CardLogic.isBiggerPowerSameLine(selectCardType, tempBombData, outBombData.tOutCards) then
                                --出的是连炸
                                table.insert(tBombData, bombData)
                            end
                        end
                    end
                    break
                end
            end
        end
    end
end

-------------------------------------------
--大连炸拆成小连炸
-------------------------------------------
function CardLogic.splitBigLianZhaToSmall()
end

-------------------------------------------
--是否王牌，王牌不一定为百搭牌
-------------------------------------------
function CardLogic.isKingByPower(cardPower)
    if cardPower == CardEnum.CARD_POWER.CP_BJ or cardPower == CardEnum.CARD_POWER.CP_SJ then
        return true
    end
    return false
end

-------------------------------------------
--是否百搭牌,千变时大小王均为百搭，百变时大王为百搭
-------------------------------------------
function CardLogic.isJokerByPower(cardPower)
    local gameData = CF.game:getModule("GameLayer"):getGameData()
    if cardPower == CardEnum.CARD_POWER.CP_BJ then
        return gameData:isJokerById(CardEnum.CARD_ID.CID_BJ)
    end
    if cardPower == CardEnum.CARD_POWER.CP_SJ then
        return gameData:isJokerById(CardEnum.CARD_ID.CID_SJ)
    end
    return false
end

function CardLogic.isJokerByCardID(cardID)
    local gameData = CF.game:getModule("GameLayer"):getGameData()
    return gameData:isJokerById(cardID)
end

-------------------------------------------
--是否对子
-------------------------------------------
function CardLogic.isDui(tCardPower)
    local cardTotal = #tCardPower
    if cardTotal ~= 2 then
        return false
    end

    if tCardPower[1] == tCardPower[2] then
        return true
    end
    --其中一张为百搭牌，可以凑成对子
    if CardLogic.isJokerByPower(tCardPower[1]) or CardLogic.isJokerByPower(tCardPower[2]) then
        return true
    end
    local isOneBJAndOneSJCanDui = false --一张大王加一张小王是否可以当对子出
    --如果一张大王加一张小王是否可以当对子出，在GameManager中添加isOneBJAndOneSJCanDui方法并返回true
    if CF.game:getModule("GameLayer"):getGameData().isOneBJAndOneSJCanDui then
        local tempBool = CF.game:getModule("GameLayer"):getGameData():isOneBJAndOneSJCanDui()
        if type(tempBool) == "boolean" and tempBool == true then
            isOneBJAndOneSJCanDui = true
        end
    end

    if isOneBJAndOneSJCanDui then
        if CardLogic.isKingByPower(tCardPower[1]) and CardLogic.isKingByPower(tCardPower[2]) then
            return true
        end
    end

    return false
end

-------------------------------------------
--是否三张或者普通炸弹
--cardNum 3表示三张，4表示炸弹
-------------------------------------------
function CardLogic.checkSanZhangOrBomb(tCardPower, cardNum)
    if CardLogic.isKingBomb(tCardPower) then
        return false
    end
    local cardTotal = #tCardPower
    if (cardNum == 3 and cardTotal ~= 3) or (cardNum == 4 and cardTotal < 4) then
        return false
    end

    local tempCardPower = CardEnum.CARD_POWER.CP_NONE --临时记录cardPower（大小王不记录）
    for _, cardPower in pairs(tCardPower) do
        --除百搭外只能有一种牌值
        if not CardLogic.isJokerByPower(cardPower) then
            if tempCardPower ~= CardEnum.CARD_POWER.CP_NONE and tempCardPower ~= cardPower then
                return false
            end
            tempCardPower = cardPower
        end
    end
    return true
end

-------------------------------------------
--是否三张
-------------------------------------------
function CardLogic.isSanZhang(tCardPower)
    return CardLogic.checkSanZhangOrBomb(tCardPower, 3)
end

-------------------------------------------
--根据传入牌值判断是否是炸弹
-------------------------------------------
function CardLogic.isNormalBomb(tCardPower)
    return CardLogic.checkSanZhangOrBomb(tCardPower, 4)
end

-------------------------------------------
--根据传入牌值判断是否是王炸
-------------------------------------------
function CardLogic.isKingBomb(tCardPower)
    local kingNum = 3
    for _, cardPower in pairs(tCardPower) do
        if not CardLogic.isKingByPower(cardPower) then
            return false, 0
        end
        kingNum = kingNum + 1
    end
    return kingNum >= 3, kingNum
end

-------------------------------------------
--是否单顺
-------------------------------------------
function CardLogic.isDanShun(tCardPower)
    local cardTotal = #tCardPower
    --3到A为最大单顺，只有12张
    if cardTotal < 5 or cardTotal > 12 then
        return false
    end

    local sortFunc = function(a, b)
        return a < b
    end
    table.sort(tCardPower, sortFunc)

    local jokerReplaceData = {}
    local needJokerNum = 0 --如果凑齐顺子需要的百搭牌数量
    local jokerNum = 0 --拥有的百搭牌数
    local lastCardPower = CardEnum.CARD_POWER.CP_NONE
    for index, cardPower in ipairs(tCardPower) do
        --存在2，必定组不成顺
        if cardPower == CardEnum.CARD_POWER.CP_2 then
            return false
        end
        if index == 1 then
            --5张牌以上,第一张牌必定不为百搭（一共4张王）
            lastCardPower = cardPower
        elseif lastCardPower == cardPower then
            --存在一样的非百搭牌
            return false
        elseif not CardLogic.isJokerByPower(cardPower) then
            if cardPower - lastCardPower > 1 then
                needJokerNum = needJokerNum + (cardPower - lastCardPower - 1)
                --百搭牌转换为哪几张牌
                for replacePower = lastCardPower + 1, cardPower - 1 do
                    table.insert(jokerReplaceData, replacePower)
                end
            end
            lastCardPower = cardPower
        else
            jokerNum = jokerNum + 1
        end
    end
    if needJokerNum > jokerNum then
        return false
    end
    return true, jokerReplaceData
end

-------------------------------------------
--双顺和三顺的判断逻辑相同
--shunNum 2表示双顺，3表示三顺
-------------------------------------------
function CardLogic.checkShuangShunOrSanShun(tCardPower, shunNum)
    local cardTotal = #tCardPower
    if cardTotal < 3 * shunNum or cardTotal % shunNum ~= 0 then
        return false
    end
    --3到A为最大顺，只有12张(只有)
    if cardTotal > shunNum * 13 then
        return false
    end

    local jokerCardTotal = 0 --百搭牌数量
    local normalCardPowerNum = 0 --牌种类数量
    local minCardPower = CardEnum.CARD_POWER.CP_NONE
    local maxCardPower = CardEnum.CARD_POWER.CP_NONE
    local tCardPowerNum = {}
    for _, cardPower in pairs(tCardPower) do
        --存在2，必定组不成顺
        if cardPower == CardEnum.CARD_POWER.CP_2 then
            return false
        end
        if CardLogic.isKingByPower(cardPower) then
            if CardLogic.isJokerByPower(cardPower) then
                jokerCardTotal = jokerCardTotal + 1
            else
                --存在不是百搭的王牌，必定组不成顺
                return false
            end
        else
            --最小牌权值
            if minCardPower == CardEnum.CARD_POWER.CP_NONE or minCardPower > cardPower then
                minCardPower = cardPower
            end
            --最大牌权值
            if maxCardPower == CardEnum.CARD_POWER.CP_NONE or maxCardPower < cardPower then
                maxCardPower = cardPower
            end
            if not tCardPowerNum[cardPower] then
                tCardPowerNum[cardPower] = 1
                if normalCardPowerNum >= cardTotal / shunNum then
                    return false
                else
                    normalCardPowerNum = normalCardPowerNum + 1
                end
            elseif tCardPowerNum[cardPower] >= shunNum then
                return false
            else
                tCardPowerNum[cardPower] = tCardPowerNum[cardPower] + 1
            end
        end
    end

    local jokerReplaceData = {}
    local needJokerNumber = 0
    for i = minCardPower, maxCardPower do
        local thisPowerNum = tCardPowerNum[i] or 0
        if shunNum > thisPowerNum then
            needJokerNumber = needJokerNumber + (shunNum - thisPowerNum)
            --百搭牌转换为哪几张牌
            for _ = 1, shunNum - thisPowerNum do
                table.insert(jokerReplaceData, i)
            end
        end
        --凑成双顺或三顺所需百搭牌数
        if needJokerNumber > jokerCardTotal then
            return false
        end
    end

    return true, jokerReplaceData
end

-------------------------------------------
--是否双顺
-------------------------------------------
function CardLogic.isShuangShun(tCardPower)
    return CardLogic.checkShuangShunOrSanShun(tCardPower, 2)
end

-------------------------------------------
--是否三顺
-------------------------------------------
function CardLogic.isSanShun(tCardPower)
    return CardLogic.checkShuangShunOrSanShun(tCardPower, 3)
end

-------------------------------------------
--是否连炸
--bReturnNum 是否需要返回线数
-------------------------------------------

function CardLogic.isLianZha(tCardPower)
    local bLianZha1, xianNum, lianNum, jokerReplaceData = CardLogic.isLianZhaWith2(tCardPower, 1)
    if bLianZha1 then
        return bLianZha1, xianNum, lianNum, jokerReplaceData
    end

    local bLianZha2, xianNum2, lianNum2, jokerReplaceData2 = CardLogic.isLianZhaWith2(tCardPower, 2)
    return bLianZha2, xianNum2, lianNum2, jokerReplaceData2
end

function CardLogic.isLianZhaWith2(tCardPower, index)
    local lianZhaPowerLineConf = CardLogic.getLianZhaPowerLineConf()
    local PowerLine = lianZhaPowerLineConf[index]
    if not PowerLine then
        return false, 0, 0
    end
    local cardTotal = #tCardPower
    --最少连炸6线2连
    if cardTotal < 12 then
        return false, 0, 0
    end

    local getPowerIndexFunc = function(power)
        for i, v in ipairs(PowerLine) do
            if v == power then
                return i
            end
        end
        return 0
    end

    local jokerCardTotal = 0 --百搭牌数量
    local normalCardPowerNum = 0 --牌种类数量
    local minCardPowerIndex = 0
    local maxCardPowerIndex = 0
    local tCardPowerIndexNum = {}
    for _, cardPower in pairs(tCardPower) do
        local cardPowerIndex = getPowerIndexFunc(cardPower)
        if cardPowerIndex == 0 then
            if CardLogic.isJokerByPower(cardPower) then
                jokerCardTotal = jokerCardTotal + 1
            else
                --存在不是百搭的王牌，必定组不成连炸
                return false, 0, 0
            end
        else
            --最小牌权序号
            if minCardPowerIndex == 0 or minCardPowerIndex > cardPowerIndex then
                minCardPowerIndex = cardPowerIndex
            end
            --最大牌权序号
            if maxCardPowerIndex == 0 or maxCardPowerIndex < cardPowerIndex then
                maxCardPowerIndex = cardPowerIndex
            end
            if not tCardPowerIndexNum[cardPowerIndex] then
                tCardPowerIndexNum[cardPowerIndex] = 1
                if normalCardPowerNum >= cardTotal / 4 then
                    return false, 0, 0
                else
                    normalCardPowerNum = normalCardPowerNum + 1
                end
            else
                tCardPowerIndexNum[cardPowerIndex] = tCardPowerIndexNum[cardPowerIndex] + 1
            end
        end
    end

    local everyPowerMinNumber = 4
    local isJokerReplaceAllCard = false --王是不是替代缺的整个牌
    local indexList = {}
    for key, _ in pairs(tCardPowerIndexNum) do
        table.insert(indexList, key)
    end
    table.sort(indexList)
    for i = 1, #indexList - 1 do
        if indexList[i] + 1 ~= indexList[i + 1] then
            isJokerReplaceAllCard = true
            break
        end
    end

    --连炸不带
    if not CF.game:getModule("GameLayer"):getGameData():getLianZhaBuDai() then
        if cardTotal % normalCardPowerNum > 0 or isJokerReplaceAllCard then
            if everyPowerMinNumber == 4 and jokerCardTotal >= 4 then
                normalCardPowerNum = normalCardPowerNum + 1
            end
        end
        if cardTotal % normalCardPowerNum > 0 then
            return false, 0, 0
        end
        everyPowerMinNumber = cardTotal / normalCardPowerNum
    else
        if isJokerReplaceAllCard then
            if everyPowerMinNumber == 4 and jokerCardTotal >= 4 then
                normalCardPowerNum = normalCardPowerNum + 1
            end
        end
    end

    if normalCardPowerNum == 1 then
        --只有一种普通牌，肯定不是连炸
        return false, 0, 0
    elseif normalCardPowerNum == 2 then
        --极端情况考虑4个王，则可以4线3连或者多线2连，多线2连肯定比4线3连大，所以此处只考虑多线2连即可
        everyPowerMinNumber = 6
    end

    local jokerReplaceData = {}
    for i = minCardPowerIndex, maxCardPowerIndex do
        local thisPowerNum = tCardPowerIndexNum[i] or 0
        if everyPowerMinNumber > thisPowerNum then
            local needJokerNumber = everyPowerMinNumber - thisPowerNum
            if needJokerNumber > jokerCardTotal then
                return false, 0, 0
            end
            --百搭牌转换为哪几张牌
            for _ = 1, everyPowerMinNumber - thisPowerNum do
                table.insert(jokerReplaceData, PowerLine[i])
            end
            --将普通牌数增加，百搭牌数减少（百搭牌转换为普通牌）
            tCardPowerIndexNum[i] = everyPowerMinNumber
            jokerCardTotal = jokerCardTotal - needJokerNumber
        end
    end

    local tCardPowerNum = {}
    for k, v in pairs(tCardPowerIndexNum) do
        local tmpPower = PowerLine[k]
        tCardPowerNum[tmpPower] = v
    end
    local tCardPowerList = {}
    for key, _ in pairs(tCardPowerNum) do
        table.insert(tCardPowerList, key)
    end
    table.sort(tCardPowerList)

    --百搭牌还有多余
    --如果是4线并且剩余4张王，则增加连
    if jokerCardTotal >= 4 and everyPowerMinNumber == 4 then
        --转化为牌数最少的那张牌
        --        local maxPower = tCardPowerList[#tCardPowerList]
        --        local minPower = tCardPowerList[1]
        --        --判断4王放到最前还是最后是最大的牌型
        --        if index == 1 then  --先判断不带2的牌型
        --            if maxPower == PowerLine[#PowerLine] then
        --                tCardPowerNum[minPower-1] = 4
        --                for i = 1, 4 do
        --                    table.insert(jokerReplaceData, minPower-1)
        --                end
        --            else
        --                tCardPowerNum[maxPower+1] = 4
        --                for i = 1, 4 do
        --                    table.insert(jokerReplaceData, maxPower+1)
        --                end
        --            end
        --        else --带2的连炸
        --            local maxCardIndex = indexList[#indexList]
        --            local maxPower = PowerLine[maxCardIndex+1]
        --            tCardPowerNum[maxPower] = 4
        --            for i = 1, 4 do
        --                table.insert(jokerReplaceData, maxPower)
        --            end
        --        end
        --        jokerCardTotal = 0
        --        normalCardPowerNum = normalCardPowerNum + 1
        local tmpMinNum1, tmpCardPowerNum1, tmpJokerReplaceData1, tmpNormalCardPowerNum1 =
            CardLogic.changeToMoreLian(tCardPowerList, index, PowerLine, clone(tCardPowerNum), clone(jokerReplaceData), indexList, clone(normalCardPowerNum))
        local tmpMinNum2, tmpCardPowerNum2, tmpJokerReplaceData2, tmpNormalCardPowerNum2 =
            CardLogic.changeToMoreXian(jokerCardTotal, clone(tCardPowerNum), clone(jokerReplaceData), clone(normalCardPowerNum))
        if (tmpMinNum1 + tmpNormalCardPowerNum1) <= (tmpMinNum2 + tmpNormalCardPowerNum2) then
            tCardPowerNum = tmpCardPowerNum2
            normalCardPowerNum = tmpNormalCardPowerNum2
            jokerReplaceData = tmpJokerReplaceData2
        else
            tCardPowerNum = tmpCardPowerNum1
            normalCardPowerNum = tmpNormalCardPowerNum1
            jokerReplaceData = tmpJokerReplaceData1
        end
    elseif jokerCardTotal > 0 then
        for _ = 1, jokerCardTotal do
            local tempMinNumPower = CardLogic.getMinMunberCardPower(tCardPowerNum)
            tCardPowerNum[tempMinNumPower] = tCardPowerNum[tempMinNumPower] + 1

            --百搭牌转换为哪几张牌
            table.insert(jokerReplaceData, tempMinNumPower)
        end
    end
    local _, tempMinNum = CardLogic.getMinMunberCardPower(tCardPowerNum)

    if not CardLogic.checkLianZhaByXianAndLianNum(tempMinNum, normalCardPowerNum) then
        return false, 0, 0
    end
    return true, tempMinNum, normalCardPowerNum, jokerReplaceData
end

function CardLogic.changeToMoreLian(tCardPowerList, index, PowerLine, tCardPowerNum, jokerReplaceData, indexList, normalCardPowerNum)
    local maxPower = tCardPowerList[#tCardPowerList]
    local minPower = tCardPowerList[1]
    --判断4王放到最前还是最后是最大的牌型
    if index == 1 then --先判断不带2的牌型
        if maxPower == PowerLine[#PowerLine] then
            tCardPowerNum[minPower - 1] = 4
            for _ = 1, 4 do
                table.insert(jokerReplaceData, minPower - 1)
            end
        else
            tCardPowerNum[maxPower + 1] = 4
            for _ = 1, 4 do
                table.insert(jokerReplaceData, maxPower + 1)
            end
        end
    else --带2的连炸
        local maxCardIndex = indexList[#indexList]
        local maxPower2 = PowerLine[maxCardIndex + 1]
        tCardPowerNum[maxPower2] = 4
        for _ = 1, 4 do
            table.insert(jokerReplaceData, maxPower2)
        end
    end
    normalCardPowerNum = normalCardPowerNum + 1
    local _, tempMinNum = CardLogic.getMinMunberCardPower(tCardPowerNum)
    return tempMinNum, tCardPowerNum, jokerReplaceData, normalCardPowerNum
end

function CardLogic.changeToMoreXian(jokerCardTotal, tCardPowerNum, jokerReplaceData, normalCardPowerNum)
    for _ = 1, jokerCardTotal do
        local tempMinNumPower = CardLogic.getMinMunberCardPower(tCardPowerNum)
        tCardPowerNum[tempMinNumPower] = tCardPowerNum[tempMinNumPower] + 1
        --百搭牌转换为哪几张牌
        table.insert(jokerReplaceData, tempMinNumPower)
    end
    local _, tempMinNum = CardLogic.getMinMunberCardPower(tCardPowerNum)
    return tempMinNum, tCardPowerNum, jokerReplaceData, normalCardPowerNum
end

function CardLogic.checkLianZhaByXianAndLianNum(xianNum, lianNum)
    local gameId = CF.roomData:getGameID()
    if CF.game:getModule("GameLayer"):getGameData():IsInTable(gameId, CF.GameDefine.GAME_ID_CANNOT_BAIBIAN_LIANZHA_2) then
        --百变不能2连
        local gameData = CF.game:getModule("GameLayer"):getGameData()
        --小王不为百搭，则为百变
        if not gameData:isJokerById(CardEnum.CARD_ID.CID_SJ) then
            if lianNum == 2 then
                return false
            end
        end
    end
    -- 常山/开化双扣，连炸不能小于3连
    if (CardLogic.getGameType() == CF.GameDefine.ENUM_GAME_TYPE.KW_NUM_GAME_TYPE_CHANGSHAN or 
        CardLogic.getGameType() == CF.GameDefine.ENUM_GAME_TYPE.KW_NUM_GAME_TYPE_KAIHUA) and
        lianNum == 2 then
            return false
    end
    return true
end

function CardLogic.getMinMunberCardPower(tCardPowerNum)
    local tempMinNum = 99
    local tempMinNumPower = CardEnum.CARD_POWER.CP_NONE
    for tempPower, tempNum in pairs(tCardPowerNum) do
        if tempNum < tempMinNum then
            tempMinNum = tempNum
            tempMinNumPower = tempPower
        end
    end
    return tempMinNumPower, tempMinNum
end

function CardLogic.getMaxMunberCardPower(tCardPowerNum)
    local tempMaxNum = 0
    local tempMaxNumPower = CardEnum.CARD_POWER.CP_NONE
    for tempPower, tempNum in pairs(tCardPowerNum) do
        if tempNum > tempMaxNum then
            tempMaxNum = tempNum
            tempMaxNumPower = tempPower
        end
    end
    return tempMaxNumPower, tempMaxNum
end

-------------------------------------------
--判断牌是否可以打出（是否符合牌型）
-------------------------------------------
function CardLogic.getCardType(cardIDs)
    if cardIDs == nil or #cardIDs <= 0 then
        return {{type = CardEnum.CARDS_TYPE.CT_0_JUNKO_0_CONTINUOUS}}
    end
    local cardTotal = #cardIDs
    local tCardPower = {}
    for _, cardId in pairs(cardIDs) do
        local cardPower = CardLogic.getCardPowerById(cardId)
        table.insert(tCardPower, cardPower)
    end

    --先根据手牌数量筛选可能的情况，减少计算次数
    if cardTotal == 1 then
        return {{type = CardEnum.CARDS_TYPE.CT_1_JUNKO_1_CONTINUOUS}}
    elseif cardTotal == 2 then
        if CardLogic.isDui(tCardPower) then
            return {{type = CardEnum.CARDS_TYPE.CT_2_JUNKO_1_CONTINUOUS}}
        end
    elseif cardTotal == 3 then
        if CardLogic.isKingBomb(tCardPower) then
            return {{type = CardEnum.CARDS_TYPE.CT_3_KING}}
        end
        if CardLogic.isSanZhang(tCardPower) then
            return {{type = CardEnum.CARDS_TYPE.CT_3_JUNKO_1_CONTINUOUS}}
        end
    elseif cardTotal == 4 then
        if CardLogic.isKingBomb(tCardPower) then
            return {{type = CardEnum.CARDS_TYPE.CT_4_KING}}
        end
        if CardLogic.isNormalBomb(tCardPower) then
            return {{type = CardEnum.CARDS_TYPE.CT_4_JUNKO_1_CONTINUOUS}}
        end
    elseif cardTotal == 5 then
        --常山5王特殊判断
        if CardLogic.isKingBomb(tCardPower) then
            return {{type = CardEnum.CARDS_TYPE.CT_5_KING}}
        end
        --5张牌可以为炸弹、单顺
        if CardLogic.isNormalBomb(tCardPower) then
            return {{type = CardEnum.CARDS_TYPE.CT_5_JUNKO_1_CONTINUOUS}}
        end

        local isDanShun, jokerReplaceData = CardLogic.isDanShun(tCardPower)
        if isDanShun then
            return {{type = CardEnum.CARDS_TYPE.CT_1_JUNKO_5_CONTINUOUS, jokerReplaceData = jokerReplaceData}}
        end
    elseif cardTotal < 9 then
        --常山6王特殊判断
        if cardTotal == 6 then
            if CardLogic.isKingBomb(tCardPower) then
                return {{type = CardEnum.CARDS_TYPE.CT_6_KING}}
            end
        end
        --千变7王特殊判断
        if cardTotal == 7 then
            if CardLogic.isKingBomb(tCardPower) then
                return {{type = CardEnum.CARDS_TYPE.CT_7_KING}}
            end
        end
        --千变8王特殊判断
        if cardTotal == 8 then
            if CardLogic.isKingBomb(tCardPower) then
                return {{type = CardEnum.CARDS_TYPE.CT_8_KING}}
            end
        end
        --6~8张牌可以为炸弹、单顺、双顺
        if CardLogic.isNormalBomb(tCardPower) then
            return {{type = CardEnum.CARDS_TYPE["CT_" .. cardTotal .. "_JUNKO_1_CONTINUOUS"]}}
        end

        local cardTypeArr = {}
        local isDanShun, jokerReplaceData = CardLogic.isDanShun(tCardPower)
        if isDanShun then
            table.insert(
                cardTypeArr,
                {
                    type = CardEnum.CARDS_TYPE["CT_1_JUNKO_" .. cardTotal .. "_CONTINUOUS"],
                    jokerReplaceData = jokerReplaceData
                }
            )
        end

        local isShuangShun, jokerReplaceData2 = CardLogic.isShuangShun(tCardPower)
        if isShuangShun then
            table.insert(
                cardTypeArr,
                {
                    type = CardEnum.CARDS_TYPE["CT_2_JUNKO_" .. (cardTotal / 2) .. "_CONTINUOUS"],
                    jokerReplaceData = jokerReplaceData2
                }
            )
        end

        if #cardTypeArr > 0 then
            return cardTypeArr
        end
    elseif cardTotal <= 12 then
        --9~12张牌可以为炸弹、单顺、双顺、三顺、连炸
        if CardLogic.isNormalBomb(tCardPower) then
            return {{type = CardEnum.CARDS_TYPE["CT_" .. cardTotal .. "_JUNKO_1_CONTINUOUS"]}}
        end

        local isLianZha, xianNum, lianNum, jokerReplaceData = CardLogic.isLianZha(tCardPower, true)
        if isLianZha then
            return {{type = CardEnum.CARDS_TYPE["CT_" .. xianNum .. "_JUNKO_" .. lianNum .. "_CONTINUOUS"], jokerReplaceData = jokerReplaceData}}
        end

        local cardTypeArr = {}
        local isDanShun, jokerReplaceData2 = CardLogic.isDanShun(tCardPower)
        if isDanShun then
            table.insert(
                cardTypeArr,
                {
                    type = CardEnum.CARDS_TYPE["CT_1_JUNKO_" .. cardTotal .. "_CONTINUOUS"],
                    jokerReplaceData = jokerReplaceData2
                }
            )
        end

        local isShuangShun, jokerReplaceData3 = CardLogic.isShuangShun(tCardPower)
        if isShuangShun then
            table.insert(
                cardTypeArr,
                {
                    type = CardEnum.CARDS_TYPE["CT_2_JUNKO_" .. (cardTotal / 2) .. "_CONTINUOUS"],
                    jokerReplaceData = jokerReplaceData3
                }
            )
        end

        local isSanShun, jokerReplaceData4 = CardLogic.isSanShun(tCardPower)
        if isSanShun then
            table.insert(
                cardTypeArr,
                {
                    type = CardEnum.CARDS_TYPE["CT_3_JUNKO_" .. (cardTotal / 3) .. "_CONTINUOUS"],
                    jokerReplaceData = jokerReplaceData4
                }
            )
        end

        if #cardTypeArr > 0 then
            return cardTypeArr
        end
    else
        -- 12张以上也要判断常规炸弹，千变八王
        if cardTotal <= 16 and CardLogic.isNormalBomb(tCardPower) then
            return {{type = CardEnum.CARDS_TYPE["CT_" .. cardTotal .. "_JUNKO_1_CONTINUOUS"]}}
        end
        --12张以上为双顺、三顺、连炸（因为单个炸弹最多为12线，顺子最大3~A为12张）
        local isLianZha, xianNum, lianNum, jokerReplaceData = CardLogic.isLianZha(tCardPower, true)
        if isLianZha then
            return {{type = CardEnum.CARDS_TYPE["CT_" .. xianNum .. "_JUNKO_" .. lianNum .. "_CONTINUOUS"], jokerReplaceData = jokerReplaceData}}
        end

        local cardTypeArr = {}
        local isShuangShun, jokerReplaceData2 = CardLogic.isShuangShun(tCardPower)
        if isShuangShun then
            table.insert(
                cardTypeArr,
                {
                    type = CardEnum.CARDS_TYPE["CT_2_JUNKO_" .. (cardTotal / 2) .. "_CONTINUOUS"],
                    jokerReplaceData = jokerReplaceData2
                }
            )
        end

        local isSanShun, jokerReplaceData3 = CardLogic.isSanShun(tCardPower)
        if isSanShun then
            table.insert(
                cardTypeArr,
                {
                    type = CardEnum.CARDS_TYPE["CT_3_JUNKO_" .. (cardTotal / 3) .. "_CONTINUOUS"],
                    jokerReplaceData = jokerReplaceData3
                }
            )
        end

        if #cardTypeArr > 0 then
            return cardTypeArr
        end
    end

    return {{type = CardEnum.CARDS_TYPE.CT_0_JUNKO_0_CONTINUOUS}}
end

function CardLogic.getCardIDsWithJokerReplaceData(cardIDs, jokerReplaceData)
    if jokerReplaceData == nil then
        jokerReplaceData = {}
    end
    local powerData = {}
    for _, cardID in ipairs(cardIDs) do
        local tempPowerObj = {}
        tempPowerObj.cardID = cardID
        tempPowerObj.power = CardLogic.getCardPowerById(cardID)
        if CardLogic.isJokerByCardID(cardID) and jokerReplaceData[1] ~= nil then
            tempPowerObj.power = jokerReplaceData[1]
            table.remove(jokerReplaceData, 1)
        end
        table.insert(powerData, tempPowerObj)
    end

    table.sort(
        powerData,
        function(a, b)
            if a.power ~= b.power then
                return a.power < b.power
            end
            return a.cardID < b.cardID
        end
    )

    local finalCardIDs = {}
    for _, obj in ipairs(powerData) do
        table.insert(finalCardIDs, obj.cardID)
    end
    return finalCardIDs
end

-------------------------------------------
--根据cardType获取炸弹的线数
-------------------------------------------
function CardLogic.GetBombLineNumberByType(cardType)
    local xian = 0
    --非炸弹
    if cardType <= CardEnum.CARDS_TYPE.CT_4_JUNKO_0_CONTINUOUS then
        return xian
    end
    --王炸
    if cardType > CardEnum.CARDS_TYPE.CT_0_KING then
        --四王是否是最大的8线炸弹，在GameManager中添加isSiWangIsBig8Xian方法并返回true
        local isSiWangIsBig8Xian = false
        if CF.game:getModule("GameLayer"):getGameData().isSiWangIsBig8Xian then
            local tempBool = CF.game:getModule("GameLayer"):getGameData():isSiWangIsBig8Xian()
            if type(tempBool) == "boolean" and tempBool == true and cardType == CardEnum.CARDS_TYPE.CT_4_KING then
                isSiWangIsBig8Xian = true
            end
        end
        xian = isSiWangIsBig8Xian and 8 or cardType - CardEnum.CARDS_TYPE.CT_0_KING
        return xian
    end

    if math.floor(cardType % 100) == 1 then
        xian = math.floor(cardType / 100)
    else
        xian = math.floor(cardType / 100) + math.floor(cardType % 100)
    end
    return xian
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
function CardLogic.getCardIDsBySortType(sortType, cardIDs)
    if CardLogic.isBackHandCards(cardIDs) then
        return cardIDs
    end
    local resultCardIDs = {}
    local tCardPower = CardLogic.switchCardIDsToPowerKey(cardIDs)

    --先将每一种power内部排序
    for i = CardEnum.CARD_POWER.CP_3, CardEnum.CARD_POWER.CP_BJ do
        if tCardPower[i] then
            table.sort(
                tCardPower[i],
                function(a, b)
                    return a < b
                end
            )
        end
    end
    if sortType == CardLogic.SrotType.CardPower then
        for i = CardEnum.CARD_POWER.CP_3, CardEnum.CARD_POWER.CP_BJ do
            local tempPowerData = tCardPower[i] or {}
            for _, cardID in ipairs(tempPowerData) do
                table.insert(resultCardIDs, cardID)
            end
        end
    else
        local tempCardNumTable = {}
        for i = CardEnum.CARD_POWER.CP_3, CardEnum.CARD_POWER.CP_BJ do
            local tempPowerData = tCardPower[i] or {}
            local cardNum = #tempPowerData
            if not tempCardNumTable[cardNum] then
                tempCardNumTable[cardNum] = {}
            end
            table.insert(tempCardNumTable[cardNum], i)
        end

        --一样的牌最多8张
        for cardNumIndex = 1, 8 do
            local tempPowerTable = tempCardNumTable[cardNumIndex] or {}
            for _, tempPower in ipairs(tempPowerTable) do
                for _, cardID in ipairs(tCardPower[tempPower]) do
                    --先排除大小王
                    if cardID ~= CardEnum.CARD_ID.CID_SJ and cardID ~= CardEnum.CARD_ID.CID_BJ then
                        table.insert(resultCardIDs, cardID)
                    end
                end
            end
        end

        --插入大小王
        for i = CardEnum.CARD_POWER.CP_SJ, CardEnum.CARD_POWER.CP_BJ do
            local tempPowerData = tCardPower[i] or {}
            for _, cardID in ipairs(tempPowerData) do
                table.insert(resultCardIDs, cardID)
            end
        end
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
end

-------------------------------------------
--从data中取前几张牌
-------------------------------------------
function CardLogic.getCardIDsFromDataByCount(data, count)
    local cardIDs = {}
    for i = 1, count do
        table.insert(cardIDs, data[i])
    end
    return cardIDs
end

-------------------------------------------
--判断是否可以出牌
------------------------------------------
function CardLogic.checkCanOutCard(lastOutCardIDs, lastOutCardType, selectCardIDs)
    local selectCardTypeArr = CardLogic.getCardType(selectCardIDs)
    for _, obj in ipairs(selectCardTypeArr) do
        local selectCardType = obj.type
        if selectCardType == CardEnum.CARDS_TYPE.CT_0_JUNKO_0_CONTINUOUS then
            return false
        end
    end

    --自由出牌，则只要有牌型就能出牌
    if not lastOutCardIDs or #lastOutCardIDs < 1 then
        return true, selectCardTypeArr
    end

    --相同连炸判断线数比较大小 901>504>405，在GameManager中添加isLianZhanCompareWithLian方法并返回true
    local isLianZhanCompareWithLian = false
    if CF.game:getModule("GameLayer"):getGameData().isLianZhanCompareWithLian then
        local tempBool = CF.game:getModule("GameLayer"):getGameData():isLianZhanCompareWithLian()
        if type(tempBool) == "boolean" and tempBool == true then
            isLianZhanCompareWithLian = true
        end
    end

    --之前玩家出的不是炸弹
    if lastOutCardType < CardEnum.CARDS_TYPE.CT_4_JUNKO_1_CONTINUOUS then
        for _, obj in ipairs(selectCardTypeArr) do
            local selectCardType = obj.type
            if selectCardType >= CardEnum.CARDS_TYPE.CT_4_JUNKO_1_CONTINUOUS then
                return true, {obj}
            end

            if lastOutCardType == selectCardType then
                local lastOutCardPower
                local selectCardPower
                if lastOutCardType % 100 == 1 then
                    lastOutCardPower = CardLogic.getMinPowerInCardIDs(lastOutCardIDs)
                    selectCardPower = CardLogic.getMinPowerInCardIDs(selectCardIDs)
                else
                    lastOutCardPower = CardLogic.getMinNormalPowerFromCardIDs(lastOutCardIDs, lastOutCardType % 100)
                    selectCardPower = CardLogic.getMinNormalPowerFromCardIDs(selectCardIDs, selectCardType % 100)
                end
                if selectCardPower > lastOutCardPower then
                    return true, {obj}
                end
            end
        end
    else
        --之前玩家出的是炸弹
        local lastOutLineCount = CardLogic.GetBombLineNumberByType(lastOutCardType)
        for _, obj in ipairs(selectCardTypeArr) do
            local selectCardType = obj.type
            local selectLineCount = CardLogic.GetBombLineNumberByType(selectCardType)
            if selectLineCount > lastOutLineCount then
                return true, {obj}
            elseif selectLineCount == lastOutLineCount then
                if lastOutCardType % 100 == 1 and selectCardType == lastOutCardType then
                    --出的是普通炸
                    local lastOutCardPower = CardLogic.getMinNormalPowerFromCardIDs(lastOutCardIDs, 1)
                    local selectCardPower = CardLogic.getMinNormalPowerFromCardIDs(selectCardIDs, 1)
                    if selectCardPower > lastOutCardPower then
                        return true, {obj}
                    end
                elseif lastOutCardType >= CardEnum.CARDS_TYPE.CT_3_KING then
                    --出的是王炸
                    return true, {obj}
                elseif selectCardType == lastOutCardType then
                    --出的是连炸
                    if CardLogic.isBiggerPowerSameLine(selectCardType, selectCardIDs, lastOutCardIDs) then
                        return true, {obj}
                    end
                elseif
                    lastOutCardType % 100 >= 2 and lastOutCardType % 100 < 6 and selectCardType % 100 >= 2 and selectCardType % 100 < 6 and lastOutCardType % 100 > selectCardType % 100 and
                        isLianZhanCompareWithLian
                 then
                    return true, {obj}
                elseif
                    (CardLogic.getGameType() == CF.GameDefine.ENUM_GAME_TYPE.KW_NUM_GAME_TYPE_KAIHUA or isLianZhanCompareWithLian) and lastOutCardType % 100 >= 2 and lastOutCardType % 100 < 6 and
                        selectCardType % 100 == 1
                 then
                    --衢州开化， 线数相同的连环炸小于存炸弹 --add by xuwen01
                    return true, {obj}
                end
            end
        end
    end
    return false
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

----------------------------------------
--通过选择的牌判断是否智能提示
----------------------------------------
function CardLogic.smartTipsBySelectCardIDs(handCardIDs, selectCardIDs, outCardType, outCardIDs)
    if outCardType ~= nil and #outCardIDs > 0 then
        local powerCount = outCardType % 100 --表示几连
        local minNormalPower = CardLogic.getMinNormalPowerFromCardIDs(outCardIDs, powerCount)
        return CardLogic.getShunTipsBySelectCardIDs(handCardIDs, selectCardIDs, outCardType, minNormalPower)
    end
    local defaultCardTypeArr = {
        CardEnum.CARDS_TYPE.CT_1_JUNKO_5_CONTINUOUS,
        CardEnum.CARDS_TYPE.CT_2_JUNKO_3_CONTINUOUS,
        CardEnum.CARDS_TYPE.CT_3_JUNKO_3_CONTINUOUS
    }
    for i = 1, #defaultCardTypeArr do
        local resultFlag, resultData = CardLogic.getShunTipsBySelectCardIDs(handCardIDs, selectCardIDs, defaultCardTypeArr[i])
        if resultFlag then
            return true, resultData
        end
    end
    return false
end

function CardLogic.removeValueFromTable(tableData, removeData)
    for _, v1 in pairs(removeData) do
        for k2, v2 in pairs(tableData) do
            if v2 == v1 then
                table.remove(tableData, k2)
                break
            end
        end
    end
end

function CardLogic.getMinAndMaxPowerInPowerKeyData(tCardPower, bWithOutJoker)
    local bHaveNormalPower = false
    local minCardPower = CardEnum.CARD_POWER.CP_BJ + 1
    local maxCardPower = CardEnum.CARD_POWER.CP_3 - 1
    for power, _ in pairs(tCardPower) do
        if power < minCardPower then
            if not bWithOutJoker or not CardLogic.isJokerByPower(power) then
                minCardPower = power
                bHaveNormalPower = true
            end
        end
        if power > maxCardPower then
            if not bWithOutJoker or not CardLogic.isJokerByPower(power) then
                maxCardPower = power
                bHaveNormalPower = true
            end
        end
    end
    return bHaveNormalPower, minCardPower, maxCardPower
end

----------------------------------------
--通过选择的牌判断是否提示单双三顺
----------------------------------------
function CardLogic.getShunTipsBySelectCardIDs(handCardIDs, selectCardIDs, cardType, outCardPower)
    local shunCount = math.floor(cardType / 100)
    if #selectCardIDs < shunCount + 1 then
        return false
    end
    local tSelectCardPower = CardLogic.switchCardIDsToPowerKey(selectCardIDs)
    local bHaveNormalPower, selectMinCardPower, selectMaxCardPower = CardLogic.getMinAndMaxPowerInPowerKeyData(tSelectCardPower, true)
    if not bHaveNormalPower then
        return false
    end

    --判断牌权区间内手牌是否存在顺
    local tipsCardFunc = function(minPower, maxPower)
        if outCardPower ~= nil and minPower <= outCardPower then
            return false
        end
        if maxPower > CardEnum.CARD_POWER.CP_A then
            return false
        end
        local tempHandCardIDs = clone(handCardIDs)
        local resultCardIDs = clone(selectCardIDs)
        CardLogic.removeValueFromTable(tempHandCardIDs, resultCardIDs)
        local tempJokerCardIDs = CardLogic.getJokerDataFromCardIDs(tempHandCardIDs)
        local tempSelectJokerCardIDs = CardLogic.getJokerDataFromCardIDs(resultCardIDs)

        local tHandCardPower = CardLogic.switchCardIDsToPowerKey(tempHandCardIDs)
        for cardPower = minPower, maxPower do
            local tempCardIDs = tSelectCardPower[cardPower] or {}
            local tempCardCount = #tempCardIDs --当前牌权已经选择的牌
            if tempCardCount > shunCount then
                return false
            end
            if tempCardCount < shunCount then
                local tempHandCardIDs2 = tHandCardPower[cardPower] or {}
                if #tempHandCardIDs2 < shunCount - tempCardCount then
                    if #tempJokerCardIDs + #tempSelectJokerCardIDs < shunCount - tempCardCount - #tempHandCardIDs2 then
                        return false
                    end
                    for i = 1, #tempHandCardIDs2 do
                        table.insert(resultCardIDs, tempHandCardIDs2[i])
                    end
                    if (shunCount - tempCardCount - #tempHandCardIDs2) < #tempSelectJokerCardIDs then
                        for _ = 1, (shunCount - tempCardCount - #tempHandCardIDs2) do
                            table.insert(resultCardIDs, tempSelectJokerCardIDs[1])
                            table.remove(tempSelectJokerCardIDs, 1)
                        end
                    else
                        local selectJokerNum = #tempSelectJokerCardIDs
                        for _ = 1, selectJokerNum do
                            table.insert(resultCardIDs, tempSelectJokerCardIDs[1])
                            table.remove(tempSelectJokerCardIDs, 1)
                        end
                        for _ = 1, shunCount - tempCardCount - #tempHandCardIDs2 - selectJokerNum do
                            table.insert(resultCardIDs, tempJokerCardIDs[1])
                            table.remove(tempJokerCardIDs, 1)
                        end
                    end
                else
                    for i = 1, shunCount - tempCardCount do
                        table.insert(resultCardIDs, tempHandCardIDs2[i])
                    end
                end
            end
        end
        if #tempSelectJokerCardIDs > 0 then
            if #tempSelectJokerCardIDs ~= shunCount then
                return false
            elseif minPower == CardEnum.CARD_POWER.CP_3 and maxPower == CardEnum.CARD_POWER.CP_A then
                --3到A已经是最大的顺了，此时还有王则不能出
                return false
            end
        end
        return true, resultCardIDs
    end

    --除百搭外的最大牌权值大于A，即为百变时的小王，小王不能在顺中
    if selectMaxCardPower > CardEnum.CARD_POWER.CP_A then
        return false
    end

    local shunLianCount = cardType % 100
    local tempNeedCount = shunLianCount - 1
    if outCardPower ~= nil and selectMaxCardPower - selectMinCardPower > tempNeedCount then
        return false
    end
    if selectMaxCardPower - selectMinCardPower < tempNeedCount then
        if selectMinCardPower <= CardEnum.CARD_POWER.CP_A - tempNeedCount then
            for power = selectMinCardPower, selectMaxCardPower - tempNeedCount, -1 do
                local tempFlag, tempData = tipsCardFunc(power, power + tempNeedCount)
                if tempFlag then
                    return true, tempData
                end
            end
        else
            selectMinCardPower = CardEnum.CARD_POWER.CP_A - tempNeedCount
            selectMaxCardPower = CardEnum.CARD_POWER.CP_A
            return tipsCardFunc(selectMinCardPower, selectMaxCardPower)
        end
        return false
    end
    return tipsCardFunc(selectMinCardPower, selectMaxCardPower)
end

return CardLogic
