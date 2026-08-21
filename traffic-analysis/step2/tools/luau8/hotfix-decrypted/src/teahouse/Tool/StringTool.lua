---@class StringTool : BridgeString 扩展字符串工具，注方法被覆盖
local StringTool = TeaHouse.BridgeString

local bit = import(".bit")

function StringTool.bitAnd(a, b)
    return bit:_and(a, b)
end

function StringTool.bitOr(a, b)
    return bit:_or(a, b)
end

function StringTool.bitXor(a, b)
    return bit:_xor(a, b)
end

function StringTool.bitNot(a, b)
    return bit:_not(a, b)
end

function StringTool.privateGuessUTFLen(b)
    if b < 192 then --110xxxxx 
        return 1
    elseif b < 224 then --1110xxxx 
        return 2
    elseif b < 240 then --11110xxx
        return 3
    elseif b < 248 then --111110xx
        return 4
    elseif b < 252 then --1111110x
        return 5
    end
    return 6
end

function StringTool.simpleGetUTFCharCount(txt)
    local count = 0
    local i = 1
    while i <= #txt do
        local tmp_c = string.byte(txt, i, i)
        i = i + StringTool.privateGuessUTFLen(tmp_c)
        count = count + 1
    end
    return count
end

function StringTool.simpleSubUTFStr(txt, first, second)
    if first > second or second < 1 then
        return ""
    end
    if first < 1 then
        first = 1
    end
    local i = 1
    local tEnd = #txt
    local firstIndex = -1
    local secondIndex = -1
    local index = 0
    while i <= tEnd do
        local tmp_c = string.byte(txt, i, i)
        local c_len = StringTool.privateGuessUTFLen(tmp_c)
        index = index + 1
        if index == first and firstIndex == -1 then
            firstIndex = i
        end
        if index == second and secondIndex == -1 then
            secondIndex = i + c_len - 1
            break
        end
        i = i + c_len
    end
    if firstIndex == -1 then
        return ""
    end
    if secondIndex == -1 then
        secondIndex = tEnd
    end
    return string.sub(txt, firstIndex, secondIndex)
end

function StringTool.simpleGetStrWidth(txt)
    local width = 0
    local i = 1
    while i <= #txt do
        local tmp_c = string.byte(txt, i, i)
        if tmp_c <= 127 then
            i = i + 1
            width = width + 1
        else
            i = i + StringTool.privateGuessUTFLen(tmp_c)
            width = width + 2
        end
    end
    return width
end

function StringTool.simpleSubStrUtilWidth(txt, w)
    if w < 1 then
        return ""
    end
    local i = 1
    local tEnd = #txt
    local width = 0
    while i <= #txt do
        local tmp_c = string.byte(txt, i, i)
        width = width + (tmp_c <= 127 and 1 or 2)
        if width > w then
            tEnd = i - 1
            break
        else
            i = i + StringTool.privateGuessUTFLen(tmp_c)
        end
    end
    return string.sub(txt, 1, tEnd)
end

function StringTool.toPositiveIntNumber(txt)
    if not txt then
        return nil
    end
    local ans = 0
    for i = 1, #txt do
        local v = string.byte(txt, i, i)
        if v >= 48 and v <= 57 then
            ans = ans * 10 + v - 48
        else
            return nil
        end
    end
    return ans
end

function StringTool.checkUTF8String(str)
    if str == "" then
        return 0
    end
    local checkTag = { 128, 224, 240, 248, 252, 254 }
    local rightTag = { 0, 192, 224, 240, 248, 252 }
    local index, strLen = 1, #str
    local text = {}
    for i = 1, strLen do
        table.insert(text, string.byte(string.sub(str, i, i)))
    end
    while index <= strLen do
        local findTag = false
        for i = 1, #checkTag do
            if bit:_and(text[index], checkTag[i]) == rightTag[i] then
                findTag = true
                if index + i - 1 > strLen then
                    return index
                end
                for j = 1, i - 1 do
                    if bit:_and(text[index + j], 192) ~= 128 then
                        return index
                    end
                end
                index = index + i
                break
            end
        end
        if not findTag then
            return index
        end
    end
    return 0
end

function StringTool.trim(str)
    local tmp = string.gsub(str, "^%s+", "")
    tmp = string.gsub(tmp, "%s+$", "")
    return tmp
end

function StringTool.splitWithTrim(str, delim)
    local args = {}
    local pattern = '(.-)' .. delim
    local last_end = 1
    local s, e, cap = string.find(str, pattern, 1)
    while s do
        local tmp = StringTool.trim(cap)
        if tmp ~= '' then
            table.insert(args, tmp)
        end
        last_end = e + 1
        s, e, cap = string.find(str, pattern, last_end)
    end
    if last_end <= #str then
        cap = StringTool.trim(string.sub(str, last_end))
        if cap ~= "" then
            table.insert(args, cap)
        end
    end
    return args
end

function StringTool.getTimeDesc(time)
    local text = ""
    if time < 0 then
        return text
    end
    if time < 60 then
        return string.format("%d秒", time)
    end
    if time < 3600 then
        local min = time / 60
        return string.format("%d分", min)
    end
    if time < 84600 then
        local hour = time / 3600
        return string.format("%d小时", hour)
    end
    local day = time / 84600
    return string.format("%d天", day)
end

function StringTool.getTrimName(name, length)
    length = length or 6
    if StringTool.simpleGetStrWidth(name) > length then
        name = StringTool.simpleSubStrUtilWidth(name, length) .. "..."
    end
    return name
end

return StringTool