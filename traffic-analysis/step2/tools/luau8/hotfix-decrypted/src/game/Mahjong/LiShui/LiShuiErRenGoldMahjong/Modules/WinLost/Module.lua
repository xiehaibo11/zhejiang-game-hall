local WinLostModule = CF.gameClass("WinLostModule", "game.Mahjong.BasicMahjong.Modules.WinLost.Module")

function WinLostModule:getSubXYDealList()
	local xyDealList = WinLostModule.super.getSubXYDealList(self)
    xyDealList[#xyDealList + 1] = {callback = handler(self,self.onMsgEndInfo),msgClass = CF.GameProtocol.msgEndInfo}
	return xyDealList
end

function WinLostModule:onMsgEndInfo(msgData)
    self:getWinLostData():onMsgEndInfo(msgData)
    self:onMsgResult(msgData)
end

return WinLostModule