local StringTool = {}
local pb = require "pb"

function StringTool.getImageNameByUrl(url)
    local imageName, _ = string.gsub(url, "[:/.]", "_")
    return imageName .. ".png"
end

function StringTool.getScoreStr(score, fmt)
    score = tonumber(score)
    if score < 0 then
        return '-' .. StringTool.getScoreStr(-score, fmt)
    end
    if score < 10000 then
        return score
    end
    if score < 100000000 then
        return tonumber(string.format(fmt or "%.2f", StringTool.fitNumberLen(score / 10000, 5))) .. "万"
    end
    return tonumber(string.format(fmt or "%.2f", StringTool.fitNumberLen(score / 100000000, 5))) .. "亿"
end

function StringTool.fitNumberLen(score, len)
    local str = tostring(score)
    local nNum = 0
    local rStr = ""
    for i = 1, #str do
        local temp = string.sub(str, i, i)
        if temp == "." then
            --
        elseif tonumber(temp) >= 0 or tonumber(temp) <= 9 then
            nNum = nNum + 1
        end
        rStr = rStr .. temp
        if nNum >= len then
            return tonumber(rStr)
        end
    end
    return tonumber(rStr)
end

function StringTool.string2Byte(str)
    local len = #str
    local bytes = {}
    for i = 1, len do
        local b = string.byte(str, i)
        table.insert(bytes, b)
    end
    return bytes
end

-- game服务解析proto消息
function StringTool.gameProtobufDataToLuaData(bytes, respName)
    return StringTool.protobufDataToLuaData("game_cli", bytes, respName)
end

function StringTool.protobufDataToLuaData(protoName, bytes, respName)
    local filePath = StringTool.getProtoFilePath(protoName)
    local packageName = protoName
    local resqDataName = respName
    if filePath and packageName and resqDataName and filePath ~= "" and packageName ~= "" and resqDataName ~= "" then
        local protoc = require("app.Third.Proto.protoc")
        local Protoc = protoc.new()
        Protoc:load(require(filePath), packageName)
        local data2 = assert(pb.decode(packageName .. "." .. resqDataName, bytes))
        return data2
    end
end

function StringTool.protobufDataToLuaData50(protoName, bytes, respName, exName)
    local filePath = StringTool.getProtoFilePath(protoName)
    local resqDataName = respName
    if filePath and exName and exName ~= "" and resqDataName and filePath ~= "" and resqDataName ~= "" then
        local protoc = require("app.Third.Proto.protoc")
        local Protoc = protoc.new()
        Protoc:load(require(filePath), exName)
        local data2 = assert(pb.decode(exName .. "." .. resqDataName, bytes))
        return data2
    end
end

function StringTool.luaDataToProtobufData50(protoName, table, respName, exName)
    local filePath = StringTool.getProtoFilePath(protoName)
    local reqDataName = respName
    if filePath and exName and reqDataName and filePath ~= "" and exName ~= "" and reqDataName ~= "" then
        local protoc = require("app.Third.Proto.protoc")
        local Protoc = protoc.new()
        -- Protoc:loadfile(filePath)
        Protoc:load(require(filePath), exName)
        local bytes = assert(pb.encode(exName .. "." .. reqDataName, table))
        return bytes, #bytes
    end
end

function StringTool.getProtoFilePath(protoFile)
    if cc.FileUtils:getInstance():isFileExist("src/newgold/GoldCommon/ProtoBuf/" .. protoFile .. ".lua") then
        return "src/newgold/GoldCommon/ProtoBuf/" .. protoFile .. ".lua"
    end
    if cc.FileUtils:getInstance():isFileExist("src/newgold/GoldCommon/ProtoBuf/" .. protoFile .. ".luac") then
        return "src/newgold/GoldCommon/ProtoBuf/" .. protoFile .. ".luac"
    end
    return ""
end

function StringTool.secToTime(num)
    if num > 24 * 3600 then
        -- X天X小时
        local day = math.floor(num / (24 * 3600))
        local hour = math.floor((num - day * 24 * 3600) / 3600)
        return day .. "天" .. hour .. "时"
    elseif num > 3600 then
        -- X小时X分钟
        local hour = math.floor(num / 3600)
        local m = math.floor((num - hour * 3600) / 60)
        return hour .. "时" .. m .. "分"
    else
        -- X分钟X秒
        local m = math.floor(num / 60)
        local s = num - m * 60
        return m .. "分" .. s .. "秒"
    end
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
        local numStrArr = string.split(tostring(num), '.')
        if numStrArr[2] then
            numStrArr[2] = numStrArr[2]:sub(1, pLen)
        end
        return table.concat(numStrArr, '.')
    else
        return tonumber(string.format("%." .. pLen .. "f", num))
    end
end
--[[切割大数（单位在末尾），10000 = 1万。dealBigNum 不处理整数。
@param num {number|string} 数值
@param pLen {number|string} 小数点保留位数，默认 1 位
@return {string} 汉字单位的数值
--]]
function StringTool.dealBigNumEx2(num, pLen)
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
            local _pArr = string.split(tostring(num), '.')
            local len = math.min(#_pArr > 1 and #_pArr[2] or 0, pLen)
            ret = StringTool.toFixedEx(num, len) .. "亿"
        else
            num = num / 100000000
            ret = StringTool.toFixedEx(num, 0) .. "亿"
        end
    elseif num >= 10000 then
        if num % 10000 ~= 0 then
            num = num / 10000
            local _pArr = string.split(tostring(num), '.')
            local len = math.min(#_pArr > 1 and #_pArr[2] or 0, pLen)
            ret = StringTool.toFixedEx(num, len) .. "万"
        else
            num = num / 10000
            ret = StringTool.toFixedEx(num, 0) .. "万"
        end
    end

    return bNeg and "-" .. ret or ret
end

--[[获取中英文字符串混合长度，中文字符长度为2，英文为1。
@param str {any} 字符串
@return {number} 长度
--]]
function StringTool.getBLen(str)
    if str == nil then
        return 0
    end

    if type(str) ~= "string" then
        str = tostring(str)
    end

    -- 使用正则表达式将中文字符替换成两个英文字符
    local len = string.gsub(str, "[^%z\128-\255]", "01"):len()
    return len
end

--[[根据指定字节数截取字符串。
@param nickname {string} 字符串
@param len {number} 字节长度
@return {string} 新字符串
--]]
function StringTool.getMinimumValidBytesUTF8(nickname, len)
    return XH.StringTool.getMinimumValidBytesUTF8(nickname, len)
end

--[[根据指定窄字符长度截取名字（中英混合）。
@param sName {string} 名字字符串
@param len {number} 窄字符长度，默认为 6
@return {string} 新字符串
--]]
function StringTool.dealNickNameShort(sName, len)
    len = len or 6
    local strLen = StringTool.getBLen(sName)
    if sName == "" or strLen <= len then
        return sName
    end

    local localStr = StringTool.getStringObjectByBytes(sName, len)
    return localStr
end



--获取string的数字后缀
function StringTool.getNumberSuffixByString(string)
    local len = string.len(string);
    local lastNumber = -1
    for i = 1 , len do
        local tempNumber = tonumber(string.sub(string,- i ))

        if tempNumber then
            lastNumber = tempNumber
        else
            return lastNumber
        end
    end
    return lastNumber
end

--获取string的数字前缀
function StringTool.getNumberPrefixByString(string)
    local len = string.len(string);
    local lastNumber = nil
    for i = 1 , len do
        local tempNumber = tonumber(string.sub(string, 1, i ))
        if tempNumber then
            lastNumber = tempNumber
        else
            return lastNumber
        end
    end
    return lastNumber
end
return StringTool� 