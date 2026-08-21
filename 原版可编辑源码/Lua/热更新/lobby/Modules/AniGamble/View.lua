local AniGambleView = class("AniGambleView",XH.ViewBase)

function AniGambleView:getCSBPath()
    return "cocosStudio/hall/CSB/window/AntiGambleLayer.csb"
end

function AniGambleView:getBindingInfo()
    return {
        ["_KW_ANTI_GAMBLE_CLOSE"] = {varName="_btnClose",type = XH.UI_TYPE.BUTTON,onTouchEnded = "onTouchEventClose"},
        ["_KW_PANEL_BG"] = {varName="_panelBG",onTouchEnded = "onTouchEventClose"},
    }
end

function AniGambleView:ctor(param)
    param = param or {}
	AniGambleView.super.ctor(self,param)
end

function AniGambleView:onTouchEventClose(send,eventType)
    self:close()
end

return AniGambleView