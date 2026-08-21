local WinLostData = CF.gameClass("WinLostData", "game.Mahjong.JiaXing.BaseMahjong.Modules.WinLost.WinLostData")

function WinLostData:calcFan(seat, msgResult)
    local gameData = CF.game:getModule("GameLayer"):getGameData()
    if self._fans and self._fans[seat] then
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
            if (fanID == 1104 or fanID==1106 or fanID == 1108) then
                isFullFan = true
            end
        end
        local bAddHuangFan = gameData:getHuangFan()
        if bAddHuangFan and not isFullFan then
            fanNames = fanNames.." 黄番 "
            fanNums = fanNums + 1
        end
        if fanNums == 0 and not isTaiTouHu then
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
        if isTaiTouHu and taiNames ~= "" and taiNums > 0 then
            if fanNames ~= "" then
                self._fanNames[seat] = string.format("%s (%s %d台)", fanNames, taiNames, taiNums)
            else
                self._fanNames[seat] = string.format("%s %d台", taiNames, taiNums)
            end
        end
    elseif gameData:getBuyScoreBySeat(seat) == 1 then
        local fanNames = ""
        if self._fanNames then
            fanNames = self._fanNames[seat] or ""
        end
        self._fanNames[seat] = fanNames .. (#(fanNames) > 0 and " " or  "") .. "买籽+1"
    end   
end

return WinLostData