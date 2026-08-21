local WinLostView = CF.gameClass("WinLostView", "game.Mahjong.NewHangZhouMahjong.HangZhouMahjongBase.Modules.WinLost.View")

function WinLostView:createChildren()
	WinLostView.super.createChildren(self)

    local SettleItemNode = CF.gameRequire("Modules.WinLost.ItemNode")
    self._listView:removeAllChildren()
    for i = 1, CF.roomData:getChairs() do
        local item = SettleItemNode.new({seatId = i - 1})
        self._listView:addChild(item)
    end

    self._imgFan:setVisible(true)
    self._imgFan:ignoreContentAdaptWithSize(true)
    self._imgFan:loadTexture("img_result_tainum.png", ccui.TextureResType.plistType)
end


return WinLostView