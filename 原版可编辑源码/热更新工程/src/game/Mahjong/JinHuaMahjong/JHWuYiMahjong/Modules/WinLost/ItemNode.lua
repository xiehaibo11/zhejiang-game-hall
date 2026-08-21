local WinLostItemNode = CF.gameClass("WinLostItemNode", "game.Mahjong.JinHuaMahjong.JHBaseMahjong.Modules.WinLost.ItemNode")

function WinLostItemNode:updateSettleUI()
    WinLostItemNode.super.updateSettleUI(self)
    if self._fanLabel then
        self._fanLabel:setVisible(false)     -- 不显示番信息
    end
    local strFanName = self:getWinLostData():getFanNameBySeat(self._seatId)
    local strBarScore = self:getWinLostData():getBarScoreNameBySeat(self._seatId)
    self._detailLabel:setString(strFanName .." ".. strBarScore)
end

return WinLostItemNode