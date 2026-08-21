local WinLostItemNode = CF.gameClass("WinLostItemNode", "game.Mahjong.BasicMahjong.Modules.WinLost.ItemNode")

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
    -- 因为不兼容17张牌的时候的情况，所以移动位置
    self._lostTypeSp:setPositionX((self._fanLabel:getPositionX() + self._hejiLabel:getPositionX()) * 0.5)
end

return WinLostItemNode