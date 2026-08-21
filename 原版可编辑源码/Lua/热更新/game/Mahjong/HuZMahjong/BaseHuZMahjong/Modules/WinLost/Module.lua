local WinLostModule = CF.gameClass("WinLostModule", "game.Mahjong.BasicMahjong.Modules.WinLost.Module")

-- 番数
function WinLostModule:onMsgFanCnt(msgData)
    WinLostModule.super.onMsgFanCnt(self, msgData)
    self:getWinLostData():setIsShowFan(false)
end

return WinLostModule