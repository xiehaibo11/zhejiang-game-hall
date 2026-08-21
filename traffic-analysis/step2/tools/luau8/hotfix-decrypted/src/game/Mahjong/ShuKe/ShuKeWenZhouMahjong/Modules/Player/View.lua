local PlayerView = CF.gameClass("PlayerView", "game.Mahjong.BasicMahjong.Modules.Player.View")

function PlayerView:onPlayerListChanged(event)
    for localSeat = 1, CF.roomData:getMaxPlayer() do
        if self._playerHeads[localSeat] then
            self._playerHeads[localSeat]:removeSelf()
            self._playerHeads[localSeat] = nil
            --隐藏准备
            self:showReadyIcon(localSeat, false)
        end
    end
    PlayerView.super.onPlayerListChanged(self, event)
end

function PlayerView:resetPlayerHead(seatId)
    local localSeat = CF.roomData:seatToLocal(seatId)
    if localSeat <= 0 then return end
    PlayerView.super.resetPlayerHead(self, seatId)
end

return PlayerView�