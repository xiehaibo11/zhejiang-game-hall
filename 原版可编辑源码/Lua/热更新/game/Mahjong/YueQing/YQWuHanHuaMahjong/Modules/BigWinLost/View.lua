local BigWinLostUI = CF.gameClass("BigWinLostUI", "game.Mahjong.BasicMahjong.Modules.BigWinLost.View")

local KW_LISTVIEW_SCORES = "KW_LISTVIEW_SCORES"
local KW_TEXT_DES = "KW_TEXT_DES"
local KW_TEXT_SCORE = "KW_TEXT_SCORE"
local KW_IMG_BIG_WINNER = "KW_IMG_BIG_WINNER"

function BigWinLostUI:getBindingInfo()
    local uiList = BigWinLostUI.super.getBindingInfo(self)
    uiList["_KW_SCORE_MOD_0"] = { varName = "_scoreMod0" }
    return uiList
end

function BigWinLostUI:refreshSinglePlayerBattleInfo(seat, param)
    local playerUi = self:getPlayerItem(seat + 1)

    self:setPlayerDesc(playerUi, param.scores[seat], param.scoreDes[seat])
    self:setPlayerTotalScore(seat + 1, param.totalScore[seat])
end

function BigWinLostUI:setPlayerDesc(node, scores, scoreDes)
    scores = scores or {}
    for count, score in ipairs(scores) do
        local tmpScoreNode = self._scoreMod0:clone()
        tmpScoreNode:addTo(CF.UITool.seekNodeByName(node, KW_LISTVIEW_SCORES))

        local des = "局数 :" .. count
        local color = score < 0 and cc.c3b(3, 87, 146) or cc.c3b(215, 78, 24)
        local scoreStr = tostring(score)
        if score >= 0 then
            scoreStr = "+" .. scoreStr
        end
        CF.UITool.setText(tmpScoreNode, KW_TEXT_DES, des)
        CF.UITool.setTextColor(tmpScoreNode, KW_TEXT_SCORE, color)
        CF.UITool.setText(tmpScoreNode, KW_TEXT_SCORE, scoreStr)
    end
end

function BigWinLostUI:setPlayersInfo(param)
    BigWinLostUI.super.setPlayersInfo(self, param)
    local totalScores = param.totalScore or {}
    local maxScore = 0
    for _, v in pairs(totalScores) do
        if v > maxScore then
            maxScore = v
        end
    end
    for k, v in pairs(totalScores) do
        local isBigWinner = maxScore > 0 and (maxScore == v)
        CF.UITool.setVisible(self._playersUI[k + 1], KW_IMG_BIG_WINNER, isBigWinner)
    end
end

return BigWinLostUI