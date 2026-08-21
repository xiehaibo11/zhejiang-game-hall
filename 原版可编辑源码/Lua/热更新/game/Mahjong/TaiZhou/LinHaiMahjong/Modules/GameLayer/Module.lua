local GameModule = CF.gameClass("GameModule", "game.Mahjong.TaiZhou.BasicTaiZhouMahjong.Modules.GameLayer.Module")

GameModule.EVENT_SHOW_CHENGBAO = "EVENT_SHOW_CHENGBAO"

function GameModule:getSubXYDealList()
    local subXYDealList = GameModule.super.getSubXYDealList(self)
    subXYDealList[#subXYDealList + 1] = { callback = handler(self, self.onMsgChengBaoFlag), msgClass = CF.GameProtocol.msgChengBaoFlag }
    subXYDealList[#subXYDealList + 1] = { callback = handler(self, self.onMsgWaitZhuaGanTou), msgClass = CF.GameProtocol.msgWaitZhuaGanTou }
    subXYDealList[#subXYDealList + 1] = {callback = handler(self, self.onMsgZhuaGanTouResult), msgClass = CF.GameProtocol.msgZhuaGanTouResult}
    subXYDealList[#subXYDealList + 1] = {callback = handler(self, self.onMsgFanCntEx), msgClass = CF.GameProtocol.msgFanCntEx}
    return subXYDealList
end

function GameModule:onMsgChengBaoFlag(msgData)
    for key, var in pairs(msgData.nChengBaoFlag) do
        self:dispatchEvent({ name = self.EVENT_SHOW_CHENGBAO, msg = {seat = key, show = var > 0}})
    end
end

function GameModule:onMsgWaitZhuaGanTou(msgData)

end

function GameModule:onMsgZhuaGanTouResult(msgData)
    self:getGameData():setZhuaGangTouData(msgData)
    local winLostData = CF.game:getModule("WinLost"):getWinLostData()
    winLostData:onMsgZhuaGanTouResult(msgData)
    if CF.roomData and CF.roomData:getIsFastPlay() then
        return
    end
    CF.gameRequire("Modules.GameLayer.ZhuaGangTouUI").new(msgData):showSelf()
end

function GameModule:onMsgFanCntEx(msgData)
    local winLostData = CF.game:getModule("WinLost"):getWinLostData()
    winLostData:onMsgFanCntEx(msgData)
end

return GameModule