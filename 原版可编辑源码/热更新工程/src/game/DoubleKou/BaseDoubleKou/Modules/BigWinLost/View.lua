---------------------------------------------------------
--
-- Description: 游戏大结束
-- Author: hejiafeng
-- Date: 2019-07-24
--
---------------------------------------------------------

local BigWinLostUI = CF.gameClass("BigWinLostUI", "game.GameBase.Modules.BigWinLost.View")

function BigWinLostUI:ctor(param)
    param = param or {}
    BigWinLostUI.super.ctor(self, param)
end

function BigWinLostUI:refreshSinglePlayerBattleInfo(seat, param)
    local playerUi = self:getPlayerItem(seat + 1)
    local scores = {}
    table.insert(scores, param.maxXian[seat] or 0)
    table.insert(scores, param.maxWin[seat] or 0)
    table.insert(scores, param.totalDoubleKou[seat] or 0)

    local scoreDes = {}
    table.insert(scoreDes, "最大线数")
    table.insert(scoreDes, "最高优胜值")
    table.insert(scoreDes, "双扣次数")
    self:setPlayerDesc(playerUi, scores, scoreDes)
    self:setPlayerTotalScore(seat + 1, param.totalScore[seat])
end

return BigWinLostUI
