local PlayerView = CF.gameClass("PlayerView", "game.GameBase.Modules.Player.View")
local AnimationManager = CF.gameRequire("Manager.AnimationManager")
local CardEnum = CF.gameRequire("Define.CardEnum")

function PlayerView:ctor(param)
    PlayerView.super.ctor(self)
    self._bAllHandCards = false
end

function PlayerView:getCSBPath()
    return "cocosStudio/LookAnxiously/GameLayer/CSB/PlayerLayer.csb"
end

function PlayerView:getBindingInfo()
    local bindInfo = PlayerView.super.getBindingInfo(self)
    bindInfo["_KW_PLAYER_HEAD_POS_"] = { varName = "_headPos", beginIndex = 1, endIndex = 5 }
    bindInfo["_KW_PANEL_PLAYER_HEAD_"] = { varName = "_head_panel_", beginIndex = 1, endIndex = 5 }
    bindInfo["_KW_IMG_READY_"] = { varName = "_readySp_", beginIndex = 1, endIndex = 5 }
    bindInfo["_KW_PLAYER_HEAD_POS_4_5"] = { varName = "_headPos4_5" }
    bindInfo["_KW_IMG_READY_4_5"] = { varName = "_readySp_4_5"}
    return bindInfo
end

function PlayerView:getProxyEvents()
    local eventTable = PlayerView.super.getProxyEvents(self)
    eventTable[#eventTable + 1] = {module = CF.roomData, eventKeyName = "EVENT_PLAYER_START", callBack = "onPlayerStart"}
    eventTable[#eventTable + 1] = {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_ALL_HAND_CARDS", callBack = "onAllHandCards"}
    eventTable[#eventTable + 1] = {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_SEND_CARDS", callBack = "onSendCards"}
    eventTable[#eventTable + 1] = { module = CF.game:getModule("Match"), eventKeyName = "EVENT_MATCH_STATE_CHANGED", callBack = "onMatchStateChanged" }
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

function PlayerView:onAllHandCards(event)
    self._bAllHandCards = true
    local localSeat = CF.GameDefine.LOCAL_SEAT.TOP
    self:updatePlayerHeadPos(localSeat)
end

function PlayerView:onSendCards(event)
    if not event or not event.msg then
        return
    end
    local localSeat = CF.roomData:seatToLocal(event.msg.seat)
    local orderCards = event.msg.orderCards
    if localSeat ~= CF.GameDefine.LOCAL_SEAT.TOP or #orderCards == 0 or orderCards[1] == CardEnum.CARD_ID.ID_BACK then
        return
    end
    self._bAllHandCards = true
    self:updatePlayerHeadPos(localSeat)
end

function PlayerView:onPlayerListChanged(event)
    if event.msg == nil then 
        PlayerView.super.onPlayerListChanged(self,event)
    else 
        local seat = event.msg.seatId
        local remove = event.msg.remove == nil and true or event.msg.remove
        local playerData = CF.roomData:getPlayerDataBySeatId(seat)
        self:refrshSinglePlayer(seat, playerData, remove)
    end 
    
end

function PlayerView:refrshSinglePlayer(seatId, playerData, remove)
    if CF.roomData:isMatching() then
        self:removeAllPlayers()
        return
    end
    if playerData then
        if remove then
            self:resetPlayerHead(seatId)
        else
            local localSeat = CF.roomData:seatToLocal(seatId)
            if self._playerHeads[localSeat] then
                self._playerHeads[localSeat]:updatePlayerData(playerData)
            end
        end
    else
        self:removePlayerHead(seatId)
    end
end

function PlayerView:resetPlayerHead(seatId)
    -- 如果玩家座位号没设置的时候，不创建玩家头像信息，否则localSeat会错误导致头像位置不对
    if not CF.roomData:isRealChair() then
        CF.roomData:setRemove(seatId, true)
        return
    end
    CF.roomData:setRemove(seatId, false)
    PlayerView.super.resetPlayerHead(self, seatId)
    local localSeat = CF.roomData:seatToLocal(seatId)
    if localSeat == CF.roomData:getSelfLocalSeat() then
        self:updateSelfPlayerHeadPos()
    elseif localSeat == CF.GameDefine.LOCAL_SEAT.TOP then
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

function PlayerView:getHeadOpenCardPosByLocalSeat(localSeat)
    if not self["_headOpenCardPos"..localSeat] or (CF.roomData:isFivePlayer() and localSeat == CF.GameDefine.LOCAL_SEAT.TOP) then
        return self:getHeadPosByLocalSeat(localSeat)
    end
    return cc.p(self["_headOpenCardPos"..localSeat]:getPosition())
end

function PlayerView:getHeadPosByLocalSeat(localSeat)
    local pos = PlayerView.super.getHeadPosByLocalSeat(self, localSeat)
    if CF.roomData:isFivePlayer() and self["_headPos" .. localSeat .. "_" .. CF.roomData:getMaxPlayer()] then
        pos = cc.p(self["_headPos" .. localSeat .. "_" .. CF.roomData:getMaxPlayer()]:getPosition())
    end
    return pos
end

function PlayerView:showReadyIcon(localSeat, bShow)
    if not self._playerHeads[localSeat] then
        return
    end
    PlayerView.super.showReadyIcon(self, localSeat, bShow)
    if CF.roomData:isFivePlayer() and self["_readySp_"..localSeat .. "_" .. CF.roomData:getMaxPlayer()] then
        self["_readySp_"..localSeat .. "_" .. CF.roomData:getMaxPlayer()]:setVisible(bShow)
        if self["_readySp_"..localSeat] then
            self["_readySp_"..localSeat]:setVisible(false)
        end
    end
end

-- 金币场踢出后，隐藏准备UI
function PlayerView:onMatchStateChanged()
    if CF.roomData:isMatching() then
        for i = 1, CF.roomData:getChairs() do
            if self["_readySp_"..i] then
                self["_readySp_"..i]:setVisible(false)
            end
        end
    else
        for seat = 0, CF.roomData:getChairs() do
            local playerData = CF.roomData:getPlayerDataBySeatId(seat)
            self:refrshSinglePlayer(seat, playerData, true)
        end
    end
end

return PlayerView
h