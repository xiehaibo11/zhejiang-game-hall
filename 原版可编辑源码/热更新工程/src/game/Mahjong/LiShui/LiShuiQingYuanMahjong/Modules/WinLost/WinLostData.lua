local WinLostData = CF.gameClass("WinLostModule", "game.Mahjong.BasicMahjong.Modules.WinLost.WinLostData")

function WinLostData:onMsgFanCnt(msgData)
	WinLostData.super.onMsgFanCnt(self, msgData)
    self:setIsShowFan(false)
end


return WinLostData