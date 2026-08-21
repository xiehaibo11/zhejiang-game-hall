
local LeftIconBarLayer = class("LeftIconBarLayer", XH.ViewBase)
local LobbyConfig = require("lobby.Modules.Lobby.Config")

function LeftIconBarLayer:getCSBPath()
    return "cocosStudio/hall/CSB/LeftIconBarLayer.csb"
end

function LeftIconBarLayer:getBindingInfo()
    return {
        ["_KW_IMG_BG"] = { varName = "_bgImg"},
        ["_KW_NODE_ICON_BAR"] = { varName = "_iconBarNode"},
        ["_KW_NODE_BTNS"] = { varName = "_btnsNode"},
        ["_KW_PANEL_ARROW_OUT"] = { varName = "_arrowOutBtn", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onBtnEventArrowOut"},
        ["_KW_PANEL_ARROW_IN"] = { varName = "_arrowInBtn", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onBtnEventArrowIn"},
        ["_KW_PERSONAL_GIFTPACK_NODE"] = { varName = "_personalGiftPackNode"},
    }
end

function LeftIconBarLayer:ctor()
    LeftIconBarLayer.super.ctor(self)
    self:initIconBar()
    self:refreshPersonalGiftPackViewClosePos()
end

function LeftIconBarLayer:onEnter()
    LeftIconBarLayer.super.onEnter(self)
    XH.lobby:getModule("PersonalGiftPack"):reqWebActivity()
end

function LeftIconBarLayer:getProxyEvents()
    return {
        { module = XH.lobby:getModule("PersonalGiftPack"), eventKeyName = "EVENT_CONFIG_DATA_CHANGED", callBack = "onPersonalGiftPackInfo"},
    }
end

function LeftIconBarLayer:refreshPersonalGiftPackViewClosePos()
    if XH.SceneManager:getInstance():getTopSceneTag() == XH.SCENE_TAG.LOBBY then
        local view = XH.viewManager:getView(XH.SCENE_TAG.LOBBY, "PersonalGiftPackView")
        if view then
            view:updateClosePos(self._personalGiftPackNode:convertToWorldSpace(cc.p(0,0)))
        end
    end
end

function LeftIconBarLayer:initIconBar()
end

function LeftIconBarLayer:freshPersonalGiftPackNode(bShow)
    self._personalGiftPackNode:removeAllChildren()
    if not bShow then
        return
    end
    local itemIcon = require("lobby.Modules.Lobby.MenuBar.MenuIcon").createIcon(LobbyConfig.ICON_ID.TE_HUI_SHANG_CHENG)
    itemIcon:setClickCallBack(function (send, eventType)
        if eventType == ccui.TouchEventType.ended then
            local eventMsg = {}
            eventMsg.send = send
            eventMsg.eventType = eventType
            eventMsg.bind = self
            self:onMenuBarItemClicked(eventMsg)
        end
    end)
    self._personalGiftPackNode:addChild(itemIcon)
end

function LeftIconBarLayer:onMenuBarItemClicked(event)
    local send = event.send
    local eventType = event.eventType
    local bind = event.bind
    local touchID = tonumber(send:getName())
    local dealFuncTab = {
        [LobbyConfig.ICON_ID.TE_HUI_SHANG_CHENG] = function() bind:onTouchEventTeHuiShangCheng(send, eventType) end,
    }

    local func = dealFuncTab[touchID]
    if func then 
        func()
    end
end

function LeftIconBarLayer:onTouchEventTeHuiShangCheng(send, eventType)
    XH.viewManager:openView("TabsActivityView", nil, { tab = "PERSONALGIFT"})
    local data = {}
    data.userid = XH.playerData:getNumberID()
    XH.throwDataManager:throwData(XH.ThrowDataDefine.PersonalGiftPackIcon,data)
end

function LeftIconBarLayer:onPersonalGiftPackInfo(event)
    local confData = event.msg.configData or {}
    self:freshPersonalGiftPackNode(#confData > 0)
end

function LeftIconBarLayer:freshSizeAndLayout()
    
end

function LeftIconBarLayer:onBtnEventArrowOut(send,eventType)
    
end

function LeftIconBarLayer:onBtnEventArrowIn(send,eventType)
    
end

return LeftIconBarLayer
