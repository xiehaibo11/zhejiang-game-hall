local PlayerView = CF.gameClass("PlayerView", "game.Mahjong.BasicMahjong.Modules.Player.View")

function PlayerView:getProxyEvents()
    local proxyEvents = PlayerView.super.getProxyEvents(self)
    proxyEvents[#proxyEvents + 1] = { module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_CROSS_HU", callBack = "onCrossHu"}
    return proxyEvents
end

function PlayerView:onCrossHu(event)
    local data = event.data
    local localSeat = CF.roomData:seatToLocal(data.seat)
    local imgCrossHu =  self._playerHeads[localSeat]:getChildByName("CROSS_HU")
    if data.bShow and not imgCrossHu then
        imgCrossHu = ccui.ImageView:create("mahjong_guohu.png",ccui.TextureResType.plistType)
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

return PlayerView