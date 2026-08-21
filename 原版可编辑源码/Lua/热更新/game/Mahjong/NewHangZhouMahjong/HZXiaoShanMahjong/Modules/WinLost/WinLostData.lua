local WinLostData = CF.gameClass("WinLostData", "game.Mahjong.NewHangZhouMahjong.HangZhouMahjongBase.Modules.WinLost.WinLostData")
local WinLostFanConfig = CF.gameRequire("Config.WinLostFanConfig")

function WinLostData:initDatas()
    WinLostData.super.initDatas(self)
    self._bShowTotal = false
end

function WinLostData:onMsgFanCnt(msgData)
    self._fans[msgData.nSeat] = msgData.Fans

    local fanNums = 1
    local fanNames = ""
    local tmpFan = msgData.Fans

    for j = 1, #tmpFan do
        if fanNums == 0 then
            fanNums = fanNums + WinLostFanConfig.KW_WINLOST_FAN_NUMS[tmpFan[j].nFanID] * tmpFan[j].nCount
        else
            fanNums = fanNums * WinLostFanConfig.KW_WINLOST_FAN_NUMS[tmpFan[j].nFanID] * tmpFan[j].nCount
        end

        local wfanType = WinLostFanConfig.KW_WINLOST_FAN_TYPE[tmpFan[j].nFanID] or ""
        if wfanType == "十风" then
            fanNames = fanNames .. wfanType .. "(" .. tmpFan[j].nCount + 9 .. ")"
        else
            fanNames = fanNames .. wfanType .. " "
        end
    end

    self._fanNums[msgData.nSeat] = fanNums
    self._fanNames[msgData.nSeat] = fanNames

    self:dispatchEvent( { name = self.EVENT_RESULT_EXINFO_CHANGED })
end


return WinLostData