local WinLostView = CF.gameClass("WinLostView", "game.Mahjong.BasicMahjong.Modules.WinLost.View")

function WinLostView:createChildren()
    WinLostView.super.createChildren(self)
    
	--局数信息
	--圈数信息

	if CF.roomData:getGameRoomMode() == CF.roomData.GAME_MODE.GAME_MODE_JU then
		self._roomJuShuLabel:setString("局数"..self._playCount.."/"..self._maxPlayCount)
	elseif CF.roomData:getGameRoomMode() == CF.roomData.GAME_MODE.GAME_MODE_CIRCLE then
		self._roomJuShuLabel:setString("圈数"..self._playCount.."/"..self._maxPlayCount/1000)
	end
end

return WinLostView
