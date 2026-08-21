local RoomData = CF.gameClass("RoomData", "game.GameBase.Data.RoomData")

function RoomData:ctor()
    RoomData.super.ctor(self)
    self._curMaxPlayer = 4
    self._isFFZ = false
    self._isLianZha = true --是否带连炸
end

function RoomData:initTableData(tableDataMsg)
    RoomData.super.initTableData(self,tableDataMsg)
    self._curMaxPlayer = self._chairs
end

-- 当前局内人数，可变
function RoomData:getMaxPlayer()
    return self._curMaxPlayer
end

-- 最多人数，固定6人
function RoomData:getMaxChairs()
    return 6
end

--是否6人，要在tableInfo下发后才有效
function RoomData:isSixPlayer()
    return self:getMaxChairs() == self:getMaxPlayer()
end

function RoomData:getFriendSeat()
    return (self:getSelfSeat() + 2 ) % self:getMaxPlayer()
end

function RoomData:setIsFFZ(bIsFFz)
	self._isFFZ = bIsFFz
end

function RoomData:getIsFFZ()
	return self._isFFZ
end

function RoomData:setIsLianZha(bLianZha)
    self._isLianZha = bLianZha
end

function RoomData:getIsLianZha()
    return self._isLianZha
end

return RoomData
