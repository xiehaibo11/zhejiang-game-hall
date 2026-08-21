local _M = {}
local GameCMD = import(".DDZCMD")
local PublicFunc = import(".DDZPublicFunc")

local GETTYPE 		= 1			-- 获取类型
local GETCOMPARE 	= 2			-- 获取比较数据

_M.canSiDaiEr				= false			-- 可四带二
_M.canSanBuDai				= false 		-- 是否可以三张不带
_M.canSanDaiEr				= false 		-- 是否可以三带二
_M.sanDaBiZhua				= false 		-- 是否三大必抓

function _M.initGameRule()

	_M.canSiDaiEr				= false			-- 可四带二
	_M.canSanBuDai				= false 		-- 是否可以三张不带
	_M.canSanDaiEr				= false 		-- 是否可以三带二

	local ruleList = g_gameGlobal:getCurrentWanFa().ruleList

	for k, v in ipairs(ruleList or {}) do 
		if v == g_gameConstant.GAME_SUB_PK_RULE_SI_DAI_ER then
			_M.canSiDaiEr = true 
		elseif v == g_gameConstant.GAME_SUB_PK_RULE_SAN_BU_DAI then
			_M.canSanBuDai = true 
		elseif v == g_gameConstant.GAME_SUB_PK_RULE_SAN_DAI_DUI then
			_M.canSanDaiEr = true 	
		elseif v == g_gameConstant.GAME_SUB_PK_RULE_SAN_DA_BI_ZHUA then 
			_M.sanDaBiZhua = true 
		end
	end 
	-- _M.canSiDaiEr = true 
	return _M.sanDaBiZhua
end 


function _M.compareWithOutData(compareData,isAll,outType,outMiniValue,mustOutCard,isNew,outCardNum)

	local _mustOutCard,_compareData = mustOutCard,compareData
	-- 是否含有必出牌
	local function isHavaMustOutCard()

		if _mustOutCard == 0 or _mustOutCard == nil then return true end 
		local isHave = false
		for k, v in pairs(_compareData) do 
			if v == mustOutCard then 
				isHave = true 
				break
			end 
		end 

		if not isHave then 
			return isHave,GameCMD.OUTTYPE_MUST_HEI3
		end 
		return isHave
	end 

	if type(compareData) ~= "table" or next(compareData) == nil then return false end 

	local compareType,compareMiniValue = _M.getCardType(compareData,isAll,isNew)

	outType = outType or GameCMD.OUTTYPE_NOCARD

	if outType == GameCMD.OUTTYPE_NOCARD and compareType > outType then return isHavaMustOutCard() end 

	if compareType == GameCMD.OUTTYPE_ERROR then return false,GameCMD.OUTTYPE_ERROR end 

	-- 王炸判断
	if outType == GameCMD.OUTTYPE_WANGZHA then 
		return false,GameCMD.OUTTYPE_ERROR
	end 

	if compareType == GameCMD.OUTTYPE_WANGZHA then 
		return true 
	end 

	-- 炸弹判断
	if compareType == GameCMD.OUTTYPE_BOMB and outType ~= GameCMD.OUTTYPE_BOMB then 
		return isHavaMustOutCard()
	end	

	-- 规则判断
	if compareType ~= outType then 
		return false,GameCMD.OUTTYPE_ERROR 
	end 

	-- 类型相同的比较,连队或者顺子类型要比较牌的数量是否相等，在比较牌值
	local isOk = false
	--if compareType == GameCMD.OUTTYPE_SHUNZI or compareType == GameCMD.OUTTYPE_DOUBLELINK then
	if #compareData == outCardNum then
		isOk = compareMiniValue > outMiniValue 
	end
	--end
	--local isOk = compareMiniValue > outMiniValue 

	if isOk then 
		return isHavaMustOutCard()
	end

	return false,GameCMD.OUTTYPE_ERROR
end



-- 智能提示
-- 参数1:需要分析的牌集合
-- 参数2：出牌数据（亦是比牌数据）
-- 参数3：是否包含必出牌
-- 参数4：是否选中最大最优牌（只返回一种牌）
-- 参数5：是否为全部手牌
function _M.aiTips(handData,outData,mustOutCard,isAI,isAllData,isBaoDan)

	local isNew = false 
	if outData == nil or next(outData) == nil then 
		isNew = true
	end 

	local handCount,outCount,validCount = 0,0,0

	local _mustOutCard = mustOutCard

	-- 返回值
	local resultData,resultCount = {},0

	-- 若有必出牌型，则手牌中必须有必出牌型，若没有，则直接return
	if mustOutCard ~= 0 and mustOutCard ~= nil then 
		local haveMustOutCard = false
		for k, v in pairs(handData) do 
			if v == mustOutCard then 
				haveMustOutCard = true 
			end 
		end 
		if haveMustOutCard == false then 
			return resultData,resultCount,validCount
		end 
	end 
	
	if type(handData) ~= "table" or next(handData) == nil then 
		return resultData,resultCount,validCount
	end 
	
	outData = outData or {}

	if outData ~= nil and type(outData) == "table" and next(outData) ~= nil then outCount = #outData end 
	
	handCount = #handData

	local outType,outMiniValue = _M.getCardType(outData,true,isNew)

	local analyseResult = _M.analyseCardData(handData)
	
	local singleResult,singleCount = _M.analyseSingleData(analyseResult,1)

	local doubleResult,doubleCount = _M.analyseDoubleData(analyseResult,1)

	local threeResult,threeCount = _M.analyseThreeData(analyseResult,1)
	--判断是否有炸弹
	local bomResult,bomCount = _M.analyseBomb(analyseResult,1)


	local function sortResultData()
		local firstData = {}
		local removeIndex = 0
		for k,v in pairs(resultData) do 
			if #v == handCount then 
				firstData = v
				removeIndex = k
				break
			end
		end
		
		if next(firstData) ~= nil and removeIndex ~= 0 then 
			table.remove(resultData,removeIndex)
			table.insert(resultData,1,firstData)
		end
	end

	-- 参数1：需要插入的牌数据
	-- 参数2：是否需要计入有效插入数量(false：为可计入，true：为不可计入)
	local function insertToResult(insertData,isValid)

		local isInsert = false
		if _mustOutCard ~= nil and _mustOutCard ~= 0 then 
			-- 查看是否分析牌结果中是否包含了必出牌型
			for k, v in pairs(insertData) do 
				if v == _mustOutCard then 
					isInsert = true
				end 
			end
			-- 若不存在时，判断是否有等值的必出牌（指逻辑值），若有则替换
			if isInsert == false then 
				local mustLogicValue = PublicFunc.getCardLogicValue(_mustOutCard)
				for k, v in pairs(insertData) do 
					local logicValue = PublicFunc.getCardLogicValue(v)
					if logicValue == mustLogicValue then 
						insertData[k] = _mustOutCard			-- 若有，则替换为必出牌
						isInsert = true 
						break
					end
				end
			end
		else
			isInsert = true
		end 

		if isInsert == true then 
			table.insert(resultData,insertData)
			resultCount = resultCount + 1
			if isValid == nil or isValid == false then  
				validCount = validCount + 1
			end 
		end 
	end 

	-- 普通牌型插入炸弹数据
	local function insertBombData(kind)

		local bombResult,bombCount
		
		if kind == 1 then 
			bombResult,bombCount = _M.analyseBomb(analyseResult,1)
		else
			bombResult,bombCount = _M.analyseBomb(analyseResult,2,outData,outMiniValue)
		end 

		if bombCount > 0 then 
			for k, v in pairs(bombResult) do 
				for k1, v1 in pairs(v or {}) do
					if next(v1) ~= nil then 
						insertToResult(v1)
					end 
				end 
			end 
		end 
	end  

	local function getXieDaiData3(num,exceptData)
		local zuheData = {}
		-- 剔除数据
		-- 带牌中不能有自己，因为炸弹不能拆
		local tmpHandData = {}
		for k, v in ipairs(handData) do 
			local isSame = false 
			local logic_v = PublicFunc.getCardLogicValue(v)
			for k1, v1 in ipairs(exceptData) do 
				local logic_v1 = PublicFunc.getCardLogicValue(v1)
				if logic_v == logic_v1 then 
					isSame = true 
					break 
				end 
			end 
			-- 若是逻辑值不一样，则可以插入到该剩余携带牌中去
			if not isSame then 
				table.insert(tmpHandData,v)
			end 
		end 
		
		if next(tmpHandData) == nil then 
			return zuheData
		end 

		local function checkResultIncludeBomb(data)
			local isInsert = true 
			-- 检测牌型是否有王炸
			local JokerNum = 0 
			for k,v in ipairs(data) do 
				if v == GameCMD.MINI_JOKER or v == GameCMD.MAX_JOKER then 
					JokerNum = JokerNum + 1
				end 
			end 

			if JokerNum == 2 then 
				return 
			end 

			-- 若逻辑没错的话，是不会有炸弹牌进来的

			-- local maxSameNum = 0
			-- for k, v in ipairs(data) do 

			-- 检测张数是否一致
			if mustNum and #data ~= mustNum then  
				isInsert = false 
				return 
			end

			if isInsert then  
				table.insert(zuheData,data)
			end
		end 

		-- 重新分析数据
		local tmp_analyseResult = _M.analyseCardData(tmpHandData)

		if tmp_analyseResult.singleCardCount >= num then
			-- 若够，全取单牌
			local t = clone(tmp_analyseResult.singleCardData)

			local daiData = {}

			PublicFunc.toUnidimensionalTable(t,daiData)

			local tmp_result = PublicFunc.commzuhe(daiData,num)

			checkResultIncludeBomb(tmp_result)

		elseif tmp_analyseResult.singleCardCount + tmp_analyseResult.doubleCardCount*2 >= num then		-- 单张数量不够
			local needNDouble = math.ceil((num - tmp_analyseResult.singleCardCount)/2)		-- 向上取整，所需对子数量
			
			local t_double = {}											-- 取最小的needNDouble个对子，和单牌组合

			local count = 0
			-- 获取最小的needNDouble个对子
			for k, v in ipairs(tmp_analyseResult.doubleCardData or {}) do 
				if count/2 >= needNDouble then break end 
				if next(v) ~= nil then
					if count + #v < num then  
						table.insert(t_double,v)
						count = count + #v 
					elseif count + #v == num then  
						table.insert(t_double,v)
						count = count + #v
						break 
					elseif count + #v > num then 
						table.insert(t_double,v[1])
						count = count + 1
						break 
					end 
				end 
			end 

			-- 将对自己变成一维数据
			local t_data = {}
			PublicFunc.toUnidimensionalTable(t_double,t_data)

			local single = {}
			-- 判断单牌中数据是奇数还是偶数————若是奇数，去掉最大的单牌
			if tmp_analyseResult.singleCardCount >= 1 then 
				local needSingNum = num - needNDouble*2
				local t = clone(tmp_analyseResult.singleCardData)
				PublicFunc.toUnidimensionalTable(t,single)
				PublicFunc.sortByCardLogic(single)
				
				-- 删除多余的数据
				for i=1, tmp_analyseResult.singleCardCount - needSingNum do 
					local l = #single
					table.remove( single,l)
				end 
			end 

			local tmp_result = {}
			PublicFunc.toUnidimensionalTable({single,t_data},tmp_result)

			checkResultIncludeBomb(tmp_result)
		elseif tmp_analyseResult.singleCardCount + tmp_analyseResult.doubleCardCount*2 + tmp_analyseResult.threeCardCount*3 >= num then
			-- 除了单张和对子还需要多少张牌
			local needNum = num - tmp_analyseResult.singleCardCount - tmp_analyseResult.doubleCardCount*2

			local needThreeNum = math.ceil(needNum/3)		-- 向上取整，所需数量
		
			local t_three = {}
			local count = 0

			-- 取最小的三张
			for k, v in ipairs(tmp_analyseResult.threeCardData or {}) do 
				if count >= needThreeNum then break end 
				if next(v) ~= nil then 
					table.insert(t_three,v)
					count = count + 1 
				end 
			end 

			if next(t_three) == nil then 
				return 
			end 

			-- 三张取需要的长度
			local t3 = {}
			PublicFunc.toUnidimensionalTable(t_three,t3)
			PublicFunc.sortByCardLogic(t3)
			t3 = PublicFunc.getTableByIndex(t3,1,needNum)

			-- 取所有的两张
			local t2 = {}
			local t_double = {}
			for k, v in ipairs(tmp_analyseResult.doubleCardData or {}) do 
				if next(v) ~= nil then 
					table.insert(t_double,v)
				end 
			end 
			PublicFunc.toUnidimensionalTable(t_double,t2)

			-- 取出所有的单张
			local t1 = {}
			local t_single = {}
			for k, v in pairs(tmp_analyseResult.singleCardData or {}) do 
				if next(v) ~= nil then 
					table.insert(t_single,v) 
				end 
			end 

			local tmp_result = {}
			PublicFunc.toUnidimensionalTable({t_single,t2,t3},tmp_result)

			checkResultIncludeBomb(tmp_result)
		elseif tmp_analyseResult.singleCardCount + tmp_analyseResult.doubleCardCount*2 + tmp_analyseResult.threeCardCount*3 + tmp_analyseResult.fourCardCount*4 >= num then 
			-- 除了单张和对子还需要多少张牌
			local needNum = 0

			if t4_Num == 0 then 
				needNum = num - tmp_analyseResult.singleCardCount - tmp_analyseResult.doubleCardCount*2 - tmp_analyseResult.threeCardCount*3 + t3_Num
			else
				needNum = num - tmp_analyseResult.singleCardCount - tmp_analyseResult.doubleCardCount*2 - tmp_analyseResult.threeCardCount*3 
			end 

			local needFourNum = math.ceil(needNum/4)		-- 向上取整，所需数量

			-- 取最小的四张
			local t4 = {}
			local t_four = {}
			local count = 0
			for k, v in ipairs(tmp_analyseResult.fourCardData or {}) do 
				if count >= needFourNum then break end 
				if next(v) ~= nil then 
					table.insert(t_four,v)
					count = count + 1
				end 
			end

			if next(t_four) == nil then 
				return 
			end 

			PublicFunc.toUnidimensionalTable(t_four,t4)
			PublicFunc.sortByCardLogic(t4)
			t4 = PublicFunc.getTableByIndex(t4,1,needNum)

			-- 取最小的三张
			local t3 = {}
			local t_three = {}
			for k, v in ipairs(tmp_analyseResult.threeCardData or {}) do 
				if next(v) ~= nil then 
					table.insert(t_three,v)
				end 
			end

			PublicFunc.toUnidimensionalTable(t_three,t3)

			-- 取所有的两张
			local t2 = {}
			local t_double = {}
			for k, v in ipairs(tmp_analyseResult.doubleCardData or {}) do 
				if next(v) ~= nil then 
					table.insert(t_double,v)
				end 
			end 
			PublicFunc.toUnidimensionalTable(t_double,t2)
			
			-- 取出所有的单张
			local t_single = {}
			for k, v in pairs(tmp_analyseResult.singleCardData or {}) do 
				if next(v) ~= nil then 
					table.insert(t_single,v) 
				end 
			end 
			
			local tmp_result = {}
			PublicFunc.toUnidimensionalTable({t_single,t2,t3,t4},tmp_result)
			checkResultIncludeBomb(tmp_result)
		end 

		return zuheData
	end 

	-- 斗地主带牌专用（三带或是四带或是飞机，都是只能是都是单张，或都是对子，不能对子做单张）
	local function getXieDaiData4(num,exceptData,mustNum)
		-- local tmpHandData = clone(handData)
		local zuheData = {}

		-- 带牌中不能有自己，因为炸弹不能拆
		local tmpHandData = {}
		for k, v in ipairs(handData) do 
			local isSame = false 
			local logic_v = PublicFunc.getCardLogicValue(v)
			for k1, v1 in ipairs(exceptData) do 
				local logic_v1 = PublicFunc.getCardLogicValue(v1)
				if logic_v == logic_v1 then 
					isSame = true 
					break 
				end 
			end 
			-- 若是逻辑值不一样，则可以插入到该剩余携带牌中去
			if not isSame then 
				table.insert(tmpHandData,v)
			end 
		end 

		-- 剔除数据
		-- for k, v in ipairs(exceptData or {}) do 
		-- 	for k1, v1 in ipairs(tmpHandData) do 
		-- 		if v1 == v then 
		-- 			table.remove(tmpHandData,k1)
		-- 			break 
		-- 		end 
		-- 	end 
		-- end 

		local miniDaiCardNum = num
		if mustNum and mustNum > num then 
			miniDaiCardNum = mustNum
		end 

		if next(tmpHandData) == nil or #tmpHandData < num then 
			return zuheData
		end 

		local isHaveResult = false 

		local function checkHaveDoubleJobker(data)
			-- 检测牌型是否有王炸
			local JokerNum = 0 
			for k,v in ipairs(data) do 
				if v == GameCMD.MINI_JOKER or v == GameCMD.MAX_JOKER then 
					JokerNum = JokerNum + 1
				end 
			end 

			if JokerNum == 2 then 
				return true
			end 
			return false 
		end 

		local function checkResultIncludeBomb(data)
			local isInsert = true 

			if checkHaveDoubleJobker(data) then 
				return 
			end 

			-- 若逻辑没错的话，是不会有炸弹牌进来的

			-- 检测张数是否一致
			if mustNum and #data ~= mustNum then  
				isInsert = false 
				return 
			end

			if isInsert then  
				isHaveResult = true 
				table.insert(zuheData,data)
			end
		end 

		-- 重新分析数据
		local tmp_analyseResult = _M.analyseCardData(tmpHandData)

		-- 取 num 个单牌
		local function searchSingleData()
			if  tmp_analyseResult.singleCardCount < miniDaiCardNum then
				return 
			end

			-- 若够，取 num 个单牌
			local t = clone(tmp_analyseResult.singleCardData)
			local singleData = {}
			PublicFunc.toUnidimensionalTable(t,singleData)

			local function findResultData(singleData)

				if #singleData < num then 
					return 
				end 

				local t_zuhe = PublicFunc.commzuhe(singleData,num)

				for k, v in ipairs(t_zuhe) do 
					checkResultIncludeBomb(v)
				end 
			end 

			-- 检测是否单排中有双王
			if checkHaveDoubleJobker(singleData) then 
				-- 剔除大王，然后遍历
				for k, v in ipairs(singleData) do 
					if v == GameCMD.MAX_JOKER then 
						table.remove(singleData,k)
						break 
					end
				end 
			end 

			findResultData(singleData)
		end 

		-- 取 单+单（对拆）
		local function searchSAndDSData()
			-- 原则：取所有单牌，不够数，拆对子作单牌，且不能插入对子
			if  tmp_analyseResult.singleCardCount + tmp_analyseResult.doubleCardCount < miniDaiCardNum then
				return 
			end
			-- 取单牌
			local s = clone(tmp_analyseResult.singleCardData)
			local singleData = {}
			PublicFunc.toUnidimensionalTable(s,singleData)

			local function findResultData(singleData)
				-- 取对子中的一个单牌
				local d_s = {}
				for k, v in ipairs(tmp_analyseResult.doubleCardData) do 
					if v and next(v) ~= nil then 
						table.insert(d_s,v[1])
					end 
				end 

				-- 从对子中取 num - #s 个单牌,排列组合
				local left_num = num - #singleData 

				if left_num < 0 then 
					return 
				end 

				local t_d = PublicFunc.commzuhe(d_s,left_num)

				-- 将单牌和t_d中的数据和单牌组合
				for k, v in ipairs(t_d) do 
					local t_zh = {}
					PublicFunc.toUnidimensionalTable({v,singleData},t_zh)
					checkResultIncludeBomb(t_zh)
				end 
			end 

			-- 检测是否单排中有双王
			if checkHaveDoubleJobker(singleData) then 
				-- 剔除大王，然后遍历
				for k, v in ipairs(singleData) do 
					if v == GameCMD.MAX_JOKER then 
						table.remove(singleData,k)
						break 
					end
				end 
			end 

			findResultData(singleData)
		end 

		-- 取 单+单（对拆）+ 单（三拆）
		local function searchSAandDSAndTSData()
			-- 原则：取所有单牌和对子拆分的单牌，和多余的三张拆分的单牌组合
			if  tmp_analyseResult.singleCardCount + tmp_analyseResult.doubleCardCount + tmp_analyseResult.threeCardCount < miniDaiCardNum then
				return 
			end
			-- 取单牌(s = single)
			local s = clone(tmp_analyseResult.singleCardData)
			local singleData = {}
			PublicFunc.toUnidimensionalTable(s,singleData)

			local function findResultData(singleData)
				-- 取对子中的一个单牌 (d = duble, s = single)
				local d_s = {}
				for k, v in ipairs(tmp_analyseResult.doubleCardData) do 
					if v and next(v) ~= nil then 
						table.insert(d_s,v[1])
					end 
				end 

				-- 单牌 + 单牌（对子拆的）
				local s_a_d = {}
				PublicFunc.toUnidimensionalTable({d_s,singleData},s_a_d)

				-- 取出三张拆分的单牌数据 (t = three)
				local t = {}
				for k, v in ipairs(tmp_analyseResult.threeCardData) do 
					if v and next(v) ~= nil then 
						table.insert(t,v[1])
					end 
				end

				-- num - #s_a_d 个单牌, 排列组合
				local left_num = num - #s_a_d 

				if left_num < 0 then 
					return 
				end 

				local t_zh = PublicFunc.commzuhe(t,left_num) 

				-- 将单牌和t_d中的数据和单牌组合
				for k, v in ipairs(t_zh) do 
					local tmp = {}
					PublicFunc.toUnidimensionalTable({v,s_a_d},tmp)
					checkResultIncludeBomb(tmp)
				end 
			end 

			-- 检测是否单排中有双王
			if checkHaveDoubleJobker(singleData) then 
				-- 剔除大王，然后遍历
				for k, v in ipairs(singleData) do 
					if v == GameCMD.MAX_JOKER then 
						table.remove(singleData,k)
						break 
					end
				end 
			end 

			findResultData(singleData)
		end 

		-- 取 单 + 单（对子）+ 单（三张）+ 单（四张）
		local function searchSAndDSAndTSAndFSData()
			-- 原则：取所有单牌、对子拆分的单牌、三张拆分的单牌、四张拆分的单牌 组合
			if  tmp_analyseResult.singleCardCount + tmp_analyseResult.doubleCardCount + tmp_analyseResult.threeCardCount + tmp_analyseResult.fourCardCount < miniDaiCardNum then
				return 
			end
			-- 取单牌(s = single)
			local s = clone(tmp_analyseResult.singleCardData)
			local singleData = {}
			PublicFunc.toUnidimensionalTable(s,singleData)

			local function findResultData(singleData)
				-- 取对子中的一个单牌 (d = duble, s = single)
				local d_s = {}
				for k, v in ipairs(tmp_analyseResult.doubleCardData) do 
					if v and next(v) ~= nil then 
						table.insert(d_s,v[1])
					end 
				end 

				-- 取出三张拆分的单牌数据 (t = three)
				local t_s = {}
				for k, v in ipairs(tmp_analyseResult.threeCardData) do 
					if v and next(v) ~= nil then 
						table.insert(t_s,v[1])
					end 
				end

				-- 单牌 + 单牌（对子拆的）
				local s_a_d_a_t = {}
				PublicFunc.toUnidimensionalTable({d_s,t_s,singleData},s_a_d_a_t)

				-- 取出四张拆分的单牌数据 (f = four)
				local f = {}
				for k, v in ipairs(tmp_analyseResult.fourCardData) do 
					if v and next(v) ~= nil then 
						table.insert(f,v[1])
					end 
				end

				local left_num = num - #s_a_d_a_t 

				if left_num < 0 then 
					return 
				end 

				local f_zh = PublicFunc.commzuhe(f,left_num) 

				-- 将单牌和t_d中的数据和单牌组合
				for k, v in ipairs(f_zh) do 
					local tmp = {}
					PublicFunc.toUnidimensionalTable({v,s_a_d_a_t},tmp)
					checkResultIncludeBomb(tmp)
				end 
			end 

			-- 检测是否单排中有双王
			if checkHaveDoubleJobker(singleData) then 
				-- 剔除大王，然后遍历
				for k, v in ipairs(singleData) do 
					if v == GameCMD.MAX_JOKER then 
						table.remove(singleData,k)
						break 
					end
				end 
			end 

			findResultData(singleData)
		end 

		-- 取 num 个对子
		local function searchDoubleData()
			if tmp_analyseResult.doubleCardCount*2 < miniDaiCardNum then 
				return 
			end 
			-- 取 num 个对子
			local d = {}
			for k, v in ipairs(tmp_analyseResult.doubleCardData) do 
				if v and next(v) ~= nil then 
					table.insert(d,v)
				end 
			end 

			local doubleDataIndex = {}
			for i=1, tmp_analyseResult.doubleCardCount do 
				table.insert(doubleDataIndex,i)
			end

			local zuheDataIndex = PublicFunc.commzuhe(doubleDataIndex,num)
			-- 根据组合索引来组成数据
			-- zuheData
			for index, obj in ipairs(zuheDataIndex) do 
				local t_data1 = {}
				for k, v in ipairs(obj) do 
					local t_data = d[v]
					table.insert(t_data1,t_data)
				end 
				local t_data2 = {}
				PublicFunc.toUnidimensionalTable(t_data1,t_data2)
				checkResultIncludeBomb(t_data2)
			end
		end

		-- 取 对子 + 对子(三张拆)
		local function searchDAndTDData()
			if tmp_analyseResult.doubleCardCount*2 + tmp_analyseResult.threeCardCount*2 < miniDaiCardNum then
				return 
			end
			-- 取对子
			local d = {}
			for k, v in ipairs(tmp_analyseResult.doubleCardData) do 
				if v and next(v) ~= nil then 
					table.insert(d,v)
				end 
			end 

			-- 取三张中的对子
			local t = {}
			for k, v in ipairs(tmp_analyseResult.threeCardData) do 
				if v and next(v) ~= nil then 
					local a, b = v[1],v[2]
					table.insert(t,{a, b})
				end 
			end 

			local index = {}
			for i=1, #t do 
				index[i] = i
			end

			local left_num = num - #d
			local i_zuhe = PublicFunc.commzuhe(index,left_num)

			-- 根据组合索引来组成数据
			for ii, obj in ipairs(i_zuhe) do 
				local t_data1 = {}
				for k, v in ipairs(obj) do 
					local t_data = t[v]
					table.insert(t_data1,t_data)
				end 
				local t_data2 = {}
				PublicFunc.toUnidimensionalTable({d,t_data1},t_data2)
				checkResultIncludeBomb(t_data2)
			end

		end 

		-- 取 对 + 对（三拆）+ 对（四拆）
		local function searchDAndTDAndFDData()
			if tmp_analyseResult.doubleCardCount*2 + tmp_analyseResult.threeCardCount*2 + tmp_analyseResult.fourCardCount*2 < miniDaiCardNum then
				return 
			end
			-- 取对子
			local d = {}
			for k, v in ipairs(tmp_analyseResult.doubleCardData) do 
				if v and next(v) ~= nil then 
					table.insert(d,v)
				end 
			end 

			-- 取三张中的对子
			local t = {}
			for k, v in ipairs(tmp_analyseResult.threeCardData) do 
				if v and next(v) ~= nil then 
					local a, b = v[1],v[2]
					table.insert(t,{a, b})
				end 
			end 

			local d_a_t = {}
			PublicFunc.toUnidimensionalTable({d,t},d_a_t)

			-- 取四张中的对子
			local f = {}
			for k, v in ipairs(tmp_analyseResult.fourCardData) do 
				if v and next(v) ~= nil then 
					local a, b = v[1],v[2]
					table.insert(f,{a, b})
				end 
			end 

			local index = {}
			for i=1, #f do 
				index[i] = i
			end

			local left_num = num - tmp_analyseResult.doubleCardCount - tmp_analyseResult.threeCardCount
			 
			local i_zuhe = PublicFunc.commzuhe(index,left_num)


			-- 根据组合索引来组成数据
			-- zuheData
			for ii, obj in ipairs(i_zuhe) do 
				local t_data1 = {}
				for k, v in ipairs(obj) do 
					local t_data = f[v]
					table.insert(t_data1,t_data)
				end 
				local t_data2 = {}
				PublicFunc.toUnidimensionalTable({t_data1,d_a_t},t_data2)
				checkResultIncludeBomb(t_data2)
			end

		end 

		if not mustNum or mustNum == 0 then 
			-- 若无要求，先找单张或是对子
			searchSingleData()
			searchDoubleData()
			if not isHaveResult then 
				searchSAndDSData()
				if not isHaveResult then 
					searchDAndTDData()
					if not isHaveResult then 
						searchSAandDSAndTSData()
						if not isHaveResult then 
							searchSAndDSAndTSAndFSData()
							if not isHaveResult then 
								searchDAndTDAndFDData()
							end 
						end 
					end 
				end 
			end 
		else
			if mustNum == num then 	-- 只能取单
				searchSingleData()
				if not isHaveResult then 
					searchSAndDSData()
					if not isHaveResult then 
						searchSAandDSAndTSData()
						if not isHaveResult then 
							searchSAndDSAndTSAndFSData()
						end 
					end 
				end 
			else 					-- 只能取对
				searchDoubleData()
				if not isHaveResult then 
					searchDAndTDData()
					if not isHaveResult then 
						searchDAndTDAndFDData()
					end 
				end 
			end 
		end
		return zuheData
	end 


	-- 参数1：三张、四张、或飞机table类型
	-- 参数2：携带数组合
	local function makeT1andTsToNewTable(table1,tables)
		local isValid = false 
		for k, v in pairs(tables or {}) do 
			local t1 = {}
			local t2 = {}

			table.insert(t1,table1)
			table.insert(t1,v)
			
			PublicFunc.toUnidimensionalTable(t1,t2)
			PublicFunc.sortByCardLogic(t2)

			insertToResult(t2,isValid)
			isValid = true
		end
	end

	-- 插入普通类型的数据
	local function insertSDTData(insertData,pos)
		local isInsertBomb = false
		for k, v in pairs(insertData or {}) do 
			if k == pos and isInsertBomb == false then 
				insertBombData(1)
				isInsertBomb = true 
			end

			for k1, v1 in pairs(v or {}) do 
				local t = v1
				if type(v1) ~= "table" then t = {v1} end 
				insertToResult(t)
			end 
		end

		if isInsertBomb == false then insertBombData(1) end 
	end


	local function insertSingeCard(comValue)

		for i=17,1,-1 do 
			local values = clone(analyseResult.AllData[i])
			if next(values) ~= nil and values[1] then 
				local logicValue = PublicFunc.getCardLogicValue(values[1][1])
				outMiniValue = outMiniValue or 0 
				if logicValue > outMiniValue then 
					insertToResult({values[1][1]})
					break
				end 
			end 
		end 

		insertBombData(1)
	end 


	-- 所有组合(若返回的类型为错误，且没有出牌数据，那么搜索所有的可出牌型)
	if outType == GameCMD.OUTTYPE_ERROR and (outData == nil or next(outData) == nil) then 

		local bombResult,bombCount = _M.analyseBomb(analyseResult,1)
	
		local linkResult,linkCount = _M.analyseLink(analyseResult,1)

		local threeLinkResult,threeLinkCount = _M.analyseThreeLink(analyseResult,1,nil,nil,isNew)

		local doubleLinkResult,doubleLinkCount = _M.analyseDoubleLink(analyseResult,1)

		-- 1、先纯单张
		if not isBaoDan then 
			if next(analyseResult.singleCardData) ~= nil then 
				for k, v in pairs(analyseResult.singleCardData) do 
					if next(v) ~= nil then 
						for k1,v1 in pairs(v) do 
							insertToResult({v1})
						end 
					end
				end 
			end 
		else 
			insertSingeCard()
		end 

		-- 2、纯对子
		if doubleCount > 0 then 
			for k, v in pairs(analyseResult.doubleCardData) do 
				if next(v) ~= nil then 
					insertToResult(v)
				end 
			end 
		end 

		-- 3、三张类型
		if threeCount > 0 then 	
			-- 先看飞机类型
			if threeLinkCount > 0 then 
				for k, v in pairs(threeLinkResult or {}) do 
					local leftNum = handCount - k*3
					-- if leftNum > 0 then 
						for k1, v1 in pairs(v or {}) do 
							-- 带k对
							local dp_result
							if _M.canSanDaiEr then 
								dp_result = getXieDaiData4(k,v1,k*2)
								if next(dp_result) ~= nil then 
									makeT1andTsToNewTable(v1,dp_result)
								end 
							end 

							-- 带k张
							dp_result = getXieDaiData4(k,v1,k)
							if next(dp_result) ~= nil then 
								makeT1andTsToNewTable(v1,dp_result)
							end  
							if next(dp_result) == nil then 
								dp_result = getXieDaiData3(k,v1)
								if next(dp_result) ~= nil then 
									makeT1andTsToNewTable(v1,dp_result)
								else 
									if _M.canSanBuDai then 
										insertToResult(v1)
									end
								end 
							end 
						end 
					-- end
				end 
			end 

			-- 三带类型
			if threeCount > 0 then 
				for k, v in pairs(threeResult or {}) do 
					if next(v) ~= nil then 
						for k1, v1 in pairs(v or {}) do 
							local leftNum = handCount - 3

							local dp_result = {}
							if _M.canSanDaiEr then 
								dp_result = getXieDaiData4(1,v1)	-- 可三带单，可三带对
							else 
								dp_result = getXieDaiData4(1,v1,1)	-- 处理三带一的
							end 

							if next(dp_result) ~= nil then  
								makeT1andTsToNewTable(v1,dp_result)
							end 

							-- 三不带类型
							if _M.canSanBuDai then 
								insertToResult(v1) 
							end 
						end 
					end 
				end 
			end		
		end 

		-- 4、顺子类型
		if linkCount > 0 then 
			for k, v in pairs(linkResult or {}) do 
				for k1, v1 in pairs(v or {}) do 
					insertToResult(v1)
				end 
			end 
		end 

		-- 5、连对类型
		if doubleLinkCount > 0 then 
			for k, v in pairs(doubleLinkResult) do 
				for k1, v1 in pairs(v or {}) do 
					insertToResult(v1)
				end 
			end 
		end 

		-- 4、四张类型：炸弹，四带一
		if bombCount > 0 then 
			-- 四带三要剔除3A类型的炸弹
			for k, v in pairs(bombResult or {}) do 
				for k1, v1 in pairs(v or {}) do 
					if next(v1) ~= nil and #v1 == 4 then 
						if _M.canSiDaiEr then 
							local isHaveSiDai = false 
							local dp_result = getXieDaiData4(2,v1,4)	-- 可四带对
							if next(dp_result) ~= nil then  
								makeT1andTsToNewTable(v1,dp_result)
								isHaveSiDai = true
							end 
							dp_result = getXieDaiData4(2,v1,2)	-- 可四带两单
							if next(dp_result) ~= nil then  
								isHaveSiDai = true 
								makeT1andTsToNewTable(v1,dp_result)
							end 
							if not isHaveSiDai then 
								dp_result = getXieDaiData3(2,v1)
								if next(dp_result) ~= nil then  
									makeT1andTsToNewTable(v1,dp_result)
								end 
							end 
						end 
					end 
				end 
			end 
			-- 炸弹
			for k, v in pairs(bombResult or {}) do 
				for k1, v1 in pairs(v) do 
					if next(v1) ~= nil then 
						insertToResult(v1)
					end 
				end 
			end 
		end 
	
		-- 若这时候数据为还空，那么就选一个昨为出牌提示
		if next(resultData) == nil then 
			for k, v in ipairs(analyseResult.AllData) do 
				if next(v) ~= nil and next(v[1]) ~= nil then 
					insertToResult({v[1][1]})
					break 
				end 
			end 
		end 

	elseif outType == GameCMD.OUTTYPE_SINGLE then 

		if not isBaoDan then 
			local singleOut,singleOutCount = _M.analyseSingleData(analyseResult,2,outData,outMiniValue)
			insertSDTData(singleOut,2)
		else 
			insertSingeCard(outMiniValue)
		end 

	elseif outType == GameCMD.OUTTYPE_DOUBLE then

		local doubleOut,doubleOutCount  = _M.analyseDoubleData(analyseResult,2,outData,outMiniValue)

		insertSDTData(doubleOut,3)

	elseif outType == GameCMD.OUTTYPE_DOUBLELINK then 

		local doubleLinkOutResult,doubleLinkOutCount = _M.analyseDoubleLink(analyseResult,2,outData,outMiniValue)

		insertSDTData(doubleLinkOutResult,0)

	elseif outType == GameCMD.OUTTYPE_THREEWITHTWO or outType == GameCMD.OUTTYPE_THREEWITHONE or outType == GameCMD.OUTTYPE_THREE then 

		local threeCardOutData,threeCardOutCount = _M.analyseThreeData(analyseResult,2,outData,outMiniValue)
		local leftNum 
		if outType == GameCMD.OUTTYPE_THREEWITHTWO then 
			leftNum = 2
		elseif outType == GameCMD.OUTTYPE_THREEWITHONE then 
			leftNum = 1
		elseif outType == GameCMD.OUTTYPE_THREE then 
			leftNum = 0
		end 

		-- 三带类型
		if threeCardOutCount > 0 then 
			for i=3, 4 do 
				local v = threeCardOutData[i]
				if v ~= nil or next(v or {}) ~= nil then 
					for k1, v1 in pairs(v or {}) do 

						if leftNum == 0 and _M.canSanBuDai then 		-- 三不带
							insertToResult(v1)
						elseif leftNum == 1 then 
							local dp_result = getXieDaiData4(1,v1,1)	-- 三带单
							if next(dp_result) ~= nil then  
								makeT1andTsToNewTable(v1,dp_result)
							end 
						elseif leftNum == 2 and _M.canSanDaiEr then 
							local dp_result = getXieDaiData4(1,v1,2)	-- 三带对
							if next(dp_result) ~= nil then  
								makeT1andTsToNewTable(v1,dp_result)
							end 
						end 
					end 	
				end
			end 
		end	

		insertBombData(1)

	elseif outType == GameCMD.OUTTYPE_FEIJI_DAN or outType == GameCMD.OUTTYPE_FEIJI_DUI or  outType == GameCMD.OUTTYPE_FEIJI then

		local threeLinkCardOutData,threeLinkCardOutCount = _M.analyseThreeLink(analyseResult,2,outData,outMiniValue,isNew)

		local bringNum = 0
		if outType == GameCMD.OUTTYPE_FEIJI_DUI then
			bringNum = 2
        elseif outType == GameCMD.OUTTYPE_FEIJI_DAN then
            bringNum = 1
		end

		if threeLinkCardOutCount > 0 then 
			for k, v in pairs(threeLinkCardOutData or {}) do 
				
				for k1, v1 in ipairs(v or {}) do 
					if bringNum == 0 then 
						insertToResult(v1)
					else 
						local dp_result = getXieDaiData4(k,v1,k*bringNum)
						if next(dp_result) ~= nil then  
							makeT1andTsToNewTable(v1,dp_result)
						else 
							dp_result = getXieDaiData3(k,v1)
							if next(dp_result) ~= nil then 
								makeT1andTsToNewTable(v1,dp_result)
							end 
						end
					end 
				end 
			end 
		end 

		insertBombData(1)

	elseif outType == GameCMD.OUTTYPE_SHUNZI then

		local linkOutResult,linkOutCount = _M.analyseLink(analyseResult,2,outData,outMiniValue)

		if linkOutCount > 0 then 
			for k, v in pairs(linkOutResult or {}) do 
				for k1, v1 in pairs(v or {}) do 
					insertToResult(v1)
				end 
			end 
		end 

		insertBombData(1)

	elseif outType == GameCMD.OUTTYPE_WANGZHA then

		-- insertBombData(2)

	elseif outType == GameCMD.OUTTYPE_BOMB then

		insertBombData(2)

	elseif outType == GameCMD.OUTTYPE_SIDAISAN or  outType == GameCMD.OUTTYPE_SIDAIER or outType == GameCMD.OUTTYPE_SIDAIYI then

		local bombOutData,bombOutCount = _M.analyseBomb(analyseResult,2,outData,outMiniValue)
		-- 4、四张类型：炸弹，四带三
		if bombOutCount > 0 then 
			local left_num = #outData - 4
			-- 四带三要剔除3A类型的炸弹
			for k, v in pairs(bombOutData or {}) do 
				for k1, v1 in pairs(v or {}) do 
					if next(v1) ~= nil and #v1 == 4 then 
						if _M.canSiDaiEr then 
							local dp_result = {}
							if left_num == 4 then 
								dp_result = getXieDaiData4(2,v1,4)
								if next(dp_result) ~= nil then  
									makeT1andTsToNewTable(v1,dp_result)
								end 
							elseif left_num == 2 then  
								dp_result = getXieDaiData4(2,v1,2)
								if next(dp_result) ~= nil then  
									makeT1andTsToNewTable(v1,dp_result)
								end 
								if next(dp_result) == nil then 
									dp_result = getXieDaiData3(2,v1)
									if next(dp_result) ~= nil then  
										makeT1andTsToNewTable(v1,dp_result)
									end 
								end 
							end 
						end 
					end 
				end 
			end 
		end 

		insertBombData(1)
	end 

	-- 最后分析结果，查看是否有手牌能一手全出的，若是有则将优先级排在第一
	sortResultData()

	-- 若isAI为真，则表示该次是需要获取最优解的牌型
	if isAI == true then
		local tmpData = {}
		-- 若为任意类型的话，选其中最长最多的牌数据
		if outType == GameCMD.OUTTYPE_ERROR then 
			local tmpInde = 0
			for k, v in ipairs(resultData or {}) do 
				if tmpInde < #v then 
					tmpInde = #v 
					tmpData = v
				end
			end 
		else
			tmpData = resultData[1]
		end

		if next(resultData) then 

			resultData,resultCount,validCount ={},1,1
			table.insert(resultData,tmpData)
		end
	end

	return resultData,resultCount,validCount
end 

-- 分析手牌是否全为单张，或全为对子(若带的牌中包含有炸弹，也属于非法值，判断为false)
-- 返回值：1、是否全为单；2、是否全为对子；3、被携带的牌否有炸弹组成数据
function _M.isAllSingleleAndAllDoubleCards(data,exceptData)

	local isAllSingle = false 
	local isAllDouble = false 
	local isHaveBomb = false 

	if next(data) == nil then 
		return isAllSingle,isAllDouble
	end 

	local analyseResult = _M.analyseCardData(data) 

	-- 带牌中的炸弹判断
	if (next(analyseResult.singleCardData[17]) ~= nil and next(analyseResult.singleCardData[16]) ~= nil) or analyseResult.fourCardCount > 0 then 
		return isAllSingle,isAllDouble
	end 

	-- 携带的牌中不能包含被携带的数据比如：333444 + 3,5
	-- 检测返回值3，炸弹成分判断
	if type(exceptData) == "table" and next(exceptData) ~= nil then 
		for k, v in ipairs(exceptData) do 
			-- 一般只要检测单张中是否包含该数据就可以了
			if next(analyseResult.singleCardData[v]) ~= nil then 
				isHaveBomb = true
				break  
			end 
		end 
	end 

	if analyseResult.singleCardCount == #data then 
		isAllSingle = true 
		return isAllSingle,isAllDouble,isHaveBomb
	end 

	if #data%2 == 0 and analyseResult.doubleCardCount == #data/2 then 
		isAllDouble = true 
	end

	return isAllSingle,isAllDouble,isHaveBomb
end 

-- 分析出牌组合
-- 参数1：出牌数据；
-- 参数2：true最后一手牌
function _M.getCardType(outData,isAll,isNew)

	if type(outData) == nil or next(outData) == nil then return GameCMD.OUTTYPE_ERROR end

	local outCount = #outData

	local firstPart,secondPart = {},{}

	-- 单张，对子判断
	if  outCount == 1 then
		local card = PublicFunc.getCardLogicValue(outData[1])
		do return GameCMD.OUTTYPE_SINGLE,card end 
	elseif outCount == 2 then 

		
		local card1 = PublicFunc.getCardLogicValue(outData[1])
		local card2 = PublicFunc.getCardLogicValue(outData[2])
		
		if (outData[1] == GameCMD.MAX_JOKER or outData[1] == GameCMD.MINI_JOKER)
		and (outData[2] == GameCMD.MAX_JOKER or outData[2] == GameCMD.MINI_JOKER) then 
			return GameCMD.OUTTYPE_WANGZHA
		end 

		if card1 == card2 then return GameCMD.OUTTYPE_DOUBLE,card1 end 

		return GameCMD.OUTTYPE_ERROR  
	end

	local analyseResult = _M.analyseCardData(outData) 

	-- 炸弹判断(四炸或3A炸)
	if analyseResult.fourCardCount == 1 and outCount == 4 then 				-- 炸弹类型
		local card = analyseResult.fourLogicValue[1]
		do return GameCMD.OUTTYPE_BOMB, card end 
	elseif analyseResult.fourCardCount == 1 then			-- 四带类型
		if _M.canSiDaiEr and (outCount == 6 or outCount == 8) then 

			local logicValue = analyseResult.fourLogicValue[1]

			firstPart = analyseResult.fourCardData[logicValue]

			PublicFunc.sortByCardLogic(firstPart)

			secondPart = PublicFunc.delDataFromTable(outData,firstPart)

			local isAllSingle, isAllDouble = _M.isAllSingleleAndAllDoubleCards(secondPart,exceptData)

			local daiCount = #secondPart

			if next(secondPart) ~= nil then 
				-- 按逻辑从大到小
				PublicFunc.sortByCardLogic(secondPart,1)
			end

			-- 插入到类型数据后
			for k, v in ipairs(secondPart or {}) do 
				table.insert(firstPart,v)
			end 

			local card = analyseResult.fourLogicValue[1]

			local exceptData = {}
			for k, v in ipairs(firstPart) do 
				local logic_value = PublicFunc.getCardLogicValue(v)
				table.insert(exceptData,logic_value)
			end 

			
			--增加四带一判断	
			if _M.canSiDaiEr and ((isAllSingle and daiCount == 2) or (daiCount == 4 and isAllDouble) or (daiCount == 2 and isAllDouble)) then
			
				if value1 == value2 then 
					do return GameCMD.OUTTYPE_SIDAIER,card,firstPart end
				else 
					return GameCMD.OUTTYPE_ERROR
				end 
			else 
				return GameCMD.OUTTYPE_ERROR
			end
		end
	end

	-- 三牌判断
	if analyseResult.threeCardCount + analyseResult.fourCardCount > 0 then 
		-- 连牌判断
		if analyseResult.threeCardCount + analyseResult.fourCardCount > 1 then
			
			local threeLinkResult,threeLinkCount = _M.analyseThreeLink(analyseResult,1,nil,nil,isNew)
			local isFeiJi = -1 
			local feijiValue = nil 
			for k, v in pairs(threeLinkResult) do 
				for k1, v1 in pairs(v) do 
					if next(v1) ~= nil then 
						if #outData - #v1 == k then 
							-- 飞机带单，带的牌不能是对子
							isFeiJi = GameCMD.OUTTYPE_FEIJI_DAN
							firstPart = clone(v1)
							--按逻辑从小到大
							PublicFunc.sortByCardLogic(firstPart,1)
							feijiValue = firstPart[#firstPart]
						elseif #outData - #v1 == k*2 then
							-- 飞机带对
							isFeiJi = GameCMD.OUTTYPE_FEIJI_DUI
							firstPart = clone(v1)
							--按逻辑从小到大
							PublicFunc.sortByCardLogic(firstPart,1)
							feijiValue = firstPart[#firstPart]
						elseif #outData - #v1 == 0 then 
							-- 飞机带对
							isFeiJi = GameCMD.OUTTYPE_FEIJI
							firstPart = clone(v1)
							--按逻辑从小到大
							PublicFunc.sortByCardLogic(firstPart,1)
							feijiValue = firstPart[#firstPart]
						end 
					end 
				end 
			end 

			if isFeiJi ~= -1 then 

				secondPart = PublicFunc.delDataFromTable(outData,firstPart)

				feijiValue = PublicFunc.getCardLogicValue(feijiValue)

				if isFeiJi == GameCMD.OUTTYPE_FEIJI and next(secondPart) == nil then 
					return isFeiJi,feijiValue,firstPart
				end 

				local exceptData = {}
				for k, v in ipairs(firstPart) do 
					local logic_value = PublicFunc.getCardLogicValue(v)
					table.insert(exceptData,logic_value)
				end

				local isAllSingle, isAllDouble, isHaveBomb = _M.isAllSingleleAndAllDoubleCards(secondPart,exceptData)

				if next(secondPart) ~= nil and not isHaveBomb then 

					if (isFeiJi == GameCMD.OUTTYPE_FEIJI_DAN and #firstPart/3 == #secondPart) 
					or (isFeiJi == GameCMD.OUTTYPE_FEIJI_DUI and #firstPart/3*2 == #secondPart and isAllDouble) then 
						
						-- 按逻辑从大到小
						PublicFunc.sortByCardLogic(secondPart,1)
						-- 插入到类型数据后
						for k, v in ipairs(secondPart) do 
							table.insert(firstPart,v)
						end 
						 
						return isFeiJi,feijiValue,firstPart
					else 
						return GameCMD.OUTTYPE_ERROR
					end  
					
				end 
			else
				return GameCMD.OUTTYPE_ERROR
			end
		else
			-- 三带一类型判断
			local leftCount = outCount - (analyseResult.threeCardCount*3)

			if (_M.canSanDaiEr and leftCount == analyseResult.threeCardCount*2)		-- 是否允许三带二
			or (_M.canSanBuDai and  leftCount == 0)									-- 是否允许三不带
			or (leftCount == 1) then 												-- 三带一是默认规则

				local logicValue = analyseResult.threeLogicValue[1]

				firstPart = analyseResult.threeCardData[logicValue]

				PublicFunc.sortByCardLogic(firstPart)

				secondPart = PublicFunc.delDataFromTable(outData,firstPart)

				local exceptData = {}
				for k, v in ipairs(firstPart) do 
					local logic_value = PublicFunc.getCardLogicValue(v)
					table.insert(exceptData,logic_value)
				end 

				local isAllSingle, isAllDouble, isHaveBomb = _M.isAllSingleleAndAllDoubleCards(secondPart,exceptData)
				-- 携带的牌中不能包含炸弹
				if isHaveBomb then 
					return GameCMD.OUTTYPE_ERROR
				end 

				local followCount = #secondPart

				if next(secondPart) ~= nil then 
					-- 按逻辑从大到小
					PublicFunc.sortByCardLogic(secondPart,1)
				end 

				-- 插入到类型数据后
				for k, v in ipairs(secondPart) do 
					table.insert(firstPart,v)
				end 

				if followCount == 0 then
					do return GameCMD.OUTTYPE_THREE,logicValue,firstPart end 
				elseif followCount == 1 and isAllSingle then 
					do return GameCMD.OUTTYPE_THREEWITHONE,logicValue,firstPart end 
				elseif followCount == 2 and isAllDouble then 
					do return GameCMD.OUTTYPE_THREEWITHTWO,logicValue,firstPart end 
				end 
			else
				return GameCMD.OUTTYPE_ERROR
			end 
		end 
	end

	-- 两连判断
	if analyseResult.doubleCardCount > 2 then 
		local order = {}
		for k, v in pairs(analyseResult.doubleCardData) do 
			if next(v) ~= nil then 
				local t = PublicFunc.getCardLogicValue(v[1])
				table.insert(order,t)
			end 
		end 

		if next(order) ~= nil then 
			PublicFunc.sortData(order)
		end 

		-- 连对判断
		if _M.dataIsLink(order) == true and outCount == analyseResult.doubleCardCount*2 and #order > 2 then 
			do return GameCMD.OUTTYPE_DOUBLELINK,order[1] end 
		else
			return GameCMD.OUTTYPE_ERROR
		end 
	end 

	-- 顺子判断
	local linkData,linkCount = _M.analyseLink(analyseResult,1)

	if linkCount > 0 and linkData[outCount] ~= nil then
		local t = PublicFunc.getCardLogicValue(linkData[outCount][1][1])
		return GameCMD.OUTTYPE_SHUNZI,t
	end

	return GameCMD.OUTTYPE_ERROR
end

-- 判断是否仅仅只包含炸弹数据
-- 返回值：是否有炸弹，
function _M.isLastCardsCanOut(data)
	-- 数据判断
	if type(data) ~= "table" and next(data) == nil then 
		return false 
	end 

	local allCardIsBomb = false  

	local analyseResult = _M.analyseCardData(data)
	local bomResult,bomCount = _M.analyseBomb(analyseResult,1)
	
	if bomCount == 1 then 
		local count = 0
		for k, v in pairs(bomResult) do 
			if next(v) ~= nil then 
				count = count + #v[1]  
			end 
		end 
		if count == #data then 
			allCardIsBomb = true 
		end 
	end 
	
	-- 若最后在有炸弹且牌都为炸弹，则可以出
    -- date 20190630 by hulin 有炸弹则不自动打出
	if bomCount == 0 then 
		return true
	end 

	return false 
end 

-- 分析顺子
function _M.analyseLink(analyseResult,analyseType,outData,miniValue)

	local resultData,resultCount = {},0

	if (analyseType == 2 and type(outData) ~= "table") or (analyseType ~= 1 and analyseType ~= 2) then 
		assert(false,"Function param error in analyseLink")
	end

	miniValue = analyseType == 1 and 0 or miniValue

	local order = clone(analyseResult.AllLogicData)

	if next(order) == nil then 
		return resultData,resultCount
	end 

	PublicFunc.sortData(order)

	-- 默认搜初始长度5开始的顺子，一直搜索到长度为单牌总数长度截止
	local startLen = 5	
	local endLen = analyseType == 1 and #order or #outData

	-- 顺子的最大场度为12
	if endLen == 13 then endLen = 12 end 

	if analyseType == 2 then 
		startLen = #outData
		endLen = #outData
	end 

	if #order < 5 then return resultData,resultCount end 

	-- 搜索顺子，没有比较牌的话，遍历所有顺子，若有，则只搜索指定长度且大于比牌数据的顺子
	-- 参数1：从长度start开始搜索，到参数2的长度
	-- 参数2：终止的顺子长度
	local function searchLink(startLen,endLen)

		for i = startLen, endLen do 

			-- 	顺子数据临时容器
			local tempLink = {}

			-- 顺子标识符
			local isLink = false

			local dataLen = #order - i + 1

			if dataLen <= 0 then break end 

			for j = 1, dataLen do 

				-- 取出数据
				local t_len = i+j-1

				local tmpData = PublicFunc.getTableByIndex(order,j,t_len)

				-- 若最小牌大于取出的判断数据最小，则终止下面
				if miniValue < tmpData[1] then

					isLink = _M.dataIsLink(tmpData)

					if isLink == true then 
						
						local t = _M.composeData(analyseResult,tmpData,1)

						if resultData[i] == nil then resultData[i] = {} end 

						table.insert(resultData[i],t)

						resultCount = resultCount + 1
					end
				end 
			end 
		end 
	end
		
	searchLink(startLen,endLen)

	return resultData,resultCount
end 

-- 组成数据
function _M.composeData(analyseResult,logicData,sameCount)
	
	if type(analyseResult) ~= "table" or type(logicData) ~= "table" or next(logicData) == nil or next(analyseResult) == nil then 
		assert(false,"错误：参数不合法~~！")
	end 

	local resultData = {}

	for i=1, #logicData do 
		local logicValue = logicData[i]
		for j=1, sameCount do 
			local tmpData = analyseResult.AllData[logicValue][1][j]
			table.insert(resultData,tmpData)
		end 
	end 

	return resultData
end

-- 该函数只用于分析后的单张、对子、三张等返回结果数据结构类型的解析
-- 参数1：分析指定牌型的数据；
function _M.dismantleTableData(data)
	
	local result = {}

	for k, v in ipairs(data) do 



	end 

end

-- 判断table扑克实际数据是否连贯(参数条件：1、牌逻辑值；2、从小到大)
function _M.dataIsLink(data)
		
	local isLink = false
	
	local len = #data

	local maxLinkNum = 1

	local tempData = data[1]

	for i=2, len do 
		-- 该连贯不能到2
		if data[i] == 15 then break end 

		if data[i] == tempData + 1 then
			maxLinkNum = maxLinkNum + 1
			tempData = data[i] 
		else
			break
		end 
	end 

	if maxLinkNum == len then 
		return true 
	else
		return false
	end 
end


-- 分析飞机
function _M.analyseThreeLink(analyseResult,analyseType,outData,miniValue,isNew)

	local resultData,resultCount = {},0

	if (analyseType == 2 and type(outData) ~= "table") or (analyseType ~= 1 and analyseType ~= 2) then 
		assert(false,"Function param error in analyseThreeLink")
	end

	miniValue = analyseType == 1 and 0 or miniValue

	local threeData,threeCount = _M.analyseThreeData(analyseResult,1)

	local order = {}

	if threeCount < 2 then return resultData,resultCount end 

	threeCount = 0

	for k, v in pairs(threeData) do 
		for k1, v1 in pairs(v) do 
			local t_logic = PublicFunc.getCardLogicValue(v1[1])
			if miniValue < t_logic then 
				table.insert(order,t_logic)
				threeCount = threeCount + 1
			end 
		end 
	end 

	if next(order) == nil then 
		return resultData,resultCount
	end 

	PublicFunc.sortData(order)

	-- 默认搜初始长度2开始的顺子，一直搜索到长度为单牌总数长度截止
	local startLen = analyseType == 1 and 2 or math.ceil(#outData/5)

	local endLen = analyseType == 1 and threeCount or math.ceil(#outData/5)

	if threeCount < 2 then return resultData,resultCount end 

	-- 参数1：从长度start开始搜索，到参数2的长度
	-- 参数2：终止的顺子长度
	local function searchLink(startLen,endLen)

		for i = startLen, endLen do 

			-- 	顺子数据临时容器
			local tempLink = {}

			-- 顺子标识符
			local isLink = false

			local dataLen = threeCount - i + 1

			if dataLen <= 0 then break end 

			for j = 1, dataLen do 

				-- 取出数据
				local t_len = i+j-1

				local tmpData = PublicFunc.getTableByIndex(order,j,t_len)

				isLink = _M.dataIsLink(tmpData)
				--这里计算的时候，四张数量没有x4
				local leftNum = analyseResult.singleCardCount + analyseResult.doubleCardCount*2 + analyseResult.threeCardCount*3 + analyseResult.fourCardCount*4 - i*3
				-- 要满足有飞机，必须有足够携带的牌，否则成不了飞机
				-- if isLink == true and leftNum >= i then 
				if isLink == true then 
						
					local t = _M.composeData(analyseResult,tmpData,3)

					if resultData[i] == nil then resultData[i] = {} end 

					table.insert(resultData[i],t)

					resultCount = resultCount + 1
				end 
			end 
		end 
	end
		
	searchLink(startLen,endLen)

	return resultData,resultCount
end 


-- 分析姐妹对
function _M.analyseDoubleLink(analyseResult,analyseType,outData,miniValue)

	local resultData,resultCount = {},0

	if (analyseType == 2 and type(outData) ~= "table") or (analyseType ~= 1 and analyseType ~= 2) then 
		assert(false,"Function param error in analyseDoubleData")
	end

	miniValue = analyseType == 1 and 0 or miniValue

	local doubleData,doubleCount = _M.analyseDoubleData(analyseResult,1)

	local order = {}

	if doubleCount < 3 then return resultData,resultCount end 

	doubleCount = 0

	for k, v in pairs(doubleData) do 
		for k1, v1 in pairs(v) do 
			local t_logic = PublicFunc.getCardLogicValue(v1[1])
			if miniValue < t_logic then 
				table.insert(order,t_logic)
				doubleCount = doubleCount + 1
			end 
		end 
	end 

	if next(order) == nil then 
		return resultData,resultCount
	end 

	PublicFunc.sortData(order)

	local startLen = analyseType == 1 and 3 or (#outData/2)

	local endLen = analyseType == 1 and doubleCount or (#outData/2)

	-- 参数1：从长度start开始搜索，到参数2的长度
	-- 参数2：终止的顺子长度
	local function searchLink(startLen,endLen)

		for i = startLen, endLen do 

			-- 	顺子数据临时容器
			local tempLink = {}

			-- 顺子标识符
			local isLink = false

			local dataLen = doubleCount - i + 1

			if dataLen <= 0 then break end 

			for j = 1, dataLen do 

				-- 取出数据
				local t_len = i+j-1

				local tmpData = PublicFunc.getTableByIndex(order,j,t_len)

				isLink = _M.dataIsLink(tmpData)

				if isLink == true then 
						
					local t = _M.composeData(analyseResult,tmpData,2)

					if resultData[i] == nil then resultData[i] = {} end 

					table.insert(resultData[i],t)

					resultCount = resultCount + 1
				end
			end 
		end 
	end
		
	searchLink(startLen,endLen)

	return resultData,resultCount
end 


-- 分析炸弹
function _M.analyseBomb(analyseResult,analyseType,outData,maxValue)
	
	local resultData,resultCount = {},0

	-- 只有需要比较的时候，才获取需要比较的牌的逻辑值，否则默认做0比较（即遍历所有该牌型）
	maxValue = analyseType == 1 and 0 or maxValue

	-- 若炸弹为3A类型，那么
	if maxValue == 14 and #outData == 3 then maxValue = 0 end

	if (analyseType == 2 and type(outData) ~= "table") or (analyseType ~= 1 and analyseType ~= 2) then 
		assert(false,"Function param error in analyseBomb")
	end

	-- 从数据去筛选出符合牌并插入到返回数据中去
	local function dismantleData(data,arrayIndex,num)
		for i = maxValue+1, 15 do
			if next(data[i]) ~= nil then 
				if resultData[arrayIndex] == nil then resultData[arrayIndex] = {} end 
				local tempData = {}
				local times = 0
				for j=1, num do 
					table.insert(tempData,data[i][j])
					times = times + 1
				end 

				if num == 3 and times == 3 and maxValue == 0 then 
					local logicValue = PublicFunc.getCardLogicValue(tempData[1])
					if logicValue == 14 then 
						table.insert(resultData[arrayIndex],tempData)
						resultCount = resultCount + 1
					end 
				elseif times == num then 
					table.insert(resultData[arrayIndex],tempData)
					resultCount = resultCount + 1
				end 
			end 
		end 
	end

	-- 炸弹
	if analyseResult.fourCardCount > 0 then dismantleData(analyseResult.fourCardData,4,4) end 


	if next(analyseResult.singleCardData[16]) ~= nil and next(analyseResult.singleCardData[17]) ~= nil then 
		-- 插入王炸
		resultData[17] = {}
		table.insert(resultData[17], {analyseResult.singleCardData[16][1],analyseResult.singleCardData[17][1]})
		resultCount = resultCount + 1
	end 

	-- 在这要考虑到AAA也是炸弹的一种的情况，3A为最小的炸弹
	-- if analyseType == 1 and next(analyseResult.threeCardData[14]) ~= nil then
	-- 	dismantleData(analyseResult.threeCardData,3,3)
	-- end 

	return resultData,resultCount
end


-- 分析三张数据
-- 参数1：分析后的牌数据
-- 参数2：需要分析的类型 1：分析三张，并获取所有三张数据；2：和参数3比较，获取所有比参数大的数据
function _M.analyseThreeData(analyseResult,analyseType,outData,maxValue)
	
	local resultData,resultCount = {},0

	-- 只有需要比较的时候，才获取需要比较的牌的逻辑值，否则默认做0比较（即遍历所有该牌型）
	maxValue = analyseType == 1 and 0 or maxValue

	if (analyseType == 2 and type(outData) ~= "table") or (analyseType ~= 1 and analyseType ~= 2) then 
		assert(false,"Function param error in analyseThreeData")
	end

	-- 从数据去筛选出符合牌并插入到返回数据中去
	local function dismantleData(data,arrayIndex,num)
		for i = maxValue+1, 15 do
			if next(data[i]) ~= nil then 
				if resultData[arrayIndex] == nil then resultData[arrayIndex] = {} end 
				local tempData = {}
				local times = 0
				for j=1, num do 
					table.insert(tempData,data[i][j])
					times = times + 1
				end 

				if times == num then 
					table.insert(resultData[arrayIndex],tempData)
					resultCount = resultCount + 1
				end
			end 
		end 
	end

	-- 纯三张
	if analyseResult.threeCardCount > 0 then dismantleData(analyseResult.threeCardData,3,3) end

	-- 从四张拆出
	if analyseResult.fourCardCount > 0 then dismantleData(analyseResult.fourCardData,4,3) end 

	return resultData,resultCount
end 


-- 分析对子数据
-- 参数1：分析后的牌数据
-- 参数2：需要分析的类型 1：分析对子，并获取所有对子数据；2：和参数3比较，获取所有比参数大的数据
-- 参数3：出牌数据
-- 参数4：出牌最大逻辑值
function _M.analyseDoubleData(analyseResult,analyseType,outData,maxValue)
		
	local resultData,resultCount = {},0

	-- 只有需要比较的时候，才获取需要比较的牌的逻辑值，否则默认做0比较（即遍历所有该牌型）
	maxValue = analyseType == 1 and 0 or maxValue

	if (analyseType == 2 and type(outData) ~= "table") or (analyseType ~= 1 and analyseType ~= 2) then 
		assert(false,"Function param error in analyseDoubleData")
	end

	-- 从数据去筛选出符合牌并插入到返回数据中去
	local function dismantleData(data,arrayIndex,num)
		for i = maxValue+1, 15 do
			if next(data[i]) ~= nil then 
				if resultData[arrayIndex] == nil then resultData[arrayIndex] = {} end 
				local tempData = {}
				local times = 0
				for j=1, num do 
					table.insert(tempData,data[i][j])
					times = times + 1
				end 

				if times == num then 
					table.insert(resultData[arrayIndex],tempData)
					resultCount = resultCount + 1
				end 
			end 
		end 
	end

	-- 纯对子
	if analyseResult.doubleCardCount > 0 then dismantleData(analyseResult.doubleCardData,2,2) end 

	-- 从三张拆出对子
	if analyseResult.threeCardCount > 0 then dismantleData(analyseResult.threeCardData,3,2) end

	-- 从四张拆出对子
	if analyseResult.fourCardCount > 0 then dismantleData(analyseResult.fourCardData,4,2) end 

	return resultData,resultCount
end


-- 分析单牌数据
-- 参数1：分析后的牌数据
-- 参数2：需要分析的类型 1：分析单牌，并获取所有单牌数据；2：和参数3比较，获取所有比参数大的数据
-- 参数3：出牌数据
-- 参数4：出牌最大逻辑值
function _M.analyseSingleData(analyseResult,analyseType,outData,maxValue)
	
	local resultData,resultCount = {},0

	-- 只有需要比较的时候，才获取需要比较的牌的逻辑值，否则默认做0比较（即遍历所有该牌型）
	maxValue = analyseType == 1 and 0 or maxValue

	if (analyseType == 2 and type(outData) ~= "table") or (analyseType ~= 1 and analyseType ~= 2) then 
		assert(false,"Function param error in analyseSingleData")
	end 

	-- 从数据去筛选出符合牌并插入到返回数据中去
	local function dismantleData(data,arrayIndex,num)
		for i = maxValue+1, 17 do
			if next(data[i]) ~= nil then 
				if resultData[arrayIndex] == nil then resultData[arrayIndex] = {} end 
				local tempData = {}
				for j=1, num do 
					table.insert(tempData,data[i][j])
				end 
				table.insert(resultData[arrayIndex],tempData)
				resultCount = resultCount + 1
			end 
		end 
	end

	-- 拆出纯单张
	if analyseResult.singleCardCount > 0 then dismantleData(analyseResult.singleCardData,1,1) end 
		
	-- 从对子拆数据
	if analyseResult.doubleCardCount > 0 then dismantleData(analyseResult.doubleCardData,2,1) end 

	-- 从三张拆出单牌
	if analyseResult.threeCardCount > 0 then dismantleData(analyseResult.threeCardData,3,1) end

	-- 从四张拆出单牌
	if analyseResult.fourCardCount > 0 then dismantleData(analyseResult.fourCardData,4,1) end
		
	return resultData,resultCount
end

-- 分析数据
function _M.analyseCardData(cardData)

	local analyseResult = _M.newAnalyseCardData()
	
	if cardData == nil or type(cardData) ~= "table" or next(cardData) == nil then 
		assert(false,"错误：分析牌型传入的参数不正确~！")
	end 

	PublicFunc.sortByCardLogic(cardData)

	local cardCount = #cardData

	--扑克分析
	local i = 1

	local isContinue = false

	if i <= cardCount then isContinue = true end 

	while isContinue do 

		-- 定义变量
		local sameCount = 1
		local sameCardData = {cardData[i]}

		if card == nil then 
			local bb = 1
		end 

		local logicValue = PublicFunc.getCardLogicValue(cardData[i])

		-- 搜索同牌
		for j = i+1, cardCount do 
			-- 获取扑克
			if PublicFunc.getCardLogicValue(cardData[j]) ~= logicValue then break end 
			-- 相同数+1
			sameCount = sameCount + 1
			-- 设置扑克
			table.insert(sameCardData,cardData[j])
		end 

		-- 设置结果
		if sameCount == 1 then
			analyseResult.singleCardCount = analyseResult.singleCardCount + 1
			analyseResult.singleCardData[logicValue] = sameCardData
			table.insert(analyseResult.singleLogicValue,logicValue)
		elseif sameCount == 2 then 
			analyseResult.doubleCardCount = analyseResult.doubleCardCount + 1
			analyseResult.doubleCardData[logicValue] = sameCardData
			table.insert(analyseResult.doubleLogicValue,logicValue)
		elseif sameCount == 3 then 
			analyseResult.threeCardCount = analyseResult.threeCardCount + 1
			analyseResult.threeCardData[logicValue] = sameCardData
			table.insert(analyseResult.threeLogicValue,logicValue)
		elseif sameCount == 4 then 
			analyseResult.fourCardCount = analyseResult.fourCardCount + 1
			analyseResult.fourCardData[logicValue] = sameCardData
			table.insert(analyseResult.fourLogicValue,logicValue)
		end 

		table.insert(analyseResult.AllData[logicValue],sameCardData)

		table.insert(analyseResult.AllLogicData,logicValue)

		-- 设置递增
		i = i + sameCount;

		if i <= cardCount then
			isContinue = true
		else
			isContinue = false
		end  
	end

	return analyseResult
end


-- 分析牌的数据初始化
function _M.newAnalyseCardData()

	local data = {}

	data.singleCardData = {}			-- 单张数据
	data.doubleCardData = {}			-- 对子数据
	data.threeCardData = {}				-- 三张数据
	data.fourCardData = {}				-- 四张数据

	data.singleCardCount = 0
	data.doubleCardCount = 0
	data.threeCardCount = 0
	data.fourCardCount = 0

	data.wangZhaData = {}
	data.wangZhaCount = 0

	-- 所有牌的集合
	data.AllData = {}
	data.AllLogicData = {}

	-- 四张列表（逻辑值）
	data.fourLogicValue = {}

	-- 三张列表（逻辑值）
	data.threeLogicValue = {}

	-- 对子列表（逻辑值）
	data.doubleLogicValue = {}

	-- 单张列表（逻辑值）
	data.singleLogicValue = {}

	for i=1, 17 do 
		data.AllData[i]			= {}
		data.singleCardData[i] 	= {}		
		data.doubleCardData[i] 	= {}
		data.threeCardData[i] 	= {}
		data.fourCardData[i] 	= {}
	end 

	return data
end

return _Md�