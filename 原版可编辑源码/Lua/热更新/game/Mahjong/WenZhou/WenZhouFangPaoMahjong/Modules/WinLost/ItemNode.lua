local WinLostItemNode = CF.gameClass("WinLostItemNode", "game.Mahjong.BasicMahjong.Modules.WinLost.ItemNode")

function WinLostItemNode:updateSettleUI()
    WinLostItemNode.super.updateSettleUI(self)

    local KW_LOST_END_TYPE_PNG = {   
        [2] = "settle_icon_3.png",     --点炮
        [3] = "settle_icon_5.png",     --放杠
    }
    local lostEndType = self:getWinLostData():getLostEndType(self._seatId)
    if lostEndType and KW_LOST_END_TYPE_PNG[lostEndType] then
        self._lostTypeSp:loadTexture(KW_LOST_END_TYPE_PNG[lostEndType], ccui.TextureResType.plistType)
        self._lostTypeSp:setVisible(true)
    else
        self._lostTypeSp:setVisible(false)
    end
end

return WinLostItemNode