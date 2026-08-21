local WinLostView = CF.gameClass("WinLostView", "game.Mahjong.BasicMahjong.Modules.WinLost.View")

function WinLostView:createChildren()
    WinLostView.super.createChildren(self)

    self._listView:removeAllChildren()
	local SettleItemNode = CF.gameRequire("Modules.WinLost.ItemNode")
	for i = 0, CF.roomData:getChairs() - 1 do
		local item = SettleItemNode.new({seatId = i})
		self._listView:addChild(item)
	end
end

return WinLostView