local WinLostData = CF.gameClass("WinLostData", "game.Mahjong.TaiZhou.BasicTaiZhouMahjong.Modules.WinLost.WinLostData")

function WinLostData:initDatas()
    WinLostData.super.initDatas(self)
    self._zhuaGangTouType = 0
    self._zhuaGangTouMahs = {}
    self._huSeats = {}
    self._discardSeat = -1
end

function WinLostData:onMsgZhuaGanTouResult(msgData)
    self._zhuaGangTouType = msgData.mahType
    if msgData.mahType == CF.GameDefine.ZGTType.ZHUA_GAN_TOU_EVERY_JIA then
        self._zhuaGangTouMahs = msgData.everyMahList
    else
        self._zhuaGangTouMahs = msgData.singleMahList
    end
    self._huSeats = msgData.huSeat
    self._discardSeat = msgData.disCardSeat
end

function WinLostData:onMsgFanCntEx(msgData)
    local fans = msgData.Fans or {}
    local huSeats = msgData.huSeats or {}
    for seat, v in pairs(huSeats) do
        self._fanNames[seat - 1] = self._fanNames[seat - 1] or ""
        fans[seat] = fans[seat] or {}
        if v then
            local fanNames = ""
            for _, fan in pairs(fans[seat]) do
                local fanName = CF.GameDefine.FAN_TYPE_NAME[fan.nFanID] or ""
                fanNames = fanNames .. fanName
            end
            if fanNames == "" then
                fanNames = CF.GameDefine.FAN_TYPE_NAME[0]
            end
            self._fanNames[seat - 1] = "冲数：" .. fanNames .. "\t"
        end
    end
end

function WinLostData:onMsgTaiName(msgData)
    for seat = 0, CF.roomData:getChairs() - 1 do
        self._fanNames[seat] = self._fanNames[seat] or ""
        local fanNames = ""
        local zhuaChong = msgData.nCountHu[seat] or 0
        local taishu = msgData.nCountTai[seat] or 0
        local hushu = msgData.nToTalCountHu[seat] or 0
        local pstate = msgData.nPlayerState[seat]
        if self._zhuaGangTouType == CF.GameDefine.ZGTType.ZHUA_GAN_TOU_EVERY_JIA then
            fanNames = fanNames ..self:getAllBaseChongStr(taishu, hushu, pstate)
            fanNames = fanNames .. self:getZhuGangTouStrByMahs(seat)
            fanNames = fanNames .. self:getZhuaChongStr(seat + 1, zhuaChong)
        else
            fanNames = fanNames .. self:getZhuaChongStr(seat + 1, zhuaChong)
            fanNames = fanNames ..self:getAllBaseChongStr(taishu, hushu, pstate)
        end
        self._fanNames[seat] = self._fanNames[seat] .. fanNames
    end
end

function WinLostData:getAllBaseChongStr(taishu, total, pstate)
    local str = ""
    if self._zhuaGangTouType == CF.GameDefine.ZGTType.ZHUA_GAN_TOU_EVERY_JIA then
        if pstate == CF.GameDefine.endPlayerState.EPS_NULL or pstate == CF.GameDefine.endPlayerState.EPS_DISCARD then
            return ""
        end
        str = "总计:" .. math.pow(2, taishu) .. "\t"
    else
        if total > 0 then
            str = "总计:" .. total .. "\t"
        end
    end
    return str
end

function WinLostData:getZhuaChongStr(seat, zhuaChong)
    local str = ""
    if self._zhuaGangTouType == CF.GameDefine.ZGTType.ZHUA_GAN_TOU_EVERY_JIA then
        str = "抓冲:" .. zhuaChong .. "\t"
    elseif self._zhuaGangTouType == CF.GameDefine.ZGTType.ZHUA_GAN_TOU_DAN or self._zhuaGangTouType == CF.GameDefine.ZGTType.ZHUA_GAN_TOU_HU_JIA_SIX then
        if self._huSeats[seat] then
            str = "抓冲:" .. zhuaChong .. "\t"
        end
    end
    return str
end

function WinLostData:getZhuGangTouStrByMahs(seat)
    if self._zhuaGangTouType ~= CF.GameDefine.ZGTType.ZHUA_GAN_TOU_EVERY_JIA or next(self._zhuaGangTouMahs) == nil then
        return ""
    end
    local str = self:getMenFengStrByMahs(self._zhuaGangTouMahs[seat + 1])
    return str
end

function WinLostData:getMenFengStrByMahs(mahs)
    if not mahs or next(mahs) == nil then
        return ""
    end

    local menfengCount = {}
    for seat = 0, CF.roomData:getChairs() - 1 do
        local menfeng = self:windJudge(seat) + 1
        menfengCount[menfeng] = 0
    end
    for _, mah in pairs(mahs) do
        for seat = 0, CF.roomData:getChairs() - 1 do
            local menfeng = self:getMenFengByMah(mah)
            if menfeng == self:windJudge(seat) + 1 then
                menfengCount[menfeng] = menfengCount[menfeng] + 1
            end
        end
    end

    local str = ""
    for menfeng,value in pairs(menfengCount) do
        str = str .. CF.GameDefine.MENG_FENG_STR[menfeng] .. value .. " "
    end
    str = string.sub(str, 1, #str - 1) .. "\t"
    return str
end

function WinLostData:getMenFengByMah(mah)
    if mah == CF.GameDefine.MAH_VALUE.JIAN_ZHONG then
        return CF.GameDefine.MENG_FENG.KW_NAN_FENG
    elseif mah == CF.GameDefine.MAH_VALUE.JIAN_FA then
        return CF.GameDefine.MENG_FENG.KW_XI_FENG
    elseif mah == CF.GameDefine.MAH_VALUE.JIAN_BAI then
        return CF.GameDefine.MENG_FENG.KW_BEI_FENG
    end

    local mahIndex = mah % 16
    for menfeng, value in pairs(CF.GameDefine.MAH_MEN_FENG) do
        for _, id in pairs(value) do
            if id == mahIndex then
                return menfeng
            end
        end
    end
    return 0
end

function WinLostData:windJudge(seat)
    local gameData = CF.game:getModule("GameLayer"):getGameData()
    local bankerSeat = gameData:getBankerSeat()
    if seat == bankerSeat then
        return 0
    elseif CF.roomData:getChairs() == 2 then
        return 2
    elseif CF.roomData:getChairs() == 3 then
        return (seat - bankerSeat + CF.roomData:getMaxPlayer()) % CF.roomData:getMaxPlayer()
    elseif CF.roomData:getChairs() == 4 then
        return (seat - bankerSeat + CF.roomData:getMaxPlayer()) % CF.roomData:getMaxPlayer()
    end
end

return WinLostData~