local RoomInfoView = CF.gameClass("RoomInfoView", "game.GameBase.Modules.RoomInfo.View")

function RoomInfoView:ctor()
    RoomInfoView.super.ctor(self)
    self:onGameRateChanged({bActionSign = true})
end

function RoomInfoView:getProxyEvents()
    local proxyEvents = RoomInfoView.super.getProxyEvents(self)
    proxyEvents[#proxyEvents + 1] = { module = CF.roomData, eventKeyName = "EVENT_RATE_CHANGED", callBack = "onGameRateChanged" }
    proxyEvents[#proxyEvents + 1] =  { module = CF.roomData, eventKeyName = "EVENT_CLEAR_TABLE", callBack = "onClearTable"}
    return proxyEvents
end

function RoomInfoView:getInfoNodeConfig()
    if CF.roomData:isGoldRoom() then
        return {
            {Name = "baseScore", NodeType = self.INFO_NODE_TYPE.ONE, KeyStr = "底   分", DefaultValueStr = "-", DefaultVisible = true},
            {Name = "gameRate", NodeType = self.INFO_NODE_TYPE.ONE, KeyStr = "倍   率", DefaultValueStr = "-", DefaultVisible = true}
        }
    end
    return {
        {Name = "roomID", NodeType = self.INFO_NODE_TYPE.ONE, KeyStr = "房间号", DefaultValueStr = "------", DefaultVisible = true},
        --局数
        {Name = "playCount", NodeType = self.INFO_NODE_TYPE.ONE, KeyStr = "局    数", DefaultValueStr = "-/-", DefaultVisible = true},
        --底分
        {Name = "baseScore", NodeType = self.INFO_NODE_TYPE.ONE, KeyStr = "底    分", DefaultValueStr = "-", DefaultVisible = true},
        --倍率
        {Name = "gameRate", NodeType = self.INFO_NODE_TYPE.ONE, KeyStr = "倍    率", DefaultValueStr = "1", DefaultVisible = true}
    }
end

function RoomInfoView:onGameRateChanged(event)
	local gameRateNum = CF.roomData:getGameRate()
 	local bActionSign = event.bActionSign
    local nodeMutText = self:getInfoNodeByName("gameRate")._valueText
    if not nodeMutText then return end
    if bActionSign then
        nodeMutText:setString(string.format("x%d", gameRateNum))
        local scaleAni = cc.Sequence:create(cc.ScaleTo:create(0.2, 2),cc.ScaleTo:create(0.2, 1))
        nodeMutText:runAction(scaleAni)
    else
        nodeMutText:setString(string.format("x%d", gameRateNum))
    end
end

function RoomInfoView:onClearTable(event)
    if CF.roomData:isGoldRoom() then
        self:setOneInfoNodeValue("gameRate", "-")
        self:setOneInfoNodeValue("baseScore", "-")
    end
end 

return RoomInfoViewr	