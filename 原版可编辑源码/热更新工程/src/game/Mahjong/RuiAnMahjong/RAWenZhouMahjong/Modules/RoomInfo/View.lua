local RoomInfoView = CF.gameClass("RoomInfoView", "game.Mahjong.BasicMahjong.Modules.RoomInfo.View")

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