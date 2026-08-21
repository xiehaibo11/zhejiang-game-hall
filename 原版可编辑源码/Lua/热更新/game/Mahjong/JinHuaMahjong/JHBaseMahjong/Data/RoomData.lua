local RoomData = CF.gameClass("RoomData", "game.Mahjong.BasicMahjong.Data.RoomData")

function RoomData:initDatas()
    RoomData.super.initDatas(self)
    self._nCurrQuanCount = 0
    self._nMaxQuanCount = 0
    self._firstBanker = 0
    self._startdifen = 0
    self._laoZhuangNum = 0
end

--获得圈数信息
function RoomData:getQuanCount()
    return self._nCurrQuanCount, self._nMaxQuanCount
end

function RoomData:setQuanCount(count)
	self._nCurrQuanCount = count
	self:dispatchEvent({name = self.EVENT_GAME_PLAYCOUNT_CHANGED, msg = {playCount = self._playCount, maxPlayCount = self._maxPlayCount}})
end

function RoomData:setMaxQuanCount(count)
	self._nMaxQuanCount = count
    self:dispatchEvent({name = self.EVENT_GAME_PLAYCOUNT_CHANGED, msg = {playCount = self._playCount, maxPlayCount = self._maxPlayCount}})
end

function RoomData:setFirstBanker(seat)
    self._firstBanker = seat
end

function RoomData:getFirstBanker()
    return self._firstBanker
end

function RoomData:setStartDifenNum(startDiFen)
    self._startdifen = startDiFen
    self:dispatchEvent({name = self.EVENT_GAME_PLAYCOUNT_CHANGED, msg = {playCount = self._playCount, maxPlayCount = self._maxPlayCount}})
end

function RoomData:getStartDifenNum()
    return self._startdifen or 0
end

function RoomData:setLaoZhuangNum(num)
    self._laoZhuangNum = num
    self:dispatchEvent({name = self.EVENT_GAME_PLAYCOUNT_CHANGED, msg = {playCount = self._playCount, maxPlayCount = self._maxPlayCount}})
end

function RoomData:getLaoZhuangNum()
    return self._laoZhuangNum
end

return RoomData