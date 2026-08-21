local CardLogic     = CF.gameClass("CardLogic", "game.Landlords.BaseLandlords.Logic.CardLogic")
local CardEnum      = CF.gameRequire("Define.CardEnum")
local PokerCard     = CF.gameRequire("Modules.GameLayer.PokerCard")
local CardType      = CF.gameRequire("Define.CardType")

function CardLogic:initAllCardType()
    table.insert(self._baseCardType, self.matchWangZha)
	table.insert(self._baseCardType, self.matchNZhang)
    table.insert(self._baseCardType, self.matchMLianN)
    table.insert(self._baseCardType, self.matchN3Dai1Dui)
end

function CardLogic:initCardTypePower()
    self._cardTypePower[CardType.ID.NZhang] = 12
    self._cardTypePower[CardType.ID.MLianN] = 1
    self._cardTypePower[CardType.ID.N3Dai1Dui] = 1
    self._cardTypePower[CardType.ID.WangZha] = 100
    
    --NZhang牌权 
    for i = 1, 12 do
        if i < 4 then
            self._cardTypePower[CardType.ID.NZhang + i] = 1
        else
            self._cardTypePower[CardType.ID.NZhang + i] = i
        end
    end
    local n
    --MLianN牌权
    for m = 2, 3 do
        if m == 2 then
            n = 3
        else
            n = 2
        end
        for k = n, 12 do
            self._cardTypePower[CardType.ID.MLianN + m * 100 + k] = 1
        end
    end

    --N3Dai1Dui牌权
    for i = 1, 1 do
        self._cardTypePower[CardType.ID.N3Dai1Dui + i] = 1
    end

end

function CardLogic:matchWangZha(outCards, searchResult, normalCardCount, jokerCardsData)
    local jokerCnt = jokerCardsData.count
    --余姚百搭判断。
    if normalCardCount[CardEnum.CARD_POWER.CP_SJ] == 2 and normalCardCount[CardEnum.CARD_POWER.CP_BJ] == 2 
    and #outCards == 4 or (jokerCnt == 4 and #outCards == 4)then
        local temp = {}
        temp.cardTypeID = CardType.ID.WangZha
        temp.cardTypePower = self._cardTypePower[temp.cardTypeID]
        temp.cardPower = CardEnum.CARD_POWER.CP_BJ
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
        --余姚斗地主 不能出对王
        if temp.cardPower >= CardEnum.CARD_POWER.CP_SJ and (temp.cardTypeID == CardType.ID.NZhang + 2 or temp.cardTypeID == CardType.ID.NZhang + 3 or temp.cardTypeID == CardType.ID.NZhang + 4 ) then  
            return
        end
        table.insert(searchResult, temp)
        return
    end
    
    if normalCardCount[CardEnum.CARD_POWER.CP_SJ] + normalCardCount[CardEnum.CARD_POWER.CP_BJ] > 0 and normalCardCount[power] < 4 and power ~= CardEnum.CARD_POWER.CP_BJ and power ~= CardEnum.CARD_POWER.CP_SJ then
        return
    end
    if normalCardCount[power] + jokerCardsData.count == #outCards then
        local temp = {}
        temp.cardTypeID = CardType.ID.NZhang + #outCards
        if self._cardTypePower[temp.cardTypeID] == nil then
            return
        end
        temp.cardTypePower = self._cardTypePower[temp.cardTypeID]
        temp.cardPower = power
        if temp.cardPower >= CardEnum.CARD_POWER.CP_SJ and temp.cardTypeID == CardType.ID.NZhang + 2 then  --余姚斗地主 不能出对王
            return
        end
        table.insert(searchResult, temp)
    end
end

function CardLogic:matchMLianN(outCards, searchResult, normalCardCount, jokerCardsData)
    print("MatchMLianN")
    if #outCards < 6 then
        return
    end
    local minM = 2
    local startN = 1
    local endN = 14
    --余姚斗地主特例，可以出牌AA2233   AAA222
    if normalCardCount[15] > 0 then  --把15转成2
        normalCardCount[2] = normalCardCount[15]
        normalCardCount[15] = 0
    end
    if normalCardCount[14] > 0 then  --把14转成A
        normalCardCount[1] = normalCardCount[14]
    end

    for i = 1, 14 do
        if normalCardCount[i] > minM then
            minM = normalCardCount[i]
        end
    end

    for i = 1, 14 do
        if normalCardCount[1] > 0  then   --如果是A,判断是否是1的可能。只需要看是否带2。
            if normalCardCount[2] > 0 then  --先不考虑2-14的特例
                startN = 1
                break 
            else
                if normalCardCount[i+1] > 0 then
                    startN = i + 1
                    break 
                end
            end
        else
            if normalCardCount[i] > 0 then
                startN = i
                break 
            end
        end
    end
    for i = 14, 1, -1 do
        if normalCardCount[14] > 0  then   --如果是A,判断是否是1的可能。只需要看是否带2。
            if normalCardCount[2] > 0 then  --先不考虑2-14的特例
                if normalCardCount[i-1] > 0 then
                    endN = i - 1
                    break 
                end
            else
                endN = 14
                break 
            end
        else
            if normalCardCount[i] > 0 then
                endN = i
                break 
            end
        end
    end
    local minLenN = endN - startN + 1
    local jck = jokerCardsData.count
    if jck == 0 and (normalCardCount[16] > 0 or normalCardCount[17] > 0) then
        return
    end
    if endN >= CardEnum.CARD_POWER.CP_2 then
        return
    end
    for i = startN, endN do
        if normalCardCount[i] > 0 then   --余姚特殊规则，不可以出先 77王王88  7788王王。百搭必须变已存在的牌。 778王99
            if normalCardCount[i] < minM then
                if jck >= minM - normalCardCount[i] then
                    jck = jck - (minM - normalCardCount[i])
                else
                    return
                end
            end
        else
            return 
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
        --余姚特殊规则，不可以出7788王王。
        minM = 3
        if #outCards % minM == 0 and #outCards / minM <= 13 then
            local temp = {}
            temp.cardTypeID = CardType.ID.MLianN + minM * 100 + #outCards / minM
            if self._cardTypePower[temp.cardTypeID] == nil then
                return
            end
            temp.cardTypePower = self._cardTypePower[temp.cardTypeID]
            local copy = #outCards / minM - minLenN
            if copy > 0 then
                return
            end
            local finalPower = endN
            temp.cardPower = finalPower
            table.insert(searchResult, temp)
        end
    end
end

function CardLogic:matchN3Dai1Dui(outCards, searchResult, normalCardCount, jokerCardsData, strictMatch)
	print("MatchN3Dai2")
    --local Dai1Dui = socket.gettime()
    --余姚不支持飞机
    if #outCards ~= 5 then
        return
    end
    if strictMatch == true then
        if #outCards % 5 ~= 0 then
            return
        end
        -- 余姚特判 --3带2 不能带2王
        local outcardType = 0
        for index = 1, CardEnum.CARD_POWER.CP_2 do
            if normalCardCount[index] >= 1 then
                outcardType = outcardType + 1
            end
        end
        if outcardType == 1 then
            return
        end
        if self:matchNMDaiK(#outCards / 5, 3, 1, 2, normalCardCount, jokerCardsData, searchResult, CardType.ID.N3Dai1Dui, strictMatch) then
            --print("Dai1Dui:", socket.gettime() - Dai1Dui)
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

--数组反转
function CardLogic:reverseTable(tab)
	local tmp = {}
	for i = 1, #tab do
		tmp[i] = table.remove(tab)
	end
	return tmp
end

 -- 提示牌
function CardLogic:getTips(cards, lastCardsType, allJokerData)
    cards = cards or {}
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
	for i = 1, CardEnum.CARD_POWER.CP_BJ do
        cardPowerIDs[i] = {}
        cardPowerCount[i] = 0
    end
	for i = 1, #cards do
        local p = PokerCard.new(cards[i]):getPower()
        cardPowerIDs[p][#cardPowerIDs[p]+1] = cards[i]
        cardPowerCount[p] = cardPowerCount[p] + 1
    end
    
    local containBoom = false
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
		for j = 1, #cardPowerIDs[allJokerData[i]] do
			jokerCardsData.ID[#jokerCardsData.ID + 1] = cardPowerIDs[allJokerData[i]][j]
		end
    end
	
	local preCardTypeID = lastCardsType.cardTypeID or CardType.ID.None
    local prePower = lastCardsType.cardPower
    local preCardCount = lastCardsType.cardCount

	--如果是首出，先提示单张
	if preCardTypeID == CardType.ID.None then
        local endSearch =  CardEnum.CARD_POWER.CP_BJ
        if cardPowerCount[CardEnum.CARD_POWER.CP_SJ] == 2 and cardPowerCount[CardEnum.CARD_POWER.CP_BJ] == 2 then
            local temp = {cardsID = {CardEnum.CARD_ID.CID_SJ, CardEnum.CARD_ID.CID_BJ}, smallWeight = 0, bigWeight = 500, cardPower = {}}
            hintResult[#hintResult + 1] = temp
            endSearch = CardEnum.CARD_POWER.CP_2
        end
        
        local maxCardCount = 8
        for i = 1, maxCardCount do
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
            if preCardTypeID >= CardType.ID.NZhang + 2 then  --余姚特判 王王不能当对子
                searchEnd = CardEnum.CARD_POWER.CP_A
            else
                searchEnd = CardEnum.CARD_POWER.CP_SJ
            end
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
			        if cardPowerCount[CardEnum.CARD_POWER.CP_SJ] == 2 and cardPowerCount[CardEnum.CARD_POWER.CP_BJ] == 2 then
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
					    if cardPowerCount[i + j] >= 4 then
                            temp.bigWeight = 100 + cardPowerCount[i + j]
                        end
                        if i + j == CardEnum.CARD_POWER.CP_SJ or i + j == CardEnum.CARD_POWER.CP_BJ then
                            if cardPowerCount[CardEnum.CARD_POWER.CP_SJ] == 2 and cardPowerCount[CardEnum.CARD_POWER.CP_BJ] == 2 then
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
                        --余姚特判 增加cardPowerCount[i + j] > 0 王不可以代替没有存在的牌。
                        if cardPowerCount[i + j] < preCardTypeAttribute.mainCardCount and cardPowerCount[i + j] + jck >= preCardTypeAttribute.mainCardCount and cardPowerCount[i + j] > 0 then
                            temp.cardPower[#temp.cardPower + 1] = i + j
					        for k = 1, cardPowerCount[i + j] do
						        temp.cardsID[#temp.cardsID + 1] = cardPowerIDs[i + j][k]
						        temp.smallWeight = i * 1000 + j
					        end
					        local index = 1
					        for _ = cardPowerCount[i + j] + 1,  preCardTypeAttribute.mainCardCount do
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
                    for j = CardEnum.CARD_POWER.CP_3, CardEnum.CARD_POWER.CP_2 do
                        local belongMainCard = false
                        for k = 1, #temp.cardPower do
                            if j == temp.cardPower[k] then
                                belongMainCard = true
                                break
                            end
                        end
                        if not belongMainCard then
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
                        for j = CardEnum.CARD_POWER.CP_3, CardEnum.CARD_POWER.CP_2 do
                            local belongMainCard = false
                            for k = 1, #temp.cardPower do
                                if j == temp.cardPower[k] then
                                    belongMainCard = true
                                    break
                                end
                            end
                            if not belongMainCard then
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
					for _ = cardPowerCount[i] + 1,  preCardCount + 1 do
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
					for _ = cardPowerCount[i] + 1,  4 do
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
		if cardPowerCount[CardEnum.CARD_POWER.CP_SJ] == 2 and cardPowerCount[CardEnum.CARD_POWER.CP_BJ] == 2 then
            local temp = {cardsID = {CardEnum.CARD_ID.CID_SJ,CardEnum.CARD_ID.CID_SJ, CardEnum.CARD_ID.CID_BJ, CardEnum.CARD_ID.CID_BJ}, smallWeight = 0, bigWeight = 500, cardPower = {}}
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
	elseif CardType:isN3Dai1Dui(preCardTypeID) then
		preCardTypeAttribute.mainCardLen = preCardTypeID - CardType.ID.N3Dai1Dui
		preCardTypeAttribute.mainCardCount = 3
		preCardTypeAttribute.withCardGroup = 1
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
                        local searchResult = self:searchShunZi(i, i + 2, cardPowerCount, cardPowerIDs, tempMainCardCount, checkCardPowerIndex, checkCardIDIndex, checkCardPowerCount)
                        if searchResult then
                            return searchResult
                        end
                    end
                end
            end
            
            if #checkCards == 3 then
                --三顺和双顺都没找到，则寻找三带一
                local mainCard = startSearch         --代表谁是3
                local withCard = endSearch           --代表谁是1
                if cardPowerCount[endSearch] == 3 and checkCardPowerCount[endSearch] == 2 then 
                    mainCard = endSearch
                    withCard = startSearch
                end
                --余姚特判，只能是3带2
                if cardPowerCount[withCard] < 2 then
                    return checkCards
                end
                --炸弹，王炸不拆原则
                if cardPowerCount[withCard] == 4 then
                    return checkCards
                end
                if withCard == CardEnum.CARD_POWER.CP_SJ or withCard == CardEnum.CARD_POWER.CP_BJ then
                    if cardPowerCount[CardEnum.CARD_POWER.CP_SJ] == 2 or cardPowerCount[CardEnum.CARD_POWER.CP_BJ] == 2 then
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
                    if checkCardIDIndex[cardPowerIDs[withCard][2]] == 1 then
                        --余姚特判，只能是3带2
                        if temp == 3 then
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
            --在区间长度不够的情况下，重新定义搜索起点和终点
            if mainCardCount == 2 then
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
                        local searchResult = self:searchShunZi(i, i + 2, cardPowerCount, cardPowerIDs, mainCardCount, checkCardPowerIndex, checkCardIDIndex, checkCardPowerCount)
                        if searchResult then
                            return searchResult
                        end
                    end
                    return checkCards
                else
                    local searchResult = self:searchShunZi(startSearch, endSearch, cardPowerCount, cardPowerIDs, mainCardCount, checkCardPowerIndex, checkCardIDIndex, checkCardPowerCount)
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
                            local searchResult = self:searchShunZi(i, i + mainCardLen - 1, cardPowerCount, cardPowerIDs, mainCardCount, checkCardPowerIndex, checkCardIDIndex, checkCardPowerCount)
                            if searchResult then
                                return searchResult
                            end
                        end
                    end
                    return checkCards
                else
                    if endSearch > lastCardsType.cardPower then
                        local searchResult = self:searchShunZi(startSearch, endSearch, cardPowerCount, cardPowerIDs, mainCardCount, checkCardPowerIndex, checkCardIDIndex, checkCardPowerCount)
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

function CardLogic:getNextPower(finalPower)
    return finalPower + 1 > 14 and 0 or finalPower + 1
end

function CardLogic:getPowerListByCards(cards)
    local powerList = {}
    local powerListCnt = {}
    local powerCnt1 = 1
    local powerCnt2 = 0
    for index = 1, #cards do
        if cards[index] < 53 then
            local power = (cards[index]%13 == 0) and 13 or cards[index] % 13
            if power == 1 then
                power = 14
            elseif power == 2 then
                power = 15
            end
            table.insert(powerListCnt, power)
            local bFlag = false
            if #powerList > 0 then
                for _, value in pairs(powerList) do
                    if power == value then
                        bFlag = true
                    end
                end
            end
            if not bFlag then
                table.insert(powerList, power)
            end
        end
    end
    for index = 2, #powerListCnt do
        if powerListCnt[index] == powerListCnt[1] then
            powerCnt1 = powerCnt1 + 1
        else
            powerCnt2 = powerCnt2 + 1
        end
    end
    if powerCnt1 == 3 or powerCnt2 == 3 then
        return {}
    end
    return powerList
end

function CardLogic:getOutTypeByCards(powerNum,cards)
    local tCards = clone(cards)
    local typeList = {}
    for index = #tCards, 1, -1 do
        if tCards[index] < 53 then
            local power = (tCards[index]%13 == 0) and 13 or tCards[index] % 13
            if power == 1 then
                power = 14
            elseif power == 2 then
                power = 15
            end
            if power == powerNum then
                table.insert(typeList, tCards[index])
                table.remove(tCards, index)
            end
        end
    end
    for index = #tCards, 1, -1 do
        local len = #typeList
        if len < 3 then
            if tCards[index] == 53 or tCards[index] == 54 then
                table.insert(typeList, tCards[index])
                table.remove(tCards, index)
            end 
        end
    end

    for index = #tCards, 1, -1 do
        if tCards[index] == 53 or tCards[index] == 54 then
            table.insert(typeList, tCards[index])
        else
            table.insert(typeList, 4,tCards[index])
        end
        table.remove(tCards, index)
    end
    return typeList
end

return CardLogic4�  