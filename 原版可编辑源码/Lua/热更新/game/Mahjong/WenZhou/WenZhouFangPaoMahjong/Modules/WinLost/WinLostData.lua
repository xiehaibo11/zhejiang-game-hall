local WinLostData = CF.gameClass("WinLostData", "game.Mahjong.BasicMahjong.Modules.WinLost.WinLostData")

function WinLostData:onMsgFanCnt(msgData)
    
end

function WinLostData:onMsgResultExtInfo(msgData)
    self:dispatchEvent( { name = self.EVENT_RESULT_CHANGED })
    self._nWinLost = msgData.nWinLost
    self._fanNums = msgData.nFanScore
    if self._sEndType == CF.GameDefine.HU_TYPE.ET_NONE or self._sEndType == CF.GameDefine.HU_TYPE.ET_DRAWN then
        for seat = 0, CF.roomData:getChairs()  - 1 do
            local fanNames = ""
            if msgData.bIsTuiGang[seat] == true then
                fanNames = fanNames .. "退杠"
            end
            for j = 0, 2 do                 --最多3个杠
                local kungNum = msgData.nKongType[seat][j]
                if kungNum > 0 then
                    fanNames = fanNames .. " " .. kungNum .. CF.GameDefine.WINLOST_KUNG_TYPE[j]
                end
            end
            self._fanNames[seat] = fanNames
        end
    else
        for seat = 0, CF.roomData:getChairs()  - 1 do
            self._fanNums[seat] = msgData.nFanScore[seat] or 0
            local fanNames = ""
            local tmpFan = msgData.nFanID[seat]
            for j = 1, #tmpFan do
                CF.GameDefine.WINLOST_FAN_TYPE[tmpFan[j]] = CF.GameDefine.WINLOST_FAN_TYPE[tmpFan[j]] or ""
                fanNames = fanNames .. CF.GameDefine.WINLOST_FAN_TYPE[tmpFan[j]] .. " "
            end
            for j = 0, 2 do                 --最多3个杠
                local kungNum = msgData.nKongType[seat][j]
                if kungNum > 0 then
                    fanNames = fanNames .. " " .. kungNum .. CF.GameDefine.WINLOST_KUNG_TYPE[j]
                end
            end
            self._fanNames[seat] = fanNames
        end
    end
    self:dispatchEvent( { name = self.EVENT_RESULT_EXINFO_CHANGED })
end

return WinLostData