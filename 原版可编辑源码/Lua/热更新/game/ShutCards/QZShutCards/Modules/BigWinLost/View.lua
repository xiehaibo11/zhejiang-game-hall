local BigWinLostUI = CF.gameClass("BigWinLostUI", "game.ShutCards.BaseShutCards.Modules.BigWinLost.View")

function BigWinLostUI:ctor(param)
    param = param or {}
    BigWinLostUI.super.ctor(self, param)
end

function BigWinLostUI:refreshSinglePlayerBattleInfo(seat, param)
    local playerUi = self:getPlayerItem(seat + 1)
    local scores = {}
    local scoreDes = {}
    self:setPlayerTotalScore(seat + 1, param.totalScore[seat])
    for j = 1, param.playCount do
        table.insert(scoreDes, "局"..j)
        table.insert(scores, param.boxRoomTotalWinLost[seat][j] or 0)
    end
    self:setPlayerDesc(playerUi, scores, scoreDes)
end

return BigWinLostUI
