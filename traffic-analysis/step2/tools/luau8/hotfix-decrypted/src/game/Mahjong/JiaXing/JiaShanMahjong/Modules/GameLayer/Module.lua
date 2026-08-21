local GameModule = CF.gameClass("GameModule", "game.Mahjong.JiaXing.BaseMahjong.Modules.GameLayer.Module")

function GameModule:getSubXYDealList()
    local subXYDealList = GameModule.super.getSubXYDealList(self)
    subXYDealList[#subXYDealList + 1] = {callback = handler(self,self.onMsgChengBao),msgClass = CF.GameProtocol.msgChengBao}
    return subXYDealList
end

function GameModule:onMsgChengBao(msgData)
    self:dispatchEvent( { name = self.SHOW_CHENGBAO_ICON , msg = {seat=CF.roomData:localToSeat(msgData.nCBSeat), cb= CF.GameDefine.ChengBao.CHENGBAO}})
    self:dispatchEvent( { name = self.SHOW_CHENGBAO_ICON , msg = {seat=CF.roomData:localToSeat(msgData.nFCBSeat), cb= CF.GameDefine.ChengBao.CHENGBAO}})
end

return GameModule�