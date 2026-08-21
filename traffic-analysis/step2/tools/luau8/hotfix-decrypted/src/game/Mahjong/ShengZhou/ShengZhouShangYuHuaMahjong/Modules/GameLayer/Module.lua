local GameModule = CF.gameClass("GameModule", "game.Mahjong.ShengZhou.ShengZhouMahjong.Modules.GameLayer.Module")

GameModule.EVENT_SHOW_BUHUA = "EVENT_SHOW_BUHUA"
GameModule.EVENT_SHOW_CHENGBAO_COUNT = "EVENT_SHOW_CHENGBAO_COUNT"
GameModule.EVENT_SHOW_FEI_LONG_JOKER = "EVENT_SHOW_FEI_LONG_JOKER"

function GameModule:getSubXYDealList()
    local subXYDealList = GameModule.super.getSubXYDealList(self)
    subXYDealList[#subXYDealList + 1] = {callback = handler(self,self.onMsgThrowChipRelink),msgClass = CF.GameProtocol.msgThrowChipRelink}
    subXYDealList[#subXYDealList + 1] = {callback = handler(self,self.onMsgChengBaoCount),msgClass = CF.GameProtocol.msgChengBaoCount}
    return subXYDealList
end

function GameModule:onMsgThrowChip(msgData)
    self:dispatchEvent( { name = self.EVENT_SHOW_CHIPS, msg = {msgThrowChip = msgData, showAni = false}})
end

function GameModule:onMsgThrowChipRelink(msgData)
    self:dispatchEvent( { name = self.EVENT_SHOW_CHIPS, msg = {msgThrowChip = msgData, showAni = true}})
end

function GameModule:onMsgReplace(msgData)
    GameModule.super.onMsgReplace(self, msgData)
    self:dispatchEvent( { name = self.EVENT_SHOW_BUHUA, msg = {seat = msgData.nSeat}})
end

function GameModule:onMsgChengBaoCount(msgData)
    self:dispatchEvent( { name = self.EVENT_SHOW_CHENGBAO_COUNT, msg = {seat = msgData.nSeat, count = msgData.nCount}})
end

function GameModule:onMsgJoker(msgData)
    GameModule.super.onMsgJoker(self, msgData)
    self:dispatchEvent( { name = self.EVENT_SHOW_FEI_LONG_JOKER, msg = {jokerID = msgData.nJokers[1]}})
end

function GameModule:onMsgEndResult(msgData)
end

function GameModule:onMsgCountScore(msgData)
end

return GameModule�