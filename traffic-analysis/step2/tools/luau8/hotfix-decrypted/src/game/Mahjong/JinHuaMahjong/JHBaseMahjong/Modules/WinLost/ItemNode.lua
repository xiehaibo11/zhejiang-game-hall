local WinLostItemNode = CF.gameClass("WinLostItemNode", "game.Mahjong.BasicMahjong.Modules.WinLost.ItemNode")

WinLostItemNode.KW_LOST_END_TYPE_PNG =
    {
        [0] = "settle_text_escape.png",  --逃跑
        --    [1] = "hu_type_zimo.png",  --自摸
        [2] = "settle_icon_3.png",  --点炮
        [3] = "settle_icon_5.png", --抢杠
    --    [5] = "hu_type_liuju.png", --流局
    }

function WinLostItemNode:updateSettleUI()
    WinLostItemNode.super.updateSettleUI(self)
    if self._fanLabel then
        self._fanLabel:setVisible(false)     -- 不显示番信息
    end
    local lostEndType = self:getWinLostData():getLostEndType(self._seatId)
    if lostEndType and WinLostItemNode.KW_LOST_END_TYPE_PNG[lostEndType] then
        self._lostTypeSp:loadTexture(string.format(WinLostItemNode.KW_LOST_END_TYPE_PNG[lostEndType]), ccui.TextureResType.plistType)
        self._lostTypeSp:setVisible(true)
    else
        self._lostTypeSp:setVisible(false)
    end
end

return WinLostItemNode