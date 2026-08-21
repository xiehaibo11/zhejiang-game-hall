local BigWinLostUI = CF.gameClass("BigWinLostUI", "game.GameBase.Modules.BigWinLost.View")

function BigWinLostUI:refreshSinglePlayerBattleInfo(seat, param)
    local playerUi = self:getPlayerItem(seat+1)
    local scores = {}
    table.insert(scores, param.sWinCount[seat+1] or 0)
    table.insert(scores, param.sBoomCount[seat+1] or 0)
    table.insert(scores, param.nSpringCount[seat+1] or 0)

    local scoreDes = {}
    table.insert(scoreDes, "赢牌次数")
    table.insert(scoreDes, "炸弹次数")
    table.insert(scoreDes, "春天次数")
    self:setPlayerDesc(playerUi, scores, scoreDes)

    self:setPlayerTotalScore(seat+1, param.iTotalScore[seat+1])
end

return BigWinLostUI
�