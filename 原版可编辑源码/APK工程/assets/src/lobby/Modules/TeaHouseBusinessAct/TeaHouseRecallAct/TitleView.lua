local TitleView = class("TitleView", XH.ViewBase)

function TitleView:getCSBPath()
    return "cocosStudio/hall/CSB/Activity/BusinessAct/RecallAct/RecallActTitle.csb"
end

function TitleView:getBindingInfo()
    return {
        ["_KW_IMG_GET_OWN"] = { varName = "_getOwnType" },
        ["_KW_IMG_IGNORE_STATE"] = { varName = "_imgIgnoreState" },
        ["_KW_IMG_GET_TEAHOUSE"] = { varName = "_getTeaHouseType" },
        ["_KW_BTN_SURE"] = { varName = "_btnSure", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventSure" },
        ["_KW_BTN_CLOSE"] = { varName = "_btnClose", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventClose" },
        ["_KW_BTN_GET_OWN"] = { varName = "_btnGetOwn", type = XH.UI_TYPE.BUTTON, onTouchEnded = "ouTouchEventGetGoOn" },
        ["_KW_BTN_GET_TEAHOUSE"] = { varName = "_btnGetTeaHouse", type = XH.UI_TYPE.BUTTON, onTouchEnded = "ouTouchEventGetGoOn" },
        ["_KW_PANEL_IGNORE_NEXT_TIME"] = { varName = "_btnIgoneNextTime", type = XH.UI_TYPE.BUTTON, onTouchEnded = "ouTouchEventIgnoreNextTime" },
    }
end

function TitleView:ctor(param)
    self._toOrigin = param.data
    self._level = param.level or 0
    TitleView.super.ctor(self, param)
    self:initUI()
end

function TitleView:initUI()
    local haveChoseState = XH.lobby:getModule("TeaHouseBusinessAct"):getNumberWithTeaidKey()
    if haveChoseState == 0 then
        self._getTeaHouseType:setVisible(true)
    else
        self._getOwnType:setVisible(haveChoseState == XH.lobby:getModule("TeaHouseBusinessAct").KW_SET_CHOSE_STATE.GET_OWN_CARDS)
        self._getTeaHouseType:setVisible(haveChoseState == XH.lobby:getModule("TeaHouseBusinessAct").KW_SET_CHOSE_STATE.GET_TEAHOUSE_CARDS)
    end
end

function TitleView:reFreshUI(node)
    self._getOwnType:setVisible(node == self._btnGetOwn)
    self._getTeaHouseType:setVisible(node == self._btnGetTeaHouse)
end

function TitleView:onTouchEventSure(send, eventType)
    if self._imgIgnoreState:isVisible() then
        XH.lobby:getModule("TeaHouseBusinessAct"):setIgnoreTeaidKey(1)
    end
    if self._getOwnType:isVisible() then
        XH.lobby:getModule("TeaHouseBusinessAct"):setNumberWithTeaidKey(XH.lobby:getModule("TeaHouseBusinessAct").KW_SET_CHOSE_STATE.GET_OWN_CARDS)
    elseif self._getTeaHouseType:isVisible() then
        XH.lobby:getModule("TeaHouseBusinessAct"):setNumberWithTeaidKey(XH.lobby:getModule("TeaHouseBusinessAct").KW_SET_CHOSE_STATE.GET_TEAHOUSE_CARDS)
    end
    if self._toOrigin == "all" then
        XH.lobby:getModule("TeaHouseBusinessAct"):reqGetPrize(XH.lobby:getModule("TeaHouseBusinessAct").KW_GET_PRIZE_STATE.GET_ALL_PRIZE, 0)
    else
        XH.lobby:getModule("TeaHouseBusinessAct"):reqGetPrize(XH.lobby:getModule("TeaHouseBusinessAct").KW_GET_PRIZE_STATE.GET_PERCENT_PRIZE, self._level)
    end
    self:close()
end

function TitleView:ouTouchEventIgnoreNextTime(send, eventType)
    self._imgIgnoreState:setVisible(not self._imgIgnoreState:isVisible())
end

function TitleView:onTouchEventClose(send, eventType)
    self:close()
end

function TitleView:ouTouchEventGetGoOn(send, eventType)
    self:reFreshUI(send)
end

return TitleView
