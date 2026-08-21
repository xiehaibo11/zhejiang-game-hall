local WinLostView = CF.gameClass("WinLostView", "game.Mahjong.TaiZhou.BasicTaiZhouMahjong.Modules.WinLost.View")

function WinLostView:createChildren()
	WinLostView.super.createChildren(self)
	--局数信息
    self._roomJuShuLabel:setString("局数:" .. self._playCount)
end

return WinLostView