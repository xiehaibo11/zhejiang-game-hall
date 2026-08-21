local WinLostItemNode = CF.gameClass("WinLostItemNode", "game.Mahjong.BasicMahjong.Modules.WinLost.ItemNode")

function WinLostItemNode:updateSettleUI()
    WinLostItemNode.super.updateSettleUI(self)
    local strFanName = self:getWinLostData():getFanNameBySeat(self._seatId)
    local strJokerMoney = "财神分:" .. self:getWinLostData():getJokerMoneyData(self._seatId) .. " "
    local strKungInfo = self:getWinLostData():getKungInfoData(self._seatId)
    local strFollowMah = ""
    if self:getWinLostData():getFollowMahData(self._seatId) ~= "" then
        strFollowMah = "跟风:" .. self:getWinLostData():getFollowMahData(self._seatId)
    end
    self._detailLabel:setString(strFanName .. strJokerMoney .. strKungInfo .. strFollowMah)

    self._fanLabel:setVisible(false)     -- 不显示番信息
end

return WinLostItemNodeR