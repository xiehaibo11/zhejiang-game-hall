local RankTipView = class("RankTipView", XH.ViewBase)

function RankTipView:ctor(param)
    param = param or {}
    RankTipView.super.ctor(self, param)
end

function RankTipView:getCSBPath()
    return "cocosStudio/hall/CSB/PeakRace/MatchRankTip.csb"
end

function RankTipView:getBindingInfo()
    return {
        ["_KW_BTN_CLOSE"] = { varName = "_KW_BTN_CLOSE", type = XH.UI_TYPE.IMAGE_TOBUTTON, onTouchEnded = "onTouchEventClose" },
    }
end

function RankTipView:onTouchEventClose()
    self:close()
end

return RankTipView