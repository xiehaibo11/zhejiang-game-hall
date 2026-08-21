--
--Description: 游戏逻辑算法
--Date: 2019-07-08 17:49:19
--
local CardLogic = class("CardLogic")

local CardEnum = CF.gameRequire("Define.CardEnum")
local GameDefine = CF.gameRequire("Define.GameDefine")

local MyCard = CF.gameRequire("Modules.GameLayer.MyCard")
local MyCardsType = CF.gameRequire("Modules.GameLayer.MyCardsType")

function CardLogic:cards2UChar(fromcards)
    local tocards = {}
    if fromcards == nil then
        return {}
    end
    for i = 1,#fromcards do
        table.insert(tocards,fromcards[i]:getCardID())
    end

    return tocards
end

function CardLogic:ID2MyCards(cards)
    local gameCards = {}
    if cards == nil then
        return {}
    end

    for i = 1,#cards do
        table.insert(gameCards,MyCard.new(cards[i]))
    end

    return gameCards
end

function CardLogic:findCardIDFromCardsID(cardFind, cardsAll)
    for i = 1,#cardsAll do
        if cardsAll[i] == cardFind then
            return true
        end
    end

    return false
end

--删除对应的牌
function CardLogic:removeCardsID(allCardsID, outCardsID)
    local tempAllCardsID = clone(allCardsID)
    for index = 1 , #outCardsID do
        for key, _ in ipairs(tempAllCardsID) do
            if outCardsID[index] == tempAllCardsID[key] then
                table.remove(tempAllCardsID,key)
            end
        end
    end

    return tempAllCardsID
end

--获取牌组中的最小与最大值
function CardLogic:getPowerRangeFromCards(cards)
    if cards == nil then
        return 0,0
    end
    local maxpower = CardEnum.CARD_POWER.POWER_3
    local minpower = CardEnum.CARD_POWER.POWER_COUNT

    for i = 1,#cards do
        local power = cards[i]:getPower()
        -- if power > maxpower then
        --     maxpower = power
        -- end
        -- if power < minpower then
        --     minpower = power
        -- end
        maxpower = power > maxpower and power or maxpower
        minpower = power < minpower and power or minpower
    end

    return minpower,maxpower
end

function CardLogic:sortCard(cards,sortIndex)
    if sortIndex == GameDefine.KW_NUM_SORT_BY_POWER then
        return CardLogic:sortCardByPower(cards)
    elseif sortIndex == GameDefine.KW_NUM_SORT_BY_COUNT then
        return CardLogic:sortCardByCountEx(cards)
    end
end

function CardLogic:sortCardByPower(cards)
    local tmpcards = clone(cards)
    if #tmpcards == 0 then
        return tmpcards
    end
    table.sort(tmpcards,
        function(a,b)
            if a:getPower() < b:getPower() then
                return true
            elseif a:getPower() == b:getPower() and a:getColor() < b:getColor() then
                return true
            end
            return false
        end )

    return tmpcards
end

function CardLogic:sortCardByCount(cards)
    local tmpcards = clone(cards)
    local cardCount = {}
    for i = 1,#tmpcards do
        local curPower = tmpcards[i]:getPower()
        if cardCount[curPower] == nil then
            cardCount[curPower] = 1
        else
            cardCount[curPower] = cardCount[curPower] + 1
        end
    end
    local cardsWithCount = {}
    for i = 1,#tmpcards do
        cardsWithCount[i] = {}
        cardsWithCount[i].count = cardCount[tmpcards[i]:getPower()]
        cardsWithCount[i].card = tmpcards[i]
    end

    table.sort(cardsWithCount,
        function(a,b)
            if a.count < b.count then
                return true
            end
            if a.count > b.count then
                return false
            end

            if a.card:getPower() < b.card:getPower() then
                return true
            elseif a.card:getPower() == b.card:getPower() and a.card:getColor() < b.card:getColor() then
                return true
            end
            return false
        end )
    local sortCards = {}
    for i = 1,#cardsWithCount do
        sortCards[i] = cardsWithCount[i].card
    end
    return sortCards
end

function CardLogic:sortCardByCountEx(cards)
    local tmpcards = clone(cards)
    local cardWangIndex = {}
    for i = 1,#tmpcards do
        local curPower = tmpcards[i]:getPower()
        if curPower >= CardEnum.CARD_POWER.POWER_SJ then
            table.insert(cardWangIndex,i)
        end
    end
    local wangCards = {}
    for i = #cardWangIndex,1,-1 do
        table.insert(wangCards,tmpcards[cardWangIndex[i]])
        table.remove(tmpcards,cardWangIndex[i])
    end
    local sortCardsWang = CardLogic:sortCardByPower(wangCards)
    local sortCardsFeiWang = CardLogic:sortCardByCount(tmpcards)
    local sortCards = {}
    for i = 1,#sortCardsWang do
        table.insert(sortCards,sortCardsWang[i])
    end
    for i = 1,#sortCardsFeiWang do
        table.insert(sortCards,sortCardsFeiWang[i])
    end
    return sortCards
end

--比较两个牌型的大小
--lastHand:是否为最后一手手牌
function CardLogic:canOut(checkedCardsID, comCardsType, lastHand, mustOutCardID)
    if #checkedCardsID < 1 then
        return false
    end

    if mustOutCardID ~= nil then
        if self:findCardIDFromCardsID(mustOutCardID, checkedCardsID) ~= true then
            return false
        end
    end

    --获取当前牌型
    local curCards = CardLogic:ID2MyCards(checkedCardsID)
    local curCardsType = MyCardsType:new()
    curCardsType:findCardTypeFromCards(curCards, lastHand == false)
    if curCardsType._nCardTypeEnum == CardEnum.CARDS_TYPE.CT_0_JUNKO_0_CONTINUOUS then
        return false
    end

    --如果后者为空,则判断为先手出牌
    if comCardsType._nCardTypeEnum == CardEnum.CARDS_TYPE.CT_0_JUNKO_0_CONTINUOUS then
        return true
    end

    --最后一手出3A+2张时,根据上家出手决定到底是4带3还是3带2
    if lastHand == true and CardEnum.S_BSPECFCARD3A == true and curCardsType._nEndPower == CardEnum.CARD_POWER.POWER_A
        and curCardsType._nCardTypeEnum == CardEnum.CARDS_TYPE.CT_4_JUNKO_3_EXCESS_1_CONTINUOUS and #checkedCardsID == 5
        and comCardsType._nCardTypeEnum == CardEnum.CARDS_TYPE.CT_3_JUNKO_2_EXCESS_1_CONTINUOUS then
        curCardsType:setCardTypeEnum(3, 1, 2)
    end

    --对比上次出牌
    if curCardsType:compareCardType(comCardsType, lastHand == false) == CardEnum.COMPARE_RESULT.CR_MORE_THAN then
        return true
    end

    return false
end

--获取提示牌组(仅包含主牌,带牌没有)
function CardLogic:getPromptCards(checkedCardsID, comCardsType, mustOutCardID,mustControl)
    local promptCards = {}
    local promptWithNum = {}

    local curCards = CardLogic:ID2MyCards(checkedCardsID)
    local _, maxCardPower = CardLogic:getPowerRangeFromCards(curCards)
    --整理牌组
    local cardBox = {}
    for i = 1, CardEnum.CARD_POWER.POWER_COUNT do
        cardBox[i] = {}
    end
    for i = 1, #curCards do
        local power = curCards[i]:getPower()
        table.insert(cardBox[power], curCards[i])
    end

    --先手则按牌数从小到大提示
    if comCardsType._nCardTypeEnum == CardEnum.CARDS_TYPE.CT_0_JUNKO_0_CONTINUOUS then
        local orderCards = self:sortCard(curCards, GameDefine.KW_NUM_SORT_BY_COUNT)
        local mustOutCard = nil
        if mustOutCardID ~= nil then
            mustOutCard = MyCard.new(mustOutCardID)
        end
        for i = 1, #orderCards do
            if i == 1 or orderCards[i]:getPower() ~= orderCards[i - 1]:getPower() then
                local curpower = orderCards[i]:getPower()
                local iwithnum = 0
                if #cardBox[curpower] == 3 then
                    iwithnum = 2
                elseif #cardBox[curpower] == 4 then
                    iwithnum = 1
                end
                if mustOutCard == nil or iwithnum > 0 or curpower == mustOutCard:getPower() then
                    if mustControl and #cardBox[curpower] == 1 then --逢跑必压的情况
                        if curpower >= maxCardPower then
                            table.insert(promptCards, cardBox[curpower])
                            table.insert(promptWithNum, iwithnum)
                        end
                    else
                        if #cardBox[curpower] == 4 then
                            --增加4带3的情况
                            table.insert(promptCards, cardBox[curpower])
                            table.insert(promptWithNum, 3)
                        end
                        table.insert(promptCards, cardBox[curpower])
                        table.insert(promptWithNum, iwithnum)
                    end
                end
            end
        end
        return promptCards, promptWithNum
    end

    --后手
    local ctsize = comCardsType._nCardTypeEnum % GameDefine.KW_MULTIPLE_HUNDRED
    local startPower = MyCardsType:getPreNPower(comCardsType._nEndPower, ctsize - 1, false)
    local withNum = math.floor(comCardsType._nCardTypeEnum / GameDefine.KW_MULTIPLE_HUNDRED) % GameDefine.KW_MULTIPLE_TEN
    local noWithCardType = comCardsType._nCardTypeEnum - withNum * GameDefine.KW_MULTIPLE_HUNDRED

    --获取对应的牌型(根据牌数顺序来搜索)
    if mustControl and comCardsType._nCardTypeEnum == CardEnum.CARDS_TYPE.CT_1_JUNKO_0_EXCESS_1_CONTINUOUS then --逢跑必压/报单必大
        local orderCards = CardLogic:sortCardByPower(curCards)
        if orderCards[#orderCards]:getPower() > startPower then
            table.insert(promptCards, {orderCards[#orderCards]})
            table.insert(promptWithNum, 0)
        end
    else
        local orderCards = self:sortCard(curCards, GameDefine.KW_NUM_SORT_BY_COUNT)
        for i = 1, #orderCards do
            if (i == 1 or orderCards[i]:getPower() ~= orderCards[i - 1]:getPower()) and orderCards[i]:getPower() > startPower then
                local bSuccess, orderOutCards = MyCardsType:getCombFromCardBox(cardBox, noWithCardType, orderCards[i]:getPower(), false)
                if bSuccess == true then
                    table.insert(promptCards, orderOutCards)
                    table.insert(promptWithNum, ctsize * withNum)
                end
            end
        end
    end

    --获取炸弹
    -- if comCardsType._nCardTypeEnum ~= 4101 then
    if comCardsType._nCardTypeEnum ~= CardEnum.CARDS_TYPE.CT_4_JUNKO_1_EXCESS_1_CONTINUOUS then
        local nowPower = CardEnum.CARD_POWER.POWER_3
        while nowPower ~= CardEnum.CARD_POWER.POWER_NONE do
            local bSuccess, orderOutCards = MyCardsType:getCombFromCardBox(cardBox, CardEnum.CARDS_TYPE.CT_4_JUNKO_1_EXCESS_1_CONTINUOUS, nowPower, false)
            if bSuccess == true then
                table.insert(promptCards, orderOutCards)
                table.insert(promptWithNum, 1)
            end
            nowPower = MyCardsType:getNextPower(nowPower, false)
        end
    end

    --3A炸弹或3A带3
    if CardEnum.S_BSPECFCARD3A == true then
        if #cardBox[CardEnum.CARD_POWER.POWER_A] == 3 then
            -- if comCardsType._nCardTypeEnum == 4301 then
            if comCardsType._nCardTypeEnum == CardEnum.CARDS_TYPE.CT_4_JUNKO_1_EXCESS_3_CONTINUOUS then
                table.insert(promptCards, cardBox[CardEnum.CARD_POWER.POWER_A])
                table.insert(promptWithNum, 3)
            end
            table.insert(promptCards, cardBox[CardEnum.CARD_POWER.POWER_A])
            table.insert(promptWithNum, 1)
        end
    end

    return promptCards, promptWithNum
end

-------------------------------------------
--判断两个cardIDs是否相等
------------------------------------------
function CardLogic:checkTwoCardDataIsSame(cardIDs1, cardIDs2)
    local tempHandCardIDs1 = clone(cardIDs1)
    local tempHandCardIDs2 = clone(cardIDs2)

    if #tempHandCardIDs1 ~= #tempHandCardIDs2 then
        return false
    end
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

function CardLogic:isBackHandCards(handCards)
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

return CardLogicd1