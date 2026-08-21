local BigWinLostUI = CF.gameClass("BigWinLostUI", "game.Mahjong.BasicMahjong.Modules.BigWinLost.View")

function BigWinLostUI:initContinueUI()
    self._btnContinue:setVisible(true)
    self._btnContinue:setEnabled(CF.roomData:isCanContinue())
    BigWinLostUI.super.initContinueUI(self)
end

return BigWinLostUI@