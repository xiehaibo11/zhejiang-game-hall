local GameModule = CF.gameClass("GameModule", "game.Mahjong.JiaXing.BaseMahjong.Modules.GameLayer.Module")

function GameModule:getSubXYDealList()
    local subXYDealList = GameModule.super.getSubXYDealList(self)
    subXYDealList[#subXYDealList + 1] = {callback = handler(self,self.onMsgChengBao),msgClass = CF.GameProtocol.msgChengBao}
    return subXYDealList
end

function GameModule:onMsgChengBao(msgData)
    self:dispatchEvent( { name = self.SHOW_CHENGBAO_ICON , msg = {seat=msgData.nCBSeat, cb= CF.GameDefine.ChengBao.CHENGBAO}})
    self:dispatchEvent( { name = self.SHOW_CHENGBAO_ICON , msg = {seat=msgData.nFCBSeat, cb= CF.GameDefine.ChengBao.CHENGBAO}})
end

function GameModule:needDelay(xyid, protocol)
    if xyid == CF.GameProtocol.msgToTalShuffle.XY_ID then
        return true,3.75,false
    end
    return false,0,true
end

function GameModule:onMsgThrowChip(msgData)
    GameModule.super.onMsgThrowChip(self, msgData)
    -- 不等待骰子动画结束，直接发送协议
    if self:getGameData():getCurGameStep() == CF.GameDefine.ENUM_GAME_STEP.GAME_STEP_THROW_CHIP_1 then
        CF.msgManager:sendEndWait(self:getGameData():getCurGameStep())
    end
end

return GameModule