local GameWinLostLayer = CF.gameClass("GameWinLostLayer", "game.DoubleKou.BaseDoubleKou.Modules.WinLost.View")

function GameWinLostLayer:updateWinMut()
    if self._sWinMut > 12 then
        self._sWinMut = 12
    end
    GameWinLostLayer.super.updateWinMut(self)
end

return GameWinLostLayer
