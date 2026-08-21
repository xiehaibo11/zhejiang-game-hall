local WinLostData = CF.gameClass("WinLostModule", "game.Mahjong.JinHuaMahjong.JHBaseMahjong.Modules.WinLost.WinLostData")

local WinLostFanConfig = CF.gameRequire("Config.WinLostFanConfig")

function WinLostData:initDatas()
    WinLostData.super.initDatas(self)
    self.bAlready= false
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

function WinLostData:setIsContract(seat,isContract)
    WinLostData.super.setIsContract(self,seat,isContract)
    self:dispatchEvent( { name = self.EVENT_RESULT_EXINFO_CHANGED })
end

function WinLostData:setAlreadyInResult(bAlready) --用于屏蔽金华麻将不知道为什么会发两次小结束的消息
    self.bAlready = bAlready
end

function WinLostData:getAlreadyInResult()
    return  self.bAlready or false
end

return WinLostData