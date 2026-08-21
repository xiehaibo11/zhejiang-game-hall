local ConsumeViewNode = import(".TeaHouseConsumeAct.ConsumeViewNode")
local RecallViewNode = import(".TeaHouseRecallAct.RecallViewNode")

local BusinessActView = class("BusinessActView",XH.ViewBase)

function BusinessActView:getCSBPath()
    return "cocosStudio/hall/CSB/Activity/BusinessAct/BusinessActMain.csb"
end

function BusinessActView:getBindingInfo()
    return {
        ["_KW_BTN_CLOSE"] = { varName = "_btnClose", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventClose" },
        ["_KW_BTN_TAB_1"] = { varName = "_btnType1", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTabChanged" },
        ["_KW_BTN_TAB_2"] = { varName = "_btnType2", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTabChanged" },
        ["_KW_PANEL_RECALL_ACT"] = {varName = "_panelRecallAct",},
        ["_KW_PANEL_CONSUME_ACT"] = {varName = "_panelConsumeAct",},
    }
end

function BusinessActView:getProxyEvents()
    return {
        { module = XH.lobby:getModule("TeaHouseBusinessAct"), eventKeyName = "EVENT_TEAHOUSE_ACT_SHOW_TYPE", callBack = "onEventTeaHouseActShowType" },
    }
end

function BusinessActView:ctor(param)
    param = param or {}
    BusinessActView.super.ctor(self,param)
	self._nTeaID = param.teaId or 0
    if self._nTeaID == 0 then
        local teaid = XH.playerData:getTeaId()
        self._nTeaID = teaid
    end
	XH.lobby:getModule("TeaHouseBusinessAct"):setReqTeaNumber(self._nTeaID)
    self._topTabBtns = {
		[1] = self._btnType1,
		[2] = self._btnType2,
	}
	self._viewArr = {}
    self._idx = 2
    local actShowType = XH.lobby:getModule("TeaHouseBusinessAct"):getTeaHouseBusinessActType()
    if actShowType.TeaHouseRecallAct then
        self._btnType1:setVisible(true)
        self._idx = 1
        if actShowType.TeaHouseConsumeAct then
            self._btnType2:setVisible(true)
        else
            self._btnType1:setVisible(false)
        end
    end
    self:onTabChanged(self._topTabBtns[self._idx], ccui.TouchEventType.ended, true)
	self:updateCurrentNode()
end

function BusinessActView:onEventTeaHouseActShowType(event)
    local actShowType = XH.lobby:getModule("TeaHouseBusinessAct"):getTeaHouseBusinessActType()
    if actShowType.TeaHouseRecallAct then
        self._btnType1:setVisible(true)
        if actShowType.TeaHouseConsumeAct then
            self._btnType2:setVisible(true)
        else
            self._btnType1:setVisible(false)
        end
    end
end

function BusinessActView:updateCurrentNode()
	if not self._viewArr[self._idx] then
		return
	end
	local actViewNode = self._viewArr[self._idx]:getChildByName("ActViewNode")
	if actViewNode and actViewNode.flushActEvent then
		actViewNode:flushActEvent()
	end
end

function BusinessActView:switchToIndex(idx,force)
	if idx == self._idx and not force then
		return
	end
	self._idx = idx
	self:hideAllViews()
	local view = self._viewArr[self._idx]
	if not view then
		if self._idx == XH.lobby:getModule("TeaHouseBusinessAct").ActivityType.ActivityRecall then
			view = self:createRecallActView()
		elseif self._idx == XH.lobby:getModule("TeaHouseBusinessAct").ActivityType.ActivityConsume then
			view = self:createConsumeActView()
		end
		if view then
			 self._viewArr[self._idx] = view
		end
    else
        self:updateCurrentNode()
	end
	view = self._viewArr[self._idx]
	if view then
		view:setVisible(true)
	end
end

function BusinessActView:hideAllViews()
	for _,v in pairs(self._viewArr) do
		v:setVisible(false)
	end
end

function BusinessActView:createRecallActView()
	local recallActNode = self._panelRecallAct
    if recallActNode then
		local node = RecallViewNode.new({teaId = self._nTeaID})
		node:setAnchorPoint(0.5,0.5)
		node:setName("ActViewNode")
		recallActNode:addChild(node)
	end
	return recallActNode
end

function BusinessActView:createConsumeActView()
	local consumeActNode = self._panelConsumeAct
	if consumeActNode then
		local node = ConsumeViewNode.new()
		node:setAnchorPoint(0.5,0.5)
		node:setName("ActViewNode")
		consumeActNode:addChild(node)
	end
	return consumeActNode
end

function BusinessActView:onTabChanged(send, event,force)
	local curIdx = self:getLastCharAndToNum(send:getName())
    for _, btn in pairs(self._topTabBtns) do
        btn:setEnabled(btn ~= send)
    end
    self:switchToIndex(curIdx,force)
end

function BusinessActView:onTouchEventClose(send, event)
	self:hideAllViews()
    self:close()
end

function BusinessActView:getLastCharAndToNum(str)
    local sType = string.sub(str, string.len(str))
    return tonumber(sType)
end

return BusinessActView