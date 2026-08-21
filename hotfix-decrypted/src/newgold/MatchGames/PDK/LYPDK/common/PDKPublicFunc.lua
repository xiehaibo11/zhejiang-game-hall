local _M = {}


-- 数据排序
-- 参数1：table数据
-- 参数2：排序方式 1：为从大到小，else 从小到大
function _M.sortData(data,model)
	-- 判断
    if type(data) ~= "table" or next(data) == nil then
        print_debug_stack("PDKPublicFunc sortData");
		assert(false,"排序函数（sortData）参数不正确！")
	end 	

	local sort_Func = function(a,b) 
		if model == 1 then
			do return a > b end 
		else
		 	return a < b
		end 
	end  

	table.sort(data,sort_Func)
end

-- 随机排序
function _M.randomData(data)
    local len  = #data 
    for i=1, len do
        local randomNum = math.random(len)
        data[i],data[randomNum] = data[randomNum],data[i]
    end 
end 

-- 获取牌的逻辑值和花色
function _M.getCardLogicValue(card)
    
    if card == 0 then return 0 end

    -- local isLegal = _M.checkAnCardIsLegal(card)

    local color = math.modf(card/16)
    local value = card%16

    local isLegal = true
    if value == 0 or (color > 4 and color ~= 100 ) then 
        isLegal = false
    end 

    if isLegal == false then
        release_print("PDKPublicFunc getCardLogicValue " .. tostring(card))
        print_debug_stack("PDKPublicFunc getCardLogicValue");
        assert(false,"非法牌值——+——"..tostring(card))
        return;
    end
	assert( type(card) == "number" , "错误：获取牌的逻辑值和花色参数不正确~~! " )

    if card == 66 then 
        value = 1
    elseif value == 1 or value == 2 then 
        value = value + 13
    elseif value == 14 or value == 15 then 
        value = value + 2
    end 

    return value, color
end

function _M.getCardValueByLogicValue(logicValue)

    local value = 0
    if logicValue == 1 then 
       value = 66
    elseif logicValue == 14 or logicValue == 15 then 
        value = logicValue - 13
    else
        value = logicValue
    end 

    return value

end


-- 从table中获取指定长度的数据
function _M.getTableByIndex(data,startIndex,endIndex)
	
	if type(data) ~= "table" or  next(data) == nil or #data < startIndex or startIndex <= 0 or endIndex < startIndex then 
		return 
	end 

	if endIndex == nil or endIndex > #data then endIndex = #data end 

	startIndex = startIndex or 1

	local resultData = {}

	for i = startIndex, endIndex do 

		table.insert(resultData,data[i])

	end 

	return resultData
end 

-- 二分法查找元素
function _M.binaryFind(data)
    if type(data) ~= "table" or next(data) == nil then 
        return false
    end 

    
    -- body
end

-- 删除节点所有子节点
function _M.delAllChildrenNode(node)

    if node == nil or type(node) ~= "userdata" then return end

    local num = node:getChildrenCount()
    if num > 0 then node:removeAllChildren() end 
end

-- 按牌值的逻辑排序，model == 1为降序，否则为升序，默认相同牌值按花色从小到大排序
function _M.sortByCardLogic(data,model)

    if type(data) ~= "table" then 
        assert(false,"排序函数（sortData）参数不正确！")
        print_debug_stack()
    end 
    
    if next(data) == nil then
        return {}
    end 
	
	local sort_Func = function(a,b) 
		local a_logic = _M.getCardLogicValue(a)
		local b_logic = _M.getCardLogicValue(b)
		if model == 1 then
			if a_logic ~= b_logic then 
				do return a_logic > b_logic end 
			else
				return a > b
			end 
		else
			if a_logic ~= b_logic then 
				do return a_logic < b_logic end 
			else
				return a > b
			end
		end 
	end  
	
	table.sort(data,sort_Func)
end

-- 从长度为m的数组中选n个元素的组合
function _M.commzuhe(atable, n)
    if n > #atable then
        return {}
    end

    local len = #atable
    local meta = {}
    -- init meta data
    for i=1, len do
        if i <= n then
            table.insert(meta, 1)
        else
            table.insert(meta, 0)
        end
    end

    local result = {}

    -- 记录一次组合
    local tmp = {}
    for i=1, len do
        if meta[i] == 1 then
            table.insert(tmp, atable[i])
        end
    end
    table.insert(result, tmp)

    while true do
        -- 前面连续的0
        local zero_count = 0
        for i=1, len-n do
            if meta[i] == 0 then
                zero_count = zero_count + 1
            else
                break
            end
        end
        -- 前m-n位都是0，说明处理结束
        if zero_count == len-n then
            break
        end

        local idx
        for j=1, len-1 do
            -- 10 交换为 01
            if meta[j]==1 and meta[j+1] == 0 then
                meta[j], meta[j+1] = meta[j+1], meta[j]
                idx = j
                break
            end
        end
        -- 将idx左边所有的1移到最左边
        local k = idx-1
        local count = 0
        while count <= k do
            for i=k, 2, -1 do
                if meta[i] == 1 then
                    meta[i], meta[i-1] = meta[i-1], meta[i]
                end
            end
            count = count + 1
        end

        -- 记录一次组合
        local tmp = {}
        for i=1, len do
            if meta[i] == 1 then
                table.insert(tmp, atable[i])
            end
        end
        table.insert(result, tmp)
    end

    return result
end

function _M.toUnidimensionalTable(data,result , limitLen)

	result = result or {}
    limitLen = limitLen or -1

	if data == nil or type(data) ~= "table" or next(data) == nil then return end 

    if #data ~= table.nums(data) then 
        assert("---------------------NUM ERROR！！！ ----------------")
    end 

	for k, v in pairs(data) do 

		if type(v) == "table" then 
			local tmp = _M.toUnidimensionalTable(v,result , limitLen)
		else
			table.insert(result,v)

            if limitLen > 0 and #result == limitLen then 
                return
            end

		end 
	end 
end

function _M.getLaiziValueBylogic(logicValue)

    local value = _M.getCardValueByLogicValue(logicValue)
    return value + 1600

end




-- 删除一维table中指定的数据
function _M.delDataFromTable(data,delData)
    local result = clone(data)
    local delIndex = {}
    
    local addIndex1 = {}
    local addIndex2 = {}
    

    for k, v in ipairs(data or {}) do 
        for k1, v1 in pairs(delData) do 
            if v == v1 and not addIndex1[k1] and not addIndex2[k] then 
                table.insert(delIndex,k)

                addIndex1[k1] = true
                addIndex2[k] = true
            end 
        end 
    end 

    local sort_func = function(a,b) return a > b end 
    
    delIndex = table.exceptRepeat(delIndex)

    if next(delIndex) ~= nil then 
        table.sort(delIndex,sort_func)
    end 

    for i=1, #delIndex do
        local index = delIndex[i]
        table.remove(result,index)
    end 
    
    return result
end


--判断牌值是否合法
function _M.checkAnCardIsLegal(cardvalue)
    -- body
    if cardvalue == nil then
        return false;
    end

    local CardsValue = _M.getCardsValueList();
    for k, v in pairs(CardsValue or {}) do
        if v == cardvalue or (v + 1600) == cardvalue then
            return true;
        end
    end

    return false;
end

--判断多张牌是否合法
function _M:checkCardsIsLegal(cardsList)
    -- body
    if cardsList == nil then
        return false;
    end

    local CardsValue = _M.getCardsValueList();
    for k, item_v in pairs(cardsList or {}) do

        local isExist = false;
        for pk, pv in pairs(CardsValue) do
            if item_v and item_v == pv then
                isExist = true;
                break;
            end
        end

        if isExist == false then
            return false;
        end
    end
    return false;
end

function _M.isBomb(type)
    return  type == GameCMD.OUTTYPE_BOMB or 
    type == GameCMD.OUTTYPE_BOMB333 or 
    type == GameCMD.OUTTYPE_BOMBAAA or 
    type == GameCMD.OUTTYPE_510K or
    type == GameCMD.OUTTYPE_TONGXIN or
    type == GameCMD.OUTTYPE_BOMBLINK

end


function _M.getCardsValueList( ... )
    -- body
    --牌值
    return  {
        0x1, 0x2, 0x3, 0x4, 0x5, 0x6, 0x7, 0x8, 0x9, 0xa, 0xb, 0xc, 0xd,              --方块A~K
        0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1a, 0x1b, 0x1c, 0x1d, --梅花A~K
        0x21, 0x22, 0x23, 0x24, 0x25, 0x26, 0x27, 0x28, 0x29, 0x2a, 0x2b, 0x2c, 0x2d, --红桃A~K
        0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 0x37, 0x38, 0x39, 0x3a, 0x3b, 0x3c, 0x3d, --黑桃A~K
        0x41, 0x42, --小大小王
    }
end

return _M�"  