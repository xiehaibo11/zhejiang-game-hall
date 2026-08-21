local GoldTipView = class("GoldTipView", NG.ViewBase)

function GoldTipView:getCSBPath()
    return "cocosStudio/GoldNew/Lobby/CSB/Gold/GoldAdLayer.csb"
end

function GoldTipView:getBindingInfo()
    return {
        --
        ["_KW_BTN_CLOSE"] = {varName = "KW_CLOSE", type = NG.UI_TYPE.IMAGE_TOBUTTON, onTouchEnded = "onTouchEventClose"},
        ["_KW_BG"] = {varName = "KW_BG", onTouchEnded = "onTouchEventClose"},
    }
end

function GoldTipView:getProxyEvents()
    return {}
end

function GoldTipView:ctor(param, awardData)
    GoldTipView.super.ctor(self, param)
    self:init(awardData)
end

function GoldTipView:init(data)

end

function GoldTipView:onTouchEventClose(send, eventType)
    self:close()
end

return GoldTipView
