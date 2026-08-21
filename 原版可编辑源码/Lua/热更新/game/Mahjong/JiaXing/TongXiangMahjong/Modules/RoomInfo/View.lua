local RoomInfoView = CF.gameClass("RoomInfoView", "game.Mahjong.BasicMahjong.Modules.RoomInfo.View")

function RoomInfoView:getProxyEvents()
    local proxyEvents = RoomInfoView.super.getProxyEvents(self)
    proxyEvents[#proxyEvents + 1] = { module = CF.game:getModule("RoomInfo"), eventKeyName = "EVENT_UPDATE_BASE_SCORE", callBack = "onBaseScore" }
    return proxyEvents
end

function RoomInfoView:getInfoNodeConfig()
    local infoNodeCfg = RoomInfoView.super.getInfoNodeConfig(self)
    if not CF.roomData:isGoldRoom() then
        infoNodeCfg[#infoNodeCfg + 1] = {Name = "baseScore", NodeType = self.INFO_NODE_TYPE.ONE, KeyStr = "底    分", DefaultValueStr = "-", DefaultVisible = true}
    end
    return infoNodeCfg
end

function RoomInfoView:onBaseScore(event)
    self:setOneInfoNodeValue("baseScore", event.base)
end

return RoomInfoView