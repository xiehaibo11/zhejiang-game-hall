local WinLostData = CF.gameClass("WinLostData", "game.Mahjong.JiaXing.BaseMahjong.Modules.WinLost.WinLostData")

function WinLostData:calcFan(seat, msgResult)
    if seat == self._fromSeat then
        if self._fans and self._fans[seat] then
            local fanNums = 0
            local fanNames = ""
            local isFullFan = false
            local tmpFan = self._fans[seat]
            local WinLostFanConfig = CF.gameRequire("Config.WinLostFanConfig")
            for j = 1, #tmpFan do
                local fanID = tmpFan[j].nFanID
                local fanNum = WinLostFanConfig.KW_WINLOST_FAN_NUMS[fanID] or 0
                fanNums = fanNums + (fanNum * tmpFan[j].nCount)
                local fanType = WinLostFanConfig.KW_WINLOST_FAN_TYPE[fanID] or ""
                fanNames = fanNames .. fanType .. " "
                -- 判断是否满番
                if fanID == 1102 or fanID == 1106 then
                    isFullFan = true
                end
            end
            local gameData = CF.game:getModule("GameLayer"):getGameData()
            local _, huangFanCnt = gameData:getHuangFan()
            if huangFanCnt > 0 and not isFullFan then
                fanNames = fanNames.." 黄番 "
                fanNums = fanNums + 1
            end
            if fanNums == 0 then
                fanNames = "平胡"
            end

            self._fanNums[seat] = fanNums
            self._fanNames[seat] = fanNames
        end
    end
end

return WinLostData