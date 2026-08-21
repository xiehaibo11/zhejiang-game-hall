local WinLostData = CF.gameClass("WinLostData", "game.Mahjong.NewHangZhouMahjong.HangZhouMahjongBase.Modules.WinLost.WinLostData")
local WinLostFanConfig = CF.gameRequire("Config.WinLostFanConfig")

function WinLostData:onMsgFanCnt(msgData)
    self._fans[msgData.nSeat] = msgData.Fans

    local fanNums = 0
    local fanNames = ""
    local tmpFan = msgData.Fans
    for j = 1, #tmpFan do
        local winFan = WinLostFanConfig.KW_WINLOST_FAN_TYPE[tmpFan[j].nFanID] or ""
        local winFNum = WinLostFanConfig.KW_WINLOST_FAN_NUMS[tmpFan[j].nFanID] * tmpFan[j].nCount
        if winFan == "十风" then
            winFNum = WinLostFanConfig.KW_WINLOST_FAN_NUMS[tmpFan[j].nFanID] ^ tmpFan[j].nCount
        end
        if fanNums == 0 then
            fanNums = fanNums + winFNum
        else
            fanNums = fanNums * winFNum
        end

        fanNames = fanNames .. winFan .. " "
    end

    self._fanNums[msgData.nSeat] = fanNums
    self._fanNames[msgData.nSeat] = fanNames

    self:dispatchEvent({ name = self.EVENT_RESULT_EXINFO_CHANGED })
end

return WinLostData[