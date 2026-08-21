local StringTool = class("StringTool")
local bit = import(".bit")

function StringTool.urlToHttps(url)
    if not url then
        return
    end

    if string.find(url, "https") then
        return url
    end

    return string.gsub(url, "http", "https")
end

function StringTool.getNumberSuffixByString(str)
    return XH.StringTool.getNumberSuffixByString(str)
end

-- 获取合法的utf8字节数，同时满足大于等于传入的minimumByte
function StringTool.getMinimumValidBytesUTF8(str, minimumByte)
    return XH.StringTool.getMinimumValidBytesUTF8(str, minimumByte)
end

function StringTool.cutStringByLength(str, len)
    return XH.StringTool.cutStringByLength(str, len)
end

--返回当前字符实际占用的字符数
function StringTool.subStringGetByteCount(str, iIndex)
    local curByte = string.byte(str, iIndex)
    local byteCount = 1
    if curByte == nil then
        byteCount = 0
    elseif curByte > 0 and curByte <= 127 then
        byteCount = 1
    elseif curByte >= 192 and curByte <= 223 then
        byteCount = 2
    elseif curByte >= 224 and curByte <= 239 then
        byteCount = 3
    elseif curByte >= 240 and curByte <= 247 then
        byteCount = 4
    end
    return byteCount
end

--获取中英混合UTF8字符串的真实字符数量
function StringTool.subStringGetTotalIndex(str)
    local curIndex = 0
    local i = 1
    local lastCount
    repeat
        lastCount = StringTool.subStringGetByteCount(str, i)
        i = i + lastCount
        curIndex = curIndex + 1
    until (lastCount == 0)
    return curIndex - 1
end

function StringTool.subStringGetTrueIndex(str, iIndex)
    local curIndex = 0
    local i = 1
    local lastCount
    repeat
        lastCount = StringTool.subStringGetByteCount(str, i)
        i = i + lastCount
        curIndex = curIndex + 1
    until (curIndex >= iIndex)
    return i - lastCount
end

--截取中英混合的UTF8字符串，endIndex可缺省
function StringTool.subStringUTF8(str, iStartIndex, iEndIndex)
    if iStartIndex < 0 then
        iStartIndex = StringTool.subStringGetTotalIndex(str) + iStartIndex + 1
    end

    if iEndIndex ~= nil and iEndIndex < 0 then
        iEndIndex = StringTool.subStringGetTotalIndex(str) + iEndIndex + 1
    end

    if iEndIndex == nil then
        return string.sub(str, StringTool.subStringGetTrueIndex(str, iStartIndex))
    else
        return string.sub(str, StringTool.subStringGetTrueIndex(str, iStartIndex), StringTool.subStringGetTrueIndex(str, iEndIndex + 1) - 1)
    end
end

function StringTool.getTableByString(str, semi_char, equ_char)
    local back_table = {}
    local semi_back = string.split(str, semi_char)
    if semi_back == nil or #semi_back < 1 then
        return back_table
    end

    for i = 1, table.nums(semi_back) do
        local equ_back = string.split(semi_back[i], equ_char)
        if equ_back == nil or table.nums(equ_back) ~= 2 then
            break
        end

        back_table[equ_back[1]] = equ_back[2]
    end
    return back_table
end

function StringTool.spiltStringByFlag(str, cFlag)
    local splitStr = {}
    local tmpStr = clone(str)
    while true do
        local a, b = string.find(tmpStr, cFlag)
        if a == nil then
            if string.len(tmpStr) ~= 0 then
                table.insert(splitStr, tmpStr)
            end
            break
        end
        table.insert(splitStr, string.sub(tmpStr, 1, a - 1))

        tmpStr = string.sub(tmpStr, b + 1, -1)
    end
    return splitStr
end

--在配置字符串中找到各组值
function StringTool.getLuaValueList(str)
    local valueList = {}

    local i = 1
    while i <= #str do
        --找key值
        local keyBeg = i
        local keyEnd = string.find(str, '=', i)
        if keyEnd then
            keyEnd = keyEnd - 1
        else
            return valueList
        end
        local key = string.sub(str, keyBeg, keyEnd)

        i = keyEnd + 2

        --找value
        local valBeg = i
        local valEnd = nil

        local pos1  --最新找到；的位置
        local pos2  --最新找到=的位置

        pos1 = string.find(str, ';', i)
        pos2 = string.find(str, '=', i)

        while pos1 do
            if pos2 == nil or pos2 > pos1 then
                valEnd = pos1 - 1
                break
            else
                pos1 = string.find(str, ';', pos1 + 1)
                pos2 = string.find(str, '=', pos2 + 1)
            end
        end

        if valEnd then
            local valStr = string.sub(str, valBeg, valEnd)
            if string.find(valStr, '\'') then
                valStr = string.sub(str, valBeg + 1, valEnd - 1)
                valueList[key] = valStr
            else
                valueList[key] = tonumber(valStr)
            end
        else
            return valueList
        end

        i = pos1 + 1
    end

    return valueList
end

function StringTool.getBackStringByFlag(str, cFlag)
    return XH.StringTool.getBackStringByFlag(str, cFlag)
end

function StringTool.getFrontStringByFlag(str, cFlag)
    return XH.StringTool.getFrontStringByFlag(str, cFlag)
end

function StringTool.bitAnd(a, b)
    return bit:_and(a, b)
end

--[[保留指定小数位数的数字。
@param num {number|string} 数值
@param pLen {number|string} 小数点保留位数，默认 2 位
@param isTruncation {boolean} 是否截断：true 截断（默认），false 四舍五入
@return {string|number}
--]]
function StringTool.toFixedEx(num, pLen, isTruncation)
    pLen = pLen or 2
    isTruncation = isTruncation == nil and true or isTruncation

    if isTruncation then
        local numStrArr = string.split(tostring(num), ".")
        if numStrArr[2] then
            numStrArr[2] = numStrArr[2]:sub(1, pLen)
        end
        return table.concat(numStrArr, ".")
    else
        return tonumber(string.format("%." .. pLen .. "f", num))
    end
end

function StringTool.numberToStringNew(num, pLen)
    pLen = pLen or 1
    local bNeg = false
    if num < 0 then
        bNeg = true
        num = -num
    end

    local ret = tostring(num)
    if num >= 100000000 then
        if num % 100000000 ~= 0 then
            num = num / 100000000
            local _pArr = string.split(tostring(num), ".")
            local len = math.min(#_pArr > 1 and #_pArr[2] or 0, pLen)
            ret = StringTool.toFixedEx(num, len) .. "亿"
        else
            num = num / 100000000
            ret = StringTool.toFixedEx(num, 0) .. "亿"
        end
    elseif num >= 1000000 then
        num = math.floor(num / 10000)
        ret = num .. "万"
    elseif num >= 10000 then
        if num % 10000 ~= 0 then
            num = num / 10000
            local _pArr = string.split(tostring(num), ".")
            local len = math.min(#_pArr > 1 and #_pArr[2] or 0, pLen)
            ret = StringTool.toFixedEx(num, len) .. "万"
        else
            num = num / 10000
            ret = StringTool.toFixedEx(num, 0) .. "万"
        end
    end

    return bNeg and "-" .. ret or ret
end

return StringTool
l