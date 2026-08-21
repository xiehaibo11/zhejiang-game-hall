local WinLostItemNode = CF.gameClass("WinLostItemNode", "game.Mahjong.RuiAnMahjong.RAMahjongBase.Modules.WinLost.ItemNode")

local TAKS_OTHER_TYPE = 3

function WinLostItemNode:updateSettleUI()
    WinLostItemNode.super.updateSettleUI(self)
    local lostEndType = self:getWinLostData():getLostEndType(self._seatId)
    if lostEndType then
        self._lostTypeSp:loadTexture(string.format("settle_icon_%d.png", TAKS_OTHER_TYPE), ccui.TextureResType.plistType)
        self._lostTypeSp:setVisible(true)
    else
        self._lostTypeSp:setVisible(false)
    end
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

return WinLostItemNode