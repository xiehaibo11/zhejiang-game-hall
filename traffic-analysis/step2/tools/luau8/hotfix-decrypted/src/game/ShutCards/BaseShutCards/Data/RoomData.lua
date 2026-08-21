local RoomData = CF.gameClass("RoomData", "game.GameBase.Data.RoomData")

RoomData.EVENT_MULTIPLE_CHANGED = "EVENT_MULTIPLE_CHANGED"

function RoomData:ctor()
    RoomData.super.ctor(self)
    self._iMultiple = 0
    self._bMustOut = false
    self._bMustControl = false
    self._bAutoReady = false
end

function RoomData:setMultiple(iMultiple)
    self._iMultiple = iMultiple
    self:dispatchEvent({name = self.EVENT_MULTIPLE_CHANGED})
end

function RoomData:getMultiple()
    return self._iMultiple
end

function RoomData:setIsMustOut(bMustOut)
    self._bMustOut = bMustOut or false
end

function RoomData:isMustOut()
    return self._bMustOut
end

function RoomData:setIsMustControl(bMustControl)
    self._bMustControl = bMustControl or false
end

function RoomData:isMustControl()
    return self._bMustControl
end

function RoomData:setIsAutoReady(bAutoReady)
    self._bAutoReady = bAutoReady or false
end

function RoomData:isAutoReady()
    return self._bAutoReady
end

function RoomData:isThreeCardStraightRule()
    local serverRule = self:getServerGameRule() or ""
    if string.find(serverRule, "HandCardCount='2';", 1, true) then
        return true
    end

    local gameRule = self:getGameRule() or ""
    if string.find(gameRule, "HandCardCount='2';", 1, true) then
        return true
    end

    return string.find(gameRule, "10张", 1, true) ~= nil
end

return RoomData
�