local GameLogic = class("GameLogic")

local SplitCard = require("newgold.GoldGames.GoldGameLandlord.GoldGameHPLandlord.Modules.GameMain.TipHelp.SplitCard")
local MiscLogic = require("newgold.GoldGames.GoldGameLandlord.GoldGameHPLandlord.Modules.GameMain.TipHelp.MiscLogic")
local ucCardPower = require("newgold.GoldGames.GoldGameLandlord.GoldGameHPLandlord.Modules.GameMain.TipHelp.Define").ucCardPower
local CardType = require("newgold.GoldGames.GoldGameLandlord.GoldGameHPLandlord.Modules.GameMain.TipHelp.Define").CardType
local KING_BOOM_NUM = require("newgold.GoldGames.GoldGameLandlord.GoldGameHPLandlord.Modules.GameMain.TipHelp.Define").KING_BOOM_NUM
local CardPower = require("newgold.GoldGames.GoldGameLandlord.GoldGameHPLandlord.Modules.GameMain.TipHelp.Define").CardPower
local ucCardColor = require("newgold.GoldGames.GoldGameLandlord.GoldGameHPLandlord.Modules.GameMain.TipHelp.Define").ucCardColor
local CardColor = require("newgold.GoldGames.GoldGameLandlord.GoldGameHPLandlord.Modules.GameMain.TipHelp.Define").CardColor
local ucCardValue = require("newgold.GoldGames.GoldGameLandlord.GoldGameHPLandlord.Modules.GameMain.TipHelp.Define").ucCardValue

function flatten(tbl)
    local result = {}
    for _, v in ipairs(tbl) do
      if type(v) == "table" then
        local flat = flatten(v)
        for _, f in ipairs(flat) do
          table.insert(result, f)
        end
      else
        table.insert(result, v)
      end
    end
    return result
end

function mergeTable(a, b)
    local newTable = {}
    for _, v1 in ipairs(a) do
        newTable[#newTable + 1] = v1
    end
    for _, v2 in ipairs(b) do
        newTable[#newTable + 1] = v2
    end
    return newTable
end

function GameLogic:ctor()
    self.cardData = { wildCards = {}, isFeiDan = false }
    self.splitCard = SplitCard.new()

    --    local cardType =  self:calculateCardType({ 40, 14, 1, 51, 38, 25, 12, 50, 37, 24, 11, 49, 36, 23, 10, 42, 16, 54, 53, 27 }, false)
    -- local cardType = self:calculateCardType({ 51, 38, 25, 12 }, false)
    -- print("cardType = ", cardType)

    -- self:test1()
end

-- 初始化数据
function GameLogic:setData(data)
    self.cardData.wildCards = data.wildCards
    self.cardData.isFeiDan = data.isFeiDan
end

-- 清空 splitCard
function GameLogic:clearSplitCard()
    self.splitCard:clear()
end

-- 克隆数据
function GameLogic:clone(data)
    return json.decode(json.encode(data))
end

--[[根据牌值排序 从大到小排序
@param cards 牌数组
@return 排序后的牌数组
--]]
function GameLogic:sortMaxCardsByValue(cards)
    if #cards == 0 then
        return cards
    end
    local _cards = self:clone(cards)
    table.sort(_cards, function(a, b) return self:compCardsByValue(a, b) end)
    return _cards
end

--[[根据牌的张数排序
@param cards 牌数组
@return 排序后的牌数组
--]]
function GameLogic:sortMaxCardsByNum(cards)
    if #cards == 0 then
        return cards
    end
    local _cards = self:clone(cards)
    _cards = self:sortMaxCardsByValue(_cards)
    local tmp = {}
    self:clearSplitCard()
    local splitCard = self:setSplitCard(cards)
    table.insertto(tmp, splitCard.single)
    table.insertto(tmp, splitCard.pairs)
    table.insertto(tmp, splitCard.three)
    table.insertto(tmp, splitCard.four)
    table.insertto(tmp, splitCard.five)
    table.insertto(tmp, splitCard.six)
    table.insertto(tmp, splitCard.seven)
    table.insertto(tmp, splitCard.eight)
    table.insertto(tmp, { table.merge(splitCard.sj, splitCard.bj) })

    table.sort(tmp, function(a, b)
        if #b == #a and #a > 0 then
            return ucCardPower[b[1]] < ucCardPower[a[1]]
        else
            return #b < #a
        end
    end)

    return flatten(tmp)
end

--[[根据牌值排序 从小到大排序
@param cards 牌数组
@return 排序后的牌数组
--]]
function GameLogic:sortMinCardsByValue(cards)
    if #cards == 0 then
        return cards
    end
    local _cards = self:clone(cards)
    table.sort(_cards, function(a, b) return self:compCardsByValue(b, a) end)
    return _cards
end

--[[比较牌值大小
@param cardA 牌 A
@param cardB 牌 B
@return 牌值大小比较结果
--]]
function GameLogic:compCardsByValue(cardA, cardB)
    if tonumber(cardA) == nil  then
        return true
    elseif  tonumber(cardB) == nil then
        return false
    end
    return ucCardPower[cardB] < ucCardPower[cardA]
end

--[[比较牌值大小
@param cardA 牌 A
@param cardB 牌 B
@return 牌值大小比较结果（布尔值）
--]]
function GameLogic:compCardsByValueBool(cardA, cardB)
    return ucCardPower[cardA] < ucCardPower[cardB]
end

--[[判断两张牌是否牌值相等
@param cardA 牌 A
@param cardB 牌 B
@return 是否牌值相等
--]]
function GameLogic:isEqualByCardsValue(cardA, cardB)
    return ucCardPower[cardA] == ucCardPower[cardB]
end

--[[比较牌的花色大小
@param cardA 牌 A
@param cardB 牌 B
@return 花色大小比较结果
--]]
function GameLogic:compCardsByColor(cardA, cardB)
    return self:getCardColor(cardA) - self:getCardColor(cardB)
end

--[[获取某张牌的牌值
@param card 牌
@return 牌值
--]]
function GameLogic:getCardLogicValue(card)
    return ucCardValue[card]
end

--[[获取某张牌的花色
@param card 牌
@return 花色
--]]
function GameLogic:getCardColor(card)
    return ucCardColor[card]
end

--[[根据牌值分类
@param cards 牌数组
@param splitCard 牌值分类对象（可选）
@return 牌值分类对象
--]]
function GameLogic:setSplitCard(cards, splitCard)
    splitCard = splitCard or SplitCard:new()
    for i = 0, 17 do
        splitCard.cardList[i] = {}
    end
    for i = 1, #cards do
        local cardPower = ucCardPower[cards[i]]
        if cardPower ~= nil then
            table.insert(splitCard.cardList[cardPower], cards[i])
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

    for i = 0, 15 do -- 不包含王
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
    end

    return splitCard
end

function GameLogic:getNormalBoomWithoutKing(cards)
    self:clearSplitCard()
    local splitCard = self:setSplitCard(cards, self.splitCard)
    return splitCard.four
end

--[[获取炸弹
@param cards 牌数组
@return 炸弹牌数组
--]]
function GameLogic:getNormalBoom(cards)
    self:clearSplitCard()
    local tipArr = {} --循环提示列表
    local splitCard = self:setSplitCard(cards, self.splitCard)
    tipArr = mergeTable(tipArr, flatten(splitCard.four))
    tipArr = mergeTable(tipArr, flatten(splitCard.five))
    tipArr = mergeTable(tipArr, flatten(splitCard.six))
    tipArr = mergeTable(tipArr, flatten(splitCard.seven))
    tipArr = mergeTable(tipArr, flatten(splitCard.eight))

    --王炸
    if #splitCard.bj == 1 and #splitCard.sj == 1 then
        tipArr = mergeTable(tipArr, splitCard.sj)
        tipArr = mergeTable(tipArr, splitCard.bj)
    end

    return tipArr
end

--[[获取炸弹牌组
@param cards 牌数组
@return 炸弹牌组数组
--]]
function GameLogic:getNormalBoomGroup(cards)
    self:clearSplitCard()
    local tipArr = {} --循环提示列表
    local splitCard = self:setSplitCard(cards, self.splitCard)
    table.insertto(tipArr, splitCard.four)
    table.insertto(tipArr, splitCard.five)
    table.insertto(tipArr, splitCard.six)
    table.insertto(tipArr, splitCard.seven)
    table.insertto(tipArr, splitCard.eight)

    --王炸
    if #splitCard.bj == 1 and #splitCard.sj == 1 then
        local tempArr = {}
        for _, v in pairs(splitCard.sj) do
            table.insert(tempArr, v)
        end
        for _, v in pairs(splitCard.bj) do
            table.insert(tempArr, v)
        end
        table.insert(tipArr, tempArr)
    end

    return tipArr
end

--[[计算牌的类型 外部调用
@param cards 牌数组
@param bFeiDan 是否支持飞机带单（可选，默认为 false）
@param opt 计算数据对象（可选）
@return 牌型标识符
--]]
function GameLogic:calculateCardType(cards, bFeiDan, opt)
    opt = opt or { cards = {}, power = 0, cardType = 0 }
    local splitCard = SplitCard:new()
    local cardList = MiscLogic.setSplitCard(cards, splitCard)
    if self:isSingleType(cards, cardList, opt) then --单张
        return opt.cardType
    elseif self:isPairsType(cards, cardList, opt) then
        return opt.cardType
    elseif self:isBoomStraigh(cards, cardList, opt, bFeiDan) then --连炸
        return opt.cardType
    elseif self:isBoom(cards, cardList, opt, bFeiDan) then --炸弹
        return opt.cardType
    elseif self:isHuoJianBoom(cards, cardList, opt, bFeiDan) then --火箭
        return opt.cardType
    elseif self:isTianWangBoom(cards, cardList, opt, bFeiDan) then --天王炸
        return opt.cardType
    elseif self:isThreeType(cards, cardList, opt) then --三张
        return opt.cardType
    elseif self:isSingleStraighType(cards, cardList, opt) then --单顺
        return opt.cardType
    elseif self:isThreeWithSingleType(cards, cardList, opt) then --三带一张
        return opt.cardType
    elseif self:isThreeWithOneType(cards, cardList, opt) then --三带一对
        return opt.cardType
    elseif self:isFourWithPairsType(cards, cardList, opt) then --四带二对(对子)
        return opt.cardType
    elseif self:isFourWithTwoType(cards, cardList, opt) then --四带二张
        return opt.cardType
    elseif self:isThreeStraighType(cards, cardList, opt) then --三顺
        return opt.cardType
    elseif self:isThreeWithPairsStraighTypeButterfly(cards, cardList, opt) then --三顺飞机带翅膀--蝴蝶牌型
        return opt.cardType
    elseif self:isPairsStraighType(cards, cardList, opt) then --双顺
        return opt.cardType
    end

    return CardType.CTID_NONE
end

-- function GameLogic:calculateCardType(cards, bFeiDan, opt)
--     opt = opt or { cards = {}, power = 0, cardType = 0 }
--     local splitCard = SplitCard:new()
--     local cardList = MiscLogic.setSplitCard(cards, splitCard)
--     if self:isSingleType(cards, cardList, opt) then --单张
--         return opt
--     elseif self:isPairsType(cards, cardList, opt) then
--         return opt
--     elseif self:isBoomStraigh(cards, cardList, opt, bFeiDan) then --连炸
--         return opt
--     elseif self:isBoom(cards, cardList, opt, bFeiDan) then --炸弹
--         return opt
--     elseif self:isHuoJianBoom(cards, cardList, opt, bFeiDan) then --火箭
--         return opt
--     elseif self:isTianWangBoom(cards, cardList, opt, bFeiDan) then --天王炸
--         return opt
--     elseif self:isThreeType(cards, cardList, opt) then --三张
--         return opt
--     elseif self:isSingleStraighType(cards, cardList, opt) then --单顺
--         return opt
--     elseif self:isThreeWithSingleType(cards, cardList, opt) then --三带一张
--         return opt
--     elseif self:isThreeWithOneType(cards, cardList, opt) then --三带一对
--         return opt
--     elseif self:isFourWithPairsType(cards, cardList, opt) then --四带二对(对子)
--         return opt
--     elseif self:isFourWithTwoType(cards, cardList, opt) then --四带二张
--         return opt
--     elseif self:isThreeStraighType(cards, cardList, opt) then --三顺
--         return opt
--     elseif self:isThreeWithPairsStraighTypeButterfly(cards, cardList, opt) then --三顺飞机带翅膀--蝴蝶牌型
--         return opt
--     elseif self:isPairsStraighType(cards, cardList, opt) then --双顺
--         return opt
--     end

--     return CardType.CTID_NONE
-- end

-- 是否是单
function GameLogic:isSingleType(cards, splitCard, opt)
    if #cards == 1 then
        if opt then
            opt.power = ucCardPower[cards[1]]
            opt.cardType = CardType.CTID_YI_ZHANG
        end
        return true
    else
        return false
    end
end

-- 是否是对子
function GameLogic:isPairsType(cards, splitCard, opt)
    local isTrue = false
    if #cards == 2 then
        if #splitCard.pairs == 1 then
            isTrue = true
        elseif #splitCard.bj == 2 then
            isTrue = true
        elseif #splitCard.sj == 2 then
            isTrue = true
        end
    end
    if isTrue and opt then
        opt.power = ucCardPower[cards[1]]
        opt.cardType = CardType.CTID_ER_ZHANG

    end
    return isTrue
end

-- 是否是三张
function GameLogic:isThreeType(cards, splitCard, opt)
    if #cards == 3 then
        if #splitCard.three == 1 then
            if opt then
                opt.power = ucCardPower[cards[1]]
                opt.cardType = CardType.CTID_SAN_ZHANG
            end
            return true
        end
    end
    return false
end

-- 是否是三带一张
function GameLogic:isThreeWithSingleType(cards, splitCard, opt)
    if #cards == 4 then
        if (#splitCard.three == 1 and #splitCard.single == 1) or
        (#splitCard.three == 1 and #splitCard.sj == 1) or
        (#splitCard.three == 1 and #splitCard.bj == 1)
        then
            local newCards = {}
            for _, v in ipairs(splitCard.three) do      -- 处理主牌在前面，副牌在后面
                for i = 1, #v do
                    table.insert(newCards, v[i])
                end
                -- table.insert(newCards, unpack(v))
            end
            for _, v in ipairs(splitCard.bj) do
                -- for i = 1, #v do
                    table.insert(newCards, v)
                -- end
                -- table.insert(newCards, v)
            end
            for _, v in ipairs(splitCard.sj) do
                -- for i = 1, #v do
                    table.insert(newCards, v)
                -- end
                -- table.insert(newCards, v)
            end
            for _, v in ipairs(splitCard.single) do
                for i = 1, #v do
                    table.insert(newCards, v[i])
                end
                -- table.insert(newCards, v)
            end
            if opt then
                opt.power = ucCardPower[cards[1]]
                opt.cardType = CardType.CTID_SAN_DAI_YI
                opt.cards = newCards
            end
            return true
        end
    end
end

-- 是否是单顺
function GameLogic:isSingleStraighType(cards, splitCard, opt)
    if #cards < 5 then
        return false
    end

    if #splitCard.single == #cards then
        if self:isContinue(splitCard.single, #splitCard.single) then
            if opt then
                local single = self:clone(splitCard.single[#splitCard.single] or {})
                table.sort(single, self.sortFun)
                opt.power = ucCardPower[single[1]]
                opt.cardType = CardType.CTID_YI_SHUN
            end
            return true
        end
    end
    return false
end

-- 是否是三带一对
function GameLogic:isThreeWithOneType(cards, splitCard, opt)
    if #cards ~= 5 then
        return false
    end
    local pairJokerNum = 0
    if #splitCard.sj == 2 then
        pairJokerNum = pairJokerNum + 1
    end
    if #splitCard.bj == 2 then
        pairJokerNum = pairJokerNum + 1
    end
    if #splitCard.pairs == 1 then
        pairJokerNum = pairJokerNum + 1
    end
    local newCards = {}
    for _, v in ipairs(splitCard.three) do      -- 处理主牌在前面，副牌在后面
        for i = 1, #v do
            table.insert(newCards, v[i])
        end
        -- table.insert(newCards, unpack(v))
    end
    local isSuccess = false
    if #splitCard.three == 1 and pairJokerNum * 2 + #splitCard.three[1] == #cards then
        if #splitCard.pairs == 1 then
            newCards = self:clone(newCards)
            for i = 1, #splitCard.pairs[1] do
                table.insert(newCards, splitCard.pairs[1][i])
            end
            -- table.insert(newCards, unpack(splitCard.pairs[1]))
            isSuccess = true
        else
            if #splitCard.sj == 2 then
                newCards = self:clone(newCards)
                for i = 1, #splitCard.sj do
                    table.insert(newCards, splitCard.sj[i])
                end
                -- table.insert(newCards, unpack(splitCard.sj))
                isSuccess = true
            elseif #splitCard.bj == 2 then
                newCards = self:clone(newCards)
                for i = 1, #splitCard.bj do
                    table.insert(newCards, splitCard.bj[i])
                end
                -- table.insert(newCards, unpack(splitCard.bj))
                isSuccess = true
            end
        end
        if opt then
            opt.power = ucCardPower[splitCard.three[1][1]]
            opt.cardType = CardType.CTID_SAN_DAI_ER
            opt.cards = newCards
        end
    end
    return isSuccess
end

-- 四带两对
function GameLogic:isFourWithPairsType(cards, splitCard, opt)
    if #cards == 8 then
        if (#splitCard.four == 1 and #splitCard.pairs == 2) or
        (#splitCard.four == 2 and not self:isContinue(splitCard.four, 2))
        then
            local newCards = {}
            for _, v in ipairs(splitCard.four) do      -- 处理主牌在前面，副牌在后面
                for i = 1, #v do
                    table.insert(newCards, v[i])
                end
                -- table.insert(newCards, unpack(v))
            end
            for _, v in ipairs(splitCard.pairs) do
                for i = 1, #v do
                    table.insert(newCards, v[i])
                end
                -- table.insert(newCards, unpack(v))
            end
            if opt then
                local four = self:clone(splitCard.four[#splitCard.four] or {})
                table.sort(four, self.sortfun)
                opt.power = ucCardPower[four[1]]
                opt.cardType = CardType.CTID_SI_DAI_ER_DUI
                opt.cards = newCards
            end
            return true
        end
    end
    return false
end

-- 四带两张
function GameLogic:isFourWithTwoType(cards, splitCard, opt)
    if #cards == 6 then
        if (#splitCard.four == 1 and #splitCard.pairs == 1) or
        (#splitCard.four == 1 and #splitCard.single == 2) or
        (#splitCard.four == 1 and #splitCard.bj == 1 and #splitCard.single == 1) or
        (#splitCard.four == 1 and #splitCard.sj == 1 and #splitCard.single == 1) or
        (#splitCard.four == 1 and #splitCard.sj == 1 and #splitCard.bj == 1)
        then
            local newCards = {}
            for _, v in ipairs(splitCard.four) do      -- 处理主牌在前面，副牌在后面
                for i = 1, #v do
                    table.insert(newCards, v[i])
                end
                -- table.insert(newCards, unpack(v))
            end
            for _, v in ipairs(splitCard.pairs) do
                for i = 1, #v do
                    table.insert(newCards, v[i])
                end
                -- table.insert(newCards, unpack(v))
            end
            for _, v in ipairs(splitCard.bj) do
                -- for i = 1, #v do
                    table.insert(newCards, v)
                -- end
                -- table.insert(newCards, v)
            end
            for _, v in ipairs(splitCard.sj) do
                -- for i = 1, #v do
                    table.insert(newCards, v)
                -- end
                -- table.insert(newCards, v)
            end
            for _, v in ipairs(splitCard.single) do
                for i = 1, #v do
                    table.insert(newCards, v[i])
                end
                -- table.insert(newCards, v)
            end
            if opt then
                opt.power = ucCardPower[splitCard.four[1][1]]
                opt.cardType = CardType.CTID_SI_DAI_ER
                opt.cards = newCards
            end
            return true
        end
    end
    return false
end

-- 是否是连对
function GameLogic:isPairsStraighType(cards, splitCard, opt)
    if #cards < 4 then
        return false
    end
    if #splitCard.single == 0 and #splitCard.pairs > 1 and #splitCard.three == 0 and #splitCard.four == 0
    and #splitCard.five == 0 and #splitCard.six == 0 and #splitCard.seven == 0 and #splitCard.eight == 0
    and #splitCard.bj == 0 and #splitCard.sj == 0
    then
        -- 有多个对子且是循环的
        if self:isContinue(splitCard.pairs, 3) then
            if opt then
                local pairs = self:clone(splitCard.pairs[#splitCard.pairs] or {})
                table.sort(pairs, self.sortfun) -- @bug 这个排序算法有问题，正确写法应该是下面一行，JS里这样写就不进行排序了。
                opt.power = ucCardPower[pairs[1]]        
                opt.cardType = CardType.CTID_ER_SHUN
            end
            return true
        end
    end
    return false
end

-- 是否是三顺
function GameLogic:isThreeStraighType(cards, splitCard, opt)
    if #cards < 6 then
        return false
    end
    if #splitCard.single == 0 and #splitCard.pairs == 0 and #splitCard.three > 1 and #splitCard.four == 0
    and #splitCard.five == 0 and #splitCard.six == 0 and #splitCard.seven == 0 and #splitCard.eight == 0
    and #splitCard.bj == 0 and #splitCard.sj == 0
    then
        -- 有多个三张且是循环的
        if self:isContinue(splitCard.three, 2) then
            if opt then
                local three = self:clone(splitCard.three[#splitCard.three] or {})
                table.sort(three, self.sortfun)
                opt.power = ucCardPower[three[1]]
                opt.cardType = CardType.CTID_SAN_SHUN
            end
            return true
        end
    end
    return false
end

-- 是否是飞机带翅膀 外部调用
function GameLogic:isThreeWithPairsStraighType(cards, splitCard, opt, data)
    data = data or {}
    if #cards < 10 then
        return false
    end
    if #splitCard.single == 0 then -- 三张和对 可有可无，4，6，8炸也可以被带出
        -- 三张是否循环
        local threeCard = data.threeCard or {}
        local twoCard = data.twoCard or {}
        local _twoCard = {}
        local pairJokerNum = 0
        if #splitCard.sj == 2 then
            pairJokerNum = pairJokerNum + 1
            table.insert(_twoCard, { splitCard.sj[1], splitCard.sj[2] })
        end
        if #splitCard.bj == 2 then
            pairJokerNum = pairJokerNum + 1
            table.insert(_twoCard, { splitCard.bj[1], splitCard.bj[2] })
        end
        pairJokerNum = pairJokerNum + #splitCard.pairs
        for i = 1, #splitCard.pairs do
            table.insert(_twoCard, splitCard.pairs[i])
        end
        if self:isContinue(splitCard.three, 2) and pairJokerNum == #splitCard.three and pairJokerNum * 2 + #splitCard.three * 3 == #cards then
            for i = 1, #splitCard.three do
                table.insert(threeCard, splitCard.three[i])
            end
            for i = 1, #_twoCard do
                table.insert(twoCard, _twoCard[i])
            end
            if opt then
                local three = self:clone(threeCard[#threeCard] or {})
                table.sort(three, self.sortfun)
                opt.power = ucCardPower[three[1]]
                opt.cardType = CardType.CTID_FEI_JI
            end
            return true
        else
            local continueCount = 0
            local pairCount = 0
            local threeIsStop = false
            local threeCard = data.threeCard or {}
            local twoCard = data.twoCard or {}
            for i = 1, #splitCard.cardList do
                if #splitCard.cardList[i] == 0 then
                    if continueCount ~= 0 then
                        threeIsStop = true --三顺断开循环
                    end
                elseif #splitCard.cardList[i] == 2 then
                    pairCount = pairCount + 1
                    table.insert(twoCard, { splitCard.cardList[i][1], splitCard.cardList[i][2] })
                    if continueCount ~= 0 then
                        threeIsStop = true --三顺断开循环
                    end
                elseif #splitCard.cardList[i] == 3 then
                    if threeIsStop == false then
                        continueCount = continueCount + 1
                        table.insert(threeCard, { splitCard.cardList[i][1], splitCard.cardList[i][2], splitCard.cardList[i][3] })
                    end
                elseif #splitCard.cardList[i] == 4 then
                    pairCount = pairCount + 2
                    table.insert(twoCard, { splitCard.cardList[i][1], splitCard.cardList[i][2] })
                    table.insert(twoCard, { splitCard.cardList[i][3], splitCard.cardList[i][4] })
                    if continueCount ~= 0 then
                        threeIsStop = true --三顺断开循环
                    end
                elseif #splitCard.cardList[i] == 5 then --5-3,2
                    if threeIsStop == false then
                        continueCount = continueCount + 1
                        table.insert(threeCard, { splitCard.cardList[i][1], splitCard.cardList[i][2], splitCard.cardList[i][3] })
                    end
                    pairCount = pairCount + 1
                    table.insert(twoCard, { splitCard.cardList[i][1], splitCard.cardList[i][2] })
                elseif #splitCard.cardList[i] == 6 then --6-2,2,2
                    pairCount = pairCount + 3
                    table.insert(twoCard, { splitCard.cardList[i][1], splitCard.cardList[i][2] })
                    table.insert(twoCard, { splitCard.cardList[i][3], splitCard.cardList[i][4] })
                    table.insert(twoCard, { splitCard.cardList[i][5], splitCard.cardList[i][6] })
                    if continueCount ~= 0 then
                        threeIsStop = true --三顺断开循环
                    end
                elseif #splitCard.cardList[i] == 7 then --7-3,2,2
                    if threeIsStop == false then
                        continueCount = continueCount + 1
                        table.insert(threeCard, { splitCard.cardList[i][1], splitCard.cardList[i][2], splitCard.cardList[i][3] })
                    end
                    pairCount = pairCount + 2
                    table.insert(twoCard, { splitCard.cardList[i][1], splitCard.cardList[i][2] })
                    table.insert(twoCard, { splitCard.cardList[i][3], splitCard.cardList[i][4] })
                elseif #splitCard.cardList[i] == 8 then --8-2,2,2,2
                    pairCount = pairCount + 4
                    table.insert(twoCard, { splitCard.cardList[i][1], splitCard.cardList[i][2] })
                    table.insert(twoCard, { splitCard.cardList[i][3], splitCard.cardList[i][4] })
                    table.insert(twoCard, { splitCard.cardList[i][5], splitCard.cardList[i][6] })
                    table.insert(twoCard, { splitCard.cardList[i][7], splitCard.cardList[i][8] })
                    if continueCount ~= 0 then
                        threeIsStop = true --三顺断开循环
                    end
                end
            end
            if continueCount * 3 + pairCount * 2 == #cards and continueCount == pairCount then
                if opt then
                    local three = self:clone(threeCard[#threeCard] or {})
                    table.sort(three, self.sortfun)
                    opt.power = ucCardPower[three[1]]
                    opt.cardType = CardType.CTID_FEI_JI
                end
                return true
            end
        end
    end
    return false
end

-- 特殊的飞机带翅膀
function GameLogic:isThreeWithPairsStraighTypeButterfly(cards, splitCard, opt, data)
    data = data or {}
    if #cards < 8 then
        return false
    end

    local pairsNum = #splitCard.pairs + #splitCard.four * 2 -- 对子的数量(包含对和四张)
    local singleNum = pairsNum * 2 + #splitCard.single + #splitCard.sj + #splitCard.bj -- 单张的数量(包含单张、王、对和四张)
    local singleNum2 = #splitCard.pairs * 2 + #splitCard.single + #splitCard.sj + #splitCard.bj -- 单张的数量(包含单张、王、对)
    local threeAndFour = {}
    for i = 1, #splitCard.three do
        table.insert(threeAndFour, { splitCard.three[i][1], splitCard.three[i][2], splitCard.three[i][3] })
    end
    for i = 1, #splitCard.four do
        table.insert(threeAndFour, { splitCard.four[i][1], splitCard.four[i][2], splitCard.four[i][3] })
    end
    local singleAndPairsNum = #splitCard.pairs + #splitCard.single + #splitCard.sj + #splitCard.bj -- 单张的数量(包含单张、王、对、三张和四张) 
    local three1 = self:clone(splitCard.three)
    local three2 = self:clone(splitCard.three)
    local firstThree = table.remove(three1, 1) --掐头
    local lastThree = table.remove(three2) --去尾

    -- 没有单张，没有王
    local isSuccess = false
    local threeMain = {}
    local pairsMain = {}
    if self:isContinue(splitCard.three, 2) and (pairsNum == #splitCard.three) and ((pairsNum * 2 + #splitCard.three * 3) == #cards) then
        threeMain = self:clone(splitCard.three)
        pairsMain = self:clone(splitCard.pairs)
        for i = 1, #splitCard.four do
            table.insert(pairsMain,  splitCard.four[i])
        end
        isSuccess = true
        -- 2. 三顺长度 == 单张的长度(包含单张、王、对和四张)
    elseif self:isContinue(splitCard.three, 2) and (singleNum == #splitCard.three) and ((singleNum + #splitCard.three * 3) == #cards) then
        threeMain = self:clone(splitCard.three)
        pairsMain = self:clone(splitCard.single)
        for i = 1, #splitCard.sj do
            table.insert(pairsMain, {splitCard.sj[i]})
        end
        for i = 1, #splitCard.bj do
            table.insert(pairsMain, {splitCard.bj[i]})
        end
        for i = 1, #splitCard.pairs do
            table.insert(pairsMain, splitCard.pairs[i])
        end
        for i = 1, #splitCard.four do
            table.insert(pairsMain, splitCard.four[i])
        end
        isSuccess = true
        -- 3.(三顺长度 == 单张的长度(包含单张、王、对)) 并且 有任意个四张(四张和三张能组成顺子)
    elseif self:isContinue(threeAndFour, 2) and (singleNum2 == #splitCard.three) and ((singleNum2 + #splitCard.four * 4 + #splitCard.three * 3) == #cards) then
        for i = 1, #threeAndFour do
            table.insert(threeMain, threeAndFour[i])
        end
        -- table.insert(threeMain, table.unpack(threeAndFour))
        local fourArr = {}
        for i = 1, #splitCard.four do
            table.insert(fourArr, {splitCard.four[i][4]})
        end
        for i = 1, #splitCard.single do
            table.insert(pairsMain, splitCard.single[i])
        end
        -- table.insert(pairsMain, table.unpack(splitCard.single))
        for i = 1, #splitCard.sj do
            table.insert(pairsMain, {splitCard.sj[i]})
        end
        -- table.insert(pairsMain, table.unpack(splitCard.sj))
        for i = 1, #splitCard.bj do
            table.insert(pairsMain, {splitCard.bj[i]})
        end
        -- table.insert(pairsMain, table.unpack(splitCard.bj))
        for i = 1, #splitCard.pairs do
            table.insert(pairsMain, splitCard.pairs[i])
        end
        for i = 1, #fourArr do
            table.insert(pairsMain, fourArr[i])
        end
        -- table.insert(pairsMain, table.unpack(fourArr))
        isSuccess = true
        --掐头
    elseif self:isContinue(three1, 2) and (#splitCard.three - 4 == singleAndPairsNum) and ((#splitCard.three * 3 + singleAndPairsNum) == #cards) then
        for i = 1, #three1 do
            table.insert(threeMain, three1[i])
        end
        -- table.insert(threeMain, table.unpack(three1))
        for i = 1, #splitCard.single do
            table.insert(pairsMain, splitCard.single[i])
        end
        -- table.insert(pairsMain, table.unpack(splitCard.single))
        for i = 1, #splitCard.sj do
            table.insert(pairsMain, {splitCard.sj[i]})
        end
        -- table.insert(pairsMain, table.unpack(splitCard.sj))
        for i = 1, #splitCard.bj do
            table.insert(pairsMain, {splitCard.bj[i]})
        end
        -- table.insert(pairsMain, table.unpack(splitCard.bj))
        for i = 1, #splitCard.pairs do
            table.insert(pairsMain, splitCard.pairs[i])
        end
        table.insert(pairsMain, firstThree)
        for i = 1, #splitCard.four do
            table.insert(pairsMain, splitCard.four[i])
        end
        -- table.insert(pairsMain, table.unpack(splitCard.four))
        isSuccess = true
        --去尾
    elseif self:isContinue(three2, 2) and (#splitCard.three - 4 == singleAndPairsNum) and ((#splitCard.three * 3 + singleAndPairsNum) == #cards) then
        for i = 1, #three2 do
            table.insert(threeMain, three2[i])
        end
        -- table.insert(threeMain, table.unpack(three2))
        for i = 1, #splitCard.single do
            table.insert(pairsMain, splitCard.single[i])
        end
        -- table.insert(pairsMain, table.unpack(splitCard.single))
        for i = 1, #splitCard.sj do
            table.insert(pairsMain, {splitCard.sj[i]})
        end
        -- table.insert(pairsMain, table.unpack(splitCard.sj))
        for i = 1, #splitCard.bj do
            table.insert(pairsMain, {splitCard.bj[i]})
        end
        -- table.insert(pairsMain, table.unpack(splitCard.bj))
        for i = 1, #splitCard.pairs do
            table.insert(pairsMain, splitCard.pairs[i])
        end
        table.insert(pairsMain, lastThree)
        for i = 1, #splitCard.four do
            table.insert(pairsMain, splitCard.four[i])
        end
        -- table.insert(pairsMain, table.unpack(splitCard.four))
        isSuccess = true
    end
    if isSuccess then
        --三张是否循环
        local threeCard = data.threeCard or {}
        for i = 1, #threeMain do
            table.insert(threeCard, threeMain[i])
        end
        -- table.insert(threeCard, table.unpack(threeMain))
        if opt then
            local three = self:clone(threeCard[#threeCard] or {})
            table.sort(three, self.sortfun)
            opt.power = ucCardPower[three[1]]
            opt.cardType = CardType.CTID_FEI_JI

            -- 处理主牌在前面，副牌在后面
            local newCards = {}
            for i = 1, #threeMain do
                for j = 1, #threeMain[i] do
                    table.insert(newCards, threeMain[i][j])
                end
                -- table.insert(newCards, table.unpack(threeMain[i]))
            end
            for i = 1, #pairsMain do
                for j = 1, #pairsMain[i] do
                    table.insert(newCards, pairsMain[i][j])
                end
                -- table.insert(newCards, pairsMain[i])
            end
            opt.cards = newCards
        end
        return true
    end
    return false
end

-- 是否是连炸
function GameLogic:isBoomStraigh(cards, splitCard, opt, isFeiDan)
    if isFeiDan then
        return false
    end
    if #cards < 8 then
        return false
    end
    if #splitCard.single == 0 and #splitCard.pairs == 0 and #splitCard.three == 0 and #splitCard.four > 0
    and #splitCard.five == 0 and #splitCard.six == 0 and #splitCard.seven == 0 and #splitCard.eight == 0
    and #splitCard.bj == 0 and #splitCard.sj == 0 then
        --四张是否循环
        if self:isContinue(splitCard.four) then
            if opt then
                local four = self:clone(splitCard.four[#splitCard.four] or {})
                table.sort(four, self.sortfun)
                opt.power = ucCardPower[four[1]]
                opt.cardType = CardType.CTID_SI_SHUN
            end
            return true
        end
    end
    return false
end

-- 是否是炸弹
function GameLogic:isBoom(cards, splitCard, opt, isFeiDan)
    if isFeiDan then
        return false
    end
    if #cards < 4 then
        return false
    end
    if #splitCard.single == 0 and #splitCard.pairs == 0 and #splitCard.three == 0 then
        if #splitCard.four == 1 and #splitCard.four[1] == #cards then
            if opt then
                opt.power = ucCardPower[cards[1]]
                opt.cardType = CardType.CTID_SI_ZHANG
            end
            return true
        end
        if #splitCard.five == 1 and #splitCard.five[1] == #cards then
            if opt then
                opt.power = ucCardPower[cards[1]]
                opt.cardType = CardType.CTID_WU_ZHANG
            end
            return true
        end
        if #splitCard.six == 1 and #splitCard.six[1] == #cards then
            if opt then
                opt.power = ucCardPower[cards[1]]
                opt.cardType = CardType.CTID_LIU_ZHANG
            end
            return true
        end
        if #splitCard.seven == 1 and #splitCard.seven[1] == #cards then
            if opt then
                opt.power = ucCardPower[cards[1]]
                opt.cardType = CardType.CTID_QI_ZHANG
            end
            return true
        end
        if #splitCard.eight == 1 and #splitCard.eight[1] == #cards then
            if opt then
                opt.power = ucCardPower[cards[1]]
                opt.cardType = CardType.CTID_BA_ZHANG
            end
            return true
        end
    end
    return false
end

-- 是否火箭
function GameLogic:isHuoJianBoom(cards, splitCard, opt, isFeiDan)
    if #cards == KING_BOOM_NUM and #splitCard.sj + #splitCard.bj == #cards and KING_BOOM_NUM == 2 then -- 火箭
        if opt then
            opt.power = ucCardPower[cards[1]]
            opt.cardType = CardType.CTID_HUO_JIAN
        end
        return true
    end

    return false
end

-- 是否天王炸
function GameLogic:isTianWangBoom(cards, splitCard, opt, isFeiDan)
    if #cards == KING_BOOM_NUM and #splitCard.sj + #splitCard.bj == #cards and KING_BOOM_NUM == 4 then -- 天王炸
        if opt then
            opt.power = ucCardPower[cards[1]]
            opt.cardType = CardType.CTID_TIAN_WANG
        end
        return true
    end

    return false
end

-- 是否循环
function GameLogic:isContinue(cards, len)
    len = len or 2
    local _cards = self:clone(cards)
    if #_cards < len then
        return false
    end
    table.sort(_cards, function(v1, v2) return ucCardPower[v1[1]] < ucCardPower[v2[1]] end)

    local preCardPower = nil
    local isCan = false
    for i = 1, #_cards[1] do
        preCardPower = ucCardPower[_cards[1][i]] -- 上一张牌
        if preCardPower < CardPower.CP_3 and preCardPower > CardPower.CP_A then -- 不在 3~A 之间
            return false
        else
            isCan = true
            break
        end
    end
    if not isCan then
        return false
    end
    if preCardPower == nil then
        return false
    end
    local continueCount = 1 -- 连续数量
    for i = 2, #_cards do
        local cardPower = ucCardPower[_cards[i][1]]
        if cardPower >= CardPower.CP_3 and cardPower <= CardPower.CP_A then -- 在 3~A 之间
            if cardPower == preCardPower + 1 then -- 判断是否连续
                continueCount = continueCount + 1
                preCardPower = cardPower
            else
                return false
            end
        else
            return false
        end
    end

    if continueCount >= len then
        return true
    end
    return false
end


--[[是否连续
@param cards 要判断的牌数组
@param minLen 连续长度 默认为2
@param width 牌的宽度 默认为0，不判断，1(单顺)，2(双顺)。。。
@param startVal 连续起始值 默认从3开始
@param endVal 连续结束值 默认结束是A (即不包含2，如果起始值和结束值相同，则是循环牌)
@return null
--]]
function GameLogic:isContinueEx(cards, minLen, width, startVal, endVal)
    minLen = minLen or 2
    width = width or 0
    startVal = startVal or CardPower.CP_3
    endVal = endVal or CardPower.CP_A
    local _cards = self:clone(cards)
    if #_cards < minLen then
        return false
    end
    table.sort(_cards, function(v1, v2) return ucCardPower[v1[1]] < ucCardPower[v2[1]] end)

    local preCardPower = nil
    local isCan = false
    for i = 1, #_cards[1] do
        preCardPower = ucCardPower[_cards[1][i]] -- 第一张牌
        if preCardPower < startVal and preCardPower > endVal then -- 不在 起始值~结束值 之间
            return false
        else
            isCan = true
            break
        end
    end
    if not isCan then
        return false
    end
    if preCardPower == nil then
        return false
    end
    local continueCount = 1 -- 连续数量
    for i = 2, #_cards do
        if width ~= 0 then
            if #_cards[i] ~= width then
                return false
            end
        end
        local cardPower = ucCardPower[_cards[i][1]]
        if cardPower >= CardPower.CP_3 and cardPower <= CardPower.CP_A then -- 在 3~A 之间
            if cardPower == preCardPower + 1 then -- 判断是否连续
                continueCount = continueCount + 1
                preCardPower = cardPower
            else
                return false
            end
        else
            return false
        end
    end

    if continueCount >= minLen then
        return true
    end
    return false
end

-- 是否是单顺
function GameLogic:isSingleStraight(cards, splitCard, opt)
    if #cards == 0 then
        return false
    end
    local _cards = self:clone(cards)
    return self:isContinueEx(_cards, 5, 1)
end

-- 是否是同花
function GameLogic:isFlush(cards)
    if #cards == 0 then
        return false
    end
    local _cards = self:clone(cards)
    local curCardColor = ucCardColor[_cards[1][1]]
    for i = 2, #_cards do
        local cardColorr = ucCardColor[_cards[i][1]]
        if cardColorr ~= curCardColor then
            return false
        end
    end
    return true
end


-- 是否是同花顺
function GameLogic:isStraightFlush(cards, len)
    if #cards == 0 then
        return false
    end
    len = len or 1
    local _cards = self:clone(cards)
    local curCardColor = ucCardColor[_cards[1][1]]
    for i = 2, #_cards do
        local cardColorr = ucCardColor[_cards[i][1]]
        if cardColorr ~= curCardColor then
            return false
        end
    end
    return self:isContinueEx(_cards, len, 1)
end

-- 是否同红色
function GameLogic:isSameRedColor(cards)
    if #cards == 0 then
        return false
    end
    local _cards = self:clone(cards)
    local curCardColor = ucCardColor[_cards[1][1]]
    for i = 2, #_cards do
        curCardColor = ucCardColor[_cards[i][1]]
        if curCardColor ~= CardColor.CC_DIAMOND and curCardColor ~= CardColor.CC_HEART then
            return false
        end
    end
    return true
end


-- 是否同黑色
function GameLogic:isSameBlackColor(cards)
    if #cards == 0 then
        return false
    end
    local _cards = self:clone(cards)
    local curCardColor = ucCardColor[_cards[1][1]]
    for i = 2, #_cards do
        curCardColor = ucCardColor[_cards[i][1]]
        if curCardColor ~= CardColor.CC_CLUB and curCardColor ~= CardColor.CC_SPADE then
            return false
        end
    end
    return true
end

--[[b 数组删除 a数组内容  返回 剩余 b数组 外部调用
@param arraryA 要删掉的牌
@param arraryB 要操作的牌组
@return B里面删除A之后 剩余的牌组
--]]
function GameLogic:delArraryInOtherArrary(arraryA, arraryB)
    local tempCards = {}
    local tempHandCards = self:clone(arraryB)
    local tempOutCards = self:clone(arraryA)
    for i = 1, #tempHandCards do
        if #tempOutCards > 0 then
            for j = 1, #tempOutCards do
                if tempOutCards[j] == tempHandCards[i] then
                    table.remove(tempOutCards, j)
                    break
                else
                    if j == #tempOutCards then
                        table.insert(tempCards, tempHandCards[i])
                    end
                end
            end
        else
            table.insert(tempCards, tempHandCards[i])
        end
    end
    return tempCards
end

function GameLogic:sortFun(v1, v2)
    if #v2 and #v1 then
        return v2[1] < v1[1]
    else
        return false
    end
end

--------------以下是自测函数--------------
--测试calculateCardType函数，输出的opt和原包完全一致。自测时返回整个opt而不仅仅是opt.cardType
function GameLogic:test1()
    local handCards = {
        { 1 }, --1
        { 2, 2 + 13 }, --2
        { 3, 3 + 13, 3 + 13 + 13 }, --3
        { 4, 4 + 13, 4 + 13 + 13, 4 + 13 + 13 + 13 }, --4
        { 5, 6, 7, 8, 9 }, --9
        { 8 + 13, 6, 7, 8, 6 + 13, 7 + 13 }, --10
        { 8 + 13, 6, 7, 8, 6 + 13, 7 + 13, 6 + 13 + 13, 7 + 13 + 13, 8 + 13 + 13 }, --11
        { 8 + 13, 6, 7, 8, 6 + 13, 7 + 13, 6 + 13 + 13, 7 + 13 + 13, 8 + 13 + 13, 6 + 13 + 13 + 13, 7 + 13 + 13 + 13, 8 + 13 + 13 + 13 }, --12
        { 53, 54 }, --17
        { 3, 3 + 13, 3 + 13 + 13, 4, 4 + 13, 4 + 13 + 13, 8, 9, 8 + 13, 9 + 13 }, --18
        { 3, 3 + 13, 3 + 13 + 13, 8 }, --19
        { 4, 4 + 13, 4 + 13 + 13, 4 + 13 + 13 + 13, 6, 7 }, --20
        { 4, 4 + 13, 4 + 13 + 13, 6, 6 + 13 }, --21
        { 4, 4 + 13, 4 + 13 + 13, 4 + 13 + 13 + 13, 6, 7, 6 + 13, 7 + 13 }, --22
        { 3, 3 + 13, 3 + 13 + 13, 9, 10 }, --0
        { 3, 3 + 13, 3 + 13 + 13, 4, 4 + 13, 4 + 13 + 13, 8, 9, 10, 11 }, --0
    }

    print("开始测试代码计算")
    for i, cards in ipairs(handCards) do
        local opt = { cards = {}, power = 0, cardType = 0 }
        local cardType = self:calculateCardType(cards, false, opt)
        -- print('cardType:', cardType)
        dump(cardType, i)
    end
end




return GameLogic o�  