local CenterBtnsView = CF.gameClass("CenterBtnsView", "game.Mahjong.BasicMahjong.Modules.CenterBtns.View")

function CenterBtnsView:getProxyEvents()
    local proxyEvents = CenterBtnsView.super.getProxyEvents(self)
    proxyEvents[#proxyEvents + 1] = { module = CF.roomData, eventKeyName = "EVENT_CLEAR_TABLE", callBack = "clearTable" }
    return proxyEvents
end

function CenterBtnsView:onQuickBtnClicked(send,eventType)
    CF.msgManager:sendGameStart()
    CF.msgManager:sendReqEarlyStart()
end

function CenterBtnsView:onPlayerStateChanged(event)
    CenterBtnsView.super.onPlayerStateChanged(self, event)
    local seatId = event.msg.seatId
    if seatId ~= CF.roomData:getSelfSeat() then
        return
    end
    local playerData = CF.roomData:getPlayerDataBySeatId(seatId)
    if playerData then
        if playerData:getStateEx() == playerData.USER_STATEEX.psReady then
            self._quickBtn:setPositionY(388)
        else
            self._quickBtn:setPositionY(528)
        end
    end
end

function CenterBtnsView:clearTable(event)
	if self._quickBtn then
		self._quickBtn:setVisible(false)
	end
end

return CenterBtnsView