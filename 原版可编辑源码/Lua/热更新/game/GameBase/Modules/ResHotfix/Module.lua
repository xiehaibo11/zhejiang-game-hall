local ResHotfixModule = CF.gameClass("ResHotfixModule", CF.ModuleBase)

ResHotfixModule.EVENT_PERCENT_CHANGED = "EVENT_PERCENT_CHANGED"
ResHotfixModule.SHOW_LOADING_VIEW = "SHOW_LOADING_VIEW"
ResHotfixModule.HIDE_LOADING_VIEW = "HIDE_LOADING_VIEW"

ResHotfixModule.TAG_SOUND = "TAG_SOUND"

function ResHotfixModule:ctor()
    ResHotfixModule.super.ctor(self)
    self:initEvents()
end

function ResHotfixModule:initEvents()
    self._allCustomEventListeners = {}
    local eventDispatcher = cc.Director:getInstance():getEventDispatcher()
    local eventList = self:getCustomEventListenerConfig()
    for _, conf in pairs(eventList) do
        local listener = cc.EventListenerCustom:create(conf.eventName,conf.callBack)
        eventDispatcher:addEventListenerWithFixedPriority(listener, 1)
        table.insert(self._allCustomEventListeners, listener)
    end
end

function ResHotfixModule:getCustomEventListenerConfig()
    return {
        {eventName = "hotupdate.GameSoundUpate.ProgressChanged", callBack = handler(self, self.onSoundProgressPercent)},
        {eventName = "hotupdate.GameSoundUpate.startUpdate", callBack = handler(self, self.onGameSoundStartUpdate)},
    }
end

function ResHotfixModule:onDestroy()
    ResHotfixModule.super.onDestroy(self)
    self:removeAllEventListeners()
end

function ResHotfixModule:removeAllEventListeners()
    local eventDispatcher = cc.Director:getInstance():getEventDispatcher()
    for _, listener in pairs(self._allCustomEventListeners) do
        eventDispatcher:removeEventListener(listener)
    end
end

function ResHotfixModule:onSoundProgressPercent(event)
    if not event.msg or not event.msg.percent then
        return
    end
    local percent = math.ceil(event.msg.percent)
    self:dispatchEvent({name = self.EVENT_PERCENT_CHANGED, msg = {tagName = self.TAG_SOUND, text = "语音", percent = percent}})
end

function ResHotfixModule:onGameSoundStartUpdate(event)
    if event.msg and event.msg.isStart then
        self:dispatchEvent({name = self.SHOW_LOADING_VIEW, msg = {tagName = self.TAG_SOUND}})
    else
        self:dispatchEvent({name = self.HIDE_LOADING_VIEW, msg = {tagName = self.TAG_SOUND}})
    end
end

return ResHotfixModule