local BigWinLostUI        = CF.gameClass("BigWinLostUI", "game.GameBase.Modules.BigWinLost.View")
local KW_TEXT_DES         = "KW_TEXT_DES"
local KW_TEXT_SCORE       = "KW_TEXT_SCORE"
local KW_LISTVIEW_SCORES  = "KW_LISTVIEW_SCORES"

function BigWinLostUI:getCSBPath()
    return "cocosStudio/DaTong/GameLayer/CSB/BigWinLost.csb"
end

function BigWinLostUI:getBindingInfo()
    local bindInfo = BigWinLostUI.super.getBindingInfo(self)
    bindInfo["_KW_PLAYER_SCORE_MOD_6"] = {varName = "_playerScoreMod_6"}
    bindInfo["_KW_SCORE_MOD_6"] = {varName = "_scoreMod_6"}
    return bindInfo
end

function BigWinLostUI:ctor(param)
    BigWinLostUI.super.ctor(self,param)
end

function BigWinLostUI:refreshSinglePlayerBattleInfo(seat, param)
    local playerUi = self:getPlayerItem(seat + 1)
    local scores = {}
    local scoreDes = {}
    self:setPlayerTotalScore(seat + 1, param.totalScore[seat])

    for j = 1, param.playCount do
        table.insert(scoreDes, "第" .. j .. "局")
        table.insert(scores, param.everyScore[seat][j] or 0)
    end
    self:setPlayerDesc(playerUi, scores, scoreDes)
end

function BigWinLostUI:getPlayerItem(pos)
    local playerNode = self._playersUI[pos]
    if playerNode == nil then
        local playerScoreMod = CF.roomData:isSixPlayer() and self._playerScoreMod_6 or self._playerScoreMod
        playerNode = playerScoreMod:clone()
        playerNode:setPosition(self:calLayoutByPlayerCount(pos))
        :addTo(playerScoreMod:getParent())
        self._playersUI[pos] = playerNode
    end
    return playerNode
end

function BigWinLostUI:setPlayerDesc(node, scores, scoreDes)
    scores = scores or {}
    scoreDes = scoreDes or {}
    for count, score in ipairs(scores) do
        local scoreMod = CF.roomData:isSixPlayer() and self._scoreMod_6 or self._scoreMod
        local tmpScoreNode = scoreMod:clone()
        tmpScoreNode:addTo(CF.UITool.seekNodeByName(node, KW_LISTVIEW_SCORES))

        local des = scoreDes[count] or ""
        local color = tonumber(score) < 0 and cc.c3b(3, 87, 146) or cc.c3b(215, 78, 24)
        local scoreStr = tonumber(score) > 0 and  "+" .. tostring(score) or tostring(score)
        CF.UITool.setText(tmpScoreNode, KW_TEXT_DES, des)
        CF.UITool.setTextColor(tmpScoreNode, KW_TEXT_SCORE, color)
        CF.UITool.setText(tmpScoreNode, KW_TEXT_SCORE, scoreStr)
    end
end

--根据人数计算位置
function BigWinLostUI:calLayoutByPlayerCount(seat)
    local playerScoreMod = CF.roomData:isSixPlayer() and self._playerScoreMod_6 or self._playerScoreMod
    local playerCount = self._playerCnt
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

return BigWinLostUI