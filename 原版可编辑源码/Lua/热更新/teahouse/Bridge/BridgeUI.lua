---@class BridgeUI
local BridgeUI = {}

function BridgeUI.adaptForLiuHai(nodeList, notchWidth)
    XH.UITool.adaptForLiuHai(nodeList, notchWidth)
end

function BridgeUI.setVisible(node, name, visible)
    return XH.UITool.setVisible(node, name, visible)
end

function BridgeUI.setText(node, name, string)
    return XH.UITool.setText(node, name, string)
end

function BridgeUI.getText(node, name)
    return XH.UITool.getText(node, name)
end

function BridgeUI.addTouchEventListener(node, name, func)
    return XH.UITool.addTouchEventListener(node, name, func)
end

function BridgeUI.openPhoneBindView()
    XH.viewManager:openView("PhoneBindView")
end

function BridgeUI.openShopView()
    XH.Bridge.viewManager:openView("GoldHallShopView", nil, {openType = "Lobby"})
end

function BridgeUI.openTabsActivityView()
    local view = XH.viewManager:openView("TabsActivityView")
    if view.changeTabByIndex then
        view:changeTabByIndex(XH.lobby:getModule("TabsActivity").ActivityType.ActivityTask)
    end
end

function BridgeUI.openLuckyTurnTableAct()
    XH.viewManager:openView("TabsActivityView", nil, { tab = "LUCKYTURNTABLE" })
end

function BridgeUI.openPersonalGiftPackView(pos)
    XH.viewManager:openView("TabsActivityView", nil, { tab = "PERSONALGIFT" })
end

function BridgeUI.openBanInfoView(data)
    XH.viewManager:openView("LockTips", nil, data)
end

function BridgeUI.getMenuIcon()
    return  require("lobby.Modules.Lobby.MenuBar.MenuIcon")
end

function BridgeUI.getIconConfig()
    return require("lobby.Modules.Lobby.Config")
end

function BridgeUI.oponCommonRewardView(awardData)
    XH.viewManager:openView("CommonRewardView", nil, awardData)
end

--ICON角标
function BridgeUI.getMarkIcon(param)
    return require("lobby.Modules.Mark.View").new(param)
end

return BridgeUI