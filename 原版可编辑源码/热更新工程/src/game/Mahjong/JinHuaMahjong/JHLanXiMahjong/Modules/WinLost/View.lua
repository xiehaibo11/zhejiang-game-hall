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

	if self._maxPlayCount > 900 then
		self._roomJuShuLabel:setString("局数"..self._playCount)
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

    --不显示番字
    if self._imgFan then
        self._imgFan:setVisible(false)
	end

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

function WinLostView:onUpdateUI()
	WinLostView.super.onUpdateUI(self)
	local winLostData = CF.game:getModule("WinLost"):getWinLostData()
	local endType = winLostData:getEndType() or -1
	local endSeat = winLostData:getEndSeat() or -1
    --判断承包着座位号
	if endType == CF.GameDefine.HU_TYPE.ET_DISCARD then --点炮
		if  CF.roomData:getChairs() > 2 then
			for seat = 0,CF.roomData:getMaxPlayer() -1 do
				winLostData:setIsContract(seat,false)
				local score = winLostData:getWinLost(seat) or 0
				if score == 0 and endSeat >=0 then
					winLostData:setIsContract(endSeat,true)
				end
			end
		end
	end
end

function WinLostView:onTimeClose()
	local isLastCoutn = CF.roomData:getIsGameOver()
	self._uContinueTime:setVisible(isLastCoutn)
	self._curTime = 0
	if isLastCoutn and not CF.roomData:isGoldRoom() then
		self._curTime = 3
    elseif CF.roomData:isGoldRoom() then
		self._curTime = 10
		self._uContinueTime:setVisible(true)

		-- 手指引导
		local lobbyID = CF.areaData:getLobbyID()
		local hasGuide = cc.UserDefault:getInstance():getBoolForKey("GOLD_MAHJONG_NEXT_ANI_" .. lobbyID, false)
		if self._aniNextGame and not hasGuide then
			self._aniNextGame:setVisible(true)
		end
		cc.UserDefault:getInstance():setBoolForKey("GOLD_MAHJONG_NEXT_ANI_" .. lobbyID, true)
	end

	if self._curTime ~= 0 then
		self._uContinueTime:stopAllActions()
		self._uContinueTime:setString(self._curTime .. "s")
		CF.UITool.createRepeateAction(self._uContinueTime, 1,  function ()
			self._curTime = self._curTime - 1
			if self._curTime >= 0 then
				self._uContinueTime:setString(self._curTime .. "s")
			else
				self._uContinueTime:stopAllActions()
				if CF.roomData:isGoldRoom() then
					self._uContinueTime:setVisible(false)
				else
					self:onNextGameClicked(nil, ccui.TouchEventType.ended)
				end
			end
		end)
	end
end


return WinLostView