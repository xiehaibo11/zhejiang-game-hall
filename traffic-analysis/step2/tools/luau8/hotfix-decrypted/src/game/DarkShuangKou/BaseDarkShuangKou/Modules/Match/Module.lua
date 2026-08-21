local MatchModule = CF.gameClass("MatchModule", CF.ModuleBase)
MatchModule.EVENT_MATCH_STATE_CHANGED = "EVENT_MATCH_STATE_CHANGED"
function MatchModule:ctor()
    MatchModule.super.ctor(self)
    self._matchLayer = nil
end

function MatchModule:getProxyEvents()
    return {
        {module = CF.goldManager, eventKeyName = "EVENT_MATCH_STATUS_CHANGE", callBack = "onMatchStatusEvent"},
        {module = CF.goldManager, eventKeyName = "EVENT_MATCH_FLAG_SHOW", callBack = "onMatchFlagShowEvent"}
    }
end

function MatchModule:onMatchStatusEvent(event)
    local show = event.msg.show or false
    CF.roomData:setIsMatching(show)
    self:dispatchEvent({name = self.EVENT_MATCH_STATE_CHANGED})
    if not self._matchLayer and show then
        self._matchLayer = CF.gameRequire("Modules.Match.View").new():showSelf()
    end
    if self._matchLayer then
        self._matchLayer:setVisible(show)
        self._matchLayer:updateMatchStatus(show)
    end
end

function MatchModule:onMatchFlagShowEvent(event)
    local show = event.msg.show or false
    CF.roomData:setIsMatching(show)

    if self._matchLayer == nil and show then
        self._matchLayer = CF.gameRequire("Modules.Match.View").new():showSelf()
    end
    if self._matchLayer then
        self._matchLayer:setVisible(show)
        self._matchLayer:updateMatchStatus()
    end
end

return MatchModule
�