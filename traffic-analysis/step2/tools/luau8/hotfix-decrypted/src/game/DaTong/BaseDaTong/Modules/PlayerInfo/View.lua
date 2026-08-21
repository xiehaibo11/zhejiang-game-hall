local PlayerInfoView = CF.gameClass("PlayerInfoView", "game.GameBase.Modules.PlayerInfo.View")

function PlayerInfoView:initGps()
	local isSupportGps = CF.roomData:isSupportGps() and not CF.roomData:isSixPlayer()
    self._btnGps:setVisible(isSupportGps)
end

return PlayerInfoView 