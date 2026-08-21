local RoomInfoModule = CF.gameClass("RoomInfoModule", "game.Mahjong.JinHuaMahjong.JHBaseMahjong.Modules.RoomInfo.Module")

function RoomInfoModule:getSubXYDealList()
	local xyDealList = RoomInfoModule.super.getSubXYDealList(self)
	return xyDealList
end

--兰溪底分在PanData处理
function RoomInfoModule:onMsgBaseScore(msgData)
end

function RoomInfoModule:onMsgPlayCount(msgData)
    RoomInfoModule.super.onMsgPlayCount(self, msgData)
end

return RoomInfoModule
�