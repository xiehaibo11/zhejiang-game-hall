local ViewBase = class("ViewBase", XH.ViewBase)

function ViewBase:ctor()
    ViewBase.super.ctor(self)
    self:AdaptationIphoneX()
end

function ViewBase:getAdaptationConfig()
    return {}
end

function ViewBase:AdaptationIphoneX()
    local nodeArr = self:getAdaptationConfig() or {}
    CF.UITool.AdaptationIphoneX(nodeArr)
end

function ViewBase:updatePositionX(posX)
end

return ViewBase