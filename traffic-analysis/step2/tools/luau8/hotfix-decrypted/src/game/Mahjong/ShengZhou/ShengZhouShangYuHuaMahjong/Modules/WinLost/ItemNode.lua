local WinLostItemNode = CF.gameClass("WinLostItemNode", "game.Mahjong.BasicMahjong.Modules.WinLost.ItemNode")

function WinLostItemNode:updateSettleUI()
    WinLostItemNode.super.updateSettleUI(self)
    local strFanName = self:getWinLostData():getFanNameBySeat(self._seatId)
    self._detailLabel:setString(strFanName .. " " .. (self:getWinLostData()._desc[self._seatId] or ""))
end

return WinLostItemNode�