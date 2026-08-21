local WinLostData = CF.gameClass("WinLostData", "game.Mahjong.JiaXing.BaseMahjong.Modules.WinLost.WinLostData")

function WinLostData:calcFan(seat, msgResult)
    local gameData = CF.game:getModule("GameLayer"):getGameData()
    if seat == self._fromSeat then
        if self._fans and self._fans[seat] then
            local _is2PGame = CF.roomData:is2PGame()
            local fanNums = 0
            local taiNums = 0
            local taiNames = ""
            local fanNames = ""
            local isFullFan = false
            local tmpFan = self._fans[seat]
            local isTaiTouHu = CF.roomData:getIsTaiTouHu()
            local WinLostFanConfig = CF.gameRequire("Config.WinLostFanConfig")
            for j=1, #tmpFan do
                if isTaiTouHu then     --抬头胡（需要计算台数和番数）
                    -- 计算台数
                    WinLostFanConfig.TAIPOINT[tmpFan[j].nFanID] = WinLostFanConfig.TAIPOINT[tmpFan[j].nFanID] or 0
                    taiNums = taiNums + (WinLostFanConfig.TAIPOINT[tmpFan[j].nFanID] * tmpFan[j].nCount)
                    WinLostFanConfig.TAITYPE[tmpFan[j].nFanID] = WinLostFanConfig.TAITYPE[tmpFan[j].nFanID] or ""
                    taiNames = taiNames .. WinLostFanConfig.TAITYPE[tmpFan[j].nFanID] .. " "
                    -- 计算番数
                    WinLostFanConfig.KW_WINLOST_TAI_FAN_NUMS[tmpFan[j].nFanID] = WinLostFanConfig.KW_WINLOST_TAI_FAN_NUMS[tmpFan[j].nFanID] or 0
                    fanNums = fanNums + (WinLostFanConfig.KW_WINLOST_TAI_FAN_NUMS[tmpFan[j].nFanID] * tmpFan[j].nCount)
                    WinLostFanConfig.KW_WINLOST_TAI_FAN_TYPE[tmpFan[j].nFanID] = WinLostFanConfig.KW_WINLOST_TAI_FAN_TYPE[tmpFan[j].nFanID] or ""
                    fanNames = fanNames .. WinLostFanConfig.KW_WINLOST_TAI_FAN_TYPE[tmpFan[j].nFanID] .. " "
                else    -- 非抬头胡（仅计算番数即可）
                    WinLostFanConfig.KW_WINLOST_FAN_NUMS[tmpFan[j].nFanID] = WinLostFanConfig.KW_WINLOST_FAN_NUMS[tmpFan[j].nFanID] or 0
                    fanNums = fanNums + (WinLostFanConfig.KW_WINLOST_FAN_NUMS[tmpFan[j].nFanID] * tmpFan[j].nCount)
                    WinLostFanConfig.KW_WINLOST_FAN_TYPE[tmpFan[j].nFanID] = WinLostFanConfig.KW_WINLOST_FAN_TYPE[tmpFan[j].nFanID] or ""
                    fanNames = fanNames .. WinLostFanConfig.KW_WINLOST_FAN_TYPE[tmpFan[j].nFanID] .. " "
                end
                local fanID = tmpFan[j].nFanID
                -- 判断是否满番 天胡(1104)地胡(1106)
                if (not _is2PGame) and (fanID == 1104 or fanID==1106 or fanID == 1108) then
                    isFullFan = true
                end
                if (_is2PGame) and (fanID == 43 or fanID==1104 or fanID == 1108) then
                    isFullFan = true
                end
            end
            local bAddHuangFan, huangFanCnt = gameData:getHuangFan()
            if (not _is2PGame) and bAddHuangFan and not isFullFan then
                fanNames = fanNames.." 黄番 "
                fanNums = fanNums + 1
            end
            if (not _is2PGame) and fanNums == 0 and not isTaiTouHu then
                fanNames = "平胡"
            end

            if _is2PGame and huangFanCnt>0 and not isFullFan then
                fanNames = fanNames.." 黄番 "
                fanNums = fanNums + 1
            end
            if _is2PGame and fanNums == 0 then
                fanNames = "平胡"
            end

            if msgResult.huType == CF.GameDefine.HU_TYPE.TAKE_SELF then
                fanNames = "自摸  " .. fanNames
            elseif msgResult.huType == CF.GameDefine.HU_TYPE.ROB_KONG then
                fanNames = "抢杠  " .. fanNames
            end

            if gameData:getBuyScoreBySeat(seat) == 1 then
                fanNames = fanNames .. " 买籽+1"
            end

            if msgResult.hufan >= 0 then
                fanNums = msgResult.hufan
            end

            self._fanNums[seat] = fanNums
            self._fanNames[seat] = fanNames
        end
    elseif gameData:getBuyScoreBySeat(seat) == 1 then
        local fanNames = ""
        if self._fanNames then
            fanNames = self._fanNames[seat] or ""
        end
        self._fanNames[seat] = fanNames .. (#(fanNames) > 0 and " " or  "") .. "买籽+1"
    end
end

return WinLostData[