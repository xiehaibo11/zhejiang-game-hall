local PlayerView    = CF.gameClass("PlayerView", "game.GameBase.Modules.Player.View")

function PlayerView:ctor(param)
    PlayerView.super.ctor(self)
    self._gameData = CF.game:getModule("GameLayer"):getGameData()
    self._playerHandCardOpen = {}
    self:updatePlayerHeadsPos()
end

function PlayerView:getProxyEvents()
    local eventTable = PlayerView.super.getProxyEvents(self)
    eventTable[#eventTable + 1] = {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_HAND_CARD_CHANGED", callBack = "onHandCardChanged"}
    eventTable[#eventTable + 1] = {module = CF.roomData, eventKeyName = "EVENT_PLAYER_START", callBack = "updatePlayerHeadsPos"}
    eventTable[#eventTable + 1] = {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_SHOW_ALL_PLAYER_HANDCARDS", callBack = "onShowAllPlayerHandCard"}
    eventTable[#eventTable + 1] = {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_PLAYER_CARDS_COUNT", callBack = "onSendCardsCount"}
    eventTable[#eventTable + 1] = {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_SHOW_LANDLORD_SEAT", callBack = "onShowLandlordSeat"}
    eventTable[#eventTable + 1] = {module = CF.game:getModule("Player"), eventKeyName = "EVENT_CLEAR_LEFTTIME_TIP", callBack = "onClearLeftTimeTip"}
    eventTable[#eventTable + 1] = {module = CF.roomData, eventKeyName = "EVENT_PLAYERLIST_CHANGED", callBack = "onPlayerListChanged"}
    return eventTable
end

function PlayerView:clearTable(event)
    PlayerView.super.clearTable(self, event)
    for localSeat = 1, CF.roomData:getMaxPlayer() do
        self:clearPlayerHead(localSeat)
    end
end

function PlayerView:onClearLeftTimeTip(event)
    for localSeat = 1, CF.roomData:getMaxPlayer() do
        if self._playerHeads[localSeat] then
            self._playerHeads[localSeat]:clearGuideTip()
        end
    end
end

function PlayerView:updatePlayerHeadsPos()
   for localSeat = 1, CF.roomData:getMaxPlayer() do
        if localSeat ~= CF.roomData:getSelfLocalSeat() then
            self._playerHandCardOpen[localSeat] = false
        end
        if self._playerHeads[localSeat] then
            local headPos = self:getHeadPosByLocalSeat(localSeat)
            self._playerHeads[localSeat]:setPosition(headPos)
            self._playerHeads[localSeat]:moveLeftCardNumOpenCard(false)
        end
    end
end

--续桌
function PlayerView:onGameContinue(event)
    local msg = event.msg
    if msg.bSuccess then
        self:updatePlayerHeadsPos()
    end
end

function PlayerView:getHeadPosByLocalSeat(localSeat)
    local headPos = {}
    if self["_headOpenCardPos"..localSeat] and self._playerHandCardOpen[localSeat] then
        headPos.x,headPos.y = self["_headOpenCardPos"..localSeat]:getPosition()
    else
        headPos.x,headPos.y = self["_headPos"..localSeat]:getPosition()
    end
    return headPos, self._playerHandCardOpen[localSeat]
end

function PlayerView:moveHeadWithOpenHand(localSeat)
    local playerHead = self._playerHeads[localSeat]
    local headOpenCardPos = self["_headOpenCardPos" .. localSeat]
    if not playerHead or not headOpenCardPos then
        return
    end
    local moveToPos = {}
    moveToPos.x, moveToPos.y = headOpenCardPos:getPosition()
    playerHead:stopAllActions()
    playerHead:moveLeftCardNumOpenCard(true)
    playerHead:runAction(cc.EaseExponentialIn:create(cc.MoveTo:create(1, moveToPos)))
    self._playerHandCardOpen[localSeat] = true
    if localSeat == CF.roomData:getSelfLocalSeat() then
        local panelPlayerHead = self["_head_panel_" .. localSeat]
        local caishenAni = panelPlayerHead:getChildByName("PROP_GUIDE_ANI")
        if caishenAni then
            caishenAni:runAction(cc.EaseExponentialIn:create(cc.MoveTo:create(1, moveToPos)))
        end
    end
end

-- 发送手牌
function PlayerView:onHandCardChanged(event)
    local localSeat = CF.roomData:seatToLocal(event.msg.seatId)
    self:moveHeadWithOpenHand(localSeat)--播放头像移动动画
end

function PlayerView:onShowAllPlayerHandCard(event)
	local handCards = event.msg.handCards
	for seat = 0, #handCards do
        --隐藏剩余牌数
        local localSeat = CF.roomData:seatToLocal(seat)
		if CF.roomData:isPlayBack() and seat == CF.roomData:getSelfSeat() then
            self:moveHeadWithOpenHand(localSeat)
		end
	end
end

function PlayerView:clearPlayerHead(localSeat) 
    local playerHead = self._playerHeads[localSeat]
    if playerHead then
        playerHead:setLeftCardNum(0)    --剩余牌数清零
        playerHead:showDiZhuImg(false)
    end
end

function PlayerView:onSendCardsCount(event)
	local seatId = event.msg.seatId
    local localSeat = CF.roomData:seatToLocal(seatId)
    local cardCount = self._gameData:getHandCardsCount(seatId)
    if self._playerHeads[localSeat] then
        self._playerHeads[localSeat]:setLeftCardNum(cardCount)
    end
end

function PlayerView:onShowLandlordSeat(event)
    local seat = event.msg.seat
    local localSeat = CF.roomData:seatToLocal(seat)
    local playerHead = self._playerHeads[localSeat]
    if playerHead then
        playerHead:showDiZhuImg(true)
    end
end

function PlayerView:refrshSinglePlayer(seatId, playerData)
    if CF.roomData:isMatching() then
        self:removeAllPlayers()
        return
    end
    PlayerView.super.refrshSinglePlayer(self, seatId, playerData)
    local localSeat = CF.roomData:seatToLocal(seatId)
    if  CF.roomData:getIsGameStart() and self._gameData:getLandlordSeat() == seatId then
        if self._gameData:getGameStep() > CF.GameDefine.GAME_STEP.GAME_STEP_SEND_CARDS and self._gameData:getGameStep() < CF.GameDefine.GAME_STEP.GAME_STEP_WIN_LOST then
            local playerHead = self._playerHeads[localSeat]
            if playerHead then
                playerHead:showDiZhuImg(true)
            end
        end
    end
end

return PlayerViewh