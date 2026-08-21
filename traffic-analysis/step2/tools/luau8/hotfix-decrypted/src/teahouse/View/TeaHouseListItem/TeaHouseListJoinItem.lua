---@class TeaHouseListJoinItem : View
local TeaHouseListJoinItem = class("TeaHouseListJoinItem", TeaHouse.View)

TeaHouseListJoinItem.RAW_RES_BINDING_CSB = {
    csb = "res/cocosStudio/TeaHouse/CSB/TeaHouseListItem/TeaHouseListJoinItem.csb",
    binding = {
        ["_KW_PANEL_ROOT"] = { tag = "_KW_PANEL_ROOT", name = "_panelRoot", class = "panel" },
        ["_KW_BTN_JOIN"] = { tag = "_KW_BTN_JOIN", name = "_btnJoin", class = "btn", events = "onJoinClicked" },
    }
}

function TeaHouseListJoinItem:ctor()
    TeaHouseListJoinItem.super.ctor(self)

    if self._panelRoot then
        self._panelRoot:removeFromParent()
        self:addChild(self._panelRoot)
        XH.UITool.setText(self._panelRoot, "KW_TEXT_TIP", XH.UITool.getText(self._panelRoot, "KW_TEXT_TIP"))
    end
end

function TeaHouseListJoinItem:getWidth()
    if self._panelRoot ~= nil then
        return self._panelRoot:getContentSize().width
    end
    return 0
end

function TeaHouseListJoinItem:onJoinClicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    TeaHouse.manager.viewManager:openView("TeaHouseJoinView")
    self:RecordData(os.time(),"BTN_JOIN")

    TeaHouse.throwDataManager:throwDataClick(XH.ThrowDataDefine.Tea_3)
    TeaHouse.manager.teahouseSDK:reqClipboard()
end

function TeaHouseListJoinItem:RecordData(time,name)
    --数据统计
    local data = {}
    data.userid = XH.playerData:getNumberID()
    data.time1 = time
    data.button = name
    XH.throwDataManager:throwData(XH.ThrowDataDefine.TeaHouseSelected,data)
end

return TeaHouseListJoinItem�