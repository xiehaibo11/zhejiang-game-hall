local LuckyTurnTableNode = class("LuckyTurnTableNode",XH.ViewBase)

LuckyTurnTableNode.KW_NAME_LUCKY_TURN_TABLE = "KW_NAME_LUCKY_TURN_TABLE"

function LuckyTurnTableNode:getCSBPath()
    return "cocosStudio/hall/CSB/Activity/LuckyTurnTable.csb"
end

function LuckyTurnTableNode:getBindingInfo()
    return {
        ["_KW_IMG_BG"] = { varName="_imgBg", onTouchEnded = "onTouchEventGo" },
    }
end

function LuckyTurnTableNode:ctor(param)
    param = param or {}
    LuckyTurnTableNode.super.ctor(self,param) 
    self.csbNode = self
    self.width = param.width or 1342
	self.height = param.height or 870
	self:setContentSize(self.width,self.height)
	self:setName(self.KW_NAME_LUCKY_TURN_TABLE)
end

function LuckyTurnTableNode:getProxyEvents()
    return {

    }
end

function LuckyTurnTableNode:onTouchEventGo(send, eventType)
    XH.viewManager:openView("LuckyTurnTableActView")
end

return LuckyTurnTableNode