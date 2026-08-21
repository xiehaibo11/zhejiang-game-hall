--
-- Author: huang rulin
-- Date: 2018-01-08 10:01:42
--

--[[
* 通用扩展
]]
local eventType = import(".EventType")
local ExternalFunc = {}

local m_tableTxtConfig = {}
--获取配置记录
function ExternalFunc.getFontConfig(fontfile, fontsize)
	fontsize = fontsize or 24
	local strKey = string.format("%s-%d", tostring(fontfile), tostring(fontsize))
	local config = m_tableTxtConfig[strKey]
	if nil == config then
		config = {}
		local tmpEN = cc.LabelTTF:create("A", fontfile, fontsize)
		local tmpCN = cc.LabelTTF:create("网", fontfile, fontsize)
		local tmpen = cc.LabelTTF:create("a", fontfile, fontsize)
		local tmpNu = cc.LabelTTF:create("2", fontfile, fontsize)
		local tmpSp = cc.LabelTTF:create("*", fontfile, fontsize)
		config.upperEnSize = tmpEN:getContentSize()
		config.cnSize = tmpCN:getContentSize()
		config.lowerEnSize = tmpen:getContentSize()
		config.numSize = tmpNu:getContentSize()
		config.spSize = tmpSp:getContentSize()

		m_tableTxtConfig[strKey] = config
	end
	return config
end


function ExternalFunc.lineFeedStr(str, maxWidth, fontName, fontSize)
	local config = ExternalFunc.getFontConfig(fontName, fontSize)
	return ExternalFunc.stringLineFeed(str, config, maxWidth);
end

--依据宽度换行
function ExternalFunc.stringLineFeed(szText, config, maxWidth)
    if config == nil or maxWidth == nil or maxWidth <= 0 then
        return szText
    end

    local spCharSingleOne = { --ascii字符 特殊的占一个汉字长度的符号
        [0x23] = true, --#
        [0x24] = true, --$
        [0x25] = true, --%
        [0x26] = true, --&
        [0x40] = true, --@
        [0x7E] = true, --~
    }

    --当前计算宽度
    local width = 0
    --截断结果
    local szResult = ""
    --完成判断
    local bOK = false

    local i = 1
    while true do
        local cur = string.sub(szText,i,i)
        local byte = string.byte(cur)
        if byte == nil then
            break
        end
        local chaWidth = 0
        
        if byte>0x0 and byte<=0x7F then
            if byte ~= 32 then --区分大小写和数字
                if string.byte('A') <= byte and byte <= string.byte('Z') then
                    chaWidth = config.upperEnSize.width
                elseif string.byte('a') <= byte and byte <= string.byte('z') then
                    chaWidth = config.lowerEnSize.width
                elseif spCharSingleOne[byte] then
                    chaWidth = config.cnSize.width
                else
                    chaWidth = config.numSize.width
                end
                i = i + 1
            else
                chaWidth = config.spSize.width
                i = i + 1
            end
        elseif byte > 0x7F then
            chaWidth = config.cnSize.width
            
            local tl = 2
            if byte >= 0xC0 and byte <= 0xDF then
                tl = 2
            elseif byte >= 0xE0 and byte <= 0xEF then
                tl = 3
            elseif byte >= 0xF0 and byte <= 0xF7 then
                tl = 4
            elseif byte >= 0xF8 and byte <= 0xFB then
                tl = 5
            else
                tl = 6
            end
            cur = string.sub(szText,i,i+tl-1)
            i = i + tl
        end

        if width + chaWidth > maxWidth then
            szResult = szResult .. "\n"
            width = chaWidth
        else
            width = width + chaWidth
        end
        szResult = szResult .. cur
    end
     
    return szResult
end

function ExternalFunc.addCustomEventListener(node, evt, callFunc)
	if node and type(evt) == "string" and type(callFunc) == "function" then
		local function listenerCallFunc(event)
			if callFunc then
				callFunc(event:getEventName(), event._usedata)
			end
		end
		local listener = cc.EventListenerCustom:create(evt, listenerCallFunc)
		local eventDispatcher = node:getEventDispatcher()
		eventDispatcher:addEventListenerWithSceneGraphPriority(listener, node)	
	end
end

function ExternalFunc.sendCustomEvent(evt, data)
	local event = cc.EventCustom:new(evt)
	event._usedata = data
	cc.Director:getInstance():getEventDispatcher():dispatchEvent(event)
end

function ExternalFunc.addHandCardSelectListener(node)	
	if node  then
		local function selectChange(eventName, data)
			local cardValue = data["cardValue"]
			local selectMsk = node:getChildByName("cd_selectMask")
			if cardValue == node:getTag() then
				if selectMsk == nil then
					selectMsk = ccui.ImageView:create("noplist/mask3.png", ccui.TextureResType.localType):setAnchorPoint(cc.p(0,0))
                    :setScale9Enabled(true)
                    selectMsk:addTo(node, 100)
                    selectMsk:setPosition(0,-5)
					selectMsk:setContentSize(node:getContentSize())
					selectMsk:setName("cd_selectMask")
				end
				selectMsk:setVisible(true)
			else				
				if selectMsk ~= nil then
					selectMsk:setVisible(false)
				end
			end
		end
		ExternalFunc.addCustomEventListener(node, eventType.HAND_CARD_SELECT, selectChange)
	end
end

function ExternalFunc.sendHandCardSelectEvt(cardValue)
	ExternalFunc.sendCustomEvent(eventType.HAND_CARD_SELECT, {["cardValue"]=cardValue})
end


function ExternalFunc.isGPSOn(msg)
    msg = msg or {
        px=0,
        py=0,
    }
    return (msg.px+msg.py > 0.1)
end

function ExternalFunc.isTowGpsOk(gps1, gps2)
    return ExternalFunc.isGPSOn(gps1) and ExternalFunc.isGPSOn(gps2)
end

local EARTH_RADIUS = 6378.137

local function rad(d)
    return d * math.pi / 180.0
end

local function GetDistance(lat1, lng1, lat2, lng2)

    local radLat1 = rad(lat1);
    local radLat2 = rad(lat2);
    local a = radLat1 - radLat2;
    local b = rad(lng1) - rad(lng2);
    local s = 2 * math.asin(math.sqrt(math.pow(math.sin(a/2),2) +
     math.cos(radLat1)*math.cos(radLat2)*math.pow(math.sin(b/2),2)));
    s = s * EARTH_RADIUS;
    -- s = math.round(s * 10000) / 10000;
    return s
end

function ExternalFunc.getGPSDisTance(gps1, gps2)
    local res = GetDistance(
        gps1.px,
        gps1.py,
        gps2.px,
        gps2.py
    )

    res = res*1000
    return math.floor(res)
end

function ExternalFunc.formatDistanceNum(dis)
    if not dis then return "" end
    local dis = tonumber(dis)
    if dis < 10000 then
        return string.format("%dm",dis)
    else
        return tostring( math.floor(dis/1000) ).."千米"
    end
end

function ExternalFunc.numberToString(szNum)  
	szNum = math.floor(szNum)
    local szChMoney = ""  
  
    local iLen = 0  
    local iNum = 0  
    local iAddZero = 0  
    local str_shi = "十"
    local str_bai = "百"
    local str_qian = "千"
    local str_wan = "万"
    local str_yi = "亿"
    local hzUnit = {"", str_shi,str_bai ,str_qian , str_wan, str_shi,str_bai , str_qian, str_yi,str_shi , str_bai, str_qian, str_wan, str_shi, str_bai, str_qian}  
    local i = 0  
    local hzNum = {"零", "一", "二", "三", "四", "五", "六", "七", "八", "九"}    
  
    if nil == tonumber(szNum) then  
        return ""
    end  
   
    iLen = string.len(szNum)   
  
    if iLen > 15 or iLen == 0 or tonumber(szNum) < 0 then  
        return ""  
    end  
      
    --local i = 0  
    for i = 1, iLen  do   
        iNum = string.sub(szNum,i,i)  
        if tonumber(iNum) == 0 then  
            iAddZero = iAddZero + 1  
        else  
            if iAddZero > 0 then  
                szChMoney = szChMoney..hzNum[1]    
            end  
  
            szChMoney = szChMoney..hzNum[iNum + 1] --//转换为相应的数字  
            iAddZero = 0  
        end  
          
    if (iAddZero < 4) and (0 == (iLen - i) % 4 or 0 ~= tonumber(iNum)  ) then  
            szChMoney = szChMoney..hzUnit[iLen-i+1]  
        end  
    end
    return szChMoney  
end  

function ExternalFunc.widgetTouchEnabledDelay(widget, delay)
	if iskindof(widget, "ccui.Widget") and not tolua.isnull(widget) and type(delay) == "number" and delay > 0 then
		widget:setTouchEnabled(false)
		performWithDelay(widget, function() widget:setTouchEnabled(true) end, delay)
	end
end

local interimTickDirName = ""
local interimBaseDirname = "interimImgs"
--每次启动将清空缓存
function ExternalFunc.clearInterimImageCache()
    local storageDir = cc.FileUtils:getInstance():getWritablePath() .. interimBaseDirname .. "/"
    if cc.FileUtils:getInstance():isDirectoryExist(storageDir) then
        cc.FileUtils:getInstance():removeDirectory(storageDir.."/")
    end
    interimTickDirName = ""
end

local function filter_spec_chars(s)
	local ss = {}
    local k = 1
    local count = 0
	while true do
		if k > #s then break end
		local c = string.byte(s,k)
		if not c then break end
		if c<192 then
			if (c>=48 and c<=57) then
                table.insert(ss, string.char(c))
                count = count+1
			end
			k = k + 1
		elseif c<224 then
			k = k + 2
		elseif c<240 then
			if c>=228 and c<=233 then
				local c1 = string.byte(s,k+1)
				local c2 = string.byte(s,k+2)
				if c1 and c2 then
					local a1,a2,a3,a4 = 128,191,128,191
					if c == 228 then a1 = 184
					elseif c == 233 then a2,a4 = 190,c1 ~= 190 and 191 or 165
					end
					if c1>=a1 and c1<=a2 and c2>=a3 and c2<=a4 then
                        table.insert(ss, string.char(c,c1,c2))
                        count = count+2
					end
				end
			end
			k = k + 3
		elseif c<248 then
			k = k + 4
		elseif c<252 then
			k = k + 5
		elseif c<254 then
			k = k + 6
		end
	end
	return table.concat(ss), count
end


function ExternalFunc.CheckChinese(s, lenLimit)
    local retStr, retLen = filter_spec_chars(s)

    return retStr==s and retLen<=lenLimit;
end


function ExternalFunc.autoRemoveCsbAni(node, actTimeLine, callFunc)
    callFunc = callFunc or function() end
    local startFrame = actTimeLine:getStartFrame()
    local endFrame = actTimeLine:getEndFrame()
    local frameInterval = 1/60
    local totalTime = frameInterval*(endFrame-startFrame)/actTimeLine:getTimeSpeed()

    if totalTime <= 0 then totalTime = 0.01 end
    performWithDelay(node, function() node:removeSelf(); callFunc() end, totalTime)
end

function ExternalFunc.analyzeDismissShow(srcData, BigDismissNode, playerDismissNodes, maxPlayer)
    if maxPlayer <= 0 then return end
    playerDismissNodes = playerDismissNodes or {}
    srcData = srcData or 0
    local bigType = bit._and(srcData, 0xf)

    for k,v in pairs(playerDismissNodes) do
        v:setVisible(false)
    end
    BigDismissNode:setVisible(false)

    if bigType == 2 then --代理操作解散
        local txt = BigDismissNode:getChildByName("Text")
        if txt then
            BigDismissNode:setVisible(true)
            txt:setString("管理员解散")
        end
    elseif bigType == 3 then --管理后台解散
        local txt = BigDismissNode:getChildByName("Text")
        if txt then
            BigDismissNode:setVisible(true)
            txt:setString("客服解散")
        end
    elseif bigType == 6 then --超时解散
        local txt = BigDismissNode:getChildByName("Text")
        if txt then
            BigDismissNode:setVisible(true)
            txt:setString("超时解散")
        end
    elseif bigType == 5 then --玩家申请解散
        local dismissPosData = bit._rshift(srcData, 4)
        for k,v in pairs(playerDismissNodes) do
            local disType = bit._and(bit._rshift(dismissPosData, 2*(maxPlayer-(k+1))), 0x3)        
            local txt = v:getChildByName("Text")
            if txt then
                local clr
                local outClr
                if disType == 0 then
                    clr = cc.c3b(255,255,255)
                    outClr =cc.c4b(203,137,0,255)
                    v:setVisible(true)
                    txt:setString("未选择")
                elseif disType == 1 then
                    v:setVisible(true)
                    clr = cc.c3b(255,255,255)
                    outClr =cc.c4b(105,141,200,255)
                    txt:setString("申请解散")
                elseif disType == 2 then
                    v:setVisible(true)
                    clr = cc.c3b(255,255,255)
                    outClr =cc.c4b(107,166,90,255)
                    txt:setString("同意")
                elseif disType == 3 then
                    v:setVisible(true)
                    clr = cc.c3b(255,255,255)
                    outClr =cc.c4b(240,19,86,255)
                    txt:setString("拒绝")
                end

                if clr then
                    v:setCascadeColorEnabled(false)
                    v:setColor(outClr)
                    txt:setColor(cc.c3b(255,255,255))
                    txt:setTextColor(outClr)
                end
            end
        end
    end
end


return ExternalFunc