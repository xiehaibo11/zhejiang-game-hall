---@class TeaHouseMemberMutexItem : View
local TeaHouseMemberMutexItem = class("TeaHouseMemberMutexItem", TeaHouse.View)

local KW_PLAYER_MAX_COUNT = 4

TeaHouseMemberMutexItem.RAW_RES_BINDING_CSB = {
    csb = "res/cocosStudio/TeaHouse/CSB/TeaHouseMemberItem/TeaHouseMemberMutexItem.csb",
    binding = {
        ["_KW_IMG_MUTEX_ITEM"] = { tag = "_KW_IMG_MUTEX_ITEM", name = "_imgMutexItem", class = "img" },
        ["_KW_PANEL_HEAD_LIST"] = { tag = "_KW_PANEL_HEAD_LIST", name = "_panelHeadList", class = "panel" },
        ["_KW_BTN_DELETE"] = { tag = "_KW_BTN_DELETE", name = "_btnDelete", class = "btn", events = "onBtnEventDelete" },
        ["_KW_IMG_ARROW"] = { tag = "_KW_IMG_ARROW", name = "_imgArrow", class = "img" },
    }
}

function TeaHouseMemberMutexItem:ctor()
    TeaHouseMemberMutexItem.super.ctor(self)

    self._info = nil

    self:initUI()
end

function TeaHouseMemberMutexItem:initUI()
    if self._imgMutexItem then
        self._imgMutexItem:removeFromParent()
        self:addChild(self._imgMutexItem)
    end

    if self._btnDelete then
        self._btnDelete:setSwallowTouches(false)
    end
end

function TeaHouseMemberMutexItem:getSize()
    if self._imgMutexItem ~= nil then
        return self._imgMutexItem:getContentSize()
    end
    return cc.size(0, 0)
end

function TeaHouseMemberMutexItem:updateInfo(info)
    self._info = info

    local playerIDs = self._info.anNumId
    self:updateHeadList(playerIDs)
end

function TeaHouseMemberMutexItem:updateHeadList(playerIDs)
    if not self._panelHeadList or not playerIDs or #playerIDs <= 0 then
        return 
    end
    self._panelHeadList:removeAllChildren()
    local headListWidthTotal = self._panelHeadList:getContentSize().width
    local singleGap = headListWidthTotal/(KW_PLAYER_MAX_COUNT - 1)
    local arrowStartPos = singleGap/2
    local playerIndex = 1
    for idIndex, playerID in ipairs(playerIDs) do
        local teahouseData = TeaHouse.manager.teahouseData
        local playerData = teahouseData:getMemberInfo(TeaHouse.BridgeData.getAreaID(), playerID)
        if playerData then
            local headNode = TeaHouse.manager.viewManager:createView("TeaHouseMemberItem.TeaHouseMemberMutexHeadNode")
            headNode:setPositionX(singleGap*(playerIndex - 1))
            headNode:updateInfo(playerData)
            self._panelHeadList:addChild(headNode)
    
            if idIndex ~= #playerIDs then
                if self._imgArrow then
                    local tempArrow = self._imgArrow:clone()
                    tempArrow:setPosition((arrowStartPos + (playerIndex - 1)*singleGap), 0)
                    tempArrow:setVisible(true)
                    self._panelHeadList:addChild(tempArrow)
                end
            end 
            playerIndex = playerIndex + 1
        end
    end
end

function TeaHouseMemberMutexItem:onBtnEventDelete(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    TeaHouse.manager.teahouseMember:reqDelForbidPlayInSameTable(self._info.ruleId)
    TeaHouse.throwDataManager:throwDataClick(XH.ThrowDataDefine.Tea_25)
end

return TeaHouseMemberMutexItem