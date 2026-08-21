local RoomInfoView = CF.gameClass("RoomInfoView", "game.GameBase.Modules.RoomInfo.View")

function RoomInfoView:getProxyEvents()
    local proxyEvents = RoomInfoView.super.getProxyEvents(self)
    proxyEvents[#proxyEvents + 1] = {module = CF.roomData, eventKeyName = "EVENT_CLEAR_TABLE", callBack = "onClearTable"}
    proxyEvents[#proxyEvents + 1] = {module = CF.game:getModule("Continue"), eventKeyName = "EVENT_GAME_CONTINUE", callBack = "onGameContinue"}
    return proxyEvents
end

function RoomInfoView:getCSBPath()
    return "cocosStudio/Common/CSB/GameBase/RoomInfoLayerMajiang.csb"
end

function RoomInfoView:isHaveLeftRule()
    return true
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

function RoomInfoView:onClearTable(event)
    if CF.roomData:isGoldRoom() then
        self:setOneInfoNodeValue("addMultiple", "x" .. 1)
        self:setOneInfoNodeValue("baseScore", "--")
    end
end 

--续桌
function RoomInfoView:onGameContinue(event)
    if not CF.roomData:isSupportNewContinue() then
        return
    end
    local msg = event.msg 
    if msg.bSuccess then
        self:setOneInfoNodeValue("playCount", "-/-")
    end
end

return RoomInfoView