local GameModule = CF.gameClass("GameModule", "game.Mahjong.TaiZhou.BasicTaiZhouMahjong.Modules.GameLayer.Module")

GameModule.EVENT_SHOW_MAIDI = "EVENT_SHOW_MAIDI"
GameModule.EVENT_SHOW_WAITTING_MAIDI = "EVENT_SHOW_WAITTING_MAIDI"

function GameModule:getSubXYDealList()
    local subXYDealList = GameModule.super.getSubXYDealList(self)
    subXYDealList[#subXYDealList + 1] = { callback = handler(self, self.onMsgMaiDi), msgClass = CF.GameProtocol.msgMaiDi }
    subXYDealList[#subXYDealList + 1] = { callback = handler(self, self.onMsgResidue), msgClass = CF.GameProtocol.msgResidue }
    return subXYDealList
end

--推倒胡剩余庄数
function GameModule:onMsgResidue(msgData)
    self:dispatchEvent({ name = self.EVENT_SHOW_LEFT_BANKER_COUNT , msg = {nLeftBanker = msgData.residueBanker}})
end

function GameModule:onMsgChengBaoFlag(msgData)
    for key, var in pairs(msgData.nChengBaoFlag) do
        self:dispatchEvent({ name = self.EVENT_SHOW_CHENGBAO, msg = {seat = key, show = var > 0}})
    end
end

--买底
function GameModule:onMsgMaiDi(msgData)
    local bankerSeat = self:getGameData():getBankerSeat()
    self:getGameData():setMaiDiData(bankerSeat, true)
    if msgData.maiDi == 2 then
        self:getGameData():setMaiDiData(msgData.nSeat, true)
    else
        self:getGameData():setMaiDiData(msgData.nSeat, false)
    end
    if msgData.bFinish then
        --买底结束
        self:dispatchEvent({ name = self.EVENT_SHOW_WAITTING_MAIDI, msg = {bShow = false} })
    else
        --等待买底
        self:dispatchEvent({ name = self.EVENT_SHOW_WAITTING_MAIDI, msg = {data = msgData, bShow = true} })
    end
    self:dispatchEvent({ name = self.EVENT_SHOW_MAIDI })
end

return GameModule�