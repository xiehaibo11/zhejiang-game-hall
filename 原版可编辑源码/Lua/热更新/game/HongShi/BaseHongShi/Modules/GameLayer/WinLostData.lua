local WinLostData = class("WinLostData")

function WinLostData:ctor()
    self._playerName = {}
    self._tScore = {}
    self._bLastPlayCount = false
end

function WinLostData:setPlayerScore(score)
    self._tScore = score
end

function WinLostData:getPlayerScoreBySeat(seat)
    return self._tScore[seat]
end

function WinLostData:getPlayerScore()
    return self._tScore
end

function WinLostData:setPlayerName(seat, str)
    self._playerName[seat] = str
end

function WinLostData:getPlayerNameBySeat(seat)
    return self._playerName[seat]
end

function WinLostData:getPlayerName()
    return self._playerName
end

function WinLostData:setIsLastPlayCount(bLastPlayCount)
    self._bLastPlayCount = bLastPlayCount
end

function WinLostData:getIsLastPlayCount()
    return self._bLastPlayCount
end

function WinLostData:clearData()
    self._playerName = {}
    self._tScore = {}
    self._bLastPlayCount = false
end

return WinLostData