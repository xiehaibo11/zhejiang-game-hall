local WinLostData = CF.gameClass("WinLostData", "game.Mahjong.TaiZhou.BasicTaiZhouMahjong.Modules.WinLost.WinLostData")

function WinLostData:initDatas()
    WinLostData.super.initDatas(self)
    self._huSeats = {}
end

function WinLostData:getHuSeats(seatid)
    return self._huSeats
end

function WinLostData:onMsgTaiName(msgData)
    for seat = 0, CF.roomData:getChairs() - 1 do
        local fanNames = ""
        local nBaseScore = msgData.nBaseScore[seat]
        local nKongScore = msgData.nKongScore[seat]
        local nMKongTime = msgData.nMKongTime[seat]
        local nAKongTime = msgData.nAKongTime[seat]
        fanNames = fanNames .. "下弹:" ..nBaseScore .. "\t"
        fanNames = fanNames .. "明杠:" ..nMKongTime .. "次\t"
        fanNames = fanNames .. "暗杠:" ..nAKongTime .. "次\t"
        fanNames = fanNames .. "杠分:" ..nKongScore .. "分"

        self._fanNames[seat] = fanNames
    end
end

return WinLostData