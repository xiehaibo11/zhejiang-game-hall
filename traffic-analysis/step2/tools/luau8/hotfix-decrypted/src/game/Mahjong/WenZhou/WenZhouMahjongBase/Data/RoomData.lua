local RoomData = CF.gameClass("RoomData", "game.Mahjong.BasicMahjong.Data.RoomData")

function RoomData:seatToLocal(seat)
    local localSeat = -1
    local chairCount = self:getChairs()
    if chairCount ~= 2 then
		chairCount = 4
    end
    if seat >= 0 and seat <= chairCount - 1 then
        localSeat = ((seat - self:getSelfSeat() + chairCount) % chairCount + 1) % chairCount + self:getSelfLocalSeat() - 1
        if chairCount == 2 and localSeat == CF.GameDefine.LOCAL_SEAT.LEFT then
            localSeat = CF.GameDefine.LOCAL_SEAT.TOP
        end
    end
    return localSeat
end

function RoomData:localToSeat(localSeat)
    local seat = -1
    local chairCount = self:getChairs()
    if chairCount ~= 2 then
		chairCount = 4
    end
    if localSeat >= 0 and (localSeat <= chairCount or chairCount == 2) then
        if chairCount == 2 then
            if localSeat == CF.GameDefine.LOCAL_SEAT.TOP then
                localSeat = CF.GameDefine.LOCAL_SEAT.LEFT
            end
        end
        seat = ((localSeat - self:getSelfLocalSeat() + chairCount) % chairCount + self:getSelfSeat()) % chairCount
    end
    return seat
end

return RoomData�