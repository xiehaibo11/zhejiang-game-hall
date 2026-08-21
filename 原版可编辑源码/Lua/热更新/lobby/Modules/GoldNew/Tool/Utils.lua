local LocalConfig = import("..Configs.LocalConfig")
local ShowPropFunction = XH.Bridge:require("lobby.Modules.BagSysNew.ShowPropFunction")

local Utils = {}
local function format_number(n)
    n = tonumber(n) or 0
    local abs_n = math.abs(n)
    local units = {
        {suffix = "京", threshold = 1e16, divisor = 1e16, max_whole = 9999, decimal_places = 2, whole_threshold = 100},
        {suffix = "兆", threshold = 1e12, divisor = 1e12, max_whole = 9999, decimal_places = 2, whole_threshold = 100},
        {suffix = "亿", threshold = 1e8, divisor = 1e8, max_whole = 9999, decimal_places = 2, whole_threshold = 100},
        {suffix = "万", threshold = 1e6, divisor = 1e4, max_whole = 9999, decimal_places = 2, whole_threshold = 100}
    }

    for _, unit in ipairs(units) do
        if abs_n >= unit.threshold then
            local scaled_value = n / unit.divisor
            local decimal_places = unit.decimal_places

            -- 超过whole_threshold时取消小数
            if scaled_value >= unit.whole_threshold then
                decimal_places = 0
            end

            -- 向上取整处理
            local rounded_value
            if decimal_places == 0 then
                rounded_value = math.floor(scaled_value)
            else
                local factor = 10 ^ decimal_places
                rounded_value = math.floor(scaled_value * factor) / factor
            end

            -- 处理最大显示值
            if rounded_value > unit.max_whole then
                rounded_value = unit.max_whole
            end

            -- 格式化输出
            if decimal_places > 0 then
                return string.format("%." .. decimal_places .. "f%s", rounded_value, unit.suffix)
            else
                return string.format("%d%s", rounded_value, unit.suffix)
            end
        end
    end

    -- 处理小于100万的情况
    return string.format("%d", math.floor(n))
end

-- 测试用例
-- local test_cases = {
--     {12345, "12345"}, -- 小于100万，显示全数字
--     {999999, "999999"}, -- 小于100万，显示全数字
--     {1000000, "100万"}, -- 等于100万，显示两位小数
--     {1234567, "123万"}, -- 大于100万
--     {10000000, "1000万"}, -- 大于100万，不显示小数
--     {99999999, "9999万"}, -- 万单位最大值
--     {100000000, "1.00亿"}, -- 等于1亿，显示两位小数
--     {1234567890, "12.34亿"}, -- 大于1亿，显示两位小数
--     {10000000000, "100亿"}, -- 大于100亿，不显示小数
--     {999999999999, "9999亿"}, -- 亿单位最大值
--     {1000000000000, "1.00兆"}, -- 等于1兆，显示两位小数
--     {12345678901234, "12.34兆"}, -- 大于1兆，显示两位小数
--     {100000000000000, "100兆"}, -- 大于100兆，不显示小数
--     {1e16 - 1, "9999兆"}, -- 兆单位最大值
--     {1e16, "1.00京"}, -- 等于1京，显示两位小数
--     {1.234e17, "12.34京"}, -- 大于1京，显示两位小数
--     {1e18, "100京"}, -- 大于100京，不显示小数
--     {1e20 - 1, "9999京"} -- 京单位最大值
-- }

-- for _, case in ipairs(test_cases) do
--     local result = format_number(case[1])
--     print(string.format("输入：%-18s 预期：%-10s 实际：%s", case[1], case[2], result), result == case[2] and "✓" or "✗")
-- end

function Utils:formatGoldNum2String(n)
    if n == nil then
        return "-"
    end
    return format_number(n)
end

function Utils:setImgUrl(widget, url, Contain)
    widget = XH.UIRemoteImage.create(widget)
    if Contain then
        local img = widget.__uiRemoteImage
        img:ignoreContentAdaptWithSize(true)
        img:setCallBack(function()
            self:setFillMode(img, widget:getContentSize(), "Contain")
        end)
    end
    widget:setUrl(url)
end

function Utils:setHead(widget, info)
    if not widget then
        return
    end
    local panelHeadImg = widget:getChildByName("_panelHeadImg")
    local panelHeadFrame = widget:getChildByName("_panelHeadFrame")
    local panelHeadFrameAni = widget:getChildByName("_panelHeadFrameAni")
    local panelHeadFrameRemote = widget:getChildByName("_panelHeadFrameRemote")
    if panelHeadFrame then
        panelHeadFrame:setVisible(false)
    end
    if panelHeadFrameAni then
        panelHeadFrameAni:setVisible(false)
    end
    if panelHeadFrameRemote then
        panelHeadFrameRemote:setVisible(false)
    end
    if not info then
        if panelHeadFrame then
            panelHeadFrame:setVisible(true)
        end
        return
    end
    if panelHeadImg and info.headUrl then
        Utils:setImgUrl(panelHeadImg, info.headUrl)
    end
    if info.framePropid and panelHeadFrameAni then
        if ShowPropFunction.createHeadFrameAni(panelHeadFrameAni, info.framePropid, 1) then
            panelHeadFrameAni:setVisible(true)
            return
        end
    end
    if info.frameUrl and panelHeadFrameRemote then
        panelHeadFrameRemote:setVisible(true)
        Utils:setImgUrl(panelHeadFrameRemote, info.frameUrl, true)
    end
end

function Utils:setFillMode(widget, bgSize, mode)
    if mode == "Contain" then -- 保持其宽高比并在容器内完整显示
        local imgSize = widget:getContentSize()
        local scaleX = bgSize.width / imgSize.width
        local scaleY = bgSize.height / imgSize.height
        widget:setScale(scaleX > scaleY and scaleY or scaleX)
    end
end

function Utils:doLayoutHoriz(children, width, gap)
    if children == nil or #children == 0 then
        return
    end
    local sizeTotal = 0
    for _, v in ipairs(children) do
        if v and v:isVisible() then
            sizeTotal = sizeTotal + v:getContentSize().width
        end
    end
    sizeTotal = sizeTotal + (gap or 0) * (#children - 1)
    local startX = (width - sizeTotal) / 2
    for _, v in ipairs(children) do
        if v and v:isVisible() then
            local itemWidth = v:getContentSize().width
            local anX = v:getAnchorPoint().x
            v:setPosition(startX + anX * itemWidth, v:getPositionY())
            startX = startX + itemWidth + (gap or 0)
        end
    end
    return sizeTotal
end
function Utils:doLayoutVertical(children, height, gap)
    if children == nil or #children == 0 then
        return
    end
    local sizeTotal = 0
    for _, v in ipairs(children) do
        if v:isVisible() then
            sizeTotal = sizeTotal + v:getContentSize().height
        end
    end
    sizeTotal = sizeTotal + (gap or 0) * (#children - 1)
    local startY = (height - sizeTotal) / 2
    for _, v in ipairs(children) do
        if v:isVisible() then
            local itemHeight = v:getContentSize().height
            local anY = v:getAnchorPoint().y
            v:setPosition(v:getPositionX(), startY + anY * itemHeight)
            startY = startY + itemHeight + (gap or 0)
        end
    end
    return sizeTotal
end

function Utils:utf8_chars(str)
    local t = {}
    local pos = 1
    while pos <= #str do
        local c = str:byte(pos)
        local charLen
        if c < 0x80 then
            charLen = 1
        elseif c < 0xE0 then
            charLen = 2
        elseif c < 0xF0 then
            charLen = 3
        elseif c < 0xF8 then
            charLen = 4
        else
            charLen = 1 -- 未知编码
        end
        table.insert(t, str:sub(pos, pos + charLen - 1))
        pos = pos + charLen
    end
    return t
end

function Utils:doLayout(node)
    if not node then
        return
    end
    ccui.Helper:doLayout(node)
    for i, v in ipairs(node:getChildren()) do
        self:doLayout(v)
    end
end

function Utils:addSpine(node, path, fileName, aniName, scale, loop, delay, completFunc)
    if node and delay and delay > 0 then
        node:runAction(cc.Sequence:create(cc.DelayTime:create(delay), cc.CallFunc:create(function()
            Utils:addSpine(node, path, fileName, aniName, scale, loop)
        end)))
        return
    end
    path = string.sub(path, 1, 1) == "#" and string.sub(path, 2, #path) .. "/" or LocalConfig.IMG_PATH.SPINE_ROOT .. path .. "/"
    local armature = display.playDargonBonesSpine({
        path = path,
        tex = fileName .. ".json",
        ske = fileName .. ".atlas",
        armatureName = aniName,
        loop = loop,
        scale = scale or 1
    })
    if armature and node then
        node:addChild(armature)
        if completFunc then
            armature:registerSpineEventHandler(function(event)
                if event.type == 'complete' then
                    completFunc(armature)
                end
            end, sp.EventType.ANIMATION_COMPLETE)
        end
    end
    return armature
end

function Utils:findIdx(t, func)
    for i, v in ipairs(t or {}) do
        if func(v) then
            return i
        end
    end
    return -1
end

function Utils:find(t, func)
    for i, v in ipairs(t or {}) do
        if func(v) then
            return v
        end
    end
    return nil
end

function Utils:filter(t, func)
    local result = {}
    for i, v in ipairs(t or {}) do
        if func(v) then
            table.insert(result, v)
        end
    end
    return result
end

function Utils:getUDJsonData(key)
    local info = cc.UserDefault:getInstance():getStringForKey(key, "{}")
    return json.decode(info)
end

function Utils:getAwardDesc(name, propid, cnt, time)
    if cnt == 0 and time > 0 then
        return math.floor(time / 3600) .. "小时"
    elseif cnt > 0 then
        return (name or "") .. "x" .. cnt
    else
        return name
    end
end

local KW_ZJB_PKG_ID = 2
function Utils:getBasePropInfo(propid)
    if propid == "diamond" or propid == 101034 then
        return {propsname = "钻石", imageName = LocalConfig.IMG_PATH.MAIN .. "Img_ZS.png"}
    elseif propid == "gold" or propid == 101473 then
        return {propsname = "金币", imageName = LocalConfig.IMG_PATH.MAIN .. "Img_JB.png"}
    elseif propid == 101032 then
        return {propsname = "房卡", imageName = LocalConfig.IMG_PATH.MAIN .. "Img_FK.png"}
    end

    local baseInfo = XH.Bridge:getModule("BagSysNew"):getBagData():getPropInfo(propid)
    if not baseInfo then
        return
    end
    if baseInfo and baseInfo.imageUrl then
        return baseInfo
    end
    for _, pinfo in pairs(baseInfo.props_img or {}) do
        if pinfo.package_id and tonumber(pinfo.package_id) == KW_ZJB_PKG_ID then
            local imgArray = pinfo.img
            if imgArray then
                for idx = 1, #imgArray do
                    baseInfo.imageUrl = imgArray[idx].img_url or ""
                end
            end
            break
        end
    end
    return baseInfo
end

function Utils:updatePropImg(layout, propid)
    local baseInfo = Utils:getBasePropInfo(propid)
    if baseInfo.imageUrl and baseInfo.imageUrl ~= "" then
        Utils:setImgUrl(layout, baseInfo.imageUrl, true)
    elseif baseInfo.imageName then
        local iv = layout.iv
        if not iv then
            iv = ccui.ImageView:create()
            local size = layout:getContentSize()
            iv:setContentSize(size.width, size.height)
            iv:setPosition(size.width / 2, size.height / 2)
            layout:addChild(iv)
            layout.iv = iv
        end
        iv:loadTexture(baseInfo.imageName, ccui.TextureResType.plistType)
        Utils:setFillMode(iv, layout:getContentSize(), "Contain")
    end
end

function Utils:scaleBgFull(node)
    if display.width / display.height > (2340 / 1080) then
        node:setScaleX(display.width / 2340)
    end
end
function Utils:delayTouchEnable(button, time)
    button:setTouchEnabled(false)
    button:runAction(cc.Sequence:create(cc.DelayTime:create(time or 0.5), cc.CallFunc:create(function()
        button:setTouchEnabled(true)
    end)))
end

function Utils:showGetAward(props, closeFunc, isShowUseBtn, useFunc)
    local awardInfo = {prize_names = {}, prize_pic = {}, propid = {}, prize_count = {}, image_urls = {}}
    for i, e in pairs(props or {}) do
        local propInfo = Utils:getBasePropInfo(e.propId)
        local cnt = e.propCnt or e.award or 0
        awardInfo.prize_names[i] = e.propName or Utils:getAwardDesc(propInfo.propsname or "", e.propId, 0, e.expire or 0)
        if propInfo.imageUrl then
            awardInfo.image_urls[i] = propInfo.imageUrl
        end
        if e.imageName then
            awardInfo.prize_pic[i] = e.imageName
        elseif propInfo.imageName then
            awardInfo.prize_pic[i] = propInfo.imageName
        end
        awardInfo.propid[i] = e.propId
        awardInfo.prize_count[i] = cnt
    end
    awardInfo.text = " "
    awardInfo.showUseBtn = isShowUseBtn
    awardInfo.useFunc = useFunc
    if #awardInfo.prize_names == 0 then
        return
    end
    XH.Bridge.viewManager:openView("BackActivityAwardView", nil, {closeFunc = closeFunc}, awardInfo)
end
return Utils
