local WinLostData = class("WinLostData")

function WinLostData:ctor()
    self._playerName = {}
    self._sEndType = 0
    self._tScore = {}
    self._nBoomCnt = {}
    self._labelList = {}
end

function WinLostData:setBoomCnt(nBoomCnt)
    self._nBoomCnt = clone(nBoomCnt)
end

function WinLostData:getBoomCnt()
    return self._nBoomCnt
end

function WinLostData:setEndType(sEndType)
    self._sEndType = sEndType
end

function WinLostData:getEndType()
    return self._sEndType
end

function WinLostData:setPlayerScore(score)
    self._tScore = clone(score)
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

function WinLostData:addPlayerLabel(strLabel, count)
    local labelData =
    {
        label = strLabel,
        count = count
    }
    table.insert(self._labelList, labelData)
end

function WinLostData:getPlayerLabel()
    return self._labelList
end

function WinLostData:clearData()
    self._playerName = {}
    self._sEndType = 0
    self._tScore = {}
    self._nBoomCnt = {}
    self._labelList = {}
end

return WinLostData�