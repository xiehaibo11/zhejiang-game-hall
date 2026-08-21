local WinLostData = class("WinLostData")

function WinLostData:ctor()
    self._playerCount = 4
    self._playerName = {}
    self._sWinMut = 0 
    self._sCaiXiang = {}
    self._sNoGong = {}
    self._iNoOutZhaDan = false
    self._iCaiXiang = false
    self._iNoGong = false
    self._sEscapeSeat = 0 
    self._sEndType = 0 
    self._sChaoDiSeat = 0 
    self._sWinOrder = {}
    self._tScore = {}
    self._bLastPlayCount = false
    self._sGong = {}
    self._sXianShu = {}
    self._sIncValues = {}
    self._bPoChan = {}
    self._sExtraBonus = {}
    self._trustPunishment = {}  -- 托管惩罚
    self._trustChastise = {}
    self._resultYxbd = {}   -- 以小博大
end

function WinLostData:setIsCaiXiang(iCaiXiang)
    self._iCaiXiang = iCaiXiang
end

function WinLostData:getIsCaiXiang()
    return self._iCaiXiang
end

function WinLostData:setIsNoGong(iNoGong)
    self._iNoGong = iNoGong
end

function WinLostData:getIsNoGong()
    return self._iNoGong
end

function WinLostData:setCaiXiangData(sCaiXiang)
    self._sCaiXiang = sCaiXiang
end

function WinLostData:getCaiXiangData()
    return self._sCaiXiang
end

function WinLostData:setNoGongData(sNoGong)
    self._sNoGong = sNoGong
end

function WinLostData:getNoGongData()
    return self._sNoGong
end

function WinLostData:setIsNoOutZhaDan(iNoOutZhaDan)
    self._iNoOutZhaDan = iNoOutZhaDan
end

function WinLostData:getIsNoOutZhaDan()
    return self._iNoOutZhaDan
end

function WinLostData:getWinOrder()
    return self._sWinOrder
end

function WinLostData:setWinOrder(sWinOrder)
    self._sWinOrder = sWinOrder
end

function WinLostData:setEndType(sEndType)
    self._sEndType = sEndType
end

function WinLostData:getEndType()
    return self._sEndType
end

function WinLostData:setWinMut(sWinMut)
    self._sWinMut = sWinMut
end

function WinLostData:getWinMut()
    return self._sWinMut
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

function WinLostData:setEscapeSeat(sEscapeSeat)
    self._sEscapeSeat = sEscapeSeat
end

function WinLostData:getEscapeSeat()
    return self._sEscapeSeat
end

function WinLostData:setChaoDiSeat(sChaoDiSeat)
    self._sChaoDiSeat = sChaoDiSeat
end

function WinLostData:getChaoDiSeat()
    return self._sChaoDiSeat
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

function WinLostData:setGongData(sGong)
    self._sGong = sGong
end

function WinLostData:getGongData()
    return self._sGong
end

function WinLostData:setXianShu(sXianShu)
    self._sXianShu = sXianShu
end

function WinLostData:getXianShu()
    return self._sXianShu
end

function WinLostData:setIncValues(sIncValues)
    self._sIncValues = sIncValues
end

function WinLostData:getIncValues()
    return self._sIncValues
end

function WinLostData:setIsPoChan(bPoChan)
    self._bPoChan = bPoChan
end

function WinLostData:getIsPoChan()
    return self._bPoChan
end
    
function WinLostData:setExtraBonus(sExtraBonus)
    self._sExtraBonus = sExtraBonus
end

function WinLostData:getExtraBonus()
    return self._sExtraBonus
end

function WinLostData:setTrustPunishment(seat, nPunishment)
   self._trustPunishment[seat] = nPunishment
end

function WinLostData:getTrustPunishment(seat)
   return self._trustPunishment[seat] or 0
end

function WinLostData:setTrustChastise(localSeat, flag)
   self._trustChastise[localSeat] = flag
end

function WinLostData:getTrustChastise(localSeat)
   return self._trustChastise[localSeat] or 0
end

function WinLostData:setResultYxbd(nYXBD)
   self._resultYxbd = nYXBD
end

function WinLostData:getResultYxbd(seat)
   return self._resultYxbd[seat]
end

function WinLostData:clearData()
    self._playerCount = 4
    self._playerName = {}
    self._sWinMut = 0 
    self._sCaiXiang = {}
    self._sNoGong = {}
    self._iNoOutZhaDan = false
    self._iCaiXiang = false
    self._iNoGong = false
    self._sEscapeSeat = 0 
    self._sEndType = 0 
    self._sChaoDiSeat = 0 
    self._sWinOrder = {}
    self._gameID = 0
    self._sGong = {}
    self._sXianShu = {}
    self._bPoChan = {}
    self._sIncValues = {}
    self._extraBonus = {}
    self._trustPunishment = {}  -- 托管惩罚
    self._trustChastise = {}
    self._resultYxbd = {}   -- 以小博大
end

return WinLostDatav