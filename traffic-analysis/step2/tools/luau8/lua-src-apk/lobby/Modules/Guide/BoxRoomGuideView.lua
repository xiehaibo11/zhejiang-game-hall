-- 休闲场引导
local BoxRoomGuideView = class("BoxRoomGuideView", XH.ViewBase)

function BoxRoomGuideView:getCSBPath()
    return "cocosStudio/hall/CSB/guide/BoxRoomGuideLayer.csb"
end

function BoxRoomGuideView:getBindingInfo()
    return {       
        ["_KW_UI_JUMP_OVER_BTN"] = { varName = "KW_UI_JUMP_OVER_BTN",type = XH.UI_TYPE.BUTTON, onTouchEnded = "on_KW_UI_JUMP_OVER_BTN" },
        ["_KW_GUIDE_INVITE"] = { varName = "KW_GUIDE_INVITE",onTouchEnded = "on_KW_GUIDE_INVITE_BTN"},
        ["_KW_GUIDE_COPY"] = { varName  = "KW_GUIDE_COPY",onTouchEnded = "on_KW_GUIDE_COPY_BTN"},
    }
end

function BoxRoomGuideView:getProxyEvents()
    return {
        {module = XH.lobby:getModule("Gold"), eventKeyName = "EVENT_CLOSE_NEW_USER_GUIDE_VIEW", callBack = "closeGuideView"}
    }
end

function BoxRoomGuideView:ctor(param) 
    BoxRoomGuideView.super.ctor(self)
end

function BoxRoomGuideView:on_KW_UI_JUMP_OVER_BTN(send,eventType)
    self:close()
end

function BoxRoomGuideView:on_KW_GUIDE_INVITE_BTN(send,eventType)
    XH.lobby:getModule("Guide"):dispatchEvent({name = XH.lobby:getModule("Guide").EVENT_UPDATE_BOX_ROOM_GUIDE_INVITE})
    self:close()
end

function BoxRoomGuideView:on_KW_GUIDE_COPY_BTN(send,eventType)
    XH.lobby:getModule("Guide"):dispatchEvent({name = XH.lobby:getModule("Guide").EVENT_UPDATE_BOX_ROOM_GUIDE_COPY})
    self:close()
end

return BoxRoomGuideView
�