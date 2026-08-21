local JinLongPopNode = class("JinLongPopNode", XH.ViewBase)

function JinLongPopNode:getCSBPath()
    return "cocosStudio/hall/CSB/Activity/JinlongPopLayer.csb"
end

function JinLongPopNode:getBindingInfo()
    return {["_KW_ROOT_LAYER"] = {varName = "_imgBg", onTouchEnded = "onTouchEventClose"}}
end

function JinLongPopNode:ctor(param)
    param = param or {}
    JinLongPopNode.super.ctor(self, param)
    self.csbNode = self
end

function JinLongPopNode:getProxyEvents()
    return {}
end

function JinLongPopNode:onTouchEventClose()
    self:close()
end

return JinLongPopNode
`