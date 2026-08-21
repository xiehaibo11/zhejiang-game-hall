local WinLostModule = CF.gameClass("WinLostModule", "game.Mahjong.BasicMahjong.Modules.WinLost.Module")

function WinLostModule:getSubXYDealList()
	local xyDealList = WinLostModule.super.getSubXYDealList(self)
	xyDealList[#xyDealList+1]  = {callback = handler(self,self.onMsgHuShuCount), msgClass = CF.GameProtocol.msgHuShuCount}
	xyDealList[#xyDealList+1]  = {callback = handler(self,self.onMsgHuMahPos), msgClass = CF.GameProtocol.msgHuMahPos}
	return xyDealList
end

function WinLostModule:onMsgHuShuCount(msgData)
    self:getWinLostData():onMsgHuShuCount(msgData)
end

function WinLostModule:onMsgHuMahPos(msgData)
    self:getWinLostData():setHuMahPos(msgData.nPos)
end

function WinLostModule:onMsgFanCnt(msgData)
    self:getWinLostData():onMsgFanCnt(msgData)
end

-- 小结束
function WinLostModule:onMsgResult(msgData)
    self:getWinLostData():setIsShowFan(false) --改了这里
    WinLostModule.super.onMsgResult(self, msgData)
end

return WinLostModule�