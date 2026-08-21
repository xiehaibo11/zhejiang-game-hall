local CardLogic = require("game.DoubleKou.BaseDoubleKou.Logic.CardLogic")

local CardEnum = CF.gameRequire("Define.CardEnum")

-- CardLogic.getGameType()

--后期新增判断，不改变原逻辑，额外判断
local LIANZHA_POWER_LINE = {
    {3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14}
    --szw {9,10,11,12,13,14,15,3,4,5,6,7,8}--这里是为了兼容考虑2可以带入连炸的情况，若不需要2带入连炸，将这行注释即可
}

-------------------------------------------
--根据cardType获取炸弹的线数
-------------------------------------------
CardLogic.GetBombLineNumberByType = function(cardType)
    if cardType == nil then
        return
    end
    local xian
    if cardType <= CardEnum.CARDS_TYPE.CT_4_JUNKO_0_CONTINUOUS then
        xian = 0
        return xian
    end

    if cardType > CardEnum.CARDS_TYPE.CT_0_KING then
        xian = cardType - CardEnum.CARDS_TYPE.CT_0_KING
        if CardLogic.getGameType() == 10 then -- 建德双扣特殊处理 CardLogic.getGameType() 10 11 12
            if xian == 7 then
                xian = xian + 1
            end
        end
        return xian
    end

    if math.floor(cardType % 100) == 1 then
        xian = math.floor(cardType / 100)
    else
        if CardLogic.getGameType() == 10 or CardLogic.getGameType() == 11 or CardLogic.getGameType() == 12 then -- 建德双扣特殊处理 CardLogic.getGameType() 10 11 12
            local lian = math.floor(cardType % 100)
            local xiang = math.floor(cardType / 100)
            if xiang == 4 or xiang == 8 then
                xian = lian + xiang
            else
                xian = lian + xiang + 1
            end
        else
            xian = math.floor(cardType / 100) + math.floor(cardType % 100)
        end
    end
    return xian
end

CardLogic.isBiggerPowerSameLine = function(cardType, cardIDs1, cardIDs2)
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
        local maxPower = powerLine[#powerLine]
        for i = maxPower, CardEnum.CARD_POWER.CP_2, -1 do
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
--是否连炸
--bReturnNum 是否需要返回线数
-------------------------------------------

CardLogic.isLianZha = function(tCardPower)
    local bLianZha1, xianNum, lianNum, jokerReplaceData = CardLogic.isLianZhaWith2(tCardPower, 1)
    return bLianZha1, xianNum, lianNum, jokerReplaceData
end

CardLogic.isLianZhaWith2 = function(tCardPower, index)
    local PowerLine = LIANZHA_POWER_LINE[index]
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
                -- if cardPower == CardEnum.CARD_POWER.CP_SJ then --建德单顺双顺三顺不能有小王
                --     return false
                -- end
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
    if normalCardPowerNum == 1 then
        --只有一种普通牌，肯定不是连炸 建德双扣2连炸不能出
        return false, 0, 0
    end
    local rowCnt = 1 -->> 4线多连特带4个王殊处理
    for i = minCardPowerIndex, maxCardPowerIndex do
        if tCardPowerIndexNum[i] == 4 and tCardPowerIndexNum[i + 1] == 4 then
            if jokerCardTotal ~= 4 then
                break
            end
            rowCnt = rowCnt + 1
        end
    end
    if rowCnt ~= 4 and rowCnt > 1 and rowCnt == maxCardPowerIndex - minCardPowerIndex + 1 then
        if maxCardPowerIndex == #PowerLine then
            minCardPowerIndex = minCardPowerIndex - 1
        else
            maxCardPowerIndex = maxCardPowerIndex + 1
        end
    end --<< 4线多连特带4个王殊处理
    --连炸不带
    normalCardPowerNum = maxCardPowerIndex - minCardPowerIndex + 1
    if not CF.game:getModule("GameLayer"):getGameData():getLianZhaBuDai() then
        if cardTotal % normalCardPowerNum > 0 then
            return false, 0, 0
        end
        everyPowerMinNumber = cardTotal / normalCardPowerNum
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

    --百搭牌还有多余，转化为牌数最少的那张牌
    if jokerCardTotal > 0 then
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

CardLogic.callLianZhaPowerKeyData = function(tBombData, powerKeyData, jokerData, xianNum, minLianNum, outBombData)
    -- local tempjokerData = {}
    -- for type, v in ipairs(jokerData) do --建德双扣连炸不能带小王
    --     if v == CardEnum.CARD_ID.CID_BJ then
    --         tempjokerData[#tempjokerData] = v
    --     end
    -- end
    -- jokerData = tempjokerData
    local jokerNum = #jokerData
    for type, v in ipairs(LIANZHA_POWER_LINE) do --两种（带2，不带2）
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
                        local lc = 0
                        if xianNum == 4 then
                            lc = lianNum + xianNum
                        elseif xianNum > 4 then
                            lc = lianNum + xianNum + 1
                        end
                        local bombData = {
                            jokerCount = needJokerNum,
                            lineCount = lc,
                            power = v[thisPowerIndex - 1] / 100,
                            data = clone(tempBombData)
                        }
                        if not outBombData then
                            table.insert(tBombData, bombData)
                            break
                        end
                        local selectCardType = xianNum * 100 + lianNum
                        if bombData.lineCount > outBombData.lineCount then
                            table.insert(tBombData, bombData)
                        elseif bombData.lineCount == outBombData.lineCount then
                            if outBombData.cardType == CardEnum.CARDS_TYPE.CT_3_KING then
                                --出的是三王炸
                                local gameData = CF.game:getModule("GameLayer"):getGameData()
                                if gameData and CardLogic.getGameType() ~= 10 then
                                    --三王炸弹（仅限癞子玩法）是最小的6线炸弹，天王炸弹在无癞子玩法中是最大的牌型，按8线计算，癞子玩法是最大的7线炸弹
                                    table.insert(tBombData, bombData)
                                end
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

CardLogic.getBombDataFromCardIDs = function(tHandCards, outBombData)
    local outCardsCount = 0
    if outBombData and outBombData.tOutCards then
        outCardsCount = #outBombData.tOutCards
    end
    local gameData = CF.game:getModule("GameLayer"):getGameData()
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
                    if bombData.lineCount > outBombData.lineCount then
                        table.insert(tBombData, bombData)
                    elseif bombData.lineCount == outBombData.lineCount then
                        local bombDataCount = 0
                        if bombData and bombData.data then
                            bombDataCount = #bombData.data
                        end
                        if outBombData.cardType % 100 == 1 then
                            --出的是普通炸
                            local lastOutCardPower = CardLogic.getMinNormalPowerFromCardIDs(outBombData.tOutCards, 1)
                            if cardPower > lastOutCardPower then
                                table.insert(tBombData, bombData)
                            end
                        elseif outBombData.cardType == CardEnum.CARDS_TYPE.CT_3_KING then
                            --出的是三王炸
                            if gameData and CardLogic.getGameType() ~= 10 then
                                --三王炸弹（仅限癞子玩法）是最小的6线炸弹，天王炸弹在无癞子玩法中是最大的牌型，按8线计算，癞子玩法是最大的7线炸弹
                                table.insert(tBombData, bombData)
                            end
                        elseif bombDataCount < outCardsCount then
                            table.insert(tBombData, bombData)
                        end
                    end
                end
            end
        end
    end

    --连炸
    --最大10线2连
    for xianNum = 4, 10 do
        local minLianNum = 3
        -- if xianNum >= 6 then
        --     minLianNum = 2
        -- end

        CardLogic.callLianZhaPowerKeyData(tBombData, tValueKeyData, jokerData, xianNum, minLianNum, outBombData)
    end

    --三王炸，天王炸
    if kingTotal >= 3 then
        local lc = kingTotal + 3
        --三王炸弹（仅限癞子玩法）是最小的6线炸弹，天王炸弹在无癞子玩法中是最大的牌型，按8线计算，癞子玩法是最大的7线炸弹
        if gameData and CardLogic.getGameType() ~= 10 then
            lc = kingTotal + 3
        else
            if kingTotal == 4 then
                lc = kingTotal + 4
            end
        end
        local bombData = {
            jokerCount = kingTotal,
            lineCount = lc,
            power = CardEnum.CARD_POWER.CP_SJ,
            data = kingData
        }
        if gameData and CardLogic.getGameType() ~= 10 then
            if outBombData == nil or (kingTotal == 3 and bombData.lineCount > outBombData.lineCount) or (kingTotal == 4 and bombData.lineCount >= outBombData.lineCount) then
                table.insert(tBombData, bombData)
            end
        else
            if kingTotal == 4 and (outBombData == nil or bombData.lineCount >= outBombData.lineCount) then
                table.insert(tBombData, bombData)
            end
        end
    end
    return tBombData
end

-------------------------------------------
--判断是否可以出牌
------------------------------------------
CardLogic.checkCanOutCard = function(lastOutCardIDs, lastOutCardType, selectCardIDs)
    local selectCardsCount = #selectCardIDs
    local lastOutCardIDsCount = #lastOutCardIDs
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
        print("xn......................")
        dump(lastOutCardType)
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
                elseif lastOutCardType == CardEnum.CARDS_TYPE.CT_3_KING then
                    --出的是三王炸
                    local gameData = CF.game:getModule("GameLayer"):getGameData()
                    if gameData and CardLogic.getGameType() ~= 10 then
                        --三王炸弹（仅限癞子玩法）是最小的6线炸弹，天王炸弹在无癞子玩法中是最大的牌型，按8线计算，癞子玩法是最大的7线炸弹
                        return true, {obj}
                    end
                elseif selectCardType == CardEnum.CARDS_TYPE.CT_3_KING then
                    --出的是三王炸
                    local gameData = CF.game:getModule("GameLayer"):getGameData()
                    if gameData and CardLogic.getGameType() ~= 10 then
                        --三王炸弹（仅限癞子玩法）是最小的6线炸弹，天王炸弹在无癞子玩法中是最大的牌型，按8线计算，癞子玩法是最大的7线炸弹
                        return false
                    end
                elseif selectCardType == CardEnum.CARDS_TYPE.CT_4_KING then
                    --三王炸弹（仅限癞子玩法）是最小的6线炸弹，天王炸弹在无癞子玩法中是最大的牌型，按8线计算，癞子玩法是最大的7线炸弹
                    return true, {obj}
                elseif selectCardType == lastOutCardType then
                    --出的是连炸
                    if CardLogic.isBiggerPowerSameLine(selectCardType, selectCardIDs, lastOutCardIDs) then
                        return true, {obj}
                    end
                elseif selectCardsCount < lastOutCardIDsCount then
                    return true, {obj}
                end
            end
        end
    end
    return false
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
        if cardPower == CardEnum.CARD_POWER.CP_SJ then --建德单顺双顺三顺不能有小王
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
                if cardPower == CardEnum.CARD_POWER.CP_SJ then --建德单顺双顺三顺不能有小王
                    return false
                end
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
    if tSelectCardPower[CardEnum.CARD_POWER.CP_SJ] then --建德单双三顺不能有小王
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
        -- local tempHandCardIDs = clone(handCardIDs)
        local tempHandCardIDs = {} --建德单双三顺不能有小王
        for i = 1, #handCardIDs do
            if handCardIDs[i] ~= CardEnum.CARD_ID.CID_SJ then
                tempHandCardIDs[#tempHandCardIDs + 1] = handCardIDs[i]
            end
        end
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

function CardLogic.checkLianZhaByXianAndLianNum(xianNum, lianNum)
    --建德双扣不能2连
    if lianNum == 2 then
        return false
    end
    return true
end

return CardLogic
