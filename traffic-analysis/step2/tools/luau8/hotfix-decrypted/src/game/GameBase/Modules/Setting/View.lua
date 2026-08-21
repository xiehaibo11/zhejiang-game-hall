local SettingView = CF.gameClass("SettingView", CF.ViewBase)

function SettingView:getProxyEvents()
    local events = {
        {module = CF.settingData, eventKeyName = "EVENT_SETTING_INIT", callBack = "initUI"},
        {module = XH.lobby:getModule("XiaGuang"), eventKeyName = "EVENT_XIAGUANG_EXCHANGE_SUCCESS", callBack = "close"}
    }
    return events
end

function SettingView:initUI()
end

function SettingView:checkXGProp(name)
    local style = CF.StringTool.getNumberSuffixByString(name)
    local info
    local mainKey
    for key, value in pairs(CF.settingData.tagInfo) do
        if string.find(name, value.nameKey) and value.index == style then
            info = value
            mainKey = key
            break
        end
    end
    if info then
        local propID = info.propID
        local leftTime = XH.lobby:getModule("SkinBundle"):getPropState(propID).overdueTime
        if propID > 0 and leftTime <= os.time() then
            local page
            if mainKey == "TABLE_STYLE" then
                page = "设置界面-桌布"
            elseif mainKey == "BACK_TYPE" then
                page = "设置界面-牌背"
            end
            if page then
                XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.zjq25061201, {page = page, game_id = XH.areaData:getAreaID() .. "_" .. CF.roomData:getGameID(), room_mode = CF.roomData:getRoomMode2()})
            end
            XH.viewManager:openView("XiaGuangView", CF.ZORDER.DIALOG, {scene = page, gameId = XH.areaData:getAreaID() .. "_" .. CF.roomData:getGameID(), roomMode = CF.roomData:getRoomMode2()})
            return true
        end
    end
    return false
end

function SettingView:showLeftTime(node, showImg, deadTime)
    if deadTime - os.time() < 0 then
        node:setVisible(false)
        if showImg then
            showImg:setGrayedAndEnabled(true)
        end
        return
    end
    function timeFormat(deadTime)
        local time = deadTime - os.time()
        if time < 0 then
            return ""
        end
        local day = math.floor(time / 60 / 60 / 24)
        local hour = math.floor(time / 60 / 60) % 24
        local min = math.floor(time / 60) % 60
        local sec = time % 60
        local str = string.format("%d天", day)
        if day == 0 then
            str = string.format("%02d:%02d:%02d", hour, min, sec)
        end
        return str
    end
    node:setString("" .. timeFormat(deadTime))
    node:stopAllActions()
    local callback =
    cc.CallFunc:create(
        function()
            node:setString("" .. timeFormat(deadTime))
            if deadTime - os.time() <= 0 then
                node:setVisible(false)
            end
        end
    )
    local squence = cc.RepeatForever:create(cc.Sequence:create(cc.DelayTime:create(1), callback))
    node:runAction(squence)
end

function SettingView:setDetailTagActiveTime(tagKey)
    local tagInfo = CF.settingData.tagInfo
    local nodeKey = tagInfo[tagKey] and tagInfo[tagKey].nodeKey or ""
    local index = tagInfo[tagKey] and tagInfo[tagKey].index or 0
    local node = self[nodeKey .. index]
    if not node then
        return
    end
    local yPos = tagInfo[tagKey] and tagInfo[tagKey].posY or 0
    local fontSize = tagInfo[tagKey] and tagInfo[tagKey].fontSize or 32
    local propID = tagInfo[tagKey] and tagInfo[tagKey].propID or 0
    local leftTime = XH.lobby:getModule("SkinBundle"):getPropState(propID).overdueTime
    local showImg = node
    if propID > 0 and leftTime > os.time() then
        if XH.lobby:getModule("SkinBundle"):isPropIDInSkinBundle(propID) then
            local textTime = node:getChildByName("_KW_TEXT_TIME")
            if not textTime then
                local text = ccui.Text:create()
                text:setName("_KW_TEXT_TIME")
                text:setFontName("res/cocosStudio/Common/Font/fangzhengcuyuan.TTF")
                text:setFontSize(fontSize)
                text:setColor(cc.c3b(0xff, 0xff, 0xff))
                text:enableOutline(cc.c3b(0x41, 0x41, 0x41), 2)
                text:setAnchorPoint(0.5, 0.5)
                text:setPosition(node:getContentSize().width / 2, yPos)
                node:addChild(text)
                textTime = text
            end
            if textTime then
                self:showLeftTime(textTime, showImg, leftTime)
            end
        end
    else
        if showImg then
            showImg:setGrayedAndEnabled(true)
        end
    end
end

return SettingView�