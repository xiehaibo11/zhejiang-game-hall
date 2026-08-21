local WinLostData = CF.gameClass("WinLostData", "game.Mahjong.QuZhouMahjong.QZQuZhouBase.Modules.WinLost.WinLostData")
local WinLostFanConfig = CF.gameRequire("Config.WinLostFanConfig")

function WinLostData:onQZMsgFanCnt(msgFanCnt)
    local fanNames = ""
    local tmpFan = msgFanCnt.Fans
    for j = 1, #tmpFan do
        WinLostFanConfig.KW_WINLOST_FAN_TYPE[tmpFan[j].nFanID] = WinLostFanConfig.KW_WINLOST_FAN_TYPE[tmpFan[j].nFanID] or ""
        if WinLostFanConfig.KW_WINLOST_FAN_TYPE[tmpFan[j].nFanID] ~= "" then
            if tmpFan[j].nFanID == 2909 or tmpFan[j].nFanID == 2914 then
                fanNames = fanNames .. WinLostFanConfig.KW_WINLOST_FAN_TYPE[tmpFan[j].nFanID] .. (math.pow(WinLostFanConfig.KW_WINLOST_FAN_NUMS[tmpFan[j].nFanID], tmpFan[j].nCount)) .. "番 "
            else
                fanNames = fanNames .. WinLostFanConfig.KW_WINLOST_FAN_TYPE[tmpFan[j].nFanID] .. (WinLostFanConfig.KW_WINLOST_FAN_NUMS[tmpFan[j].nFanID] * tmpFan[j].nCount) .. "番 "        end
        end
    end
    self._fanNames[msgFanCnt.nSeat] = fanNames
    self._qzFanNames[msgFanCnt.nSeat] = fanNames
end

return WinLostData