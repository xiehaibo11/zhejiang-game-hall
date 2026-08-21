local UniunGame = class("UniunGame",XH.ViewBase)

local H5GameNameList = {
    BUYU = "BUYU",
}

function UniunGame:getCSBPath()
    return "cocosStudio/hall/CSB/Activity/UniunGame/UniunGameview.csb"
end

function UniunGame:getBindingInfo()
    return {
        ["_KW_UI_ROOT_LAYER"] = { varName = "_panelBg", onTouchEnded = "onTouchEventBG" },
    }
end

function UniunGame:onTouchEventBG(send, event)
    XH.lobby:getModule("H5GameWidget"):startH5Game(H5GameNameList.BUYU)
    --点击进入游戏的埋点信息
    XH.throwDataManager:recordButtonClick(XH.ThrowDataDefine.ButtonEnumTable.TABS_ACTIVITY_ENTER_UNIUN_GAME)
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.TABS_ACTIVITY_ENTER_UNIUN_GAME,{block_label = "人人捕鱼",item_id = "人人捕鱼"})
end

return UniunGame/