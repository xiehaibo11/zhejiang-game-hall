local WinLostView = CF.gameClass("WinLostView", "game.Mahjong.BasicMahjong.Modules.WinLost.View")

function WinLostView:createChildren()
    WinLostView.super.createChildren(self)

    if self._imgGang then
		self._imgGang:setVisible(true)
	end
    self._listView:removeAllChildren()
	local SettleItemNode = CF.gameRequire("Modules.WinLost.ItemNode")
	for i = 0, CF.roomData:getChairs() - 1 do
		local item = SettleItemNode.new({seatId = i})
		self._listView:addChild(item)
	end
end

function WinLostView:onUpdateUI()
	WinLostView.super.onUpdateUI(self)
    self._imgGang:setVisible(true)
    self._imgFan:setVisible(false)
    self._imgGang:setPosition(cc.p(self._imgFan:getPositionX(), self._imgFan:getPositionY()))
end

return WinLostView