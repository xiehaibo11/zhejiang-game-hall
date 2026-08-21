local WinLostView = CF.gameClass("WinLostView", "game.Mahjong.BasicMahjong.Modules.WinLost.View")

function WinLostView:createChildren()
    WinLostView.super.createChildren(self)

    --不显示番字
    if self._imgFan then
	    self._imgFan:setVisible(false)
    end
end

return WinLostView