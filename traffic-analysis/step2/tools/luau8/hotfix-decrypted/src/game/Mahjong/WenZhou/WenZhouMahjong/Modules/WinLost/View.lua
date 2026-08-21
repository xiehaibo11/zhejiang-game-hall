local WinLostView = CF.gameClass("WinLostView", "game.Mahjong.BasicMahjong.Modules.WinLost.View")

function WinLostView:createChildren()
    local SettleItemNode = CF.gameRequire("Modules.WinLost.ItemNode")
	for i = 0, CF.roomData:getChairs() - 1 do
		local item = SettleItemNode.new({seatId = i})
		self._listView:addChild(item)
	end

	--房间号
	local roomId = CF.roomData:getRoomID()
	local roomNum = string.format("房间号:%06d", roomId)
	self._roomNumLabel:setString(roomNum)

	--局数信息
	--局数信息
	self._playCount = CF.roomData:getPlayCount()
	self._maxPlayCount = CF.roomData:getMaxPlayCount()
	self._roomJuShuLabel:setString("局数"..self._playCount.."/"..self._maxPlayCount)
	

	--系统时间
	local expirydate = os.date("%Y-%m-%d  %H:%M:%S", os.time())
	self._timeLabel:setString(expirydate)
	local isPlayBack = false
	self._timeLabel:setVisible(not isPlayBack)

	self:initGameRule()
	
	self:onUpdateUI()
	
	--不显示番字
    if self._imgFan then
	    self._imgFan:setVisible(false)
	end
	
	self:setShufflePropType()
	self:setShufflePropCount()

	--显示洗牌按钮
	self:initCutCard()
	self:initShuffle()
end

return WinLostView�