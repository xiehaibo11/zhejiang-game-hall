local PlayerView = CF.gameClass("PlayerView", "game.Mahjong.BasicMahjong.Modules.Player.View")

function PlayerView:getProxyEvents()
    local proxyEvents = PlayerView.super.getProxyEvents(self)
    proxyEvents[#proxyEvents + 1] = {module = CF.game:getModule("Player"), eventKeyName = "EVENT_CROSS_HU", callBack = "onEventCrossHu"}
    return proxyEvents
end

function PlayerView:onEventCrossHu(event)
    local data = event.data
    local localSeat = CF.roomData:seatToLocal(data.seat)
    local imgCrossHu = self._playerHeads[localSeat]:getChildByName("CROSS_HU")
    if data.bShow and not imgCrossHu then
        imgCrossHu = ccui.ImageView:create("res/cocosStudio/MahjongNew/GameLayer/Image/mahjong_guohu.png",ccui.TextureResType.localType)
        if imgCrossHu then
            self._playerHeads[localSeat]:addChild(imgCrossHu)
            imgCrossHu:setName("CROSS_HU")
            imgCrossHu:setPosition(0, -150)
        end
    end
    if imgCrossHu then
        imgCrossHu:setVisible(data.bShow)
    end
end

return PlayerView%