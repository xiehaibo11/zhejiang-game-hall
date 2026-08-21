local TabPrayAct = class("TabPrayAct",XH.ViewBase)

function TabPrayAct:getCSBPath()
    return "cocosStudio/hall/CSB/Activity/TabsActivity/TabPrayAct.csb"
end

function TabPrayAct:getBindingInfo()
    return {
        ["_KW_UI_ROOT_LAYER"] = { varName = "_panelBg", onTouchEnded = "onTouchEventBG" },
    }
end

function TabPrayAct:onTouchEventBG(send, event)
    XH.throwDataManager:recordButtonClick(XH.ThrowDataDefine.ButtonEnumTable.TABS_ACTIVITY_PRAY_ACT)
    XH.throwDataManager:recordButtonClick(XH.ThrowDataDefine.ButtonEnumTable.TABS_ACTIVITY_JOINACT)
    XH.viewManager:openView("PrayActView")
end

return TabPrayAct