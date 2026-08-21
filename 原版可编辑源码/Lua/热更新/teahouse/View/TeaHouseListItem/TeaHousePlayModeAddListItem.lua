local TeaHousePlayModeAddListItem = class("TeaHousePlayModeAddListItem", TeaHouse.View)

TeaHousePlayModeAddListItem.RAW_RES_BINDING_CSB = {
    csb = "res/cocosStudio/TeaHouse/CSB/TeaHouseListItem/TeaHousePlayModeAddListItem.csb",
    binding = {
        ["_KW_PANEL_ROOT"] = { tag = "_KW_PANEL_ROOT", name = "_panelRoot", class = "panel" },
        ["_KW_BTN_ADD"] = { tag = "_KW_BTN_ADD", name = "_btnAdd", class = "btn", events = "onBtnEventAdd" },
    }
}

function TeaHousePlayModeAddListItem:ctor()
    TeaHousePlayModeAddListItem.super.ctor(self)

    self:initView()
end

function TeaHousePlayModeAddListItem:initView()
    self._panelRoot:removeFromParent()
    self:addChild(self._panelRoot)
    TeaHouse.BridgeUI.setText(self._panelRoot, "KW_TEXT_TIP", TeaHouse.BridgeUI.getText(self._panelRoot, "KW_TEXT_TIP"))
end

function TeaHousePlayModeAddListItem:getWidth()
    if self._panelRoot ~= nil then
        return self._panelRoot:getContentSize().width
    end
    return 0
end

function TeaHousePlayModeAddListItem:onBtnEventAdd(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    TeaHouse.manager.teahouseSetup:addPlayMode()
    TeaHouse.throwDataManager:throwDataClick(XH.ThrowDataDefine.Tea_45)
end

return TeaHousePlayModeAddListItem