local WinLostData = CF.gameClass("WinLostData", "game.Mahjong.BasicMahjong.Modules.WinLost.WinLostData")

function WinLostData:initDatas()
    WinLostData.super.initDatas(self)
    self._jiDaoScore = {}
    self._baoDaoScore = {}
    self._zongDaoScore = {}
    self._yaPoType = {}
    self._bTaoHua = {}
end

function WinLostData:onMsgFanCnt(msgData)

end

function WinLostData:onMsgResult(msgData)
    self:setGameRule(CF.roomData:getGameRule())
    self._nWinLost = msgData.nWinLost
    self._jiDaoScore = msgData.nJiDao
    self._baoDaoScore = msgData.nBaoDao
    self._zongDaoScore = msgData.nZongDao
    self._yaPoType = msgData.nYaPoType
    self._bTaoHua = msgData.bTaoHua
    self:dispatchEvent( { name = self.EVENT_RESULT_EXINFO_CHANGED })
end

function WinLostData:getJiDaoScore(seat)
    return self._jiDaoScore[seat] or 0
end

function WinLostData:getBaoDaoScore(seat)
    return self._baoDaoScore[seat] or 0
end

function WinLostData:getZongDaoScore(seat)
    return self._zongDaoScore[seat] or 0
end

function WinLostData:getYaPoType(seat)
    return self._yaPoType[seat] or 0
end

function WinLostData:isTaoHua(seat)
    return self._bTaoHua[seat] or false
end

function WinLostData:getSeatWind(seat)
    local gameData = CF.game:getModule("GameLayer"):getGameData()
    return gameData:getSeatWind(seat)
end

return WinLostDatas