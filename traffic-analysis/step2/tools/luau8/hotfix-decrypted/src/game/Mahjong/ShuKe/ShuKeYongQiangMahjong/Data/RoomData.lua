local RoomData = CF.gameClass("RoomData", "game.Mahjong.BasicMahjong.Data.RoomData")

function RoomData:ctor()
	RoomData.super.ctor(self)
	if CF.teaHouseManager:isInTeaHouse() then
		self._canContinue = false
	end
end

return RoomData�