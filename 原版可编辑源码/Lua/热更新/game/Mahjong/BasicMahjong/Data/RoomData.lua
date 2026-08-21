local RoomData = CF.gameClass("RoomData", "game.GameBase.Data.RoomData")

function RoomData:ctor()
    RoomData.super.ctor(self)
    self._tempPlayerDataList = {}
    self._isHaveResult = false
end

function RoomData:initEveryTimesDatas()
    RoomData.super.initEveryTimesDatas(self)
    self._isHaveResult = false
    self._isGameOver = false
end

function RoomData:haveTing()
    return false
end

function RoomData:clonePlayerDatas()
    self._tempPlayerDataList = clone(self:getPlayerDatas())
end

function RoomData:getTempPlayerDataCount()
    return #self._tempPlayerDataList
end

function RoomData:getTempPlayerDataBySeatId(seatId)
    for _, playerData in pairs(self._tempPlayerDataList) do
        if playerData:getSeat() == seatId then
            return playerData
        end
    end
    if #self._tempPlayerDataList == 0 then
        for _, playerData in pairs(self:getPlayerDatas()) do
            if playerData:getSeat() == seatId then
                return playerData
            end
        end
    end
end

--TODO 移至基類
function RoomData:setIsHaveResult(isHaveResult)
    self._isHaveResult = isHaveResult or false
end

function RoomData:getIsHaveResult()
    return self._isHaveResult
end

function RoomData:playerListChangedBySeatId(seatID)
    self:dispatchEvent({name = self.EVENT_PLAYERLIST_CHANGED, msg = {seatId = seatID}})
end

function RoomData:setChairs(chairs)
    self._chairs = chairs
end

return RoomData