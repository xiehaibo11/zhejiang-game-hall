local WinLostData = CF.gameClass("WinLostData", "game.Mahjong.NewHangZhouMahjong.HangZhouMahjongBase.Modules.WinLost.WinLostData")
local WinLostFanConfig = CF.gameRequire("Config.WinLostFanConfig")

function WinLostData:initDatas()
    WinLostData.super.initDatas(self)
    self._nHuShu = 0
    self._nTotalHuShu = 0
    self._bShowTotal = false
end

function WinLostData:getHuShu()
    return self._nHuShu
end

function WinLostData:getTotalHuShu()
    return self._nTotalHuShu
end

function WinLostData:onMsgFanCnt(msgData)
    self._fans[msgData.nSeat] = msgData.Fans
    
    local fanNums = 0
    local fanNames = ""
    local tmpFan = msgData.Fans

    local huagangkai = false
    local gangkai = false
    for j = 1, #tmpFan do
        if tmpFan[j].nFanID == 2000 then
            huagangkai = true
        end
        if tmpFan[j].nFanID == 39 then
            gangkai = true
        end
    end

    for j = 1, #tmpFan do
        fanNums = fanNums + tmpFan[j].nCount
        if huagangkai == false or tmpFan[j].nFanID ~= 40 or tmpFan[j].nFanID ~= 2000 or gangkai == false  then
            local wfanType = WinLostFanConfig.KW_WINLOST_FAN_TYPE[tmpFan[j].nFanID] or ""
            fanNames = fanNames .. wfanType .. " "
        end
        --[[if huagangkai and tmpFan[j].nFanID == 40 then
        else
            if gangkai and tmpFan[j].nFanID ==2000 then
            else
                local wfanType = WinLostFanConfig.KW_WINLOST_FAN_TYPE[tmpFan[j].nFanID] or ""
                fanNames = fanNames .. wfanType .. " "
            end
        end--]]
       
    end

    for j = 1, #tmpFan do
        if tmpFan[j].nFanID == 2934 then
            fanNums = fanNums + 2 
        end
        if tmpFan[j].nFanID == 1031 then
            fanNums = fanNums + 2 
        end
    end

    self._fanNums[msgData.nSeat] = fanNums
    self._fanNames[msgData.nSeat] = fanNames

    self:dispatchEvent( { name = self.EVENT_RESULT_EXINFO_CHANGED })
end

function WinLostData:onMsgResult(msgData)
    WinLostData.super.onMsgResult(self, msgData)
    self._nHuShu = msgData.nHuShu or 0
    self._nTotalHuShu = msgData.nTotalHuShu or 0
end

return WinLostData