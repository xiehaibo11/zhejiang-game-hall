local WinLostData = CF.gameClass("WinLostData", "game.Mahjong.QuZhouMahjong.QZQuZhouBase.Modules.WinLost.WinLostData")

function WinLostData:onMsgResultExtInfo(msgData)
    self._extInfo = {}
    for i = 0, CF.roomData:getChairs() - 1 do
        if msgData.score[i] > 0 then
            self._extInfo[i] = "连续杠+"..msgData.score[i].."番"
        end
        if msgData.desc[i] == "true" then
            self._fanNames[i] = "飘财-1番"
            self._qzFanNames[i] = "飘财-1番"
        end
    end
end

function WinLostData:onQZMsgFanCnt(msgFanCnt)
    local fanNames = ""
    local tmpFan = msgFanCnt.Fans
    local WinLostFanConfig = CF.gameRequire("Config.WinLostFanConfig")
    for j = 1, #tmpFan do
        WinLostFanConfig.KW_WINLOST_FAN_TYPE[tmpFan[j].nFanID] = WinLostFanConfig.KW_WINLOST_FAN_TYPE[tmpFan[j].nFanID] or ""
        local fanNum = tmpFan[j].nCount * WinLostFanConfig.KW_WINLOST_FAN_NUMS[tmpFan[j].nFanID]
        fanNames = fanNames .. WinLostFanConfig.KW_WINLOST_FAN_TYPE[tmpFan[j].nFanID] ..fanNum.. "番 "
    end
    self._qzFanNames[msgFanCnt.nSeat] = fanNames
    self._fanNames[msgFanCnt.nSeat] = fanNames
end

return WinLostData