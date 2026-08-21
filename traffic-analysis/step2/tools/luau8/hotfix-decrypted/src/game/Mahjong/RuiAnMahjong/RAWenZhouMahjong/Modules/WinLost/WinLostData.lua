local WinLostData = CF.gameClass("WinLostData", "game.Mahjong.BasicMahjong.Modules.WinLost.WinLostData")

function WinLostData:initDatas()
    WinLostData.super.initDatas(self)
    self._jokerMoney = {}       -- 财神分
    self._kungInfo = {}         -- 杠信息
    self._followMahInfo = {}    -- 跟风信息
    self._sHuType = 0
end

function WinLostData:setJokerMoneyData(seat,data)
    self._jokerMoney[seat] = data
end

function WinLostData:getJokerMoneyData(seat)
    return self._jokerMoney[seat] or ""
end

function WinLostData:setKungInfoData(seat,data)
    self._kungInfo[seat] = data
end

function WinLostData:getKungInfoData(seat)
    return self._kungInfo[seat] or ""
end

function WinLostData:setFollowMahData(seat,data)
    self._followMahInfo[seat] = data
end

function WinLostData:getFollowMahData(seat)
    return self._followMahInfo[seat] or ""
end

function WinLostData:setWinLost(seat, score)
    self._nWinLost[seat] = score
    self:dispatchEvent( { name = self.EVENT_RESULT_EXINFO_CHANGED })
end

function WinLostData:getEndType()
    return self._sEndType
end

function WinLostData:getHuType()
    return self._sHuType
end

function WinLostData:onMsgResult(msgData)
    WinLostData.super.onMsgResult(self, msgData)
    local WinLostFanConfig = CF.gameRequire("Config.WinLostFanConfig")
    self._sHuType = msgData.nHuType
    local gameData = CF.game:getModule("GameLayer"):getGameData()
    for seat = 0, CF.roomData:getChairs()  - 1 do
        local strTempFanName
        local strFormat
        if msgData.haveMDD == true then
            if msgData.bankerSeat == seat then
                strFormat="牢庄:%d  底数:%d  买底:%d  "
                strTempFanName = string.format(strFormat,gameData:getLaoZhuangNum(),msgData.nBase,msgData.nMaiDi[seat])
            else
                strFormat="顶底:%d  "
                strTempFanName = string.format(strFormat,msgData.nDingDi[seat])
            end
        else
            if msgData.bankerSeat == seat then
                strFormat="牢庄:%d  底数:%d  "
                strTempFanName = string.format(strFormat,gameData:getLaoZhuangNum(),msgData.nBase)
            else
                strFormat = ""
                strTempFanName = strFormat
            end
        end
        local isHuSeat = false
        local huSeat = gameData:getHuSeat()
        for j = 1 , #huSeat do
            if huSeat[j] == seat then
                isHuSeat = true
            end
        end
        if isHuSeat == true then
            strFormat = "%s:"
            strTempFanName = strTempFanName .. string.format(strFormat, WinLostFanConfig.KW_WINLOST_HU_TYPE[msgData.nHuType])
            strTempFanName = strTempFanName .. self:getFanNameBySeat(seat)
        end
        self._fanNames[seat] = strTempFanName
    end
    self:dispatchEvent( { name = self.EVENT_RESULT_EXINFO_CHANGED })
end

return WinLostData�