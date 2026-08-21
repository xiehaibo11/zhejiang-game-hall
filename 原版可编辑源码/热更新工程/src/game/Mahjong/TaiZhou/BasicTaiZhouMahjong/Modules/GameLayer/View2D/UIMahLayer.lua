local UIMahLayer = CF.gameClass("UIMahLayer2D", "game.Mahjong.BasicMahjong.Modules.GameLayer.View2D.UIMahLayer")

function UIMahLayer:getProxyEvents()
    local proxyEvents = UIMahLayer.super.getProxyEvents(self)
    proxyEvents[#proxyEvents + 1] = {module = CF.roomData, eventKeyName = "EVENT_CLEAR_TABLE", callBack = "onEventClearTable"}
    proxyEvents[#proxyEvents + 1] = { module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_SHOW_SHENG_PAI_ANI", callBack = "onEventShengPaiAni" }
    return proxyEvents
end

function UIMahLayer:initView()
    UIMahLayer.super.initView(self)
    self._panelmahsSurPlusPosY = 0
    if self._panelmahsSurPlusCounts then
        self._panelmahsSurPlusPosY = self._panelmahsSurPlusCounts:getPositionY()
    end
end

function UIMahLayer:onEventClearTable(event)
    if not CF.configData:isHaveShengPaiJieDuan() then
        return
    end
    if self._panelmahsSurPlusCounts then
        self._panelmahsSurPlusCounts:setPositionY(self._panelmahsSurPlusPosY)
    end
end

function UIMahLayer:onEventShengPaiAni(event)
    if not CF.configData:isHaveShengPaiJieDuan() then
        return
    end
    if self._panelmahsSurPlusCounts then
        self._panelmahsSurPlusCounts:setPositionY(self._panelmahsSurPlusPosY + 40)
    end
end

return UIMahLayer