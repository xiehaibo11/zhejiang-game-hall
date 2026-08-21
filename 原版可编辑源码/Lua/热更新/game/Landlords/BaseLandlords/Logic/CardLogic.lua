local CardLogic = class("CardLogic")

local CardEnum      = CF.gameRequire("Define.CardEnum")
local PokerCard     = CF.gameRequire("Modules.GameLayer.PokerCard")
local CardType      = CF.gameRequire("Define.CardType")

function CardLogic:ctor()
    self._lastCardsTypeID   = {}
    self._baseCardType      = {}
    self._cardTypePower     = {}

    self:initAllCardType()
    self:initCardTypePower()
end

function CardLogic:initAllCardType()
    table.insert(self._baseCardType, self.matchWangZha)
	table.insert(self._baseCardType, self.matchNZhang)
	table.insert(self._baseCardType, self.matchMLianN)
    table.insert(self._baseCardType, self.matchN3Dai1)
    table.insert(self._baseCardType, self.matchN3Dai1Dui)
    table.insert(self._baseCardType, self.matchN4Dai2)
    table.insert(self._baseCardType, self.matchN4Dai2Dui)
end

function CardLogic:initCardTypePower()
    self._cardTypePower[CardType.ID.NZhang] = 12
    self._cardTypePower[CardType.ID.MLianN] = 1
    self._cardTypePower[CardType.ID.N3Dai1] = 1
    self._cardTypePower[CardType.ID.N3Dai1Dui] = 1
    self._cardTypePower[CardType.ID.N4Dai2] = 1
    self._cardTypePower[CardType.ID.N4Dai2Dui] = 1
    self._cardTypePower[CardType.ID.WangZha] = 100
    
    --NZhang牌权
    for i = 1, 4 do
        if i < 4 then
            self._cardTypePower[CardType.ID.NZhang + i] = 1
        else
            self._cardTypePower[CardType.ID.NZhang + i] = i
        end
    end
    local n = 1
    --MLianN牌权
    for m = 1, 3 do
        if m == 1 then
            n = 5
        elseif m == 2 then
            n = 3
        else
            n = 2
        end
        for k = n, 12 do
            self._cardTypePower[CardType.ID.MLianN + m * 100 + k] = 1
        end
    end
    
    --N3Dai1牌权
    for i = 1, 5 do
        self._cardTypePower[CardType.ID.N3Dai1 + i] = 1
    end

    --N3Dai1Dui牌权
    for i = 1, 4 do
        self._cardTypePower[CardType.ID.N3Dai1Dui + i] = 1
    end

    --4Dai2
    for i = 1, 1 do
        self._cardTypePower[CardType.ID.N4Dai2 + i] = 1
    end

    --4Dai2Dui
    for i = 1, 1 do
        self._cardTypePower[CardType.ID.N4Dai2Dui + i] = 1
    end
end


function CardLogic:matchWangZha(outCards, searchResult, normalCardCount, jokerCardsData)
    if normalCardCount[CardEnum.CARD_POWER.CP_SJ] == 1 and normalCardCount[CardEnum.CARD_POWER.CP_BJ] == 1 and #outCards == 2 then
        local temp = {}
        temp.cardTypeID = CardType.ID.WangZha
        temp.cardTypePower = self._cardTypePower[temp.cardTypeID]
        temp.cardPower = 0
        table.insert(searchResult, temp)
    end
end

function CardLogic:matchNZhang(outCards, searchResult, normalCardCount, jokerCardsData)
    local power = 0
    for i = CardEnum.CARD_POWER.CP_3, CardEnum.CARD_POWER.CP_COUNT do
        if normalCardCount[i] > 0 then
            power = i
            break
        end
    end
    if power == 0 then
        local temp = {}
        temp.cardTypeID = CardType.ID.NZhang + jokerCardsData.count
        if self._cardTypePower[temp.cardTypeID] == nil then
            return
        end
        temp.cardTypePower = self._cardTypePower[temp.cardTypeID]
        temp.cardPower = jokerCardsData.power
        table.insert(searchResult, temp)
        return
    end
    if normalCardCount[CardEnum.CARD_POWER.CP_SJ] + normalCardCount[CardEnum.CARD_POWER.CP_BJ] > 0 and normalCardCount[power] < 4 and power ~= CardEnum.CARD_POWER.CP_BJ and power ~= CardEnum.CARD_POWER.CP_SJ then
        return
    end
    if normalCardCount[power] == #outCards or normalCardCount[power] + normalCardCount[CardEnum.CARD_POWER.CP_SJ] + normalCardCount[CardEnum.CARD_POWER.CP_BJ] == #outCards then
        local temp = {}
        temp.cardTypeID = CardType.ID.NZhang + #outCards
        if self._cardTypePower[temp.cardTypeID] == nil then
            return
        end
        temp.cardTypePower = self._cardTypePower[temp.cardTypeID]
        temp.cardPower = power
        table.insert(searchResult, temp)
    end
end

function CardLogic:matchMLianN(outCards, searchResult, normalCardCount, jokerCardsData)
    local minM = 1
    local startN = 1
    local endN = 1
    for i = CardEnum.CARD_POWER.CP_3, CardEnum.CARD_POWER.CP_COUNT do
        if normalCardCount[i] > minM then
            minM = normalCardCount[i]
        end
    end
    for i = CardEnum.CARD_POWER.CP_3, CardEnum.CARD_POWER.CP_COUNT do
        if normalCardCount[i] > 0 then
            startN = i
            break
        end
    end
    for i = CardEnum.CARD_POWER.CP_COUNT, CardEnum.CARD_POWER.CP_3, -1 do
        if normalCardCount[i] > 0 then
            endN = i
            break 
        end
    end
    local minLenN = endN - startN + 1
    local jck = jokerCardsData.count
    if endN >= CardEnum.CARD_POWER.CP_2 then
        return
    end
    for i = startN, endN do
        if normalCardCount[i] < minM then
            if jck >= minM - normalCardCount[i] then
                jck = jck - (minM - normalCardCount[i])
            else
                return
            end
        end
    end

    if jck == 0 then
        local temp = {}
        temp.cardTypeID = CardType.ID.MLianN + minM * 100 + minLenN
        if self._cardTypePower[temp.cardTypeID] == nil then
            return
        end
        temp.cardTypePower = self._cardTypePower[temp.cardTypeID]
        temp.cardPower = endN
        table.insert(searchResult, temp)
    else
        for i = minM, minM + (jck / minLenN) do
            if #outCards % i == 0 and #outCards / i <= 13 then
                local temp = {}
                temp.cardTypeID = CardType.ID.MLianN + i * 100 + #outCards / i
                if self._cardTypePower[temp.cardTypeID] == nil then
                    return
                end
                temp.cardTypePower = self._cardTypePower[temp.cardTypeID]
                local copy = #outCards / i - minLenN
                local finalPower = endN
                while copy >= 0 do
                    if self:getNextPower(finalPower) == CardEnum.CARD_POWER.CP_NONE then
                        temp.cardPower = finalPower
                        break
                    else
                        finalPower = self:getNextPower(finalPower)
                        temp.cardPower = finalPower
                    end
                    copy = copy - 1
                end
                table.insert(searchResult, temp)
            end
        end
    end
end

function CardLogic:matchN3Dai1(outCards, searchResult, normalCardCount, jokerCardsData, strictMatch)
    if #outCards % 4 ~= 0 then
        return
    end
    if self:matchNMDaiK(#outCards / 4, 3, 1, 1, normalCardCount, jokerCardsData, searchResult, CardType.ID.N3Dai1, strictMatch) then
        return
    end
end

function CardLogic:matchN4Dai2(outCards, searchResult, normalCardCount, jokerCardsData, strictMatch)
    if #outCards % 6 ~= 0 then
        return
    end
    if self:matchNMDaiK(#outCards / 6, 4, 2, 1, normalCardCount, jokerCardsData, searchResult, CardType.ID.N4Dai2, strictMatch) then
        return
    end
end

function CardLogic:matchN3Dai1Dui(outCards, searchResult, normalCardCount, jokerCardsData, strictMatch)
	print("MatchN3Dai2")
    if strictMatch == true then
        if #outCards % 5 ~= 0 then
            return
        end
        if self:matchNMDaiK(#outCards / 5, 3, 1, 2, normalCardCount, jokerCardsData, searchResult, CardType.ID.N3Dai1Dui, strictMatch) then
            return
        end
    else
        local searchEnd = math.ceil(#outCards / 3)
        if #outCards % 3 ~= 0 then
            searchEnd = math.ceil(#outCards / 3) - 1
        end
        for i = math.ceil(#outCards / 5), searchEnd do 
            self:matchNMDaiK(i, 3, 1, 2, normalCardCount, jokerCardsData, searchResult, CardType.ID.N3Dai1Dui, strictMatch)
        end
        return
    end
    
end

function CardLogic:matchN4Dai2Dui(outCards, searchResult, normalCardCount, jokerCardsData, strictMatch)
    print("MatchN4Dai2Dui")
    if #outCards % 8 ~= 0 then
        return
    end
    if self:matchNMDaiK(#outCards / 8, 4, 2, 2, normalCardCount, jokerCardsData, searchResult, CardType.ID.N4Dai2Dui, strictMatch) then
        return
    end
end

function CardLogic:matchNMDaiK(n, m, k, t, normalCardCount, jokerCardsData, searchResult, baseTypeID, strictMatch)
    local needJokerCount = {}
    --能组成多少组副牌，用于非严格匹配情况下，例如3带1对的情况下，333444789，对于数学模型来说，长方形在最外面的时候，此牌型可以组成的副牌组数有3--（3/2）+ 1 = 2组，4--（3/2）+ 1 = 2组
    --7--1组，8--1组，9--1组，共 2 + 2 + 1 + 1 + 1 = 7组。而对于前面这种牌型，可以生成的牌型为，len(333444789) / 3（主牌长度） 到 len(333444789)/ 5(主牌+带牌长度)，遍历两个长度之间的值，
    --根据每个主牌的连接长度n来定位，需要多少组带牌，例如n = len(333444789)/ 5(主牌+带牌长度) = 2，那么就需要2组带牌，模型走到3的时候，发现还有3张带牌，不满足，则无法匹配，
    --若n = len(333444789)/ 3（主牌长度） = 3 ，在主牌检测的时候，若没有joker牌，在模型进到9的时候就已经可以out了。
    local canComposeWithCardsCount = {}
    local allCanComposeWithCardsCount = 0
    for i = 1, 20 do
        local temp = {}
        temp.regardMainCards = 0
        temp.regardWithCards = 0
        table.insert(needJokerCount, temp)
    end
    local allNeedJokerCount = n * m
    
    for i = CardEnum.CARD_POWER.CP_3, CardEnum.CARD_POWER.CP_COUNT do
        if normalCardCount[i] >= m then
            if (normalCardCount[i] - m) % t == 0 then
                needJokerCount[i].regardMainCards = 0
            else
                needJokerCount[i].regardMainCards = m - (normalCardCount[i] - m) % t
            end
        else
            needJokerCount[i].regardMainCards = m - normalCardCount[i]
        end
        if normalCardCount[i] % t == 0 then
            needJokerCount[i].regardWithCards = 0
            canComposeWithCardsCount[i] = normalCardCount[i] / t
        else
            if strictMatch then
                needJokerCount[i].regardWithCards = t - normalCardCount[i] % t
            else
                needJokerCount[i].regardWithCards = 0
            end
            canComposeWithCardsCount[i] = math.ceil(normalCardCount[i] / t)
        end
        allCanComposeWithCardsCount = allCanComposeWithCardsCount + canComposeWithCardsCount[i]
        allNeedJokerCount = allNeedJokerCount + needJokerCount[i].regardWithCards
    end

    local searchStart = CardEnum.CARD_POWER.CP_A
    if n == 1 then
        searchStart = CardEnum.CARD_POWER.CP_BJ
    end
    for i = CardEnum.CARD_POWER.CP_BJ, CardEnum.CARD_POWER.CP_3, -1 do
        if i + n - 1 > CardEnum.CARD_POWER.CP_BJ then
            allNeedJokerCount = allNeedJokerCount + needJokerCount[i].regardMainCards - needJokerCount[i].regardWithCards - m
            allCanComposeWithCardsCount = allCanComposeWithCardsCount - canComposeWithCardsCount[i]
        else
            allNeedJokerCount = allNeedJokerCount + needJokerCount[i].regardMainCards - needJokerCount[i].regardWithCards - needJokerCount[i + n].regardMainCards + needJokerCount[i + n].regardWithCards
            allCanComposeWithCardsCount = allCanComposeWithCardsCount - canComposeWithCardsCount[i] + canComposeWithCardsCount[i + n]
        end
        if allNeedJokerCount <= jokerCardsData.count and i + n - 1 <= searchStart then
            if strictMatch == false then
                if allCanComposeWithCardsCount > k * n then
                    return
                end
            end
            local temp = {}
            temp.cardTypeID = baseTypeID + n
            if self._cardTypePower[temp.cardTypeID] == nil then
                return
            end
            temp.cardTypePower = self._cardTypePower[temp.cardTypeID]
            temp.cardPower = i + n - 1
            table.insert(searchResult, temp)
            return true
        end
    end
    return false
end

-------------------------------------------
--从cardIDs中删除cardIDsToDelete数据
-------------------------------------------
function CardLogic:deleteCardIDs(cardIDs, cardIDsToDelete)
    if cardIDs == nil or #cardIDs == 0 then
        return false,{}
    end
    if cardIDsToDelete == nil then
        return true,{}
    end
    local tempCards = clone(cardIDs)
    local tempcardsToDelete = clone(cardIDsToDelete)

    for v,value in ipairs(tempcardsToDelete) do 
        self:deleteOneCardID(tempCards, value)
    end
    local iSDeleteSuccess = (#tempCards + #cardIDsToDelete == #cardIDs ) and (#cardIDsToDelete ~= 0)
    return iSDeleteSuccess,tempCards
end

-------------------------------------------
--从cardIDs中删除
-------------------------------------------
function CardLogic:deleteOneCardID(cardIDs, cardID)
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

-- 牌id数组转换成PokerCard对象数组
function CardLogic:IDToCards(cardIDs)
    local gameCards = {}
    if cardIDs == nil then
        return {}
    end

    for i = 1,#cardIDs do
        table.insert(gameCards,PokerCard.new(cardIDs[i]))
    end

    return gameCards
end

-- PokerCard数组对象转成ID数组
function CardLogic:cardsToUChar(fromcards)
    local tocards = {}
    if fromcards == nil then
        return {}
    end
    for i = 1,#fromcards do
        table.insert(tocards,fromcards[i]:getID())
    end

    return tocards
end

-- 牌数组排序
function CardLogic:sortCard(cards, sortType)
    if sortType == CF.GameDefine.SORT_TYPE.SORT_TYPE_POWER then
        return CardLogic:sortCardByPower(cards)
    elseif sortType == CF.GameDefine.SORT_TYPE.SORT_TYPE_COUNT then
        return CardLogic:sortCardByCountEx(cards)
    end
end

-- 按权值排序，从大到小
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

-- 按个数排序，由多到少
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

-- 按数量多少排序
function CardLogic:sortCardByCountEx(cards)
    local tmpcards = clone(cards)
    local cardWangIndex = {}
    for i = 1,#tmpcards do
        local curPower = tmpcards[i]:getPower()
        if curPower >= CardEnum.CARD_POWER.CP_SJ then
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
function CardLogic:canOut(selectCards, preOutCardData, allJokerData, strictMatch)
    selectCards = selectCards or {}
    local searchResult = {}
    local outCards = {}
    for i = 1,#selectCards do
        outCards[i] = PokerCard:new()
        outCards[i]:setID(selectCards[i])
    end
    if self:findCardType(outCards, searchResult, preOutCardData, allJokerData, strictMatch) then
        for i = 1, #searchResult do
            print("searchResult" .. i .. "ID:" .. searchResult[i].cardTypeID)
            if self:compare(preOutCardData, searchResult[i]) == CardType.CompareResult.MoreThan then
                return true, searchResult[i]
            end
        end
    end
    return false,{}
 end
 
 function CardLogic:findCardType(outCards, searchResult, preOutCardData, allJokerData, strictMatch)
     --初始化将所有的普通牌放入normalCardCount 并计算jokerCardsCount
     local normalCardCount = {}
     allJokerData = allJokerData or {}
     local flag = false
     for i = CardEnum.CARD_POWER.CP_NONE, CardEnum.CARD_POWER.CP_COUNT do
         normalCardCount[i] = 0
     end
     for i = 1, #outCards do
         normalCardCount[outCards[i]:getPower()] = normalCardCount[outCards[i]:getPower()] + 1
     end
     local jokerCardsData = {}
     jokerCardsData.count = 0
     jokerCardsData.power = 0
     for i = 1, #allJokerData do
         jokerCardsData.count = jokerCardsData.count + normalCardCount[allJokerData[i]]
         jokerCardsData.power = allJokerData[i]
         normalCardCount[allJokerData[i]] = 0
     end
     
     for i = 1,#self._baseCardType do
         self._baseCardType[i](self, outCards, searchResult, normalCardCount, jokerCardsData, strictMatch)
     end
     if #searchResult > 0 then
         return true
     else
         return false
     end
 end

 function CardLogic:compare(preCards, cards)
    if preCards.cardTypeID == nil then
        preCards.cardTypeID = 0
    end
    local preCardTypePower = self._cardTypePower[preCards.cardTypeID] or 0
    if preCardTypePower == cards.cardTypePower then
        if preCards.cardTypeID == cards.cardTypeID then
            if preCards.cardPower > cards.cardPower then
                return CardType.CompareResult.LessThan
            elseif preCards.cardPower == cards.cardPower then
                return CardType.CompareResult.Equal
            elseif preCards.cardPower < cards.cardPower then
                return CardType.CompareResult.MoreThan
            end
        end
    elseif preCardTypePower > cards.cardTypePower then
        return CardType.CompareResult.LessThan
    elseif preCardTypePower < cards.cardTypePower then
        return CardType.CompareResult.MoreThan
    else
        return CardType.CompareResult.UnableCompare
    end
end

 -- 提示牌
function CardLogic:getTips(cards, lastCardsType, allJokerData)
	--定义最后查找提示的牌排序算法
	local function sortByWeight(a, b)
		if a.bigWeight == b.bigWeight then
			return a.smallWeight < b.smallWeight
		end
		return a.bigWeight < b.bigWeight
    end
	
	--存放提示的结果
	local hintResult = {}
	
	--存放每个牌权的牌有多少个，以及id，比如玩家A，有3个9，那么cardPowerIDs[9] = 3， cardPowerIDs[9] = {9, 22, 35}
	local cardPowerIDs = {}
    local cardPowerCount = {}
	for i = CardEnum.CARD_POWER.CP_3, CardEnum.CARD_POWER.CP_BJ do
        cardPowerIDs[i] = {}
        cardPowerCount[i] = 0
    end
	for i = 1, #cards do
        local p = PokerCard.new(cards[i]):getPower()
        cardPowerIDs[p][#cardPowerIDs[p]+1] = cards[i]
        cardPowerCount[p] = cardPowerCount[p] + 1
    end
    
    local containBoom = false
    if cardPowerCount[CardEnum.CARD_POWER.CP_SJ] == 1 and cardPowerCount[CardEnum.CARD_POWER.CP_BJ] == 1 then
        containBoom = true
    end
    for i = CardEnum.CARD_POWER.CP_3, CardEnum.CARD_POWER.CP_2 do
        if cardPowerCount[i] == 4 then
            containBoom = true
            break
        end
    end
    --判断是否手牌全部都能出
    if containBoom == false then
        if self:canOut(cards, lastCardsType, allJokerData, true) then 
            hintResult[1] = {cardsID = cards, smallWeight = 0, bigWeight = 0, cardPower = {}}
            return hintResult
        end
	end
	--关于财神数据的处理
	local jokerCardsData = {}
    jokerCardsData.count = 0
    jokerCardsData.power = 0
	jokerCardsData.ID = {}
    for i = 1, #allJokerData do
        jokerCardsData.count = jokerCardsData.count + cardPowerCount[allJokerData[i]]
		for j = 1, #cardPowerCount[allJokerData[i]] do
			jokerCardsData.ID[#jokerCardsData.ID + 1] = cardPowerIDs[allJokerData[i]][j]
		end
		cardPowerCount[allJokerData[i]] = 0
    end
	
	local preCardTypeID = lastCardsType.cardTypeID or CardType.ID.None
    local prePower = lastCardsType.cardPower
    local preCardCount = lastCardsType.cardCount

	--如果是首出，先提示单张
	if preCardTypeID == CardType.ID.None then
        local endSearch =  CardEnum.CARD_POWER.CP_BJ
        if cardPowerCount[CardEnum.CARD_POWER.CP_SJ] == 1 and cardPowerCount[CardEnum.CARD_POWER.CP_BJ] == 1 then
            local temp = {cardsID = {CardEnum.CARD_ID.CID_SJ, CardEnum.CARD_ID.CID_BJ}, smallWeight = 0, bigWeight = 500, cardPower = {}}
            hintResult[#hintResult + 1] = temp
            endSearch = CardEnum.CARD_POWER.CP_2
        end
		for i = 1, 4 do
            for j = CardEnum.CARD_POWER.CP_3, endSearch do
				if cardPowerCount[j] == i then
					local temp = {cardsID = {}, smallWeight = i * 100 + j, bigWeight = 0, cardPower = {}}
					for k = 1, cardPowerCount[j] do
						temp.cardsID[k] = cardPowerIDs[j][k]
					end
					hintResult[#hintResult + 1] = temp
				end
			end
		end
		table.sort(hintResult, sortByWeight)
		return hintResult
	elseif preCardTypeID == CardType.ID.WangZha then
		return {}
	else
		--非王炸牌型，按照先找同牌型最小压得过，在找更大的牌型
		local preCardTypeAttribute = self:getpreCardTypeAttribute(preCardTypeID)
		local searchEnd = CardEnum.CARD_POWER.CP_A
		local searchStart = prePower
		if preCardTypeAttribute.mainCardLen == 1 then
			searchEnd = CardEnum.CARD_POWER.CP_SJ
		elseif preCardTypeAttribute.mainCardLen > 1 then
			if prePower + 1 > CardEnum.CARD_POWER.CP_A then
				searchEnd = CardEnum.CARD_POWER.CP_NONE
			else
				searchStart = prePower - preCardTypeAttribute.mainCardLen + 1
				searchEnd = CardEnum.CARD_POWER.CP_A - preCardTypeAttribute.mainCardLen
			end
		end
		--寻找牌型完全符合的
		for i = searchStart, searchEnd do
			local isAccordMainCard = true
			local temp = {cardsID = {}, smallWeight = 0, bigWeight = 0, cardPower = {}}
			local jck = jokerCardsData.count
            local justMatch = true
            local moreMatch = true
            --刚好能匹配的主牌
			for j = 1, preCardTypeAttribute.mainCardLen do
			    if i + j == CardEnum.CARD_POWER.CP_SJ or i + j == CardEnum.CARD_POWER.CP_BJ then
			        if cardPowerCount[CardEnum.CARD_POWER.CP_SJ] == 1 and cardPowerCount[CardEnum.CARD_POWER.CP_BJ] == 1 then
                        justMatch = false
			            break
			        end
			    end
                if cardPowerCount[i + j] == preCardTypeAttribute.mainCardCount then
                    temp.cardPower[#temp.cardPower + 1] = i + j
                    for k = 1, cardPowerCount[i + j] do
						temp.cardsID[#temp.cardsID + 1] = cardPowerIDs[i + j][k]
						temp.smallWeight = i + j
					end
                else
                    justMatch = false
                    break
                end
            end
            --可以拆的情况下能匹配
            if justMatch == false then
                for j = 1, preCardTypeAttribute.mainCardLen do
                    if cardPowerCount[i + j] >= preCardTypeAttribute.mainCardCount then
                        temp.cardPower[#temp.cardPower + 1] = i + j
                        for k = 1, preCardTypeAttribute.mainCardCount do
						    temp.cardsID[#temp.cardsID + 1] = cardPowerIDs[i + j][k]
						    temp.smallWeight = i * 100 + j
					    end
					    if cardPowerCount[i + j] == 4 then
                            temp.bigWeight = 100
                        end
                        if i + j == CardEnum.CARD_POWER.CP_SJ or i + j == CardEnum.CARD_POWER.CP_BJ then
                            if cardPowerCount[CardEnum.CARD_POWER.CP_SJ] == 1 and cardPowerCount[CardEnum.CARD_POWER.CP_BJ] == 1 then
                                temp.bigWeight = 500
                            end
                        end
                    else
                        moreMatch = false
                        break
                    end
                end
                --需要消耗财神的情况下匹配
                if moreMatch == false then
                    for j = 1, preCardTypeAttribute.mainCardLen do
                        if cardPowerCount[i + j] < preCardTypeAttribute.mainCardCount and cardPowerCount[i + j] + jck >= preCardTypeAttribute.mainCardCount then
                            temp.cardPower[#temp.cardPower + 1] = i + j
					        for k = 1, cardPowerCount[i + j] do
						        temp.cardsID[#temp.cardsID + 1] = cardPowerIDs[i + j][k]
						        temp.smallWeight = i * 1000 + j
					        end
					        local index = 1
					        for k = cardPowerCount[i + j] + 1,  preCardTypeAttribute.mainCardCount do
						        temp.cardsID[#temp.cardsID + 1] = jokerCardsData.ID[index]
						        temp.smallWeight = i * 1000 + j
						        index = index + 1
					        end
					        jck = jck - (preCardCount - cardPowerCount[i + j])
				        elseif cardPowerCount[i + j] >= preCardTypeAttribute.mainCardCount then
                            temp.cardPower[#temp.cardPower + 1] = i + j
                            for k = 1, preCardTypeAttribute.mainCardCount do
						        temp.cardsID[#temp.cardsID + 1] = cardPowerIDs[i + j][k]
						        temp.smallWeight = i * 1000 + j
					        end
--                        elseif cardPowerCount[i + j] > preCardCount then
--                            for k = 1, preCardCount do
--						        temp.cardsID[#temp.cardsID + 1] = cardPowerIDs[i + j][k]
--						        temp.smallWeight = i * 1000 + j
--					        end
                        else
					        isAccordMainCard = false
					        break
				        end
                    end
                end
            end
			if isAccordMainCard then
                local withCardGroupCount = preCardTypeAttribute.mainCardLen * preCardTypeAttribute.withCardGroup
                local isAccordWithCard = false
                --带牌
                if withCardGroupCount == 0 then
                    hintResult[#hintResult + 1] = temp
                else
                    --先搜索严格匹配的带牌
                    for j = CardEnum.CARD_POWER.CP_3, CardEnum.CARD_POWER.CP_BJ do
                        local belongMainCard = false
                        for k = 1, #temp.cardPower do
                            if j == temp.cardPower[k] then
                                belongMainCard = true
                                break
                            end
                        end
                        if belongMainCard then
                        else
                            if cardPowerCount[j] == preCardTypeAttribute.withCardCountInGroup then
                                for k = 1, preCardTypeAttribute.withCardCountInGroup do
                                    temp.cardsID[#temp.cardsID + 1] = cardPowerIDs[j][k]
                                end
                                withCardGroupCount = withCardGroupCount - 1
                                if withCardGroupCount == 0 then
                                    isAccordWithCard = true
                                    break
                                end
                            end
                        end
                    end
                    --在搜索不严格匹配的带牌
                    if withCardGroupCount > 0 then
                        for j = CardEnum.CARD_POWER.CP_3, CardEnum.CARD_POWER.CP_BJ do
                            local belongMainCard = false
                            for k = 1, #temp.cardPower do
                                if j == temp.cardPower[k] then
                                    belongMainCard = true
                                    break
                                end
                            end
                            if belongMainCard then
                            else
                                if cardPowerCount[j] > preCardTypeAttribute.withCardCountInGroup then
                                    for k = 1, preCardTypeAttribute.withCardCountInGroup do
                                        temp.cardsID[#temp.cardsID + 1] = cardPowerIDs[j][k]
                                    end
                                    withCardGroupCount = withCardGroupCount - 1
                                    if withCardGroupCount == 0 then
                                        isAccordWithCard = true
                                        break
                                    end
                                end
                            end
                        end
                    end
                    if isAccordWithCard then
				        hintResult[#hintResult + 1] = temp
                    end
                end
			end
		end
		
		--寻找牌型权值更大的，比如炸弹
		for i = CardEnum.CARD_POWER.CP_3, CardEnum.CARD_POWER.CP_2 do
            local temp = {cardsID = {}, smallWeight = 0, bigWeight = 0, cardPower = {}}
			local jck = jokerCardsData.count
			if CardType:isBoom(preCardTypeID) then
				if cardPowerCount[i] + jck > preCardCount then
					for k = 1, cardPowerCount[i] do
						temp.cardsID[#temp.cardsID + 1] = cardPowerIDs[i][k]
						temp.smallWeight = i
					end
					local index = 1
					for k = cardPowerCount[i] + 1,  preCardCount + 1 do
						temp.cardsID[#temp.cardsID + 1] = jokerCardsData.ID[index]
						temp.smallWeight = i
						index = index + 1
					end
					if cardPowerCount[i] > preCardCount then
						temp.bigWeight = cardPowerCount[i]
					elseif cardPowerCount[i] < preCardCount then
                        temp.bigWeight = preCardCount + 1
					end
					hintResult[#hintResult + 1] = temp
				end
			else
				if cardPowerCount[i] + jck >= 4 then
					for k = 1, cardPowerCount[i] do
						temp.cardsID[#temp.cardsID + 1] = cardPowerIDs[i][k]
						temp.smallWeight = i
					end
					local index = 1
					for k = cardPowerCount[i] + 1,  4 do
						temp.cardsID[#temp.cardsID + 1] = jokerCardsData.ID[index]
						temp.smallWeight = i
						index = index + 1
					end
					if cardPowerCount[i] >= 4 then
						temp.bigWeight = cardPowerCount[i]
					elseif cardPowerCount[i] < 4 then
						temp.bigWeight = 4
					end
					hintResult[#hintResult + 1] = temp
				end
			end
		end
		
		--寻找特殊牌型
		if cardPowerCount[CardEnum.CARD_POWER.CP_SJ] == 1 and cardPowerCount[CardEnum.CARD_POWER.CP_BJ] == 1 then
            local temp = {cardsID = {CardEnum.CARD_ID.CID_SJ, CardEnum.CARD_ID.CID_BJ}, smallWeight = 0, bigWeight = 500, cardPower = {}}
			hintResult[#hintResult + 1] = temp
		end
	end
	
	table.sort(hintResult, sortByWeight)
	return hintResult
end

function CardLogic:getpreCardTypeAttribute(preCardTypeID)
	local preCardTypeAttribute = {}
	if CardType:isNZhang(preCardTypeID) then
		preCardTypeAttribute.mainCardLen = 1
		preCardTypeAttribute.mainCardCount = preCardTypeID - CardType.ID.NZhang
		preCardTypeAttribute.withCardGroup = 0
		preCardTypeAttribute.withCardCountInGroup = 0
	elseif CardType:isMLianN(preCardTypeID) then
		preCardTypeAttribute.mainCardLen = (preCardTypeID - CardType.ID.MLianN) % 100
		preCardTypeAttribute.mainCardCount = math.ceil((preCardTypeID - CardType.ID.MLianN) / 100) - 1
		preCardTypeAttribute.withCardGroup = 0
		preCardTypeAttribute.withCardCountInGroup = 0
	elseif CardType:isN3Dai1(preCardTypeID) then
		preCardTypeAttribute.mainCardLen = preCardTypeID - CardType.ID.N3Dai1
		preCardTypeAttribute.mainCardCount = 3
		preCardTypeAttribute.withCardGroup = 1
		preCardTypeAttribute.withCardCountInGroup = 1
	elseif CardType:isN3Dai1Dui(preCardTypeID) then
		preCardTypeAttribute.mainCardLen = preCardTypeID - CardType.ID.N3Dai1Dui
		preCardTypeAttribute.mainCardCount = 3
		preCardTypeAttribute.withCardGroup = 1
		preCardTypeAttribute.withCardCountInGroup = 2
	elseif CardType:isN4Dai2(preCardTypeID) then
		preCardTypeAttribute.mainCardLen = preCardTypeID - CardType.ID.N4Dai2
		preCardTypeAttribute.mainCardCount = 4
		preCardTypeAttribute.withCardGroup = 2
		preCardTypeAttribute.withCardCountInGroup = 1
	elseif CardType:isN4Dai2Dui(preCardTypeID) then
        preCardTypeAttribute.mainCardLen = preCardTypeID - CardType.ID.N4Dai2Dui
        preCardTypeAttribute.mainCardCount = 4
        preCardTypeAttribute.withCardGroup = 2
        preCardTypeAttribute.withCardCountInGroup = 2
    end
    return preCardTypeAttribute
end


--智能选牌
function CardLogic:chooseCardTips(checkCards, lastCardsType, allJokerData, handCards)
    --初始化数据
    local hintResult = {}               --最终结果存放
    local cardPowerIDs = {}             --拥有的每张牌的id，比如有3个9，id分别为9，22， 22，则cardPowerIDs[9] = {9,22,22}
    local cardPowerCount = {}           --每张牌的个数            比如有3个9，则cardPowerCount[9] = 3
    local checkCardPowerCount = {}      --已经选中牌的张数
    local checkCardPowerSort = {}       --对已经选中的牌，进行牌权值的排序，寻找搜索起点和终点
    local checkCardIDIndex = {}         --选中牌的id索引值，用于判断手牌中的某张牌有没有被选中，用于规避玩家智能选牌选的是黑桃7却弹出红桃7的情况
    local checkCardPowerIndex = {}      --选中牌的牌权索引值，用处和checkCardIDIndex 同理
	for i = 1, CardEnum.CARD_POWER.CP_BJ do
        cardPowerIDs[i] = {}
        cardPowerCount[i] = 0
        checkCardPowerCount[i] = 0
    end
	for i = 1, #handCards do
        local p = PokerCard.new(handCards[i]):getPower()
        cardPowerIDs[p][#cardPowerIDs[p]+1] = handCards[i]
        cardPowerCount[p] = cardPowerCount[p] + 1
    end
    for i = 1, #checkCards do
        local p = PokerCard.new(checkCards[i]):getPower()
        checkCardPowerCount[p] = checkCardPowerCount[p] + 1
        table.insert(checkCardPowerSort, p)
        checkCardIDIndex[checkCards[i]] = 1
        checkCardPowerIndex[p] = 1
    end
    table.sort(checkCardPowerSort)
    
    local jokerCardsData = {}
    jokerCardsData.count = 0
    jokerCardsData.power = 0
	jokerCardsData.ID = {}
    for i = 1, #allJokerData do
        jokerCardsData.count = jokerCardsData.count + cardPowerCount[allJokerData[i]]
		for j = 1, #cardPowerCount[allJokerData[i]] do
			jokerCardsData.ID[#jokerCardsData.ID + 1] = cardPowerIDs[allJokerData[i]][j]
		end
		cardPowerCount[allJokerData[i]] = 0
    end

    --首出的情况
    if lastCardsType.cardTypeID == CardType.ID.None then
        local startSearch = checkCardPowerSort[1]
        local endSearch = checkCardPowerSort[#checkCardPowerSort]
        if endSearch == startSearch then
            return checkCards
        end

        --确定主牌张数
        local mainCardCount = 0
        if checkCardPowerCount[startSearch] == cardPowerCount[startSearch] and checkCardPowerCount[endSearch] == cardPowerCount[endSearch] then
            if cardPowerCount[startSearch] > cardPowerCount[endSearch] then
                mainCardCount = cardPowerCount[endSearch]
            else
                mainCardCount = cardPowerCount[startSearch]
            end
        else
            if checkCardPowerCount[startSearch] == cardPowerCount[startSearch] then
                mainCardCount = checkCardPowerCount[startSearch]
            elseif checkCardPowerCount[endSearch] == cardPowerCount[endSearch] then
                mainCardCount = checkCardPowerCount[endSearch]
            end
        end
        --如果选中了2张牌，并且手牌中有3张牌，先判断能不能连接成3顺，不能就判断能不能练成双顺，如果还是不行，就提示3带1，寻找规则：炸弹不拆
        if cardPowerCount[startSearch] == 3 and checkCardPowerCount[startSearch] == 2 or cardPowerCount[endSearch] == 3 and checkCardPowerCount[endSearch] == 2 then
            --先找三顺
            local tempMainCardCount = 3
            if endSearch > CardEnum.CARD_POWER.CP_A then
                return checkCards
            end
            local searchSanShunSuccess = true
            for i = startSearch, endSearch do
                if cardPowerCount[i] == 4 then          --炸弹不拆
                    searchSanShunSuccess = false
                    hintResult = {}
                    break
                elseif cardPowerCount[i] < tempMainCardCount then           --牌不够3张，直接break
                    searchSanShunSuccess = false
                    hintResult = {}
                    break
                elseif cardPowerCount[i] == tempMainCardCount then
                    for j = 1, tempMainCardCount do
                        table.insert(hintResult, cardPowerIDs[i][j])
                    end
                end
            end
            if searchSanShunSuccess == true then
                return hintResult
            else
                --寻找双顺
                tempMainCardCount = 2
                --长度不够，搜寻所有可以满足的长度
                if endSearch - startSearch < 2 then
                    local newStartSearch = endSearch - 2
                    if newStartSearch < CardEnum.CARD_POWER.CP_3 then
                        newStartSearch = CardEnum.CARD_POWER.CP_3
                    end
                    local newEndSearch = startSearch + 2
                    if newEndSearch > CardEnum.CARD_POWER.CP_A then
                        newEndSearch = CardEnum.CARD_POWER.CP_A
                    end
                    for i = newStartSearch, newEndSearch - 2 do
                        --双顺的寻找规则：可以连成三顺的不拆，炸弹不拆
                        local searchResult = nil
                        searchResult = self:searchShunZi(i, i + 2, cardPowerCount, cardPowerIDs, tempMainCardCount, checkCardPowerIndex, checkCardIDIndex, checkCardPowerCount)
                        if searchResult == nil then
                        else
                            return searchResult
                        end
                    end
                else
                    local searchResult = nil
                    searchResult = self:searchShunZi(startSearch, endSearch, cardPowerCount, cardPowerIDs, tempMainCardCount, checkCardPowerIndex, checkCardIDIndex, checkCardPowerCount)
                    if searchResult == nil then
                    else
                        return searchResult
                    end
                end
            end
            
            if #checkCards == 3 then
                --三顺和双顺都没找到，则寻找三带一
                local mainCard = startSearch         --代表谁是3
                local withCard = endSearch           --代表谁是1
                if cardPowerCount[startSearch] == 3 and checkCardPowerCount[startSearch] == 2 then
                elseif cardPowerCount[endSearch] == 3 and checkCardPowerCount[endSearch] == 2 then 
                    mainCard = endSearch
                    withCard = startSearch
                end
                
                --炸弹，王炸不拆原则
                if cardPowerCount[withCard] == 4 then
                    return checkCards
                end
                if withCard == CardEnum.CARD_POWER.CP_SJ or withCard == CardEnum.CARD_POWER.CP_BJ then
                    if cardPowerCount[CardEnum.CARD_POWER.CP_SJ] == 1 and cardPowerCount[CardEnum.CARD_POWER.CP_BJ] == 1 then
                        return checkCards
                    end
                end
                
                --三顺不拆
                if cardPowerCount[mainCard - 1] == 3 or cardPowerCount[mainCard + 1] == 3 and mainCard + 1 <= CardEnum.CARD_POWER.CP_A then
                    return checkCards
                end

                for i = 1, cardPowerCount[mainCard] do
                    table.insert(hintResult, cardPowerIDs[mainCard][i])
                end
                local temp = 0
                for i = 1, cardPowerCount[withCard] do
                    if checkCardIDIndex[cardPowerIDs[withCard][i]] == 1 then
                        if temp == 2 then
                            break
                        else
                            table.insert(hintResult, cardPowerIDs[withCard][i])
                            temp = temp + 1
                        end
                    end
                end
                return hintResult
            end
        end  
        
        --如果不是全部选中的状态，就返回选中的牌
        if mainCardCount == 0 or mainCardCount == 4 then
            return checkCards
        else
            if endSearch > CardEnum.CARD_POWER.CP_A then
                return checkCards
            end
            local mainCardLen = 0
            --在区间长度不够的情况下，重新定义搜索起点和终点
            if mainCardCount == 2 then
                mainCardLen = 3
                if endSearch - startSearch < 2 then
                    local newStartSearch = endSearch - 2
                    if newStartSearch < CardEnum.CARD_POWER.CP_3 then
                        newStartSearch = CardEnum.CARD_POWER.CP_3
                    end
                    local newEndSearch = startSearch + 2
                    if newEndSearch > CardEnum.CARD_POWER.CP_A then
                        newEndSearch = CardEnum.CARD_POWER.CP_A
                    end
                    for i = newStartSearch, newEndSearch - 2 do
                        --双顺的寻找规则：可以连成三顺的不拆，炸弹不拆
                        local searchResult = nil
                        searchResult = self:searchShunZi(i, i + 2, cardPowerCount, cardPowerIDs, mainCardCount, checkCardPowerIndex, checkCardIDIndex, checkCardPowerCount)
                        if searchResult == nil then
                        else
                            return searchResult
                        end
                    end
                    return checkCards
                else
                    local searchResult = nil
                    searchResult = self:searchShunZi(startSearch, endSearch, cardPowerCount, cardPowerIDs, mainCardCount, checkCardPowerIndex, checkCardIDIndex, checkCardPowerCount)
                    if searchResult == nil then
                        return checkCards
                    else
                        return searchResult
                    end
                end
            elseif mainCardCount == 1 then
                mainCardLen = 5
                if endSearch - startSearch < 4 then
                    local newStartSearch = endSearch - 4
                    if newStartSearch < CardEnum.CARD_POWER.CP_3 then
                        newStartSearch = CardEnum.CARD_POWER.CP_3
                    end
                    local newEndSearch = startSearch + 4
                    if newEndSearch > CardEnum.CARD_POWER.CP_A then
                        newEndSearch = CardEnum.CARD_POWER.CP_A
                    end
                    for i = newStartSearch, newEndSearch - 4 do
                        --双顺的寻找规则：可以连成三顺的不拆，炸弹不拆
                        local searchResult = nil
                        searchResult = self:searchShunZi(i, i + 4, cardPowerCount, cardPowerIDs, mainCardCount, checkCardPowerIndex, checkCardIDIndex, checkCardPowerCount)
                        if searchResult == nil then
                        else
                            return searchResult
                        end
                    end
                    return checkCards
                else
                    local searchResult = nil
                    searchResult = self:searchShunZi(startSearch, endSearch, cardPowerCount, cardPowerIDs, mainCardCount, checkCardPowerIndex, checkCardIDIndex, checkCardPowerCount)
                    if searchResult == nil then
                        return checkCards
                    else
                        return searchResult
                    end
                end
            elseif mainCardCount == 3 then
                --寻找三顺不拆炸弹原则
                for i = startSearch, endSearch do
                    if cardPowerCount[i] == 4 or cardPowerCount[i] < mainCardCount then
                        return checkCards
                    elseif cardPowerCount[i] == mainCardCount then
                        for j = 1, mainCardCount do
                            table.insert(hintResult, cardPowerIDs[i][j])
                        end
                    end
                end
                return hintResult
            else
                return checkCards
            end
        end
    else
        --压牌的情况，压的牌是N张系列
        if CardType:isNZhang(lastCardsType.cardTypeID) then
            if CardType:isBoom(lastCardsType.cardTypeID) then
                --上家出的是炸弹，先看看选的是不是王炸，不是王炸就看看是不是大小比上家大的
                local checkPower = checkCardPowerSort[1]
                if checkPower == CardEnum.CARD_POWER.CP_SJ or checkPower == CardEnum.CARD_POWER.CP_BJ then
                    hintResult[1] = CardEnum.CARD_ID.CID_SJ
                    hintResult[2] = CardEnum.CARD_ID.CID_BJ
                    return hintResult
                else
                    if cardPowerCount[checkPower] == 4 and checkPower > lastCardsType.cardPower then
                        for j = 1, cardPowerCount[checkPower] do
                            hintResult[#hintResult + 1] = cardPowerIDs[checkPower][j]
                        end
                        return hintResult
                    else
                        return checkCards
                    end
                end
            else
                --上家出的不是炸弹，先看看选的牌是不是炸弹，是炸弹就提炸弹，是王炸就提示王炸，不是炸弹就按张数提
                local mainCardCount = lastCardsType.cardCount
                local checkPower = checkCardPowerSort[1]
                if cardPowerCount[checkPower] == 4 then
                    for j = 1, cardPowerCount[checkPower] do
                        hintResult[#hintResult + 1] = cardPowerIDs[checkPower][j]
                    end
                    return hintResult
                elseif checkPower == CardEnum.CARD_POWER.CP_SJ or checkPower == CardEnum.CARD_POWER.CP_BJ then
                    if cardPowerCount[CardEnum.CARD_POWER.CP_SJ] == 1 and cardPowerCount[CardEnum.CARD_POWER.CP_BJ] == 1 then
                        hintResult[1] = CardEnum.CARD_ID.CID_SJ
                        hintResult[2] = CardEnum.CARD_ID.CID_BJ
                        return hintResult
                    end
                    return checkCards
                else
                    if not cardPowerCount[checkPower] then return checkCards end
                    if cardPowerCount[checkPower] >= mainCardCount then
                        local temp = 0
                        for k = 1, cardPowerCount[checkPower] do
                            if temp == checkCardPowerCount[checkPower] or temp == mainCardCount then
                                break
                            else
                                if checkCardIDIndex[cardPowerIDs[checkPower][k]] == 1 then
                                    table.insert(hintResult, cardPowerIDs[checkPower][k])
                                    temp = temp + 1
                                end
                            end
                        end
                        if checkCardPowerCount[checkPower] < mainCardCount then
                            temp = 0
                            for k = 1, cardPowerCount[checkPower] do
                                if temp == mainCardCount - checkCardPowerCount[checkPower] then
                                    break
                                else
                                    if checkCardIDIndex[cardPowerIDs[checkPower][k]] == nil then
                                        table.insert(hintResult, cardPowerIDs[checkPower][k])
                                        temp = temp + 1
                                    end
                                end
                            end
                        end
                        return hintResult
                    else
                        return checkCards
                    end
                end
            end
        elseif CardType:isMLianN(lastCardsType.cardTypeID) then
            --上家出的牌是MLianN型，先看选中的是不是炸弹和王炸，都不是就找相同的
            local startSearch = checkCardPowerSort[1]
            local endSearch = checkCardPowerSort[#checkCardPowerSort]
            if startSearch == endSearch then
                if cardPowerCount[startSearch] == 4 then
                    for i = 1, cardPowerCount[startSearch] do
                        table.insert(hintResult, cardPowerIDs[startSearch][i])
                    end
                    return hintResult
                else
                    if startSearch == CardEnum.CARD_POWER.CP_BJ or startSearch == CardEnum.CARD_POWER.CP_SJ then
                        if cardPowerCount[CardEnum.CARD_POWER.CP_BJ] == 1 and cardPowerCount[CardEnum.CARD_POWER.CP_BJ] == 1 then
                            hintResult[1] = CardEnum.CARD_ID.CID_SJ
                            hintResult[2] = CardEnum.CARD_ID.CID_BJ
                            return hintResult
                        end
                    end
                end
                return checkCards
            end
            --搜索长度大于A，就没必要再搜了，因为不可能再大了
            if endSearch > CardEnum.CARD_POWER.CP_A then
                return checkCards
            end

            --找连接长度和顺子级别
            local mainCardCount =  math.ceil((lastCardsType.cardTypeID - CardType.ID.MLianN) / 100) - 1
            local mainCardLen = (lastCardsType.cardTypeID - CardType.ID.MLianN) % 100
            
            if endSearch - startSearch + 1 > mainCardLen then
                return checkCards
            end
            
            if mainCardCount == 2 then
                if endSearch - startSearch + 1 < mainCardLen then
                    local newStartSearch = endSearch - mainCardLen + 1
                    if newStartSearch < CardEnum.CARD_POWER.CP_3 then
                        newStartSearch = CardEnum.CARD_POWER.CP_3
                    end
                    local newEndSearch = startSearch + mainCardLen - 1
                    if newEndSearch > CardEnum.CARD_POWER.CP_A then
                        newEndSearch = CardEnum.CARD_POWER.CP_A
                    end
                    for i = newStartSearch, newEndSearch - mainCardLen + 1 do
                        --双顺的寻找规则：可以连成三顺的不拆，炸弹不拆
                        if i + mainCardLen - 1 > lastCardsType.cardPower then
                            local searchResult = nil
                            searchResult = self:searchShunZi(i, i + mainCardLen - 1, cardPowerCount, cardPowerIDs, mainCardCount, checkCardPowerIndex, checkCardIDIndex, checkCardPowerCount)
                            if searchResult == nil then
                            else
                                return searchResult
                            end
                        end
                    end
                    return checkCards
                else
                    if endSearch > lastCardsType.cardPower then
                        local searchResult = nil
                        searchResult = self:searchShunZi(startSearch, endSearch, cardPowerCount, cardPowerIDs, mainCardCount, checkCardPowerIndex, checkCardIDIndex, checkCardPowerCount)
                        if searchResult == nil then
                            return checkCards
                        else
                            return searchResult
                        end
                    else
                        return checkCards
                    end
                end
            elseif mainCardCount == 1 then
                if endSearch - startSearch + 1 < mainCardLen then
                    local newStartSearch = endSearch - mainCardLen + 1
                    if newStartSearch < CardEnum.CARD_POWER.CP_3 then
                        newStartSearch = CardEnum.CARD_POWER.CP_3
                    end
                    local newEndSearch = startSearch + mainCardLen - 1
                    if newEndSearch > CardEnum.CARD_POWER.CP_A then
                        newEndSearch = CardEnum.CARD_POWER.CP_A
                    end
                    for i = newStartSearch, newEndSearch - mainCardLen + 1 do
                        --双顺的寻找规则：可以连成三顺的不拆，炸弹不拆
                        if i + mainCardLen - 1 > lastCardsType.cardPower then
                            local searchResult = nil
                            searchResult = self:searchShunZi(i, i + mainCardLen - 1, cardPowerCount, cardPowerIDs, mainCardCount, checkCardPowerIndex, checkCardIDIndex, checkCardPowerCount)
                            if searchResult == nil then
                            else
                                return searchResult
                            end
                        end
                    end
                    return checkCards
                else
                    if endSearch > lastCardsType.cardPower then
                        local searchResult = nil
                        searchResult = self:searchShunZi(startSearch, endSearch, cardPowerCount, cardPowerIDs, mainCardCount, checkCardPowerIndex, checkCardIDIndex, checkCardPowerCount)
                        if searchResult == nil then
                            return checkCards
                        else
                            return searchResult
                        end
                    else
                        return checkCards
                    end
                end
            elseif mainCardCount == 3 then
                if endSearch - startSearch + 1 < mainCardLen then
                    local newStartSearch = endSearch - mainCardLen + 1
                    if newStartSearch < CardEnum.CARD_POWER.CP_3 then
                        newStartSearch = CardEnum.CARD_POWER.CP_3
                    end
                    local newEndSearch = startSearch + mainCardLen - 1
                    if newEndSearch > CardEnum.CARD_POWER.CP_A then
                        newEndSearch = CardEnum.CARD_POWER.CP_A
                    end
                    for i = newStartSearch, newEndSearch - mainCardLen + 1 do
                        --双顺的寻找规则：可以连成三顺的不拆，炸弹不拆
                        if i + mainCardLen - 1 > lastCardsType.cardPower then
                            local searchSuccess = true
                            for j = i, i + mainCardLen - 1 do
                                if cardPowerCount[j] == 4 or cardPowerCount[j] < mainCardCount then
                                    searchSuccess = false
                                    break
                                elseif cardPowerCount[j] == mainCardCount then
                                    for k = 1, mainCardCount do
                                        table.insert(hintResult, cardPowerIDs[j][k])
                                    end
                                end
                            end
                            if searchSuccess == true then
                                return hintResult 
                            end
                        end
                    end
                    return checkCards
                else
                    if endSearch > lastCardsType.cardPower then 
                        for i = startSearch, endSearch do
                            if cardPowerCount[i] == 4 or cardPowerCount[i] < mainCardCount then
                                return checkCards
                            elseif cardPowerCount[i] == mainCardCount then
                                for j = 1, mainCardCount do
                                    table.insert(hintResult, cardPowerIDs[i][j])
                                end
                            end
                        end
                        return hintResult
                    else
                        return checkCards
                    end
                end
            end
        else
            return checkCards
        end
    end
end


function CardLogic:searchShunZi(startPoint, endPoint, cardPowerCount, cardPowerIDs, mainCardCount, checkCardPowerIndex, checkCardIDIndex, checkCardPowerCount)
    local hintResult = {}
	for j = startPoint, endPoint do
        if cardPowerCount[j] == 3 and (cardPowerCount[j - 1] == 3 or cardPowerCount[j + 1] == 3 and j + 1 <= CardEnum.CARD_POWER.CP_A) or cardPowerCount[j] == 4 or cardPowerCount[j] < mainCardCount then
            return nil
        else
            --如果发现当前搜索的牌已经被选中了，那么就要把选中的牌id放到最终的结果表里面去，比如3个9，id分别为9，22， 22，选中了22，22，那么应该把22，22存下来而不应该把9，22存下来，如果没有被选中，就从id里面依次存
            if checkCardPowerIndex[j] == 1 then
                local temp = 0
                for k = 1, cardPowerCount[j] do
                    if temp == checkCardPowerCount[j] or temp == mainCardCount then
                        break
                    else
                        if checkCardIDIndex[cardPowerIDs[j][k]] == 1 then
                            table.insert(hintResult, cardPowerIDs[j][k])
                            temp = temp + 1
                        end
                    end
                end
                if checkCardPowerCount[j] < mainCardCount then
                    local temp = 0
                    for k = 1, cardPowerCount[j] do
                        if temp == mainCardCount - checkCardPowerCount[j] then
                            break
                        else
                            if checkCardIDIndex[cardPowerIDs[j][k]] == nil then
                                table.insert(hintResult, cardPowerIDs[j][k])
                                temp = temp + 1
                            end
                        end
                    end
                end
            else
                for k = 1, mainCardCount do
                    table.insert(hintResult, cardPowerIDs[j][k])
                end
            end
        end
    end
    return hintResult
end

function CardLogic:judgeTableSame(tableA, tableB)
    if type(tableA) ~= "table" or type(tableB) ~= "table" then
        return false
    end

    if #tableA ~= #tableB then
        return false
    else
        for i = 1, #tableA do
            if tableA[i] ~= tableB[i] then
                return false
            end
        end
        return true
    end
end

return CardLogic