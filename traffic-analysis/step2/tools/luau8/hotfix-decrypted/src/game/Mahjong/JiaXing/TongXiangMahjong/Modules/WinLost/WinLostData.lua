local WinLostData = CF.gameClass("WinLostData", "game.Mahjong.JiaXing.BaseMahjong.Modules.WinLost.WinLostData")

function WinLostData:onMsgFanCnt(msgData)
    WinLostData.super.onMsgFanCnt(self, msgData)
    self:setIsShowFan(false)
end

function WinLostData:calcFan(seat, msgResult)
    if seat == self._fromSeat then
        if self._fans and self._fans[seat] then
            local fanNums = 1
            local fanNames = ""
            local huangfanCnt = 0
            local tmpFan = self._fans[seat]
            local flag = 0
            local WinLostFanConfig = CF.gameRequire("Config.WinLostFanConfig")
            for j = 1, #tmpFan do
                WinLostFanConfig.KW_WINLOST_FAN_NUMS[tmpFan[j].nFanID] = WinLostFanConfig.KW_WINLOST_FAN_NUMS[tmpFan[j].nFanID] or 0
                fanNums = fanNums * (WinLostFanConfig.KW_WINLOST_FAN_NUMS[tmpFan[j].nFanID] * tmpFan[j].nCount)

                local fanID = tmpFan[j].nFanID
                -- 黄番数 黄番、双色子、大于10 均算黄番
                if fanID==1025 or fanID==1026 or fanID==1028 then
                    huangfanCnt = huangfanCnt + 1
                elseif fanID == 1010 or fanID == 1011 or fanID == 1012 or fanID == 1013 then
                    for _, v in ipairs(tmpFan) do
                        if flag == 0 and WinLostFanConfig.KW_FAN_NAME[fanID] and WinLostFanConfig.KW_FAN_NAME[fanID][v.nFanID] then
                            fanNames = fanNames .. WinLostFanConfig.KW_FAN_NAME[fanID][v.nFanID].name
                            flag = WinLostFanConfig.KW_FAN_NAME[fanID][v.nFanID].flag
                        end
                    end
                    if flag == 0 then
                        WinLostFanConfig.KW_WINLOST_FAN_TYPE[fanID] = WinLostFanConfig.KW_WINLOST_FAN_TYPE[fanID] or ""
                        fanNames = fanNames .. WinLostFanConfig.KW_WINLOST_FAN_TYPE[fanID] .. " "
                    end
                elseif not (fanID == 59 and flag ~= 0) and 
                    not ((fanID == 56 or fanID == 55 or fanID == 58 ) and flag == 1) and 
                    not ((fanID == 1031 or fanID == 1020 ) and flag == 3) then
                    -- 显示牌型/番种名字 
                    WinLostFanConfig.KW_WINLOST_FAN_TYPE[fanID] = WinLostFanConfig.KW_WINLOST_FAN_TYPE[fanID] or ""
                    fanNames = fanNames .. WinLostFanConfig.KW_WINLOST_FAN_TYPE[fanID] .. " "
                    if (fanID == 56 or fanID == 55 or fanID == 58 ) then
                        flag = 5
                    end
                end
            end
            if huangfanCnt == 1 then
                fanNames = fanNames.." 黄番"
            elseif huangfanCnt == 2 then
                fanNames = fanNames.." 二黄番"
            elseif huangfanCnt == 3 then
                fanNames = fanNames.." 三黄番"
            end

            if fanNums == 0 or fanNames == "" or fanNums == 1 then
                fanNames = "平胡"
            end

            if (msgResult.mKongFen[seat] + msgResult.tKongFen[seat]) > 0 then
                fanNames = fanNames .. " 明杠:" .. (msgResult.mKongFen[seat] + msgResult.tKongFen[seat])
            end
            if msgResult.cKongFen[seat] > 0 then
                fanNames = fanNames .. " 暗杠:" .. (msgResult.cKongFen[seat])
            end

            self._fanNums[seat] = fanNums
            self._fanNames[seat] = fanNames
        end
    end
end

return WinLostData�