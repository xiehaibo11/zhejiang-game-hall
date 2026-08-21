local WinLostView = CF.gameClass("WinLostView", "game.Mahjong.JinHuaMahjong.JHBaseMahjong.Modules.WinLost.View")

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

	self:setShufflePropType()
	self:setShufflePropCount()

	--显示洗牌按钮
	if CF.roomData:isGoldRoom() then
		self:updateGuideLayer()
	end

	--显示洗牌按钮
	if CF.game:getModule("WinLost"):needShowShuffleButton() then
		--洗牌券的道具id
		local propId = CF.gameSub:getShufflePropQuanID()
		local shuffleQuanCount = CF.game:getModule("PropUse"):getPropCnt(propId)
		local posX = {-600, 0, 600}
		if shuffleQuanCount and shuffleQuanCount > 0 then
			self._shuffleBtn:setVisible(false)
			self._shuffleQuanBtn:setVisible(true)
			local btn = {self._checkTableBtn, self._shuffleQuanBtn, self._nextGameBtn}
			for i, _ in ipairs(btn) do
				btn[i]:setPositionX(posX[i])
			end
			self._txtShufflePropCount:setString("x" .. shuffleQuanCount)
		else
			self._shuffleBtn:setVisible(true)
			self._shuffleQuanBtn:setVisible(false)
			local btn = {self._checkTableBtn, self._shuffleBtn, self._nextGameBtn}
			for i, _ in ipairs(btn) do
				btn[i]:setPositionX(posX[i])
			end
		end
	end
    self:initCutCard()
    self:flushPosWithCut()
end

return WinLostView