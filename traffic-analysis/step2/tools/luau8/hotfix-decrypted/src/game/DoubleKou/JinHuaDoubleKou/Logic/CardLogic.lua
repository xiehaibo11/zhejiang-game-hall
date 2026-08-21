local CardLogic = require("game.DoubleKou.BaseDoubleKou.Logic.CardLogic")

local CardEnum = CF.gameRequire("Define.CardEnum")

function CardLogic.GetBombLineNumberByType(cardType)
    local xian = 0
    --非炸弹
    if cardType <= CardEnum.CARDS_TYPE.CT_4_JUNKO_0_CONTINUOUS then
        return xian
    end
    --王炸
    if cardType > CardEnum.CARDS_TYPE.CT_0_KING then
        xian = cardType % CardEnum.CARDS_TYPE.CT_0_KING
        if CardLogic.getGameType() == CF.GameDefine.ENUM_GAME_TYPE.KW_NUM_GAME_TYPE_HANGZMAQUAN and xian == 7 then
            xian = xian + 1
        end
        return xian
    end

    if math.floor(cardType % 100) == 1 then
        xian = math.floor(cardType / 100)
    else
        xian = math.floor(cardType / 100) + math.floor(cardType % 100)
        if math.floor(cardType / 100) >= 5 then
            xian = xian + 1
        end
    end
    return xian
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
        local powerLine = CardLogic.getLianZhaPowerLineConf()
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

function CardLogic.isLianZha(tCardPower)
    local bLianZha1, xianNum, lianNum, jokerReplaceData = CardLogic.isLianZhaWith2(tCardPower, 1)
    return bLianZha1, xianNum, lianNum, jokerReplaceData
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
    if normalCardPowerNum == 1 or normalCardPowerNum == 2 then
        --只有一种普通牌，肯定不是连炸 金华双扣2连炸不能出
        return false, 0, 0
    end

    --连炸不带
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

function CardLogic.getBombDataFromCardIDs(tHandCards, outBombData)
    local outCardsCount = 0
    if outBombData and outBombData.tOutCards then
        outCardsCount = #outBombData.tOutCards
    end
    local tValueKeyData = CardLogic.switchCardIDsToPowerKey(tHandCards)
    --手牌中的百搭牌
    local jokerData = CardLogic.getJokerDataFromCardIDs(tHandCards)
    local jokerNumber = #jokerData
    local tBombData = {}
    local kingTotal = 0
    local kingData = {}
    --三王是否是最小的6线炸弹，在GameManager中添加isSanWangIsMin6Xian方法并返回true
    local isSanWangIsMin6Xian = false
    if CF.game:getModule("GameLayer"):getGameData().isSanWangIsMin6Xian then
        local tempBool = CF.game:getModule("GameLayer"):getGameData():isSanWangIsMin6Xian()
        if type(tempBool) == "boolean" and tempBool == true then
            isSanWangIsMin6Xian = true
        end
    end
    --四王是否是最大的7线炸弹，在GameManager中添加isSiWangIsBig7Xian方法并返回true
    local isSiWangIsBig7Xian = false
    if CF.game:getModule("GameLayer"):getGameData().isSiWangIsBig7Xian then
        local tempBool = CF.game:getModule("GameLayer"):getGameData():isSiWangIsBig7Xian()
        if type(tempBool) == "boolean" and tempBool == true then
            isSiWangIsBig7Xian = true
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
                        elseif outBombData.cardType == CardEnum.CARDS_TYPE.CT_3_KING and isSanWangIsMin6Xian then
                            --出的是王炸
                            table.insert(tBombData, bombData)
                        elseif outBombData.cardType == CardEnum.CARDS_TYPE.CT_4_KING and not isSiWangIsBig7Xian then
                            --出的是王炸
                            table.insert(tBombData, bombData)
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
        --        if xianNum >= 6 then
        --            minLianNum = 2
        --        end

        CardLogic.callLianZhaPowerKeyData(tBombData, tValueKeyData, jokerData, xianNum, minLianNum, outBombData)
    end

    --三王炸，天王炸
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

        if kingTotal == 3 and isSanWangIsMin6Xian then
            if outBombData == nil or (bombData.lineCount > outBombData.lineCount) then
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
    --三王是否是最小的6线炸弹，在GameManager中添加isSanWangIsMin6Xian方法并返回true
    local isSanWangIsMin6Xian = false
    if CF.game:getModule("GameLayer"):getGameData().isSanWangIsMin6Xian then
        local tempBool = CF.game:getModule("GameLayer"):getGameData():isSanWangIsMin6Xian()
        if type(tempBool) == "boolean" and tempBool == true then
            isSanWangIsMin6Xian = true
        end
    end
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
                        --金华浙中双扣，5线以上连炸算多一线
                        if xianNum >= 5 then
                            bombData.lineCount = bombData.lineCount + 1
                        end
                        if not outBombData then
                            table.insert(tBombData, bombData)
                            break
                        end
                        local selectCardType = xianNum * 100 + lianNum
                        if bombData.lineCount > outBombData.lineCount then
                            table.insert(tBombData, bombData)
                        elseif bombData.lineCount == outBombData.lineCount then
                            if outBombData.cardType == CardEnum.CARDS_TYPE.CT_3_KING and isSanWangIsMin6Xian then
                                table.insert(tBombData, bombData)
                            elseif outBombData.cardType == CardEnum.CARDS_TYPE.CT_4_KING and not isSiWangIsBig7Xian then
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

function CardLogic.checkCanOutCard(lastOutCardIDs, lastOutCardType, selectCardIDs)
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

    --三王是否是最小的6线炸弹，在GameManager中添加isSanWangIsMin6Xian方法并返回true
    local isSanWangIsMin6Xian = false
    if CF.game:getModule("GameLayer"):getGameData().isSanWangIsMin6Xian then
        local tempBool = CF.game:getModule("GameLayer"):getGameData():isSanWangIsMin6Xian()
        if type(tempBool) == "boolean" and tempBool == true then
            isSanWangIsMin6Xian = true
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
                elseif lastOutCardType == CardEnum.CARDS_TYPE.CT_3_KING and isSanWangIsMin6Xian then
                    --出的是王炸
                    return true, {obj}
                elseif lastOutCardType == CardEnum.CARDS_TYPE.CT_4_KING then
                    --出的是王炸
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

function CardLogic.getClassicGameHintCards(isFirstSeat, handCardIDs, hintCards)
    if CardLogic.getGameType() ~= CF.GameDefine.ENUM_GAME_TYPE.KW_NUM_GAME_TYPE_HANGZMAQUAN then
        return hintCards
    end
    local index = 1
    while index <= #hintCards do
        local cards = hintCards[index] or {}
        local tCardPower = {}
        for _, cardId in pairs(cards) do
            local cardPower = CardLogic.getCardPowerById(cardId)
            table.insert(tCardPower, cardPower)
        end
        local isKinBomb, kingNum = CardLogic.isKingBomb(tCardPower)
        if (isKinBomb and kingNum == 6) or (#cards == 2 and kingNum == 5 and tCardPower[1] ~= tCardPower[2]) then
            table.remove(hintCards, index)
        else
            index = index + 1
        end
        -- 自由出牌时王牌处理
        if isFirstSeat then
            if isKinBomb and kingNum == 6 then
                if tCardPower[1] ~= tCardPower[2] then
                    table.insert(hintCards, {cards[1]})
                    table.insert(hintCards, {cards[2], cards[3]})
                else
                    table.insert(hintCards, {cards[1], cards[2]})
                    table.insert(hintCards, {cards[3]})
                end
            elseif #cards == 2 and kingNum == 5 and tCardPower[1] ~= tCardPower[2] then
                table.insert(hintCards, {cards[1]})
                table.insert(hintCards, {cards[2]})
            end
        end
    end
    -- 自由出牌时如果最后王牌特殊处理
    if isFirstSeat then
        local tCardPower = {}
        for _, cardId in pairs(handCardIDs) do
            local cardPower = CardLogic.getCardPowerById(cardId)
            table.insert(tCardPower, cardPower)
        end
        local _, kingNum = CardLogic.isKingBomb(tCardPower)
        if #handCardIDs >= 2 and kingNum == 5 and tCardPower[1] ~= tCardPower[2] then -- 王对子处理
            table.insert(hintCards, {handCardIDs[1]})
            table.insert(hintCards, {handCardIDs[2]})
        elseif #handCardIDs >= 3 and kingNum == 6 then -- 三王处理
            if tCardPower[1] ~= tCardPower[2] then
                table.insert(hintCards, {handCardIDs[1]})
            else
                table.insert(hintCards, {handCardIDs[3]})
            end
        elseif #handCardIDs >= 1 and kingNum == 4 then -- 单张王
            table.insert(hintCards, {handCardIDs[1]})
        end

        for i = 1, #tCardPower do
            if tCardPower[i] and tCardPower[i + 1] and tCardPower[i] == tCardPower[i + 1] and CardLogic.isKingByPower(tCardPower[i]) then
                table.insert(hintCards, {handCardIDs[i], handCardIDs[i + 1]})
                break
            end
        end
    end
    return hintCards
end

return CardLogic
/d