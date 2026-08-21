local GameData = CF.gameClass("GameData", "game.Mahjong.NingBoMahjong.NBMahjongBase.Modules.GameLayer.GameData")

GameData.EVENT_MAHLAYER_GAIPAI = "EVENT_MAHLAYER_GAIPAI"

function GameData:initEveryTimesDatas()
    GameData.super.initEveryTimesDatas(self)
    self._firstQIGuoHu = true
    self._firstOutGuohu = true
end

function GameData:setFirstQIGuoHu(isFirstQIGuoHu)
    self._firstQIGuoHu = isFirstQIGuoHu
end

function GameData:isFirstQIGuoHu()
    return self._firstQIGuoHu or false
end

function GameData:setFirstOutGuoHu(isFirstOutGuohu)
    self._firstOutGuohu = isFirstOutGuohu
end

function GameData:isFirstOutGuoHu()
    return self._firstOutGuohu or false
end

function GameData:initMahData()
    GameData.super.initMahData(self)
    self._gaipaiSeat = -1
end
---------------------------------------------------------
--清楚所有的数据
---------------------------------------------------------
function GameData:clearMahData(seat)
    GameData.super.clearMahData(self, seat)
    self:clearGaiPaiSeat()
end

function GameData:setGaiPaiSeat(seat)
    self._gaipaiSeat = seat or -1
    local data = {}
    if self._gaipaiSeat ~= -1 then
        data.localSeat = CF.roomData:seatToLocal(self._gaipaiSeat)
        self:dispatchEvent({ name = self.EVENT_MAHLAYER_GAIPAI, data = data })
    end
end

function GameData:getGaiPaiSeat()
    return self._gaipaiSeat
end

function GameData:clearGaiPaiSeat()
    self._gaipaiSeat = -1
end

return GameData�