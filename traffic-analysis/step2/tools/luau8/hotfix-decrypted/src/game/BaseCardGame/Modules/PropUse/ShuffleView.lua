local ShuffleView = CF.gameClass("ShuffleView", "game.GameBase.Modules.PropUse.ShuffleView")

function ShuffleView:initGameTypeUI()
    self._imgShuffleing:setVisible(true)
    self._txtshufflePlayers:setVisible(false)
    self._panelShuffleAniPos:setPositionX(-60)
    if CF.game:getModule("PropUse"):isSupportNewAni() then
        self._imgShufflePlayerBg:setPositionY(300)
    end
end

return ShuffleView
�