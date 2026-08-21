local NewGoldNode = class("NewGoldNode", XH.ViewBase)

NewGoldNode.KW_NAME_LUCKY_TURN_TABLE = "KW_NAME_LUCKY_TURN_TABLE"

function NewGoldNode:getCSBPath()
    return "cocosStudio/hall/CSB/Activity/NewGoldNode.csb"
end

function NewGoldNode:getBindingInfo()
    return {["_KW_IMG_BG"] = {varName = "_imgBg", onTouchEnded = "onTouchEventGo"}}
end

function NewGoldNode:ctor(param)
    param = param or {}
    NewGoldNode.super.ctor(self, param)
    self.csbNode = self
    self.width = param.width or 1342
    self.height = param.height or 870
    self:setContentSize(self.width, self.height)
    self:setName(self.KW_NAME_LUCKY_TURN_TABLE)
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.NEW_GOLD_THROW_3, nil, {area_id = XH.areaData:getAreaID()})
end

function NewGoldNode:getProxyEvents()
    return {}
end

function NewGoldNode:onTouchEventGo(send, eventType)
    local param = {}
    param.isShowCZCW = true
    XH.lobby:getModule("Lobby"):enterNewGold(param)
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.NEW_GOLD_THROW_4, nil, {area_id = XH.areaData:getAreaID()})
end

return NewGoldNode
�