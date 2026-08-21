local BridgeEvent = class("BridgeEvent")

BridgeEvent.EVENT_TYPE = {
    GAME_SCENE_EXIT = 1,
    LOGIN_SUCCESS = 2,
    DROP_CHANGED = 3,
    PERSONAL_GIFTPACK_INFO = 4,
    LUCKY_TURN_TABLE = 5,
    NEW_PLAY_TYPE_B_ACT = 6,
    NEW_PLAY_TYPE_GREET_INFO = 7,
    NEW_PLAY_TYPE_GET_GREET_PRIZE = 8,
    EVENT_UPDATE_LUCKY_BAG_ICON = 9,
    LIMITETIME_CARD_CHANGED = 10,
    NEWYEAR_2026_INFO = 11,
}

function BridgeEvent:ctor()
    self._eventCallbacks = {}

    self._roomManagerProxy = cc.EventProxy.new(XH.roomManager)
    :addEventListener(XH.roomManager.EVENT_GAME_SCENE_EXIT, handler(self, self.onGameSceneExit))

    self._loginProxy = cc.EventProxy.new(XH.login:getModule("Login"))
    :addEventListener(XH.login:getModule("Login").LOGIN_EVENT_SUCCESS, handler(self, self.onLoginSuccess))

    self._playerDataProxy = cc.EventProxy.new(XH.playerData)
    :addEventListener(XH.playerData.EVENT_PLAYER_DROP_CHANGED, handler(self, self.onDropChanged))    
    :addEventListener(XH.playerData.EVENT_PLAYER_TIME_ROOMCARD_CHANGED, handler(self, self.onLimitedTimeCardChanged))    

    self._lobbyPersonalGiftPackProxy = cc.EventProxy.new(XH.lobby:getModule("PersonalGiftPack"))
    :addEventListener(XH.lobby:getModule("PersonalGiftPack").EVENT_CONFIG_DATA_CHANGED, handler(self, self.onPersonalGiftPackInfo))

    self._luckyTurnTableProxy = cc.EventProxy.new(XH.lobby:getModule("LuckyTurnTableAct"))
    :addEventListener(XH.lobby:getModule("LuckyTurnTableAct").EVENT_GET_ACT_DATA, handler(self, self.onLuckyTurnTableActInfo))

    self._shareProxy = cc.EventProxy.new(XH.lobby:getModule("Share"))
    :addEventListener(XH.lobby:getModule("Share").EVENT_UPDATE_LUCKY_BAG_ICON, handler(self, self.onEventUpdateLuckyBagIcon))

    self._newyear2026Proxy = cc.EventProxy.new(XH.lobby:getModule("NewYear2026"))
    :addEventListener(XH.lobby:getModule("NewYear2026").EVENT_FLUSH_ACTIVITY_INFO, function(event) self:startEventCallBack(self.EVENT_TYPE.NEWYEAR_2026_INFO, event) end)
end

function BridgeEvent:destroy()
    if self._roomManagerProxy then
        self._roomManagerProxy:removeAllEventListeners()
    end
    if self._loginProxy then
        self._loginProxy:removeAllEventListeners()
    end
    if self._playerDataProxy then
        self._playerDataProxy:removeAllEventListeners()
    end
    if self._lobbyPersonalGiftPackProxy then
        self._lobbyPersonalGiftPackProxy:removeAllEventListeners()
    end
    if self._luckyTurnTableProxy then
        self._luckyTurnTableProxy:removeAllEventListeners()
    end
    if self._shareProxy then
        self._shareProxy:removeAllEventListeners()
    end
end

function BridgeEvent:onGameSceneExit()
    self:startEventCallBack(self.EVENT_TYPE.GAME_SCENE_EXIT)
end

function BridgeEvent:onLoginSuccess()
    self:startEventCallBack(self.EVENT_TYPE.LOGIN_SUCCESS)
end

function BridgeEvent:onDropChanged()
    self:startEventCallBack(self.EVENT_TYPE.DROP_CHANGED)
end

function BridgeEvent:onLimitedTimeCardChanged()
    self:startEventCallBack(self.EVENT_TYPE.LIMITETIME_CARD_CHANGED)
end

function BridgeEvent:onPersonalGiftPackInfo(event)
    self:startEventCallBack(self.EVENT_TYPE.PERSONAL_GIFTPACK_INFO, event)
end

function BridgeEvent:onLuckyTurnTableActInfo(event)
    self:startEventCallBack(self.EVENT_TYPE.LUCKY_TURN_TABLE, event)
end

function BridgeEvent:onEventUpdateLuckyBagIcon(event)
    self:startEventCallBack(self.EVENT_TYPE.EVENT_UPDATE_LUCKY_BAG_ICON, event)
end

function BridgeEvent:startEventCallBack(eventType, ...)
    local callbacks = self._eventCallbacks[eventType]
    if callbacks then
        for _, callback in pairs(callbacks) do
            callback(...)
        end
    end
end

function BridgeEvent:addCallBack(eventType, tag, callback)
    self._eventCallbacks[eventType] = self._eventCallbacks[eventType] or {}
    self._eventCallbacks[eventType][tag] = callback
end

function BridgeEvent:removeCallBack(eventType, tag)
    local callbacks = self._eventCallbacks[eventType]
    if callbacks == nil then
        return
    end
    callbacks[tag] = nil
end

return BridgeEvent^