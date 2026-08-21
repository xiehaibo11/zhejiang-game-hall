local WinLostData = CF.gameClass("WinLostData", "game.Mahjong.NewHangZhouMahjong.HangZhouMahjongBase.Modules.WinLost.WinLostData")
local WinLostFanConfig = CF.gameRequire("Config.WinLostFanConfig")

function WinLostData:onMsgFanCnt(msgData)
    self._fans[msgData.nSeat] = msgData.Fans
    
    local fanNums = 0
    local fanNames = ""
    local tmpFan = msgData.Fans
    for j = 1, #tmpFan do
        if tmpFan[j].nFanID ~= 1027 then
            fanNums = fanNums + tmpFan[j].nCount * WinLostFanConfig.KW_WINLOST_FAN_NUMS[tmpFan[j].nFanID]
            if tmpFan[j].nFanID ~= 1026 then
                local wFanType = WinLostFanConfig.KW_WINLOST_FAN_TYPE[tmpFan[j].nFanID] or ""
                fanNames = fanNames .. wFanType .. " "
            end
        end
    end

    self._fanNums[msgData.nSeat] = fanNums
    self._fanNames[msgData.nSeat] = fanNames

    self:dispatchEvent( { name = self.EVENT_RESULT_EXINFO_CHANGED })
end


return WinLostData�