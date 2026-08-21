local WinLostData = CF.gameClass("WinLostData", "game.Mahjong.BasicMahjong.Modules.WinLost.WinLostData")

function WinLostData:onMsgFanCnt(msgData)
    
end

function WinLostData:onMsgTaiName(msgData)
    for seat = 0, CF.roomData:getChairs() - 1 do
        self._fanNames[seat] = ""
    end
end

function WinLostData:onMsgResult(msgData)
    WinLostData.super.onMsgResult(self, msgData)
    self:onMsgTaiName(msgData)
    self:dispatchEvent( { name = self.EVENT_RESULT_EXINFO_CHANGED })
end

function WinLostData:getLaZiHuSeat(seatid)
    return nil
end

function WinLostData:getHuSeats()
    return {}
end

return WinLostData�