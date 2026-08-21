local WinLostView = CF.gameClass("WinLostView", "game.Mahjong.BasicMahjong.Modules.WinLost.View")

WinLostView.EndTypeEx =
    {
        [0] = "img_result_win.png",  --胜利
        [1] = "img_result_lost.png",  --失败
        [2] = "settle_text_liuju.png",  --流局
    }

function WinLostView:createChildren()
    cc.SpriteFrameCache:getInstance():addSpriteFrames("cocosStudio/MahjongNew/GameLayer/Image/HangZhou/hangzhou.plist")
    WinLostView.super.createChildren(self)
end

function WinLostView:onUpdateUI()
    local selfSeat = self:getWinLostData():getSelfSeat()
    local score = self:getWinLostData():getWinLost(selfSeat)
    local endType = 1
    if score then
        endType = score > 0 and 0 or (score < 0 and 1 or 2)
    end
    self._titleSp:loadTexture(WinLostView.EndTypeEx[endType], ccui.TextureResType.plistType)

    if CF.roomData:getIsSeer() and self._exitWatchBtn then
		self._exitWatchBtn:setVisible(true)
	end

    local bigSettleData = CF.game:getModule("BigWinLost"):getBigWinLostData()
    self._checkTableBtn:setVisible(self._playCount ~= self._maxPlayCount and (not bigSettleData or not bigSettleData.over))
    self._imgFan:setVisible(self:getWinLostData():getIsShowFan())
    if bigSettleData then
		self._checkBillBtn:setVisible(true)
		self._nextGameBtn:setVisible(false)
        self._exitWatchBtn:setVisible(false)
	end
end

--下一局游戏
function WinLostView:onNextGameClicked(send, eventType)
    local bigSettleData = CF.game:getModule("BigWinLost"):getBigWinLostData()
    if self._playCount < self._maxPlayCount and (not bigSettleData or not bigSettleData.over) then
		if CF.roomData:getIsSeer() and CF.roomData:isDelayWatch() then
            self:close()
			CF.game:getModule("WatchGame"):changeToRealWatch()
            return
		end
        CF.msgManager:sendGameStart()
        self:clearReadyTip()
    else
        if bigSettleData then
            CF.roomData:setCanContinueBool(false)
            CF.gameRequire("Modules.BigWinLost.View").new(bigSettleData):showSelf()
        end
    end
    self:recordWinLostData()
    
    self:close()
end

return WinLostView�