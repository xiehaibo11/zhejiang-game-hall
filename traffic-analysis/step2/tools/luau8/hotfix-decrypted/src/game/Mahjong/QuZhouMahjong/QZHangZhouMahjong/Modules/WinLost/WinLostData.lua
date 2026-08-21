local WinLostData = CF.gameClass("WinLostData", "game.Mahjong.QuZhouMahjong.QZQuZhouBase.Modules.WinLost.WinLostData")
local WinLostFanConfig = CF.gameRequire("Config.WinLostFanConfig")

function WinLostData:onQZMsgFanCnt(msgData)
    local fanNames = ""
    local tmpFan = msgData.Fans
    for j = 1, #tmpFan do
        WinLostFanConfig.KW_WINLOST_FAN_TYPE[tmpFan[j].nFanID] = WinLostFanConfig.KW_WINLOST_FAN_TYPE[tmpFan[j].nFanID] or ""
        fanNames = fanNames .. WinLostFanConfig.KW_WINLOST_FAN_TYPE[tmpFan[j].nFanID] .. WinLostFanConfig.KW_WINLOST_FAN_NUMS[tmpFan[j].nFanID] * tmpFan[j].nCount .. "番 "
    end
    self._fanNames[msgData.nSeat] = fanNames
    self._qzFanNames[msgData.nSeat] = fanNames
end

return WinLostData�