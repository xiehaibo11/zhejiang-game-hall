local RoomInfoView = CF.gameClass("RoomInfoView", "game.Mahjong.BasicMahjong.Modules.RoomInfo.View")

RoomInfoView.GAME_MODE = {
    GAME_MODE_JU = 0,
    GAME_MODE_CIRCLE = 1,
}

function RoomInfoView:getProxyEvents()
    local proxyEvents = RoomInfoView.super.getProxyEvents(self)
    proxyEvents[#proxyEvents + 1] = { module = CF.game:getModule("RoomInfo"), eventKeyName = "EVENT_GAME_PLAYCOUNT_TYPE_CHANGED", callBack = "onPlayTypeChanged" }
    return proxyEvents
end

function RoomInfoView:getInfoNodeConfig()
    if CF.roomData:isGoldRoom() then
        return {
            {Name = "baseScore", NodeType = self.INFO_NODE_TYPE.ONE, KeyStr = "底    分", DefaultValueStr = "-", DefaultVisible = true},
            {Name = "addMultiple", NodeType = self.INFO_NODE_TYPE.ONE, KeyStr = "倍    数", DefaultValueStr = "x1", DefaultVisible = false}
        }
    end
    return {
        {Name = "roomID", NodeType = self.INFO_NODE_TYPE.ONE, KeyStr = "房间号", DefaultValueStr = "------", DefaultVisible = true},
        {Name = "playCount", NodeType = self.INFO_NODE_TYPE.ONE, KeyStr = "局    数", DefaultValueStr = "-/-", DefaultVisible = true},
    }
end

function RoomInfoView:onPlayTypeChanged(event)
	local gameMode = event.msg.gameMode or 0
	CF.roomData:setGameRoomMode(gameMode)
	if gameMode == CF.roomData.GAME_MODE.GAME_MODE_JU then
		self:getInfoNodeByName("playCount")._keyText:setString("局    数")
	elseif gameMode == CF.roomData.GAME_MODE.GAME_MODE_CIRCLE then
		self:getInfoNodeByName("playCount")._keyText:setString("圈    数")
	end
end


return RoomInfoView