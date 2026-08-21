---@class TeaHouseMemberListItem : View
local TeaHouseMemberListItem = class("TeaHouseMemberListItem", TeaHouse.View)

local KW_ICON_DEFAULT_PNG = "tea_house_member_item_head.png"
local KW_ICON_DEFAULT_PLIST = "res/cocosStudio/TeaHouse/Image/tea_house_member_view.plist"

local KW_MAX_TEXT_WIDTH = 120
local KW_MAX_TEXT_FONT_SIZE = 40
local KW_MIN_TEXT_FONT_SIZE = 30

TeaHouseMemberListItem.PROP_TYPE = {
    NONE = 0,
    DAILY = 1,
    PLAYER = 3,
}

TeaHouseMemberListItem.RAW_RES_BINDING_CSB = {
    csb = "res/cocosStudio/TeaHouse/CSB/TeaHouseMemberItem/TeaHouseInactiveMemberListItem.csb",
    binding = {
        ["_KW_IMG_LIST_ITEM"] = { tag = "_KW_IMG_LIST_ITEM", name = "_imgListItem", class = "img" },
        ["_KW_PANEL_HEAD"] = { tag = "_KW_PANEL_HEAD", name = "_panelHead", class = "panel" },
        ["_KW_IMG_ADMIN_TAG"] = { tag = "_KW_IMG_ADMIN_TAG", name = "_imgAdminTag", class = "img" },
        ["_KW_IMG_BLACK_TAG"] = { tag = "_KW_IMG_BLACK_TAG", name = "_imgBlackTag", class = "img" },
        ["_KW_TEXT_NAME"] = { tag = "_KW_TEXT_NAME", name = "_textName", class = "text" },
        ["_KW_TEXT_INDEX"] = { tag = "_KW_TEXT_INDEX", name = "_textIndex", class = "text" },
        ["_KW_JOIN_TIME"] = { tag = "_KW_JOIN_TIME", name = "_textJoinTime", class = "text" },
        ["_KW_ONLINE_TIME"] = { tag = "_KW_ONLINE_TIME", name = "_textOnlineTime", class = "text" },
        ["_KW_TEXT_TIME_ONLINE"] = { tag = "_KW_TEXT_TIME_ONLINE", name = "_textOnlineTimeDetail", class = "text" },
        ["_KW_TEXT_TIME_GAME"] = { tag = "_KW_TEXT_TIME_GAME", name = "_textFightTime", class = "text" },
        
        
        
        
        ["_KW_BTN_KICK"] = { tag = "_KW_BTN_KICK", name = "_btnKick", class = "btn", events = "onKickClicked" },
        ["_KW_BTN_SELECT"] = { tag = "_KW_BTN_SELECT", name = "_btnSelect", class = "btn", events = "onSelectClicked" },
        ["_KW_BTN_UNSELECT"] = { tag = "_KW_BTN_UNSELECT", name = "_btnUnselect", class = "btn", events = "onUnselectClicked" },
    }
}

function TeaHouseMemberListItem:ctor()
    TeaHouseMemberListItem.super.ctor(self)

    self._info = nil

    self._propType = TeaHouseMemberListItem.PROP_TYPE.NONE

    self:initUI()
end

function TeaHouseMemberListItem:initUI()
    if self._imgListItem then
        self._imgListItem:removeFromParent()
        self:addChild(self._imgListItem)
    end
    if self._tfMaxCost and self._textMaxCost then
        self._tfMaxCost:setFontColor(cc.c3b(255, 255, 255))
        self._tfMaxCost:setInputMode(cc.EDITBOX_INPUT_MODE_NUMERIC)
        self._tfMaxCost:registerScriptEditBoxHandler(function(eventName)
            if eventName == "began" then
                self._textMaxCost:setVisible(false)
            elseif eventName == "changed" then
                self._textMaxCost:setString(self._tfMaxCost:getText())
                self._textMaxCost:setFontSize(KW_MAX_TEXT_FONT_SIZE)
                TeaHouse.UITool.adaptTextToWidth(self._textMaxCost, KW_MAX_TEXT_WIDTH, KW_MAX_TEXT_FONT_SIZE, KW_MIN_TEXT_FONT_SIZE)
            elseif eventName == "ended" or eventName == "return" then
                self._textMaxCost:setVisible(true)
                local teahouseData = TeaHouse.manager.teahouseData
                if teahouseData:isAgentPlayerPayType() then
                    local costString = self._tfMaxCost:getText()
                    costString = string.format("%.2f", tonumber(costString))
                    self._tfMaxCost:setText(costString)
                    self._textMaxCost:setString(costString)
                    self._textMaxCost:setFontSize(KW_MAX_TEXT_FONT_SIZE)
                    TeaHouse.UITool.adaptTextToWidth(self._textMaxCost, KW_MAX_TEXT_WIDTH, KW_MAX_TEXT_FONT_SIZE, KW_MIN_TEXT_FONT_SIZE)
                end
            end
        end)
    end
    if self._btnModify then
        self._btnModify:setSwallowTouches(false)
    end
end

function TeaHouseMemberListItem:getSize()
    if self._imgListItem ~= nil then
        return self._imgListItem:getContentSize()
    end
    return cc.size(0, 0)
end

function TeaHouseMemberListItem:updateInfo(info)
    self._info = info
    if self._panelHead then
        if not self._remoteImage then
            local size = self._panelHead:getContentSize()
            self._remoteImage = TeaHouse.RemoteImage.new()
            :setPosition(size.width / 2, size.height / 2)
            :ignoreContentAdaptWithSize(false)
            :setContentSize(size.width - 5, size.height - 5)
            :addTo(self._panelHead)
            cc.SpriteFrameCache:getInstance():addSpriteFrames(KW_ICON_DEFAULT_PLIST)
            self._remoteImage:loadTexture(KW_ICON_DEFAULT_PNG, ccui.TextureResType.plistType)
        end
        TeaHouse.SysTool.loadRemoteImage(self._remoteImage, info.url, KW_ICON_DEFAULT_PNG, KW_ICON_DEFAULT_PLIST)
    end
    local teahouseData = TeaHouse.manager.teahouseData
    if self._imgAdminTag and not TeaHouse.manager.configManager.SetupConfig.IsCloseAdminIcon  then
        self._imgAdminTag:setVisible(teahouseData:isPlayerAdmin(info))
    end
    if self._imgBlackTag then
        local SwitchConfig = TeaHouse.manager.configManager.SwitchConfig
        if SwitchConfig and SwitchConfig.hasBlack == 0 then
            self._imgBlackTag:setVisible(false)
        else
            self._imgBlackTag:setVisible(teahouseData:isPlayerBlack(info))
        end
    end
    if self._textName then
        self._textName:setString(TeaHouse.StringTool.getTrimName(info.nickName, 12))
    end
    if self._textIndex then
        self._textIndex:setString("序号:" .. info.numid)
    end
    if self._textJoinTime then
        self._textJoinTime:setString("加入时间：" .. os.date("%Y-%m-%d %H:%M", info.nJoinTime))
    end
    if self._textOnlineTime then
        if info.bOffLine then
            local lastTime = info.nLastLeaveTime
            if lastTime < info.nJoinTime then
                lastTime = info.nJoinTime
            end
            local time = os.time() - lastTime
            if time > 0 then
                self._textOnlineTime:setString("离开时间：" .. TeaHouse.StringTool.getTimeDesc(time))
            else
                self._textOnlineTime:setString("离开")
            end
        else
            self._textOnlineTime:setString("在线")
        end
    end
    if self._textOnlineTimeDetail then
        if info.bOffLine then
            local lastTime = info.nLastLeaveTime
            if lastTime < info.nJoinTime then
                lastTime = info.nJoinTime
            end
            local time = os.time() - lastTime
            if time > 0 then
                self._textOnlineTimeDetail:setString(os.date("%Y.%m.%d %H:%M", lastTime))
            else
                self._textOnlineTimeDetail:setString("离开")
            end
        else
            self._textOnlineTimeDetail:setString("在线")
        end
    end
    if self._textFightTime then
        if info.nLastFightTime == 0 then
            self._textFightTime:setString("")
        else
            self._textFightTime:setString(os.date("%Y.%m.%d %H:%M", info.nLastFightTime))
        end
    end

    if self:checkShowBtn() then
        self._btnKick:setVisible(true)
        self._btnSelect:setVisible(true)
        self._btnUnselect:setVisible(true)
    else
        self._btnKick:setVisible(false)
        self._btnSelect:setVisible(false)
        self._btnUnselect:setVisible(false)
    end
    
    self:updateState()
end

function TeaHouseMemberListItem:updateState()
    local teahouseData = TeaHouse.manager.teahouseData
    if self:checkShowBtn() then
        local teaHouseSelectPlayers = TeaHouse.manager.teahouseMember:getTeaHouseSelectPlayers()
        if teaHouseSelectPlayers and teaHouseSelectPlayers[self._info.numid] then
            self._btnSelect:setVisible(false)
            self._btnUnselect:setVisible(true)
        else
            self._btnSelect:setVisible(true)
            self._btnUnselect:setVisible(false)
        end
    end
end

function TeaHouseMemberListItem:checkShowBtn()
    local teahouseData = TeaHouse.manager.teahouseData
    -- 自己不展示 
    -- 自己是副领队，但是没有踢人权限，不展示
    -- 自己是副领队，但是玩家也是副领队，不展示
    if teahouseData:isOwner() then
        return true
    elseif teahouseData:isAdmin() then
        if TeaHouse.BridgeData.getNumberID() == self._info.numid or not (teahouseData:checkSelfPower("ModifyMember") and teahouseData:checkSelfAdminRight(teahouseData.ADMIN_RIGHT.AUDIT)) or (teahouseData:isPlayerAdmin(self._info)) then
            return false
        else
            return true
        end
    else
        return false
    end
end

function TeaHouseMemberListItem:onKickClicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    
    TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK_CANEL,
    funcOK = function()
        if not self or tolua.isnull(self) or not self._info then
            return
        end
        TeaHouse.manager.teahouseMember:kickMember(self._info.areaid, self._info.numid, self._info.tableid,{self._info.numid})
    end }, "IS_KICKOUT_PLAYER", self._info.nickName)
end

function TeaHouseMemberListItem:onSelectClicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    TeaHouse.manager.teahouseMember:setTeaHouseSelectPlayers(self._info.numid,true)
    self._btnUnselect:setVisible(true)
    self._btnSelect:setVisible(false)
end

function TeaHouseMemberListItem:onUnselectClicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    TeaHouse.manager.teahouseMember:setTeaHouseSelectPlayers(self._info.numid,false)
    self._btnUnselect:setVisible(false)
    self._btnSelect:setVisible(true)
end

-- function TeaHouseMemberListItem:getGuideTipNode()
--     return {self._imgMaxCostBg,self._btnManage,}
-- end

-- function TeaHouseMemberListItem:getGuideTipItemNode()
--     return self._imgListItem
-- end

return TeaHouseMemberListItem)