local WinLostData = CF.gameClass("WinLostModule", "game.Mahjong.BasicMahjong.Modules.WinLost.WinLostData")

function WinLostData:onMsgFanCnt(msgData)
    local WinLostFanConfig = CF.gameRequire("Config.WinLostFanConfig")
    self._fans[msgData.nSeat] = msgData.Fans

    local fanNums = 0
    local fanNames = "底龙×6 "
    local fanflag = false
    local isQuanjiao = false
    local tmpFan = msgData.Fans
    for j = 1, #tmpFan do

        WinLostFanConfig.KW_WINLOST_FAN_NUMS[tmpFan[j].nFanID] = WinLostFanConfig.KW_WINLOST_FAN_NUMS[tmpFan[j].nFanID] or 0
        fanNums = fanNums + (WinLostFanConfig.KW_WINLOST_FAN_NUMS[tmpFan[j].nFanID] * tmpFan[j].nCount)
        WinLostFanConfig.KW_WINLOST_FAN_TYPE[tmpFan[j].nFanID] = WinLostFanConfig.KW_WINLOST_FAN_TYPE[tmpFan[j].nFanID] or ""

        local thisfan

        if tmpFan[j].nCount * WinLostFanConfig.KW_WINLOST_FAN_NUMS[tmpFan[j].nFanID] >= 100 then
            thisfan = WinLostFanConfig.KW_WINLOST_FAN_TYPE[tmpFan[j].nFanID] .. " "
        else
            thisfan = WinLostFanConfig.KW_WINLOST_FAN_TYPE[tmpFan[j].nFanID] .. "×" .. tostring(tmpFan[j].nCount * WinLostFanConfig.KW_WINLOST_FAN_NUMS[tmpFan[j].nFanID]) .. " "
        end

        local upper = 9
        if j <= upper then
            fanNames = fanNames .. thisfan
        else
            fanflag = true
        end

        if tmpFan[j].nCount * WinLostFanConfig.KW_WINLOST_FAN_NUMS[tmpFan[j].nFanID] >= 100 then
            isQuanjiao = true
        end
    end
    if not fanflag and isQuanjiao then
        fanNames = fanNames .. "全缴"
    end
    fanNums = fanNums + 6
    self._fanNums[msgData.nSeat] = fanNums
    self._fanNames[msgData.nSeat] = fanNames

    self:dispatchEvent({ name = self.EVENT_RESULT_EXINFO_CHANGED })
end

return WinLostData+