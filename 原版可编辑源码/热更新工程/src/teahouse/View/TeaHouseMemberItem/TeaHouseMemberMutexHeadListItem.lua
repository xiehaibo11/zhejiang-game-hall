---@class TeaHouseMemberMutexHeadListItem : View
local TeaHouseMemberMutexHeadListItem = class("TeaHouseMemberMutexHeadListItem", TeaHouse.View)

TeaHouseMemberMutexHeadListItem.KW_PLAYER_MAX_COUNT = 5

TeaHouseMemberMutexHeadListItem.RAW_RES_BINDING_CSB = {
    csb = "res/cocosStudio/TeaHouse/CSB/TeaHouseMemberItem/TeaHouseMemberMutexHeadListItem.csb",
    binding = {
        ["_KW_PANEL_BG"] = { tag = "_KW_PANEL_BG", name = "_panelBg", class = "panel" },
        ["_KW_PANEL_HEAD_LIST"] = { tag = "_KW_PANEL_HEAD_LIST", name = "_panelHeadList", class = "panel" },
    }
}

function TeaHouseMemberMutexHeadListItem:ctor()
    TeaHouseMemberMutexHeadListItem.super.ctor(self)

    self._playerInfos = {}

    self:initUI()
end

function TeaHouseMemberMutexHeadListItem:initUI()
    if self._panelBg then
        self._panelBg:removeFromParent()
        self:addChild(self._panelBg)
    end
end

function TeaHouseMemberMutexHeadListItem:getSize()
    if self._panelBg ~= nil then
        return self._panelBg:getContentSize()
    end
    return cc.size(0, 0)
end

function TeaHouseMemberMutexHeadListItem:setHeadSelectEventName(eventName)
    
end

function TeaHouseMemberMutexHeadListItem:updateInfo(playerInfos, eventName)
    self._playerInfos = playerInfos
    self._eventName = eventName

    self:updateHeadList()
end

function TeaHouseMemberMutexHeadListItem:updateHeadList()
    if not self._panelHeadList or not self._playerInfos or #self._playerInfos <= 0 then
        return 
    end
    self._panelHeadList:removeAllChildren()
    local headListWidthTotal = self._panelHeadList:getContentSize().width
    local singleGap = headListWidthTotal/TeaHouseMemberMutexHeadListItem.KW_PLAYER_MAX_COUNT
    for playerIndex, playerData in ipairs(self._playerInfos) do
        local headNode = TeaHouse.manager.viewManager:createView("TeaHouseMemberItem.TeaHouseMemberMutexHeadNode")
        headNode:setPositionX(singleGap*(playerIndex - 1/2))
        headNode:updateInfo(playerData, self._eventName)
        headNode:setHeadTouchEnable(true)
        self._panelHeadList:addChild(headNode)
    end
end

return TeaHouseMemberMutexHeadListItem