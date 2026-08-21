local GetPhoneCardTip = class("GetPhoneCardTip", XH.ViewBase)

function GetPhoneCardTip:getCSBPath()
    return "hall/CSB/Activity/Invite/InviteGetPhoneCardTip.csb"
end

function GetPhoneCardTip:getProxyEvents()
    return {}
end

function GetPhoneCardTip:getBindingInfo()
    return {
        ["_KW_ROOT_LAYER"] = {varName = "_root"},
        ["_body"] = {varName = "_body"},
        ["_btnClose"] = {varName = "_btnClose", type = XH.UI_TYPE.IMAGE_TOBUTTON, onTouchEnded = "clickClose"},
        ["_btnRule"] = {varName = "_btnRule", type = XH.UI_TYPE.IMAGE_TOBUTTON, onTouchEnded = "clickRule"},
        ["_btnLeft"] = {varName = "_btnLeft", type = XH.UI_TYPE.IMAGE_TOBUTTON, onTouchEnded = "clickGetAward"},
        ["_btnRight"] = {varName = "_btnRight", type = XH.UI_TYPE.IMAGE_TOBUTTON, onTouchEnded = "clickClose"}
    }
end

function GetPhoneCardTip:ctor(param)
    GetPhoneCardTip.super.ctor(self, param)
    self._param = param

    XH.NewThrowDataManager:throwData("lys26012304", nil, {count = self._param.total, count1 = 0, count2 = self._param.info.id})
end

function GetPhoneCardTip:initCodeBind()
    local selfSize = self:getContentSize()
    local rootSize = self._root:getContentSize()
    local scaleX = selfSize.width / rootSize.width
    local scaleY = selfSize.height / rootSize.height
    self._rootScale = scaleX > scaleY and scaleY or scaleX
    self._body:setScale(self._rootScale)
    self._root:setPosition(selfSize.width / 2, selfSize.height / 2)
    -- self._KW_TOUCH_LAYER:setContentSize(selfSize.width, selfSize.height)
end
function GetPhoneCardTip:clickClose(send, eventType)
    if send == self._btnRight then
        XH.NewThrowDataManager:throwData("lys26012305", {page_item_id="继续任务"}, {count = self._param.total, count1 = 0, count2 = self._param.info.id})
    end
    self:close()
end
function GetPhoneCardTip:clickGetAward(send, eventType)
    XH.NewThrowDataManager:throwData("lys26012305", {page_item_id="领取房卡"}, {count = self._param.total, count1 = 0, count2 = self._param.info.id})
    self._param.getAwardFunc()
    self:close()
end
function GetPhoneCardTip:clickRule(send, eventType)
    XH.NewThrowDataManager:throwData("lys26012305", {page_item_id="查看活动规则"}, {count = self._param.total, count1 = 0, count2 = self._param.info.id})
    self._param.showRuleFunc()
    self:close()
end
return GetPhoneCardTip
