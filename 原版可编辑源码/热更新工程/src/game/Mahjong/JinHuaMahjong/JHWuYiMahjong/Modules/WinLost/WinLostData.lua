local WinLostData = CF.gameClass("WinLostModule", "game.Mahjong.JinHuaMahjong.JHBaseMahjong.Modules.WinLost.WinLostData")

local WinLostFanConfig = CF.gameRequire("Config.WinLostFanConfig")

function WinLostData:getSubXYDealList()
    local xyDealList = WinLostData.super.getSubXYDealList(self) or {}
    xyDealList[#xyDealList + 1] = {callback = handler(self,self.onMsgBarScore), msgClass = CF.GameProtocol.msgbarscore}
    return xyDealList
end

function WinLostData:initDatas()
    WinLostData.super.initDatas(self)
    self._barScoreNames = {}
end

function WinLostData:onMsgFanCnt(msgData)
    self._fans[msgData.nSeat] = msgData.Fans

    local fanNames = ""
    local tmpFan = msgData.Fans
    for j = 1, #tmpFan do
        local fanName = WinLostFanConfig.KW_WINLOST_FAN_TYPE[tmpFan[j].nFanID] or ""
        if j == 1 then
            fanNames = fanNames .. fanName
        else
            fanNames = fanNames .. ", " .. fanName
        end
    end
    if  #tmpFan > 0 then
        fanNames = "("..fanNames..")"
    end
    self._fanNames[msgData.nSeat] = fanNames
end

function WinLostData:onMsgBarScore(msgData)
    for i = 0,CF.roomData:getMaxPlayer() - 1 do
        local barscoretxt = ""
        local winscore = msgData.barwinscore[i]
        local lostscore = msgData.barlostscore[i]
        if winscore ~= 0 and lostscore ~= 0 then
            barscoretxt = string.format("杠:%d分  被杠:%d分", winscore, lostscore)
        elseif winscore ~= 0 and lostscore == 0 then
            barscoretxt = string.format(" 杠:%d分", winscore)
        elseif winscore == 0 and lostscore ~= 0 then
            barscoretxt = string.format(" 被杠:%d分", lostscore)
        end
        self._barScoreNames[i] = barscoretxt
    end
    self:dispatchEvent( { name = self.EVENT_RESULT_EXINFO_CHANGED })
end

function WinLostData:getBarScoreNameBySeat(seat)
    return self._barScoreNames[seat] or ""
end

return WinLostData