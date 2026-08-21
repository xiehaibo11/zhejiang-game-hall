local GoldViewBase = class("GoldViewBase", XH.ViewBase)

function GoldViewBase:ctor()
    GoldViewBase.super.ctor(self)
    self:AdaptationIphoneX()
end

function GoldViewBase:getAdaptationConfig()
    return {}
end

function GoldViewBase:AdaptationIphoneX()
    local nodeArr = self:getAdaptationConfig() or {}
    NG.UITool.AdaptationIphoneX(nodeArr)
end

return GoldViewBase�