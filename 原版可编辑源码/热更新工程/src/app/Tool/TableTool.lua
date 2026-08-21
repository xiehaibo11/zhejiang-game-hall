local TableTool = {}

-- 值value是否存在于table中
function TableTool.isValueInTable(value, t)
    if type(t) ~= "table" then
        return false, nil
    end

    for key, val in pairs(t) do
        if val == value then
            return true, key
        end
    end

    return false, nil
end

-- 从table移除值元素
function TableTool.removeValueFromTable(value, t)
    local bIn, inIndex = TableTool.isValueInTable(value, t)
    if not bIn then
        return false
    end
    table.remove(t, inIndex)
    return true
end

-- 两个table是否存在相同的值
function TableTool.isTableHaveSameValue(table1, table2)
    for _, val1 in pairs(table1) do
        for _, val2 in pairs(table2) do
            if val1 == val2 then
                return true
            end
        end
    end
    return false
end

-- 两个table是否所有值都相等
function TableTool.isTableAllValueSame(table1, table2)
    if type(table1) ~= "table" or type(table2) ~= "table" then
        return table1 == table2
    end

    local function tableCount(tableTemp)
        local cnt = 0
        for _, _ in pairs(tableTemp) do
            cnt = cnt + 1
        end 
        return cnt
    end
    
    if tableCount(table1) ~= tableCount(table2) then
        return false
    end
    for key, value in pairs(table1) do
        local otherValue = table2[key]
        if type(value) == "table" and type(otherValue) == "table" then
            if not TableTool.isTableAllValueSame(value, otherValue) then
                return false
            end
        elseif value ~= otherValue then
            return false
        end
    end
    return true
end

--可以根据表元素进行去重,isBack表示后覆盖前
function TableTool.unique(t, bArray, mainKey, isBack)
    local check = {}
    local n = {}
    local idx = 1
    for k, v in pairs(t) do
        local judgeKey = v
        if mainKey then
            judgeKey = v[mainKey] or v
        end
        if not check[judgeKey] then
            check[judgeKey] = idx
            if bArray then
                n[idx] = v
                idx = idx + 1
            else
                n[k] = v
            end
        elseif isBack then
            n[check[judgeKey]] = v
        end
    end
    return n
end

-- table自带merge函数有时失效，故封装一个
function TableTool.mergeTwoTable(t1, t2)
    t1 = t1 or {}
    t2 = t2 or {}
    local finalTable = {}
    for _, v in ipairs(t1) do
        table.insert(finalTable, v)
    end
    for _, v in ipairs(t2) do
        table.insert(finalTable, v)
    end
    return finalTable
end

function TableTool.getTableMinValue(t)
    if not t or not next(t) then
        return
    end
    local minValue
    for _, v in pairs(t) do
        if not minValue then
            minValue = v
        else
            if type(v) == type(minValue) and v < minValue then
                minValue = v
            end
        end
    end
    return minValue
end

local table = table or {}

function table.str2tab(data)
    local vt = type(data)
    if vt == "nil" or vt == "table" then
        return data
    elseif vt ~= "string" then
        assert(true, "can not unserialize a " .. vt .. " type.")
        return nil
    end
    local st = {"return", "{", data, "}"}
    local rs
    pcall(
        function()
            rs = loadstring(table.concat(st, " "))()
        end
    )
    return rs
end

local function is_array(t)
    if type(t) ~= "table" then
        return false
    end
    local max_key = 0
    local count = 0
    for k, _ in pairs(t) do
        if type(k) ~= "number" or k < 1 or math.floor(k) ~= k then
            return false
        end
        if k > max_key then
            max_key = k
        end
        count = count + 1
    end
    return max_key == count and max_key == #t
end

function table.tab2str(t)
    if type(t) ~= "table" then
        return nil
    end

    if is_array(t) then
        local elements = {}
        for i = 1, #t do
            local v = t[i]
            local vt = type(v)
            if vt == "string" then
                elements[#elements + 1] = ("%q"):format(v)
            elseif vt == "number" or vt == "boolean" then
                elements[#elements + 1] = tostring(v)
            elseif vt == "table" then
                elements[#elements + 1] = ("{%s}"):format(table.tab2str(v))
            else
                elements[#elements + 1] = "nil"
            end
        end
        return table.concat(elements, ",")
    else
        local s = {}
        for k, v in pairs(t) do
            local kt = type(k)
            local vt = type(v)
            local keystr, valstr

            if kt == "string" then
                keystr = k
            elseif kt == "number" then
                keystr = ("[%d]"):format(k)
            else
                keystr = nil
            end

            if keystr then
                if vt == "string" then
                    valstr = ("%q"):format(v)
                elseif vt == "number" or vt == "boolean" then
                    valstr = tostring(v)
                elseif vt == "table" then
                    valstr = ("{%s}"):format(table.tab2str(v))
                end

                if valstr then
                    s[#s + 1] = ("%s=%s"):format(keystr, valstr)
                end
            end
        end
        return table.concat(s, ";")
    end
end

return TableTool
