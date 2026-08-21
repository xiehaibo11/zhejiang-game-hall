local CardLogic = require("game.DoubleKou.BaseDoubleKou.Logic.CardLogic")
local CardEnum = CF.gameRequire("Define.CardEnum")

--xxxxxxxxxxxxxx----------------------------------------------------------------
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
                            if CardLogic.getGameType() == CF.GameDefine.ENUM_GAME_TYPE.KW_NUM_GAME_TYPE_HUOPING_SHAOXING3D then
                                table.insert(tBombData, bombData)
                            end
                        elseif (outBombData.cardType == CardEnum.CARDS_TYPE.CT_4_KING or outBombData.cardType == (CardEnum.CARDS_TYPE.CT_3_KING + 1)) and not isSiWangIsBig7Xian then
                            --出的是王炸
                            if CardLogic.getGameType() == CF.GameDefine.ENUM_GAME_TYPE.KW_NUM_GAME_TYPE_HUOPING_SHAOXING3D then
                                table.insert(tBombData, bombData)
                            end
                        elseif outBombData.cardType % 100 >= 2 and outBombData.cardType % 100 < 6 and selectCardType % 100 >= 2 and selectCardType % 100 < 6 and 
                            outBombData.cardType % 100 > selectCardType % 100 and isLianZhanCompareWithLian then
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
    --最大10线2连
    for xianNum = 4, 10 do
        local minLianNum = 3
        if xianNum >= 6 then
            minLianNum = 2
        end

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

        if kingTotal == 3 or not isSiWangIsBig7Xian then
            if outBombData == nil or (bombData.lineCount > outBombData.lineCount) then
                table.insert(tBombData, bombData)
            end
        else
            if outBombData == nil or (bombData.lineCount >= outBombData.lineCount) then
                table.insert(tBombData, bombData)
            end
        end
        if kingTotal == 4 and isSiWangIsBig8Xian then
            if outBombData == nil or (bombData.lineCount >= outBombData.lineCount) then
                table.insert(tBombData, bombData)
            end
        end
    end
    return tBombData
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
            if CardLogic.getGameType() == CF.GameDefine.ENUM_GAME_TYPE.KW_NUM_GAME_TYPE_NORMAL then
                return {{type = CardEnum.CARDS_TYPE.CT_4_KING}}
            else
                return {{type = CardEnum.CARDS_TYPE.CT_4_KING - 1}}
            end
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
        local isDanShun, jokerReplaceData7 = CardLogic.isDanShun(tCardPower)
        if isDanShun then
            table.insert(
                cardTypeArr,
                {
                    type = CardEnum.CARDS_TYPE["CT_1_JUNKO_" .. cardTotal .. "_CONTINUOUS"],
                    jokerReplaceData = jokerReplaceData7
                }
            )
        end

        local isShuangShun, jokerReplaceData6 = CardLogic.isShuangShun(tCardPower)
        if isShuangShun then
            table.insert(
                cardTypeArr,
                {
                    type = CardEnum.CARDS_TYPE["CT_2_JUNKO_" .. (cardTotal / 2) .. "_CONTINUOUS"],
                    jokerReplaceData = jokerReplaceData6
                }
            )
        end

        local isSanShun, jokerReplaceData5 = CardLogic.isSanShun(tCardPower)
        if isSanShun then
            table.insert(
                cardTypeArr,
                {
                    type = CardEnum.CARDS_TYPE["CT_3_JUNKO_" .. (cardTotal / 3) .. "_CONTINUOUS"],
                    jokerReplaceData = jokerReplaceData5
                }
            )
        end

        if #cardTypeArr > 0 then
            return cardTypeArr
        end
    else
        --12张以上为双顺、三顺、连炸（因为单个炸弹最多为12线，顺子最大3~A为12张）
        local isLianZha, xianNum, lianNum, jokerReplaceData = CardLogic.isLianZha(tCardPower, true)
        if isLianZha then
            return {{type = CardEnum.CARDS_TYPE["CT_" .. xianNum .. "_JUNKO_" .. lianNum .. "_CONTINUOUS"], jokerReplaceData = jokerReplaceData}}
        end

        local cardTypeArr = {}
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

        local isSanShun, jokerReplaceData2 = CardLogic.isSanShun(tCardPower)
        if isSanShun then
            table.insert(
                cardTypeArr,
                {
                    type = CardEnum.CARDS_TYPE["CT_3_JUNKO_" .. (cardTotal / 3) .. "_CONTINUOUS"],
                    jokerReplaceData = jokerReplaceData2
                }
            )
        end

        if #cardTypeArr > 0 then
            return cardTypeArr
        end
    end

    return {{type = CardEnum.CARDS_TYPE.CT_0_JUNKO_0_CONTINUOUS}}
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
        xian = cardType - CardEnum.CARDS_TYPE.CT_0_KING
        if cardType == CardEnum.CARDS_TYPE.CT_4_KING then
            xian = cardType - CardEnum.CARDS_TYPE.CT_0_KING - 1
        end
        if CardLogic.getGameType() == CF.GameDefine.ENUM_GAME_TYPE.KW_NUM_GAME_TYPE_NORMAL then
            xian = cardType - CardEnum.CARDS_TYPE.CT_0_KING
        end

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
                elseif lastOutCardType == CardEnum.CARDS_TYPE.CT_3_KING or lastOutCardType == CardEnum.CARDS_TYPE.CT_4_KING or lastOutCardType == (CardEnum.CARDS_TYPE.CT_3_KING + 1) then
                    --出的是王炸
                    if CardLogic.getGameType() == CF.GameDefine.ENUM_GAME_TYPE.KW_NUM_GAME_TYPE_HUOPING_SHAOXING3D then
                        return true, {obj}
                    end
                elseif selectCardType == CardEnum.CARDS_TYPE.CT_4_KING or lastOutCardType == (CardEnum.CARDS_TYPE.CT_3_KING + 1) then
                    if CardLogic.getGameType() == CF.GameDefine.ENUM_GAME_TYPE.KW_NUM_GAME_TYPE_NORMAL then
                        return true, {obj}
                    end
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

return CardLogic
xM  