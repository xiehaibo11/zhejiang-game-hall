local PlayerView = CF.gameClass("PlayerView", "game.DoubleKou.BaseDoubleKou.Modules.Player.View")

function PlayerView:onPlayerListChanged(event)
    if self and self.removeAllPlayers and self.refrshSinglePlayer then
        if CF.roomData:isBianChaDKGoldRoom() and event and event.msg and event.msg.seatId then
            local seat = event.msg.seatId
            local localSeat = CF.roomData:seatToLocal(seat)
            self:removePlayerHeadByLocalSeat(localSeat)
            local playerData = CF.roomData:getPlayerDataBySeatId(seat)
            self:refrshSinglePlayer(seat, playerData)
            return
        end
        self:removeAllPlayers()
        for seatId = 0, CF.roomData:getMaxPlayer() - 1 do
            local playerData = CF.roomData:getPlayerDataBySeatId(seatId)
            self:refrshSinglePlayer(seatId, playerData)
        end
    end
end

return PlayerView