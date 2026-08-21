local WinLostData = CF.gameClass("WinLostData", "game.Mahjong.BasicMahjong.Modules.WinLost.WinLostData")

function WinLostData:initDatas()
    WinLostData.super.initDatas(self)
    self._extInfo = {}
    self._qzFanNames = {}
end

function WinLostData:onMsgResultExtInfo(msgData)
    self._extInfo = {}
    for i = 0, CF.roomData:getChairs() - 1 do
        self._extInfo[i] = msgData.desc[i]
    end
end

function WinLostData:addExtInfoToFanNames()
    for seat = 0, CF.roomData:getChairs() - 1 do
        self._fanNames[seat] = ""
        if self._qzFanNames[seat] and #self._qzFanNames[seat] > 0 then
            self._fanNames[seat] = self._qzFanNames[seat]
        end
        if self._extInfo[seat] and #self._extInfo[seat] > 0 then
            if #self._fanNames[seat] and #self._fanNames[seat] > 0 then
                self._fanNames[seat] = self._fanNames[seat] .. "  " .. self._extInfo[seat]
            else
                self._fanNames[seat] = self._extInfo[seat]
            end
        end
    end
end

function WinLostData:onQZMsgFanCnt(msgFanCnt)
end

function WinLostData:updateGameResultUI()
    self:dispatchEvent( { name = self.EVENT_RESULT_EXINFO_CHANGED })
end

return WinLostData