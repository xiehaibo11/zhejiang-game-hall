local PlayerView = CF.gameClass("PlayerView", "game.GameBase.Modules.Player.View")
local AnimationManager = CF.gameRequire("Manager.AnimationManager")

function PlayerView:ctor(param)
    PlayerView.super.ctor(self)
    self._bAllHandCards = false
end

function PlayerView:getProxyEvents()
    local eventTable = PlayerView.super.getProxyEvents(self)
    eventTable[#eventTable + 1] = {module = CF.roomData, eventKeyName = "EVENT_PLAYER_START", callBack = "onPlayerStart"}
    eventTable[#eventTable + 1] = {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_ROB_SHUT_RESPONSE", callBack = "onRobShut"}
    eventTable[#eventTable + 1] = {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_ALL_HAND_CARDS", callBack = "onAllHandCards"}
    eventTable[#eventTable + 1] = {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_HOME_SHUT", callBack = "onHomeShut"}
    eventTable[#eventTable + 1] = {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_BREAK_SHUT", callBack = "onBreakShut"}
    return eventTable
end

function PlayerView:onPlayerStart(event)
    local msg = event.msg
    if msg.seatID == CF.roomData:getSelfSeat() then
        self._bAllHandCards = false
        for i = 1, CF.roomData:getMaxPlayer() do
            self:resetHeadPos(i)
        end
    end
end

function PlayerView:onPlayCountChanged(event)
    PlayerView.super.onPlayCountChanged(self, event)
    self:updateSelfPlayerHeadPos()
end

function PlayerView:onRobShut(event)
    local seatId = event.msg.seat
    local bRobShut = event.msg.bRobShut
    local localSeat = CF.roomData:seatToLocal(seatId)
    if self._playerHeads[localSeat] then
        self._playerHeads[localSeat]:setRobTag(bRobShut)
    end
end

function PlayerView:onHomeShut(event)
    local ucShutedCount = event.msg.ucShutedCount
    local sShutedSeat = event.msg.sShutedSeat
    for i = 1, ucShutedCount do
        local localSeat = CF.roomData:seatToLocal(sShutedSeat[i])
        self:showShutDoorAni(localSeat, CF.GameDefine.KW_SHUT_DOOR)
    end
end

function PlayerView:onBreakShut(event)
    local sBreakShutSeat = event.msg.sBreakShutSeat
    local bBreakShut = event.msg.bBreakShut
    if sBreakShutSeat == CF.roomData:getSelfSeat() then
        local localSeat = CF.roomData:seatToLocal(sBreakShutSeat)
        if bBreakShut == true then
            self:showShutDoorAni(localSeat, CF.GameDefine.KW_BREAK_DOOR)
        end
    end
end

function PlayerView:onAllHandCards(event)
    self._bAllHandCards = true
    local localSeat = CF.roomData:getMaxPlayer()
    self:updatePlayerHeadPos(localSeat)
end

function PlayerView:showShutDoorAni(localSeat, ctype)
    local headPosNode = self:getHeadOpenCardPosNodeByLocalSeat(localSeat)
    if headPosNode then
        headPosNode:setLocalZOrder(99)
        AnimationManager.playShutDoorAni(headPosNode, ctype)
    end
end

function PlayerView:refrshSinglePlayer(seatId, playerData)
    if CF.roomData:isMatching() then
        self:removeAllPlayers()
        return
    end
    PlayerView.super.refrshSinglePlayer(self, seatId, playerData)
end

function PlayerView:resetPlayerHead(seatId)
    PlayerView.super.resetPlayerHead(self, seatId)
    local localSeat = CF.roomData:seatToLocal(seatId)
    if localSeat == CF.roomData:getSelfLocalSeat() then
        self:updateSelfPlayerHeadPos()
    elseif localSeat == CF.roomData:getMaxPlayer() then
        if self._bAllHandCards then
            self:updatePlayerHeadPos(localSeat)
        end
    end
end

function PlayerView:updateSelfPlayerHeadPos()
    local localSeat = CF.roomData:getSelfLocalSeat()
    if CF.roomData:getPlayCount() > 0 or CF.roomData:isGoldRoom() then
        self:updatePlayerHeadPos(localSeat)
    else
        self:resetHeadPos(localSeat)
    end
end

function PlayerView:updatePlayerHeadPos(localSeat)
    if self._playerHeads[localSeat] then
        self._playerHeads[localSeat]:stopAllActions()
        self._playerHeads[localSeat]:setPosition(self:getHeadOpenCardPosByLocalSeat(localSeat))
        self:updateCaiShenPos(localSeat)
    end
end

function PlayerView:resetHeadPos(localSeat)
    if self._playerHeads[localSeat] then
        self._playerHeads[localSeat]:stopAllActions()
        self._playerHeads[localSeat]:setPosition(self:getHeadPosByLocalSeat(localSeat))
        self:updateCaiShenPos(localSeat)
    end
end

function PlayerView:updateCaiShenPos(localSeat)
    local caishenAni = CF.UITool.seekNodeByName(self["_head_panel_" .. localSeat], "PROP_GUIDE_ANI")
    if caishenAni then
        caishenAni:setPosition(cc.p(self._playerHeads[localSeat]:getPosition()))
    end
end

function PlayerView:getHeadOpenCardPosNodeByLocalSeat(localSeat)
    local headPosNode = self["_headOpenCardPos" .. localSeat]
    if not headPosNode then
        headPosNode = self["_headPos" .. localSeat]
    end
    return headPosNode
end

function PlayerView:getHeadOpenCardPosByLocalSeat(localSeat)
    if not self["_headOpenCardPos"..localSeat] then
        return self:getHeadPosByLocalSeat()
    end
    return cc.p(self["_headOpenCardPos"..localSeat]:getPosition())
end

return PlayerView
