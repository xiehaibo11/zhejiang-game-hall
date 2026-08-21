local WinLostItemNode = CF.gameClass("WinLostItemNode", "game.Mahjong.BasicMahjong.Modules.WinLost.ItemNode")

function WinLostItemNode:showFengDingFlag()
    local fengDingFlag = self:getWinLostData():getFengDingFlag()
    self._imgFengDing:setVisible(fengDingFlag[self._seatId])
end

return WinLostItemNode
