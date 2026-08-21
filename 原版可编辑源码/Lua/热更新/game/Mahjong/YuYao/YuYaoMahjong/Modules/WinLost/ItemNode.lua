
local WinLostItemNode = CF.gameClass("WinLostItemNode", "game.Mahjong.BasicMahjong.Modules.WinLost.ItemNode")

function WinLostItemNode:updateSettleUI()
    WinLostItemNode.super.updateSettleUI(self)
    local winLostData = CF.game:getModule("WinLost"):getWinLostData()
    if self._gangLabel and winLostData.getIsJiGangFen and winLostData:getIsJiGangFen()  then
        self._gangLabel:setVisible(true)
        local gangFens = self:getWinLostData():getGangFens()
        local gangScore = (gangFens and gangFens[self._seatId]) or 0
        if gangScore > 0 then
            gangScore = "+" .. gangScore
        end
        self._gangLabel:setString(gangScore)
    end
end

return WinLostItemNode