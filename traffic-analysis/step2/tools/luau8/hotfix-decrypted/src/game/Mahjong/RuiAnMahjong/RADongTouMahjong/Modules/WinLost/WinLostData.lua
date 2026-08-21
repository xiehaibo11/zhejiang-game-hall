local WinLostData = CF.gameClass("WinLostModule", "game.Mahjong.BasicMahjong.Modules.WinLost.WinLostData")

function WinLostData:initDatas()
    WinLostData.super.initDatas(self)
    self._raTaiNames = {}
end

function WinLostData:onMsgTaiName(msgData)
    local WinLostFanConfig = CF.gameRequire("Config.WinLostFanConfig")
    local tmpFan = msgData.fanName
    for seat = 0, CF.roomData:getChairs() - 1 do
        local fanNames = ""
        for j = 0, #tmpFan[seat]-1 do
            if tmpFan[seat][j] ~= 0 then
                local fanName = WinLostFanConfig.KW_WINLOST_FAN_TYPE[tmpFan[seat][j]] or ""
                if j == 0 then
                    fanNames = fanName
                else
                    fanNames = fanNames .. "," .. fanName
                end
            end
        end
        if  #tmpFan[seat] > 0 and #fanNames > 0 then
            fanNames = "("..fanNames..")"
        end
        self._raTaiNames[seat] = fanNames
    end
end

function WinLostData:onMsgFanName(msgResult)
    for seat = 0, CF.roomData:getChairs() - 1 do
        if not self._raTaiNames[seat] then
            self._raTaiNames[seat] = ""
        end
        local fanNames = msgResult.nCountTai[seat].."台"..self._raTaiNames[seat]..",分:"..msgResult.nToTalCountHu[seat]
        self._fanNames[seat] = fanNames
    end
end

return WinLostDatak