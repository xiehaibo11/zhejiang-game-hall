local WinLostModule = CF.gameClass("WinLostModule", "game.Mahjong.BasicMahjong.Modules.WinLost.Module")
WinLostModule.EVENT_CATCHBIRD_SHOW_ANI = "EVENT_CATCHBIRD_SHOW_ANI"

function WinLostModule:ctor()
    WinLostModule.super.ctor(self)
    self._catchBirdTime = 0  --抓鸟动画时间
end

function WinLostModule:getSubXYDealList()
    local xyList = WinLostModule.super.getSubXYDealList(self)
    xyList[#xyList + 1] = { callback = handler(self, self.onMsgCatchBird), msgClass = CF.GameProtocol.msgCatchBird }
    xyList[#xyList + 1] = { callback = handler(self, self.onMsgFanCntEx), msgClass = CF.GameProtocol.msgFanCntEx }
    return xyList
end

-- 小结束
function WinLostModule:onMsgResult(msgData)
    self:getWinLostData():setDelayTime(self._catchBirdTime)
    WinLostModule.super.onMsgResult(self, msgData)
end

function WinLostModule:onMsgCatchBird(msgData)
    local birdMahs = msgData.nbirds
    self:getWinLostData():setCatchBirdMahs(msgData.nSeat, birdMahs)
    self._catchBirdTime = 2.5
    local localSeat = CF.roomData:seatToLocal(msgData.nSeat)
    self:dispatchEvent({ name = self.EVENT_CATCHBIRD_SHOW_ANI, msg = { seat = localSeat } })
end

function WinLostModule:onMsgFanCntEx(msgData)
    self:onMsgFanCnt(msgData)
    self:getWinLostData():setIsShowFan(false)
end

return WinLostModule