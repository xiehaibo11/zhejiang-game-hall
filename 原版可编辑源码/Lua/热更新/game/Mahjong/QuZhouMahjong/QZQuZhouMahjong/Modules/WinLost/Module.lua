local WinLostModule = CF.gameClass("WinLostModule", "game.Mahjong.QuZhouMahjong.QZQuZhouBase.Modules.WinLost.Module")

function WinLostModule:getSubXYDealList()
    local subXYDealList = WinLostModule.super.getSubXYDealList(self)
    subXYDealList[#subXYDealList + 1] = {callback = handler(self,self.onMsgGameType),msgClass = CF.GameProtocol.msgGameType}
    subXYDealList[#subXYDealList + 1] = {callback = handler(self,self.onMsgGameResultExInfo),msgClass = CF.GameProtocol.msgGameResultExInfo}
    subXYDealList[#subXYDealList + 1] = {callback = handler(self,self.onMsgGameJuMaEnd),msgClass = CF.GameProtocol.msgGameJuMaEnd}
    return subXYDealList
end

function WinLostModule:onMsgGameType(msgData)
    self:getWinLostData():setGameType(msgData.sGameType)
end

function WinLostModule:onMsgGameResultExInfo(msgData)
    self:getWinLostData():setMinusFan(msgData.bMinusFan)
    self:getWinLostData():setAddFan(msgData.bAddFan)
    self:getWinLostData():setFixFanSeat(msgData.nSeat)
end

function WinLostModule:onMsgGameJuMaEnd(msgData)
end

return WinLostModule