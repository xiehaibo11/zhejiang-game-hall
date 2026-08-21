local WinLostData = CF.gameClass("WinLostModule", "game.Mahjong.BasicMahjong.Modules.WinLost.WinLostData")

function WinLostData:onMsgFanCnt(msgData)
    self._fans[msgData.nSeat] = msgData.Fans
    local WinLostFanConfig = CF.gameRequire("Config.WinLostFanConfig")
    local fanNums = 0
    local fanNames = ""
    local tmpFan = msgData.Fans
    for j = 1, #tmpFan do
        local tFanName = WinLostFanConfig.KW_WINLOST_FAN_TYPE[tmpFan[j].nFanID] or ""
        local tFanCount = tmpFan[j].nCount
        local tFanNum = tmpFan[j].nFanNum
        local fanNum = tmpFan[j].nFanNum or 0
        fanNums = fanNums + (fanNum * tmpFan[j].nCount)
        local tFanStr = tFanName .. ":" .. (tFanCount * tFanNum)
        fanNames = fanNames .. tFanStr
    end
    if msgData.nFanNum > 0 then
        fanNums = msgData.nFanNum
    end
    self._fanNums[msgData.nSeat] = fanNums
    self._fanNames[msgData.nSeat] = fanNames
    self:dispatchEvent({ name = self.EVENT_RESULT_EXINFO_CHANGED })
end

return WinLostData	