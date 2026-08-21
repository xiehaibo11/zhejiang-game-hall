local GoldSettingView = class("GoldSettingView", NG.ViewBase)

function GoldSettingView:getCSBPath()
    return "cocosStudio/GoldNew/Lobby/CSB/Setting/GoldSettingLayer.csb"
end

function GoldSettingView:getBindingInfo()
    return {
        --
        ["_KW_BTN_BACK"] = {varName = "_KW_BTN_BACK", type = NG.UI_TYPE.BUTTON, onTouchEnded = "onClickClose"}
    }
end

function GoldSettingView:ctor()
    GoldSettingView.super.ctor(self)
end

function GoldSettingView:onClickClose()
    self:close()
end

return GoldSettingView

