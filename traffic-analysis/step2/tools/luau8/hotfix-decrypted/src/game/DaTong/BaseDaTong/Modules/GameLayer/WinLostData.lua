local WinLostData = class("WinLostData")

function WinLostData:ctor()
    self._sEscapeSeat = 0 
    self._playerName = {}
    self._bLastPlayCount = false
    self._winlostData = {}
end

function WinLostData:setWinlostMsgData(data)
    self._winlostData = data
end

function WinLostData:getWinlostMsgData()
    return self._winlostData
end

function WinLostData:setEscapeSeat(sEscapeSeat)
    self._sEscapeSeat = sEscapeSeat
end

function WinLostData:getEscapeSeat()
    return self._sEscapeSeat
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
    self._sEscapeSeat = 0 
    self._sWinOrder = {}
    self._gameID = 0
end

return WinLostDatak