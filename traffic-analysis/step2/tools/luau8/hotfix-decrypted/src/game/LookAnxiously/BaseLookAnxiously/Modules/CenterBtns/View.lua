local CenterBtnsView = CF.gameClass("CenterBtnsView", "game.GameBase.Modules.CenterBtns.View")

function CenterBtnsView:ctor()
    CenterBtnsView.super.ctor(self)
    self._gameData = CF.game:getModule("GameLayer"):getGameData()
end

function CenterBtnsView:getCSBPath()
    return "cocosStudio/LookAnxiously/GameLayer/CSB/CenterBtnsLayer.csb"
end

function CenterBtnsView:getBindingInfo()
    local bindingInfo = CenterBtnsView.super.getBindingInfo(self)
    bindingInfo["_KW_BTN_SHOW_SETTLE"] = { varName = "_showSettleBtn", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onShowSettleBtnClicked"}
    return bindingInfo
end

function CenterBtnsView:getProxyEvents()
    local proxyEvents = CenterBtnsView.super.getProxyEvents(self)
    proxyEvents[#proxyEvents + 1] = { module = CF.game:getModule("CenterBtns"), eventKeyName = "EVENT_SHOW_SETTLE_BUTTON", callBack = "onShowSettleButton" }
    proxyEvents[#proxyEvents + 1] = {module = CF.roomData, eventKeyName = "EVENT_GAMESTART_CHANGED", callBack = "onGameStateChanged"}
    proxyEvents[#proxyEvents + 1] = {module = CF.roomData, eventKeyName = "EVENT_CLEAR_TABLE", callBack = "onClearTable"}
    return proxyEvents
end

function CenterBtnsView:onShowSettleButton()
    self._showSettleBtn:setVisible(true)
    self._nextBtn:setVisible(true)
    self._startBtn:setVisible(false)
end

function CenterBtnsView:onNextBtnClicked(send, eventType)
    CenterBtnsView.super.onNextBtnClicked(send, eventType)
    self:onHideSettleButton()
end

function CenterBtnsView:onHideSettleButton()
    self._showSettleBtn:setVisible(false)
    self._nextBtn:setVisible(false)
end

function CenterBtnsView:onShowSettleBtnClicked(send, eventType)
    self:onHideSettleButton()
    CF.game:getModule("WinLost"):showSettleWindow()
end

function CenterBtnsView:onGameStateChanged(event)
    self:updateStarteBtnVisible()
end

function CenterBtnsView:onClearTable(event)
    self:onHideSettleButton()
end

function CenterBtnsView:getStartBtnVisible()
    local visible = CenterBtnsView.super.getStartBtnVisible(self)
    if self._gameData:getIsHaveResult() then
        return false
    end
    return visible
end

return CenterBtnsView�