local WinLostData = CF.gameClass("WinLostModule", "game.Mahjong.BasicMahjong.Modules.WinLost.WinLostData")

WinLostData.EVENT_SETTLE_CLOSE = "EVENT_SETTLE_CLOSE"

local DEFAULT_DELAY_TIME = 0.8

function WinLostData:onSettleHide()
    self:dispatchEvent( { name = self.EVENT_SETTLE_CLOSE })
end

function WinLostData:getEndType()
	return self._sEndType
end

function WinLostData:getEndSeat()
	return self._endSeat
end

function WinLostData:getDelayTime()
    return self._delayTime > 0 and self._delayTime or DEFAULT_DELAY_TIME
end

return WinLostData