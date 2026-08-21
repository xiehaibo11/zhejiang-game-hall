local BigWinLostUI = CF.gameClass("BigWinLostUI", "game.Mahjong.BasicMahjong.Modules.BigWinLost.View")

function BigWinLostUI:setPlayerTotalScore(seat, totalScore)
    local node = self._playersUI[seat]
    local t1 = totalScore / self._param.baseScore
    local totalScoreStr =  t1.. "分*" .. self._param.baseScore .. "=" ..totalScore
    local color = totalScore < 0 and cc.c3b(3, 87, 146) or cc.c3b(215, 78, 24)
    CF.UITool.setText(node, self.KW_TEXT_TOTAL_SCORE, totalScoreStr)
    CF.UITool.setTextColor(node, self.KW_TEXT_TOTAL_SCORE, color)
end

return BigWinLostUI
