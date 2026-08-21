local WinLostView = CF.gameClass("WinLostView", "game.Mahjong.NewHangZhouMahjong.HangZhouMahjongBase.Modules.WinLost.View")

function WinLostView:createChildren()
    WinLostView.super.createChildren(self)
    if CF.roomData:getGameID() == 30140 and CF.roomData:getChairs() < 3 then
        return
    end
    self._listView:removeAllChildren()
    
    local SettleItemNode = CF.gameRequire("Modules.WinLost.ItemNode")
    for i = 1, CF.roomData._chairs do
        local seat = CF.roomData:localToSeat(i)
        if seat and seat ~= -1 then
            local item = SettleItemNode.new({seatId = seat})
            self._listView:addChild(item)
        end
    end

end

function WinLostView:onUpdateUI()
    -- local selfSeat = self:getWinLostData():getSelfSeat()
    -- local score = self:getWinLostData():getWinLost(selfSeat)
    -- local endType = 1
    -- if score then
    --     endType = score > 0 and 0 or (score < 0 and 1 or 2)
    -- end
    local gameData = CF.game:getModule("GameLayer"):getGameData()
	local huseats = gameData:getHuSeat()
    local endType = self:getWinLostData():getEndType()
    if endType ~= CF.GameDefine.END_TYPE.ET_DRAWN then
        local bHuSeat = false
        for i = 1, #huseats do
            if huseats[i] == self:getWinLostData():getSelfSeat() then
                bHuSeat = true
                break
            end
        end
        if bHuSeat then
            endType = 0
        else
            endType = 1
        end
    else
        endType = 2
    end
    self._titleSp:loadTexture(WinLostView.EndTypeEx[endType], ccui.TextureResType.plistType)

    if CF.roomData:getIsSeer() and self._exitWatchBtn then
		self._exitWatchBtn:setVisible(true)
	end

    local bigSettleData = CF.game:getModule("BigWinLost"):getBigWinLostData()
    self._checkTableBtn:setVisible(self._playCount ~= self._maxPlayCount and (not bigSettleData or not bigSettleData.over))
    self._imgFan:setVisible(self:getWinLostData():getIsShowFan())
    if CF.roomData:getIsGameOver() then
        self._checkBillBtn:setVisible(true)
		self._nextGameBtn:setVisible(false)
        self._exitWatchBtn:setVisible(false)
    end
end

function WinLostView:onTimeClose()
    local isLastCoutn =  self._playCount == self._maxPlayCount
	self._uContinueTime:setVisible(isLastCoutn)
	self._curTime = 0
	if isLastCoutn and not CF.roomData:isGoldRoom() then
		self._curTime = 3
	elseif CF.roomData:isGoldRoom() then
		self._curTime = 10
		self._uContinueTime:setVisible(true)
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
    else 
        if CF.roomData and CF.roomData:getIsGameOver() then
            self._curTime = 3
        else
            WinLostView.super.onTimeClose(self)
            return
        end

        self._uContinueTime:stopAllActions()
        self._uContinueTime:setString(self._curTime .. "s")

        CF.UITool.createRepeateAction(self._uContinueTime, 1,  function ()
            self._curTime = self._curTime - 1
            if self._curTime >= 0 then
                self._uContinueTime:setString(self._curTime .. "s")
            else
                self._uContinueTime:stopAllActions()
                if CF.roomData and CF.roomData:getIsGameOver() then 
                    if CF.roomData:isGoldRoom() then
                        self._uContinueTime:setVisible(false)
                    else 
                        self:onNextGameClicked(nil, ccui.TouchEventType.ended)
                    end
                end
            end
        end)
    end
end

return WinLostView+