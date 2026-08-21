local WinLostData = CF.gameClass("WinLostData", "game.Mahjong.TaiZhou.BasicTaiZhouMahjong.Modules.WinLost.WinLostData")

function WinLostData:initDatas()
    WinLostData.super.initDatas(self)
    self._huSeats = {}
end

function WinLostData:getHuSeats()
    return self._huSeats
end

function WinLostData:onMsgTaiName(msgData)
    for seat = 0, CF.roomData:getChairs() - 1 do
        local fanNames = ""
        local dihu = msgData.nCountHu[seat] or 0
        local taishu = msgData.nCountTai[seat] or 0
        local hushu = msgData.nToTalCountHu[seat] or 0
        local pstate = msgData.nPlayerState[seat]
        if pstate == CF.GameDefine.endPlayerState.EPS_HU or
            pstate == CF.GameDefine.endPlayerState.EPS_ROBKONG or
            pstate == CF.GameDefine.endPlayerState.EPS_GANGSHANGKAIHUA then
            fanNames = fanNames .. "番数:+" ..dihu .. "\t"
            fanNames = fanNames .. "买马:+" .. taishu .. "\t"
            fanNames = fanNames .. "总胡数:+" .. hushu
            table.insert(self._huSeats, seat)
        end

        self._fanNames[seat] = fanNames
    end
end

return WinLostData�