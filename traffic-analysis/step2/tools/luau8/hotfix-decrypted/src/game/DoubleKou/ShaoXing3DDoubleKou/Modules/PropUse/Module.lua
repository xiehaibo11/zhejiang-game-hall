local PropUseModule = CF.gameClass("PropUseModule", "game.GameBase.Modules.PropUse.Module")

PropUseModule.EVENT_REQUST_SHUFFLE = "EVENT_REQUST_SHUFFLE"

function PropUseModule:getSubXYDealList()
    local subXYDealList = PropUseModule.super.getSubXYDealList(self)
    subXYDealList[#subXYDealList + 1] = {callback = handler(self,self.onMsgReqShuffle),msgClass = CF.GameProtocol.msgReqShuffle}
    subXYDealList[#subXYDealList + 1] = {callback = handler(self,self.onMsgShuffleSeat),msgClass = CF.GameProtocol.msgShuffleSeat}
    subXYDealList[#subXYDealList + 1] = {callback = handler(self,self.onMsgShuffleFinish),msgClass = CF.GameProtocol.msgShuffleFinish}
    return subXYDealList
end

function PropUseModule:onMsgReqShuffle(msgData)
    self:dispatchEvent({name = self.EVENT_REQUST_SHUFFLE})
end

function PropUseModule:onMsgShuffleSeat(msgData)
    local player = CF.roomData:getPlayerDataBySeatId(msgData.seat)
    if player then
        local shufferText = string.format("玩家%s，正在洗牌...", player:getNickName2())
        if not self._shuffleAniLayer then
            self._shuffleAniLayer = CF.gameRequire("Modules.PropUse.ShuffleView").new({shufferText = shufferText})
            self._shuffleAniLayer:showSelf()
        else
            self._shuffleAniLayer:updateShufflePlayer(shufferText)
        end 
    end
end

function PropUseModule:onMsgShuffleFinish(msgData)
    if self._shuffleAniLayer then
        self._shuffleAniLayer = nil
    end
end

return PropUseModule�