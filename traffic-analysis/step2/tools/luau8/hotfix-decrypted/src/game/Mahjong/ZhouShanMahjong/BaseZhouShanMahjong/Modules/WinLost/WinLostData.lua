local WinLostData = CF.gameClass("WinLostData", "game.Mahjong.BasicMahjong.Modules.WinLost.WinLostData")

function WinLostData:initDatas()
    WinLostData.super.initDatas(self)
    self._detail = {}
    self._huShowType = {}
end

function WinLostData:setDetail(tDetail)
	self._detail = tDetail
end

function WinLostData:getDetail(seat)
	return self._detail[seat]
end

function WinLostData:setHuShowType(tHuType)
	self._huShowType = tHuType
end

function WinLostData:getHuShowType(seat)
	return self._huShowType[seat]
end

return WinLostData4