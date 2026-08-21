local WinLostModule = CF.gameClass("WinLostModule", "game.Mahjong.BasicMahjong.Modules.WinLost.Module")

function WinLostModule:getSubXYDealList()
    local subXYDealList = WinLostModule.super.getSubXYDealList(self)
    subXYDealList[#subXYDealList + 1] = {callback = handler(self,self.onMsgResultInfo),msgClass = CF.GameProtocol.msgResultInfo}
    return subXYDealList
end

function WinLostModule:onMsgResultInfo(msgData)
    self:getWinLostData():onMsgResultInfo(msgData)
end

return WinLostModule