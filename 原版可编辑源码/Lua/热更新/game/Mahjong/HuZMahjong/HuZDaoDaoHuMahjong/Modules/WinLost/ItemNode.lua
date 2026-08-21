local WinLostItemNode = CF.gameClass("WinLostItemNode", "game.Mahjong.BasicMahjong.Modules.WinLost.ItemNode")

function WinLostItemNode:updateSettleUI()
    WinLostItemNode.super.updateSettleUI(self)
    local strFanName = self:getWinLostData():getFanNameBySeat(self._seatId)
    local strFollowMah = ""
    if self:getWinLostData():getFollowMahData(self._seatId) ~= "" then
        strFollowMah = "跟庄:" .. self:getWinLostData():getFollowMahData(self._seatId)
        if strFanName ~= "" then
            strFollowMah = " " .. strFollowMah
        end
    end
    self._detailLabel:setString(strFanName .. strFollowMah)
end

return WinLostItemNode