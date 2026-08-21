local RoomInfoView = CF.gameClass("RoomInfoView", "game.Mahjong.TaiZhou.BasicTaiZhouMahjong.Modules.RoomInfo.View")

function RoomInfoView:getInfoNodeConfig()
    if CF.roomData:isGoldRoom() then
        return {
            {Name = "baseScore", NodeType = self.INFO_NODE_TYPE.ONE, KeyStr = "底    分", DefaultValueStr = "-", DefaultVisible = true},
        }
    end
    return {
        {Name = "roomID", NodeType = self.INFO_NODE_TYPE.ONE, KeyStr = "房间号", DefaultValueStr = "------", DefaultVisible = true},
        {Name = "playCount", NodeType = self.INFO_NODE_TYPE.ONE, KeyStr = "剩    余", DefaultValueStr = "-/-", DefaultVisible = true},
    }
end

function RoomInfoView:onPlayCountChanged(event)
    self:setOneInfoNodeValue("playCount", string.format("%d局", event.msg.maxPlayCount - event.msg.playCount))
end

return RoomInfoViewe