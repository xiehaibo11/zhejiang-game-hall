local RoomData = CF.gameClass("RoomData", "game.Mahjong.BasicMahjong.Data.RoomData")

function RoomData:ctor()
	RoomData.super.ctor(self)
	self._canContinue = false
	
end

return RoomData