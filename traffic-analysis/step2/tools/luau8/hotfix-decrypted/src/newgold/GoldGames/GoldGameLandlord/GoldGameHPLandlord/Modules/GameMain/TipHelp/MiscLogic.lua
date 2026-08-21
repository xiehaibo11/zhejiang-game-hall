local MiscLogic = {}
local SplitCard = require("newgold.GoldGames.GoldGameLandlord.GoldGameHPLandlord.Modules.GameMain.TipHelp.SplitCard")
local ucCardPower = require("newgold.GoldGames.GoldGameLandlord.GoldGameHPLandlord.Modules.GameMain.TipHelp.Define").ucCardPower
local CardPower = require("newgold.GoldGames.GoldGameLandlord.GoldGameHPLandlord.Modules.GameMain.TipHelp.Define").CardPower
local ucCardColor = require("newgold.GoldGames.GoldGameLandlord.GoldGameHPLandlord.Modules.GameMain.TipHelp.Define").ucCardColor
local ucCardValue = require("newgold.GoldGames.GoldGameLandlord.GoldGameHPLandlord.Modules.GameMain.TipHelp.Define").ucCardValue
local CardType = require("newgold.GoldGames.GoldGameLandlord.GoldGameHPLandlord.Modules.GameMain.TipHelp.Define").CardType
local CardTypeWeight = require("newgold.GoldGames.GoldGameLandlord.GoldGameHPLandlord.Modules.GameMain.TipHelp.Define").CardTypeWeight
local CardTypeBombWeight = require("newgold.GoldGames.GoldGameLandlord.GoldGameHPLandlord.Modules.GameMain.TipHelp.Define").CardTypeBombWeight

-- 克隆数据
MiscLogic.clone = function(data)
    return json.decode(json.encode(data))
end

-- 切割数据
MiscLogic.slice = function(t,i1,i2)
    local res = {}
    local n = #t
    -- default t for range
    i1 = i1 or 1
    i2 = i2 or n
    if i2 < 0 then
      i2 = n + i2 + 1
    elseif i2 > n then
      i2 = n
    end
    if i1 < 1 or i1 > n then
      return res
    end
    local k = 1
    for i = i1,i2 do
      res[k] = t[i]
      k = k + 1
    end
    return res
end

-- 比较牌值大小
MiscLogic.compCardsByValue = function(cardA, cardB)
    if cardB and cardA then
        if ucCardPower[cardB] < ucCardPower[cardA] then
            return true
        elseif ucCardPower[cardB] > ucCardPower[cardA] then
            return false
        else
            return cardA > cardB
        end
    else
        return false
    end
    -- return true
end

-- 比较牌值大小 A比B小true
MiscLogic.compCardsByValueBool = function(cardA, cardB)
    return ucCardPower[cardA] < ucCardPower[cardB]
end

MiscLogic.isEqualByCardsValue = function(cardA, cardB)
    return ucCardPower[cardA] == ucCardPower[cardB]
end

-- 比较牌的大小
MiscLogic.compCardsByColor = function(cardA, cardB)
    return ucCardColor[cardA] - ucCardColor[cardB]
end

-- 获取牌的花色
MiscLogic.getCardColor = function(card)
    return ucCardColor[card]
end

MiscLogic.getCardLogicValue = function(card)
    return ucCardValue[card]
end

-- 根据牌值排序，从大到小排序
MiscLogic.sortMaxCardsByValue = function(cards)
    if #cards == 0 then
        return cards
    end
    local _cards = MiscLogic.clone(cards)
    table.sort(_cards, function(a, b) return MiscLogic.compCardsByValue(a, b) end)
    return _cards
end

-- 根据牌值排序，从小到大排序
MiscLogic.sortMinCardsByValue = function(cards)
    if #cards == 0 then
        return cards
    end
    local _cards = MiscLogic.clone(cards)
    table.sort(_cards, function(a, b) return MiscLogic.compCardsByValue(b, a) end)
    return _cards
end

MiscLogic.setSplitCard = function(cards, splitCard)
    splitCard = splitCard or SplitCard:new()
    for i = 0, 17 do
        splitCard.cardList[i] = {}
    end
    for i = 1, #cards do
        local cardPower = ucCardPower[cards[i]]
        if cardPower then
            table.insert(splitCard.cardList[cardPower], cards[i])
        elseif #cards[i] > 0 then
            for j = 1, #cards[i] do
                local cardPower = ucCardPower[cards[i][j]]
                if cardPower then
                    table.insert(splitCard.cardList[cardPower], { cards[i][j] })
                end
            end
        end
    end
    --小王
    if #splitCard.cardList[CardPower.CP_SJ] > 0 then
        for i = 1, #splitCard.cardList[CardPower.CP_SJ] do
            table.insert(splitCard.sj, splitCard.cardList[CardPower.CP_SJ][i])
        end
    end
    --大王
    if #splitCard.cardList[CardPower.CP_BJ] > 0 then
        for i = 1, #splitCard.cardList[CardPower.CP_BJ] do
            table.insert(splitCard.bj, splitCard.cardList[CardPower.CP_BJ][i])
        end
    end
    for i = 0, 15 do --不包含王
        if #splitCard.cardList[i] == 1 then --单牌
            table.insert(splitCard.single, splitCard.cardList[i])
        elseif #splitCard.cardList[i] == 2 then --对
            table.insert(splitCard.pairs, splitCard.cardList[i])
        elseif #splitCard.cardList[i] == 3 then --三张一样的
            table.insert(splitCard.three, splitCard.cardList[i])
        elseif #splitCard.cardList[i] == 4 then --四张以上一样的
            table.insert(splitCard.four, splitCard.cardList[i])
        elseif #splitCard.cardList[i] == 5 then --五张以上一样的
            table.insert(splitCard.five, splitCard.cardList[i])
        elseif #splitCard.cardList[i] == 6 then --六张以上一样的
            table.insert(splitCard.six, splitCard.cardList[i])
        elseif #splitCard.cardList[i] == 7 then --七张以上一样的
            table.insert(splitCard.seven, splitCard.cardList[i])
        elseif #splitCard.cardList[i] == 8 then --八张以上一样的
            table.insert(splitCard.eight, splitCard.cardList[i])
        end
        --
        local len = #splitCard.cardList[i]
        if len > 0 then
            local arr = splitCard.cardLen[len] or {}
            table.insert(arr, splitCard.cardList[i])
            splitCard.cardLen[len] = arr
        end
    end
    return splitCard
end

-- 定义比较两组牌的大小的函数
MiscLogic.compCardsMax = function(selfdata1, predata2)
    -- 首次出牌，且自己有牌可以出
    if not predata2 and selfdata1.nTypeID ~= 0 then
        return true
    else
        -- 牌型一致
        if predata2.nTypeID == selfdata1.nTypeID then
            -- 牌的数量一致，比较最大牌的权值
            if predata2.nCount == selfdata1.nCount then
                local selfCardWeight = selfdata1.nWeight
                local preCardWeight = predata2.nWeight
                if selfCardWeight > preCardWeight then
                    return true
                else
                    return false
                end
                -- 牌的数量不一致，可能是连炸或炸弹
            elseif predata2.nCount < selfdata1.nCount then
                -- 如果是连炸，则比较长度
                if predata2.nTypeID == CardType.CTID_SI_SHUN then
                    return true
                end
                return false
            else -- predata2.nCount > selfdata1.nCount
                -- 不可能是连炸，直接返回 false
                return false
            end
        else -- 牌型不一致
            -- 如果自己的牌型权重是炸弹，则需要比较自己和对方牌谁大
            local selfCardTypeWeight = CardTypeWeight[selfdata1.nTypeID] or 0
            local preCardTypeWeight = CardTypeWeight[predata2.nTypeID] or 0
            if selfCardTypeWeight > CardTypeBombWeight then
                if selfCardTypeWeight > preCardTypeWeight then
                    return true
                else
                    return false
                end
            else -- 自己不是炸弹，不能出
                return false
            end
        end
    end
end


return MiscLogicy