local WinLostData = CF.gameClass("WinLostData", "game.Mahjong.QuZhouMahjong.QZQuZhouBase.Modules.WinLost.WinLostData")
local WinLostFanConfig = CF.gameRequire("Config.WinLostFanConfig")

function WinLostData:onQZMsgFanCnt(msgFanCnt)
    local fanNames = ""
    local tmpFan = msgFanCnt.Fans
    local _strGameRule = CF.roomData:getGameRule()
    for j = 1, #tmpFan do
        WinLostFanConfig.KW_WINLOST_FAN_TYPE[tmpFan[j].nFanID] = WinLostFanConfig.KW_WINLOST_FAN_TYPE[tmpFan[j].nFanID] or ""
        if string.find(_strGameRule,"龙游") ~= nil then
            fanNames = fanNames .. WinLostFanConfig.KW_WINLOST_FAN_TYPE[tmpFan[j].nFanID] .. (WinLostFanConfig.KW_WINLOST_FAN_NUMS[tmpFan[j].nFanID] * tmpFan[j].nCount) .. "番 "
        elseif string.find(_strGameRule,"不") ~= nil then
            fanNames = fanNames .. WinLostFanConfig.KW_WINLOST_FAN_TYPE[tmpFan[j].nFanID] .. (WinLostFanConfig.KW_WINLOST_FAN_NUMS_BEIXIANG_WU_FENG[tmpFan[j].nFanID] * tmpFan[j].nCount) .. "番 "
        else
            fanNames = fanNames .. WinLostFanConfig.KW_WINLOST_FAN_TYPE[tmpFan[j].nFanID] .. (WinLostFanConfig.KW_WINLOST_FAN_NUMS_BEIXIANG[tmpFan[j].nFanID] * tmpFan[j].nCount) .. "番 "
        end
    end
    self._fanNames[msgFanCnt.nSeat] = fanNames
    self._qzFanNames[msgFanCnt.nSeat] = fanNames
end

return WinLostData