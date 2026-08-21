local DarkShuangKouVideoPopView = class("DarkShuangKouVideoPopView", XH.ViewBase)

function DarkShuangKouVideoPopView:getCSBPath()
    return "cocosStudio/hall/CSB/DarkShuangKouVideoPop/DarkShuangKouVideoPopView.csb"
end

function DarkShuangKouVideoPopView:getBindingInfo()
    return {
        ["_KW_VIDEO_PANEL"] = {varName = "_videoPanel"},
        ["_KW_BTN_GO"] = {varName = "_btnGo", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventGo"},
        ["_KW_BTN_CLOSE"] = {varName = "_btnClose", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventClose"}
    }
end

function DarkShuangKouVideoPopView:ctor()
    DarkShuangKouVideoPopView.super.ctor(self)

    -- XH.VideoManager:playVideoAsGif(self._videoPanel, )
end

function DarkShuangKouVideoPopView:onTouchEventClose(send, event)
    self:close()
end

return DarkShuangKouVideoPopView
