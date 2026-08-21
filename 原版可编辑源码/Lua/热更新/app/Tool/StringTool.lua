local StringTool = {}

-- 截取标记flag之前的字符串
function StringTool.subStringBeforeFlag(str, flag)
    local index = string.find(str, flag)
    if not index then
        return ""
    end
    return string.sub(str, 1, index - 1)
end

-- 截取标记flag之后的字符串
function StringTool.subStringAfterFlag(str, flag)
    local index = string.find(str, flag)
    if not index then
        return ""
    end
    return string.sub(str, index + 1, #str)
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

-- 增强版：提取字符串中的首个完整数字（支持负数和小数）
function StringTool.getFirstNumberInString(s)
    -- 模式匹配说明：
    -- [-+]?    : 可选符号
    -- %d*      : 可选的整数部分（允许以小数点开头的情况如".56"）
    -- %.?      : 可选小数点
    -- %d+      : 必须包含至少一个数字
    local numberStr = s:match("[-+]?%d*%.?%d+")
    if numberStr then
        -- 处理以小数点开头的情况（如".56"转换为0.56）
        if numberStr:sub(1,1) == "." then
            return tonumber("0"..numberStr)
        end
        return tonumber(numberStr)
    end
    return nil
end

function StringTool.getFrontStringByFlag(str,cFlag)
    local index = string.find(str,cFlag)
    if index ~= nil then
        return string.sub(str,1,index - 1)
    end
    return ""
end

function StringTool.getBackStringByFlag(str,cFlag)
    local index = string.find(str,cFlag)
    if index ~= nil then
        return string.sub(str,index + 1,#str)
    end
    return ""
end

-- 去除字符串头部和尾部的空格 \t等
function StringTool.trim(str)
    local tmp = string.gsub(str, "^%s+", "")
    tmp = string.gsub(tmp, "%s+$", "")
    return tmp
end

-- int32 IPv4：协议里为网络序（大端）uint32，第一字节为点分第一段
function StringTool.ipv4IntToString(n)
    if n == nil or n == 0 then
        return ""
    end
    if n < 0 then
        n = n + 4294967296
    end
    return string.format("%d.%d.%d.%d",
        math.floor(n / 16777216) % 256,
        math.floor(n / 65536) % 256,
        math.floor(n / 256) % 256,
        n % 256)
end

-- 判断字符中是否存在空格或者其它特殊字符
function StringTool.isSpecialCharsExist(str)
    --对ASCII码中32-126的特殊字符处理包括字母和数字
    local res = false 
    local k = 1  
    while true do
        if k > #str then break end
        local c = string.byte(str,k)
        if not c then break end
        if c >= 32 and c <= 126 then
            res = true
            break
        end
        k = k + 1
    end
    return res
end

function StringTool.splitWithTrim(str, delim)
    local args = {}
    local pattern = '(.-)' .. delim
    local last_end = 1
    local s, e, cap = string.find(str, pattern , 1)
    while s do
        local tmp = StringTool.trim(cap)
        if tmp ~= '' then
            table.insert(args,tmp)
        end
        last_end = e + 1
        s, e, cap = string.find(str, pattern, last_end)
    end
    if last_end <= #str then
        cap = StringTool.trim(string.sub(str, last_end))
        if cap ~= "" then
            table.insert(args,cap)
        end
    end
    return args
end

-- 获取合法的utf8字节数，同时满足大于等于传入的minimumByte
function StringTool.getMinimumValidBytesUTF8(str, minimumByte)
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

--获取昵称[取8位]
function StringTool.cutStringByLength(str, len)
    if str == nil then
        return
    end
    len = len or 8
    if string.len(str) > len then
        local validBytes = StringTool.getMinimumValidBytesUTF8(str, len)
        str = string.sub(str,1,validBytes) .. ".."
    end
    return str
end

--获取昵称[取8位]
function StringTool.cutStringByLengthWithDot(str, len)
    if str == nil then
        return
    end
    len = len or 8
    if string.len(str) > len then
        local validBytes = StringTool.getMinimumValidBytesUTF8(str, len)
        str = string.sub(str,1,validBytes)
    end
    return str
end

function StringTool.compareVersions(ver1, ver2)
    local verList1 = string.split(ver1, ".")
    local verList2 = string.split(ver2, ".")
    for i = 1, math.min(#verList1, #verList2) do
        local verItem1 = tonumber(verList1[i])
        local verItem2 = tonumber(verList2[i])
        if verItem1 ~= verItem2 then
            return verItem1 - verItem2
        end
    end
    return 0
end

function StringTool.urlToHttps(url)
	if not url then
		return 
	end
   
	local find = string.find(url, "https")
	if find then
		return url
	end
	
	local rtnUrl = string.gsub(url, "http", "https")

	return rtnUrl
end

function StringTool.getImageNameByUrl(url)
    local imageName,_ = string.gsub(url, "[:/.]", "_")
    return imageName .. ".png"
end

function StringTool.newLineStringByMaxLen(str, maxLen)
    if not str or type(str) ~= "string" then
        return
    end
    if not maxLen or maxLen <= 0 then
        return str
    end
    local tmpStr = clone(str)
    local targetStr = ""

    while( string.len(tmpStr) > maxLen ) do
        local validBytes = StringTool.getMinimumValidBytesUTF8(tmpStr, maxLen)
        targetStr = targetStr .. string.sub(tmpStr,1,validBytes) .. "\n"
        tmpStr = string.sub(tmpStr,validBytes + 1)
    end
    targetStr = targetStr .. tmpStr
    return targetStr
end

-- 获取字符串最后的数字
function StringTool.getLastCharAndToNum(string)
    local len = string.len(string);
    local lastNumber = 0
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

--转化为16进制字符
function StringTool.bin2hex(bytes)
    local allHexStr = ""
    for i =1,string.len(bytes) do 
        local charCode = tonumber(string.byte(bytes,i,i))
        local hexStr = string.format("%02X",charCode)
        
        allHexStr = allHexStr .. hexStr
    end 
    return allHexStr
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

function StringTool.getTrimName(name, length)
    length = length or 6
    if StringTool.simpleGetStrWidth(name) > length then
        name = StringTool.simpleSubStrUtilWidth(name, length) .. "..."
    end
    return name
end

function StringTool.numberToString(score, len)
    len = len or 5
    len = len < 4 and 4 or len
    score = tonumber(score)
    if score < 10000 then
        return score
    end
    if score < 100000000 then
        local number_truncated = math.floor(StringTool.fitNumberLen(score / 10000, len) * 100 + 0.0001) / 100
        return tonumber(string.format("%.2f", number_truncated)) .. "万"
    end
    local number_truncated = math.floor(StringTool.fitNumberLen(score / 100000000, len) * 100 + 0.0001) / 100
    return tonumber(string.format("%.2f", number_truncated)) .. "亿"
end

function StringTool.changeNumByComma(numTmp, cnt)
    cnt = cnt or 3 -- 逗号间隔数
    local resultNum = numTmp
    if type(numTmp) == "number" then
        local inter, point = math.modf(numTmp)

        local strNum = tostring(inter)
        local newStr = ""
        local numLen = string.len(strNum)
        local count = 0
        for i = numLen, 1, -1 do
            if count % cnt == 0 and count ~= 0 then
                newStr = string.format("%s,%s", string.sub(strNum, i, i), newStr)
            else
                newStr = string.format("%s%s", string.sub(strNum, i, i), newStr)
            end
            count = count + 1
        end

        if point > 0 then
            --@desc 存在小数点，
            local strPoint = string.format("%.2f", point)
            resultNum = string.format("%s%s", newStr, string.sub(strPoint, 2, string.len(strPoint)))
        else
            resultNum = newStr
        end
    end

    return resultNum
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

function StringTool.replaceMatchStr(str)
    if str and str ~= "" then
        str = string.gsub(str, "亲友圈", "比赛场")
        str = string.gsub(str, "圈子", "比赛场")
        str = string.gsub(str, "圈主消耗", "比赛场消耗")
        str = string.gsub(str, "圈主支付", "比赛场消耗")
        str = string.gsub(str, "（圈主）消耗", "（比赛场）消耗")
        str = string.gsub(str, "战绩管理", "比赛战绩")
        str = string.gsub(str, "加入黑名单", "禁止参赛")
        str = string.gsub(str, "互斥名单", "禁止同赛")
        str = string.gsub(str, "限制同桌", "禁止同赛")
        str = string.gsub(str, "互斥玩家", "禁止同赛玩家")
        str = string.gsub(str, "无法同桌游戏", "无法同桌比赛")
        str = string.gsub(str, "固定玩法", "比赛玩法")
        str = string.gsub(str, "成员管理", "成员详情")
        str = string.gsub(str, "圈主", "领队")
        str = string.gsub(str, "管理员", "副领队")
        str = string.gsub(str, "冠军支付", "冠军消耗")
        str = string.gsub(str, "末位支付", "末位消耗")
        str = string.gsub(str, "平摊支付", "平摊消耗")
        str = string.gsub(str, "战绩查询", "比赛战绩")
        str = string.gsub(str, "房主付", "房主消耗")
        str = string.gsub(str, "房主支付", "房主消耗")
        str = string.gsub(str, "平摊付", "平摊消耗")
        if XH.teaHouseManager:isInTeaHouse() then
            str = string.gsub(str, "解散包厢", "解散比赛")
        end
    end
    return str
end

function StringTool.formatRemainingTime(seconds)
    -- 计算小时、分钟和秒
    local hours = math.floor(seconds / 3600)
    local minutes = math.floor(seconds % 3600 / 60)
    local seconds = seconds % 60

    -- 格式化为 HH:MM:SS，如果任何单位小于10，添加前导零
    return string.format("%02d:%02d:%02d", hours, minutes, seconds)
end

-- 替换50的http服务域名
function StringTool.replaceSiblyUrl(url)
    local DEBUG = require("app.Config.GlobalConfig").IsDebug -- 灰度
    if DEBUG or not XH then
        return url
    end
    
    if not XH.replaceHlyasUrl then
        local configModule = XH.lobby:getModule("Configuration")
        if not configModule then
            return url
        end
        local ConfigurationDefine = require("lobby.Modules.Configuration.Define")
        local configJsonData = configModule:getConfigJsonData(ConfigurationDefine.Config.ALL, "AllConfig")
        if configJsonData then
            XH.replaceHlyasUrl = configJsonData.replace_hlyas_url
        end
    end 
    
    if not XH.replaceHlyasUrl then 
        return url
    end

    if string.find(XH.replaceHlyasUrl, "https") then
        local UrlConf = require("app.Config.UrlConf")
        local escaped_old_part = string.gsub(UrlConf.First_Url_50, "([%.%-])", "%%%1")
        url = string.gsub(url, escaped_old_part, XH.replaceHlyasUrl)
        return url
    end
end

-- 在指定位置分割字符串，支持中文字符
function StringTool.splitStringAtPosition(str, position)
    if position < 1 then
        return "", str
    end
    if position > #str then
        return str, ""
    end
    local i = 1
    local tEnd = #str
    local width = 0
    while i <= tEnd do
        local tmp_c = string.byte(str, i, i)
        width = width + (tmp_c <= 127 and 1 or 2)
        if width > position then
            tEnd = i - 1
            break
        else
            i = i + StringTool.privateGuessUTFLen(tmp_c)
        end
    end
    return string.sub(str, 1, tEnd), string.sub(str, tEnd + 1)
end

-- 剩余时间时间戳转换为x天x小时x分钟 单位秒 isShort简略显示
function StringTool.getLeftTimeStr(lefttime,isShort)
    local retStr = ""
    if lefttime > 0 then
        local day = math.floor(lefttime/86400)
        if day > 0 then
            retStr = retStr..day.."天"
        end
        local hour = math.floor((lefttime%86400)/3600)
        retStr = retStr..hour.."小时"
        if day <= 0 or not isShort then
            local minute = math.floor((lefttime%3600)/60)
            retStr = retStr..minute.."分钟"
        end
    end
    return retStr
end

function StringTool.htmlToXML(html)
    -- 预处理：去除换行和首尾空格
    html = html:gsub("<!%-%-.-%-%->", "")    -- 移除注释
               :gsub("[\r\n]+", " ")          -- 原始换行转为空格
               :gsub("%s+", " ")              -- 合并连续空格
               :gsub(">%s+<", "><")           -- 清理标签间空格

    local stack = {}         -- 标签嵌套栈
    local buffer = {}         -- 输出缓存
    local pos = 1             -- 解析位置指针
    local paragraph_open = false  -- 段落状态标记

    -- 颜色值解析器 (支持RGB/HEX)
    local function parse_color(value)
        value = value:gsub("%s+", ""):lower()
        
        -- 处理 #FFF / #FFFFFF 格式
        if value:find("#") then
            local hex = value:gsub("#", "")
            return (#hex == 3 and hex:gsub("(.)", "%1%1")) or hex
        end

        -- 处理 rgb(255,0,0) 格式
        local r, g, b = value:match("rgb%((%d+),(%d+),(%d+)%)")
        if r and g and b then
            return string.format("%02x%02x%02x", 
                math.min(tonumber(r), 255), 
                math.min(tonumber(g), 255), 
                math.min(tonumber(b), 255))
        end

        return nil
    end

    -- 主解析循环
    while pos <= #html do
        local tag_start, tag_end, slash, tag_name, attrs = 
            html:find("<(/?)%s*([%w-]+)([^>]*)>", pos)

        if not tag_start then
            -- 处理剩余文本内容
            local remaining = html:sub(pos)
            table.insert(buffer, remaining)
            break
        end

        -- 处理标签前的文本
        local raw_text = html:sub(pos, tag_start-1)
        if #raw_text > 0 then
            table.insert(buffer, raw_text)
        end

        tag_name = tag_name:lower()
        if slash == "/" then
            -- 闭合标签处理
            if tag_name == "span" and stack[#stack] == "font" then
                table.insert(buffer, "</font>")
                table.remove(stack, #stack)
            elseif tag_name == "p" and paragraph_open then
                table.insert(buffer, "<br/>")
                paragraph_open = false
            end
        else
            -- 开放标签处理
            if tag_name == "span" then
                -- 解析样式属性
                local styles = {}
                for k, v in (attrs:match("style%s*=%s*['\"](.-)['\"]") or ""):gmatch("([%w-]+)%s*:%s*([^;]+)") do
                    styles[k:lower()] = v
                end

                -- 构建font标签
                local font_attrs = {}
                if styles["color"] then
                    local color = parse_color(styles["color"])
                    if color then
                        table.insert(font_attrs, "color='#"..color.."'")
                    end
                end
                if styles["font-size"] then
                    local size = styles["font-size"]:match("%d+")
                    if size then
                        table.insert(font_attrs, "size='"..size.."'")
                    end
                end

                if #font_attrs > 0 then
                    table.insert(buffer, "<font "..table.concat(font_attrs, " ")..">")
                    table.insert(stack, "font")
                end
            elseif tag_name == "p" then
                paragraph_open = true
            elseif tag_name == "br" then
                -- 直接生成XML格式的<br/>标签（保留属性）
                local clean_attrs = attrs:gsub("%s*/%s*$", "")  -- 移除结尾的自闭合斜杠
                table.insert(buffer, "<br"..clean_attrs.."/>")
            end
        end

        pos = tag_end + 1
    end

    -- 自动闭合未关闭的标签
    while #stack > 0 do
        table.insert(buffer, "</font>")
        table.remove(stack, #stack)
    end

    -- 后处理优化
    local result = table.concat(buffer)
        :gsub("(%s*\n%s*)+", "\n")  -- 压缩连续换行
        :gsub("^%s+", "")           -- 清除首部空白
        :gsub("%s+$", "")           -- 清除尾部空白

    return result
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

return StringTool