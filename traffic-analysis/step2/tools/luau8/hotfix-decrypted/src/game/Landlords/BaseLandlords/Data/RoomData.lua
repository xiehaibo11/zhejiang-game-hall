local RoomData = CF.gameClass("RoomData", "game.GameBase.Data.RoomData")

RoomData.EVENT_RATE_CHANGED = "EVENT_RATE_CHANGED"

function RoomData:ctor()
    RoomData.super.ctor(self)
    self._gameRate = 1 -- 倍率
    self._gameRuleDetail = ""
end

function RoomData:initRoomData(data)
    RoomData.super.initRoomData(self,data)
    self._gameRate = 1 -- 倍率
end

function RoomData:onDestroy()
    RoomData.super.onDestroy(self)
    self._gameRate = 1 -- 倍率
end

function RoomData:getGameRate()
    return self._gameRate
end

function RoomData:setGameRate(rate)
    local tmpActionSign = self._gameRate ~= 1 and self._gameRate ~= rate
    self._gameRate = rate
    self:dispatchEvent( { name = self.EVENT_RATE_CHANGED , bActionSign = tmpActionSign})
end

function RoomData:setGameRuleDetail(detail)
    self._gameruleDetail = detail
end

function RoomData:getGameRuleDetail()
    return self._gameruleDetail
end

local MIN_LOGIC_XYID = 512
-- 判断是否能接受逻辑协议
function RoomData:isReceiveLogicMsg(subXYID)
    if self:isGoldRoom() and self:getSelfPlayerData() == nil and subXYID >= MIN_LOGIC_XYID then
        return false
    end
    return true
end

return RoomData
�