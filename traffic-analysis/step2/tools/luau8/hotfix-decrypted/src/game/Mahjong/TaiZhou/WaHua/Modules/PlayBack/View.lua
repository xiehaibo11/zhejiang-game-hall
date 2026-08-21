local PlayBackView = CF.gameClass("PlayBackView", "game.GameBase.Modules.PlayBack.View")

function PlayBackView:ctor()
    PlayBackView.super.ctor(self)
    self:updatePlayBackPos(true)
end

function PlayBackView:getProxyEvents()
    local proxyEvents = PlayBackView.super.getProxyEvents(self)
    proxyEvents[#proxyEvents + 1] = { module = CF.settingData, eventKeyName = "EVENT_SWITCH_LINE_TYPE_EVENT", callBack = "onEventSwitchLine" }
    return proxyEvents
end

function PlayBackView:onEventSwitchLine(event)
    self:updatePlayBackPos()
end

function PlayBackView:updatePlayBackPos(bInitUI)
    if self._playBackPanel then
        local curLineType = CF.settingData:getLineType()
        local offset = 240
        if curLineType == CF.GameDefine.LineType.Double then
            self._playBackPanel:setPositionY(self._playBackPanel:getPositionY() + offset)
        elseif not bInitUI then
            self._playBackPanel:setPositionY(self._playBackPanel:getPositionY() - offset)
        end
    end
end

return PlayBackView!