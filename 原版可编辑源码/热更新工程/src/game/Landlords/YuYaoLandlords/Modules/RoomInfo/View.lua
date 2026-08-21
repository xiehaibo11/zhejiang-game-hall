local RoomInfoView = CF.gameClass("RoomInfoView", "game.GameBase.Modules.RoomInfo.View")

function RoomInfoView:ctor()
    RoomInfoView.super.ctor(self)
    self:onGameRateChanged({bActionSign = true})
end

function RoomInfoView:initUI()
    RoomInfoView.super.initUI(self)
    if self._uLeftWarningText then
        self._uLeftWarningText:setVisible(false)
    end
end

function RoomInfoView:getProxyEvents()
    local proxyEvents = RoomInfoView.super.getProxyEvents(self)
    proxyEvents[#proxyEvents + 1] = { module = CF.roomData, eventKeyName = "EVENT_RATE_CHANGED", callBack = "onGameRateChanged" }
    proxyEvents[#proxyEvents+1] = {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_GAME_CALL_POINT", callBack = "onGameCallPointChanged"}
    return proxyEvents
end

function RoomInfoView:getInfoNodeConfig()
    if CF.roomData:isGoldRoom() then
        return {
            {Name = "baseScore", NodeType = self.INFO_NODE_TYPE.ONE, KeyStr = "底    分", DefaultValueStr = "-", DefaultVisible = true},
            {Name = "gameRate", NodeType = self.INFO_NODE_TYPE.ONE, KeyStr = "倍   率", DefaultValueStr = "-", DefaultVisible = true}
        }
    end
    return {
        {Name = "roomID", NodeType = self.INFO_NODE_TYPE.ONE, KeyStr = "房间号", DefaultValueStr = "------", DefaultVisible = true},
        --局数
        {Name = "playCount", NodeType = self.INFO_NODE_TYPE.ONE, KeyStr = "局    数", DefaultValueStr = "-/-", DefaultVisible = true},
        --底分
        {Name = "baseScore", NodeType = self.INFO_NODE_TYPE.ONE, KeyStr = "底    分", DefaultValueStr = "-", DefaultVisible = true},
        --叫分
        {Name = "callScore", NodeType = self.INFO_NODE_TYPE.ONE, KeyStr = "叫    分", DefaultValueStr = "0", DefaultVisible = true}
    }
end

function RoomInfoView:onGameRateChanged(event)
end

function RoomInfoView:onGameCallPointChanged(event)
    local callPoint = event.msg.callPoint
    local callScoreText = self:getInfoNodeByName("callScore")._valueText
    if callScoreText then
        callScoreText:setString(string.format("%d", callPoint))
    end
end

return RoomInfoView