local WinLostModule = CF.gameClass("WinLostModule", "game.Mahjong.TaiZhou.BasicTaiZhouMahjong.Modules.WinLost.Module")

function WinLostModule:getSubXYDealList()
    local subXYDealList = WinLostModule.super.getSubXYDealList(self)
    subXYDealList[#subXYDealList + 1] = {callback = handler(self,self.onMsgFanHuCntEx),msgClass = CF.GameProtocol.msgFanHuCntEx}
    return subXYDealList
end

function WinLostModule:onMsgFanHuCntEx(msgData)
    local gameData = CF.game:getModule("GameLayer"):getGameData()
    gameData:setScoreInfoData(msgData.huSeat, msgData.hfcnt)
end

return WinLostModule[