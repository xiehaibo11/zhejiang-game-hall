local WinLostItemNode = CF.gameClass("WinLostItemNode", "game.Mahjong.BasicMahjong.Modules.WinLost.ItemNode")

local UIMahFlowerArea = CF.gameRequire("Modules.GameLayer.View2D.UIMahFlowerArea")

function WinLostItemNode:updatePlayerHeadUI()
    WinLostItemNode.super.updatePlayerHeadUI(self)
    if self._fanLabel then
        self._fanLabel:setVisible(false)
    end
end

function WinLostItemNode:updateSettleUI()
    WinLostItemNode.super.updateSettleUI(self)
    self:showCatchBirdMahs()
end

function WinLostItemNode:showCatchBirdMahs()
    local birdMahs = self:getWinLostData():getCatchBirdMahs(self._seatId)
    if not birdMahs then
        return
    end
    if #birdMahs == 0 then
        return
    end
    local config = CF.settingData:getDefaultData(nil, true)

    --显示买马牌
    local parent = self._panelFlower:getParent()
    local rootNode = self._panelFlower:clone()
    rootNode:removeAllChildren()
    parent:addChild(rootNode)
    rootNode:setPositionX(self._panelFlower:getPositionX() - 150)
    self._catchBirdMahs = UIMahFlowerArea.new(CF.GameDefine.LOCAL_SEAT.BOTTOM, config)
    rootNode:addChild(self._catchBirdMahs)
    self._catchBirdMahs:setFlowers(birdMahs)
    rootNode:setScale(0.32)
end

return WinLostItemNode	