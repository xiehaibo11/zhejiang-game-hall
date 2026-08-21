local RoomData = CF.gameClass("RoomData", "game.Mahjong.BasicMahjong.Data.RoomData")

function RoomData:ctor()
    RoomData.super.ctor(self)
    self._dismissTime = 0
end

function RoomData:setDismissTime(time)
    self._dismissTime = time or 0
end

function RoomData:getDismissTime()
    return self._dismissTime
end

return RoomData]