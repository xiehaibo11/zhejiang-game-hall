local PlayerView = CF.gameClass("PlayerView", "game.Mahjong.BasicMahjong.Modules.Player.View")

function PlayerView:onPlayerListChanged(event)
    for seatId = 1, CF.roomData:getMaxPlayer() do
		if self._playerHeads and self._playerHeads[seatId] then
			self._playerHeads[seatId]:removeSelf()
			self._playerHeads[seatId] = nil
		end
    end
    PlayerView.super.onPlayerListChanged(self, event)
end

return PlayerView