local RoomData = CF.gameClass("RoomData", "game.Mahjong.LiShui.LiShuiMahjongBase.Data.RoomData")

RoomData.EVENT_GAME_PLAYCOUNT_QUAN_CHANGED = "EVENT_GAME_PLAYCOUNT_QUAN_CHANGED"

RoomData.GAME_MODE = {
    GAME_MODE_JU = 0,
    GAME_MODE_CIRCLE = 1,
}

function RoomData:ctor()
	RoomData.super.ctor(self)

    self._gameRoomMode = 0
end

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

return RoomData�