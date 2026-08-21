local WinLostData = CF.gameClass("WinLostData", "game.Mahjong.TaiZhou.BasicTaiZhouMahjong.Modules.WinLost.WinLostData")

function WinLostData:initDatas()
    WinLostData.super.initDatas(self)
    self._nLaZiHuSeats = {}
end

function WinLostData:getLaZiHuSeat(seatid)
    if not seatid then return nil end
    for _, v in ipairs(self._nLaZiHuSeats) do
        if v == seatid then
            return seatid
        end
    end
    return nil
end

function WinLostData:onMsgTaiName(msgData)
    self._nLaZiHuSeat = {}
    for seat = 0, CF.roomData:getChairs() - 1 do
        local fanNames = ""
        local dihu = msgData.nCountHu[seat] or 0
        local taishu = msgData.nCountTai[seat] or 0
        local hushu = msgData.nToTalCountHu[seat] or 0
        local pstate = msgData.nPlayerState[seat]
        if pstate == CF.GameDefine.endPlayerState.EPS_HU or
            pstate == CF.GameDefine.endPlayerState.EPS_ROBKONG or
            pstate == CF.GameDefine.endPlayerState.EPS_GANGSHANGKAIHUA then
            if dihu > 10 then
                fanNames = fanNames .. "胡数:" .. (dihu - 10) .. "胡+10胡\t"
            else
                fanNames = fanNames .. "胡数:" ..dihu .. "胡\t"
            end
        else
            fanNames = fanNames .. "胡数:" ..dihu .. "胡\t"
        end
        fanNames = fanNames .. "台数:" .. taishu .. "台\t"
        fanNames = fanNames .. "总胡数:" .. hushu .. "胡"
        if hushu >= 100 then
            table.insert(self._nLaZiHuSeats, seat)
        end
        self._fanNames[seat] = fanNames
    end
end

return WinLostData