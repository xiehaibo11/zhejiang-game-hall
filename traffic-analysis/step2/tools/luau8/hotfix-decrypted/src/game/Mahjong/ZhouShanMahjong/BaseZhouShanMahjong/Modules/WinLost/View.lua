local WinLostView = CF.gameClass("WinLostView", "game.Mahjong.BasicMahjong.Modules.WinLost.View")

function WinLostView:createChildren()
    WinLostView.super.createChildren(self)
    local gameData = CF.game:getModule("GameLayer"):getGameData()
    self._maxPlayCount = CF.roomData:getMaxPlayCount()
    if self._maxPlayCount >= 99 then
        -- 2小圈1大圈显示，大于99局时表示以圈数计算
        local strQuan = gameData:getQuanJuStr()
        self._roomJuShuLabel:setString(strQuan)
    end
end

function WinLostView:initItemList()
	local SettleItemNode = CF.gameRequire("Modules.WinLost.ItemNode")
    self._listView:removeAllChildren()
	local len = CF.roomData:getChairs()
	for i = 1, len do
		local item = SettleItemNode.new({seatId = i - 1})
		self._listView:addChild(item)
	end
end

--最后一局小结束时，取消自动跳转大结束
function WinLostView:onTimeClose()
	if self:isShowBigWinLost() then
		return
	end
	WinLostView.super.onTimeClose(self)
end

return WinLostView
