local WinLostItemNode = CF.gameClass("WinLostItemNode", "game.Mahjong.BasicMahjong.Modules.WinLost.ItemNode")

function WinLostItemNode:updateSettleUI()
    WinLostItemNode.super.updateSettleUI(self)
    local gameData = CF.game:getModule("GameLayer"):getGameData()
    if gameData:getFortyTablets() then
        local tAllPlayerScore = gameData:getAllPlayerScore()
        local score = self:getWinLostData():getWinLost(self._seatId)
        local selfScore = tAllPlayerScore[self._seatId] + gameData:getTuoDiScore() + score
        if selfScore <= 0 then
            self._lostTypeSp:ignoreContentAdaptWithSize(true)
            self._lostTypeSp:loadTexture("img_nomoney_flag.png", ccui.TextureResType.plistType)
            self._lostTypeSp:setVisible(true)
        end
    end
end

return WinLostItemNode9