local WinLostData = CF.gameClass("WinLostData", "game.Mahjong.TaiZhou.BasicTaiZhouMahjong.Modules.WinLost.WinLostData")

function WinLostData:initDatas()
    WinLostData.super.initDatas(self)
    self._nLaZiHuSeat = nil
end

function WinLostData:getLaZiHuSeat(seatid)
    return self._nLaZiHuSeat
end

function WinLostData:onMsgTaiName(msgData)
    self._nLaZiHuSeat = nil
    for seat = 0, CF.roomData:getChairs() - 1 do
        local fanNames = ""
        local dihu = msgData.nCountHu[seat] or 0
        local taishu = msgData.nCountTai[seat] or 0
        local hushu = msgData.nToTalCountHu[seat] or 0
        local pstate = msgData.nPlayerState[seat]
        if pstate == CF.GameDefine.endPlayerState.EPS_HU or
            pstate == CF.GameDefine.endPlayerState.EPS_ROBKONG or
            pstate == CF.GameDefine.endPlayerState.EPS_GANGSHANGKAIHUA then
            if dihu > 20 then
                fanNames = fanNames .. "底胡:" .. (dihu - 20) .. "胡+20胡\t"
            else
                fanNames = fanNames .. "底胡:" ..dihu .. "胡\t"
            end
            if msgData.bLazi then
                self._nLaZiHuSeat = seat
            end
        else
            fanNames = fanNames .. "底胡:" ..dihu .. "胡\t"
        end
        fanNames = fanNames .. "台数:" .. taishu .. "台\t"
        fanNames = fanNames .. "胡数:" .. hushu .. "胡"
        self._fanNames[seat] = fanNames
    end
end

return WinLostData�