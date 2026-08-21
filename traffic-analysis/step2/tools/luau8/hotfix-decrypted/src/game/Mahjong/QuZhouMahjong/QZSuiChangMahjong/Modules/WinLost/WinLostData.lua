local WinLostData = CF.gameClass("WinLostData", "game.Mahjong.QuZhouMahjong.QZQuZhouBase.Modules.WinLost.WinLostData")
local WinLostFanConfig = CF.gameRequire("Config.WinLostFanConfig")

function WinLostData:onQZMsgFanCnt(msgFanCnt)
    local fanNames = ""
    local tmpFan = msgFanCnt.Fans
    local isHutype =false
    for j = 1, #tmpFan do
        if tmpFan[j].nFanID == 2600 or tmpFan[j].nFanID == 2601 or tmpFan[j].nFanID == 2602 or tmpFan[j].nFanID == 2603
        or tmpFan[j].nFanID == 2620 
        or tmpFan[j].nFanID == 2621 then
            isHutype = true
        end
    end
    for j = 1, #tmpFan do
        WinLostFanConfig.KW_WINLOST_FAN_TYPE[tmpFan[j].nFanID] = WinLostFanConfig.KW_WINLOST_FAN_TYPE[tmpFan[j].nFanID] or ""
        if  WinLostFanConfig.KW_WINLOST_FAN_TYPE[tmpFan[j].nFanID] == "" then
            fanNames = fanNames
        else
            if tmpFan[j].nFanID == 2611 and isHutype then
                fanNames = fanNames .. WinLostFanConfig.KW_WINLOST_FAN_TYPE[tmpFan[j].nFanID] .. "8" .. "番 "
            else
                fanNames = fanNames .. WinLostFanConfig.KW_WINLOST_FAN_TYPE[tmpFan[j].nFanID] .. WinLostFanConfig.KW_WINLOST_FAN_NUMS[tmpFan[j].nFanID] .. "番 "
            end
        end
    end
    self._fanNames[msgFanCnt.nSeat] = fanNames
    self._qzFanNames[msgFanCnt.nSeat] = fanNames
end

return WinLostDatau