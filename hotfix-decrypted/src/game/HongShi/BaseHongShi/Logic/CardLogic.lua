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

-------------------------------------------
--根据牌值获取牌权
-------------------------------------------
function CardLogic.getCardPowerByValue(cardValue)
    local cardStr = CardEnum.CARD_STR[cardValue]
    if not cardStr then
        return 0
    end

    local cardPower = CardEnum.CARD_POWER["CP_"..cardStr]
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

    local cardValue = cardId%13
    if cardValue == 0 then
        cardValue = 13
    end
    local cardColor = math.ceil(cardId/13)
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
    return (cardColor - 1)*13 + cardValue
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
    if cardType == CardEnum.CARDS_TYPE.CT_1_JUNKO_0_EXCESS_1_CONTINUOUS or cardType == CardEnum.CARDS_TYPE.CT_2_JUNKO_0_EXCESS_1_CONTINUOUS then
        --单张\对子
        return CardLogic.getTipsDataOneTwoThreeCount(tHandCards, tOutCards)
    elseif (cardType >= CardEnum.CARDS_TYPE.CT_1_JUNKO_0_EXCESS_3_CONTINUOUS and cardType <= CardEnum.CARDS_TYPE.CT_1_JUNKO_0_EXCESS_14_CONTINUOUS) then
        --单顺
        return CardLogic.getTipsDataShun(tHandCards, tOutCards, cardType)
    elseif cardType > CardEnum.CARDS_TYPE.CT_3_JUNKO_0_EXCESS_0_CONTINUOUS then
        --炸弹
        return CardLogic.getTipsDataBomb(tHandCards, tOutCards, cardType)
    end
end

-------------------------------------------
--获取单张\对子的提示数据
-------------------------------------------
function CardLogic.getTipsDataOneTwoThreeCount(tHandCards, tOutCards)
    local outCardCount = #tOutCards
    local resultData = {}
    local outCardPower = CardLogic.getMinPowerInCardIDs(tOutCards)

    if #tOutCards == 1 and (tOutCards[1] == CardEnum.CARD_ID.CID_DIAMOND_10 or tOutCards[1] == CardEnum.CARD_ID.CID_HEART_10) then
        outCardPower = CardEnum.CARD_POWER.CP_BJ + 1
    end

    local powerToCardId = CardLogic.switchCardIDsToPowerKey(tHandCards)
    local dataExpectSameCount = {}
    for power = CardEnum.CARD_POWER.CP_3, CardEnum.CARD_POWER.CP_BJ do
        local v = powerToCardId[power] or {}
        local thisPowerCount = #v

        if thisPowerCount >= outCardCount and power > outCardPower then
            if outCardCount == 1 and power == CardEnum.CARD_POWER.CP_10 then
                if thisPowerCount == outCardCount then
                    if v[1] ~= CardEnum.CARD_ID.CID_DIAMOND_10 and v[1] ~= CardEnum.CARD_ID.CID_HEART_10 then
                        table.insert(resultData, clone(v))
                    end
                else
				    local tempCardIDs = {}
				    for i = 1, outCardCount do
                        if v[i] ~= CardEnum.CARD_ID.CID_DIAMOND_10 and v[i] ~= CardEnum.CARD_ID.CID_HEART_10 then
					        table.insert(tempCardIDs, v[i])
                        end
                    end
                    local tempData = {}
                    tempData.oldCount = thisPowerCount
                    tempData.cardIDs = tempCardIDs
                    tempData.cardPower = power
                    if next(tempCardIDs) then
                        table.insert(dataExpectSameCount, tempData)
                    end
                end
            else
                if thisPowerCount == outCardCount then
                    if outCardCount ~= 1 or (v[1] ~= CardEnum.CARD_ID.CID_DIAMOND_10 and v[1] ~= CardEnum.CARD_ID.CID_HEART_10) then
                        table.insert(resultData, clone(v))
                    end
                else
				    local tempCardIDs = {}
				    for i = 1, outCardCount do
					    table.insert(tempCardIDs, v[i])
                    end
                    local tempData = {}
                    tempData.oldCount = thisPowerCount
                    tempData.cardIDs = tempCardIDs
                    tempData.cardPower = power
                    table.insert(dataExpectSameCount, tempData)
                end
            end
        end
    end

    local v = powerToCardId[CardEnum.CARD_POWER.CP_10] or {}
    local thisPowerCount = #v
    if outCardCount == 1 and thisPowerCount >= outCardCount then
        if tOutCards[1] ~= CardEnum.CARD_ID.CID_DIAMOND_10 and tOutCards[1] ~= CardEnum.CARD_ID.CID_HEART_10 then
            for i = 1, #v do
                if v[i] == CardEnum.CARD_ID.CID_DIAMOND_10 or v[i] == CardEnum.CARD_ID.CID_HEART_10 then
                    local tempCardIDs = {}
                    table.insert(tempCardIDs, v[i])
                    table.insert(resultData, tempCardIDs)
                end
            end
        end
    end
	
	--插入炸弹数据
	CardLogic.getTipsDataFreedomBomb(tHandCards, resultData)
    
    --拆牌排序
    table.sort(dataExpectSameCount, function(a, b)
        if a.oldCount ~= b.oldCount then
            return a.oldCount < b.oldCount
        end
        return a.cardPower < b.cardPower
	end)
	--插入拆牌
    for _, data in ipairs(dataExpectSameCount) do
        table.insert(resultData, data.cardIDs)
    end
	
    return resultData
end

-------------------------------------------
--获取单顺\双顺\三顺的提示数据
-------------------------------------------
function CardLogic.getTipsDataShun(tHandCards, tOutCards, cardType)
    --转换为[power] = {cardID1, cardID2, cardID3}
    local powerToCardId = CardLogic.switchCardIDsToPowerKey(tHandCards)
    local everyPowerCount = math.floor(cardType/1000)    --1,2,3表示单双三顺
    local powerCount = cardType%1000 --表示几连
    local minNormalPower = CardLogic.getMinNormalPowerFromCardIDs(tOutCards, powerCount)
    -------------spideman
    local outCardPowerToCardId = CardLogic.switchCardIDsToPowerKey(tOutCards)
    if powerToCardId[CardEnum.CARD_POWER.CP_2] then
        powerToCardId[2] = clone(powerToCardId[CardEnum.CARD_POWER.CP_2])
    end
    if outCardPowerToCardId[CardEnum.CARD_POWER.CP_2] then
        minNormalPower = 2
    end
    if outCardPowerToCardId[CardEnum.CARD_POWER.CP_A] and #outCardPowerToCardId[CardEnum.CARD_POWER.CP_A] == 2 then
        minNormalPower = 1
    end
    if outCardPowerToCardId[CardEnum.CARD_POWER.CP_A] and (not outCardPowerToCardId[CardEnum.CARD_POWER.CP_K]) then
        minNormalPower = 1
    end
    ---------------------
    local jokerData = CardLogic.getJokerDataFromCardIDs(tHandCards)
    local jokerCount = #jokerData
    local resultData = {}
    local dataExpectBomb = {}
    --按牌权值从小到大遍历
    for cardPower = (minNormalPower + 1), (CardEnum.CARD_POWER.CP_A - powerCount + 1) do
        local needJokerCount = 0
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
                table.insert(dataExpectBomb, tempData)
            end
        end
    end

    table.sort(dataExpectBomb, function(a, b)
        if a.jokerCount ~= b.jokerCount then
            return a.jokerCount < b.jokerCount
        end
        if a.isChaiPai ~= b.isChaiPai then
            return a.isChaiPai < b.isChaiPai
        end
        return a.id < b.id
    end)
    
    for _, data in ipairs(dataExpectBomb) do
        table.insert(resultData, data.cardIDs)
    end

    --插入炸弹数据
	CardLogic.getTipsDataFreedomBomb(tHandCards, resultData)
    
    return resultData
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
    table.sort(tBombData, function(a, b)
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
    end)
    
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
    if #cardIDs == 1 and (cardIDs[1] == CardEnum.CARD_ID.CID_DIAMOND_10 or cardIDs[1] == CardEnum.CARD_ID.CID_HEART_10) then
        outCardPower = CardEnum.CARD_POWER.CP_BJ + 1
    end
    if #cardIDs == 2 and #CardLogic.getDoubleTenBombFromCardIDs(cardIDs) == 2 then
        outCardPower = CardEnum.CARD_POWER.CP_BJ + 1
    end
    return outCardPower
end

-------------------------------------------
--获取最小牌权值(帶2连炸除外)
-------------------------------------------
function CardLogic.getMinNormalPowerFromCardIDs(cardIDs, powerCount)
    local normalPowerCount = 0  --普通牌种类数(已此来判断百搭牌替换了几种牌)
    local maxNormalPower = 0    --最大普通牌权值
    local minNormalPower = CardEnum.CARD_POWER.CP_BJ + 1    --最小普通牌权值

    local tCardPower = {}
    local bPower2 = false
    for _, cardId in pairs(cardIDs) do
        local cardPower = CardLogic.getCardPowerById(cardId)
        table.insert(tCardPower, cardPower)
        if cardPower == CardEnum.CARD_POWER.CP_2 then
            bPower2 = true
        end
    end
    local bDanshun = CardLogic.isDanShun(tCardPower)

    for _, cardID in ipairs(cardIDs) do
        local power = CardLogic.getCardPowerById(cardID)
        if bDanshun then
            if power == CardEnum.CARD_POWER.CP_2 then
                power = 2
            end
            if power == CardEnum.CARD_POWER.CP_A and bPower2 then
                power = 1
            end
        end
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
    if maxNormalPower + (powerCount - normalPowerCount) > CardEnum.CARD_POWER.CP_A then
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
    else
        --12张以上为双顺、三顺、连炸（因为单个炸弹最多为12线，顺子最大3~A为12张）
        return CardLogic.isShuangShun(tCardPower)
            or CardLogic.isSanShun(tCardPower)
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
    local tempDanShun = {}      --单顺临时存储值
    local tempShuangShun = {}   --双顺临时存储值
    local tempSanShun = {}      --三顺临时存储值
    local tValueKeyData = CardLogic.switchCardIDsToPowerKey(tHandCards)    --转换为[power] = {cardID1, cardID2, cardID3}

    --判读缓存的单顺是否已经满足条件
    local checkTempDanShun = function()
        if #tempDanShun >= 5 then
            table.insert(tDanShun, tempDanShun)
        end
        tempDanShun = {}
    end
    --判读缓存的双顺是否已经满足条件
    local checkTempShuangShun = function()
        if #tempShuangShun >= 2*3 then
            table.insert(tShuangShun, tempShuangShun)
        end
        tempShuangShun = {}
    end
    --判读缓存的三顺是否已经满足条件
    local checkTempSanShun = function()
        if #tempSanShun >= 3*3 then
            table.insert(tSanShun, tempSanShun)
        end
        tempSanShun = {}
    end
    --按牌权值从小到大遍历3-k
    for cardPower = CardEnum.CARD_POWER.CP_3, CardEnum.CARD_POWER.CP_2 do
        local tempCardData = tValueKeyData[cardPower] or {}
        tempCardData = clone(tempCardData)
        local cardCount = #tempCardData    --牌权对应手牌数量
        
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

    table.sort(jokerData, function(a, b)
        return a < b
    end)

    return jokerData
end

-------------------------------------------
--自由出牌时炸弹提示
-------------------------------------------
function CardLogic.getTipsDataFreedomBomb(tHandCards, resultData)
    local tBombData = CardLogic.getBombDataFromCardIDs(tHandCards)
    --炸弹排序
    table.sort(tBombData, function(a, b)
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
	end)

    for _, v in ipairs(tBombData) do
        table.insert(resultData, v.data)
    end
end

function CardLogic.getBombDataFromCardIDs(tHandCards, outBombData)
    --转换为[power] = {cardID1, cardID2, cardID3}
    local tValueKeyData = CardLogic.switchCardIDsToPowerKey(tHandCards)
    --手牌中的百搭牌
    local tBombData = {}
    local kingTotal = 0
    local kingData = {}
    --按牌权值从小到大遍历(普通牌值炸弹)
    for cardPower = CardEnum.CARD_POWER.CP_3, CardEnum.CARD_POWER.CP_BJ do
        local tempCardData = tValueKeyData[cardPower] or {}
        local cardCount = #tempCardData    --牌权对应手牌数量

        if CardLogic.isKingByPower(cardPower) then
            kingTotal = kingTotal + cardCount
            for _, kingCardID in pairs(tempCardData) do
                table.insert(kingData, kingCardID)
            end
        elseif cardCount >= 3 then
            local tempBombData = clone(tempCardData)
            local bombData = {
                jokerCount = 0, --百搭牌数
                lineCount = cardCount,
                power = cardPower,
                data = tempBombData
            }
            if outBombData == nil then
                table.insert(tBombData, bombData)
            else
                if bombData.lineCount > outBombData.lineCount then
                    table.insert(tBombData, bombData)
                elseif bombData.lineCount == outBombData.lineCount then
                    if outBombData.cardType%1000 == 1 then
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

    --天王炸
    if kingTotal == 2 then
        local bombData = {
            jokerCount = kingTotal,
            lineCount = 5,
            power = CardEnum.CARD_POWER.CP_SJ,
            data = kingData
        }
        if outBombData == nil 
            or (bombData.lineCount > outBombData.lineCount)  then
            table.insert(tBombData, bombData)
        end
    end

    -- 对红十
    local doubleTenBombData = CardLogic.getDoubleTenBombFromCardIDs(tHandCards)
    if #doubleTenBombData == 2 then
        local bombData = {
            jokerCount = 0,
            lineCount = 6,
            power = CardEnum.CARD_POWER.CP_BJ,
            data = doubleTenBombData
        }
        if outBombData == nil 
            or (bombData.lineCount > outBombData.lineCount)  then
            table.insert(tBombData, bombData)
        end
    end
    return tBombData
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
    if (cardNum == 3 and cardTotal ~= 3) or (cardNum == 4 and cardTotal < 4)   then
        return false
    end

    local tempCardPower = CardEnum.CARD_POWER.CP_NONE    --临时记录cardPower（大小王不记录）
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
    if cardTotal < 3 or cardTotal > 14 then
        return false
    end

    local tmpPowers = {}
    local bPower2 = false
    for i = #tCardPower, 1, -1 do
        local power = tCardPower[i]
        if power == CardEnum.CARD_POWER.CP_2 then
            bPower2 = true
        end
    end
    for i = #tCardPower, 1, -1 do
        local power = tCardPower[i]
        if power == CardEnum.CARD_POWER.CP_2 then
            power = 2
            table.remove(tCardPower, i)
            table.insert(tCardPower, power)
        end
        if power == CardEnum.CARD_POWER.CP_A and bPower2 then
            power = 1
            table.remove(tCardPower, i)
            table.insert(tCardPower, power)
        end
        tmpPowers[power] = (tmpPowers[power] or 0) + 1
    end

    local sortFunc = function(a, b) 
        return a < b 
    end
    table.sort(tCardPower, sortFunc)

    local jokerReplaceData = {}
    local lastCardPower = CardEnum.CARD_POWER.CP_NONE
    for index, cardPower in ipairs(tCardPower) do
        if CardLogic.isJokerByPower(cardPower) then
            return false
        end
        if tmpPowers[cardPower] and tmpPowers[cardPower] > 1 then
            return false
        end
        if index == 1 then
            lastCardPower = cardPower
        else
            if cardPower - lastCardPower > 1 then
                return false
            end
            lastCardPower = cardPower
        end
    end
    return true, jokerReplaceData
end

-------------------------------------------
--双顺和三顺的判断逻辑相同
--shunNum 2表示双顺，3表示三顺
-------------------------------------------
function CardLogic.checkShuangShunOrSanShun(tCardPower, shunNum)
    local cardTotal = #tCardPower
    if cardTotal < 3*shunNum or cardTotal%shunNum ~= 0 then
        return false
    end
    --3到A为最大顺，只有12张(只有)
    if cardTotal > shunNum*13 then
        return false
    end

    local jokerCardTotal = 0    --百搭牌数量
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
                if normalCardPowerNum >= cardTotal/shunNum then
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
        return {{type = CardEnum.CARDS_TYPE.CT_1_JUNKO_0_EXCESS_1_CONTINUOUS}}
    elseif cardTotal == 2 then
        if tCardPower[1] >= CardEnum.CARD_POWER.CP_SJ and tCardPower[2] >= CardEnum.CARD_POWER.CP_SJ then
            return {{type = CardEnum.CARDS_TYPE.CT_5_JUNKO_0_EXCESS_1_CONTINUOUS}}
        elseif (cardIDs[1] == CardEnum.CARD_ID.CID_DIAMOND_10 and cardIDs[2] == CardEnum.CARD_ID.CID_HEART_10) or (cardIDs[1] == CardEnum.CARD_ID.CID_HEART_10 and cardIDs[2] == CardEnum.CARD_ID.CID_DIAMOND_10) then
            return {{type = CardEnum.CARDS_TYPE.CT_6_JUNKO_0_EXCESS_1_CONTINUOUS}}
        elseif CardLogic.isDui(tCardPower) then
            return {{type = CardEnum.CARDS_TYPE.CT_2_JUNKO_0_EXCESS_1_CONTINUOUS}}
        end
    elseif cardTotal == 3 then
        if CardLogic.isSanZhang(tCardPower) then
            return {{type = CardEnum.CARDS_TYPE.CT_3_JUNKO_0_EXCESS_1_CONTINUOUS}}
        end
        local isDanShun, jokerReplaceData = CardLogic.isDanShun(tCardPower)
        if isDanShun then
            return {{type = CardEnum.CARDS_TYPE.CT_1_JUNKO_0_EXCESS_3_CONTINUOUS, jokerReplaceData = jokerReplaceData}}
        end
    elseif cardTotal == 4 then
        if CardLogic.isNormalBomb(tCardPower) then
            return {{type = CardEnum.CARDS_TYPE.CT_4_JUNKO_0_EXCESS_1_CONTINUOUS}}
        end
        local isDanShun, jokerReplaceData = CardLogic.isDanShun(tCardPower)
        if isDanShun then
            return {{type = CardEnum.CARDS_TYPE.CT_1_JUNKO_0_EXCESS_4_CONTINUOUS, jokerReplaceData = jokerReplaceData}}
        end
    elseif cardTotal >= 5 then
        local isDanShun, jokerReplaceData = CardLogic.isDanShun(tCardPower)
        if isDanShun then
            return {{type = CardEnum.CARDS_TYPE["CT_1_JUNKO_0_EXCESS_".. cardTotal .."_CONTINUOUS"], jokerReplaceData = jokerReplaceData}}
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

    table.sort(powerData, function (a, b)
        if a.power ~= b.power then
            return a.power < b.power
        end
        return a.cardID < b.cardID
    end)

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
    if cardType <= CardEnum.CARDS_TYPE.CT_3_JUNKO_0_EXCESS_0_CONTINUOUS then
        return xian
    end
    --王炸
    if cardType == CardEnum.CARDS_TYPE.CT_5_JUNKO_0_EXCESS_1_CONTINUOUS or 
        cardType == CardEnum.CARDS_TYPE.CT_6_JUNKO_0_EXCESS_1_CONTINUOUS then
        xian = cardType / 1000 
        return xian      
    end
    
    if math.floor(cardType % 1000) == 1 then
        xian = math.floor(cardType / 1000)
    else
        xian = math.floor(cardType / 1000) + math.floor(cardType % 1000)
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
            table.sort(tCardPower[i], function(a, b)
                return a < b
            end)
        end
    end
    if sortType == CardLogic.SrotType.CardPower then
        for i = CardEnum.CARD_POWER.CP_3, CardEnum.CARD_POWER.CP_BJ do
            local tempPowerData = tCardPower[i] or {}
            for _, cardID in ipairs(tempPowerData) do
                if cardID ~= CardEnum.CARD_ID.CID_DIAMOND_10 and cardID ~= CardEnum.CARD_ID.CID_HEART_10 then
                    table.insert(resultCardIDs, cardID)
                end
            end
        end
        for i = CardEnum.CARD_POWER.CP_3, CardEnum.CARD_POWER.CP_BJ do
            local tempPowerData = tCardPower[i] or {}
            for _, cardID in ipairs(tempPowerData) do
                if cardID == CardEnum.CARD_ID.CID_DIAMOND_10 or cardID == CardEnum.CARD_ID.CID_HEART_10 then
                    table.insert(resultCardIDs, cardID)
                end
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
        return false,{}
    end
    if cardIDsToDelete == nil then
        return true,{}
    end
    local tempCards = clone(cardIDs)
    local tempcardsToDelete = clone(cardIDsToDelete)

    for _,value in ipairs(tempcardsToDelete) do 
        CardLogic.deleteOneCardID(tempCards,value)
    end
    local iSDeleteSuccess = (#tempCards + #cardIDsToDelete == #cardIDs ) and (#cardIDsToDelete ~= 0)
    return iSDeleteSuccess,tempCards
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
    if lastOutCardType < CardEnum.CARDS_TYPE.CT_3_JUNKO_0_EXCESS_1_CONTINUOUS then
        for _, obj in ipairs(selectCardTypeArr) do
            local selectCardType = obj.type
            if selectCardType >= CardEnum.CARDS_TYPE.CT_3_JUNKO_0_EXCESS_1_CONTINUOUS then
                return true, {obj}
            end

            if lastOutCardType == selectCardType then
                local lastOutCardPower
                local selectCardPower
                if lastOutCardType%1000 == 1 then
                    lastOutCardPower = CardLogic.getMinPowerInCardIDs(lastOutCardIDs)
                    selectCardPower = CardLogic.getMinPowerInCardIDs(selectCardIDs)
                else
                    lastOutCardPower = CardLogic.getMinNormalPowerFromCardIDs(lastOutCardIDs, lastOutCardType%1000)
                    selectCardPower = CardLogic.getMinNormalPowerFromCardIDs(selectCardIDs, selectCardType%1000)
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
                if lastOutCardType%1000 == 1 and selectCardType == lastOutCardType then
                    --出的是普通炸
                    local lastOutCardPower = CardLogic.getMinNormalPowerFromCardIDs(lastOutCardIDs, 1)
                    local selectCardPower = CardLogic.getMinNormalPowerFromCardIDs(selectCardIDs, 1)
                    if selectCardPower > lastOutCardPower then
                        return true, {obj}
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
    table.sort(tempHandCardIDs1, function(a, b)
        return a < b
    end)
    table.sort(tempHandCardIDs2, function(a, b)
        return a < b
    end)
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
        local powerCount = outCardType%100 --表示几连
        local minNormalPower = CardLogic.getMinNormalPowerFromCardIDs(outCardIDs, powerCount)
        return CardLogic.getShunTipsBySelectCardIDs(handCardIDs, selectCardIDs, outCardType, minNormalPower)
    end
    local defaultCardTypeArr = 
        {
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
    local shunCount = math.floor(cardType/100)
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
            local tempCardCount = #tempCardIDs  --当前牌权已经选择的牌
            if tempCardCount > shunCount then
                return false
            end
            if tempCardCount < shunCount then
                tempHandCardIDs = tHandCardPower[cardPower] or {}
                if #tempHandCardIDs < shunCount - tempCardCount then
                    if #tempJokerCardIDs + #tempSelectJokerCardIDs < shunCount - tempCardCount - #tempHandCardIDs then
                        return false
                    end
                    for i = 1, #tempHandCardIDs do
                        table.insert(resultCardIDs, tempHandCardIDs[i])
                    end
                    if (shunCount - tempCardCount - #tempHandCardIDs) < #tempSelectJokerCardIDs then
                        for _ = 1, (shunCount - tempCardCount - #tempHandCardIDs) do
                            table.insert(resultCardIDs, tempSelectJokerCardIDs[1])
                            table.remove(tempSelectJokerCardIDs, 1)
                        end
                    else
                        local selectJokerNum = #tempSelectJokerCardIDs
                        for _ = 1, selectJokerNum do
                            table.insert(resultCardIDs, tempSelectJokerCardIDs[1])
                            table.remove(tempSelectJokerCardIDs, 1)
                        end
                        for _ = 1, shunCount - tempCardCount - #tempHandCardIDs - selectJokerNum do
                            table.insert(resultCardIDs, tempJokerCardIDs[1])
                            table.remove(tempJokerCardIDs, 1)
                        end
                    end
                else
                    for i = 1, shunCount - tempCardCount do
                        table.insert(resultCardIDs, tempHandCardIDs[i])
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

    local shunLianCount = cardType%100
    local tempNeedCount = shunLianCount - 1
    if outCardPower ~= nil and selectMaxCardPower - selectMinCardPower > tempNeedCount then
        return false
    end
    if selectMaxCardPower - selectMinCardPower < tempNeedCount then
        if selectMinCardPower <= CardEnum.CARD_POWER.CP_A - tempNeedCount then
            for power = selectMinCardPower, selectMaxCardPower - tempNeedCount, -1 do
                local tempFlag, tempData = tipsCardFunc(power, power+tempNeedCount)
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

---------------spideman
function CardLogic.getDoubleTenBombFromCardIDs(cardIDs)
    local result = {}
    for _, cardID in ipairs(cardIDs) do
        if cardID == CardEnum.CARD_ID.CID_HEART_10 or cardID == CardEnum.CARD_ID.CID_DIAMOND_10 then
            table.insert(result, cardID)
        end
    end
    return result
end

return CardLogic ?�  