local RoomInfoView = CF.gameClass("RoomInfoView", "game.Mahjong.BasicMahjong.Modules.RoomInfo.View")

function RoomInfoView:getInfoNodeConfig()
    if CF.roomData:isGoldRoom() then
        return {
            {Name = "baseScore", NodeType = self.INFO_NODE_TYPE.ONE, KeyStr = "底分", DefaultValueStr = "-", DefaultVisible = true},
            {Name = "addMultiple", NodeType = self.INFO_NODE_TYPE.TWO, KeyStr1 = " 倍数", DefaultValueStr1 = "x1", KeyStr2 = "    连庄", DefaultValueStr2 = " 1", DefaultVisible = true}
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
    -- proxyEvents[#proxyEvents + 1] = { module = CF.game:getModule("AddMultiple"), eventKeyName = "EVENT_ADD_MULTIPLE_INFO", callBack = "onUpdateAddMultipleInfo" }
    -- proxyEvents[#proxyEvents + 1] = {module = CF.roomData, eventKeyName = "EVENT_CLEAR_TABLE", callBack = "onClearTable"}
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
    self:setTwoInfoNodeValue("addMultiple",2, event.msg.value)
end

function RoomInfoView:onUpdateAddMultipleInfo(event)
    if event.msg == nil then
        return
    end
    if event.msg.data == nil then
        return
    end

    if event.msg.data.multi == nil then
        return
    end
    self:setTwoInfoNodeValue("addMultiple",1, "x" .. event.msg.data.multi)
end

function RoomInfoView:onClearTable(event)
    self:setTwoInfoNodeValue("addMultiple",1, "x" .. 1)
    self:setOneInfoNodeValue("baseScore", "--")
end 

return RoomInfoView