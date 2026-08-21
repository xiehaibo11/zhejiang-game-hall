local CardLogic = class("CardLogic")

local CardEnum = CF.gameRequire("Define.CardEnum")

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
        return { tHandCards }
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
    elseif cardType >= CardEnum.CARDS_TYPE.CT_4_JUNKO_1_CONTINUOUS then
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

    local realJokerCnt = CardLogic.getJokerCnt(tHandCards)
    local endIndex = CardEnum.CARD_POWER.CP_2
    if realJokerCnt < 4 then
        endIndex = CardEnum.CARD_POWER.CP_BJ
    end

    for power = CardEnum.CARD_POWER.CP_3, endIndex do
        local v = powerToCardId[power] or {}
        local thisPowerCount = #v
        --先不考虑带王提示
        if thisPowerCount >= outCardCount and power > outCardPower then
            --按牌值优先插入
            if thisPowerCount == outCardCount then
                table.insert(resultData, clone(v))
            end
        elseif thisPowerCount > 0 and (thisPowerCount + jokerCount) >= outCardCount and power > outCardPower then
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

    return resultData
end

-------------------------------------------
--获取炸弹的提示数据
-------------------------------------------
function CardLogic.getTipsDataBomb(tHandCards, tOutCards, cardType)
    --线数
    local bombLineCount = CardLogic.GetBombLineNumberByType(cardType, tOutCards)
    --炸弹数据
    local tempOutBombData = { lineCount = bombLineCount, tOutCards = tOutCards, cardType = cardType }
    local tBombData = CardLogic.getBombDataFromCardIDs(tHandCards, tempOutBombData)

    --炸弹排序
    table.sort(
    tBombData,
    function(a, b)
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
        normalPowerCount = normalPowerCount + 1
        if maxNormalPower < power then
            maxNormalPower = power
        end
        if minNormalPower > power then
            minNormalPower = power
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

function CardLogic.getJokerCnt(tHandCards)
    local cnt = 0
    for i = 1, #tHandCards do
        if tHandCards[i] == CardEnum.CARD_ID.CID_SJ or tHandCards[i] == CardEnum.CARD_ID.CID_BJ then
            cnt = cnt + 1
        end
    end
    return cnt
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
    else
        -- 如果只有王大于4张
        local jokerCnt = CardLogic.getJokerCnt(tHandCards)
        if jokerCnt >= 4 and jokerCnt == #tHandCards then
            return true
        end
        -- 如果全是同一个牌值
        for i = 1, #tCardPower do
            if tCardPower[i] ~= tCardPower[1] then
                return false
            end
        end
    end
    return true
end

-------------------------------------------
--获取自由出牌普通牌（除炸弹）提示
-------------------------------------------
function CardLogic.getTipsDataFreedomNormal(tHandCards, resultData)
    local tDanZhang = {}
    local tDui = {}
    local tSanZhang = {}
    local tValueKeyData = CardLogic.switchCardIDsToPowerKey(tHandCards) --转换为[power] = {cardID1, cardID2, cardID3}

    tValueKeyData[CardEnum.CARD_POWER.CP_SJ] = tValueKeyData[CardEnum.CARD_POWER.CP_SJ] or {}
    tValueKeyData[CardEnum.CARD_POWER.CP_BJ] = tValueKeyData[CardEnum.CARD_POWER.CP_BJ] or {}

    for cardPower = CardEnum.CARD_POWER.CP_3, CardEnum.CARD_POWER.CP_BJ do
        if cardPower == CardEnum.CARD_POWER.CP_SJ or cardPower == CardEnum.CARD_POWER.CP_BJ then
            if #tValueKeyData[CardEnum.CARD_POWER.CP_SJ] + #tValueKeyData[CardEnum.CARD_POWER.CP_BJ] < 4 then
                local tempCardData = tValueKeyData[cardPower] or {}
                tempCardData = clone(tempCardData)
                local cardCount = #tempCardData --牌权对应手牌数量

                if cardCount == 1 then
                    table.insert(tDanZhang, tempCardData)
                elseif cardCount == 2 then
                    table.insert(tDui, tempCardData)
                elseif cardCount == 3 then
                    table.insert(tSanZhang, tempCardData)
                end
            end
        else
            local tempCardData = tValueKeyData[cardPower] or {}
            tempCardData = clone(tempCardData)
            local cardCount = #tempCardData --牌权对应手牌数量

            if cardCount == 1 then
                table.insert(tDanZhang, tempCardData)
            elseif cardCount == 2 then
                table.insert(tDui, tempCardData)
            elseif cardCount == 3 then
                table.insert(tSanZhang, tempCardData)
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
end

-------------------------------------------
--提取百搭牌
-------------------------------------------
function CardLogic.getJokerDataFromCardIDs(cardIDs)
    local jokerData = {}

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
                        end
                    end
                end
            end
        end
    end

    --王炸
    if kingTotal > 3 then
        local isSame = true
        for i = 1, kingTotal do
            if kingData[i] ~= kingData[1] then
                isSame = false
                break
            end
        end
        local bombData = {
            jokerCount = kingTotal,
            lineCount = CardLogic.getKingBombLine(tHandCards),
            power = CardEnum.CARD_POWER.CP_SJ,
            data = kingData
        }

        if outBombData == nil or (outBombData.cardType % 100 == 1 and bombData.lineCount >= outBombData.lineCount) then
            table.insert(tBombData, bombData)
        elseif outBombData and outBombData.cardType % 100 == 2 and bombData.lineCount == outBombData.lineCount then
            local cur = CardLogic.getBJCnt(kingData)
            local out = CardLogic.getBJCnt(outBombData.tOutCards)
            if cur > out then
                table.insert(tBombData, bombData)
            end
        elseif outBombData and outBombData.cardType % 100 == 2 and bombData.lineCount > outBombData.lineCount then
            table.insert(tBombData, bombData)
        end
    end
    return tBombData
end

function CardLogic.getBJCnt(carIDs)
    local cnt = 0
    for i = 1, #carIDs do
        if carIDs[i] == CardEnum.CARD_ID.CID_BJ then
            cnt = cnt + 1
        end
    end
    return cnt
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
        if tempCardPower ~= CardEnum.CARD_POWER.CP_NONE and tempCardPower ~= cardPower then
            return false
        end
        tempCardPower = cardPower
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
    local kingNum = 0
    for _, cardPower in pairs(tCardPower) do
        if not CardLogic.isKingByPower(cardPower) then
            return false, 0
        end
        kingNum = kingNum + 1
    end
    return kingNum > 3, kingNum
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
        return { { type = CardEnum.CARDS_TYPE.CT_0_JUNKO_0_CONTINUOUS } }
    end
    local cardTotal = #cardIDs
    local tCardPower = {}
    for _, cardId in pairs(cardIDs) do
        local cardPower = CardLogic.getCardPowerById(cardId)
        table.insert(tCardPower, cardPower)
    end

    --先根据手牌数量筛选可能的情况，减少计算次数
    if cardTotal == 1 then
        return { { type = CardEnum.CARDS_TYPE.CT_1_JUNKO_1_CONTINUOUS } }
    elseif cardTotal == 2 then
        if CardLogic.isDui(tCardPower) then
            return { { type = CardEnum.CARDS_TYPE.CT_2_JUNKO_1_CONTINUOUS } }
        end
    elseif cardTotal == 3 then
        if CardLogic.isSanZhang(tCardPower) then
            return { { type = CardEnum.CARDS_TYPE.CT_3_JUNKO_1_CONTINUOUS } }
        end
    else
        if CardLogic.isKingBomb(tCardPower) then
            return { { type = CardEnum.CARDS_TYPE["CT_" .. cardTotal .. "_KING"] } }
        end
        if CardLogic.isNormalBomb(tCardPower) then
            return { { type = CardEnum.CARDS_TYPE["CT_" .. cardTotal .. "_JUNKO_1_CONTINUOUS"] } }
        end
    end

    return { { type = CardEnum.CARDS_TYPE.CT_0_JUNKO_0_CONTINUOUS } }
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
function CardLogic.GetBombLineNumberByType(cardType, outCards)
    local xian = 0
    --非炸弹
    if cardType < CardEnum.CARDS_TYPE.CT_4_JUNKO_1_CONTINUOUS then
        return xian
    end

    if math.floor(cardType % 100) == 1 then
        xian = math.floor(cardType / 100)
    else
        --王炸
        return CardLogic.getKingBombLine(outCards)
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
function CardLogic.getCardIDsBySortType(cardIDs)
    if CardLogic.isBackHandCards(cardIDs) then
        return cardIDs
    end
    local resultCardIDs = {}
    local tCardPower = CardLogic.switchCardIDsToPowerKey(cardIDs)
    local jokerCards = CardLogic.getJokerCnt(cardIDs)

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

    local tempCardNumTable = {}
    if jokerCards < 4 then
        for i = CardEnum.CARD_POWER.CP_3, CardEnum.CARD_POWER.CP_BJ do
            local tempPowerData = tCardPower[i] or {}
            local cardNum = #tempPowerData
            if not tempCardNumTable[cardNum] then
                tempCardNumTable[cardNum] = {}
            end
            table.insert(tempCardNumTable[cardNum], i)
        end
    else
        for i = CardEnum.CARD_POWER.CP_3, CardEnum.CARD_POWER.CP_2 do
            local tempPowerData = tCardPower[i] or {}
            local cardNum = #tempPowerData
            if not tempCardNumTable[cardNum] then
                tempCardNumTable[cardNum] = {}
            end
            table.insert(tempCardNumTable[cardNum], i)
        end
        local bgCnt = CardLogic.getBJCnt(cardIDs)
        local kingB = CardLogic.getKingBombLine(cardIDs)
        if bgCnt == 0 then
            tempCardNumTable[kingB] = tempCardNumTable[kingB] or {}
            table.insert(tempCardNumTable[kingB], CardEnum.CARD_POWER.CP_SJ)
        elseif bgCnt == jokerCards then
            tempCardNumTable[kingB] = tempCardNumTable[kingB] or {}
            table.insert(tempCardNumTable[kingB], CardEnum.CARD_POWER.CP_BJ)
        else
            tempCardNumTable[kingB] = tempCardNumTable[kingB] or {}
            table.insert(tempCardNumTable[kingB], CardEnum.CARD_POWER.CP_SJ)
            table.insert(tempCardNumTable[kingB], CardEnum.CARD_POWER.CP_BJ)
        end
    end

    --一样的牌最多24张
    for cardNumIndex = 1, 24 do
        local tempPowerTable = tempCardNumTable[cardNumIndex] or {}
        for _, tempPower in ipairs(tempPowerTable) do
            for _, cardID in ipairs(tCardPower[tempPower]) do
                table.insert(resultCardIDs, cardID)
            end
        end
    end
    return resultCardIDs
end

function CardLogic.getKingBombLine(cardIDs)
    local bjCnt = 0
    local sjCnt = 0
    for i = 1, #cardIDs do
        if cardIDs[i] == CardEnum.CARD_ID.CID_SJ then
            sjCnt = sjCnt + 1
        elseif cardIDs[i] == CardEnum.CARD_ID.CID_BJ then
            bjCnt = bjCnt + 1
        end
    end
    local kingBomd = {
        [4] = {
            [0] = 8,
            [1] = 7,
            [2] = 7,
            [3] = 7,
            [4] = 8,
        },
        [5] = {
            [0] = 10,
            [1] = 10,
            [2] = 8,
            [3] = 8,
            [4] = 10,
            [5] = 10,
        },
        [6] = {
            [0] = 12,
            [1] = 12,
            [2] = 12,
            [3] = 9,
            [4] = 12,
            [5] = 12,
            [6] = 12,
        },
        [7] = {
            [1] = 14,
            [2] = 14,
            [3] = 14,
            [4] = 14,
            [5] = 14,
            [6] = 14,
        },
        [8] = {
            [2] = 16,
            [3] = 16,
            [4] = 16,
            [5] = 16,
            [6] = 16,
        },
        [9] = {
            [3] = 18,
            [4] = 18,
            [5] = 18,
            [6] = 18,
        },
        [10] = {
            [4] = 20,
            [5] = 20,
            [6] = 20,
        },
        [11] = {
            [5] = 22,
            [6] = 22,
        },
        [12] = {
            [6] = 24,
        },
    }
    return kingBomd[bjCnt + sjCnt][bjCnt]
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

    --之前玩家出的不是炸弹
    if lastOutCardType < CardEnum.CARDS_TYPE.CT_4_JUNKO_1_CONTINUOUS then
        for _, obj in ipairs(selectCardTypeArr) do
            local selectCardType = obj.type
            if selectCardType >= CardEnum.CARDS_TYPE.CT_4_JUNKO_1_CONTINUOUS then
                return true, { obj }
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
                    return true, { obj }
                end
            end
        end
    else
        --之前玩家出的是炸弹
        local lastOutLineCount = CardLogic.GetBombLineNumberByType(lastOutCardType, lastOutCardIDs)
        for _, obj in ipairs(selectCardTypeArr) do
            local selectCardType = obj.type
            local selectLineCount = CardLogic.GetBombLineNumberByType(selectCardType, selectCardIDs)
            if selectLineCount > lastOutLineCount then
                return true, { obj }
            elseif selectLineCount == lastOutLineCount then
                if lastOutCardType % 100 == 1 and selectCardType == lastOutCardType then
                    --出的是普通炸/王炸
                    local lastOutCardPower = CardLogic.getMinNormalPowerFromCardIDs(lastOutCardIDs, 1)
                    local selectCardPower = CardLogic.getMinNormalPowerFromCardIDs(selectCardIDs, 1)
                    if selectCardPower > lastOutCardPower then
                        return true, { obj }
                    end
                elseif lastOutCardType % 100 == 1 and selectCardType % 100 == 2 then
                    --出的是普通炸/王炸
                    return true, { obj }
                elseif lastOutCardType % 100 == 2 and selectCardType % 100 == 2 then
                    --出的是王炸/王炸
                    local cur = CardLogic.getBJCnt(selectCardIDs)
                    local out = CardLogic.getBJCnt(lastOutCardIDs)
                    if cur > out then
                        return true, { obj }
                    end
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

return CardLogic��