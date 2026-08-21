local RoomInfoView = CF.gameClass("RoomInfoView", "game.GameBase.Modules.RoomInfo.View")
local CardEnum = CF.gameRequire("Define.CardEnum")
CF.gameRequire("Modules.GameLayer.CardRule")

function RoomInfoView:getProxyEvents()
    local proxyEvents = RoomInfoView.super.getProxyEvents(self)
    proxyEvents[#proxyEvents + 1] = {module = CF.roomData, eventKeyName = "EVENT_MULTIPLE_CHANGED", callBack = "onMultipleChanged"}
    proxyEvents[#proxyEvents + 1] =  { module = CF.roomData, eventKeyName = "EVENT_CLEAR_TABLE", callBack = "onClearTable"}

    return proxyEvents
end

function RoomInfoView:getInfoNodeConfig()
    if CF.roomData:isGoldRoom() then
        return {
            {Name = "baseScore", NodeType = self.INFO_NODE_TYPE.ONE, KeyStr = "底    分", DefaultValueStr = "-", DefaultVisible = true},
            {Name = "winLost", NodeType = self.INFO_NODE_TYPE.ONE, KeyStr = "倍    数", DefaultValueStr = "-", DefaultVisible = true}
        }
    end
    return {
        {Name = "roomID", NodeType = self.INFO_NODE_TYPE.ONE, KeyStr = "房间号", DefaultValueStr = "------", DefaultVisible = true},
        {Name = "playCount", NodeType = self.INFO_NODE_TYPE.ONE, KeyStr = "局    数", DefaultValueStr = "-/-", DefaultVisible = true},
    }
end

function RoomInfoView:onMultipleChanged(event)
    self:setOneInfoNodeValue("winLost", "x" .. CF.roomData:getMultiple())
end

--游戏规则更新
function RoomInfoView:onGameRuleChanged(event)
    RoomInfoView.super.onGameRuleChanged(self, event)
    local strGameRule = CF.roomData:getGameRule()
    if string.find(strGameRule, "有牌必压") then
        CF.roomData:setIsMustOut(true)
    end
    if string.find(strGameRule, "王可单出") then
        CardRule:setJokerDanYa2(true)
    end
end

function RoomInfoView:onClearTable(event)
    if CF.roomData:isGoldRoom() then
        self:setOneInfoNodeValue("winLost", "x" .. 1)
        self:setOneInfoNodeValue("baseScore", "--")
    end
end 

return RoomInfoView