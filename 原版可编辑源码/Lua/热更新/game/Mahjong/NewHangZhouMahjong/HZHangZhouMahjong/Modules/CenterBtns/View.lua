local CenterBtnsView = CF.gameClass("CenterBtnsView", "game.Mahjong.BasicMahjong.Modules.CenterBtns.View")

function CenterBtnsView:getBindingInfo()
    local bindingInfo = CenterBtnsView.super.getBindingInfo(self)
    bindingInfo["_KW_BTN_AHEAD"] = { varName = "_aheadBtn", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onAheadBtnClicked"}
    return bindingInfo
end

function CenterBtnsView:getProxyEvents()
    local proxyEvents = CenterBtnsView.super.getProxyEvents(self)
    proxyEvents[#proxyEvents + 1] = { module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_SHOW_AHEAD_BUTTON", callBack = "onShowAheadButton" }
    return proxyEvents
end

function CenterBtnsView:initUI()
	CenterBtnsView.super.initUI(self)
	self._aheadBtn:setVisible(false)
end

function CenterBtnsView:onShowAheadButton(event)
	self._aheadBtn:setVisible(event.msg.isShow)
end

function CenterBtnsView:onAheadBtnClicked(send,eventType)
	local AHEAD_ENUM = {
	    ASPS_AHEAD_TIMEOUT = 5,
	    ASPS_AHEAD_OK = 6,
	    ASPS_AHEAD_NO = 7,
	}
    CF.msgManager:sendAheadStartSelected(AHEAD_ENUM.ASPS_AHEAD_OK)

end

return CenterBtnsView