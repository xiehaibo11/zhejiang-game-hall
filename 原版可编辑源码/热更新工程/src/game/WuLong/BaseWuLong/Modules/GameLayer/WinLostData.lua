local WinLostData = class("WinLostData")

function WinLostData:ctor()
    self._playerCount = 4
    self._playerName = {}
    self._sFinishOrder = {} -- 出完顺序（1表示第1个出完，2表示第2个出完...）
    self._iScore = {} -- 分数（基础分数，根据剩余牌数计算）
    self._iBoomCount = {} -- 奖数（炸弹次数）
    self._iBombRewardScore = {} -- 奖分（炸弹奖励分）
    self._iPickupScore = {} -- 捡分（获得的桌面分数）
    self._iFinalScore = {} -- 最终得分
    self._nChaoDiSeat = {} -- 抄底座位号
end

function WinLostData:setFinishOrder(data)
    self._sFinishOrder = data
end

function WinLostData:setScore(data)
    self._iScore = data
end

function WinLostData:setBoomCount(data)
    self._iBoomCount = data
end

function WinLostData:setBombRewardScore(data)
    self._iBombRewardScore = data
end

function WinLostData:setPickupScore(data)
    self._iPickupScore = data
end

function WinLostData:setFinalScore(data)
    self._iFinalScore = data
end

function WinLostData:getFinishOrder()
    return self._sFinishOrder
end

function WinLostData:getScore()
    return self._iScore
end

function WinLostData:getBoomCount()
    return self._iBoomCount
end

function WinLostData:getBombRewardScore()
    return self._iBombRewardScore
end

function WinLostData:getPickupScore()
    return self._iPickupScore
end

function WinLostData:getFinalScore()
    return self._iFinalScore
end

function WinLostData:getPlayerScoreBySeat(seat)
    return self._iFinalScore[seat]
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

function WinLostData:setChaoDiSeat(nChaoDiSeat)
    self._nChaoDiSeat = nChaoDiSeat
end

function WinLostData:getChaoDiSeats()
    return self._nChaoDiSeat
end

function WinLostData:clearData()
    self._playerCount = 4
    self._playerName = {}
    self._sFinishOrder = {} -- 出完顺序（1表示第1个出完，2表示第2个出完...）
    self._iScore = {} -- 分数（基础分数，根据剩余牌数计算）
    self._iBoomCount = {} -- 奖数（炸弹次数）
    self._iBombRewardScore = {} -- 奖分（炸弹奖励分）
    self._iPickupScore = {} -- 捡分（获得的桌面分数）
    self._iFinalScore = {} -- 最终得分
    self._nChaoDiSeat = {}
end

return WinLostData