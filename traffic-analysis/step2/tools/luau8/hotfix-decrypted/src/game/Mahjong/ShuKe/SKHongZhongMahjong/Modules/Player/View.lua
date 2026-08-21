local PlayerView = CF.gameClass("PlayerView", "game.Mahjong.BasicMahjong.Modules.Player.View")

function PlayerView:getProxyEvents()
    local proxyEvents = PlayerView.super.getProxyEvents(self)
    proxyEvents[#proxyEvents + 1] = { module = CF.game:getModule("Player"), eventKeyName = "EVENT_DYNAMIC_CHANGE_SEAT", callBack = "dynamicChangeSeat" }
    return proxyEvents
end

function PlayerView:dynamicChangeSeat(event)
    local seat = event.msg.seat
    if seat == CF.roomData:getSelfSeat() then
        for i = 1, CF.roomData:getMaxPlayer() do
            if self._playerHeads[i] then
                self._playerHeads[i]:removeSelf()
                self._playerHeads[i] = nil
            end
            if self["_readySp_"..i] then
                self["_readySp_"..i]:setVisible(false) 
            end
        end
    else
        local localSeat = CF.roomData:seatToLocal(seat)
        if self["_readySp_"..localSeat] then
            self["_readySp_"..localSeat]:setVisible(false) 
        end
        if self._playerHeads[localSeat] then
            self._playerHeads[localSeat]:removeSelf()
            self._playerHeads[localSeat] = nil
        end
    end
end

return PlayerView�