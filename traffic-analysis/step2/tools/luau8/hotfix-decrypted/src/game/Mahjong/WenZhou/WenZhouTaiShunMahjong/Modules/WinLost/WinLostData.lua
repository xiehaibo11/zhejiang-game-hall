local WinLostData = CF.gameClass("WinLostData", "game.Mahjong.BasicMahjong.Modules.WinLost.WinLostData")
local WinLostFanConfig = CF.gameRequire("Config.WinLostFanConfig")

function WinLostData:initDatas()
    WinLostData.super.initDatas(self)
    self._zhaMaMahs = {}
    self._realcnt = 0

    self._isZhaMa = false
    self._zhongMaCnt = {}

    self._myFanNames = {}
    self._gangNames = {}
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

function WinLostData:setIsZhaMa(isZhaMa)
    self._isZhaMa = isZhaMa
end

function WinLostData:setZhaMaCnt(index, cnt)
    self._zhongMaCnt[index] = cnt
end

function WinLostData:onMsgFanCnt(msgData)
    self._fans[msgData.nSeat] = msgData.Fans
    
    local fanNums = 0
    local fanNames = ""
    local tmpFan = msgData.Fans
    for j = 1, #tmpFan do
        local wFanNum = WinLostFanConfig.KW_WINLOST_FAN_NUMS[tmpFan[j].nFanID] or 0
        fanNums = fanNums + (wFanNum * tmpFan[j].nCount)

        local wFanName = WinLostFanConfig.KW_WINLOST_FAN_TYPE[tmpFan[j].nFanID] or ""
        if j ~= #tmpFan then
            fanNames = fanNames .. wFanName .. ", "
        else
            fanNames = fanNames .. wFanName
        end
    end
    
    self._fanNums[msgData.nSeat] = fanNums
    
    for seat = 0 , CF.roomData:getChairs() - 1 do
        if seat == msgData.nSeat then
            self._myFanNames[seat] = fanNames
        end
    end
    
    for seat = 0 , CF.roomData:getChairs() - 1 do
        local myFanNames = self._myFanNames[seat]
        if myFanNames == nil then
            myFanNames = ""
        end
        if self._gangNames[seat] and self._gangNames[seat]~="" and myFanNames ~= "" then
            fanNames = myFanNames .. ", " .. self._gangNames[seat]
        else
            fanNames = myFanNames .. (self._gangNames[seat] or "")
        end
        self._fanNames[seat] = fanNames
    end
end

function WinLostData:onMsgGangNums(msgData)
    for seat = 0 , CF.roomData:getChairs() - 1 do
        local gangNames = ""
        for j = 0 , 2 do
            local nGangNum = msgData.nKongCount[seat][j]
            if nGangNum > 0 then
                gangNames = gangNames .. nGangNum .. WinLostFanConfig.KW_WINLOST_KUNG_TYPE[j] .. ", "
            end
        end
        gangNames = string.sub(gangNames,1,string.len(gangNames) - 2)
        self._gangNames[seat] = gangNames
    end
end

function WinLostData:dealFanInfo(msgData)
    local endType = self:getEndType()
    if endType == CF.GameDefine.HU_TYPE.ET_NONE or endType == CF.GameDefine.HU_TYPE.ET_DRAWN then
        for seat = 0, CF.roomData:getChairs()-1 do
            self._fanNames[seat] = self._gangNames[seat] or ""
        end
    else
        self:setDelayTime(2.5)
        for seat = 0,CF.roomData:getChairs()-1 do
            local fanText = self._fanNames[seat] or ""
            if self._zhongMaCnt[seat] and self._zhongMaCnt[seat] > 0 then
                fanText = fanText .. " 中" .. self._zhongMaCnt[seat] .. " 鸟"
            end
            self._fanNames[seat] = fanText
        end
    end
end

return WinLostData>