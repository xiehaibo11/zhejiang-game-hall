local WinLostData = CF.gameClass("WinLostData", "game.Mahjong.BasicMahjong.Modules.WinLost.WinLostData")

function WinLostData:initDatas()
    WinLostData.super.initDatas(self)
    self._zhaMaMahs = {}
    self._realcnt = 0
    self._gangFens = {}
end

function WinLostData:setZhaMaMahs(zhaMaMahs, realcnt)
    self._zhaMaMahs = zhaMaMahs
    self._realcnt = realcnt
end

function WinLostData:getZhaMaMahs()
    return self._zhaMaMahs
end

function WinLostData:getZhaMaRealCnt()
    return self._realcnt
end

function WinLostData:setGangFens(gangFens)
    self._gangFens = gangFens
end

function WinLostData:getGangFens()
    return self._gangFens
end

function WinLostData:onMsgFanCnt(msgData)
    local WinLostFanConfig = CF.gameRequire("Config.WinLostFanConfig")
    self._fans[msgData.nSeat] = msgData.Fans
    
    local fanNums = 0
    local fanNames = ""
    local tmpFan = msgData.Fans
    for j = 1, #tmpFan do
        if fanNums == 0 then
            fanNums = 1
        end
        local wNum = WinLostFanConfig.KW_WINLOST_FAN_NUMS[tmpFan[j].nFanID] or 1
        fanNums = fanNums * (wNum * tmpFan[j].nCount)

        local wFanName = WinLostFanConfig.KW_WINLOST_FAN_TYPE[tmpFan[j].nFanID] or ""
        fanNames = fanNames .. wFanName
    end
    
    self._fanNums[msgData.nSeat] = fanNums
    self._fanNames[msgData.nSeat] = fanNames
end

function WinLostData:dealFanInfo(msgData)
    local WinLostFanConfig = CF.gameRequire("Config.WinLostFanConfig")
    local endType = self:getEndType()
    if endType == CF.GameDefine.HU_TYPE.ET_NONE or endType == CF.GameDefine.HU_TYPE.ET_DRAWN then
        for seat = 0, CF.roomData:getChairs()-1 do
            local fanNames = ""
            for j = 0 , 2 do
                local nKungNum = msgData.nKongType[seat][j]
                if nKungNum > 0  then
                    fanNames = fanNames .. " ".. nKungNum ..WinLostFanConfig.KW_WINLOST_KUNG_TYPE[j]
                end
            end
            self._fanNames[seat] = fanNames
        end
    else
        self:setDelayTime(2.5)
        for seat = 0,CF.roomData:getChairs()-1 do
            local fanNames = ""
            local tmpFan = msgData.nFanID[seat]
            for j = 1, #tmpFan do
                local wFan = WinLostFanConfig.KW_WINLOST_FAN_TYPE[tmpFan[j]] or ""
                fanNames = fanNames .. wFan .. " "
            end
            local isfirsttime = true
            for j = 0 , 2 do
                local nKungNum = msgData.nKongType[seat][j]
                if nKungNum > 0  then
                    if isfirsttime == true and fanNames ~= "" then
                        fanNames = fanNames .. ","
                        isfirsttime = false
                    end
                    fanNames = fanNames .. " ".. nKungNum ..WinLostFanConfig.KW_WINLOST_KUNG_TYPE[j]
                end
            end
            local zhongmahnum = msgData.nZhongMaCount[seat]
            if zhongmahnum > 0 then
                if fanNames ~= "" then
                    fanNames = fanNames .. ","
                end
                fanNames = fanNames .. "中码" .. zhongmahnum
            end
            self._fanNames[seat] = fanNames
        end
    end
end

return WinLostData