local RoomInfoView = CF.gameClass("RoomInfoView", "game.Mahjong.BasicMahjong.Modules.RoomInfo.View")

function RoomInfoView:getProxyEvents()
     local ProxyEventsList = RoomInfoView.super.getProxyEvents(self)
    ProxyEventsList[#ProxyEventsList + 1] =   { module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_GAMEINFO_CHANGED", callBack = "onUpdateQuanfengJu"}
    return ProxyEventsList
end

function RoomInfoView:onUpdateQuanfengJu(event)
    if event.msg == nil then return end
    if event.msg.strQuan == nil then return end
    self:setOneInfoNodeValue("playCount", event.msg.strQuan)
end

function RoomInfoView:onPlayCountChanged(event)
    if event.msg.maxPlayCount < 99 then
        self:setOneInfoNodeValue("playCount", event.msg.playCount .. "/" .. event.msg.maxPlayCount)
    end
end

return RoomInfoViewO