
-- Lua中模拟Card类
Card = {}
Card.CB_MAX = 4

-- Color Constants
Card.CC_NONE1 = 0
Card.CC_DIAMOND = 1
Card.CC_CLUB = 2
Card.CC_HEART = 3
Card.CC_SPADE = 4
Card.CC_COUNT = 5

-- Value Constants
Card.CV_NONE = 0
Card.CV_A = 1
Card.CV_2 = 2
-- 追加到 CV_K, CV_SJ, CV_BJ 等

-- Power Constants
Card.CP_NONE1 = 0
Card.CP_3 = 3
Card.CP_4 = 4
Card.CP_5 = 5
Card.CP_6 = 6
Card.CP_7 = 7
Card.CP_8 = 8
Card.CP_9 = 9
Card.CP_10 = 10
Card.CP_J = 11
Card.CP_Q = 12
Card.CP_K = 13
Card.CP_A = 14
Card.CP_2 = 15
Card.CP_SJ = 16
Card.CP_BJ = 17
-- 追加到 CP_BJ

Card.CID_NONE = 0
-- 方块
Card.CID_DIAMOND_A = 1
Card.CID_DIAMOND_2 = 2
Card.CID_DIAMOND_3 = 3
Card.CID_DIAMOND_4 = 4
Card.CID_DIAMOND_5 = 5
Card.CID_DIAMOND_6 = 6
Card.CID_DIAMOND_7 = 7
Card.CID_DIAMOND_8 = 8
Card.CID_DIAMOND_9 = 9
Card.CID_DIAMOND_10 = 10
Card.CID_DIAMOND_J = 11
Card.CID_DIAMOND_Q = 12
Card.CID_DIAMOND_K = 13
-- 梅花
Card.CID_CLUB_A = 14
Card.CID_CLUB_2 = 15
Card.CID_CLUB_3 = 16
Card.CID_CLUB_4 = 17
Card.CID_CLUB_5 = 18
Card.CID_CLUB_6 = 19
Card.CID_CLUB_7 = 20
Card.CID_CLUB_8 = 21
Card.CID_CLUB_9 = 22
Card.CID_CLUB_10 = 23
Card.CID_CLUB_J = 24
Card.CID_CLUB_Q = 25
Card.CID_CLUB_K = 26
-- 红心
Card.CID_HEART_A = 27
Card.CID_HEART_2 = 28
Card.CID_HEART_3 = 29
Card.CID_HEART_4 = 30
Card.CID_HEART_5 = 31
Card.CID_HEART_6 = 32
Card.CID_HEART_7 = 33
Card.CID_HEART_8 = 34
Card.CID_HEART_9 = 35
Card.CID_HEART_10 = 36
Card.CID_HEART_J = 37
Card.CID_HEART_Q = 38
Card.CID_HEART_K = 39
-- 黑桃
Card.CID_SPADE_A = 40
Card.CID_SPADE_2 = 41
Card.CID_SPADE_3 = 42
Card.CID_SPADE_4 = 43
Card.CID_SPADE_5 = 44
Card.CID_SPADE_6 = 45
Card.CID_SPADE_7 = 46
Card.CID_SPADE_8 = 47
Card.CID_SPADE_9 = 48
Card.CID_SPADE_10 = 49
Card.CID_SPADE_J = 50
Card.CID_SPADE_Q = 51
Card.CID_SPADE_K = 52
-- 大小鬼
Card.CID_SJ = 53
Card.CID_BJ = 54
-- 牌背
Card.CID_BACK = 55

Card.CID_COUNT = 56  -- 更新了Card.CID_COUNT的值

Card.CBOOM_NONE1 = 0
Card.CBOOM_3_WITH_JOKER = 1
Card.CBOOM_3 = 2
Card.CBOOM_4_WITH_JOKER = 3
Card.CBOOM_4 = 4
Card.CBOOM_JOKER = 5
Card.CBOOM_5_WITH_JOKER = 6
Card.CBOOM_6_WITH_JOKER = 7

Card.cs_ucCardPower = {                                      -- 为了匹配C++数组的初始值
    Card.CP_A, Card.CP_2, Card.CP_3, Card.CP_4, Card.CP_5, Card.CP_6, Card.CP_7, Card.CP_8, Card.CP_9, Card.CP_10,
    Card.CP_J, Card.CP_Q, Card.CP_K,
    Card.CP_A, Card.CP_2, Card.CP_3, Card.CP_4, Card.CP_5, Card.CP_6, Card.CP_7, Card.CP_8, Card.CP_9, Card.CP_10,
    Card.CP_J, Card.CP_Q, Card.CP_K,
    Card.CP_A, Card.CP_2, Card.CP_3, Card.CP_4, Card.CP_5, Card.CP_6, Card.CP_7, Card.CP_8, Card.CP_9, Card.CP_10,
    Card.CP_J, Card.CP_Q, Card.CP_K,
    Card.CP_A, Card.CP_2, Card.CP_3, Card.CP_4, Card.CP_5, Card.CP_6, Card.CP_7, Card.CP_8, Card.CP_9, Card.CP_10,
    Card.CP_J, Card.CP_Q, Card.CP_K,
    Card.CP_SJ, Card.CP_BJ
}

function Card:new(id)
    local o = {
        id = id or Card.CID_BACK,
        replacePower = 0  -- 类似于 m_ucReplacePower
    }
    setmetatable(o, self)
    self.__index = self
    return o
end

function Card:SetID(id)
    self.id = id
end

function Card:GetID()
    return self.id
end

function Card:GetName()
    return Card.cs_strCardColor[Card.cs_ucCardColor[self.id]] .. Card.cs_strCardValue[Card.cs_ucCardValue[self.id]]
end

-- 相关的Get函数
-- …

function Card:GetPower()
    return Card.cs_ucCardPower[self.id] or 0
end

-- 静态方法
function Card.SortByPower(cards, bSmallToBig)
    -- 使用Lua的table.sort实现
end

-- 实现更多方法
-- …

-- 常量字符串数据，如色彩和代号
Card.cs_strCardValue = {
    [Card.CV_A] = "A",
    -- 完成数组
}
Card.cs_strCardColor = {
    [Card.CC_DIAMOND] = "Diamond",
    -- 完成数组
}
-- 更多数组



-- 模拟CardsType结构
CardsType = {
    nCardTypeEnum = 0,
    ucNJunko = 0,
    ucMContinuous = 0,
    ucXExcess = 0,
    m_nEndPower = 0,
    m_nBoomPower = 0,
    m_OrderOutCards = {}
}

function CardsType:new(o)
    o = o or {}
    setmetatable(o, self)
    self.__index = self
    return o
end

function CardsType:SetCardTypeEnum(ucNJunkoTemp, ucMContinuousTemp, ucXExcessTemp)
    self.ucNJunko = ucNJunkoTemp
    self.ucMContinuous = ucMContinuousTemp
    self.ucXExcess = ucXExcessTemp
	self.nCardTypeEnum = ucNJunkoTemp * 1000 + ucXExcessTemp * 100 + ucMContinuousTemp
end

function CardsType:GetCardTypeEnum()
    return self.nCardTypeEnum
end

function CardsType:GetCardTypeMainNum()
   return self.ucNJunko
end

function CardsType:GetCardTypeWithNum()
    return self.ucXExcess
end

function CardsType:GetCardTypeCTSize()
    return self.ucMContinuous
end

-- 模拟CardRule的枚举和类定义
CardRule = {
	m_bJokerDanYa2 = false
}
-- 枚举类型定义于 CardRule 内
CardRule.CardType = {
    CT_0_JUNKO_0_EXCESS_0_CONTINUOUS = 0,
    CT_1_JUNKO_0_EXCESS_0_CONTINUOUS = 1000,
    CT_1_JUNKO_0_EXCESS_1_CONTINUOUS = 1001,
    CT_1_JUNKO_0_EXCESS_5_CONTINUOUS = 1005,
    CT_1_JUNKO_0_EXCESS_6_CONTINUOUS = 1006,
    CT_1_JUNKO_0_EXCESS_7_CONTINUOUS = 1007,
    CT_1_JUNKO_0_EXCESS_8_CONTINUOUS = 1008,
    CT_1_JUNKO_0_EXCESS_9_CONTINUOUS = 1009,
    CT_1_JUNKO_0_EXCESS_10_CONTINUOUS = 1010,
    CT_1_JUNKO_0_EXCESS_11_CONTINUOUS = 1011,
    CT_1_JUNKO_0_EXCESS_12_CONTINUOUS = 1012,
    CT_2_JUNKO_0_EXCESS_1_CONTINUOUS = 2001,
    CT_2_JUNKO_0_EXCESS_2_CONTINUOUS = 2002, 
    CT_2_JUNKO_0_EXCESS_3_CONTINUOUS = 2003,
    CT_2_JUNKO_0_EXCESS_4_CONTINUOUS = 2004,
    CT_2_JUNKO_0_EXCESS_5_CONTINUOUS = 2005,
    CT_2_JUNKO_0_EXCESS_6_CONTINUOUS = 2006,
    CT_2_JUNKO_0_EXCESS_7_CONTINUOUS = 2007,
    CT_2_JUNKO_0_EXCESS_8_CONTINUOUS = 2008,
    CT_3_JUNKO_0_EXCESS_1_CONTINUOUS = 3001,
    CT_3_JUNKO_0_EXCESS_2_CONTINUOUS = 3002,
    CT_3_JUNKO_0_EXCESS_3_CONTINUOUS = 3003,
    CT_3_JUNKO_0_EXCESS_4_CONTINUOUS = 3004,
    CT_3_JUNKO_0_EXCESS_5_CONTINUOUS = 3005,
    CT_4_JUNKO_1_EXCESS_0_CONTINUOUS = 4100,
    CT_4_JUNKO_1_EXCESS_1_CONTINUOUS = 4101,
    CT_4_JUNKO_1_EXCESS_2_CONTINUOUS = 4102,
    CT_4_JUNKO_1_EXCESS_3_CONTINUOUS = 4103,
    CT_4_JUNKO_1_EXCESS_4_CONTINUOUS = 4104,
    CT_6_JUNKO_0_EXCESS_1_CONTINUOUS = 6001
}

CardRule.CompareResult = {
    CR_UNABLE_COMPARE = 0,
    CR_EQUAL = 1,
    CR_MORE_THAN = 2,
    CR_LESS_THAN = 3
}

function CardRule:canJokerDanYa2()
    return self.m_bJokerDanYa2
end

function CardRule:setJokerDanYa2(m_bJokerDanYa2Temp)
    self.m_bJokerDanYa2 = m_bJokerDanYa2Temp
end

function CardRule:IsBomb(cardType)
    local cardTypeEnum = cardType:GetCardTypeEnum()
   
    return cardTypeEnum >= CardRule.CardType.CT_3_JUNKO_0_EXCESS_1_CONTINUOUS and cardTypeEnum <= CardRule.CardType.CT_6_JUNKO_0_EXCESS_1_CONTINUOUS
end

function CardRule:GetBiggerCardType_Single(cardBox, jokerCnt, joker, baseCardType, cardsComb, tickCnt,isLast)
    local startPos = baseCardType.m_nEndPower
    local CTSize = baseCardType:GetCardTypeCTSize()
	
	local nowTickCnt = 0
	
	local keyCount = 0
    local singleCard = false
	local singleKey = 0
    for key, cards in pairs(cardBox) do
        keyCount = keyCount + 1
        if #cards == 1 then
		    singleKey = key
            singleCard = true
        else
            singleCard = false
            break
        end
    end
	if baseCardType:GetCardTypeEnum() == 0 and keyCount == 1 and singleCard and jokerCnt == 1 and isLast  then
		table.insert(cardsComb, cardBox[singleKey][1])					
        return true
    end	
	 
	if baseCardType:GetCardTypeEnum() == 0 then 
	for i=Card.CP_3, Card.CP_2 do
	
		if cardBox[i] ~= nil and #cardBox[i] == 1 then
			    nowTickCnt = nowTickCnt + 1
                if tickCnt <= nowTickCnt then
					
                    table.insert(cardsComb, cardBox[i][1])					
                    return true
                end
		end
		
	end
	
	tickCnt = tickCnt - nowTickCnt
	return self:GetBiggerCardType_Pair(cardBox, jokerCnt, joker, baseCardType, cardsComb, tickCnt)
	end
    if baseCardType.ucNJunko ~= 1 or CTSize > 1 then
        return false
    end	
   
    -- 最大是2 只有王能压2时才能压
    if startPos == Card.CP_2 then
        if self:canJokerDanYa2() then
            if cardBox[Card.CP_SJ] ~= nil then
                nowTickCnt = nowTickCnt + 1
                if tickCnt <= nowTickCnt then
                    table.insert(cardsComb, cardBox[Card.CP_SJ][1])
					
                    return true
                end
            end
            if cardBox[Card.CP_BJ] ~= nil then
                nowTickCnt = nowTickCnt + 1
                if tickCnt <= nowTickCnt then
                    table.insert(cardsComb, cardBox[Card.CP_BJ][1])
                    return true
                end
            end
			return self:GetBiggerCardType_Boom(cardBox, jokerCnt, joker, baseCardType, cardsComb, tickCnt - nowTickCnt)
        else
            return self:GetBiggerCardType_Boom(cardBox, jokerCnt, joker, baseCardType, cardsComb, tickCnt - nowTickCnt)
        end
    end

    if cardBox[startPos + 1] ~= nil and startPos < Card.CP_2 then
        nowTickCnt = nowTickCnt + 1
        if tickCnt <= nowTickCnt then
            table.insert(cardsComb, cardBox[startPos + 1][1])
			
            return true
        end
    end

    if startPos + 1 ~= Card.CP_2 and  cardBox[Card.CP_2] ~= nil and startPos < Card.CP_2 then
        nowTickCnt = nowTickCnt + 1
        if tickCnt <= nowTickCnt then
            table.insert(cardsComb, cardBox[Card.CP_2][1])
            return true
        end
    end

    -- 转炸弹tick 剩余次数 tickCnt - nowTickCnt
    return self:GetBiggerCardType_Boom(cardBox, jokerCnt, joker, baseCardType, cardsComb, tickCnt - nowTickCnt)
end

function CardRule:GetBiggerCardType_ConPair(cardBox, jokerCnt, joker, baseCardType, cardsComb, tickCnt)
    local startPos = baseCardType.m_nEndPower
    local CTSize = baseCardType:GetCardTypeCTSize()
	
	local nowTickCnt = 0
	if baseCardType:GetCardTypeEnum() == 0 then 
	for i=Card.CP_3, Card.CP_K do

		if cardBox[i] ~= nil and #cardBox[i] == 2 and cardBox[i+1] ~= nil and #cardBox[i+1] == 2 then
			    nowTickCnt = nowTickCnt + 1
                if tickCnt <= nowTickCnt then
                    table.insert(cardsComb, cardBox[i][1])	
					table.insert(cardsComb, cardBox[i][2])		
                    table.insert(cardsComb, cardBox[i+1][1])	
					table.insert(cardsComb, cardBox[i+1][2])					
                    return true
                end
		end

	end
	
	for i=Card.CP_3, Card.CP_Q do
				if cardBox[i] ~= nil and #cardBox[i] == 2 and cardBox[i+1] ~= nil and #cardBox[i+1] == 2 and cardBox[i+2] ~= nil and #cardBox[i+2] == 2 then
			    nowTickCnt = nowTickCnt + 1
                if tickCnt <= nowTickCnt then
					
                    table.insert(cardsComb, cardBox[i][1])	
					table.insert(cardsComb, cardBox[i][2])		
                    table.insert(cardsComb, cardBox[i+1][1])	
					table.insert(cardsComb, cardBox[i+1][2])
                    table.insert(cardsComb, cardBox[i+2][1])	
					table.insert(cardsComb, cardBox[i+2][2])					
                    return true
                end
		end
	end
	
	for i=Card.CP_3, Card.CP_J do
		if cardBox[i] ~= nil and #cardBox[i] == 2 and cardBox[i+1] ~= nil and #cardBox[i+1] == 2 and cardBox[i+2] ~= nil and #cardBox[i+2] == 2 and cardBox[i+3] ~= nil and #cardBox[i+3] == 2 then
			    nowTickCnt = nowTickCnt + 1
                if tickCnt <= nowTickCnt then
					
                    table.insert(cardsComb, cardBox[i][1])	
					table.insert(cardsComb, cardBox[i][2])		
                    table.insert(cardsComb, cardBox[i+1][1])	
					table.insert(cardsComb, cardBox[i+1][2])
                    table.insert(cardsComb, cardBox[i+2][1])	
					table.insert(cardsComb, cardBox[i+2][2])
                    table.insert(cardsComb, cardBox[i+3][1])	
					table.insert(cardsComb, cardBox[i+3][2])					
                    return true
                end
		end	
	end
	tickCnt = tickCnt - nowTickCnt
	return self:GetBiggerCardType_Straight(cardBox, jokerCnt, joker, baseCardType, cardsComb, tickCnt)
	end
	
	
    if baseCardType:GetCardTypeMainNum() ~= 2 or CTSize < 2 then
        return false
    end
    
    local nextPower = startPos + 1

    local conPair = {}
    local lackCnt = 0

    if nextPower < Card.CP_A then
        for j = 0, CTSize - 1 do
            local currentPower = nextPower + j
            if cardBox[currentPower] ~= nil and #cardBox[currentPower] >= 2 then
                for k = 1, 2 do
                    table.insert(conPair, cardBox[currentPower][k])
                end
            elseif cardBox[currentPower] ~= nil and #cardBox[currentPower] == 1 then
                table.insert(conPair, cardBox[currentPower][1])
                lackCnt = lackCnt + 1
            else
                lackCnt = lackCnt + 2
            end
        end
    end

    if lackCnt > jokerCnt then
        return false
    end

	if lackCnt == 0 then
		nowTickCnt = nowTickCnt + 1
		if tickCnt <= nowTickCnt then
			for i = 1, #conPair do
				table.insert(cardsComb, conPair[i])
			end
			return true
		end

		if jokerCnt == 1 then
			local powers = {}
			for i = 1, #conPair do
				local power = conPair[i]:GetPower()
				if not powers[power] then
					powers[power] = true
					nowTickCnt = nowTickCnt + 1
					if tickCnt <= nowTickCnt then
						for j = 1, i do
							table.insert(cardsComb, conPair[j])
						end
						
						table.insert(cardsComb, joker[1])
						for j = i+2, #conPair do
							table.insert(cardsComb, conPair[j])
						end
						
						return true
					end
				end
			end
		end

		if jokerCnt == 2 then
			local powersSj = {}
			local powersBj = {}
			for i = 1, #conPair do
				local power = conPair[i]:GetPower()
				if not powersSj[power] then
					powersSj[power] = true
					nowTickCnt = nowTickCnt + 1
					if tickCnt <= nowTickCnt then
						for j = 1, i-1 do
							table.insert(cardsComb, conPair[j])
						end
						
						table.insert(cardsComb, joker[1])
						for j = i+1, #conPair do
							table.insert(cardsComb, conPair[j])
						end
						
						return true
					end
				elseif not powersBj[power] then
					powersBj[power] = true
					nowTickCnt = nowTickCnt + 1
					if tickCnt <= nowTickCnt then
						for j = 1, i-1 do
							table.insert(cardsComb, conPair[j])
						end
						table.insert(cardsComb, joker[2])
						for j = i+1, #conPair do
							table.insert(cardsComb, conPair[j])
						end
						return true
					end
				end
			end

			for i = 0, CTSize - 1 do
				for j = i + 1, CTSize - 1 do
					nowTickCnt = nowTickCnt + 1
					if tickCnt <= nowTickCnt then
						local minIndex = math.min(i, j) * 2 + 1
						local maxIndex = math.max(i, j) * 2
						for k = 1, minIndex do
							table.insert(cardsComb, conPair[k])
						end
						table.insert(cardsComb, joker[1])
						for k = minIndex + 2, maxIndex do
							table.insert(cardsComb, conPair[k])
						end
						table.insert(cardsComb, joker[2])
						for k = maxIndex + 2, #conPair do
							table.insert(cardsComb, conPair[k])
						end
						return true
					end
				end
			end
		end
	end


	-- 缺一张
	if lackCnt == 1 then
		-- 1个财神补一张
		for i = 1, #joker do
			nowTickCnt = nowTickCnt + 1
			if tickCnt <= nowTickCnt then
				for j = 1, #conPair do
					table.insert(cardsComb, conPair[j])
				end
				table.insert(cardsComb, joker[i])
				return true
			end
		end
		-- 如果有2个财神，则先用一个补位，剩下一个遍历使用
		if jokerCnt == 2 then
			for i = 1, #conPair do
				nowTickCnt = nowTickCnt + 1
				if tickCnt <= nowTickCnt then
					for j = 1, i - 1 do
						table.insert(cardsComb, conPair[j])
					end
					for j = i + 1, #conPair do
						table.insert(cardsComb, conPair[j])
					end
					for j = 1, #joker do
						table.insert(cardsComb, joker[j])
					end
					return true
				end
			end
		end
	end

	-- 缺两张
	if lackCnt == 2 then
		nowTickCnt = nowTickCnt + 1
		if tickCnt <= nowTickCnt then
			for i = 1, #conPair do
				table.insert(cardsComb, conPair[i])
			end
			for i = 1, #joker do
				table.insert(cardsComb, joker[i])
			end
			return true
		end
	end


    -- 由于处理逻辑复杂性和C++在使用迭代器和set容器的特定操作，这里可能需要适应Lua语言特性和业务逻辑进行更多自定义修改和优化。

    -- 转炸弹tick 剩余次数 tickCnt - nowTickCnt
    return self:GetBiggerCardType_Boom(cardBox, jokerCnt, joker, baseCardType, cardsComb, tickCnt - nowTickCnt)
end


function CardRule:GetBiggerCardType_Pair(cardBox, jokerCnt, joker, baseCardType, cardsComb, tickCnt)
    local startPos = baseCardType.m_nEndPower
    local CTSize = baseCardType:GetCardTypeCTSize()
	local nowTickCnt = 0
	if baseCardType:GetCardTypeEnum() == 0 then 
	for i=Card.CP_3, Card.CP_2 do
		if cardBox[i] ~= nil and #cardBox[i] == 2 then
			    nowTickCnt = nowTickCnt + 1
                if tickCnt <= nowTickCnt then
                    table.insert(cardsComb, cardBox[i][1])	
					table.insert(cardsComb, cardBox[i][2])				
                    return true
                end
		end
		
		if cardBox[i] ~= nil and #cardBox[i] == 1 and jokerCnt >= 1 then
			    nowTickCnt = nowTickCnt + 1
                if tickCnt <= nowTickCnt then
                    table.insert(cardsComb, cardBox[i][1])	
					table.insert(cardsComb, joker[1])		
                    return true
                end
		end
	end
	tickCnt = tickCnt - nowTickCnt
	return self:GetBiggerCardType_ConPair(cardBox, jokerCnt, joker, baseCardType, cardsComb, tickCnt)
	end
	
	
    if baseCardType:GetCardTypeMainNum() ~= 2 or CTSize > 1 then
        return false
    end

    local nextPower = startPos + 1


    -- 对2最大
    if startPos == Card.CP_2 then
        return false
    end

    -- 有完整的对能压
    if cardBox[nextPower] and #cardBox[nextPower] >= 2 then
        nowTickCnt = nowTickCnt + 1
        if tickCnt <= nowTickCnt then
            table.insert(cardsComb, cardBox[nextPower][1])
            table.insert(cardsComb, cardBox[nextPower][2])
            return true
        end
    end
	
	
    -- 看能不能凑成对2
    if nextPower ~= Card.CP_2 and cardBox[Card.CP_2] and #cardBox[Card.CP_2] >= 2 then
        nowTickCnt = nowTickCnt + 1
        if tickCnt <= nowTickCnt then
            table.insert(cardsComb, cardBox[Card.CP_2][1])
            table.insert(cardsComb, cardBox[Card.CP_2][2])
            return true
        end
    end

    -- 1张财神凑对
    if cardBox[nextPower] and #cardBox[nextPower] >= 1 and jokerCnt >= 1 then
        for i = 1, #joker do
            nowTickCnt = nowTickCnt + 1
            if tickCnt <= nowTickCnt then
                table.insert(cardsComb, cardBox[nextPower][1])
                table.insert(cardsComb, joker[i])
                return true
            end
        end
    end


    -- 财神凑对2
    if nextPower ~= Card.CP_2 and cardBox[Card.CP_2] and jokerCnt > 0 then
        nowTickCnt = nowTickCnt + 1
        if tickCnt <= nowTickCnt then
            table.insert(cardsComb, cardBox[Card.CP_2][1])
            table.insert(cardsComb, joker[1])
            return true
        end
    end

    -- 转炸弹tick 剩余次数 tickCnt - nowTickCnt
    return self:GetBiggerCardType_Boom(cardBox, jokerCnt, joker, baseCardType, cardsComb, tickCnt - nowTickCnt)
end

function CardRule:GetBiggerCardType_Straight(cardBox, jokerCnt, joker, baseCardType, cardsComb, tickCnt)
    local startPos = baseCardType.m_nEndPower
    local CTSize = baseCardType:GetCardTypeCTSize()
	
	local nowTickCnt = 0
	if baseCardType:GetCardTypeEnum() == 0 then 
	local startIndex = nil
	local endIndex = nil
	local currentLength = 0

for i = Card.CP_3, Card.CP_A do
    if cardBox[i] ~= nil and #cardBox[i] == 1 then  -- 假设每个对应index的值存的是单张牌
        if startIndex == nil then
            startIndex = i  -- 开始新的连续序列
            currentLength = 1
        else
            currentLength = currentLength + 1
        end
        
        endIndex = i
        
        -- 检查是否已达到最后一个可能的连续位置
        if i == Card.CP_A or (cardBox[i + 1] == nil or #cardBox[i + 1] ~= 1) then
            if currentLength >= 3 then  -- 只对长度为3或更多的序列执行操作
			        nowTickCnt = nowTickCnt + 1
				if tickCnt <= nowTickCnt then
                for j = startIndex, endIndex do
                    table.insert(cardsComb, cardBox[j][1])  -- 假设每个存储位置只有一个牌对象
                end
				return true
				end
            end
        end
    else
        -- 中断当前的连续序列
        startIndex = nil
        endIndex = nil
        currentLength = 0
    end
end
	tickCnt = tickCnt - nowTickCnt
	return self:GetBiggerCardType_Boom(cardBox, jokerCnt, joker, baseCardType, cardsComb, tickCnt)
	end
	
    -- 牌型不匹配
    if baseCardType:GetCardTypeMainNum() ~= 1 or CTSize < 3 then
        return false
    end


    local straightList = {}
    local lackCnt = 0
    local nextPower = startPos + 1
	if startPos + CTSize > Card.CP_A then 
		 return self:GetBiggerCardType_Boom(cardBox, jokerCnt, joker, baseCardType, cardsComb, tickCnt - nowTickCnt)
	end
    -- 从上一手的power+1 加上CTSize 取出存在放到list中
    if nextPower < Card.CP_K then
        for j = 0, CTSize - 1 do
            local currentPower = nextPower + j
            if cardBox[currentPower] ~= nil then
                table.insert(straightList, cardBox[currentPower][1])
            else
                lackCnt = lackCnt + 1
            end
        end
    end
    if lackCnt > jokerCnt then
        return false
    end

    -- 手中有一整套能压的顺子
    if lackCnt == 0 and #straightList > 0 then
        nowTickCnt = nowTickCnt + 1
        if tickCnt <= nowTickCnt then
            for _, card in ipairs(straightList) do
                table.insert(cardsComb, card)
            end
            return true
        end
    end
    
    -- 使用joker来补全顺子
    function fillWithJokers(jokerCountUsed)
        local isFirst = true
        for _, card in ipairs(straightList) do
            if jokerCountUsed > 0 and isFirst then
                table.insert(cardsComb, joker[1])
                jokerCountUsed = jokerCountUsed - 1
                isFirst = false
            end
            table.insert(cardsComb, card)
        end
        if jokerCountUsed > 0 then
            table.insert(cardsComb, joker[2])
        end
        return true
    end
    
    -- 缺一张牌或多张牌
    if lackCnt > 0 and lackCnt <= jokerCnt then
        nowTickCnt = nowTickCnt + 1
        if tickCnt <= nowTickCnt then
            return fillWithJokers(lackCnt)
        end
    end

    -- 转炸弹tick剩余次数 tickCnt - nowTickCnt
    return self:GetBiggerCardType_Boom(cardBox, jokerCnt, joker, baseCardType, cardsComb, tickCnt - nowTickCnt)
end

function CardRule:GetBiggerCardType_Boom(cardBox, jokerCnt, joker, baseCardType, cardsComb, tickCnt)
    local nowTickCnt = 0
    local boomPower = baseCardType.m_nBoomPower
    local endPower = baseCardType.m_nEndPower
    -- 牌型不匹配
    if not self:IsBomb(baseCardType) then
        boomPower = Card.CBOOM_NONE1
        endPower = Card.CP_NONE1
    end
    local nextPower = endPower + 1
	
	-- 0王
    for i = boomPower, Card.CBOOM_6_WITH_JOKER do
		for j = Card.CP_3, Card.CP_2 do
            if i == Card.CBOOM_3 and cardBox[j] and #cardBox[j] == 3 and (i > boomPower or j >= nextPower) then
                nowTickCnt = nowTickCnt + 1
                if tickCnt <= nowTickCnt then
                    for n = 1, 3 do
                        table.insert(cardsComb, cardBox[j][n])
                    end
                    return true
                end
            end
			
            if i == Card.CBOOM_4 and cardBox[j] and #cardBox[j] == 4 and (i > boomPower or j >= nextPower) then
                nowTickCnt = nowTickCnt + 1
                if tickCnt <= nowTickCnt then
                    for n = 1, 4 do
                        table.insert(cardsComb, cardBox[j][n])
                    end
                    return true
                end
            end
			
		end
	end
	
	-- 1王
    for i = boomPower, Card.CBOOM_6_WITH_JOKER do
		for j = Card.CP_3, Card.CP_2 do
			if i == Card.CBOOM_3_WITH_JOKER and jokerCnt >= 1 and cardBox[j] and #cardBox[j] == 2 and (i > boomPower or j >= nextPower) then
                nowTickCnt = nowTickCnt + 1
				
                if tickCnt <= nowTickCnt then
                    for n = 1, 2 do
                        table.insert(cardsComb, cardBox[j][n])
                    end
                    table.insert(cardsComb, joker[1])
                    return true
                end
            end

            if i == Card.CBOOM_4_WITH_JOKER and jokerCnt >= 1 and cardBox[j] and #cardBox[j] == 3 and (i > boomPower or j >= nextPower) then
				
                nowTickCnt = nowTickCnt + 1
                if tickCnt <= nowTickCnt then
                    for n = 1, 3 do
                        table.insert(cardsComb, cardBox[j][n])
                    end
                    table.insert(cardsComb, joker[1])
                    return true
                end
            end			

            if i == Card.CBOOM_5_WITH_JOKER and jokerCnt >= 1 and cardBox[j] and #cardBox[j] == 4 and (i > boomPower or j >= nextPower) then
                nowTickCnt = nowTickCnt + 1
                if tickCnt <= nowTickCnt then
                    for n = 1, 4 do
                        table.insert(cardsComb, cardBox[j][n])
                    end
                    table.insert(cardsComb, joker[1])
                    return true
                end
            end			
		end
	end	
	
	-- 2王
    for i = boomPower, Card.CBOOM_6_WITH_JOKER do
	
		
		for j = Card.CP_3, Card.CP_2 do
			if i == Card.CBOOM_3_WITH_JOKER and jokerCnt >= 2 and cardBox[j] and #cardBox[j] == 1 and (i > boomPower or j >= nextPower) then
                nowTickCnt = nowTickCnt + 1
				
                if tickCnt <= nowTickCnt then
                    table.insert(cardsComb, cardBox[j][1])
                    table.insert(cardsComb, joker[1])
					 table.insert(cardsComb, joker[2])
                    return true
                end
            end

			if i == Card.CBOOM_4_WITH_JOKER and jokerCnt >= 2 and cardBox[j] and #cardBox[j] == 2 and (i > boomPower or j >= nextPower) then
				
                nowTickCnt = nowTickCnt + 1
                if tickCnt <= nowTickCnt then
                    for n = 1, 2 do
                        table.insert(cardsComb, cardBox[j][n])
                    end
                    table.insert(cardsComb, joker[1])
					table.insert(cardsComb, joker[2])
                    return true
                end
            end			
		end

		if i == Card.CBOOM_JOKER and jokerCnt >= 2  and  i > boomPower then
			nowTickCnt = nowTickCnt + 1
			if tickCnt <= nowTickCnt then
				table.insert(cardsComb, joker[1])
				table.insert(cardsComb, joker[2])
				return true
			end
		end		

		for j = Card.CP_3, Card.CP_2 do
			if i == Card.CBOOM_5_WITH_JOKER and jokerCnt >= 2 and cardBox[j] and #cardBox[j] == 3 and (i > boomPower or j >= nextPower) then
                nowTickCnt = nowTickCnt + 1
                if tickCnt <= nowTickCnt then
                    for n = 1, 3 do
                        table.insert(cardsComb, cardBox[j][n])
                    end
                    table.insert(cardsComb, joker[1])
					table.insert(cardsComb, joker[2])
                    return true
                end
            end

            if i == Card.CBOOM_6_WITH_JOKER and jokerCnt >= 2 and cardBox[j] and #cardBox[j] == 4 and (i > boomPower or j >= nextPower) then
                nowTickCnt = nowTickCnt + 1
                if tickCnt <= nowTickCnt then
                    for n = 1, 4 do
                        table.insert(cardsComb, cardBox[j][n])
                    end
                    table.insert(cardsComb, joker[1])
                    table.insert(cardsComb, joker[2])
                    return true
                end
            end			
		end
	end	

    return false
end

function CardRule:GetBiggerCardType_Comb(cardBox, baseCardType, cardsComb, tickCnt,isLast)
    local main = baseCardType:GetCardTypeMainNum()
    local jokerCnt = 0
    local joker = {}

    -- 收集财神牌并计数
    for power, cards in pairs(cardBox) do
        if power > Card.CP_2 then
            jokerCnt = jokerCnt + #cards
            for _, card in ipairs(cards) do
                table.insert(joker, card)
            end
        end
    end
	
	-- 首出提牌
	if baseCardType:GetCardTypeEnum() == 0 then 
		self:GetBiggerCardType_First(cardBox, jokerCnt, joker, baseCardType, cardsComb, tickCnt,isLast)
        return true
	end

    -- 检查是否为炸弹类型
    if self:IsBomb(baseCardType) then
        return self:GetBiggerCardType_Boom(cardBox, jokerCnt, joker, baseCardType, cardsComb, tickCnt)
    end

    -- 检查能否找到更大的顺子
    if self:GetBiggerCardType_Straight(cardBox, jokerCnt, joker, baseCardType, cardsComb, tickCnt) then
        return true
    end

    -- 检查能否找到更大的连对
    if self:GetBiggerCardType_ConPair(cardBox, jokerCnt, joker, baseCardType, cardsComb, tickCnt) then
        return true
    end

    -- 检查能否找到更大的对子
    if self:GetBiggerCardType_Pair(cardBox, jokerCnt, joker, baseCardType, cardsComb, tickCnt) then
        return true
    end

    -- 检查能否找到更大的单张
    if self:GetBiggerCardType_Single(cardBox, jokerCnt, joker, baseCardType, cardsComb, tickCnt,isLast) then
        return true
    end

    -- 若之前的牌型无法匹配，再尝试查找炸弹
    if self:GetBiggerCardType_Boom(cardBox, jokerCnt, joker, baseCardType, cardsComb, tickCnt) then
        return true
    end

    return false
end

function CardRule:GetBiggerCardType_First(cardBox, jokerCnt, joker, baseCardType, cardsComb, tickCnt,isLast)
	-- 找出所有可能性
	local result = {}
	local tearResult = {}
	local jokerResult = {}
	local boomResult = {}
	-- 所有单牌
	self:GetFirst_Single(cardBox, jokerCnt, joker, baseCardType,isLast,result,tearResult)
	-- 所有对子
	self:GetFirst_Pair(cardBox, jokerCnt, joker, baseCardType,result,tearResult,jokerResult)
	-- 所有连对
	self:GetFirst_ConPair(cardBox, jokerCnt, joker, baseCardType,result,tearResult,jokerResult)
	-- 所有顺子
	self:GetFirst_Straight(cardBox, jokerCnt, joker, baseCardType,result,tearResult,jokerResult)
	-- 所有炸弹
	self:GetFirst_Boom(cardBox, jokerCnt, joker, baseCardType,boomResult)
	-- 排序
	
	-- for i=1,#result do
	-- local comb = {}
	-- comb = UCards2Char(result[i],#result[i])
	--  print("GetBiggerCardType_First tick:" .. tickCnt .. "  result :" .. table.concat(comb,","))
	-- end
	 
	-- for i=1,#tearResult do
	-- local comb = {}
	-- comb = UCards2Char(tearResult[i],#tearResult[i])
	 -- print("GetBiggerCardType_First tick:" .. tickCnt .. "  tearResult :" .. table.concat(comb,","))
	-- end
	 
	-- for i=1,#jokerResult do
	-- local comb = {}
	-- comb = UCards2Char(jokerResult[i],#jokerResult[i])
	 -- print("GetBiggerCardType_First tick:" .. tickCnt .. "  jokerResult :" .. table.concat(comb,","))
	-- end
	 
	-- for i=1,#boomResult do
	-- local comb = {}
	-- comb = UCards2Char(boomResult[i],#boomResult[i])
	 -- print("GetBiggerCardType_First tick:" .. tickCnt .. "  boomResult :" .. table.concat(comb,","))
	-- end
	
	local totoalResult = {}
	
	for _, comb in ipairs(result) do
		table.insert(totoalResult, comb)
	end	
	for _, comb in ipairs(tearResult) do
		table.insert(totoalResult, comb)
	end	
	for _, comb in ipairs(jokerResult) do
		table.insert(totoalResult, comb)
	end	
	for _, comb in ipairs(boomResult) do
		table.insert(totoalResult, comb)
	end		
	if tickCnt <= #totoalResult then 
		for _, card in ipairs(totoalResult[tickCnt]) do
			table.insert(cardsComb, card)
		end
	end
	
end

function CardRule:GetFirst_Single(cardBox, jokerCnt, joker, baseCardType,isLast,result,tearResult)
	if baseCardType:GetCardTypeEnum() == 0 and keyCount == 1 and singleCard and jokerCnt == 1 and isLast  then
		local comb = {}
		table.insert(comb, cardBox[singleKey][1])
		table.insert(result,comb)
    end	
	 
	if baseCardType:GetCardTypeEnum() == 0 then 
	for i=Card.CP_3, Card.CP_2 do
	
		if cardBox[i] ~= nil and #cardBox[i] == 1 then
			local comb = {}
            table.insert(comb, cardBox[i][1])
			table.insert(result,comb)			
		end
		
		if cardBox[i] ~= nil and #cardBox[i] > 1 then
			local comb = {}
            table.insert(comb, cardBox[i][1])
			table.insert(tearResult,comb)			
		end
		
	end
	end
end
function CardRule:GetFirst_Pair(cardBox, jokerCnt, joker, baseCardType,result,tearResult,jokerResult)
	if baseCardType:GetCardTypeEnum() == 0 then 
	for i=Card.CP_3, Card.CP_2 do
	    -- 不拆
		if cardBox[i] ~= nil and #cardBox[i] == 2 then
				local comb = {}
                table.insert(comb, cardBox[i][1])	
			    table.insert(comb, cardBox[i][2])
				table.insert(result,comb)	

		end

	    -- 无财神 拆
		if cardBox[i] ~= nil and #cardBox[i] > 2 then
				local comb = {}
                table.insert(comb, cardBox[i][1])	
			    table.insert(comb, cardBox[i][2])
				table.insert(tearResult,comb)	

		end		
		
		-- 财神拆
		if cardBox[i] ~= nil and #cardBox[i] == 1 and jokerCnt >= 1 then
				local comb = {}
                    table.insert(comb, cardBox[i][1])	
					table.insert(comb, joker[1])	
					table.insert(jokerResult,comb)						
            
                
		end
	end
	end
end

function CardRule:GetFirst_ConPair(cardBox, jokerCnt, joker, baseCardType,result,tearResult,jokerResult)
	if baseCardType:GetCardTypeEnum() == 0 then 
	-- 不拆
	for i=Card.CP_3, Card.CP_K do
		local comb = {}
		local con = 0
		for j=0,10 do 
			if i+j > Card.CP_A then
				break
			end
			if cardBox[i+j] ~= nil and #cardBox[i+j] == 2 then
				table.insert(comb, cardBox[i+j][1])	
			    table.insert(comb, cardBox[i+j][2])
				con = con +1
			else
				break
			end
			
			if con >= 2 then
			local tmpComb = {}
				for _, card in ipairs(comb) do
					table.insert(tmpComb, card)
				end			
				table.insert(result,tmpComb)		
			end
			
		end
	end
	
	-- 拆
	for i=Card.CP_3, Card.CP_K do
		local comb = {}
		local con = 0
		local bChai = false
		for j=0,10 do 
			if i+j > Card.CP_A then
				break
			end
			if cardBox[i+j] ~= nil and #cardBox[i+j] >= 2 then
				table.insert(comb, cardBox[i+j][1])
			    table.insert(comb, cardBox[i+j][2])
				con = con +1
				if #cardBox[i+j] > 2 then
					bChai = true
				end
			else
				break
			end
			
			if con >= 2 and bChai then
			local tmpComb = {}
				for _, card in ipairs(comb) do
					table.insert(tmpComb, card)
				end
				table.insert(tearResult,tmpComb)		
			end
			
		end
	end
	-- 财 拆
	for i=Card.CP_3, Card.CP_K do
		local comb = {}
		local con = 0
		local size = false
		local unUseJoker = jokerCnt
		for j=0,10 do 
			if i+j > Card.CP_A then
				break
			end
			if cardBox[i+j] ~= nil and #cardBox[i+j] + unUseJoker >= 2 then
				if #cardBox[i+j] >= 2 then
					table.insert(comb, cardBox[i+j][1])	
			        table.insert(comb, cardBox[i+j][2])
				elseif #cardBox[i+j] == 1 then
					table.insert(comb, cardBox[i+j][1])	
					table.insert(comb, joker[unUseJoker])
					unUseJoker = unUseJoker - 1
				else
					table.insert(comb, joker[1])
					table.insert(comb, joker[2])
					unUseJoker = unUseJoker - 2
				end
				
				con = con +1
			elseif cardBox[i+j] == nil and  unUseJoker >= 2 then 
					table.insert(comb, joker[1])
					table.insert(comb, joker[2])
					unUseJoker = unUseJoker - 2
					con = con +1
			else	
				break
			end
			
			if con >= 2 and unUseJoker < jokerCnt and (con - jokerCnt + unUseJoker) > 0 then
			local tmpComb = {}
			    for _, card in ipairs(comb) do
					table.insert(tmpComb, card)
				end
				table.sort(tmpComb, function(a, b)
					return a:GetPower() < b:GetPower()  
				end)
				-- 检查 jokerResult 中是否已存在相同的组合
				local found = false
				for _, existingComb in ipairs(jokerResult) do
					if #existingComb == #tmpComb then
						local matches = true
						for i = 1, #tmpComb do
							if tmpComb[i] ~= existingComb[i] then
								matches = false
								break
							end
						end
						if matches then
							found = true
							break
						end
					end
				end
				    if not found then
						table.insert(jokerResult, tmpComb)
					end		
			end
			
			
		end

	end
	end
end


function CardRule:GetFirst_Straight(cardBox, jokerCnt, joker, baseCardType,result,tearResult,jokerResult)
	if baseCardType:GetCardTypeEnum() == 0 then 
	-- 不拆
	for i=Card.CP_3, Card.CP_K do
		local comb = {}
		local con = 0
		for j=0,10 do 
			if i+j > Card.CP_A then
				break
			end
			if cardBox[i+j] ~= nil and #cardBox[i+j] == 1 then
				table.insert(comb, cardBox[i+j][1])
				con = con +1
			else
				break
			end
			
			if con >= 3 then
			local tmpComb = {}
				for _, card in ipairs(comb) do
					table.insert(tmpComb, card)
				end			
				table.insert(result,tmpComb)		
			end
			
		end
	end
	
	-- 拆
	for i=Card.CP_3, Card.CP_K do
		local comb = {}
		local con = 0
		local bChai = false
		for j=0,10 do 
			if i+j > Card.CP_A then
				break
			end
			if cardBox[i+j] ~= nil and #cardBox[i+j] >= 1 then
				table.insert(comb, cardBox[i+j][1])
				con = con +1
				if #cardBox[i+j] > 1 then
					bChai = true
				end
			else
				break
			end
			
			if con >= 3 and bChai then
			local tmpComb = {}
				for _, card in ipairs(comb) do
					table.insert(tmpComb, card)
				end
				table.insert(tearResult,tmpComb)		
			end
			
		end
	end
	-- 财 拆
	for i=Card.CP_3, Card.CP_K do
		local comb = {}
		local con = 0
		local size = false
		local unUseJoker = jokerCnt
		for j=0,10 do 
			if i+j > Card.CP_A then
				break
			end
			if cardBox[i+j] ~= nil and #cardBox[i+j] + unUseJoker >= 1 then
				if #cardBox[i+j] >= 1 then
					table.insert(comb, cardBox[i+j][1])
				else
					table.insert(comb, joker[unUseJoker])
					unUseJoker = unUseJoker - 1
				end
				
				con = con +1
			elseif cardBox[i+j] == nil and  unUseJoker >= 1 then
				table.insert(comb, joker[unUseJoker])
				unUseJoker = unUseJoker - 1
				con = con +1			
			else 
				break
			end
			
			if con >= 3 and unUseJoker < jokerCnt and (con - jokerCnt + unUseJoker) > 1 then
			local tmpComb = {}
			    for _, card in ipairs(comb) do
					table.insert(tmpComb, card)
				end
				
				table.sort(tmpComb, function(a, b)
					return a:GetPower() < b:GetPower()  
				end)
				-- 检查 jokerResult 中是否已存在相同的组合
				local found = false
				for _, existingComb in ipairs(jokerResult) do
					if #existingComb == #tmpComb then
						local matches = true
						for i = 1, #tmpComb do
							if tmpComb[i] ~= existingComb[i] then
								matches = false
								break
							end
						end
						if matches then
							found = true
							break
						end
					end
				end
				    if not found then
						table.insert(jokerResult, tmpComb)
					end
			end
			
			
		end

	end
	end
end

function CardRule:GetFirst_Boom(cardBox, jokerCnt, joker, baseCardType,result)
	if baseCardType:GetCardTypeEnum() == 0 then 
	
	-- 0王
	for i = Card.CBOOM_3_WITH_JOKER, Card.CBOOM_6_WITH_JOKER do
		for j = Card.CP_3, Card.CP_2 do
            if i == Card.CBOOM_3 and cardBox[j] and #cardBox[j] == 3  then
					local comb = {}
                    for n = 1, 3 do
                        table.insert(comb, cardBox[j][n])
                    end
					table.insert(result, comb)
            end			
            if i == Card.CBOOM_4 and cardBox[j] and #cardBox[j] == 4 then
				local comb = {}
                    for n = 1, 4 do
                        table.insert(comb, cardBox[j][n])
                    end
					table.insert(result, comb)
            end			
		end
	end

	-- 1王
	for i = Card.CBOOM_3_WITH_JOKER, Card.CBOOM_6_WITH_JOKER do
		for j = Card.CP_3, Card.CP_2 do
			if i == Card.CBOOM_3_WITH_JOKER and jokerCnt >= 1 and cardBox[j] and #cardBox[j] == 2  then
					local comb = {}
                    for n = 1, 2 do
                        table.insert(comb, cardBox[j][n])
                    end
                    table.insert(comb, joker[1])
					table.insert(result, comb)
            end		

            if i == Card.CBOOM_4_WITH_JOKER and jokerCnt >= 1 and cardBox[j] and #cardBox[j] == 3  then
				local comb = {}
                    for n = 1, 3 do
                        table.insert(comb, cardBox[j][n])
                    end
                    table.insert(comb, joker[1])
					table.insert(result, comb)
            end		

            if i == Card.CBOOM_5_WITH_JOKER and jokerCnt >= 1 and cardBox[j] and #cardBox[j] == 4 then
				local comb = {}
                    for n = 1, 4 do
                        table.insert(comb, cardBox[j][n])
                    end
                    table.insert(comb, joker[1])
					table.insert(result, comb)
            end			
		end
	end
	
	-- 2王
	for i = Card.CBOOM_3_WITH_JOKER, Card.CBOOM_6_WITH_JOKER do
		for j = Card.CP_3, Card.CP_2 do
			if i == Card.CBOOM_3_WITH_JOKER and jokerCnt >= 2 and cardBox[j] and #cardBox[j] == 1  then
					local comb = {}
                    table.insert(comb, cardBox[j][1])
                    table.insert(comb, joker[1])
					table.insert(comb, joker[2])
					table.insert(result, comb)

            end	

			if i == Card.CBOOM_4_WITH_JOKER and jokerCnt >= 2 and cardBox[j] and #cardBox[j] == 2 then
				local comb = {}

                    for n = 1, 2 do
                        table.insert(comb, cardBox[j][n])
                    end
                    table.insert(comb, joker[1])
					table.insert(comb, joker[2])
					table.insert(result, comb)

            end			
		end
            if i == Card.CBOOM_JOKER and jokerCnt >= 2 then
			local comb = {}
                table.insert(comb, joker[1])
                table.insert(comb, joker[2])
				table.insert(result, comb)
            end
		for j = Card.CP_3, Card.CP_2 do
            if i == Card.CBOOM_5_WITH_JOKER and jokerCnt >= 2 and cardBox[j] and #cardBox[j] == 3 then
				local comb = {}
                    for n = 1, 3 do
                        table.insert(comb, cardBox[j][n])
                    end
                    table.insert(comb, joker[1])
					table.insert(comb, joker[2])
					table.insert(result, comb)
            end		
            if i == Card.CBOOM_6_WITH_JOKER and jokerCnt >= 2 and cardBox[j] and #cardBox[j] == 4  then
					local comb = {}
                    for n = 1, 4 do
                        table.insert(comb, cardBox[j][n])
                    end
                    table.insert(comb, joker[1])
                    table.insert(comb, joker[2])
					table.insert(result, comb)
            end			
		end
	end	

	end
end

function CardRule:FindCardTypeFromCardsSpecial(vOutCards, cardstype, lastCardType)
    if self:JudgeSpecCardType(vOutCards, cardstype, lastCardType,false) then
        return cardstype:GetCardTypeEnum()
    end

    cardstype:SetCardTypeEnum(0, 0, 0)
    return cardstype:GetCardTypeEnum()
end


function CardRule:JudgeSpecCardType(checkCards, cardstype, lastCardType,isLast)
    local vJokerCards = {}
    local vNormalCards = {}
    local haveJoker = false

    for i, card in ipairs(checkCards) do
        if card:GetID() == Card.CID_SJ or card:GetID() == Card.CID_BJ then
            haveJoker = true
            table.insert(vJokerCards, card)
        else
            table.insert(vNormalCards, card)
        end
    end

    if self:JudgeSpecCardType_Boom(checkCards, vJokerCards, vNormalCards, cardstype, lastCardType) then
        return true
    end

    if self:JudgeSpecCardType_Straight(checkCards, vJokerCards, vNormalCards, cardstype, lastCardType) then
        return true
    end

    if self:JudgeSpecCardType_ConPair(checkCards, vJokerCards, vNormalCards, cardstype, lastCardType) then
        return true
    end

    if self:JudgeSpecCardType_Pair(checkCards, vJokerCards, vNormalCards, cardstype, lastCardType) then
        return true
    end

    if self:JudgeSpecCardType_Single(checkCards, vJokerCards, vNormalCards, cardstype, lastCardType,isLast) then
        return true
    end

    return false
end


function CardRule:JudgeSpecCardType_Boom(checkCards, jokerCards, normalCards, cardstype, lastCardType)
    -- 普通牌数量0时，只能是王炸
    if #normalCards == 0 then
        if #jokerCards == 2 and jokerCards[1]:GetID() ~= jokerCards[2]:GetID() and lastCardType.m_nBoomPower < Card.CBOOM_JOKER then
            cardstype:SetCardTypeEnum(4, 1, 0)
            cardstype.m_nEndPower = Card.CP_BJ
            cardstype.m_nBoomPower = Card.CBOOM_JOKER
            cardstype.m_OrderOutCards = jokerCards
            return true
        end
        return false
    end

    local endPower = normalCards[1]:GetPower()
    for i, card in ipairs(normalCards) do
        if endPower ~= card:GetPower() then
            return false
        end
    end
  
    local bSuccess = false

    -- 3配王软炸
    if #jokerCards > 0 and (#jokerCards + #normalCards == 3) and lastCardType.m_nBoomPower <= Card.CBOOM_3_WITH_JOKER then
        if lastCardType.m_nBoomPower == Card.CBOOM_3_WITH_JOKER and lastCardType.m_nEndPower >= endPower then
            return false
        end
        
        cardstype:SetCardTypeEnum(4, 1, 0)
        cardstype.m_nEndPower = endPower
        cardstype.m_nBoomPower = Card.CBOOM_3_WITH_JOKER
        bSuccess = true
    end

    -- 3软炸
    if #normalCards == 3 and #jokerCards == 0 and lastCardType.m_nBoomPower <= Card.CBOOM_3 then
        if lastCardType.m_nBoomPower == Card.CBOOM_3 and lastCardType.m_nEndPower >= endPower then
            return false
        end
        
        cardstype:SetCardTypeEnum(4, 1, 0)
        cardstype.m_nEndPower = endPower
        cardstype.m_nBoomPower = Card.CBOOM_3
        bSuccess = true
    end

    -- 4配王硬炸
    if #jokerCards > 0 and (#jokerCards + #normalCards == 4) and lastCardType.m_nBoomPower <= Card.CBOOM_4_WITH_JOKER then
        if lastCardType.m_nBoomPower == Card.CBOOM_4_WITH_JOKER and lastCardType.m_nEndPower >= endPower then
            return false
        end
        
        cardstype:SetCardTypeEnum(4, 1, 0)
        cardstype.m_nEndPower = endPower
        cardstype.m_nBoomPower = Card.CBOOM_4_WITH_JOKER
        bSuccess = true
    end

    -- 4硬炸
    if #normalCards == 4 and #jokerCards == 0 and lastCardType.m_nBoomPower <= Card.CBOOM_4 then
        if lastCardType.m_nBoomPower == Card.CBOOM_4 and lastCardType.m_nEndPower >= endPower then
            return false
        end
        
        cardstype:SetCardTypeEnum(4, 1, 0)
        cardstype.m_nEndPower = endPower
        cardstype.m_nBoomPower = Card.CBOOM_4
        bSuccess = true
    end

    -- 5炸和6炸
	for bombSize = 5, 6 do
		if #jokerCards > 0 and (#jokerCards + #normalCards == bombSize) and lastCardType.m_nBoomPower <= Card["CBOOM_" .. bombSize .. "_WITH_JOKER"] then
        if lastCardType.m_nBoomPower == Card["CBOOM_" .. bombSize .. "_WITH_JOKER"] and lastCardType.m_nEndPower >= endPower then
            return false
        end
        
        cardstype:SetCardTypeEnum(4, 1, 0)
        cardstype.m_nEndPower = endPower
        cardstype.m_nBoomPower = Card["CBOOM_" .. bombSize .. "_WITH_JOKER"]
        bSuccess = true
    end
	end


    if bSuccess then
        local OrderOutCards = {}
        for _, card in ipairs(normalCards) do
            table.insert(OrderOutCards, card)
        end
        if #jokerCards > 0 then
            for _, card in ipairs(jokerCards) do
                table.insert(OrderOutCards, card)
            end
        end
        cardstype.m_OrderOutCards = OrderOutCards
    end

    return bSuccess
end

function CardRule:JudgeSpecCardType_Straight(checkCards, jokerCards, normalCards, cardstype, lastCardType)
    -- 顺子必须至少有3张牌
    if #checkCards < 3 then
        return false
    end

    -- 检查牌是否包含2或是否有相同的牌，这些都不能组成顺子
    local nPower = Card.CP_NONE1
    for _, card in ipairs(normalCards) do
        if card:GetPower() == Card.CP_2 then
            return false
        end
        if nPower == card:GetPower() then
            return false
        end
        nPower = card:GetPower()
    end

    local gap = 0
    local lastPower = 0
    table.sort(normalCards, function(a, b) return a:GetPower() < b:GetPower() end)

    for i = 1, #normalCards do
        if i > 1 then
            local diff = normalCards[i]:GetPower() - lastPower
            if diff > 1 then
                gap = gap + (diff - 1)
            elseif diff == 0 then
                return false
            end
        end
        lastPower = normalCards[i]:GetPower()
    end

    if gap > #jokerCards then
        return false
    end

    local endPower = normalCards[1]:GetPower()

    -- 如果前一手也是顺子且有相应的长度和逻辑匹配
    if lastCardType:GetCardTypeMainNum() == 1 and lastCardType:GetCardTypeCTSize() >= 3 and #checkCards == lastCardType:GetCardTypeCTSize() and lastCardType.m_nEndPower > 0 then
        if endPower > Card.CP_4 and (endPower - lastCardType.m_nEndPower == 2) and (gap < #jokerCards) then
            endPower = endPower - 1
        end
        local above = endPower + #checkCards - 1 - Card.CP_A
        if above > 0 or (endPower - lastCardType.m_nEndPower ~= 1) then
            return false
        end

        cardstype:SetCardTypeEnum(1, #checkCards, 0)
        cardstype.m_nEndPower = endPower
        cardstype.m_OrderOutCards = { unpack(normalCards) }
        for _, card in ipairs(jokerCards) do
            table.insert(cardstype.m_OrderOutCards, card)
        end
        return true
    end

    if lastCardType:GetCardTypeMainNum() == 0 then
        cardstype:SetCardTypeEnum(1, #checkCards, 0)
        cardstype.m_nEndPower = endPower
        cardstype.m_OrderOutCards = { unpack(normalCards) }
        for _, card in ipairs(jokerCards) do
            table.insert(cardstype.m_OrderOutCards, card)
        end
        return true
    end

    return false
end

function CardRule:JudgeSpecCardType_Pair(checkCards, jokerCards, normalCards, cardstype, lastCardType)
    -- 对子必须是2张牌
    if #checkCards ~= 2 then
        return false
    end

    -- 没有使用Joker时，必须是两张相同的普通牌
    if #jokerCards == 0 then
        if #normalCards == 2 and normalCards[1]:GetPower() ~= normalCards[2]:GetPower() then
            return false
        end
    elseif #jokerCards == 2 then
        -- 两个Joker不能组成对子
        return false
    end
			
    -- 如果上一手出的也是对子，且这一手的对子要大于上一手的对子
    if lastCardType:GetCardTypeMainNum() == 2 and lastCardType:GetCardTypeCTSize() <= 1 and lastCardType.m_nEndPower > 0 then
        if lastCardType.m_nEndPower == Card.CP_2 then
            return false
        end
		
        if normalCards[1]:GetPower() - lastCardType.m_nEndPower == 1 or normalCards[1]:GetPower() == Card.CP_2 then
            cardstype:SetCardTypeEnum(2, 1, 0)
            cardstype.m_nEndPower = normalCards[1]:GetPower()

            cardstype.m_OrderOutCards = {}
            for _, card in ipairs(normalCards) do
                table.insert(cardstype.m_OrderOutCards, card)
            end
            if #jokerCards > 0 then
                for _, card in ipairs(jokerCards) do
                    table.insert(cardstype.m_OrderOutCards, card)
                end
            end

            return true
        end
    end
    -- 如果是初始出牌，并满足对子条件
    if lastCardType:GetCardTypeMainNum() == 0 then
        cardstype:SetCardTypeEnum(2, 1, 0)
        cardstype.m_nEndPower = normalCards[1]:GetPower()

        cardstype.m_OrderOutCards = {}
        for _, card in ipairs(normalCards) do
            table.insert(cardstype.m_OrderOutCards, card)
        end
        if #jokerCards > 0 then
            for _, card in ipairs(jokerCards) do
                table.insert(cardstype.m_OrderOutCards, card)
            end
        end

        return true
    end

    return false
end

function CardRule:JudgeSpecCardType_Single(checkCards, jokerCards, normalCards, cardstype, lastCardType,isLast)
    -- 单张牌判断
    if #checkCards ~= 1 then
        return false
    end

    if lastCardType:GetCardTypeMainNum() > 1 or lastCardType:GetCardTypeCTSize() > 1 then
        return false
    end
	if #jokerCards == 1 and lastCardType:GetCardTypeMainNum() == 0 and isLast then
	    cardstype:SetCardTypeEnum(1, 1, 0)
        cardstype.m_nEndPower = jokerCards[1]:GetPower()

        cardstype.m_OrderOutCards = {}
        table.insert(cardstype.m_OrderOutCards, jokerCards[1])
		return true
	end
	
	
    -- 假设 m_bJokerDanYa2 是一个类级别的变量，表示单王可以打2
    if #jokerCards == 1 then
        if not self.m_bJokerDanYa2 then
            return false
        end
        if lastCardType.m_nEndPower ~= Card.CP_2 then
            return false
        else
            cardstype:SetCardTypeEnum(1, 1, 0)
            cardstype.m_nEndPower = jokerCards[1]:GetPower()

            cardstype.m_OrderOutCards = {}
            table.insert(cardstype.m_OrderOutCards, jokerCards[1])
            return true
        end
    end

    if #jokerCards == 0 then
        if lastCardType.m_nEndPower >= Card.CP_2 then
            return false
        end
		
        if normalCards[1]:GetPower() - lastCardType.m_nEndPower == 1 or 
            normalCards[1]:GetPower() == Card.CP_2 or 
            lastCardType:GetCardTypeMainNum() == 0 then
            cardstype:SetCardTypeEnum(1, 1, 0)
            cardstype.m_nEndPower = normalCards[1]:GetPower()
            cardstype.m_OrderOutCards = {}
            table.insert(cardstype.m_OrderOutCards, normalCards[1])
            return true
        end
    end

    return false
end

function CardRule:JudgeSpecCardType_ConPair(checkCards, jokerCards, normalCards, cardstype, lastCardType)
    -- 连队必须是2的倍数且至少为4张
    if #checkCards < 4 or #checkCards % 2 ~= 0 then
        return false
    end

    local cardCount = {}
    -- 2不能成为连对的一部分
    for _, card in ipairs(normalCards) do
        if card:GetPower() == Card.CP_2 then
            return false
        end
        cardCount[card:GetPower()] = (cardCount[card:GetPower()] or 0) + 1
    end

    local consecutivePairs = 0
    local lastPairValue = -1
    local jokerSize = #jokerCards
    local canPowerChange = true
    
	if jokerSize == 0  then 
	 canPowerChange = false
	end
	
    for value = normalCards[1]:GetPower(), Card.CP_A do
	local count = cardCount[value] or 0 
        if count >= 3 then
            return false
        elseif count == 2 then
            if lastPairValue == value - 1 then
                consecutivePairs = consecutivePairs + 1
            elseif lastPairValue ~= -1 and consecutivePairs == 0 then
                return false
            end
            lastPairValue = value
        elseif count == 1 and jokerSize > 0 then
            jokerSize = jokerSize - 1
            canPowerChange = false
            if lastPairValue == value - 1 then
                consecutivePairs = consecutivePairs + 1
            elseif lastPairValue ~= -1 and consecutivePairs == 0 then
                return false
            end
            lastPairValue = value
        elseif count == 0 and jokerSize >= 2 then
            jokerSize = jokerSize - 2
            if consecutivePairs ~= 0 and (consecutivePairs + 2) ~= #checkCards / 2 then
                canPowerChange = false
            end
            if lastPairValue == value - 1 then
                consecutivePairs = consecutivePairs + 1
            elseif lastPairValue ~= -1 and consecutivePairs == 0 then
                return false
            end
            lastPairValue = value
        else
            if consecutivePairs > 0 then break end
        end
    end


    if consecutivePairs >= 1 and (consecutivePairs + 1) == #checkCards / 2  then
        local endPower = normalCards[1]:GetPower()
        if lastCardType:GetCardTypeMainNum() == 2 and 
   lastCardType:GetCardTypeCTSize() >= 2 and 
   #checkCards / 2 == lastCardType:GetCardTypeCTSize() and 
   lastCardType.m_nEndPower > 0  then
            if endPower > Card.CP_4 and (endPower - lastCardType.m_nEndPower == 2) and canPowerChange then
                endPower = endPower - 1
            end
			
			
            if endPower - lastCardType.m_nEndPower ~= 1 then
                return false
            end

            cardstype:SetCardTypeEnum(2, #checkCards / 2, 0)
            cardstype.m_nEndPower = endPower
            cardstype.m_OrderOutCards = {}
            for _, card in ipairs(normalCards) do
                table.insert(cardstype.m_OrderOutCards, card)
            end
            for _, joker in ipairs(jokerCards) do
                table.insert(cardstype.m_OrderOutCards, joker)
            end
			
            return true
        end
		
						-- 如果是初始出牌，并满足连对子条件
		if lastCardType:GetCardTypeMainNum() == 0 then
			
            cardstype:SetCardTypeEnum(2, #checkCards / 2, 0)
            cardstype.m_nEndPower = endPower
            cardstype.m_OrderOutCards = {}
            for _, card in ipairs(normalCards) do
                table.insert(cardstype.m_OrderOutCards, card)
            end
            for _, joker in ipairs(jokerCards) do
                table.insert(cardstype.m_OrderOutCards, joker)
            end
            return true
		end
    end

    return false
end


function UChar2Cards(nCards, nCardNum)
    local vtCards = {}
    for i = 1, nCardNum do
        table.insert(vtCards, Card:new(nCards[i]))
    end
    return vtCards
end

function UCards2Char(nCardCombs, nCombNum)
    local vtCIds = {}
	
    for i = 1, nCombNum do
        table.insert(vtCIds, nCardCombs[i]:GetID())
    end
    return vtCIds
end

function CompletionCardType(cardType)

	lastCardType = CardsType:new()
	if cardType and cardType._nCardTypeEnum ~= 0 then
	
	lastCardType.nCardTypeEnum = cardType._nCardTypeEnum
	lastCardType.ucNJunko = math.floor(cardType._nCardTypeEnum / 1000)
    lastCardType.ucMContinuous = cardType._nCardTypeEnum % 100
    lastCardType.ucXExcess = math.floor((cardType._nCardTypeEnum % 1000) / 100)
	lastCardType.m_nEndPower = cardType._nEndPower 
	end
	
	return lastCardType
end


function CardRule:canOut(selectCards,lastOutCards,isLast,lastCardstype)

    local outCards = UChar2Cards(selectCards, #selectCards)
    local lastCards = UChar2Cards(lastOutCards, #lastOutCards)

	cardstype = CardsType:new()
	
	lastCardstype = CompletionCardType(lastCardstype)
	emptyType = CardsType:new()	
	
	if lastCardstype and self:IsBomb(lastCardstype) then 
		if not self:JudgeSpecCardType(lastCards, lastCardstype, emptyType,isLast) then 
		return false
	end
	end
	return self:JudgeSpecCardType(outCards, cardstype, lastCardstype,isLast)

end


function CardRule:getPromptCards(allCards,lastOutCards,nCount,isLast,lastCardstype)

	lastCardstype = CompletionCardType(lastCardstype)
	emptyType = CardsType:new()	
	local cardsComb = {}
	local cardBox = {}
    local handCards = UChar2Cards(allCards, #allCards)
	local lastCards = UChar2Cards(lastOutCards, #lastOutCards)
	
    for index, card in ipairs(handCards) do
		local key = card:GetPower()
		if not cardBox[key] then
			cardBox[key] = {}
		end
		table.insert(cardBox[key],card)
	end
	
	if lastCardstype and self:IsBomb(lastCardstype) then 
	
		if not self:JudgeSpecCardType(lastCards, lastCardstype, emptyType,false,isLast) then 
		return cardsComb
	end
	end
	self:GetBiggerCardType_Comb(cardBox, lastCardstype, cardsComb, nCount,isLast) 
	return UCards2Char(cardsComb,#cardsComb)
	
end��