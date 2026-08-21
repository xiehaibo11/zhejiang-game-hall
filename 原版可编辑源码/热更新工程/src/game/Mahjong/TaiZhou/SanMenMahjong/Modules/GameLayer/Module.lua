local GameModule = CF.gameClass("GameModule", "game.Mahjong.TaiZhou.BasicTaiZhouMahjong.Modules.GameLayer.Module")

GameModule.EVENT_SHOW_CHENGBAO = "EVENT_SHOW_CHENGBAO"

function GameModule:getSubXYDealList()
    local subXYDealList = GameModule.super.getSubXYDealList(self)
    subXYDealList[#subXYDealList + 1] = { callback = handler(self, self.onMsgChengBaoFlag), msgClass = CF.GameProtocol.msgChengBaoFlag }
    subXYDealList[#subXYDealList + 1] = { callback = handler(self, self.onMsgWaitMaiMa), msgClass = CF.GameProtocol.msgWaitMaiMa }
    subXYDealList[#subXYDealList + 1] = {callback = handler(self, self.onMsgMaResult), msgClass = CF.GameProtocol.msgMaResult}
    return subXYDealList
end

function GameModule:onMsgChengBaoFlag(msgData)
    for key, var in pairs(msgData.nChengBaoFlag) do
        self:dispatchEvent({ name = self.EVENT_SHOW_CHENGBAO, msg = {seat = key, show = var > 0}})
    end
end

--等待买马
function GameModule:onMsgWaitMaiMa(msgData)

end

--买马结果
function GameModule:onMsgMaResult(msgData)
    local maiMaData = {
        maCount = msgData.betMahCount,
        betMahList = msgData.betMahList,
        maPoint = msgData.maPoint,
        totalPoint = msgData.totalPoint
    }
    self:getGameData():setMaiMaData(maiMaData)
    if CF.roomData and CF.roomData:getIsFastPlay() then
        return
    end
    CF.gameRequire("Modules.GameLayer.MaiMaUI").new(maiMaData):showSelf()
end

return GameModule