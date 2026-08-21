local BigWinLostUI = CF.gameClass("BigWinLostUI", "game.Mahjong.BasicMahjong.Modules.BigWinLost.View")

--设置玩家每局分数,形式2
function BigWinLostUI:setPlayerTotalScore(seat, scoreDes)
	local gameData = CF.game:getModule("GameLayer"):getGameData()
    if gameData:getFortyTablets() then
		local node = self._playersUI[seat]
        local totalScores = self._param.totalScore or {}
        local totalScore = totalScores[seat] or 0
        if totalScore <= - gameData:getTuoDiScore() then
            local mark = ccui.ImageView:create()
            mark:loadTexture("img_nomoney_flag.png", ccui.TextureResType.plistType)
            mark:addTo(node)
            mark:setPosition(68, 66)
        end
    end
    return BigWinLostUI.super.setPlayerTotalScore(self, seat, scoreDes)
end

return BigWinLostUI