local WinLostModule = CF.gameClass("WinLostModule", "game.Mahjong.HuZMahjong.BaseHuZMahjong.Modules.WinLost.Module")

function WinLostModule:getSubXYDealList()
    local subXYDealList = WinLostModule.super.getSubXYDealList(self)
    subXYDealList[#subXYDealList + 1] = {callback = handler(self,self.onMsgFanCntExDDH),msgClass = CF.GameProtocol.msgFanResultDDH}
    subXYDealList[#subXYDealList + 1] = {callback = handler(self,self.msgFollowMahScore), msgClass = CF.GameProtocol.msgHZFollowMahScore}
    return subXYDealList
end

function WinLostModule:onMsgFanCntExDDH(msgData)
    if self:getWinLostData().setWinFlowerCnt then
        self:getWinLostData():setWinFlowerCnt(msgData)
    end
end

-- 跟风的分数
function WinLostModule:msgFollowMahScore(msgData)
    for seat = 0, CF.roomData:getChairs() - 1 do
        self:getWinLostData():setFollowMahData(seat, msgData.nScore[seat])
    end
end

return WinLostModule�