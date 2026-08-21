
local TipLogic = class("TipLogic")

local SplitCard = require("newgold.GoldGames.GoldGameLandlord.GoldGameHPLandlord.Modules.GameMain.TipHelp.SplitCard")
local GameLogic = require("newgold.GoldGames.GoldGameLandlord.GoldGameHPLandlord.Modules.GameMain.TipHelp.GameLogic")
local MiscLogic = require("newgold.GoldGames.GoldGameLandlord.GoldGameHPLandlord.Modules.GameMain.TipHelp.MiscLogic")
local ucCardPower = require("newgold.GoldGames.GoldGameLandlord.GoldGameHPLandlord.Modules.GameMain.TipHelp.Define").ucCardPower
local CardType = require("newgold.GoldGames.GoldGameLandlord.GoldGameHPLandlord.Modules.GameMain.TipHelp.Define").CardType
local KING_BOOM_NUM = require("newgold.GoldGames.GoldGameLandlord.GoldGameHPLandlord.Modules.GameMain.TipHelp.Define").KING_BOOM_NUM
local CardPower = require("newgold.GoldGames.GoldGameLandlord.GoldGameHPLandlord.Modules.GameMain.TipHelp.Define").CardPower
-- local ucCardColor = require("newgold.GoldGames.GoldGameLandlord.GoldGameHPLandlord.Modules.GameMain.TipHelp.Define").ucCardColor
-- local CardColor = require("newgold.GoldGames.GoldGameLandlord.GoldGameHPLandlord.Modules.GameMain.TipHelp.Define").CardColor
-- local ucCardValue = require("newgold.GoldGames.GoldGameLandlord.GoldGameHPLandlord.Modules.GameMain.TipHelp.Define").ucCardValue



function TipLogic:ctor()
    self.cardData = { wildCards = {}, isFeiDan = false }
    self.gameLogic = GameLogic.new()
end

-- 初始化数据
function TipLogic:setData(self, data)
    self.cardData.wildCards = data.wildCards
    self.cardData.isFeiDan = data.isFeiDan
end

-- 首出时手牌提示(从小到大，不拆牌型，普通牌型提示(不包含三带一和飞机带翅膀)，废弹时拆炸弹)
function TipLogic:getSelfTipCard(handCards, isFeiDan)
    local tipArr = {} -- 循环提示列表
    local powerArr = {} -- 权重
    local opt = { cards = {}, power = 0, cardType = 0 }
    self.gameLogic:calculateCardType(handCards, isFeiDan, opt)
    if opt.cardType ~= 0 then -- 是最后一手牌
        table.insert(tipArr, handCards)
        table.insert(powerArr, opt)
    else -- 不是最后一手牌
        self.gameLogic:clearSplitCard()
        local splitCard = MiscLogic.setSplitCard(handCards)
        -- 单张
        for i = 1, #splitCard.single do
            local opt = { cards = {}, power = 0, cardType = 0 }
            self.gameLogic:calculateCardType(splitCard.single[i], isFeiDan, opt)
            table.insert(tipArr, splitCard.single[i])
            table.insert(powerArr, opt)
        end
        -- 单小王
        if #splitCard.sj == 1 then
            local opt = { cards = {}, power = 0, cardType = 0 }
            self.gameLogic:calculateCardType(splitCard.sj, isFeiDan, opt)
            table.insert(tipArr, splitCard.sj)
            table.insert(powerArr, opt)
        end
        -- 单大王
        if #splitCard.bj == 1 then
            local opt = { cards = {}, power = 0, cardType = 0 }
            self.gameLogic:calculateCardType(splitCard.bj, isFeiDan, opt)
            table.insert(tipArr, splitCard.bj)
            table.insert(powerArr, opt)
        end
        if isFeiDan then -- 废弹-拆炸弹
            local cardArr = self:getCardFromBooms(CardType.CTID_YI_ZHANG, splitCard)
            for i = 1, #cardArr do
                local opt = { cards = {}, power = 0, cardType = 0 }
                self.gameLogic:calculateCardType(cardArr[i], isFeiDan, opt)
                table.insert(tipArr, cardArr[i])
                table.insert(powerArr, opt)
            end
        end
        -- 对子
        for i = 1, #splitCard.pairs do
            local opt = { cards = {}, power = 0, cardType = 0 }
            self.gameLogic:calculateCardType(splitCard.pairs[i], isFeiDan, opt)
            table.insert(tipArr, splitCard.pairs[i])
            table.insert(powerArr, opt)
        end
        if #splitCard.sj + #splitCard.bj ~= KING_BOOM_NUM then
            -- 对小王
            if #splitCard.sj == 2 then
                local opt = { cards = {}, power = 0, cardType = 0 }
                self.gameLogic:calculateCardType(splitCard.sj, isFeiDan, opt)
                table.insert(tipArr, splitCard.sj)
                table.insert(powerArr, opt)
            end
            -- 对大王
            if #splitCard.bj == 2 then
                local opt = { cards = {}, power = 0, cardType = 0 }
                self.gameLogic:calculateCardType(splitCard.bj, isFeiDan, opt)
                table.insert(tipArr, splitCard.bj)
                table.insert(powerArr, opt)
            end
        end
        if isFeiDan then -- 废弹-拆炸弹
            local cardArr = self:getCardFromBooms(CardType.CTID_ER_ZHANG, splitCard)
            for i = 1, #cardArr do
                local opt = { cards = {}, power = 0, cardType = 0 }
                self.gameLogic:calculateCardType(cardArr[i], isFeiDan, opt)
                table.insert(tipArr, cardArr[i])
                table.insert(powerArr, opt)
            end
        end
        -- 三张
        for i = 1, #splitCard.three do
            local opt = { cards = {}, power = 0, cardType = 0 }
            self.gameLogic:calculateCardType(splitCard.three[i], isFeiDan, opt)
            table.insert(tipArr, splitCard.three[i])
            table.insert(powerArr, opt)
        end
        if isFeiDan then -- 废弹-拆炸弹
            local cardArr = self:getCardFromBooms(CardType.CTID_SAN_ZHANG, splitCard)
            for i = 1, #cardArr do
                local opt = { cards = {}, power = 0, cardType = 0 }
                self.gameLogic:calculateCardType(cardArr[i], isFeiDan, opt)
                table.insert(tipArr, cardArr[i])
                table.insert(powerArr, opt)
            end
        end
        if not isFeiDan then -- 不是废弹
            local cardArr = self:getCardFromBooms(CardType.CTID_NONE, splitCard)
            for i = 1, #cardArr do
                local opt = { cards = {}, power = 0, cardType = 0 }
                self.gameLogic:calculateCardType(cardArr[i], isFeiDan, opt)
                table.insert(tipArr, cardArr[i])
                table.insert(powerArr, opt)
            end
        end

    end
    return { tipArr = tipArr, powerArr = powerArr }
end

-- 有牌的类型的提示(不拆炸弹) isEqual是否支持相同牌值返回[3,4,5,6,7]和[3,4,5,6,7]返回
function TipLogic:getTipCard(handCards, cards, cardType, isFeiDan, isEqual)
    self.gameLogic:clearSplitCard()
    local tipArr = {} -- 循环提示列表
    local powerArr = {} -- 权重
    local opt = { cards = {}, power = 0, cardType = 0 }
    cardType = cardType or self.gameLogic:calculateCardType(cards, false, opt)

    handCards = MiscLogic.sortMinCardsByValue(handCards)
    cards = MiscLogic.sortMinCardsByValue(cards)
    local splitCard = MiscLogic.setSplitCard(handCards)

    if cardType == CardType.CTID_YI_ZHANG then -- 单张
        local cardArr = self:getSingleType(cards, splitCard, isFeiDan, false)
        for i = 1, #cardArr do
            local opt = { cards = {}, power = 0, cardType = 0 }
            self.gameLogic:calculateCardType(cardArr[i], isFeiDan, opt)
            table.insert(tipArr, cardArr[i])
            table.insert(powerArr, opt)
        end
    elseif cardType == CardType.CTID_ER_ZHANG then -- 对子
        local cardArr = self:getPairsType(cards, splitCard, isFeiDan, false)
        for i = 1, #cardArr do
            local opt = { cards = {}, power = 0, cardType = 0 }
            self.gameLogic:calculateCardType(cardArr[i], isFeiDan, opt)
            table.insert(tipArr, cardArr[i])
            table.insert(powerArr, opt)
        end
    elseif cardType == CardType.CTID_SAN_ZHANG then -- 三张
        local cardArr = self:getThreeType(cards, splitCard, isFeiDan, false)
        for i = 1, #cardArr do
            local opt = { cards = {}, power = 0, cardType = 0 }
            self.gameLogic:calculateCardType(cardArr[i], isFeiDan, opt)
            table.insert(tipArr, cardArr[i])
            table.insert(powerArr, opt)
        end
    elseif cardType == CardType.CTID_YI_SHUN then -- 单顺
        local cardArr = self:getSingleStraighType(cards, splitCard, isFeiDan, false, true)
        for i = 1, #cardArr do
            local opt = { cards = {}, power = 0, cardType = 0 }
            self.gameLogic:calculateCardType(cardArr[i], isFeiDan, opt)
            table.insert(tipArr, cardArr[i])
            table.insert(powerArr, opt)
        end
    elseif cardType == CardType.CTID_ER_SHUN then -- 双顺
        local cardArr = self:getPairsStraighType(cards, splitCard, isFeiDan, false, true)
        for i = 1, #cardArr do
            local opt = { cards = {}, power = 0, cardType = 0 }
            self.gameLogic:calculateCardType(cardArr[i], isFeiDan, opt)
            table.insert(tipArr, cardArr[i])
            table.insert(powerArr, opt)
        end
    elseif cardType == CardType.CTID_SAN_SHUN then -- 三顺
        local cardArr = self:getThreeStraighType(cards, splitCard, isFeiDan, false, true)
        for i = 1, #cardArr do
            local opt = { cards = {}, power = 0, cardType = 0 }
            self.gameLogic:calculateCardType(cardArr[i], isFeiDan, opt)
            table.insert(tipArr, cardArr[i])
            table.insert(powerArr, opt)
        end
    elseif cardType == CardType.CTID_FEI_JI then-- 飞机带翅膀--蝴蝶牌型
        local cardArr = self:getThreeWithPairsStraighTypeButterfly(handCards, cards, splitCard, isFeiDan, false, true)
        for i = 1, #cardArr do
            local opt = { cards = {}, power = 0, cardType = 0 }
            self.gameLogic:calculateCardType(cardArr[i], isFeiDan, opt)
            table.insert(tipArr, cardArr[i])
            table.insert(powerArr, opt)
        end
    elseif cardType == CardType.CTID_SAN_DAI_YI then-- 三带一张
        local cardArr = self:getThreeWithSingleType(cards, splitCard, isFeiDan, false, true)
        for i = 1, #cardArr do
            local opt = { cards = {}, power = 0, cardType = 0 }
            self.gameLogic:calculateCardType(cardArr[i], isFeiDan, opt)
            table.insert(tipArr, cardArr[i])
            table.insert(powerArr, opt)
        end
    elseif cardType == CardType.CTID_SAN_DAI_ER then-- 三带二（一对）
        local cardArr = self:getThreeWithPairsType(cards, splitCard, isFeiDan, false, true)
        for i = 1, #cardArr do
            local opt = { cards = {}, power = 0, cardType = 0 }
            self.gameLogic:calculateCardType(cardArr[i], isFeiDan, opt)
            table.insert(tipArr, cardArr[i])
            table.insert(powerArr, opt)
        end
    elseif cardType == CardType.CTID_SI_DAI_ER then-- 四带2张(一对或者2个单张)
        local cardArr = self:getFourWithTwoType(cards, splitCard, isFeiDan, false, true)
        for i = 1, #cardArr do
            local opt = { cards = {}, power = 0, cardType = 0 }
            self.gameLogic:calculateCardType(cardArr[i], isFeiDan, opt)
            table.insert(tipArr, cardArr[i])
            table.insert(powerArr, opt)
        end
    elseif cardType == CardType.CTID_SI_DAI_ER_DUI then-- 四带二对（2个对）
        local cardArr = self:getFourWithTwoPairsType(cards, splitCard, isFeiDan, false, true)
        for i = 1, #cardArr do
            local opt = { cards = {}, power = 0, cardType = 0 }
            self.gameLogic:calculateCardType(cardArr[i], isFeiDan, opt)
            table.insert(tipArr, cardArr[i])
            table.insert(powerArr, opt)
        end
    elseif (cardType >= CardType.CTID_SI_ZHANG and cardType <= CardType.CTID_BA_ZHANG) or cardType == CardType.CTID_TIAN_WANG or cardType == CardType.CTID_HUO_JIAN then
        if not isFeiDan then
            local cardArr = self:getBoomType(cards, splitCard, cardType, false)
            for i = 1, #cardArr do
                local opt = { cards = {}, power = 0, cardType = 0 }
                self.gameLogic:calculateCardType(cardArr[i], isFeiDan, opt)
                table.insert(tipArr, cardArr[i])
                table.insert(powerArr, opt)
            end
        end
    end
    -- elseif not isFeiDan and cardType == CardType.CTID_SI_SHUN then -- 连炸
    -- end
    if not isFeiDan then
        local cardArr = self:getBoomStraight(cards, splitCard, cardType, false)
        for i = 1, #cardArr do
            local opt = { cards = {}, power = 0, cardType = 0 }
            self.gameLogic:calculateCardType(cardArr[i], isFeiDan, opt)
            table.insert(tipArr, cardArr[i])
            table.insert(powerArr, opt)
        end
    end

    return { tipArr = tipArr, powerArr = powerArr }
end

-- 单张
function TipLogic:getSingleType(cards, splitCard, isFeiDan, isEqual)
    local tipArr = {} -- 循环提示列表
    -- 单张中提取单张
    for i = 1, #splitCard.single do
        if MiscLogic.compCardsByValueBool(cards[1], splitCard.single[i][1]) or (isEqual == true and MiscLogic.isEqualByCardsValue(cards[1], splitCard.single[i][1])) then
            table.insert(tipArr, splitCard.single[i])
        end
    end
    -- 不是天王炸 王中提取单张
    if #splitCard.sj + #splitCard.bj ~= KING_BOOM_NUM then
        if #splitCard.sj == 1 then
            if MiscLogic.compCardsByValueBool(cards[1], splitCard.sj[1]) or (isEqual == true and MiscLogic.isEqualByCardsValue(cards[1], splitCard.sj[1])) then
                table.insert(tipArr, { splitCard.sj[1] })
            end
        end
        if #splitCard.bj == 1 then
            if MiscLogic.compCardsByValueBool(cards[1], splitCard.bj[1]) or (isEqual == true and MiscLogic.isEqualByCardsValue(cards[1], splitCard.bj[1])) then
                table.insert(tipArr, { splitCard.bj[1] })
            end
        end
    end
    -- 提取炸弹
    if not isFeiDan then
        local cardArr = self:getBoomType(cards, splitCard, CardType.CTID_YI_ZHANG)
        for i = 1, #cardArr do
            table.insert(tipArr, cardArr[i])
        end
    end
    -- 按数值大小取单张
    for i = 1, #splitCard.cardList do
        if i == CardPower.CP_SJ or i == CardPower.CP_BJ then
            if #splitCard.sj + #splitCard.bj ~= KING_BOOM_NUM then -- 天王炸
                if #splitCard.cardList[i] == 2 then
                    if MiscLogic.compCardsByValueBool(cards[1], splitCard.cardList[i][1]) or (isEqual == true and MiscLogic.isEqualByCardsValue(cards[1], splitCard.cardList[i][1])) then
                        table.insert(tipArr, { splitCard.cardList[i][1] })
                    end
                end
            else
                if MiscLogic.compCardsByValueBool(cards[1], splitCard.cardList[i][1]) or (isEqual == true and MiscLogic.isEqualByCardsValue(cards[1], splitCard.cardList[i][1])) then
                    table.insert(tipArr, { splitCard.cardList[i][1] })
                end
            end
        else
            if #splitCard.cardList[i] > 1 and #splitCard.cardList[i] <= 8 then
                if MiscLogic.compCardsByValueBool(cards[1], splitCard.cardList[i][1]) or (isEqual == true and MiscLogic.isEqualByCardsValue(cards[1], splitCard.cardList[i][1])) then
                    table.insert(tipArr, { splitCard.cardList[i][1] })
                end
            end
        end
    end
    return tipArr
end

--对子
function TipLogic:getPairsType(cards, splitCard, isFeiDan, isEqual)
    local tipArr = {} --循环提示列表
    --对子中提取对子
    for i = 1, #splitCard.pairs do
        if MiscLogic.compCardsByValueBool(cards[1], splitCard.pairs[i][1]) or (isEqual == true and MiscLogic.isEqualByCardsValue(cards[1], splitCard.pairs[i][1])) then
            table.insert(tipArr, splitCard.pairs[i])
        end
    end
    --不是天王炸，王中提取对子
    if #splitCard.sj + #splitCard.bj ~= KING_BOOM_NUM then
        if #splitCard.sj == 2 then
            if MiscLogic.compCardsByValueBool(cards[1], splitCard.sj[1]) or (isEqual == true and MiscLogic.isEqualByCardsValue(cards[1], splitCard.sj[1])) then
                table.insert(tipArr, splitCard.sj)
            end
        end
        if #splitCard.bj == 2 then
            if MiscLogic.compCardsByValueBool(cards[1], splitCard.bj[1]) or (isEqual == true and MiscLogic.isEqualByCardsValue(cards[1], splitCard.bj[1])) then
                table.insert(tipArr, splitCard.bj)
            end
        end
    end
    --提取炸弹
    if not isFeiDan then
        local cardArr = self:getBoomType(cards, splitCard, CardType.CTID_ER_ZHANG)
        for i = 1, #cardArr do
            table.insert(tipArr, cardArr[i])
        end
    end
    --炸弹中提取对子，按数值大小取单张
    for i = 1, #splitCard.cardList do
        if i == CardPower.CP_SJ or i == CardPower.CP_BJ then
            if #splitCard.sj + #splitCard.bj ~= KING_BOOM_NUM then --天王炸

            else
                if MiscLogic.compCardsByValueBool(cards[1], splitCard.cardList[i][1]) or (isEqual == true and MiscLogic.isEqualByCardsValue(cards[1], splitCard.cardList[i][2])) then
                    table.insert(tipArr, { splitCard.cardList[i][1], splitCard.cardList[i][2]  })--@-1处理
                end
            end
        else
            if #splitCard.cardList[i] >= 3 then
                if MiscLogic.compCardsByValueBool(cards[1], splitCard.cardList[i][1]) or (isEqual == true and MiscLogic.isEqualByCardsValue(cards[1], splitCard.cardList[i][2])) then
                    table.insert(tipArr, { splitCard.cardList[i][1], splitCard.cardList[i][2] })
                end
            end
        end
    end
    return tipArr
end

--三张(飞机)
function TipLogic:getThreeType(cards, splitCard, isFeiDan, isEqual)
    local tipArr = {} --循环提示列表
    --三张中提取三张
    for i = 1, #splitCard.three do
        if MiscLogic.compCardsByValueBool(cards[2], splitCard.three[i][1]) or (isEqual == true and MiscLogic.isEqualByCardsValue(cards[2], splitCard.three[i][1])) then
            table.insert(tipArr, splitCard.three[i])
        end
    end
    --提取炸弹
    if not isFeiDan then
        local cardArr = self:getBoomType(cards, splitCard, CardType.CTID_SAN_ZHANG)
        for i = 1, #cardArr do
            table.insert(tipArr, cardArr[i])
        end
    end
    --炸弹中提取三张，按数值大小取单张
    for i = 1, #splitCard.cardList do
        if i == CardPower.CP_SJ or i == CardPower.CP_BJ then

        else
            if #splitCard.cardList[i] >= 4 then
                if MiscLogic.compCardsByValueBool(cards[2], splitCard.cardList[i][1]) or (isEqual == true and MiscLogic.isEqualByCardsValue(cards[2], splitCard.cardList[i][1])) then
                    table.insert(tipArr, { splitCard.cardList[i][1], splitCard.cardList[i][2], splitCard.cardList[i][3] })
                end
            end
        end
    end
    return tipArr
end

-- 三带一
function TipLogic:_getThreeWithSingleType(cards, splitCard, isFeiDan, isEqual, isUnpackBoom)
    local tipArr = {} -- 循环提示列表

    local _splitCard = SplitCard:new()
    local cardList = MiscLogic.setSplitCard(cards, _splitCard)
    local threeCards = cardList.three[1] or {}
    local threeTipArr = {}
    local fourTipArr = {}
    local danTipArr = {} -- 单张提示

    -- 三张中提取三张
    for i = 1, #splitCard.three do
        if MiscLogic.compCardsByValueBool(threeCards[1], splitCard.three[i][1]) or (isEqual and MiscLogic.isEqualByCardsValue(threeCards[1], splitCard.three[i][1])) then
            table.insert(threeTipArr, splitCard.three[i])
        end
    end

    if isUnpackBoom then
        -- 四张中提取三张
        for i = 1, #splitCard.four do
            if MiscLogic.compCardsByValueBool(threeCards[1], splitCard.four[i][1]) or (isEqual and MiscLogic.isEqualByCardsValue(threeCards[1], splitCard.four[i][1])) then
                table.insert(fourTipArr, { splitCard.four[i][1], splitCard.four[i][2], splitCard.four[i][3] })
            end
        end
    end

    -- 带牌只取一个即可
    if #threeTipArr > 0 or #fourTipArr > 0 then
        -- 单张中提取单张
        if #danTipArr == 0 and #splitCard.single > 0 then
            table.insert(danTipArr, splitCard.single[1])
        end

        -- 没有单张，单王中提取单张
        if #danTipArr == 0 and (#splitCard.bj + #splitCard.sj) == 1 then
            local _sj = self:clone(splitCard.sj)
            for i = 1, #splitCard.bj do
                table.insert(_sj, splitCard.bj[i])
            end
            table.insert(danTipArr, _sj)
        end

        -- 没有单张，对子中取单张
        if #danTipArr == 0 and #splitCard.pairs > 0 then
            table.insert(danTipArr, { splitCard.pairs[1][1] })
        end

        -- 没有单张，三张中取单张
        if #danTipArr == 0 then
            if #threeTipArr == 0 and #fourTipArr > 0 then
                -- 三张中取单张
                if #splitCard.three > 0 then
                    table.insert(danTipArr, { splitCard.three[1][1] })
                end
            elseif #threeTipArr > 0 or #fourTipArr > 0 then
                -- let threeTipArrClone = threeTipArr.concat(fourTipArr)
                local threeTipArrClone = self:clone(threeTipArr)
                if #fourTipArr > 0 then
                    for index = 1, #fourTipArr do
                        table.insert(threeTipArrClone, fourTipArr[index])
                    end  
                end
                -- 三张中取单张（三张不能和带牌相同）
                for i = 1, #threeTipArrClone do
                    for j = 1, #threeTipArr do
                        if threeTipArr[j][1] ~= threeTipArrClone[i][1] then
                            -- table.insert(tipArr, { threeTipArr[j][1], threeTipArr[j][2], threeTipArr[j][3], threeTipArrClone[i][1] })
                            local _tmpArr = {}
                            for index = 1, #threeTipArr[j] do
                                table.insert(_tmpArr, threeTipArr[j][index])
                            end
                            table.insert(_tmpArr, threeTipArrClone[i][1])
                            table.insert(tipArr, _tmpArr)
                        end
                    end
                end
            end
        end
    end

    if #danTipArr > 0 then
        if #threeTipArr > 0 then
            for i = 1, #threeTipArr do
                -- table.insert(tipArr, { threeTipArr[i][1], threeTipArr[i][2], threeTipArr[i][3], danTipArr[1][1] })
                local _tmpArr = {}
                for index = 1, #threeTipArr[i] do
                    table.insert(_tmpArr, threeTipArr[i][index])
                end
                for index = 1, #danTipArr[1] do
                    table.insert(_tmpArr, danTipArr[1][index])
                end
                table.insert(tipArr, _tmpArr)
            end
        end

        if #fourTipArr > 0 then
            for i = 1, #fourTipArr do
                -- table.insert(tipArr, { fourTipArr[i][1], fourTipArr[i][2], fourTipArr[i][3], danTipArr[1][1] })
                local _tmpArr = {}
                for index = 1, #fourTipArr[i] do
                    table.insert(_tmpArr, fourTipArr[i][index])
                end
                for index = 1, #danTipArr[1] do
                    table.insert(_tmpArr, danTipArr[1][index])
                end
                table.insert(tipArr, _tmpArr)
            end
        end
    end

    return tipArr
end

--三带一
function TipLogic:getThreeWithSingleType(cards, splitCard, isFeiDan, isEqual, isUnpackBoom)
    local tmpArr = {} --循环提示列表
    --提取炸弹
    if not isFeiDan then
        --先查找不拆炸弹的顺子
        tmpArr = self:_getThreeWithSingleType(cards, splitCard, isFeiDan, isEqual, false)

        local cloneTmpArr = self:clone(tmpArr)

        --普通炸弹
        local cardArr = self:getBoomType(cards, splitCard, CardType.CTID_SAN_DAI_ER)
        for i = 1, #cardArr do
            table.insert(tmpArr, cardArr[i])
        end

        local tmpArrBomb = {}
        tmpArrBomb = self:_getThreeWithSingleType(cards, splitCard, isFeiDan, isEqual, true)

        for j = 1, #tmpArrBomb do
            if not self:checkSame(cloneTmpArr, tmpArrBomb[j]) then
                table.insert(tmpArr, tmpArrBomb[j])
            end
        end
    else
        tmpArr = self:_getThreeWithSingleType(cards, splitCard, isFeiDan, isEqual, isUnpackBoom)
    end

    return tmpArr
end

--三带二(飞机带翅膀)
function TipLogic:_getThreeWithPairsType(cards, splitCard, isFeiDan, isEqual, isUnpackBoom)
    local tipArr = {} -- 循环提示列表
    local _splitCard = SplitCard:new()
    local cardList = MiscLogic.setSplitCard(cards, _splitCard)
    local threeCards = cardList.three[1] or {}

    -- 三张中提取三张(三张中取对子)
    for i = 1, #splitCard.cardList do
        if #splitCard.cardList[i] == 3 then
            if MiscLogic.compCardsByValueBool(threeCards[1], splitCard.cardList[i][1]) or (isEqual and MiscLogic.isEqualByCardsValue(threeCards[1], splitCard.cardList[i][1])) then
                local isHas = false
                for n = 1, #splitCard.cardList do
                    local flag = true
                    if (#splitCard.sj + #splitCard.bj) == KING_BOOM_NUM then -- 是天王炸
                        if n == CardPower.CP_SJ or n == CardPower.CP_BJ then
                            flag = false
                        end
                    end
                    if flag then
                        if #splitCard.cardList[n] == 2 then
                            isHas = true
                            -- table.insert(tipArr, { splitCard.cardList[i][1], splitCard.cardList[i][2], splitCard.cardList[i][3], splitCard.cardList[n][1], splitCard.cardList[n][2] })
                            local _tmpArr = {}
                            for index = 1, #splitCard.cardList[i] do
                                table.insert(_tmpArr, splitCard.cardList[i][index])
                            end
                            for index = 1, #splitCard.cardList[n] do
                                table.insert(_tmpArr, splitCard.cardList[n][index])
                            end
                            table.insert(tipArr, _tmpArr)
                            break
                        end
                    end
                end
                if not isHas and isUnpackBoom then
                    for n = 1, #splitCard.cardList do
                        if (#splitCard.sj + #splitCard.bj) == KING_BOOM_NUM and (#splitCard.sj + #splitCard.bj) == 4 then -- 是天王炸
                            if n == CardPower.CP_SJ or n == CardPower.CP_BJ then
                                isHas = true
                                -- table.insert(tipArr, { splitCard.cardList[i][1], splitCard.cardList[i][2], splitCard.cardList[i][3], splitCard.cardList[n][1], splitCard.cardList[n][2] })
                                local _tmpArr = {}
                                for index = 1, #splitCard.cardList[i] do
                                    table.insert(_tmpArr, splitCard.cardList[i][index])
                                end
                                for index = 1, #splitCard.cardList[n] do
                                    table.insert(_tmpArr, splitCard.cardList[n][index])
                                end
                                table.insert(tipArr, _tmpArr)
                                break
                            end
                        else
                            if #splitCard.cardList[n] > 2 and n ~= i then
                                isHas = true
                                -- table.insert(tipArr, { splitCard.cardList[i][1], splitCard.cardList[i][2], splitCard.cardList[i][3], splitCard.cardList[n][1], splitCard.cardList[n][2] })
                                local _tmpArr = {}
                                for index = 1, #splitCard.cardList[i] do
                                    table.insert(_tmpArr, splitCard.cardList[i][index])
                                end                        
                                table.insert(_tmpArr, splitCard.cardList[n][1])
                                table.insert(_tmpArr, splitCard.cardList[n][2])
                                table.insert(tipArr, _tmpArr)
                                break
                            end
                        end
                    end
                end
            end
        end
    end
    if isUnpackBoom then
        for i = 1, #splitCard.cardList do
            if #splitCard.cardList[i] > 3 then
                if MiscLogic.compCardsByValueBool(threeCards[1], splitCard.cardList[i][1]) or (isEqual and MiscLogic.isEqualByCardsValue(threeCards[1], splitCard.cardList[i][1])) then
                    local isHas = false
                    for n = 1, #splitCard.cardList do
                        local flag = true
                        if (#splitCard.sj + #splitCard.bj) == KING_BOOM_NUM then -- 是天王炸
                            if n == CardPower.CP_SJ or n == CardPower.CP_BJ then
                                flag = false
                            end
                        end
                        if flag then
                            if #splitCard.cardList[n] == 2 then
                                isHas = true
                                -- table.insert(tipArr, { splitCard.cardList[i][1], splitCard.cardList[i][2], splitCard.cardList[i][3], splitCard.cardList[n][1], splitCard.cardList[n][2] })
                                local _tmpArr = {}
                                table.insert(_tmpArr, splitCard.cardList[i][1])
                                table.insert(_tmpArr, splitCard.cardList[i][2])
                                table.insert(_tmpArr, splitCard.cardList[i][3])
                                for index = 1, #splitCard.cardList[n] do
                                    table.insert(_tmpArr, splitCard.cardList[n][index])
                                end                        
                                table.insert(tipArr, _tmpArr)
                                break
                            end
                        end
                    end
                    if not isHas then
                        for n = 1, #splitCard.cardList do
                            if (#splitCard.sj + #splitCard.bj) == KING_BOOM_NUM and (#splitCard.sj + #splitCard.bj) == 4 then -- 是天王炸
                                if n == CardPower.CP_SJ or n == CardPower.CP_BJ then
                                    isHas = true
                                    -- table.insert(tipArr, { splitCard.cardList[i][1], splitCard.cardList[i][2], splitCard.cardList[i][3], splitCard.cardList[n][1], splitCard.cardList[n][2] })
                                    local _tmpArr = {}
                                    table.insert(_tmpArr, splitCard.cardList[i][1])
                                    table.insert(_tmpArr, splitCard.cardList[i][2])
                                    table.insert(_tmpArr, splitCard.cardList[i][3])
                                    for index = 1, #splitCard.cardList[n] do
                                        table.insert(_tmpArr, splitCard.cardList[n][index])
                                    end                        
                                    table.insert(tipArr, _tmpArr)
                                    break
                                end
                            else
                                if #splitCard.cardList[n] > 2 and n ~= i then
                                    isHas = true
                                    -- table.insert(tipArr, { splitCard.cardList[i][1], splitCard.cardList[i][2], splitCard.cardList[i][3], splitCard.cardList[n][1], splitCard.cardList[n][2] })
                                    local _tmpArr = {}
                                    table.insert(_tmpArr, splitCard.cardList[i][1])
                                    table.insert(_tmpArr, splitCard.cardList[i][2])
                                    table.insert(_tmpArr, splitCard.cardList[i][3])
                                    table.insert(_tmpArr, splitCard.cardList[n][1])
                                    table.insert(_tmpArr, splitCard.cardList[n][2])                                                    
                                    table.insert(tipArr, _tmpArr)
                                    break
                                end
                            end
                        end
                    end
                end
            end
        end
    end

    return tipArr;
end

-- 三带二(飞机带翅膀)
function TipLogic:getThreeWithPairsType(cards, splitCard, isFeiDan, isEqual, isUnpackBoom)
    local tmpArr = {} -- 循环提示列表

    -- 提取炸弹
    if not isFeiDan then
        -- 先查找不拆炸弹的顺子
        tmpArr = self:_getThreeWithPairsType(cards, splitCard, isFeiDan, isEqual, false)

        local cloneTmpArr = self:clone(tmpArr)

        -- 普通炸弹
        local cardArr = self:getBoomType(cards, splitCard, CardType.CTID_SAN_DAI_ER)
        for i = 1, #cardArr do
            table.insert(tmpArr, cardArr[i])
        end

        local tmpArrBomb = {}
        tmpArrBomb = self:_getThreeWithPairsType(cards, splitCard, isFeiDan, isEqual, true)

        for j = 1, #tmpArrBomb do
            if not self:checkSame(cloneTmpArr, tmpArrBomb[j]) then
                table.insert(tmpArr, tmpArrBomb[j])
            end
        end
    else
        tmpArr = self:_getThreeWithPairsType(cards, splitCard, isFeiDan, isEqual, isUnpackBoom)
    end

    return tmpArr
end

-- 四带2张(一对或者2个单张)
function TipLogic:_getFourWithTwoType(cards, splitCard, isFeiDan, isEqual, isUnpackBoom)
    local tipArr = {} -- 循环提示列表
    local _splitCard = SplitCard:new()
    local cardList = MiscLogic.setSplitCard(cards, _splitCard)
    local fourCards = cardList.four[1] or {}

    -- 四张中提取四张
    for i = 1, #splitCard.cardList do
        if #splitCard.cardList[i] == 4 then
            if MiscLogic.compCardsByValueBool(fourCards[1], splitCard.cardList[i][1]) or (isEqual and MiscLogic.isEqualByCardsValue(fourCards[1], splitCard.cardList[i][1])) then
                local isHas = false

                -- 对中提取2张
                for n = 1, #splitCard.cardList do
                    local flag = true
                    if splitCard.sj and splitCard.bj and (#splitCard.sj + #splitCard.bj == KING_BOOM_NUM) then -- 是天王炸
                        if n == CardPower.CP_SJ or n == CardPower.CP_BJ then
                            flag = false
                        end
                    end
                    if flag then
                        if #splitCard.cardList[n] == 2 then
                            isHas = true
                            local _tmpArr = {}
                            for index = 1, #splitCard.cardList[i] do
                                table.insert(_tmpArr, splitCard.cardList[i][index])
                            end
                            for index = 1, #splitCard.cardList[n] do
                                table.insert(_tmpArr, splitCard.cardList[n][index])
                            end
                            table.insert(tipArr, _tmpArr)
                            -- table.insert(tipArr, { unpack(splitCard.cardList[i]), unpack(splitCard.cardList[n]) })
                            break
                        end
                    end
                end

                if not isHas then
                    -- 单张中取2张
                    if #splitCard.single >= 2 then
                        local _tmpArr = {}
                        for index = 1, #splitCard.cardList[i] do
                            table.insert(_tmpArr, splitCard.cardList[i][index])
                        end
                        table.insert(_tmpArr, splitCard.single[1])
                        table.insert(_tmpArr, splitCard.single[2])
                        table.insert(tipArr, _tmpArr)
                        -- table.insert(tipArr, { unpack(splitCard.cardList[i]), splitCard.single[1], splitCard.single[2] })
                    end
                end

                if not isHas and isUnpackBoom then
                    for n = 1, #splitCard.cardList do
                        if splitCard.sj and splitCard.bj and (#splitCard.sj + #splitCard.bj == KING_BOOM_NUM and #splitCard.sj + #splitCard.bj == 4) then -- 是天王炸
                            if n == CardPower.CP_SJ or n == CardPower.CP_BJ then
                                isHas = true
                                local _tmpArr = {}
                                for index = 1, #splitCard.cardList[i] do
                                    table.insert(_tmpArr, splitCard.cardList[i][index])
                                end
                                for index = 1, #splitCard.cardList[n] do
                                    table.insert(_tmpArr, splitCard.cardList[n][index])
                                end
                                table.insert(tipArr, _tmpArr)
                                -- table.insert(tipArr, { unpack(splitCard.cardList[i]), unpack(splitCard.cardList[n]) })
                                break
                            end
                        else
                            if #splitCard.cardList[n] > 2 and n ~= i then
                                isHas = true
                                local _tmpArr = {}
                                for index = 1, #splitCard.cardList[i] do
                                    table.insert(_tmpArr, splitCard.cardList[i][index])
                                end
                                table.insert(_tmpArr, splitCard.cardList[n][1])
                                table.insert(_tmpArr, splitCard.cardList[n][2])
                                table.insert(tipArr, _tmpArr)
                                -- table.insert(tipArr, { unpack(splitCard.cardList[i]), splitCard.cardList[n][1], splitCard.cardList[n][2] })
                                break
                            end
                        end
                    end
                end
            end
        end
    end

    return tipArr
end

-- 四带2张(一对或者2个单张)
function TipLogic:getFourWithTwoType(cards, splitCard, isFeiDan, isEqual, isUnpackBoom)
    local tmpArr = {} -- 循环提示列表

    tmpArr = self:_getFourWithTwoType(cards, splitCard, isFeiDan, isEqual, false)

    -- 普通炸弹
    local cardArr = self:getBoomType(cards, splitCard, CardType.CTID_SI_DAI_ER)
    for i = 1, #cardArr do
        table.insert(tmpArr, cardArr[i])
    end

    -- 连炸
    --local cardArr2 = getBoomStraight(cards, splitCard, CardType.CTID_SI_DAI_ER)
    --for i=1,#cardArr2 do
    --    table.insert(tmpArr, cardArr2[i])
    --end

    return tmpArr
end

-- 四带二对
function TipLogic:_getFourWithTwoPairsType(cards, splitCard, isFeiDan, isEqual, isUnpackBoom)
    local tipArr = {} -- 循环提示列表
    local _splitCard = SplitCard:new()
    local cardList = MiscLogic.setSplitCard(cards, _splitCard)
    local fourCards = cardList.four[1] or {}

    -- 四张中提取四张
    for i = 1, #splitCard.cardList do
        if #splitCard.cardList[i] == 4 then
            if MiscLogic.compCardsByValueBool(fourCards[1], splitCard.cardList[i][1]) or (isEqual and MiscLogic.isEqualByCardsValue(fourCards[1], splitCard.cardList[i][1])) then
                local isHas = false
                if #splitCard.pairs >= 2 then
                    isHas = true
                    local _tmpArr = {}
                    for index = 1, #splitCard.cardList[i] do
                        table.insert(_tmpArr, splitCard.cardList[i][index])
                    end
                    for index = 1, #splitCard.pairs[1] do
                        table.insert(_tmpArr, splitCard.pairs[1][index])
                    end
                    for index = 1, #splitCard.pairs[2] do
                        table.insert(_tmpArr, splitCard.pairs[2][index])
                    end
                    table.insert(tipArr, _tmpArr)
                    -- table.insert(tipArr, { unpack(splitCard.cardList[i]), unpack(splitCard.pairs[1]), unpack(splitCard.pairs[2]) })
                end

                if not isHas and isUnpackBoom then
                    for n = 1, #splitCard.cardList do
                        if splitCard.sj and splitCard.bj and (#splitCard.sj + #splitCard.bj == KING_BOOM_NUM) then -- 是天王炸
                            if n == CardPower.CP_SJ or n == CardPower.CP_BJ then
                            end
                        else
                            if #splitCard.cardList[n] > 2 and n ~= i then
                                isHas = true
                                local _tmpArr = {}
                                for index = 1, #splitCard.cardList[i] do
                                    table.insert(_tmpArr, splitCard.cardList[i][index])
                                end
                                table.insert(_tmpArr, splitCard.cardList[n][1])
                                table.insert(_tmpArr, splitCard.cardList[n][2])
                                table.insert(tipArr, _tmpArr)
                                -- table.insert(tipArr, { unpack(splitCard.cardList[i]), splitCard.cardList[n][1], splitCard.cardList[n][2] })
                                break
                            end
                        end
                    end
                end
            end
        end
    end

    return tipArr
end

-- 四带二对（2个对）
function TipLogic:getFourWithTwoPairsType(cards, splitCard, isFeiDan, isEqual, isUnpackBoom)
    local tmpArr = {} -- 循环提示列表

    -- 先查找不拆炸弹的顺子
    tmpArr = self:_getFourWithTwoPairsType(cards, splitCard, isFeiDan, isEqual, false)

    -- 普通炸弹
    local cardArr = self:getBoomType(cards, splitCard, CardType.CTID_SI_DAI_ER_DUI)
    for i = 1, #cardArr do
        table.insert(tmpArr, cardArr[i])
    end

    -- 连炸
    --local cardArr2 = getBoomStraight(cards, splitCard, CardType.CTID_SI_DAI_ER_DUI)
    --for i=1,#cardArr2 do
    --    table.insert(tmpArr, cardArr2[i])
    --end

    return tmpArr
end

-- 单顺递归
function TipLogic:_getSingleStraighType(cards, splitCard, idx, tmpArr, isEqual, isUnpackBoom)
    local tmp = {}
    for i = idx, 14 do
        if splitCard.cardList[i] and (#splitCard.cardList[i] < 4 or isUnpackBoom) then -- 炸弹不拆
            if #splitCard.cardList[i] > 0 then -- 有牌
                if #tmp >= #cards then -- 满足顺子的长度，就不再进行这次寻找，开始下次寻找
                    table.insert(tmpArr, tmp)
                    return self:_getSingleStraighType(cards, splitCard, i + 1 - #tmp, tmpArr, isEqual, isUnpackBoom)
                else
                    if MiscLogic.compCardsByValueBool(cards[1], splitCard.cardList[i][1]) or (isEqual and MiscLogic.isEqualByCardsValue(cards[1], splitCard.cardList[i][1])) then
                        if #splitCard.cardList[i] >= 1 then                    
                            for j = 1, #MiscLogic.slice(splitCard.cardList[i], 1, 1) do
                                table.insert(tmp, splitCard.cardList[i][j])
                            end
                        else
                            return self:_getSingleStraighType(cards, splitCard, i + 1, tmpArr, isEqual, isUnpackBoom)
                        end
                    else
                        return self:_getSingleStraighType(cards, splitCard, i + 1, tmpArr, isEqual, isUnpackBoom)
                    end
                end
            else -- 无牌
                if #tmp > 0 then -- 顺子中，首位先不补王(王在顺子中优先代替最大值【王，4，5，6，7】，这里的王是8)
                    if #tmp >= #cards then
                        table.insert(tmpArr, tmp)
                        return self:_getSingleStraighType(cards, splitCard, i + 1 - #tmp, tmpArr, isEqual, isUnpackBoom)
                    else
                        return self:_getSingleStraighType(cards, splitCard, i + 1, tmpArr, isEqual, isUnpackBoom)
                    end
                else -- 首张先不补王
                    tmp = {}
                end
            end
        else -- 断开就递归
            if #tmp >= #cards then -- 满足顺子的长度，就不再进行这次寻找，开始下次寻找
                table.insert(tmpArr, tmp)
                return self:_getSingleStraighType(cards, splitCard, i + 1 - #tmp, tmpArr, isEqual, isUnpackBoom)
            else
                return self:_getSingleStraighType(cards, splitCard, i + 1, tmpArr, isEqual, isUnpackBoom)
            end
        end
    end

    if #tmp > 0 then -- 顺子中，首位先不补王(王在顺子中优先代替最大值【王，4，5，6，7】，这里的王是8)
        if #tmp >= #cards then
            table.insert(tmpArr, tmp)
        end
    end

    return tmp
end

-- 单顺
function TipLogic:getSingleStraighType(cards, splitCard, isFeiDan, isEqual, isUnpackBoom)
    local tmpArr = {} -- 循环提示列表

    -- 提取炸弹
    if not isFeiDan then
        -- 先查找不拆炸弹的顺子
        self:_getSingleStraighType(cards, splitCard, 3, tmpArr, isEqual, false)

        local cloneTmpArr = self:clone(tmpArr)

        -- 普通炸弹
        local cardArr = self:getBoomType(cards, splitCard, CardType.CTID_YI_SHUN)
        for i = 1, #cardArr do
            table.insert(tmpArr, cardArr[i])
        end

        local tmpArrBomb = {}
        self:_getSingleStraighType(cards, splitCard, 3, tmpArrBomb, isEqual, true)

        for j = 1, #tmpArrBomb do
            if not self:checkSame(cloneTmpArr, tmpArrBomb[j]) then
                table.insert(tmpArr, tmpArrBomb[j])
            end
        end
    else
        self:_getSingleStraighType(cards, splitCard, 3, tmpArr, isEqual, isUnpackBoom)
    end

    return tmpArr
end

-- 双顺递归
function TipLogic:_getPairsStraighType(cards, splitCard, idx, tmpArr, isEqual, isUnpackBoom)
    local tmp = {}
    for i = idx, 14 do
        if splitCard.cardList[i] and (#splitCard.cardList[i] < 4 or isUnpackBoom) then -- 炸弹不拆
            if #splitCard.cardList[i] > 0 then -- 有牌
                if #tmp >= #cards then -- 满足顺子的长度，就不再进行这次寻找，开始下次寻找
                    table.insert(tmpArr, tmp)
                    return self:_getPairsStraighType(cards, splitCard, i + 1 - #tmp / 2, tmpArr, isEqual, isUnpackBoom)
                else
                    if MiscLogic.compCardsByValueBool(cards[1], splitCard.cardList[i][1]) or (isEqual and MiscLogic.isEqualByCardsValue(cards[1], splitCard.cardList[i][1])) then
                        if #splitCard.cardList[i] >= 2 then
                            for j = 1, #MiscLogic.slice(splitCard.cardList[i], 1, 2) do
                                table.insert(tmp, splitCard.cardList[i][j])
                            end
                        else
                            return self:_getPairsStraighType(cards, splitCard, i + 1, tmpArr, isEqual, isUnpackBoom)
                        end
                    else
                        return self:_getPairsStraighType(cards, splitCard, i + 1, tmpArr, isEqual, isUnpackBoom)
                    end
                end
            else -- 无牌
                if #tmp > 0 then -- 顺子中，首位先不补王(王在顺子中优先代替最大值【王，4，5，6，7】，这里的王是8)
                    if #tmp >= #cards then
                        table.insert(tmpArr, tmp)
                        return self:_getPairsStraighType(cards, splitCard, i + 1 - #tmp / 2, tmpArr, isEqual, isUnpackBoom)
                    else
                        return self:_getPairsStraighType(cards, splitCard, i + 1, tmpArr, isEqual, isUnpackBoom)
                    end
                else -- 首张先不补王
                    tmp = {}
                end
            end
        else -- 断开就递归
            if #tmp >= #cards then -- 满足顺子的长度，就不再进行这次寻找，开始下次寻找
                table.insert(tmpArr, tmp)
                return self:_getPairsStraighType(cards, splitCard, i + 1 - #tmp / 2, tmpArr, isEqual, isUnpackBoom)
            else
                return self:_getPairsStraighType(cards, splitCard, i + 1, tmpArr, isEqual, isUnpackBoom)
            end
        end
    end

    if #tmp > 0 then -- 顺子中，首位先不补王(王在顺子中优先代替最大值【王，4，5，6，7】，这里的王是8)
        if #tmp >= #cards then
            table.insert(tmpArr, tmp)
        end
    end

    return tmp
end

-- 双顺
function TipLogic:getPairsStraighType(cards, splitCard, isFeiDan, isEqual, isUnpackBoom)
    local tmpArr = {}

    if not isFeiDan then
        self:_getPairsStraighType(cards, splitCard, 3, tmpArr, isEqual, false)

        local cloneTmpArr = self:clone(tmpArr)

        local cardArr = self:getBoomType(cards, splitCard, CardType.CTID_ER_SHUN)
        for i = 1, #cardArr do
            table.insert(tmpArr, cardArr[i])
        end

        local tmpArrBomb = {}
        self:_getPairsStraighType(cards, splitCard, 3, tmpArrBomb, isEqual, true)

        for j = 1, #tmpArrBomb do
            if not self:checkSame(cloneTmpArr, tmpArrBomb[j]) then
                table.insert(tmpArr, tmpArrBomb[j])
            end
        end
    else
        self:_getPairsStraighType(cards, splitCard, 3, tmpArr, isEqual, isUnpackBoom)
    end

    return tmpArr
end

-- 三顺递归
function TipLogic:_getThreeStraighType(cards, splitCard, idx, tmpArr, isEqual, isUnpackBoom)
    local tmp = {}
    for i = idx, 14 do
        if splitCard.cardList[i] and (#splitCard.cardList[i] < 4 or isUnpackBoom) then -- 炸弹不拆
            if #splitCard.cardList[i] > 0 then -- 有牌
                if #tmp >= #cards then -- 满足顺子的长度，就不再进行这次寻找，开始下次寻找
                    table.insert(tmpArr, tmp)
                    return self:_getThreeStraighType(cards, splitCard, i + 1 - #tmp / 3, tmpArr, isEqual, isUnpackBoom)
                else
                    if MiscLogic.compCardsByValueBool(cards[1], splitCard.cardList[i][1]) or (isEqual and MiscLogic.isEqualByCardsValue(cards[1], splitCard.cardList[i][1])) then
                        if #splitCard.cardList[i] >= 3 then
                            for j = 1, #MiscLogic.slice(splitCard.cardList[i], 1, 3) do
                                table.insert(tmp, splitCard.cardList[i][j])
                            end
                        else
                            return self:_getThreeStraighType(cards, splitCard, i + 1, tmpArr, isEqual, isUnpackBoom)
                        end
                    else
                        return self:_getThreeStraighType(cards, splitCard, i + 1, tmpArr, isEqual, isUnpackBoom)
                    end
                end
            else -- 无牌
                if #tmp > 0 then -- 顺子中，首位先不补王(王在顺子中优先代替最大值【王，4，5，6，7】，这里的王是8)
                    if #tmp >= #cards then
                        table.insert(tmpArr, tmp)
                        return self:_getThreeStraighType(cards, splitCard, i + 1 - #tmp / 3, tmpArr, isEqual, isUnpackBoom)
                    else
                        return self:_getThreeStraighType(cards, splitCard, i + 1, tmpArr, isEqual, isUnpackBoom)
                    end
                else -- 首张先不补王
                    tmp = {}
                end
            end
        else -- 断开就递归
            if #tmp >= #cards then -- 满足顺子的长度，就不再进行这次寻找，开始下次寻找
                table.insert(tmpArr, tmp)
                return self:_getThreeStraighType(cards, splitCard, i + 1 - #tmp / 3, tmpArr, isEqual, isUnpackBoom)
            else
                return self:_getThreeStraighType(cards, splitCard, i + 1, tmpArr, isEqual, isUnpackBoom)
            end
        end
    end

    if #tmp > 0 then -- 顺子中，首位先不补王(王在顺子中优先代替最大值【王，4，5，6，7】，这里的王是8)
        if #tmp >= #cards then
            table.insert(tmpArr, tmp)
        end
    end

    return tmp
end

-- 三顺(飞机顺)
function TipLogic:getThreeStraighType(cards, splitCard, isFeiDan, isEqual, isUnpackBoom)
    local tmpArr = {}

    if not isFeiDan then
        -- 先查找不拆炸弹的顺子
        self:_getThreeStraighType(cards, splitCard, 3, tmpArr, isEqual, false)

        local cloneTmpArr = self:clone(tmpArr)

        -- 普通炸弹
        local cardArr = self:getBoomType(cards, splitCard, CardType.CTID_SAN_SHUN)
        for i = 1, #cardArr do
            table.insert(tmpArr, cardArr[i])
        end

        -- 最后查找拆炸弹顺子
        local tmpArrBomb = {}
        self:_getThreeStraighType(cards, splitCard, 3, tmpArrBomb, isEqual, true)

        for j = 1, #tmpArrBomb do
            if not self:checkSame(cloneTmpArr, tmpArrBomb[j]) then
                table.insert(tmpArr, tmpArrBomb[j])
            end
        end
    else
        self:_getThreeStraighType(cards, splitCard, 3, tmpArr, isEqual, isUnpackBoom)
    end

    return tmpArr
end

-- 飞机带翅膀顺
function TipLogic:_getThreeWithPairsStraighType(cards, splitCard, isFeiDan, isEqual, isUnpackBoom)
    -- 去掉对子，只留3张
    local tmpCards = MiscLogic.removePairs(cards)
    tmpCards = MiscLogic.sortMinCardsByValue(tmpCards)
    local tipArr = {} -- 循环提示列表
    local tmpArr = self:getThreeStraighType(tmpCards, splitCard, isFeiDan, isEqual, isUnpackBoom)

    for i = 1, #tmpArr do
        local len = #tmpArr[i] / 3
        if #splitCard.pairs >= len then -- 原始对是否满足
            -- tipArr.push(tmpArr[i].concat(...splitCard.pairs.slice(0, len)))            
            local splitCardArr = MiscLogic.slice(splitCard.pairs, 1, len)
            local _tmpArr = self:clone(tmpArr[i])
            for index = 1, #splitCardArr do
                table.insert(_tmpArr, splitCardArr[index])
            end
            table.insert(tipArr, _tmpArr)

        else -- 剔除三顺牌 剩余牌中提取多个对子（可不连续）
            local newSplitCard = self:removeCardsFromSplit(tmpArr[i], splitCard)
            local pairsArr = {}

            -- 对
            if isFeiDan then
                if #splitCard.pairs ~= #newSplitCard.pairs then
                    -- pairsArr.push(...newSplitCard.pairs.slice(0, len))
                    table.insertto(pairsArr, MiscLogic.slice(newSplitCard.pairs, 1, len))            
                end
            else
                table.insertto(pairsArr, splitCard.pairs) -- 所有原始对子
            end

            -- 王特殊处理
            if #newSplitCard.sj + #newSplitCard.bj ~= KING_BOOM_NUM and #pairsArr < len then
                if #newSplitCard.sj == 2 and #pairsArr < len then
                    table.insertto(pairsArr, newSplitCard.sj)
                end
                if #newSplitCard.bj == 2 and #pairsArr < len then
                    table.insertto(pairsArr, newSplitCard.bj)
                end
            end

            if isUnpackBoom then
                -- 3~7张中提取对
                local tempArr = { newSplitCard.three, newSplitCard.four, newSplitCard.five, newSplitCard.six, newSplitCard.seven }
                for n = 1, #tempArr do
                    if #pairsArr >= len then
                        break
                    end
                    for m = 1, #tempArr[n] do
                        if #pairsArr >= len then
                            break
                        end
                        table.insert(pairsArr, MiscLogic.slice(tempArr[n][m], 1, 2))                
                    end
                end

                -- 天王炸中提取对
                if #newSplitCard.sj + #newSplitCard.bj == KING_BOOM_NUM and #pairsArr < len then
                    if #newSplitCard.sj == 2 and #pairsArr < len then
                        table.insert(pairsArr, newSplitCard.sj)
                    end
                    if #newSplitCard.bj == 2 and #pairsArr < len then
                        table.insert(pairsArr, newSplitCard.bj)
                    end
                end

                -- 8炸中提取对
                if #pairsArr < len and #newSplitCard.eight > 0 then
                    for m = 1, #newSplitCard.eight do
                        if #pairsArr >= len then
                            break
                        end
                        table.insert(pairsArr, MiscLogic.slice(newSplitCard.eight[m], 1, 2))                
                    end
                end
            end

            if #pairsArr == len then
                local _tmpArr = self:clone(tmpArr[i])
                for index = 1, #pairsArr do
                    table.insert(_tmpArr, pairsArr[index])
                end
                table.insert(tipArr, _tmpArr)
            end
        end
    end

    return tipArr
end

-- 飞机带翅膀顺
function TipLogic:getThreeWithPairsStraighType(cards, splitCard, isFeiDan, isEqual, isUnpackBoom)
    local tmpArr = {}

    -- 先查找不拆炸弹的顺子
    tmpArr = self:_getThreeWithPairsStraighType(cards, splitCard, isFeiDan, isEqual, false)

    local cloneTmpArr = self:clone(tmpArr)

    -- 普通炸弹
    local cardArr = self:getBoomType(cards, splitCard, CardType.CTID_FEI_JI)
    for i = 1, #cardArr do
        table.insert(tmpArr, cardArr[i])
    end

    local tmpArrBomb = {}
    tmpArrBomb = self:_getThreeWithPairsStraighType(cards, splitCard, isFeiDan, isEqual, isUnpackBoom)
    for j = 1, #tmpArrBomb do
        if not self:checkSame(cloneTmpArr, tmpArrBomb[j]) then
            table.insert(tmpArr, tmpArrBomb[j])
        end
    end

    return tmpArr
end

-- 从一堆牌中把cnt顺拿出来,只拿一个 cards一堆牌，cnt 几顺，cntLenght顺子最短长度
function TipLogic:_getStraighFromCards(cards, cnt, cntLenght)
    cards = MiscLogic.sortMinCardsByValue(cards)
    local splitCard = MiscLogic.setSplitCard(cards)
    local temArry = {}
    local threeLenght = 0
    for i = 3, 14 do
        if #splitCard.cardList[i] >= cntLenght then
            table.insertto(temArry, MiscLogic.slice(splitCard.cardList[i], 1, cnt))    
            threeLenght = threeLenght + 1
            if threeLenght == cntLenght then
                return temArry
            end
        else
            threeLenght = 0
            temArry = {}
        end
    end

    return temArry
end

-- 飞机带翅膀顺--蝴蝶牌型
function TipLogic:_getThreeWithPairsStraighTypeButterfly(handCards, cards, splitCard, isFeiDan, isEqual, isUnpackBoom)
    local tmpArr = {}
    local threeArr = {}

    -- 先找三顺，三顺找完，剩余牌里面找连对，有连对则可以出
    -- cards其他人出的蝴蝶先提取三顺
    local threeCard = self:_getStraighFromCards(cards, 3, 2)
    self:_getThreeStraighType(threeCard, splitCard, 3, threeArr, isEqual, isUnpackBoom)

    for i = 1, #threeArr do
        local leftCards = self.gameLogic:delArraryInOtherArrary(threeArr[i], handCards)
        leftCards = MiscLogic.sortMinCardsByValue(leftCards)
        local leftSplitCard = MiscLogic.setSplitCard(leftCards)
        local twoArr = {}

        -- 最小连对,这里有点偷鸡了
        local anyPairStraighCard = { 3, 3, 4, 4, 5, 5 }
        self:_getPairsStraighType(anyPairStraighCard, leftSplitCard, 3, twoArr, isEqual, isUnpackBoom)

        for j = 1, #twoArr do
            local _tmpArr = self:clone(threeArr[i])
            for index = 1, #twoArr[j] do
                table.insert(_tmpArr, twoArr[j][index])
            end
            table.insert(tmpArr, _tmpArr)
        end
    end

    return tmpArr
end

-- 飞机带翅膀顺--蝴蝶牌型
function TipLogic:getThreeWithPairsStraighTypeButterfly(handCards, cards, splitCard, isFeiDan, isEqual, isUnpackBoom)
    local tmpArr = {}
    if not isFeiDan then
        -- 先查找不拆炸弹的顺子
        tmpArr = self:_getThreeWithPairsStraighTypeButterfly(handCards, cards, splitCard, isFeiDan, isEqual, false)

        local cloneTmpArr = self:clone(tmpArr)

        -- 普通炸弹
        local cardArr = self:getBoomType(cards, splitCard, CardType.CTID_FEI_JI)
        for i = 1, #cardArr do
            table.insert(tmpArr, cardArr[i])
        end

        local tmpArrBomb = {}
        tmpArrBomb = self:_getThreeWithPairsStraighTypeButterfly(handCards, cards, splitCard, isFeiDan, isEqual, true)
        for j = 1, #tmpArrBomb do
            if not self:checkSame(cloneTmpArr, tmpArrBomb[j]) then
                table.insert(tmpArr, tmpArrBomb[j])
            end
        end
    else
        tmpArr = self:_getThreeWithPairsStraighTypeButterfly(handCards, cards, splitCard, isFeiDan, isEqual, isUnpackBoom)
    end

    return tmpArr
end

-- 将SplitCard转为cards
function TipLogic:splitCardToCard(splitCard)
    local cards = {}
    for i = 0, 17 do
        table.insertto(cards, splitCard.cardList[i])
    end
    return cards
end

-- 删除飞机带翅膀中的对子
function TipLogic:removePairs(cards, removePairs, threeCard, twoCard)
    -- 去掉对子，只留3张
    local tmpArr = {}
    local splitCard = SplitCard()
    local splitCardClone = MiscLogic.setSplitCard(cards, splitCard)
    local obj = {
        threeCard = threeCard,
        twoCard = twoCard
    }
    self.gameLogic:sThreeWithPairsStraighType(cards, splitCardClone, nil, obj)

    for index = 1, #threeCard do
        table.insert(tmpArr, threeCard[index])
    end
    for index = 1, #twoCard do
        table.insert(removePairs, twoCard[index])
    end
    -- table.insertto(tmpArr, unpack(threeCard))
    -- table.insertto(removePairs, unpack(twoCard))

    return tmpArr
end

-- 删除cardArr中对应的牌
function TipLogic:removeCardsFromSplit(cardArr, splitCard)
    local splitCardClone = MiscLogic.clone1(splitCard)

    for i = 1, #cardArr do
        local isDel = false
        for n = 0, #splitCardClone.cardList do
            if isDel then
                isDel = false
                break
            end
            for m = 1, #splitCardClone.cardList[n] do
                if MiscLogic.compCardsByValue(splitCardClone.cardList[n][m], cardArr[i]) == 0 then
                    splitCardClone.cardList[n][m] = nil
                    isDel = true
                    break
                end
            end
        end
    end

    local cards = {}
    for n = 0, #splitCardClone.cardList do
        for m = 1, #splitCardClone.cardList[n] do
            if splitCardClone.cardList[n][m] ~= nil then
                table.insert(cards, splitCardClone.cardList[n][m])
            end
        end
    end

    local newSplitCard = SplitCard()
    newSplitCard = MiscLogic.setSplitCard(cards, newSplitCard)
    return newSplitCard
end

-- 获取炸弹类型的牌
function TipLogic:_getBoomType(cards, splitCard, cardType, isEqual, isUnpackBoom)
    local tipArr = {}

    if (cardType <= CardType.CTID_SAN_ZHANG or cardType >= CardType.CTID_YI_SHUN) and cardType ~= CardType.CTID_TIAN_WANG and cardType ~= CardType.CTID_HUO_JIAN then
        for j = 4, 8 do
            for i = 0, #splitCard.cardList do
                if j == 7 then -- 天王炸
                    if i == CardPower.CP_SJ or i == CardPower.CP_BJ then
                        if i == CardPower.CP_SJ then
                            if #splitCard.sj + #splitCard.bj == KING_BOOM_NUM then                
                                -- table.insert(tipArr, table.merge(splitCard.sj, splitCard.bj))
                                -- tipArr.push(splitCard.sj.concat(splitCard.bj))
                                local _tmpArr = self:clone(splitCard.sj)
                                for index = 1, #splitCard.bj do
                                    table.insert(_tmpArr, splitCard.bj[index])
                                end
                                table.insert(tipArr, _tmpArr)
                            end
                        end
                    else
                        if (#splitCard.cardList[i] >= j and isUnpackBoom) or (not isUnpackBoom and #splitCard.cardList[i] == j) then
                            table.insert(tipArr, MiscLogic.slice(splitCard.cardList[i], 1, j))
                        end
                    end
                else
                    if (#splitCard.cardList[i] >= j and isUnpackBoom) or (not isUnpackBoom and #splitCard.cardList[i] == j) then
                        table.insert(tipArr, MiscLogic.slice(splitCard.cardList[i], 1, j))
                    end
                end
            end
        end
    else
        if cardType == CardType.CTID_TIAN_WANG then
            for i = 0, #splitCard.cardList do
                if #splitCard.cardList[i] == 8 then
                    table.insert(tipArr, MiscLogic.slice(splitCard.cardList[i], 1, 8))
                end
            end
        elseif cardType == CardType.CTID_HUO_JIAN then -- 火箭最大
        else
            local len = #cards
            for j = len, 8 do
                for i = 0, #splitCard.cardList do
                    if j == 7 and len <= 7 then -- 天王炸
                        if i == CardPower.CP_SJ or i == CardPower.CP_BJ then
                            if i == CardPower.CP_SJ then
                                if #splitCard.sj + #splitCard.bj == KING_BOOM_NUM then
                                    if MiscLogic.compCardsByValueBool(cards[1], splitCard.cardList[i][1]) or (isEqual == true and MiscLogic.isEqualByCardsValue(cards[1], splitCard.cardList[i][1])) then
                                        -- table.insert(tipArr, table.merge(splitCard.sj, splitCard.bj))
                                        local _tmpArr = self:clone(splitCard.sj)
                                        for index = 1, #splitCard.bj do
                                            table.insert(_tmpArr, splitCard.bj[index])
                                        end
                                        table.insert(tipArr, _tmpArr)
                                    end
                                end
                            end
                        else
                            if (#splitCard.cardList[i] >= j and isUnpackBoom) or (not isUnpackBoom and #splitCard.cardList[i] == j) then
                                if len == j then -- 同数量的炸，要比较值大小
                                    if MiscLogic.compCardsByValueBool(cards[1], splitCard.cardList[i][1]) or (isEqual == true and MiscLogic.isEqualByCardsValue(cards[1], splitCard.cardList[i][1])) then
                                        table.insert(tipArr, MiscLogic.slice(splitCard.cardList[i], 1, j))
                                    end
                                else
                                    table.insert(tipArr, MiscLogic.slice(splitCard.cardList[i], 1, j))
                                end
                            end
                        end
                    else
                        if (#splitCard.cardList[i] >= j and isUnpackBoom) or (not isUnpackBoom and #splitCard.cardList[i] == j) then
                            if len == j then -- 同数量的炸，要比较值大小
                                if MiscLogic.compCardsByValueBool(cards[1], splitCard.cardList[i][1]) or (isEqual == true and MiscLogic.isEqualByCardsValue(cards[1], splitCard.cardList[i][1])) then
                                    table.insert(tipArr, MiscLogic.slice(splitCard.cardList[i], 1, j))
                                end
                            else
                                table.insert(tipArr, MiscLogic.slice(splitCard.cardList[i], 1, j))
                            end
                        end
                    end
                end
            end
        end
    end

    return tipArr
end

-- 获取炸弹类型的牌
function TipLogic:getBoomType(cards, splitCard, cardType, isEqual)
    local tmpArr = {}

    -- 先查找不拆炸弹
    tmpArr = self:_getBoomType(cards, splitCard, cardType, isEqual, false)

    local cloneTmpArr = self:clone(tmpArr)

    local cardArr = self:_getBoomType(cards, splitCard, cardType, isEqual, true)
    for i = 1, #cardArr do
        if not self:checkSame(cloneTmpArr, cardArr[i]) then
            table.insert(tmpArr, cardArr[i])
        end
    end

    return tmpArr
end

-- 获得炸弹顺子(例如:[3,3,3,3,4,4,4,4,5,5,5,5]) ,连炸不用管拆不拆炸弹
function TipLogic:_getBoomStraight(cards, splitCard, cardType, isEqual)
    local arr = {}
    local allArr = {}
    local continueNum = 0

    if (cardType <= CardType.CTID_SI_ZHANG or cardType >= CardType.CTID_YI_SHUN) and cardType ~= CardType.CTID_SI_SHUN then -- 不是炸，所有的连环炸都可以显示
        for n = 3, 15 do
            for i = n, 15 do
                if #splitCard.cardList[i] >= 4 and ucCardPower[splitCard.cardList[i][1]] ~= CardPower.CP_2 then
                    for index = 1, #splitCard.cardList[i] do
                        table.insert(arr, splitCard.cardList[i][index])
                    end
                    -- table.extend(arr, splitCard.cardList[i])
                    continueNum = continueNum + 1
                    if continueNum > #cards / 4 and continueNum >= 2 and not self:checkSame(allArr, arr) then
                        table.insert(allArr, self:clone(arr))
                    end
                else
                    continueNum = 0
                    arr = {}
                end
            end
        end
    else
        if cardType == CardType.CTID_SI_SHUN then -- 四顺，连炸
            for n = 3, 15 do
                for i = n, 15 do
                    if #splitCard.cardList[i] >= 4 and ucCardPower[splitCard.cardList[i][1]] ~= CardPower.CP_2 then
                        -- table.extend(arr, splitCard.cardList[i])
                        for index = 1, #splitCard.cardList[i] do
                            table.insert(arr, splitCard.cardList[i][index])
                        end
                        continueNum = continueNum + 1
                        if continueNum >= 2 and not self:checkSame(allArr, arr) then
                            -- 如果长度相同，则根据牌权值判断大小
                            if continueNum == #cards / 4 and (MiscLogic.compCardsByValueBool(cards[1], arr[1]) or (isEqual == true and MiscLogic.isEqualByCardsValue(cards[1], arr[1]))) then
                                table.insert(allArr, self:clone(arr))
                            elseif continueNum > #cards / 4 then
                                table.insert(allArr, self:clone(arr))
                            end
                        end
                    else
                        continueNum = 0
                        arr = {}
                    end
                end
            end
        end
    end

    -- 排序
    table.sort(allArr, function(v1, v2)
        if #v1 > #v2 or #v1 < #v2 then
            return #v1 < #v2
        else
            return ucCardPower[v1[1]] < ucCardPower[v2[1]]
        end
    end)

    return allArr
end

-- 获得炸弹顺子(例如:[3,3,3,3,4,4,4,4,5,5,5,5]) ,连炸不用管拆不拆炸弹
function TipLogic:getBoomStraight(cards, splitCard, cardType, isEqual)
    local tmpArr = {}
    -- 先查找不拆炸弹，连炸不用管拆不拆炸弹
    tmpArr = self:_getBoomStraight(cards, splitCard, cardType, isEqual)
    return tmpArr
end

-- 炸弹
function TipLogic:getCardFromBooms(cardType, splitCard)
    local cardArr = {} -- 循环提示列表

    if cardType == CardType.CTID_NONE then
        for i = 1, #splitCard.four do
            table.insert(cardArr, splitCard.four[i])
        end
        for i = 1, #splitCard.five do
            table.insert(cardArr, splitCard.five[i])
        end
        for i = 1, #splitCard.six do
            table.insert(cardArr, splitCard.six[i])
        end
        for i = 1, #splitCard.seven do
            table.insert(cardArr, splitCard.seven[i])
        end
        -- table.insert(cardArr, splitCard.four)
        -- table.insert(cardArr, splitCard.five)
        -- table.insert(cardArr, splitCard.six)
        -- table.insert(cardArr, splitCard.seven)
        if #splitCard.sj + #splitCard.bj == KING_BOOM_NUM then
            local _tmpArr = self:clone(splitCard.sj)
            for index = 1, #splitCard.bj do
                table.insert(_tmpArr, splitCard.bj[index])
            end
            table.insert(cardArr, _tmpArr)
            -- table.insert(cardArr, table.concat(splitCard.sj, splitCard.bj))
        end
        -- table.insert(cardArr, splitCard.eight)
        for i = 1, #splitCard.eight do
            table.insert(cardArr, splitCard.eight[i])
        end
    else
        for i = 1, #splitCard.four do
            if cardType == CardType.CTID_YI_ZHANG then
                table.insert(cardArr, { splitCard.four[i][1] })
            elseif cardType == CardType.CTID_ER_ZHANG then
                table.insert(cardArr, { splitCard.four[i][1], splitCard.four[i][2] })
            elseif cardType == CardType.CTID_SAN_ZHANG then
                table.insert(cardArr, { splitCard.four[i][1], splitCard.four[i][2], splitCard.four[i][3] })
            end
        end

        for i = 1, #splitCard.five do
            if cardType == CardType.CTID_YI_ZHANG then
                table.insert(cardArr, { splitCard.five[i][1] })
            elseif cardType == CardType.CTID_ER_ZHANG then
                table.insert(cardArr, { splitCard.five[i][1], splitCard.five[i][2] })
            elseif cardType == CardType.CTID_SAN_ZHANG then
                table.insert(cardArr, { splitCard.five[i][1], splitCard.five[i][2], splitCard.five[i][3] })
            end
        end

        for i = 1, #splitCard.six do
            if cardType == CardType.CTID_YI_ZHANG then
                table.insert(cardArr, { splitCard.six[i][1] })
            elseif cardType == CardType.CTID_ER_ZHANG then
                table.insert(cardArr, { splitCard.six[i][1], splitCard.six[i][2] })
            elseif cardType == CardType.CTID_SAN_ZHANG then
                table.insert(cardArr, { splitCard.six[i][1], splitCard.six[i][2], splitCard.six[i][3] })
            end
        end

        for i = 1, #splitCard.seven do
            if cardType == CardType.CTID_YI_ZHANG then
                table.insert(cardArr, { splitCard.seven[i][1] })
            elseif cardType == CardType.CTID_ER_ZHANG then
                table.insert(cardArr, { splitCard.seven[i][1], splitCard.seven[i][2] })
            elseif cardType == CardType.CTID_SAN_ZHANG then
                table.insert(cardArr, { splitCard.seven[i][1], splitCard.seven[i][2], splitCard.seven[i][3] })
            end
        end

        if #splitCard.sj + #splitCard.bj == KING_BOOM_NUM then
            if cardType == CardType.CTID_YI_ZHANG then
                table.insert(cardArr, { splitCard.sj[1] })
                table.insert(cardArr, { splitCard.bj[1] })
            elseif cardType == CardType.CTID_ER_ZHANG then
                table.insert(cardArr, splitCard.sj)
                table.insert(cardArr, splitCard.bj)
            end
        end

        for i = 1, #splitCard.eight do
            if cardType == CardType.CTID_YI_ZHANG then
                table.insert(cardArr, { splitCard.eight[i][1] })
            elseif cardType == CardType.CTID_ER_ZHANG then
                table.insert(cardArr, { splitCard.eight[i][1], splitCard.eight[i][2] })
            elseif cardType == CardType.CTID_SAN_ZHANG then
                table.insert(cardArr, { splitCard.eight[i][1], splitCard.eight[i][2], splitCard.eight[i][3] })
            end
        end
    end

    return cardArr
end

-- 是否重复
function TipLogic:checkSame(tmpArr, tmp)
    local has = false
    for i = 1, #tmpArr do
        if json.encode(tmpArr[i]) == json.encode(tmp) then
            has = true
            break
        end
    end
    return has
end




-- 克隆数据
function TipLogic:clone(t, meta)
    -- return json.decode(json.encode(data))
    local u = {}

  if meta then
    setmetatable(u, getmetatable(t))
  end

  for i, v in pairs(t) do
    if type(v) == "table" then
      u[i] = self:clone(v)
    else
      u[i] = v
    end
  end

  return u
end







return TipLogic�2 