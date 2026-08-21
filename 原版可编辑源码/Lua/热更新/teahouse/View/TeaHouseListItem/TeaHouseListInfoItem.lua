---@class TeaHouseListInfoItem : View
local TeaHouseListInfoItem = class("TeaHouseListInfoItem", TeaHouse.View)

local KW_MAX_NUM_COUNT = 6
local KW_ICON_DEFAULT_PNG = "tea_house_list_head.png"
local KW_ICON_DEFAULT_PLIST = "res/cocosStudio/TeaHouse/Image/tea_house_list_view.plist"
local KW_MAX_NAME_WIDTH = 310
local KW_MAX_NAME_FONT_SIZE = 36
local KW_MIN_NAME_FONT_SIZE = 26

TeaHouseListInfoItem.RAW_RES_BINDING_CSB = {
    csb = "res/cocosStudio/TeaHouse/CSB/TeaHouseListItem/TeaHouseListInfoItem.csb",
    binding = {
        ["_KW_PANEL_ROOT"] = { tag = "_KW_PANEL_ROOT", name = "_panelRoot", class = "panel" },
        ["_KW_TEXT_NAME"] = { tag = "_KW_TEXT_NAME", name = "_textName", class = "text" },
        ["_KW_PANEL_ICON"] = { tag = "_KW_PANEL_ICON", name = "_panelIcon", class = "panel" },
        ["_KW_BTN_SHARE"] = { tag = "_KW_BTN_SHARE", name = "_btnShare", class = "btn", events = "onShareClicked" },
        ["_KW_BTN_SETTING"] = { tag = "_KW_BTN_SETTING", name = "_btnSetting", class = "btn", events = "onSettingClicked" },
        ["_KW_BTN_RELAUNCH"] = { tag = "_KW_BTN_RELAUNCH", name = "_btnRelaunch", class = "btn", events = "onRelaunchClicked" },
        ["_KW_BTN_JOIN"] = { tag = "_KW_BTN_JOIN", name = "_btnJoin", class = "btn", events = "onJoinClicked" },
        ["_KW_BTN_OWNER_JOIN"] = { tag = "_KW_BTN_OWNER_JOIN", name = "_btnOwnerJoin", class = "btn", events = "onJoinClicked" },
        ["_KW_TEXT_ONLINE_NUM"] = { tag = "_KW_TEXT_ONLINE_NUM", name = "_textOnlineNum", class = "text" },
        ["_KW_TEXT_CLOSE_TAG"] = { tag = "_KW_TEXT_CLOSE_TAG", name = "_textCloseTag", class = "text" },
        ["_KW_TEXT_CLOSE_TIP"] = { tag = "_KW_TEXT_CLOSE_TIP", name = "_textCloseTip", class = "text" },
        ["_KW_BTN_QUIT"] = { tag = "_KW_BTN_QUIT", name = "_btnQuit", class = "btn", events = "onQuitClicked" },
    }
}

TeaHouse.SysTool.mergeCsbBinding(TeaHouseListInfoItem.RAW_RES_BINDING_CSB, {
    preKey = "_KW_TEXT_NUM_", startNum = 1, endNum = KW_MAX_NUM_COUNT, preName = "_textNum", class = "text"
})

TeaHouse.SysTool.mergeCsbBinding(REMODEL_RAW_RES_BINDING_CSB, {
    preKey = "_KW_TEXT_NUM_", startNum = 1, endNum = KW_MAX_NUM_COUNT, preName = "_textNum", class = "text"
})

function TeaHouseListInfoItem:ctor(info)
    TeaHouseListInfoItem.super.ctor(self)

    self._info = info

    if self._panelRoot then
        self._panelRoot:removeFromParent()
        self:addChild(self._panelRoot)
    end

    if self._textName then
        if info.szData and #info.szData > 0 then
            self._textName:setString(string.format("%s的比赛场(%s)", TeaHouse.StringTool.getTrimName(info.acOwnerNick), info.szData))
        else
            self._textName:setString(string.format("%s的比赛场", TeaHouse.StringTool.getTrimName(info.acOwnerNick)))
        end
        self._textName:setFontSize(KW_MAX_NAME_FONT_SIZE)
        TeaHouse.UITool.adaptTextToWidth(self._textName, KW_MAX_NAME_WIDTH, KW_MAX_NAME_FONT_SIZE, KW_MIN_NAME_FONT_SIZE)
    end
    local password = string.format("%06d", info.nPasswd)
    for i = 1, KW_MAX_NUM_COUNT do
        local textNum = self["_textNum" .. i]
        if textNum then
            textNum:setString(string.sub(password, i, i))
        end
    end
    if self._panelIcon then
        if not self._remoteImage then
            local size = self._panelIcon:getContentSize()
            self._remoteImage = TeaHouse.RemoteImage.new()
            :setPosition(size.width / 2, size.height / 2)
            :ignoreContentAdaptWithSize(false)
            :setContentSize(size.width - 5, size.height - 5)
            :addTo(self._panelIcon)
            cc.SpriteFrameCache:getInstance():addSpriteFrames(KW_ICON_DEFAULT_PLIST)
            self._remoteImage:loadTexture(KW_ICON_DEFAULT_PNG, ccui.TextureResType.plistType)
        end
        local SwitchConfig = TeaHouse.manager.configManager.SwitchConfig
        local url = SwitchConfig.ShowOwnerHead ~= 0 and info.szUrl or ""
        TeaHouse.SysTool.loadRemoteImage(self._remoteImage, url, KW_ICON_DEFAULT_PNG, KW_ICON_DEFAULT_PLIST)
    end
    if self._btnShare then
        self._btnShare:setVisible(true)
    end

    self:updateInfo()
end

function TeaHouseListInfoItem:getInfo()
    return self._info
end

function TeaHouseListInfoItem:updateInfo()
    local isOwner = self._info.nTeaOwnerNumid == TeaHouse.BridgeData.getNumberID()
    if isOwner then
        TeaHouse.manager.teahouseData:setOwnerTeahousCount()
    end
    if self._textName then
        local teaHouseName = string.format("%s的比赛场", TeaHouse.StringTool.getTrimName(self._info.acOwnerNick))
        if self._info.szData and #self._info.szData > 0 then
            if #self._info.szData <= 4 and tonumber(self._info.szData) ~= nil then
                teaHouseName = teaHouseName .. string.format("(%s)", self._info.szData)
            end
        end
        self._textName:setString(teaHouseName)
        self._textName:setFontSize(KW_MAX_NAME_FONT_SIZE)
        TeaHouse.UITool.adaptTextToWidth(self._textName, KW_MAX_NAME_WIDTH, KW_MAX_NAME_FONT_SIZE, KW_MIN_NAME_FONT_SIZE)
    end
    if self._btnSetting then
        self._btnSetting:setVisible(isOwner)
    end
    if self._btnRelaunch then
        self._btnRelaunch:setVisible(isOwner and self._info.ucState == TeaHouse.TeaHouseProtocol.RespTeaHouseInfo.FLAG.PAUSED)
    end
    if self._btnJoin then
        self._btnJoin:setVisible(not isOwner and self._info.ucState == TeaHouse.TeaHouseProtocol.RespTeaHouseInfo.FLAG.OPEN)
    end
    if self._btnOwnerJoin then
        self._btnOwnerJoin:setVisible(isOwner and self._info.ucState == TeaHouse.TeaHouseProtocol.RespTeaHouseInfo.FLAG.OPEN)
    end
    if self._textOnlineNum then
        self._textOnlineNum:setVisible(not isOwner and self._info.ucState == TeaHouse.TeaHouseProtocol.RespTeaHouseInfo.FLAG.OPEN)
        self._textOnlineNum:setString(string.format("人数：%d/%d", self._info.nOnLineUserCnt, self._info.nUserCnt))
    end
    if self._textCloseTag then
        self._textCloseTag:setVisible(not isOwner and self._info.ucState == TeaHouse.TeaHouseProtocol.RespTeaHouseInfo.FLAG.PAUSED)
    end
    if self._textCloseTip then
        self._textCloseTip:setVisible(not isOwner and self._info.ucState == TeaHouse.TeaHouseProtocol.RespTeaHouseInfo.FLAG.PAUSED)
    end

    -- 新退圈
    if self._btnQuit then
        -- "{"teatype":0,"createtime":1586400606,"askcnt":0,"canquit":0}"
        local acExtraData = json.decode(self._info.acExtraData)
        local lobbyId = XH.areaData:getLobbyID()
        if lobbyId == TeaHouse.LOBBY_ID.LISHUI or lobbyId == TeaHouse.LOBBY_ID.WENZHOU or lobbyId == TeaHouse.LOBBY_ID.SHUKE
            or lobbyId == TeaHouse.LOBBY_ID.RUIAN or lobbyId == TeaHouse.LOBBY_ID.QINGTIAN then
            self._btnQuit:setVisible((acExtraData.canquit == 1) and (not isOwner))
        end
        -- if TeaHouse.BridgeData.isRemodelArea() then
            if not isOwner then
                self._btnQuit:setVisible(true)
            end
        -- end
    end
end

function TeaHouseListInfoItem:getWidth()
    if self._panelRoot ~= nil then
        return self._panelRoot:getContentSize().width
    end
    return 0
end

function TeaHouseListInfoItem:onShareClicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    local title = string.format("%s的比赛场", TeaHouse.StringTool.getTrimName(self._info.acOwnerNick, 12))
    if self._info.szData and #self._info.szData > 0 then
        if #self._info.szData <= 4 and tonumber(self._info.szData) ~= nil then
            title = title .. string.format("(%s)", self._info.szData)
        end
    end
    TeaHouse.SysTool.shareTeaHouse(self._info.nPasswd, title)
    TeaHouse.throwDataManager:throwDataClick(XH.ThrowDataDefine.Tea_2)
end

function TeaHouseListInfoItem:onSettingClicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    self:onReqComplain()
    TeaHouse.manager.teahouseData:setAppID(self._info.nTeaHouseAppid)
    TeaHouse.manager.viewManager:openView("TeaHouseSetupView", 0, {
        nTeaNumber = self._info.nTeaNumber,
        szData = self._info.szData,
        isOwner = (self._info.nTeaOwnerNumid == TeaHouse.BridgeData.getNumberID())
    })
end

function TeaHouseListInfoItem:onRelaunchClicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    TeaHouse.manager.teahouseList:relaunchTeaHouse(self._info.nTeaNumber, self._info.nTeaHouseAppid)
end

function TeaHouseListInfoItem:onJoinClicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    self:onReqComplain()
    TeaHouse.manager.teahouseData:setAppID(self._info.nTeaHouseAppid)

    local isOwner = self._info.nTeaOwnerNumid == TeaHouse.BridgeData.getNumberID()
    TeaHouse.manager.teahouseGeneral:joinTeaHouse(isOwner and self._info.nTeaNumber or 0, self._info.nPasswd)
    
end

function TeaHouseListInfoItem:onQuitClicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    -- TeaHouse.TipTool.showTip({
    --     type = TeaHouse.TipTool.TIP_TYPE.OK_CANEL,
    --     funcOK = function()
    --         TeaHouse.manager.teahouseGeneral:quitTeaHouseByTeaNumber(self._info.nTeaNumber or 0)
    --     end
    -- }, "SURE_APPLY_QUITTEAHOUSE")
    TeaHouse.manager.viewManager:openView("TeaHouseQuitTeaHouseLayer",nil,self._info.nTeaNumber or 0)

end

function TeaHouseListInfoItem:onReqComplain()
    XH.lobby:getModule('Legitimacy'):reqIsUserHideGame(self._info.nTeaOwnerNumid, self._info.nTeaNumber)
end

return TeaHouseListInfoItem