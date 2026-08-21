local StringFunction = {}

--获取string的数字后缀
function StringFunction.getNumberSuffixByString(string)
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
function StringFunction.getNumberPrefixionByString(string)
    local len = string.len(string);
    local lastNumber = -1
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

function StringFunction.getKeyWordIndex(strKey)
    local index = string.len(strKey)
    local subNumber = tonumber(string.sub(strKey,index))
    local retNumber = subNumber
    while subNumber ~= nil  or index == 0 do
        index = index - 1
        retNumber = subNumber
        subNumber = tonumber(string.sub(strKey,index))
    end
    return retNumber
end

local ENUM_COMPORE = 
{
    ["SMALLER"] = 1,
    ["SAMPLE"] = 2,
    ["BIGGER"] = 3,
}

function StringFunction.isVersionBiggerOrSample(version1,version2)
    if device.platform == "windows" then
        return true
    end

    if StringFunction.compareVersion(version1,version2) == ENUM_COMPORE.BIGGER then
        return true
    end

    if StringFunction.compareVersion(version1,version2) == ENUM_COMPORE.SAMPLE then
        return true
    end

    return false
end

function StringFunction.compareVersion(version1,version2)
    local nums1 = StringFunction.cutString(version1)
    local nums2 = StringFunction.cutString(version2)
    for i = 1,#nums1 do  
        if i > #nums2 then
            return ENUM_COMPORE.BIGGER
        end
        if nums1[i] > nums2[i] then
            return ENUM_COMPORE.BIGGER
        elseif nums1[i] < nums2[i] then
            return ENUM_COMPORE.SMALLER
        end
    end

    if #nums1 == #nums2 then
        return ENUM_COMPORE.SAMPLE
    end

    if #nums1 < #nums2 then
        return ENUM_COMPORE.SMALLER
    end
end

function StringFunction.GetOsVersion()
    local strReturn = 10000

    local strSystemVer = XH.bf.SysFunc:GetSystemVersion()
    if(strSystemVer == "empty") then
        print("Get SysTem Version error")
        return strReturn
    end

    local str = ""
    for name in string.gmatch(strSystemVer,"[^.]+") do
        str = str .. name
    end

    local nVersion = tonumber(str)
    if(nVersion == nil) then
        nVersion = 0
    end

    if (nVersion < 100) then
        nVersion = nVersion * 10
    end

    if device.platform == "android" then
        strReturn = 10000 + nVersion
    elseif device.platform == "ios" then
        strReturn = 20000 + nVersion
    end

    return strReturn
end

function StringFunction.getFrontStringByFlag(str,cFlag)
    local index = string.find(str,cFlag)
    if index ~= nil then
        return string.sub(str,1,index - 1)
    end
    return ""
end

function StringFunction.getBackStringByFlag(str,cFlag)
    local index = string.find(str,cFlag)
    if index ~= nil then
        return string.sub(str,index + 1,#str)
    end
    return ""
end

function StringFunction.spiltStringByFlag(str,cFlag)
    local splitStr = {}
    local tmpStr = clone(str)
    while true do
        local a,b = string.find(tmpStr,cFlag)
        if a == nil then
            if string.len(tmpStr) ~= 0 then
                table.insert(splitStr,tmpStr)
            end
            break
        end
        table.insert(splitStr,string.sub(tmpStr,1,a-1))

        tmpStr = string.sub(tmpStr,b + 1,-1)
    end
    return splitStr 
end

function StringFunction.cutString(version)
    local nums = {}
    local tmpVer = clone(version)
    while true do
        local a,b = string.find(tmpVer,"[0-9]+")
        if a == nil then
            break
        end
        table.insert(nums,tonumber(string.sub(tmpVer,1,b)))
        a,b = string.find(tmpVer,"[0-9]+.")
        if a == nil then
            break
        end
        tmpVer = string.sub(tmpVer,b + 1,-1)
    end
    return nums    
end

function StringFunction.getTableByString(str,semi_char,equ_char)
    local back_table = {}
    local semi_back = StringFunction.split(str,semi_char)
    if semi_back == nil or #semi_back < 1 then
        return back_table
    end

    for i = 1,table.nums(semi_back) do
        local equ_back = StringFunction.split(semi_back[i], equ_char)
        if equ_back == nil or table.nums(equ_back) ~= 2 then
            break
        end

        back_table[equ_back[1]] = equ_back[2]
    end

    return back_table
end

-- 将字符串里的内容进行分割，按split_char 分割
function StringFunction.split(str, split_char)        
    local sub_str_tab = {}    

    while true do            
        local pos = string.find(str, split_char)      
        if (not pos) then                
            local size_t = table.getn(sub_str_tab)    
            table.insert(sub_str_tab,size_t+1,str)    
            break      
        end    

        local sub_str = string.sub(str, 1, pos - 1)                  
        local size_t = table.getn(sub_str_tab)    
        table.insert(sub_str_tab,size_t+1,sub_str)    
        local t = string.len(str)    
        str = string.sub(str, pos + 1, t)       
    end        
    return sub_str_tab    
end 

-- 获取合法的utf8字节数，同时满足大于等于传入的minimumByte
function StringFunction.getMinimumValidBytesUTF8(str, minimumByte)
    local bytes = 0
    local left = string.len(str)
    local arr  = {0, 0xc0, 0xe0, 0xf0, 0xf8, 0xfc}
    while left ~= 0 do
        local tmp = string.byte(str, -left)
        local i   = #arr
        while arr[i] do
            if tmp >= arr[i] then
                left = left - i
                bytes = bytes + i
                if  bytes >= minimumByte then 
                    return  bytes
                end
                break
            end
            i = i - 1
        end
    end
    return bytes
end

--截取任意中英混合的UTF8字符串，endIndex可缺省
function StringFunction.subStringUTF8(str, iStartIndex, iEndIndex)
    if iStartIndex < 0 then
        iStartIndex = StringFunction.subStringGetTotalIndex(str) + iStartIndex + 1
    end

    if iEndIndex ~= nil and iEndIndex < 0 then
        iEndIndex = StringFunction.subStringGetTotalIndex(str) + iEndIndex + 1
    end

    if iEndIndex == nil then 
        return string.sub(str, StringFunction.subStringGetTrueIndex(str, iStartIndex))
    else
        return string.sub(str, StringFunction.subStringGetTrueIndex(str, iStartIndex), StringFunction.subStringGetTrueIndex(str, iEndIndex + 1) - 1)
    end
end

--获取中英混合UTF8字符串的真实字符数量
function StringFunction.subStringGetTotalIndex(str)
    local curIndex = 0
    local i = 1
    local lastCount = 1
    repeat 
        lastCount = StringFunction.subStringGetByteCount(str, i)
        i = i + lastCount
        curIndex = curIndex + 1
    until(lastCount == 0)
    return curIndex - 1
end

function StringFunction.subStringGetTrueIndex(str, iIndex)
    local curIndex = 0
    local i = 1
    local lastCount = 1
    repeat 
        lastCount = StringFunction.subStringGetByteCount(str, i)
        i = i + lastCount
        curIndex = curIndex + 1
    until(curIndex >= iIndex)
    return i - lastCount
end

--返回当前字符实际占用的字符数
function StringFunction.subStringGetByteCount(str, iIndex)
    local curByte = string.byte(str, iIndex)
    local byteCount = 1
    if curByte == nil then
        byteCount = 0
    elseif curByte > 0 and curByte <= 127 then
        byteCount = 1
    elseif curByte>=192 and curByte<=223 then
        byteCount = 2
    elseif curByte>=224 and curByte<=239 then
        byteCount = 3
    elseif curByte>=240 and curByte<=247 then
        byteCount = 4
    end
    return byteCount
end

--	对x做舍弃N位之后的小数， 如111.255  返回 111.25
function StringFunction.numFormat(x, N)
    x = tonumber(x) or 0
    N = N or 2
    if math.floor(x) < x then
        local tempX = math.floor(x * math.pow(10,N)) / math.pow(10,N)
        local format = "%."..N.."f"
        return string.format(format, tempX)
    else
        return x
    end
end

return StringFunction
."