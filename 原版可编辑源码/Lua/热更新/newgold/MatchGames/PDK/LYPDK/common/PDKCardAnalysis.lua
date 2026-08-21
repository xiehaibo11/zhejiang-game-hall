local _M = {}

local GETTYPE 		= 1			-- 获取类型
local GETCOMPARE 	= 2			-- 获取比较数据

local FEIJIFIRSTOUT = true		-- 飞机首出少带可出完	：	false 不可以，true 可以
local FEIJIOUT		= true		-- 飞机接风少带可以出完	：	false 不可以，true 可以
local THREEFIRSTOUT = true 		-- 三张首出可以出完		：	false 不可以，true 可以
local THREEOUT 		= true 		-- 三张接风可以出完		：	false 不可以，true 可以

local BOMBAPART 	= true 		-- 炸弹是否可以拆开：true -> 可拆模式；false->不可拆模式
local SIDAI2 = true
local SIDAI3 = false
local IS_BOMB333 = false

local SANDAI2 = true
local SANDAI1 = false

-- 初始化游戏规则
function _M.initGameRuleData(gameRule)
	-- FEIJIFIRSTOUT 	= gameRule.feijifirstout 
	-- FEIJIOUT	 	= gameRule.feijiout 
	-- THREEFIRSTOUT 	= gameRule.threefirstout 
	-- THREEOUT 		= gameRule.threeout

	if g_gameGlobal:isZYPDK() then 
		SIDAI2 = g_gameGlobal:hasWanfa2( g_gameConstant.GR2_PDK_ZONGYANG_SIDAI2 )
		SIDAI3 = g_gameGlobal:hasWanfa2( g_gameConstant.GR2_PDK_ZONGYANG_SIDAI3 )

		SANDAI2 = g_gameGlobal:hasWanfa2( g_gameConstant.GR2_PDK_ZONGYANG_3DAI2 )
		SANDAI1 = g_gameGlobal:hasWanfa2( g_gameConstant.GR2_PDK_ZONGYANG_3DAI1 )
	else
		SIDAI2 = g_gameGlobal:hasWanfa2( g_gameConstant.GR2_PDK_ANQING_SIDAI2 )
		SIDAI3 = g_gameGlobal:hasWanfa2( g_gameConstant.GR2_PDK_ANQING_SIDAI3 )

		SANDAI2 = g_gameGlobal:hasWanfa2( g_gameConstant.GR2_PDK_ANQING_3DAI2 )
		SANDAI1 = g_gameGlobal:hasWanfa2( g_gameConstant.GR2_PDK_ANQING_3DAI1 )
	end

	
	

	--默认三带二 ， 兼容新老包
	if not SANDAI2 and not SANDAI1 then 
		SANDAI2 = true
	end

	IS_BOMB333 = gameRule.isBomb333

end


-- 报单时排序手牌(排序规则，从多到少，若为单张，则从大到小)
function _M.sortDataWhenWarn(data)
	local sort_func = function(a,b)
		if #a ~= #b then 
			do return #a > #b end 
		else 
			local aLogic = PublicFunc.getCardLogicValue(a[1])
			local bLogic = PublicFunc.getCardLogicValue(b[1])
			do return aLogic > bLogic end 
		end 
	end

	table.sort(data,sort_func)
end

function _M.getMaxSingleCard(data)

	local handData = clone(data)
	local analyseResult = _M.analyseCardData(handData)
	local singleResult,singleCount = _M.analyseSingleData(analyseResult,1)
	local singleData = {}
	PublicFunc.toUnidimensionalTable(singleResult,singleData)

	-- 排序单牌
	PublicFunc.sortByCardLogic(singleData,1)

	local maxLogic = PublicFunc.getCardLogicValue(singleData[1])

	return maxLogic
end 


function _M.isMaxSingleCard(handData,card)

	local maxLogic = _M.getMaxSingleCard(handData)

	local cardLogic = PublicFunc.getCardLogicValue(card[1])

	if maxLogic == cardLogic then 
		return true 
	else
		return false
	end 
end

-- 判断是否包含炸弹数据
-- 参数1：手牌分析后的数据；
-- 参数2：出牌数据；
-- 返回值：true-> 表示出牌带有炸弹，false-> 表示出牌没有炸弹或是模式支持炸弹可拆或者出牌就是炸弹模式
function _M.isIncludeBombData(analyseResult,outData)

	local isInclude = false

	-- 判断炸弹可拆模式
	if BOMBAPART == true then 
		return isInclude
	end

	local outType = _M.getCardType(outData,true)


	if PublicFunc.isBomb(outType) then 
		return false
	end


	--local handData = clone(data)
	--local analyseResult = _M.analyseCardData(handData)
	local bombResult,bombCount = _M.analyseBomb(analyseResult,1)

	local logicData = {}
	if bombCount > 0 then 
		for k, v in pairs(bombResult) do 
			for k1, v1 in pairs(v) do 
				if next(v1) ~= nil then 
					local logic = PublicFunc.getCardLogicValue(v1[1])
					table.insert(logicData,logic)
				end 
			end 
		end 
	end 

	if next(logicData) ~= nil then 
		for k, v in pairs(analyseResult.AllLogicData or {}) do 
			if isInclude == true then 
				break 
			end 
			for k1, v1 in pairs(logicData or {}) do 
				if v1 == v then 
					isInclude = true 
					break  
				end 
			end 
		end 
	end 

	return isInclude
end


function _M.hasCardInHand(handData , card)

	if not handData then return false end

	for i,v in ipairs(handData) do
		if v == card then 
			return true
		end
	end

	return false

end


-- 出牌比较
function _M.compareWithOutData(compareData,allData,outData,mustOutCard)

	-- local outData = {}
	-- local compareData = {4 , 20 , 36 , 52 , 3 , 19 , 35 , 51  , 8}
	-- local allData = {4 , 20 , 36 , 52 , 3 , 19 , 35 , 51  , 8}

	local isAll = #allData == #compareData

	local isFirstOut = #allData == 16

	if mustOutCard ~= 34 then 
		if not isFirstOut or next(outData) ~= nil then 
			mustOutCard = 0
		end
	end


    local outType,outMiniValue = _M.getCardType(outData,false)

	local _mustOutCard,_compareData = mustOutCard,compareData

	local allAnalyseResult = _M.analyseCardData(allData) 

	-- 是否含有必出牌
	local function isHavaMustOutCard()

		local isHave = false
		
		-- 若是炸弹不可拆模式
		if BOMBAPART == false then 
			local isInclude = _M.isIncludeBombData(allAnalyseResult,_compareData)
			if isInclude == true then 
				return isHave
			end 
		end 

		if _mustOutCard == 0 or _mustOutCard == nil then return true end 
	
		for k, v in pairs(_compareData) do 
			if v == mustOutCard then 
				isHave = true 
				break
			end 
		end 

		return isHave
	end 

	if type(compareData) ~= "table" or next(compareData) == nil then return false end 

	local compareType,compareMiniValue = _M.getCardType(compareData,isAll,outType , isFirstOut)

	if outType == -1 or outType == nil then 
		outType = GameCMD.OUTTYPE_NOCARD
	end

	-- 首出类型判断
	if outType == GameCMD.OUTTYPE_NOCARD and compareType > outType then
		-- 若为三带一，三不带类型
		if compareType == GameCMD.OUTTYPE_THREE or (SANDAI2 and compareType == GameCMD.OUTTYPE_THREEWITHONE) then 
			-- if THREEFIRSTOUT == true then
			-- 	do return isHavaMustOutCard() end
			-- else
			-- 	return false
			-- end

			return isAll

		elseif compareType == GameCMD.OUTTYPE_FEIJINOMORE then
			-- if FEIJIFIRSTOUT == true then
			-- 	do return isHavaMustOutCard() end
			-- else
			-- 	return false
			-- end
			return isAll
		end
		return isHavaMustOutCard() 
	end 

	if compareType == GameCMD.OUTTYPE_ERROR then return false end 

	-- 炸弹判断
	if compareType == GameCMD.OUTTYPE_BOMBAAA then 
		return isHavaMustOutCard() 
	elseif compareType == GameCMD.OUTTYPE_BOMB333 and (outType ~= GameCMD.OUTTYPE_BOMB333 and  outType ~= GameCMD.OUTTYPE_BOMB) then 
		return isHavaMustOutCard() 
	elseif compareType == GameCMD.OUTTYPE_BOMB and outType ~= GameCMD.OUTTYPE_BOMB then 
		return isHavaMustOutCard() 
	end	

	-- 规则判断
	if compareType ~= outType then	
		-- 是否三带类型
		-- if outType == GameCMD.OUTTYPE_THREEWITHTWO and (compareType == GameCMD.OUTTYPE_THREEWITHONE or compareType == GameCMD.OUTTYPE_THREE) then 
		-- 	local isOk = compareMiniValue > outMiniValue 
		-- 	if isOk then 
		-- 		return isHavaMustOutCard()
		-- 	end
		-- end

		-- 是否四带类型
		-- if outType == GameCMD.OUTTYPE_SIDAISAN and (compareType == GameCMD.OUTTYPE_SIDAIYI or compareType == GameCMD.OUTTYPE_SIDAIER) then 
		-- 	local isOk = compareMiniValue > outMiniValue 
		-- 	if isOk then 
		-- 		return isHavaMustOutCard()
		-- 	end
		-- end

		-- 是否为飞机类型：足够带牌，不够带牌
		-- if compareType == GameCMD.OUTTYPE_FEIJINOMORE and outType == GameCMD.OUTTYPE_FEIJI then
		-- 	local isOk = compareMiniValue > outMiniValue 
		-- 	if isOk then 
		-- 		return isHavaMustOutCard()
		-- 	end
		-- end
	
		return false 
	end 

	-- 顺子判断
	if outType == GameCMD.OUTTYPE_SHUNZI and compareType == GameCMD.OUTTYPE_SHUNZI then
		if #outData == #compareData then 
			do return isHavaMustOutCard() end
		else
			return false
		end 
	end 

	local isOk = compareMiniValue > outMiniValue 

	if isOk then 
		return isHavaMustOutCard()
	end

	return false
end


-- 检测是否包含可出牌
function _M.isIncludeCard(data,mustCard)
	local isInclude = false 
	-- 判断必出牌
	if mustCard == nil or mustCard == 0 then 
		return true
	else
		for k, v in pairs(data or {}) do 
			if v == mustCard then 
				isInclude = true 
				break 
			end 
		end
	end 

	return isInclude
end


-- 智能提示
-- 参数1: 需要分析的牌集合
-- 参数2：出牌数据（亦是比牌数据）
-- 参数3：是否包含必出牌
-- 参数4：是否选中最大最优牌（只返回一种牌）
-- 参数5：是否为全部手牌
function _M.aiTips(handData,outData,mustOutCard,isAI,allData,isSingle)

	-- mustOutCard = 0
	-- outData = {3 , 19 , 35 , 51}

	local outData = outData or {}

	local isAllData = #handData == #allData

	local handCount,outCount,validCount = 0,0,0
	local isFirstOut = #allData == 16

	if mustOutCard ~= 34 then 
		if not isFirstOut or next(outData) ~= nil then 
			mustOutCard = 0
		end
	end

	local _mustOutCard,_isSingle = mustOutCard,isSingle

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
	
	if type(handData) ~= "table" or next(handData) == nil then return resultData,resultCount end 
	

	if outData ~= nil and type(outData) == "table" and next(outData) ~= nil then outCount = #outData end 
	
	handCount = #handData

	local outType,outMiniValue = _M.getCardType(outData,false)

	local analyseResult = _M.analyseCardData(handData)

	local allAnalyseResult = _M.analyseCardData(allData)
	
	local singleResult,singleCount = _M.analyseSingleData(analyseResult,1)

	local doubleResult,doubleCount = _M.analyseDoubleData(analyseResult,1)

	local threeResult,threeCount = _M.analyseThreeData(analyseResult,1)

	local maxLogic = nil
	if _isSingle == true then 
		maxLogic = _M.getMaxSingleCard(handData)
	end 

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
			-- 判断最大单牌（报警的情况下）
			if _isSingle == true then 
				if #insertData == 1 then  
					local tLogic = PublicFunc.getCardLogicValue(insertData[1])
					if tLogic == maxLogic then 
						isInsert = true
					else
						isInsert = false
					end 
				else
					isInsert = true
				end 
			else
				isInsert = true
			end 
		end 

		if isInsert == true then 

			local isIncludeBomb = _M.isIncludeBombData(allAnalyseResult,insertData) 

			if isIncludeBomb == false then 
				table.insert(resultData,insertData)
				resultCount = resultCount + 1
				if isValid == nil or isValid == false then  
					validCount = validCount + 1
				end
			end 
		end 
	end 

	-- 普通牌型插入炸弹数据
	local function insertBombData(kind)

		local bombResult,bombCount
		
		if kind == 1 then 
			bombResult,bombCount = _M.analyseBomb(analyseResult,1)
		else
			bombResult,bombCount = _M.analyseBomb(analyseResult,2,outData,outMiniValue ,outType)
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

	local function removeSameDataByNum(data,num)

		for k, v in pairs(data or {}) do 


		end 
	end 

	-- 返回携带牌的各种组合
	-- 参数1：携带的张数；
	-- 参数2：携带牌不包含的扑克牌数据；
	-- 参数3：连牌的长度
	local function getXieDaiData2(num,exceptData,linkLen)

		local result = {}

		local zuheData = {}

		local t3_Num = 0
		local t4_Num = 0

		if linkLen%3 == 0 then 
			t3_Num = linkLen
		else
			t4_Num = linkLen
		end 

		-- 若单张大于需要带的牌，那么久删除2张即两张以上的牌
		if analyseResult.singleCardCount >= num then 
			-- 若够，全取单牌
			local t = clone(analyseResult.singleCardData)

			local daiData = {}

			PublicFunc.toUnidimensionalTable(t,daiData)

			zuheData = PublicFunc.commzuhe(daiData,num)

		elseif analyseResult.singleCardCount + analyseResult.doubleCardCount*2 >= num then 
			-- 若单不够，那就拆最小的对子，组合
			local needNDouble = math.ceil((num - analyseResult.singleCardCount)/2)		-- 向上取整，所需对子数量
			
			local t_double = {}											-- 取最小的needNDouble个对子，和单牌组合

			local count = 0
			-- 获取最小的needNDouble个对子
			for k, v in ipairs(analyseResult.doubleCardData or {}) do 
				if count >= needNDouble then break end 
				if next(v) ~= nil then 
					table.insert(t_double,v)
					count = count + 1
				end 
			end 

			-- 将对自己变成一维数据
			local t_data = {}
			PublicFunc.toUnidimensionalTable(t_double,t_data)

			local single = {}
			
			if analyseResult.singleCardCount > 1 then 
				local needSingNum = num - needNDouble*2
				local t = clone(analyseResult.singleCardData)
				PublicFunc.toUnidimensionalTable(t,single)
				PublicFunc.sortByCardLogic(single)

				-- 判断单牌中数据是奇数还是偶数————若是奇数，去掉最大的单牌
				if #single%2 == 1 then 
					table.remove(single,#single)
				end
				
				-- 删除多余的数据
				local isDel = needSingNum < #single

				while isDel do 

					local t_len = #single

					table.remove(single,t_len)

					isDel = needSingNum < #single
				end 
			end 

			local t1 = {}
			PublicFunc.toUnidimensionalTable({single,t_data},t1 , num)
			table.insert(zuheData,t1)

		elseif analyseResult.singleCardCount + analyseResult.doubleCardCount*2 + analyseResult.threeCardCount*3 >= num + t3_Num then 

			-- 除了单张和对子还需要多少张牌
			local needNum = num - analyseResult.singleCardCount - analyseResult.doubleCardCount*2

			local needThreeNum = math.ceil(needNum/3)		-- 向上取整，所需数量
		
			local t_three = {}
			local count = 0

			-- 取最小的三张
			for k, v in ipairs(analyseResult.threeCardData or {}) do 
				if count >= needThreeNum then break end 
				if next(v) ~= nil then 
					local isOk  = true
					local tmp = {}
					local delNum =  linkLen > 4 and linkLen/(#exceptData) or 4
					for k1, v1 in pairs(exceptData) do 
						local l1 = PublicFunc.getCardLogicValue(v[1])
						if l1 == v1 then 
							isOk = false
							break
						end 
							--[[
							local insertNum = #v - delNum 
							for m=1, insertNum do 
								table.insert(tmp,v[m])
							end 
						else
							table.insert(tmp,v)
						end ]]
					end

					if isOk == true then 
						table.insert(t_three,v)
						count = count + 1
					end 

					--table.insert(t_three,tmp)
				end 
			end 

			-- 三张取需要的长度
			local t3 = {}
			PublicFunc.toUnidimensionalTable(t_three,t3)
			PublicFunc.sortByCardLogic(t3)
			t3 = PublicFunc.getTableByIndex(t3,1,needNum)

			-- 取所有的两张
			local t2 = {}
			local t_double = {}
			for k, v in ipairs(analyseResult.doubleCardData or {}) do 
				if next(v) ~= nil then 
					table.insert(t_double,v)
				end 
			end 
			PublicFunc.toUnidimensionalTable(t_double,t2)

			-- 取出所有的单张
			local t1 = {}
			local t_single = {}
			for k, v in pairs(analyseResult.singleCardData or {}) do 
				if next(v) ~= nil then 
					table.insert(t_single,v) 
				end 
			end 

			local t0 = {}
			PublicFunc.toUnidimensionalTable({t_single,t2,t3},t0 , num)

			table.insert(zuheData,t0)

		elseif analyseResult.singleCardCount + analyseResult.doubleCardCount*2 + analyseResult.threeCardCount*3 + analyseResult.fourCardCount*4 >= num + t3_Num + t4_Num and BOMBAPART == true then 
			
			-- 除了单张、对子、三张还需要多少张牌
			local needNum = 0

			if t4_Num == 0 then 
				needNum = num - analyseResult.singleCardCount - analyseResult.doubleCardCount*2 - analyseResult.threeCardCount*3 + t3_Num
			else
				needNum = num - analyseResult.singleCardCount - analyseResult.doubleCardCount*2 - analyseResult.threeCardCount*3 
			end 

			local needFourNum = math.ceil(needNum/4)		-- 向上取整，所需数量

			-- 取最小的四张
			local t4 = {}
			local t_four = {}
			local count = 0
			for k, v in ipairs(analyseResult.fourCardData or {}) do 
				if count >= needFourNum then break end 
				if next(v) ~= nil then 
					local isOk  = true
					for k1, v1 in pairs(exceptData) do 
						local l1 = PublicFunc.getCardLogicValue(v[1])
						if l1 == v1 then 
							isOk = false
							break
						end 
					end

					if isOk == true then 
						table.insert(t_four,v)
						count = count + 1
					end 
				end 
			end
			PublicFunc.toUnidimensionalTable(t_four,t4)
			PublicFunc.sortByCardLogic(t4)
			t4 = PublicFunc.getTableByIndex(t4,1,needNum)


			-- 取最小的三张
			local t3 = {}
			local t_three = {}
			for k, v in ipairs(analyseResult.threeCardData or {}) do 
				if next(v) ~= nil then 
					local isOk  = true
					for k1, v1 in pairs(exceptData) do 
						local l1 = PublicFunc.getCardLogicValue(v[1])
						if l1 == v1 then 
							isOk = false
							break
						end 
					end

					if isOk == true then 
						table.insert(t_three,v)
					end 
				end 
			end
			PublicFunc.toUnidimensionalTable(t_three,t3)

			-- 取所有的两张
			local t2 = {}
			local t_double = {}
			for k, v in ipairs(analyseResult.doubleCardData or {}) do 
				if next(v) ~= nil then 
					table.insert(t_double,v)
				end 
			end 
			PublicFunc.toUnidimensionalTable(t_double,t2)
			
			-- 取出所有的单张
			local t_single = {}
			for k, v in pairs(analyseResult.singleCardData or {}) do 
				if next(v) ~= nil then 
					table.insert(t_single,v) 
				end 
			end 
			
			local t0 = {}
			PublicFunc.toUnidimensionalTable({t_single,t2,t3,t4},t0 , num)

			local t = {}
			if #t0 > num then 
				PublicFunc.sortByCardLogic(t0)
				t = PublicFunc.getTableByIndex(t0,1,num)
				table.insert(zuheData,t)
			else
				table.insert(zuheData,t0)
			end 

			
		end 

		do return zuheData end 
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

	-- 所有组合(若返回的类型为错误，且没有出牌数据，那么搜索所有的可出牌型)
	if outType == GameCMD.OUTTYPE_ERROR and (outData == nil or next(outData) == nil) then 

		local bombResult,bombCount = _M.analyseBomb(analyseResult,1)
	
		local linkResult,linkCount = _M.analyseLink(analyseResult,1)

		local threeLinkResult,threeLinkCount = _M.analyseThreeLink(analyseResult,1)

		local doubleLinkResult,doubleLinkCount = _M.analyseDoubleLink(analyseResult,1)

		-- 1、先纯单张
		if next(analyseResult.singleCardData) ~= nil then 
			for k, v in pairs(analyseResult.singleCardData) do 
				if next(v) ~= nil then 
					for k1,v1 in pairs(v) do 
						insertToResult({v1})
					end 
				end
			end 
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
					-- 若除去飞机，剩余的牌数少于携带张数，则不能出
					if leftNum >= k*2 then 
						for k1, v1 in pairs(v or {}) do 
							local order = {}
							for i=1, k do 
								local index = (i-1)*3 + 1
								local t = PublicFunc.getCardLogicValue(v1[index])
								table.insert(order,t)
							end 

							local dp_result = getXieDaiData2(k*2,order,k*3)

							makeT1andTsToNewTable(v1,dp_result)
						end 
					elseif isAllData == true and leftNum < k*2 and FEIJIFIRSTOUT == true then 
						insertToResult(handData)
						break
					end 
				end 
			end 

			-- 三带类型
			if threeCount > 0 then 
				for k, v in pairs(threeResult or {}) do 
					if k == 3 then 
						if next(v) ~= nil then 
							for k1, v1 in pairs(v or {}) do 
								local leftNum = handCount - 3
								-- 剩余牌张数是否够带，不够的话，全部带走
								local daiNum = SANDAI2 and 2 or 1
								if leftNum >= daiNum then   
									local logic = PublicFunc.getCardLogicValue(v1[1])
									local dp_result = getXieDaiData2(daiNum,{logic},3)

									makeT1andTsToNewTable(v1,dp_result)
								elseif isAllData == true and leftNum < daiNum and THREEFIRSTOUT == true then 
									insertToResult(handData)
								end 
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
					if next(v1) ~= nil and #v1 ~= 3 then 
						local leftNum = handCount - 4
						
						local xiedaiNum = SIDAI3 and 3 or 2

						if leftNum > xiedaiNum then		-- 四带几满足 
							local logic = PublicFunc.getCardLogicValue(v1[1])
							local dp_result = getXieDaiData2(xiedaiNum,{logic},4)

							makeT1andTsToNewTable(v1,dp_result)
						elseif isAllData == true and leftNum <= xiedaiNum then 
							insertToResult(handData)
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

		-- 拆对子为单张
		if doubleCount > 0 then 
			for k, v in pairs(analyseResult.doubleCardData) do 
				if next(v) ~= nil then 
					insertToResult({v[1]})
				end 
			end 
		end 

		-- 拆三张为单张
		if threeCount > 0 then 
			for k, v in pairs(threeResult or {}) do 
				if k == 3 and next(v) ~= nil then 
					for k1, v1 in pairs(v or {}) do 
						insertToResult({v1[1]})
						insertToResult({v1[1],v1[2]})
					end 
				elseif k == 4 and next(v) ~= nil and BOMBAPART == true then 
					for k1, v1 in pairs(v or {}) do 
						insertToResult({v1[1]})
						insertToResult({v1[1],v1[2]})
					end
				end 
			end 
		end 
	
	elseif outType == GameCMD.OUTTYPE_SINGLE then 

		local singleOut,singleOutCount = _M.analyseSingleData(analyseResult,2,outData,outMiniValue)

		insertSDTData(singleOut,2)

	elseif outType == GameCMD.OUTTYPE_DOUBLE then

		local doubleOut,doubleOutCount  = _M.analyseDoubleData(analyseResult,2,outData,outMiniValue)

		insertSDTData(doubleOut,3)

	elseif outType == GameCMD.OUTTYPE_DOUBLELINK then 

		local doubleLinkOutResult,doubleLinkOutCount = _M.analyseDoubleLink(analyseResult,2,outData,outMiniValue)

		insertSDTData(doubleLinkOutResult,0)

	elseif outType == GameCMD.OUTTYPE_THREEWITHTWO or outType == GameCMD.OUTTYPE_THREEWITHONE or outType == GameCMD.OUTTYPE_THREE then 

		local threeCardOutData,threeCardOutCount = _M.analyseThreeData(analyseResult,2,outData,outMiniValue)
		-- 三带类型
		if threeCardOutCount > 0 then 
			for i=3, 4 do 
				local v = threeCardOutData[i]
				if v ~= nil or next(v or {}) ~= nil then 
					for k1, v1 in pairs(v or {}) do 
						local leftNum = handCount - 3
						-- 剩余牌张数是否够带，不够的话，全部带走

						local daiNum = SANDAI2 and 2 or 1

						if leftNum > daiNum then   
							local logic = PublicFunc.getCardLogicValue(v1[1])
							local dp_result = getXieDaiData2(daiNum,{logic},3)

							makeT1andTsToNewTable(v1,dp_result)
						elseif isAllData == true and leftNum == daiNum then 
							insertToResult(handData)
						elseif isAllData == true and THREEOUT == true and leftNum < 2 then 
							-- 满足接牌可以少牌
							-- insertToResult(handData)
						end 
					end 	
				end
			end 
		end	

		insertBombData(1)

	elseif outType == GameCMD.OUTTYPE_FEIJI then

		local threeLinkCardOutData,threeLinkCardOutCount = _M.analyseThreeLink(analyseResult,2,outData,outMiniValue)

		if threeLinkCardOutCount > 0 then 
			for k, v in pairs(threeLinkCardOutData or {}) do 
				local leftNum = handCount - k*3
				-- 若除去飞机，剩余的牌数少于携带张数，则不能出

				local daiNum = #outData - #v[1]
				-- local daiNum = SANDAI2 and 2 or 1

				if leftNum >= daiNum then 
					for k1, v1 in pairs(v or {}) do 
						local order = {}
						for i=1, k do 
							local index = (i-1)*3 + 1
							local t = PublicFunc.getCardLogicValue(v1[index])
							table.insert(order,t)
						end 

						local dp_result = getXieDaiData2(daiNum,order,k*3)

						makeT1andTsToNewTable(v1,dp_result)
					end 
				elseif isAllData == true and leftNum < daiNum and FEIJIOUT == true then 
					-- insertToResult(handData)
					break 
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

	elseif outType == GameCMD.OUTTYPE_BOMB333 then

		insertBombData(2)

	elseif outType == GameCMD.OUTTYPE_BOMB then

		insertBombData(2)

	elseif outType == GameCMD.OUTTYPE_SIDAISAN or  outType == GameCMD.OUTTYPE_SIDAIER or outType == GameCMD.OUTTYPE_SIDAIYI then

		local xiedaiNumConfig = {
			[GameCMD.OUTTYPE_SIDAISAN] = 3,
			[GameCMD.OUTTYPE_SIDAIER] = 2,
			[GameCMD.OUTTYPE_SIDAIYI] = 1,
		}

		local bombOutData,bombOutCount = _M.analyseBomb(analyseResult,2,outData,outMiniValue)
		-- 4、四张类型：炸弹，四带三
		if bombOutCount > 0 then 
			-- 四带三要剔除3A类型的炸弹
			for k, v in pairs(bombOutData or {}) do 
				for k1, v1 in pairs(v or {}) do 
					if next(v1) ~= nil and #v1 ~= 3 then 
						local leftNum = handCount - 4
						local xiedaiNum = xiedaiNumConfig[ outType ]
						if leftNum > xiedaiNum then		-- 四带三满足 
							local logic = PublicFunc.getCardLogicValue(v1[1])
							local dp_result = getXieDaiData2(xiedaiNum,{logic},4)

							makeT1andTsToNewTable(v1,dp_result)
						-- elseif isAllData == true and leftNum <= 3 then 
						-- 	insertToResult(handData)
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

-- 分析出牌组合
-- 参数1：出牌数据；
-- 参数2：true最后一手牌
function _M.getCardType(outData,isAll,outType , isFirstOut)


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
		
		if card1 == card2 then return GameCMD.OUTTYPE_DOUBLE,card1 end 

		return GameCMD.OUTTYPE_ERROR  
	end

	local analyseResult = _M.analyseCardData(outData) 

	-- 炸弹判断(四炸或3A炸)
	if analyseResult.fourCardCount == 1 and outCount == 4 then 				-- 炸弹类型
		local card = analyseResult.fourLogicValue[1]
		do return GameCMD.OUTTYPE_BOMB, card end 
	elseif outCount == 3 and #analyseResult.threeCardData[14] == 3 then		-- 3A炸类型
		do return GameCMD.OUTTYPE_BOMBAAA, 14 end 

	elseif IS_BOMB333 and not isFirstOut and outCount == 3 and #analyseResult.threeCardData[3] == 3 then		-- 33炸类型
		do return GameCMD.OUTTYPE_BOMB333, 3 end 
	elseif analyseResult.fourCardCount == 1 then			-- 四带类型
		if outCount > 4  and outCount <= 7 then 

			local logicValue = analyseResult.fourLogicValue[1]

			firstPart = analyseResult.fourCardData[logicValue]

			PublicFunc.sortByCardLogic(firstPart)

			secondPart = PublicFunc.delDataFromTable(outData,firstPart)
                                                                                                                     
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

			if daiCount == 1 then 
				-- 若上轮手牌为4带类型,且自己手牌不够
				if outType == GameCMD.OUTTYPE_SIDAISAN or outType == GameCMD.OUTTYPE_SIDAIER or outType == GameCMD.OUTTYPE_SIDAIYI then
					-- if isAll == true then  
					-- 	do return GameCMD.OUTTYPE_SIDAIYI,card,firstPart end 
					-- end

					return GameCMD.OUTTYPE_ERROR

				else
					if isAll then 
						do return GameCMD.OUTTYPE_SIDAIYI,card,firstPart end
					else
						return GameCMD.OUTTYPE_ERROR
					end
					-- do return GameCMD.OUTTYPE_THREEWITHTWO,card,firstPart end
				end 
			elseif daiCount == 2 then 
				if (SIDAI3 and isAll == true) or SIDAI2 then 
					do return GameCMD.OUTTYPE_SIDAIER,card,firstPart end
				end
			elseif daiCount == 3 and SIDAI3 then
				return GameCMD.OUTTYPE_SIDAISAN,card,firstPart
			end
		end
	end

	-- 三牌判断
	if analyseResult.threeCardCount > 0 or analyseResult.fourCardCount > 0 then 
		-- 连牌判断
		if analyseResult.threeCardCount > 1 or analyseResult.fourCardCount > 1 or (analyseResult.threeCardCount > 0 and analyseResult.fourCardCount > 0) then
			
			local threeLinkResult,threeLinkCount = _M.analyseThreeLink(analyseResult,1)
			local isFeiJi = false
			local isEnough = false -- 是否有足够带的牌
			local feijiValue = nil 
			for k, v in pairs(threeLinkResult) do 
				for k1, v1 in pairs(v) do 
					if next(v1) ~= nil and (#v1 + k*2 == #outData) then 
						isFeiJi = true
						isEnough = true
						firstPart = clone(v1)
						--按逻辑从小到大
						PublicFunc.sortByCardLogic(firstPart,1)
						feijiValue = firstPart[#firstPart]
					elseif isAll == true and next(v1) ~= nil then 
						isFeiJi = true
						firstPart = clone(v1)
						--按逻辑从小到大
						PublicFunc.sortByCardLogic(firstPart,1)
						feijiValue = firstPart[#firstPart]
					end 
				end 
			end 

			if isFeiJi == true then 
				secondPart = PublicFunc.delDataFromTable(outData,firstPart)
				-- 按逻辑从大到小
				PublicFunc.sortByCardLogic(secondPart,1)
				-- 插入到类型数据后
				for k, v in ipairs(secondPart) do 
					table.insert(firstPart,v)
				end 
			
				feijiValue = PublicFunc.getCardLogicValue(feijiValue)
				if isEnough == true then
					return GameCMD.OUTTYPE_FEIJI,feijiValue,firstPart
				else
					return GameCMD.OUTTYPE_FEIJINOMORE,feijiValue,firstPart
				end
			else
				return GameCMD.OUTTYPE_ERROR
			end
		else
			-- 三带一类型判断
			local leftCount = outCount - (analyseResult.threeCardCount*3)
			local daiNum = SANDAI2 and 2 or 1

			if (leftCount == analyseResult.threeCardCount*daiNum) or (isAll == true and leftCount >= 0 and leftCount <= analyseResult.threeCardCount*daiNum) then 

				local logicValue = analyseResult.threeLogicValue[1]

				firstPart = analyseResult.threeCardData[logicValue]

				PublicFunc.sortByCardLogic(firstPart)

				secondPart = PublicFunc.delDataFromTable(outData,firstPart)

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
				elseif followCount == 1 then 
					do return GameCMD.OUTTYPE_THREEWITHONE,logicValue,firstPart end 
				elseif followCount == 2 then 
					do return GameCMD.OUTTYPE_THREEWITHTWO,logicValue,firstPart end 
				end 
			else
				return GameCMD.OUTTYPE_ERROR
			end 
		end 
	end

	-- 两连判断
	if analyseResult.doubleCardCount > 1 then 
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
		if _M.dataIsLink(order) == true and outCount == analyseResult.doubleCardCount*2 then 
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
function _M.analyseThreeLink(analyseResult,analyseType,outData,miniValue)

	local resultData,resultCount = {},0

	if (analyseType == 2 and type(outData) ~= "table") or (analyseType ~= 1 and analyseType ~= 2) then 
		assert(false,"Function param error in analyseThreeLink")
	end

	miniValue = analyseType == 1 and 0 or miniValue

	local threeData,threeCount = _M.analyseThreeData(analyseResult,1)


	local outThreeData, _outThreeLinkLen = {}, 0
	if outData then 
		local outAnalyseResult = _M.analyseCardData(outData , 1)
		local linkResult = _M.analyseThreeLink(outAnalyseResult,1)

		for len,v in pairs(linkResult) do
			if len*5 == #outData then 
				_outThreeLinkLen = len
			end
		end

		if _outThreeLinkLen == 0 then 
			_outThreeLinkLen = table.nums(linkResult)+1
		end

	end


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
	local startLen = analyseType == 1 and 2 or _outThreeLinkLen

	local endLen = analyseType == 1 and threeCount or _outThreeLinkLen

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

				local leftNum = analyseResult.singleCardCount + analyseResult.doubleCardCount*2 + analyseResult.threeCardCount*3 + analyseResult.fourCardCount*4 - i*3
				-- 要满足有飞机，必须有足够携带的牌，否则成不了飞机
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

	if doubleCount < 2 then return resultData,resultCount end 

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

	local startLen = analyseType == 1 and 2 or (#outData/2)

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
	if maxValue == 14 and #outData == 3 then 
		maxValue = 0 
	end

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

				if num == 3 and times == 3  then

					local logicValue = PublicFunc.getCardLogicValue(tempData[1])
					if logicValue == 14 or (logicValue == 3 and IS_BOMB333) then 
						if logicValue > maxValue then 
							table.insert(resultData[arrayIndex],tempData)
							resultCount = resultCount + 1
						end
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

	-- 在这要考虑到AAA也是炸弹的一种的情况，3A为最大的炸弹
	if analyseType == 1 and next(analyseResult.threeCardData[14]) ~= nil then
		dismantleData(analyseResult.threeCardData,3,3)
	elseif IS_BOMB333 and analyseType == 1 and next(analyseResult.threeCardData[3]) ~= nil then
		-- 在这要考虑到333也是炸弹的一种的情况，33为最小的炸弹
		dismantleData(analyseResult.threeCardData,3,3)
	end 

	

	if analyseType == 2 and next(analyseResult.threeCardData[14]) ~= nil then
		dismantleData(analyseResult.threeCardData,3,3)
	end 

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
	-- if analyseResult.fourCardCount > 0 then dismantleData(analyseResult.fourCardData,4,3) end 

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
		for i = maxValue+1, 15 do
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
function _M.analyseCardData(cardData  , tipsData)

	local analyseResult = _M.newAnalyseCardData()
	
	if cardData == nil or type(cardData) ~= "table" or next(cardData) == nil then 
		
		dump(cardData , "cardData" , nil , true)
		dump(tipsData , "tipsData" , nil , true)
		
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


	for i=1, 15 do 
		data.AllData[i]			= {}
		data.singleCardData[i] 	= {}		
		data.doubleCardData[i] 	= {}
		data.threeCardData[i] 	= {}
		data.fourCardData[i] 	= {}
	end 
	return data
end

return _M