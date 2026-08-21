local BigWinLostUI = CF.gameClass("BigWinLostUI", "game.GameBase.Modules.BigWinLost.View")

function BigWinLostUI:ctor(param)
    param = param or {}
    BigWinLostUI.super.ctor(self, param)
end

function BigWinLostUI:refreshSinglePlayerBattleInfo(seat, param)
    local playerUi = self:getPlayerItem(seat + 1)
    local scores = {}
    table.insert(scores, param.sWinCount[seat] or 0)
    table.insert(scores, param.iMaxLineCount[seat] or 0)
    table.insert(scores, param.iMaxPickupScore[seat] or 0)

    local scoreDes = {}
    table.insert(scoreDes, "头游次数")
    table.insert(scoreDes, "最大线数")
    table.insert(scoreDes, "最大捡分")
    self:setPlayerDesc(playerUi, scores, scoreDes)
    self:setPlayerTotalScore(seat + 1, param.totalScore[seat])
end

return BigWinLostUI