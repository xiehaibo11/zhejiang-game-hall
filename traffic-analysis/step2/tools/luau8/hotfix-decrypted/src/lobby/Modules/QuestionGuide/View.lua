local QuestionGuideView = class("QuestionGuideView", XH.ViewBase)

QuestionGuideView.JUMP_URL = {GuanDan = "https://dwz.cn/qx1Op2f4"}

function QuestionGuideView:getCSBPath()
    return "cocosStudio/hall/CSB/QuestionGuideLayer.csb"
end

function QuestionGuideView:getBindingInfo()
    return {["_KW_BTN_RESERVE"] = {varName = "_btnReserve", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventReserve"}, ["_KW_BTN_CLOSE"] = {varName = "_btnClose", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventClose"}}
end

function QuestionGuideView:ctor(param)
    QuestionGuideView.super.ctor(self, param)
    self._paramData = param or {}
    self:initUI()
    self:throwShowData()
end

function QuestionGuideView:throwShowData()
    local pageTemp = "P1063"
    if self._paramData.from and self._paramData.from == "Gold" then
        pageTemp = "P1065"
    end
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.GUANDAN_QUESTION_POP_SHOW, {page = pageTemp}, {scene = self:getPushScene(), area_id = XH.areaData:getAreaID(), channel_id = XH.SysTool:getChannelID()})
end

function QuestionGuideView:initUI()

end

function QuestionGuideView:onTouchEventReserve(send, event)
    if not self._paramData.type or not self.JUMP_URL[self._paramData.type] then
        return
    end
    cc.Application:getInstance():openURL(self.JUMP_URL[self._paramData.type])
    if self._paramData.type == "GuanDan" then
        XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.GUANDAN_QUESTION_RESERVE_CLICK, nil, {scene = self:getPushScene(), area_id = XH.areaData:getAreaID(), channel_id = XH.SysTool:getChannelID()})
    end
end

function QuestionGuideView:onTouchEventClose(send, event)
    if self._paramData.type and self._paramData.type == "GuanDan" then
        XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.GUANDAN_QUESTION_CLOSE_CLICK, nil, {scene = self:getPushScene(), area_id = XH.areaData:getAreaID(), channel_id = XH.SysTool:getChannelID()})
    end
    self:close()
end

function QuestionGuideView:getPushScene()
    if self._paramData.from and self._paramData.from == "Gold" then
        return "Gold"
    end
    return "Lobby"
end

return QuestionGuideView
�