---------------------------------------------------------
--
-- Description: 游戏大结束
-- Author: hejiafeng
-- Date: 2019-07-24
--
---------------------------------------------------------

local BigWinLostUI = CF.gameClass("BigWinLostUI", "game.GameBase.Modules.BigWinLost.View")

local KW_TEXT_DES = "KW_TEXT_DES"
local KW_TEXT_SCORE = "KW_TEXT_SCORE"
local KW_LISTVIEW_SCORES = "KW_LISTVIEW_SCORES"

function BigWinLostUI:ctor(param)
    param = param or {}
    BigWinLostUI.super.ctor(self, param)
end

function BigWinLostUI:getCSBPath()
    return "cocosStudio/LookAnxiously/GameLayer/CSB/BigWinLost.csb"
end

function BigWinLostUI:getBindingInfo()
    local bindInfo = BigWinLostUI.super.getBindingInfo(self)
    bindInfo["_KW_PLAYER_SCORE_MOD_5"] = {varName = "_playerScoreMod_5"}
    bindInfo["_KW_SCORE_MOD_5"] = {varName = "_scoreMod_5"}
    return bindInfo
end

function BigWinLostUI:refreshSinglePlayerBattleInfo(seat, param)
    local playerUi = self:getPlayerItem(seat + 1)
    local scores = {}
    table.insert(scores, param.sWinCount[seat] or 0)
    table.insert(scores, param.sLostCount[seat] or 0)
    table.insert(scores, param.sBoomCount[seat] or 0)

    local scoreDes = {}
    table.insert(scoreDes, "胜利次数")
    table.insert(scoreDes, "失败次数")
    table.insert(scoreDes, "炸弹次数")
    self:setPlayerDesc(playerUi, scores, scoreDes)
    self:setPlayerTotalScore(seat + 1, param.totalScore[seat])
end

function BigWinLostUI:getPlayerItem(pos)
    local playerNode = self._playersUI[pos]
    if playerNode == nil then
        local playerScoreMod = CF.roomData:isFivePlayer() and self._playerScoreMod_5 or self._playerScoreMod
        playerNode = playerScoreMod:clone()
        playerNode:setPosition(self:calLayoutByPlayerCount(pos))
        :addTo(playerScoreMod:getParent())
        self._playersUI[pos] = playerNode
    end
    return playerNode
end


--根据人数计算位置
function BigWinLostUI:calLayoutByPlayerCount(seat)
    local playerCount = self._playerCnt
    local playerScoreMod = CF.roomData:isFivePlayer() and self._playerScoreMod_5 or self._playerScoreMod
    local itemSize = playerScoreMod:getContentSize()
    local displaySize = self._bgNode:getContentSize()
    local pos = seat - 1
    local posX = displaySize.width / 2
    if playerCount % 2 == 0 then
        posX = posX + ((pos + 0.5 - playerCount / 2) * itemSize.width)
    else
        posX = posX + ((pos - math.floor(playerCount / 2)) * itemSize.width)
    end
    return cc.p(posX, displaySize.height / 2)
end

function BigWinLostUI:setPlayerDesc(node, scores, scoreDes)
    scores = scores or {}
    scoreDes = scoreDes or {}
    for count, score in ipairs(scores) do
        local scoreMod = CF.roomData:isFivePlayer() and self._scoreMod_5 or self._scoreMod
        local tmpScoreNode = scoreMod:clone()
        tmpScoreNode:addTo(CF.UITool.seekNodeByName(node, KW_LISTVIEW_SCORES))

        local des = scoreDes[count] or ""
        local color = score < 0 and cc.c3b(3, 87, 146) or cc.c3b(215, 78, 24)
        local scoreStr = tostring(score)
        CF.UITool.setText(tmpScoreNode, KW_TEXT_DES, des)
        CF.UITool.setTextColor(tmpScoreNode, KW_TEXT_SCORE, color)
        CF.UITool.setText(tmpScoreNode, KW_TEXT_SCORE, scoreStr)
    end
end

return BigWinLostUI
