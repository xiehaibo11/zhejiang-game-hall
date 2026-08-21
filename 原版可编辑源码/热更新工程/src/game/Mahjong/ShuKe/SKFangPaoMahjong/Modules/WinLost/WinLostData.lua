local WinLostData = CF.gameClass("WinLostData", "game.Mahjong.BasicMahjong.Modules.WinLost.WinLostData")

function WinLostData:onMsgResultExtInfo(msgData)
    self:dispatchEvent( { name = self.EVENT_RESULT_CHANGED })
    self._nWinLost = msgData.nWinLost
    self._fanNums = msgData.nGuaFe
    if self._sEndType == CF.GameDefine.HU_TYPE.ET_NONE or self._sEndType == CF.GameDefine.HU_TYPE.ET_DRAWN then
        for seat = 0, CF.roomData:getChairs() - 1 do
            local fanNames = ""
            if msgData.bIsTuiGang[seat] == true then
                self:setLostEndType(seat, CF.GameDefine.WINLOST_FAN_TYPE.REBACKKUNG)
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
        for seat = 0, CF.roomData:getChairs() - 1 do
            self._fanNums[seat] = msgData.nGuaFe[seat] or 0
            local fanNames = ""
            local tmpFan = msgData.nFanID[seat]
            if #tmpFan > 0 then
                if self._sEndType == CF.GameDefine.HU_TYPE.ET_SELF then
                    fanNames = fanNames .. "自摸 "
                elseif self._sEndType == CF.GameDefine.HU_TYPE.ET_DISCARD then
                    fanNames = fanNames .. "接炮 "
                end
            end
            for j = 1, #tmpFan do
                local wFanType = CF.GameDefine.WINLOST_FAN_TYPE[tmpFan[j]] or ""
                fanNames = fanNames .. wFanType .. " "
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

function WinLostData:onMsgFanCnt(msgData)

end

return WinLostData