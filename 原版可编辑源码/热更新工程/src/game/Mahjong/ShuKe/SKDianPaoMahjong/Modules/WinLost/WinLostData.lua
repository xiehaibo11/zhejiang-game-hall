local WinLostData = CF.gameClass("WinLostData", "game.Mahjong.BasicMahjong.Modules.WinLost.WinLostData")
local WinLostFanConfig = CF.gameRequire("Config.WinLostFanConfig")

function WinLostData:initDatas()
    WinLostData.super.initDatas(self)

    self._myFanNames = {}
    self._gangNames = {}
end

function WinLostData:onMsgFanCnt(msgData)
    self._fans[msgData.nSeat] = msgData.Fans
    
    local fanNums = 0
    local fanNames = ""
    local tmpFan = msgData.Fans
    for j = 1, #tmpFan do
        local wNum = WinLostFanConfig.KW_WINLOST_FAN_NUMS[tmpFan[j].nFanID] or 0
        fanNums = fanNums + (wNum * tmpFan[j].nCount)

        local wFan = WinLostFanConfig.KW_WINLOST_FAN_TYPE[tmpFan[j].nFanID] or ""
        fanNames = fanNames .. wFan .. " "
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
        fanNames = myFanNames .. (self._gangNames[seat] or "")     
        self._fanNames[seat] = fanNames
    end
end

function WinLostData:onMsgGangNums(msgData)
    for seat = 0 , CF.roomData:getChairs() - 1 do
        local gangNames = ""
        for j = 0 , 2 do
            local nGangNum = msgData.nKongCount[seat][j]
            if nGangNum > 0 then
                gangNames = gangNames .. nGangNum .. WinLostFanConfig.KW_WINLOST_KUNG_TYPE[j] .. " "
            end
        end
        self._gangNames[seat] = gangNames
    end
end

function WinLostData:dealFanInfoEx()
    local endType = self:getEndType()
    if endType == CF.GameDefine.HU_TYPE.ET_NONE or endType == CF.GameDefine.HU_TYPE.ET_DRAWN then
        for seat = 0, CF.roomData:getChairs()-1 do
            self._fanNames[seat] = self._gangNames[seat] or ""
        end
    end
end

return WinLostData