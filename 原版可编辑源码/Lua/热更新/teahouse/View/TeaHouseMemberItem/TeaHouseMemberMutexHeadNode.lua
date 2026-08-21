---@class TeaHouseMemberMutexHeadNode : View
local TeaHouseMemberMutexHeadNode = class("TeaHouseMemberMutexHeadNode", TeaHouse.View)

local KW_ICON_DEFAULT_PNG = "tea_house_member_item_head.png"
local KW_ICON_DEFAULT_PLIST = "res/cocosStudio/TeaHouse/Image/tea_house_member_view.plist"

TeaHouseMemberMutexHeadNode.RAW_RES_BINDING_CSB = {
    csb = "res/cocosStudio/TeaHouse/CSB/TeaHouseMemberItem/TeaHouseMemberMutexHeadNode.csb",
    binding = {
        ["_KW_TEXT_PLAYER_NAME"] = { tag = "_KW_TEXT_PLAYER_NAME", name = "_textPlayerName", class = "text" },
        ["_KW_TEXT_PLAYER_ID"] = { tag = "_KW_TEXT_PLAYER_ID", name = "_textPlayerId", class = "text" },
        ["_KW_IMG_SELECT"] = { tag = "_KW_IMG_SELECT", name = "_imgSelect", class = "img"},
        ["_KW_IMG_BG_HEAD"] = { tag = "_KW_IMG_BG_HEAD", name = "_imgHeadBg", class = "img", events = "onTouchEventBg" },
        ["_KW_PANEL_HEAD"] = { tag = "_KW_PANEL_HEAD", name = "_panelHead", class = "panel" },
        ["_KW_PANEL_INVITE"] = {tag = "_KW_PANEL_INVITE", name = "_panelInvite", class = "panel"}
    }
}

function TeaHouseMemberMutexHeadNode:ctor()
    TeaHouseMemberMutexHeadNode.super.ctor(self)

    self._info = nil
    self:initUI()
    self:setHeadTouchEnable(false)
end

function TeaHouseMemberMutexHeadNode:initUI()
    self:setSelectState(false)
end

function TeaHouseMemberMutexHeadNode:updateInfo(info, eventName)
    self._info = info
    self._eventName = eventName
    self:setHeadUrl(info.url)
    self:setSelectState(info.bSelected)
    self:setPlayerNameAndId(info.nickName, info.numid)
    self:setPlayerInviteState(info.state)
end

function TeaHouseMemberMutexHeadNode:setSelectState(bSelected)
    if bSelected == nil then
        bSelected = false
    end
    self._imgSelect:setVisible(bSelected)
end

function TeaHouseMemberMutexHeadNode:setPlayerNameAndId(playerName, playerID)
    if self._textPlayerName then
        self._textPlayerName:setString(TeaHouse.StringTool.getTrimName(playerName or ""))
    end
    if self._textPlayerId then
        self._textPlayerId:setString(playerID)
    end
end

function TeaHouseMemberMutexHeadNode:setHeadUrl(url)
    if self._panelHead then
        url = url or ""
        self._panelHead:removeAllChildren()
        local size = self._panelHead:getContentSize()
        local remoteImage = TeaHouse.RemoteImage.new()
        :setPosition(size.width / 2, size.height / 2)
        :ignoreContentAdaptWithSize(false)
        :setContentSize(size.width - 5, size.height - 5)
        :addTo(self._panelHead)
        cc.SpriteFrameCache:getInstance():addSpriteFrames(KW_ICON_DEFAULT_PLIST)
        remoteImage:loadTexture(KW_ICON_DEFAULT_PNG, ccui.TextureResType.plistType)
        TeaHouse.SysTool.loadRemoteImage(remoteImage, url, KW_ICON_DEFAULT_PNG, KW_ICON_DEFAULT_PLIST)
    end
end

function TeaHouseMemberMutexHeadNode:setHeadTouchEnable(enabled)
    self._headTouchEnabled = enabled
    self._imgHeadBg:setTouchEnabled(enabled)

    if enabled then
        self._imgHeadBg:setSwallowTouches(false)
    end
end

function TeaHouseMemberMutexHeadNode:onTouchEventBg(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    if not self._headTouchEnabled then
        return
    end

    if self._imgSelect:isVisible() then
        self:setSelectState(false)
        self:pullEventSelect(false)
    else
        self:setSelectState(true)
        self:pullEventSelect(true)
    end
    
end

function TeaHouseMemberMutexHeadNode:pullEventSelect(bSelected)
    if not self._eventName then
        return 
    end
    local eventDispatcher = cc.Director:getInstance():getEventDispatcher()
    local event = cc.EventCustom:new(self._eventName)
    event.playerID = self._info.numid
    event.bSelected = bSelected
    eventDispatcher:dispatchEvent(event)  
end

function TeaHouseMemberMutexHeadNode:setPlayerInviteState(state)
    if state and state == 1 then
        self._panelInvite:setVisible(true)
        self:setSelectState(false)
    else
        self._panelInvite:setVisible(false)
    end
end

return TeaHouseMemberMutexHeadNode