---@class TeaHouseMemberPopMenu : View
local TeaHouseMemberPopMenu = class("TeaHouseMemberPopMenu", TeaHouse.View)
local SxVipConfig = require('lobby.Modules.Sxvip.Config')

local KW_BTN_INTERVAL = 96
local KW_BTN_HEIGHT = 86
local KW_EXTRA_HEIGHT = 40

TeaHouseMemberPopMenu.RAW_RES_BINDING_CSB = {
    csb = "res/cocosStudio/TeaHouse/CSB/TeaHouseMemberItem/TeaHouseMemberPopMenu.csb",
    binding = {
        ["_KW_IMG_ROOT"] = { tag = "_KW_IMG_ROOT", name = "_imgRoot", class = "img" },
        ["_KW_BTN_SET_REMARK"] = { tag = "_KW_BTN_SET_REMARK", name = "_btnSetRemark", class = "btn", events = "onSetRemarkClicked" },
        ["_KW_BTN_POWER"] = { tag = "_KW_BTN_POWER", name = "_btnPower", class = "btn", events = "onPowerClicked" },
        ["_KW_BTN_ADD_ADMIN"] = { tag = "_KW_BTN_ADD_ADMIN", name = "_btnAddAdmin", class = "btn", events = "onAddAdminClicked" },
        ["_KW_BTN_DEL_ADMIN"] = { tag = "_KW_BTN_DEL_ADMIN", name = "_btnDelAdmin", class = "btn", events = "onDelAdminClicked" },
        ["_KW_BTN_ADD_BLACK"] = { tag = "_KW_BTN_ADD_BLACK", name = "_btnAddBlack", class = "btn", events = "onAddBlackClicked" },
        ["_KW_BTN_DEL_BLACK"] = { tag = "_KW_BTN_DEL_BLACK", name = "_btnDelBalck", class = "btn", events = "onDelBlackClicked" },
        ["_KW_BTN_KICK"] = { tag = "_KW_BTN_KICK", name = "_btnKick", class = "btn", events = "onKickClicked" },
        ["_KW_BTN_DATA"] = { tag = "_KW_BTN_DATA", name = "_btnFriendData", class = "btn", events = "onFriendDataClicked" },
        ["_KW_BTN_TRANSFER_OWNER"] = { tag = "_KW_BTN_TRANSFER_OWNER", name = "_btnTransferOwner", class = "btn", events = "onTranferOwnerClicked" },
    }
}

function TeaHouseMemberPopMenu:ctor(info, position)
    TeaHouseMemberPopMenu.super.ctor(self)

    self._info = info

    if not self._imgRoot then
        return
    end
    self:setTouchEnabled(true)
    self:addTouchEventListener(function(send, eventType)
        if eventType ~= ccui.TouchEventType.ended then
            return
        end
        self:close()
    end)
    position = self:convertToNodeSpace(position)
    self._imgRoot:setPosition(position)

    local teahouseData = TeaHouse.manager.teahouseData
    local isModifyRemark = teahouseData:checkSelfPower("ModifyRemark")
    local isModifyAdmin = teahouseData:checkSelfPower("ModifyAdmin")
    local isTransferOwner = teahouseData:checkSelfPower("TransferOwner")
    isModifyAdmin = self:isModifyAdminReModel(isModifyAdmin)
    local isModifyBlack = false
    if teahouseData:checkSelfPower("ModifyBlack") and teahouseData:checkSelfAdminRight(teahouseData.ADMIN_RIGHT.BLACK) then
        local SwitchConfig = TeaHouse.manager.configManager.SwitchConfig
        if SwitchConfig and SwitchConfig.hasBlack == 0 then
            isModifyBlack = false
        else
            isModifyBlack = true
        end
    end
    local isKickMember = false
    if teahouseData:checkSelfPower("KickMember") and teahouseData:checkSelfAdminRight(teahouseData.ADMIN_RIGHT.KICK) then
        isKickMember = true
    end
    local btnCount = 0
    if isModifyRemark then
        btnCount = btnCount + 1
        if self._btnSetRemark then
            self._btnSetRemark:setVisible(true)
        end
    else
        if self._btnSetRemark then
            self._btnSetRemark:setVisible(false)
        end
    end
    if isModifyAdmin then
        btnCount = btnCount + 1
        local SwitchConfig = TeaHouse.manager.configManager.SwitchConfig
        if SwitchConfig and SwitchConfig.ManagementPowers == 1 then
            if self._btnPower then
                self._btnPower:setVisible(true)
            end
            if self._btnAddAdmin then
                self._btnAddAdmin:setVisible(false)
            end
            if self._btnDelAdmin then
                self._btnDelAdmin:setVisible(false)
            end
        else
            if self._btnPower then
                self._btnPower:setVisible(false)
            end
            if self._btnAddAdmin then
                self._btnAddAdmin:setVisible(not teahouseData:isPlayerAdmin(info))
            end
            if self._btnDelAdmin then
                self._btnDelAdmin:setVisible(teahouseData:isPlayerAdmin(info))
            end
        end
    else
        if self._btnPower then
            self._btnPower:setVisible(false)
        end
        if self._btnAddAdmin then
            self._btnAddAdmin:setVisible(false)
        end
        if self._btnDelAdmin then
            self._btnDelAdmin:setVisible(false)
        end
    end
    if isTransferOwner then
        btnCount = btnCount + 1
        if self._btnTransferOwner then
            self._btnTransferOwner:setVisible(true)
        end
    else
        if self._btnTransferOwner then
            self._btnTransferOwner:setVisible(false)
        end
    end
    if isModifyBlack then
        btnCount = btnCount + 1
        if self._btnAddBlack then
            self._btnAddBlack:setVisible(not teahouseData:isPlayerBlack(info))
        end
        if self._btnDelBalck then
            self._btnDelBalck:setVisible(teahouseData:isPlayerBlack(info))
        end
    else
        if self._btnAddBlack then
            self._btnAddBlack:setVisible(false)
        end
        if self._btnDelBalck then
            self._btnDelBalck:setVisible(false)
        end
    end
    if isKickMember then
        btnCount = btnCount + 1
        if self._btnKick then
            self._btnKick:setVisible(true)
        end
    else
        if self._btnKick then
            self._btnKick:setVisible(false)
        end
    end
    if self._btnFriendData then
        self._btnFriendData:setVisible(true)
        btnCount = btnCount + 1
    end
    if btnCount <= 0 then
        return
    end
    local rootSize = self._imgRoot:getContentSize()
    local rootHeight = KW_BTN_INTERVAL * (btnCount - 1) + KW_BTN_HEIGHT + KW_EXTRA_HEIGHT
    self._imgRoot:setContentSize(cc.size(rootSize.width, rootHeight))
    local imgRootRect = self._imgRoot:getBoundingBox()
    local viewSize = self:getContentSize()
    if imgRootRect.y > viewSize.height then
        self._imgRoot:setPositionY(self._imgRoot:getPositionY() + viewSize.height - imgRootRect.y)
    end
    if imgRootRect.y < 0 then
        self._imgRoot:setPositionY(self._imgRoot:getPositionY() - imgRootRect.y)
    end
    local offsetY = (rootHeight - (btnCount - 1) * KW_BTN_INTERVAL) * 0.5
    if self._btnFriendData then
        self._btnFriendData:setPositionY(offsetY)
        offsetY = offsetY + KW_BTN_INTERVAL
    end
    if isKickMember then
        if self._btnKick then
            self._btnKick:setPositionY(offsetY)
        end
        offsetY = offsetY + KW_BTN_INTERVAL
    end
    if isModifyBlack then
        if self._btnAddBlack then
            self._btnAddBlack:setPositionY(offsetY)
        end
        if self._btnDelBalck then
            self._btnDelBalck:setPositionY(offsetY)
        end
        offsetY = offsetY + KW_BTN_INTERVAL
    end
    if isTransferOwner then
        if self._btnTransferOwner then
            self._btnTransferOwner:setPositionY(offsetY)
        end
        offsetY = offsetY + KW_BTN_INTERVAL
    end
    if isModifyAdmin then
        if self._btnPower then
            self._btnPower:setPositionY(offsetY)
        end
        if self._btnAddAdmin then
            self._btnAddAdmin:setPositionY(offsetY)
        end
        if self._btnDelAdmin then
            self._btnDelAdmin:setPositionY(offsetY)
        end
        offsetY = offsetY + KW_BTN_INTERVAL
    end
    if isModifyRemark then
        if self._btnSetRemark then
            self._btnSetRemark:setPositionY(offsetY)
        end
        offsetY = offsetY + KW_BTN_INTERVAL
    end

end

function TeaHouseMemberPopMenu:onSetRemarkClicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    TeaHouse.manager.viewManager:openView("TeaHouseMemberItem.TeaHouseMemberRemarkMenu", 0, self._info)
    self:close()
end

function TeaHouseMemberPopMenu:onPowerClicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    TeaHouse.manager.viewManager:openView("TeaHouseMemberItem.TeaHouseMemberPowerMenu", 0, self._info)
    self:close()
    TeaHouse.throwDataManager:throwDataClick(XH.ThrowDataDefine.Tea_17)
end

function TeaHouseMemberPopMenu:onAddAdminClicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    TeaHouse.manager.teahouseMember:setAdminMember(self._info.areaid, self._info.numid, true)
    self:close()
end

function TeaHouseMemberPopMenu:onDelAdminClicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    TeaHouse.manager.teahouseMember:setAdminMember(self._info.areaid, self._info.numid, false)
    self:close()
end

function TeaHouseMemberPopMenu:onAddBlackClicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    TeaHouse.manager.teahouseMember:setBlackMember(self._info.areaid, self._info.numid, true)
    self:close()
end

function TeaHouseMemberPopMenu:onDelBlackClicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    TeaHouse.manager.teahouseMember:setBlackMember(self._info.areaid, self._info.numid, false)
    self:close()
end

function TeaHouseMemberPopMenu:onKickClicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    
    TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK_CANEL,
    funcOK = function()
        TeaHouse.manager.teahouseMember:kickMember(self._info.areaid, self._info.numid, self._info.tableid)
        self:close()
    end }, "IS_KICKOUT_PLAYER", self._info.nickName)

    TeaHouse.throwDataManager:throwDataClick(XH.ThrowDataDefine.Tea_18)
end

function TeaHouseMemberPopMenu:onFriendDataClicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    
    XH.viewManager:openView("SxvipView", nil, {defalutMenu = SxVipConfig.MENU_DEFINE.FRIEND_INFO})
    self:close()
end

function TeaHouseMemberPopMenu:onTranferOwnerClicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK_CANEL,
    funcOK = function()
        TeaHouse.manager.teahouseMember:transferOwner(self._info.areaid, self._info.numid)
        self:close()
    end }, "IS_TRANSFER_OWNER", self._info.nickName)
end

function TeaHouseMemberPopMenu:isModifyAdminReModel(isModifyAdmin)
    return isModifyAdmin
end

return TeaHouseMemberPopMenu