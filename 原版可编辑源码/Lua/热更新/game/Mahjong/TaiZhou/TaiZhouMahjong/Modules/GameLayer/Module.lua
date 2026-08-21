local GameModule = CF.gameClass("GameModule", "game.Mahjong.TaiZhou.BasicTaiZhouMahjong.Modules.GameLayer.Module")

GameModule.EVENT_SHOW_CHENGBAO = "EVENT_SHOW_CHENGBAO"

function GameModule:getSubXYDealList()
    local subXYDealList = GameModule.super.getSubXYDealList(self)
    subXYDealList[#subXYDealList + 1] = { callback = handler(self, self.onMsgChengBaoFlag), msgClass = CF.GameProtocol.msgChengBaoFlag }
    -- 下发可能会包牌的麻将
    subXYDealList[#subXYDealList + 1] = {callback = handler(self, self.onMsgPreBaoPaiMah), msgClass = CF.GameProtocol.msgPreBaoPaiMah}
    return subXYDealList
end

function GameModule:onMsgLeftBanker(msgData)
    GameModule.super.onMsgLeftBanker(self, msgData)
    if CF.roomData:getChairs() == 4 then
        self:dispatchEvent({ name = self.EVENT_SHOW_LEFT_BANKER_COUNT , msg = {nLeftBanker = msgData.leftBanker}})
    else
        self:dispatchEvent({ name = self.EVENT_SHOW_LEFT_JU_COUNT , msg = {nLeftJu = msgData.leftBanker}})
    end
end

function GameModule:onMsgChengBaoFlag(msgData)
    for key, var in pairs(msgData.nChengBaoFlag) do
        self:dispatchEvent({ name = self.EVENT_SHOW_CHENGBAO, msg = {seat = key, show = var > 0}})
    end
end

function GameModule:onMsgPreBaoPaiMah(msgData)
    -- 设置可能会承包的牌
    self:getGameData():setPreBaoHandMahs(CF.roomData:getSelfSeat(), msgData.nBaoPaiMahs)
end

function GameModule:onMsgThrowChip(msgData)
    GameModule.super.onMsgThrowChip(self, msgData)
    -- 台州麻将不等待骰子动画结束，直接发送协议
    if self:getGameData():getCurGameStep() == CF.GameDefine.ENUM_GAME_STEP.GAME_STEP_THROW_CHIP_2 then
        CF.msgManager:sendEndWait(self:getGameData():getCurGameStep())
    end
end

return GameModule