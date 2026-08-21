local WinLostItemNode = CF.gameClass("WinLostItemNode", "game.Mahjong.ZhouShanMahjong.BaseZhouShanMahjong.Modules.WinLost.ItemNode")

function WinLostItemNode:updateSettleUI()
    WinLostItemNode.super.updateSettleUI(self)
    -- 显示详情
    local max_size = 1710
    local size = self._detailLabel:getContentSize()
    if size.width > 1710 then
        self._detailLabel:setFontSize(math.floor(1710/size.width*30))
    end
end

function WinLostItemNode:updataFlowerMah(flowerMahs)
    WinLostItemNode.super.updataFlowerMah(self, flowerMahs)
    self._panelFlower:setPositionY(40)
    self._panelFlower:setScale(0.38)
end

return WinLostItemNode