local PlayerModule = CF.gameClass("PlayerModule", "game.Mahjong.BasicMahjong.Modules.Player.Module")

PlayerModule.EVENT_CROSS_HU = "EVENT_CROSS_HU"

function PlayerModule:getSubXYDealList()
    local subXYDealList = PlayerModule.super.getSubXYDealList(self)
    subXYDealList[#subXYDealList + 1] = { callback = handler(self, self.onMsgCrossHu), msgClass = CF.GameProtocol.msgCrossHu }

    return subXYDealList
end

function PlayerModule:onMsgCrossHu(msgData)
    if msgData.sSeat == CF.roomData:getSelfSeat() then
        self:dispatchEvent({name = self.EVENT_CROSS_HU, data = {seat = msgData.sSeat, bShow = msgData.bCrossHu}})
    end
end

return PlayerModule