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
	self._playCount = CF.roomData:getPlayCount()
	self._maxPlayCount = CF.roomData:getMaxPlayCount()
    if self._maxPlayCount == 999 then  --打节特殊显示
        self._roomJuShuLabel:setString("第"..self._playCount.."局")
    else
        self._roomJuShuLabel:setString("局数"..self._playCount.."/"..self._maxPlayCount)
    end


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
	self:initCutCard()
	self:initShuffle()
    local winLostData = CF.game:getModule("WinLost"):getWinLostData()
	if winLostData.getIsJiGangFen and winLostData:getIsJiGangFen() then
		self._imgGang:setVisible(true)
		self._imgGang:ignoreContentAdaptWithSize(true)
	end
end

function WinLostView:onTimeClose()

end

function WinLostView:onUpdateUI()
    WinLostView.super.onUpdateUI(self)
    local isFinal = CF.roomData:getIsGameOver()
    self._checkTableBtn:setVisible(not isFinal)
end

return WinLostView
