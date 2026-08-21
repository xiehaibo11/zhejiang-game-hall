-- 选择需要创建的比赛场
local TeaHouseCardModeTransferSecondView = class("TeaHouseCardModeTransferSecondView", TeaHouse.View)

TeaHouseCardModeTransferSecondView.RAW_RES_BINDING_CSB = {
    csb = "res/cocosStudio/TeaHouse/CSB/TeaHouseCardModeTransferSecondView.csb",
    binding = {
        ["_btnClose"] = {tag = "_btnClose", name = "_btnClose", class = "btn", events = "onCloseClicked"},
        ["_btnSure"] = {tag = "_btnSure", name = "_btnSure", class = "btn", events = "onSureClicked"},
        ["_btnKF"] = {tag = "_btnKF", name = "_btnKF", class = "btn", events = "onkeFuClicked"},
        ["_btnRecharge"] = {tag = "_btnRecharge", name = "_btnRecharge", class = "btn", events = "onRechargeClicked"},
        ["_btnHuaKa"] = {tag = "_btnHuaKa", name = "_btnHuaKa", class = "btn", events = "onHuaKaClicked"},
        ["_txtTeaCardNum"] = {tag = "_txtTeaCardNum", name = "_txtTeaCardNum", class = "text"},
        ["_txtMembCardNum"] = {tag = "_txtMembCardNum", name = "_txtMembCardNum", class = "text"},
        ["_txtAwardNum"] = {tag = "_txtAwardNum", name = "_txtAwardNum", class = "text"},
        ["_panelAward"] = {tag = "_panelAward", name = "_panelAward", class = "text"},
        ["_txtTransfer1"] = {tag = "_txtTransfer1", name = "_txtTransfer1", class = "text"},
        ["_txtTransfer2"] = {tag = "_txtTransfer2", name = "_txtTransfer2", class = "text"},
    }
}

function TeaHouseCardModeTransferSecondView:ctor()
    TeaHouseCardModeTransferSecondView.super.ctor(self)
    
    local teahouseSetup = TeaHouse.manager.teahouseSetup
    local listener = self:createListener(teahouseSetup)
    listener:addEventListener(teahouseSetup.EVENT_SETUP_REQ_USEPROPCNT_SUCCESS, handler(self, self.updateCardNum))
    
    local teahouseMain = TeaHouse.manager.teahouseMain
    listener = self:createListener(teahouseMain)
    listener:addEventListener(teahouseMain.EVENT_PROP_COUNT_UPDATE, handler(self, self.updateCardNum))
    listener:addEventListener(teahouseMain.EVENT_PAY_MODE_UPDATE, handler(self, self.onSetupUpdateNotify))

    local teaHouseVisualCardTransferModule = TeaHouse.manager.teaHouseVisualCardTransferModule
    listener = self:createListener(teaHouseVisualCardTransferModule)
    listener:addEventListener(teaHouseVisualCardTransferModule.EVENT_TRANSER_RESULT, handler(self, self.transferResult))
    listener:addEventListener(teaHouseVisualCardTransferModule.EVENT_CARD_MODE_UPDATE, handler(self, self.onClubModeInfo))

    self:updateCardNum()
    local teahouseData = XH.teaHouseManager:getTeaHouseData()
    self._btnRecharge:setVisible(teahouseData:isOwner())
    self._btnHuaKa:setVisible(teahouseData:isOwner())
    XH.NewThrowDataManager:throwData("lys25121803", {
        club_id = XH.areaData:getAreaID() .. "_" .. TeaHouse.manager.teahouseData:getTeaNumber(),
        page_item_id = self._isCanTansfer and "满足转换条件" or "不满足条件"
    })
    TeaHouse.manager.teaHouseVisualCardTransferModule:reqModeInfo()
end

function TeaHouseCardModeTransferSecondView:cleanup()
    TeaHouseCardModeTransferSecondView.super.cleanup(self)
end

function TeaHouseCardModeTransferSecondView:onSetupUpdateNotify()
    self:close()
end

function TeaHouseCardModeTransferSecondView:transferResult(event)
    local isSuccess = event.data.isSuccess
    XH.NewThrowDataManager:throwData("lys25121806", {
        club_id = XH.areaData:getAreaID() .. "_" .. TeaHouse.manager.teahouseData:getTeaNumber(),
        page_item_id = isSuccess and "转换成功" or "转换失败"
    })
    if isSuccess then
        self:close()
    end
end

function TeaHouseCardModeTransferSecondView:onClubModeInfo(event)
    self:updateCardNum()
end

function TeaHouseCardModeTransferSecondView:updateCardNum()
    self._txtTeaCardNum:setString(TeaHouse.manager.teahouseData:getSelfPropcount())
    self._txtMembCardNum:setString(TeaHouse.manager.teaHouseVisualCardTransferModule:getTotalMemberOldCardNum())
    local awardNum = TeaHouse.manager.teaHouseVisualCardTransferModule:getTransferAwardCount()
    self._isCanTansfer = TeaHouse.manager.teaHouseVisualCardTransferModule:getTotalMemberOldCardNum() <= TeaHouse.manager.teahouseData:getSelfPropcount()
    self._txtAwardNum:setString(awardNum)
    self._panelAward:setVisible(awardNum and awardNum > 0)

    self._txtTransfer1:setVisible(self._isCanTansfer)
    self._txtTransfer2:setVisible(not self._isCanTansfer)
    self._btnSure:setEnabled(self._isCanTansfer)
end

function TeaHouseCardModeTransferSecondView:onCloseClicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    self:close()
end

function TeaHouseCardModeTransferSecondView:onSureClicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    -- to transfer
    if XH.teaHouseManager:getTeaHouseData():isOwner() then
        XH.NewThrowDataManager:throwData("lys25121804", {
            club_id = XH.areaData:getAreaID() .. "_" .. TeaHouse.manager.teahouseData:getTeaNumber(),
            page_item_id = self._isCanTansfer and "满足转换条件" or "不满足条件"
        })
        TeaHouse.manager.teaHouseVisualCardTransferModule:transfer()
    else
        TeaHouse.TipTool.showToast("操作失败，仅比赛场领队可进行此操作")
    end
end

function TeaHouseCardModeTransferSecondView:onkeFuClicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    XH.NewThrowDataManager:throwData("lys25121807", {
        club_id = XH.areaData:getAreaID() .. "_" .. TeaHouse.manager.teahouseData:getTeaNumber()
    })
    XH.Bridge:getModule("CusService"):oponCusServerView(nil, "TEA_CARD_MODE_TRANSFER")
end

function TeaHouseCardModeTransferSecondView:onHuaKaClicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    XH.NewThrowDataManager:throwData("lys25121805", {
        club_id = XH.areaData:getAreaID() .. "_" .. TeaHouse.manager.teahouseData:getTeaNumber(),
        page_item_id = "去扣卡"
    })
    self:close()
    TeaHouse.manager.viewManager:openView("TeaHouseMemberView", nil, {tabIndex = 2})
    TeaHouse.manager.teahouseMember:reqDealPower()
end

function TeaHouseCardModeTransferSecondView:onRechargeClicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    XH.NewThrowDataManager:throwData("lys25121805", {
        club_id = XH.areaData:getAreaID() .. "_" .. TeaHouse.manager.teahouseData:getTeaNumber(),
        page_item_id = "去充卡"
    })
    TeaHouse.manager.viewManager:openView("TeaHouseQuitRechargeView")
end
return TeaHouseCardModeTransferSecondView
�