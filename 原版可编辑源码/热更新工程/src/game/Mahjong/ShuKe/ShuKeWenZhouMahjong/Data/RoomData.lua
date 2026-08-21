local RoomData = CF.gameClass("RoomData", "game.Mahjong.BasicMahjong.Data.RoomData")

function RoomData:ctor()
	RoomData.super.ctor(self)
    self._gameRoomMode = 0
end


RoomData.GAME_MODE = {
    GAME_MODE_JU = 0,
    GAME_MODE_CIRCLE = 1,
}




function RoomData:setGameRoomMode(mode)
    self._gameRoomMode = mode
end

function RoomData:getGameRoomMode()
    return self._gameRoomMode
end

function RoomData:isSupportPreShuffle()
    local isSupport = RoomData.super.isSupportPreShuffle(self)
    if isSupport then
        isSupport = self._gameRoomMode == RoomData.GAME_MODE.GAME_MODE_JU
    end
    return isSupport
end

function RoomData:flushExtRule()
    RoomData.super.flushExtRule(self)
    if self._curGameRule and self._curGameRule ~= "" and self._gameRule and self._gameRule ~= "" then
        self:setMDDRule()
    end
end

-- 熟客温州麻将规则特殊处理
function RoomData:setMDDRule()
    if string.match(self._curGameRule, "HaveMDDi='0';") and not string.match(self._gameRule, "无买顶底") then
        self._gameRule = self._gameRule .. "/无买顶底"
        self:dispatchEvent({name = self.EVENT_GAMERULE_CHANGED})
    end
end

return RoomData