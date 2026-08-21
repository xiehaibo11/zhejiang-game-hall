local BigWinLostUI = CF.gameClass("BigWinLostUI", "game.DoubleKou.BaseDoubleKou.Modules.BigWinLost.View")

local KW_LISTVIEW_SCORES = "KW_LISTVIEW_SCORES"

--大结束显示每局分数
function BigWinLostUI:setPlayersInfo(param)
    BigWinLostUI.super.setPlayersInfo(self, param)
    if param == nil then
        return
    end
    local players = param.players or {}
    for i, _ in pairs(players) do
        local playerUi = self:getPlayerItem(i + 1)
        local listViewNode = CF.UITool.seekNodeByName(playerUi, KW_LISTVIEW_SCORES)
        if listViewNode then
            listViewNode:removeAllChildren()
            local scores = {}
            local scoreDes = {}
            for j = 1, param.playCount do
                local score = param.boxRoomTotalWinLost[i][j] or 0
                table.insert(scores, score)
                table.insert(scoreDes, "局：" .. j)
            end
            self:setPlayerDesc(playerUi, scores, scoreDes)
        end
    end
end

return BigWinLostUI
