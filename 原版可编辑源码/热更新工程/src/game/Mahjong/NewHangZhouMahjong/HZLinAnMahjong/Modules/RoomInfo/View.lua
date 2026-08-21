local RoomInfoView = CF.gameClass("RoomInfoView", "game.Mahjong.BasicMahjong.Modules.RoomInfo.View")
local UIMahConfig = CF.gameRequire("Modules.GameLayer.Config.UIMahConfig2D")

function RoomInfoView:getProxyEvents()
    local proxyEvents = RoomInfoView.super.getProxyEvents(self)
    proxyEvents[#proxyEvents + 1] = { module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_ROOM_INFO_SET_QUANFENG", callBack = "onTableQuanFengModify" }
    return proxyEvents
end

function RoomInfoView:getInfoNodeConfig()
    return {
        {Name = "roomID", NodeType = self.INFO_NODE_TYPE.ONE, KeyStr = "房间号", DefaultValueStr = "------", DefaultVisible = true},
        {Name = "playCount", NodeType = self.INFO_NODE_TYPE.ONE, KeyStr = "圈数", DefaultValueStr = "-/-", DefaultVisible = true},
    }
end

function RoomInfoView:onTableQuanFengModify(event)
    local isShowQf = CF.game:getModule("GameLayer"):getGameData():getIsShowQuanFeng()
    if not isShowQf then return end
    local quanNum = CF.game:getModule("GameLayer"):getGameData():getQuanFengNum()
    if not quanNum then return end
    local textInfo = string.format("%s风圈", UIMahConfig.QuanFeng[quanNum])
    local KW_PLAY_NAME_TEXT = "playName"
    --只创建一条 
    if self:getInfoNodeByName(KW_PLAY_NAME_TEXT) then
        self:setOneInfoNodeValue(KW_PLAY_NAME_TEXT, textInfo)
        return
    end
    local conf = {Name = KW_PLAY_NAME_TEXT, NodeType = self.INFO_NODE_TYPE.ONE, KeyStr = "圈风", DefaultValueStr = "-/-", DefaultVisible = true}
    local node = self:createOneInfoNode(conf.KeyStr, textInfo)
    node:setName(conf.Name)
    node:setVisible(conf.DefaultVisible)
    self._roomInfoBg:addChild(node)
    table.insert(self._infoNodeList, node)

    self:updateInfoNodeListLayout()
end

return RoomInfoView