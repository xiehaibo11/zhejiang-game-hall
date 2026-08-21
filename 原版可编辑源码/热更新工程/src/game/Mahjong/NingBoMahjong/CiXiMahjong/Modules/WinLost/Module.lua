local WinLostModule = CF.gameClass("WinLostModule", "game.Mahjong.BasicMahjong.Modules.WinLost.Module")

-- 小结束
function WinLostModule:onMsgResult(msgData)
    CF.roomData:clonePlayerDatas()
    self:getWinLostData():setDelayTime(1)
    WinLostModule.super.onMsgResult(self, msgData)
end

return WinLostModule