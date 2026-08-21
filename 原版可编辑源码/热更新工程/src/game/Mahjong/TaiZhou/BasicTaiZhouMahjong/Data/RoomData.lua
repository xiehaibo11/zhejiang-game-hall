local RoomData = CF.gameClass("RoomData", "game.Mahjong.BasicMahjong.Data.RoomData")

function RoomData:ctor()
    RoomData.super.ctor(self)
    self._dynamicChairs = 0 --提前开局动态座位数
    self._maxHuCount = 0 --胡数封顶
end

function RoomData:setDynamicChairs(chairs)
    self._dynamicChairs = chairs
end

function RoomData:getDynamicChairs(chairs)
    return self._dynamicChairs
end

function RoomData:setMaxHuCount(maxHuCount)
    self._maxHuCount = maxHuCount
end

function RoomData:getMaxHuCount()
    return self._maxHuCount
end

-- 是否开启切牌
function RoomData:isOpenCutCards()
    return false
end

return RoomData