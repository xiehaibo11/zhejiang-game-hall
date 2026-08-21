local WinLostData = CF.gameClass("WinLostData", "game.Mahjong.BasicMahjong.Modules.WinLost.WinLostData")

function WinLostData:initDatas()
    WinLostData.super.initDatas(self)
    self._sFlowerCount = {}
    self._sTiaoCount = {}
    self._sCountTai = 0
    self._mingPaiType = {}
end

function WinLostData:onMsgEndType(msgData)
    self:setLostEndType(msgData.sSeat, msgData.sEndType)
    WinLostData.super.onMsgEndType(self, msgData)
end

function WinLostData:setFlowerCount(seat, data)
    if data then
        self._sFlowerCount[seat] = data
    end
end

function WinLostData:getFlowerCount(seat)
    return self._sFlowerCount[seat] or 0
end

function WinLostData:setTiaoCount(seat, data)
    if data then
        self._sTiaoCount[seat] = data
    end
end

function WinLostData:getTiaoCount(seat)
    return self._sTiaoCount[seat] or 0
end

function WinLostData:setTaiCount(data)
    if data then
        self._sCountTai = data
    end
end

function WinLostData:getTaiCount()
    return self._sCountTai
end

function WinLostData:setMingPaiType(seat, data)
    if data then
        self._mingPaiType[seat] = data
    end
end

function WinLostData:getMingPaiType(seat)
    return self._mingPaiType[seat]
end

return WinLostData