local RoomInfoView = CF.gameClass("RoomInfoView", "game.Mahjong.BasicMahjong.Modules.RoomInfo.View")

function RoomInfoView:getInfoNodeConfig()
    if CF.roomData:isGoldRoom() then
        return {
            {Name = "baseScore", NodeType = self.INFO_NODE_TYPE.ONE, KeyStr = "底分:", DefaultValueStr = "-", DefaultVisible = true},
            {Name = "laoZhuang", NodeType = self.INFO_NODE_TYPE.ONE, KeyStr = "连庄:", DefaultValueStr = "1", DefaultVisible = true},
        }
    end
    return {
        {Name = "roomID", NodeType = self.INFO_NODE_TYPE.ONE, KeyStr = "房间号", DefaultValueStr = "------", DefaultVisible = true},
        {Name = "playCount", NodeType = self.INFO_NODE_TYPE.ONE, KeyStr = "局    数", DefaultValueStr = "-/-", DefaultVisible = true},
    }
end

function RoomInfoView:getProxyEvents()
    local proxyEvents = RoomInfoView.super.getProxyEvents(self)
    proxyEvents[#proxyEvents + 1] = { module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_UPDATE_LAO_ZHUANG", callBack = "onUpdateLaoZhaung" }
    return proxyEvents
end

--更新牢庄信息
function RoomInfoView:onUpdateLaoZhaung(event)
    if event.msg == nil then
        return
    end
    if event.msg.value == nil then
        return
    end
    self:setOneInfoNodeValue("laoZhuang", event.msg.value)
end

return RoomInfoView