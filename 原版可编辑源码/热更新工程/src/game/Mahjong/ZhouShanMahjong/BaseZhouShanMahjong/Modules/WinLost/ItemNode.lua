local WinLostItemNode = CF.gameClass("WinLostItemNode", "game.Mahjong.BasicMahjong.Modules.WinLost.ItemNode")


function WinLostItemNode:updateSettleUI()
    WinLostItemNode.super.updateSettleUI(self)
    -- 显示详情
    local strDetail = self:getWinLostData():getDetail(self._seatId)
    self._detailLabel:setString(strDetail)
end

--function WinLostItemNode:updataFlowerMah(flowerMahs)
--    local config = CF.game:getSettingData():getDefaultData(nil, true)
--    local localSeat = CF.gameFunction.seatToLocal(self._seatId)
--    self._settleFlowerMahs = UIMahFlowerArea.new(localSeat, config, true)
--    self._KW_PANEL_FLOWER:addChild(self._settleFlowerMahs)
--    self._settleFlowerMahs:setFlowers(flowerMahs)
--    self._KW_PANEL_FLOWER:setPositionY(125)
--    self._KW_PANEL_FLOWER:setPositionX(self._KW_PANEL_FLOWER:getPositionX() + 150)
--    self._KW_PANEL_FLOWER:setScale(0.32)
--end

return WinLostItemNode