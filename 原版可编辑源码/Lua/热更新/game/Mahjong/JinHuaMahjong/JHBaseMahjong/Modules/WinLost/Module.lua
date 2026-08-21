local WinLostModule = CF.gameClass("WinLostModule", "game.Mahjong.BasicMahjong.Modules.WinLost.Module")

function WinLostModule:onMsgEndType(msgData)
    WinLostModule.super.onMsgEndType(self, msgData)
    self:getWinLostData():setLostEndType(msgData.sSeat,msgData.sEndType)
end

return WinLostModule