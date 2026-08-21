local TrustModule = CF.gameClass("TrustModule", "game.Landlords.BaseLandlords.Modules.Trust.Module")

function TrustModule:getSubXYDealList()
	local XYList = TrustModule.super.getSubXYDealList(self)
	XYList[#XYList+1] = {callback = handler(self,self.onMsgTrustEx),msgClass = CF.GameProtocol.msgTrust}
    return XYList
end

function TrustModule:onMsgTrustEx(msgData)
    local msgDataEx = {}
    msgDataEx.nSeat = msgData.sTrustSeat
    msgDataEx.bState = msgData.bTrust

    TrustModule.super.onMsgTrust(self, msgDataEx)
end

return TrustModule1