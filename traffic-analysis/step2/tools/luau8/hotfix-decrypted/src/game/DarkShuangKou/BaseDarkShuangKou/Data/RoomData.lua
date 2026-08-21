local RoomData = CF.gameClass("RoomData", CF.gameScriptRootPath .. ".GameBase.Data.RoomData")

function RoomData:initRoomData(data)
    RoomData.super.initRoomData(self, data)
    data = data or {}
    self._isDebug = data.debug == nil and false or data.debug
    self._isTeaching = data.teaching == nil and false or data.teaching
end

function RoomData:seatToLocal(seat)
    if seat == nil then
        return -1
    end
    local localSeat = -1
    local chairCount = self:getChairs()
    if seat >= 0 and seat <= chairCount - 1 then
        localSeat = ((seat - self:getSelfSeat() + chairCount) % chairCount + 1) % chairCount + self:getSelfLocalSeat() - 1
        if chairCount == 2 and localSeat == CF.GameDefine.LOCAL_SEAT.LEFT then
            localSeat = CF.GameDefine.LOCAL_SEAT.TOP
        end
    end
    return localSeat
end

function RoomData:isDebug()
    return self._isDebug
end

function RoomData:isTeaching()
    return self._isTeaching
end

function RoomData:setTeaching(bIsTeaching)
    self._isTeaching = bIsTeaching 
end

function RoomData:getRoomLevel()
    if CF.roomData:isTeaching() then
        return 4
    end
    return self._roomFlag
end

return RoomData
�