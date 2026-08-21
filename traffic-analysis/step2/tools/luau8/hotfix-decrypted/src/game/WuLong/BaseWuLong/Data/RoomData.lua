local RoomData = CF.gameClass("RoomData", "game.GameBase.Data.RoomData")

-- 是否支持多货币洗牌
function RoomData:isSupportMultiPropShuffle()
    -- 金币场不支持多货币洗牌，只支持金币洗牌
    if self:isGoldRoom() or self:isNewGoldRoom() then
        return false
    end
    local gameID = self:getGameID()
    -- 未开启洗牌不支持
    if not CF.gameSub:getIsOpenShuffle(gameID) then
        return false
    end
    return true
end

return RoomData�