local RoomInfoView = CF.gameClass("RoomInfoView", "game.Mahjong.BasicMahjong.Modules.RoomInfo.View")

function RoomInfoView:getProxyEvents()
    local proxyEvents = RoomInfoView.super.getProxyEvents(self)
    proxyEvents[#proxyEvents + 1] = {module = CF.game:getModule("RoomInfo"), eventKeyName = "EVENT_SHOW_QUAN_FENG_CNT", callBack = "onShowQuanFengCnt"}
    return proxyEvents
end

function RoomInfoView:getInfoNodeConfig()
    if not CF.roomData:isGoldRoom() then
        return {
            {Name = "roomID", NodeType = self.INFO_NODE_TYPE.ONE, KeyStr = "房间号", DefaultValueStr = "------", DefaultVisible = true},
            {Name = "quanCount", NodeType = self.INFO_NODE_TYPE.ONE, KeyStr = "圈    数", DefaultValueStr = "-/-", DefaultVisible = true},
            {Name = "quanFeng", NodeType = self.INFO_NODE_TYPE.ONE, KeyStr = "圈    风", DefaultValueStr = "", DefaultVisible = false},
        }
    end
    return RoomInfoView.super.getInfoNodeConfig(self)
end

function RoomInfoView:onShowQuanFengCnt(event)
    local curQuanShu = event.msg.curQuanShu or 0
    local taiTouHuQuanShu = event.msg.taiTouHuQuanShu or 0
    self:setOneInfoNodeValue("quanCount", curQuanShu .. "/" .. taiTouHuQuanShu)
    local quanNum = CF.game:getModule("GameLayer"):getGameData():getQuanFengNum()
    local UIMahConfig = CF.gameRequire("Modules.GameLayer.Config.UIMahConfig2D")
    self:setOneInfoNodeValue("quanFeng", string.format("%s风圈", UIMahConfig.QuanFeng[quanNum]))
    self:setInfoNodeVisible("quanFeng", true)
end

return RoomInfoView)