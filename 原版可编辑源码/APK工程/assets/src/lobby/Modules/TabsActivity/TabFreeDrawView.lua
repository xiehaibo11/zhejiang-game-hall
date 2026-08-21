local TabFreeDraw = class("TabFreeDraw",XH.ViewBase)

function TabFreeDraw:getCSBPath()
    return "cocosStudio/hall/CSB/Activity/TabsActivity/TabFreeDraw.csb"
end

function TabFreeDraw:getBindingInfo()
    return {
        ["_KW_UI_ROOT_LAYER"] = { varName = "_panelBg", onTouchEnded = "onTouchEventBG" },
    }
end

function TabFreeDraw:onTouchEventBG(send, event)
    XH.viewManager:openView("DailyLuckDrawMainView")
    XH.throwDataManager:recordButtonClick(XH.ThrowDataDefine.ButtonEnumTable.TABS_ACTIVITY_FREE_DRAW)
    XH.throwDataManager:recordButtonClick(XH.ThrowDataDefine.ButtonEnumTable.TABS_ACTIVITY_JOINACT)

end

return TabFreeDraw