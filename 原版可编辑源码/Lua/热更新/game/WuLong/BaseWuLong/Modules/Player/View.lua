local PlayerView = CF.gameClass("PlayerView", "game.GameBase.Modules.Player.View")
local CardLogic = CF.gameRequire("Logic.CardLogic")

function PlayerView:ctor(param)
    PlayerView.super.ctor(self)
    self._gameData = CF.game:getModule("GameLayer"):getGameData()
    self._playerHandCardOpen = {}
    self._playerHeadersHide = {}
    self:updatePlayerHeadsPos()
end

function PlayerView:getCSBPath()
    return "cocosStudio/WuLong/GameLayer/CSB/PlayerLayer.csb"
end

function PlayerView:getProxyEvents()
    local eventTable = PlayerView.super.getProxyEvents(self)
    eventTable[#eventTable + 1] = { module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_HAND_CARD_CHANGED", callBack = "onHandCardChanged" }
    eventTable[#eventTable + 1] = { module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_PLAYER_SHOW_OUT_CARD", callBack = "onHideCardNumAlarm" }
    eventTable[#eventTable + 1] = { module = CF.roomData, eventKeyName = "EVENT_PLAYER_START", callBack = "updatePlayerHeadsPos" }
    eventTable[#eventTable + 1] = { module = CF.game:getModule("GameLayer")._gameData, eventKeyName = "EVENT_HANDCARD_UPDATE", callBack = "onHandCardUpdate" }
    eventTable[#eventTable + 1] = { module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_GAME_WIN_ORDER", callBack = "onGameWinOrder" }
    eventTable[#eventTable + 1] = { module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_SHOW_ALL_PLAYER_HANDCARDS", callBack = "onShowAllPlayerHandCard" }
    eventTable[#eventTable + 1] = { module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_GAME_SHOW_CHANGE_BTN", callBack = "onGameShowChangeSeatBtn" }
    eventTable[#eventTable + 1] = { module = CF.game:getModule("Player"), eventKeyName = "EVENT_SHOW_LEFTTIME_TIP", callBack = "onShowLeftTimeTip" }
    eventTable[#eventTable + 1] = { module = CF.game:getModule("Player"), eventKeyName = "EVENT_CLEAR_LEFTTIME_TIP", callBack = "onClearLeftTimeTip" }
    eventTable[#eventTable + 1] = { module = CF.game:getModule("WinLost"), eventKeyName = "EVENT_WINLOST_SHOWWATCHHAND", callBack = "onHandCardChanged" }
    eventTable[#eventTable + 1] = { module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_PLAYERS_SCORE", callBack = "onPlayerScore" }
    return eventTable
end

function PlayerView:onClearLeftTimeTip(event)
    for localSeat = 1, CF.roomData:getMaxPlayer() do
        if self._playerHeads[localSeat] then
            self._playerHeads[localSeat]:clearGuideTip()
        end
    end
end

function PlayerView:onShowLeftTimeTip(event)
    local localSeat = event.msg.localSeat
    if self._playerHeads[localSeat] then
        self._playerHeads[localSeat]:showGuideTip()
    end
end

function PlayerView:getHeadPosByLocalSeat(localSeat)
    local headPos = {}
    if self["_headOpenCardPos" .. localSeat] and self._playerHandCardOpen[localSeat] then
        headPos.x, headPos.y = self["_headOpenCardPos" .. localSeat]:getPosition()
    else
        headPos.x, headPos.y = self["_headPos" .. localSeat]:getPosition()
    end
    return headPos, self._playerHandCardOpen[localSeat]
end

function PlayerView:updatePlayerHeadsPos()
    if not self._playerHandCardOpen then
        self._playerHandCardOpen = {}
    end
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
    self._playerHandCardOpen[localSeat] = true

    if localSeat == CF.roomData:getSelfLocalSeat() then
        local panelPlayerHead = self["_head_panel_" .. localSeat]
        local caishenAni = panelPlayerHead:getChildByName("PROP_GUIDE_ANI")
        if caishenAni then
            caishenAni:setPosition(headOpenCardPos:getPosition())
        end
        playerHead:setPosition(headOpenCardPos:getPosition())
    else
        playerHead:runAction(cc.EaseExponentialIn:create(cc.MoveTo:create(10 / 30, moveToPos)))
    end
end

function PlayerView:resetHeadPos(localSeat)
    local playerHead = self._playerHeads[localSeat]
    local headPos = self["_headPos" .. localSeat]
    if not playerHead or not headPos then
        return
    end
    local pos = {}
    pos.x, pos.y = headPos:getPosition()
    playerHead:stopAllActions()
    playerHead:moveLeftCardNumOpenCard(false)
    playerHead:setPosition(pos)
    self._playerHandCardOpen[localSeat] = false
end

function PlayerView:onHandCardChanged(event)
    local msg = event.msg
    local localSeat = CF.roomData:seatToLocal(msg.seat)
    if not self._playerHeads or not self._playerHeads[localSeat] then
        return
    end
    if localSeat ~= CF.roomData:getSelfLocalSeat() then
        local isOpenHand = false
        if msg.bIsShow then
            local cardIDs = self._gameData:getHandCardIDs(msg.seat)
            if CardLogic.isBackHandCards(cardIDs) then
                isOpenHand = false
            else
                isOpenHand = true
            end
        end
        if isOpenHand then
            self:moveHeadWithOpenHand(localSeat) --播放头像移动动画
        else
            self:resetHeadPos(localSeat)
        end
        if not isOpenHand then
            self._playerHeads[localSeat]:hideLeftCardNum()
        end
        local cardCount = self._gameData:getHandCardNum(msg.seat)
        self._playerHeads[localSeat]:setLeftCardNum(cardCount)
    else
        self:moveHeadWithOpenHand(localSeat) --播放头像移动动画
        local cardCount = self._gameData:getHandCardNum(msg.seat)
        self._playerHeads[localSeat]:setLeftCardNum(cardCount)
    end
end

function PlayerView:createPlayerHead(seatId)
    local playerHead = PlayerView.super.createPlayerHead(self, seatId)
    local localSeat = CF.roomData:seatToLocal(seatId)
    local headPos, bOpen = self:getHeadPosByLocalSeat(localSeat)
    playerHead:setPosition(headPos)
    if bOpen then
        --如果已经显示牌，将剩余牌图标移动相应位置
        playerHead:moveLeftCardNumOpenCard(true)
    end
    if self._playerHeadersHide[localSeat] then
        --播放换位动画时使用
        playerHead:setVisible(false)
    end
    local cardCount = self._gameData:getHandCardNum(seatId)
    playerHead:setLeftCardNum(cardCount)
    local nowPlyerScore = self._gameData:getPlayerScore()
    if nowPlyerScore then
        playerHead:setJiang(nowPlyerScore.iBombCount[seatId], nowPlyerScore.iBombRewardScore[seatId], nowPlyerScore.iPickupScore[seatId])
    end
    return playerHead
end

function PlayerView:removePlayerHead(seatId)
    PlayerView.super.removePlayerHead(self, seatId)
end

--隐藏报警动画
function PlayerView:onHideCardNumAlarm(event)
    local msg = event.msg
    local localSeat = CF.roomData:seatToLocal(msg.seat)
    if self._playerHeads[localSeat] and self._playerHeads[localSeat].showAlarmAni then
        self._playerHeads[localSeat]:showAlarmAni(false)
    end
end

function PlayerView:onHandCardUpdate(event)
    --有座位号表示只更新一个人手牌
    if event.msg ~= nil and event.msg.seat ~= nil then
        local cardCount = self._gameData:getHandCardNum(event.msg.seat)
        local localSeat = CF.roomData:seatToLocal(event.msg.seat)
        if self._playerHeads[localSeat] then
            self._playerHeads[localSeat]:setLeftCardNum(cardCount)
        end
    else
        for seat = 0, CF.roomData:getMaxPlayer() - 1 do
            local cardIDs = self._gameData:getHandCardIDs(seat)
            if cardIDs ~= nil then
                local localSeat = CF.roomData:seatToLocal(seat)
                local cardCount = self._gameData:getHandCardNum(seat)
                if self._playerHeads[localSeat] then
                    self._playerHeads[localSeat]:setLeftCardNum(cardCount)
                end
            end
        end
    end
end

function PlayerView:onPlayerScore(event)
    local msg = event.msg.msg
    for i = 0, CF.roomData:getChairs() - 1 do
        local localSeat = CF.roomData:seatToLocal(i)
        self._playerHeads[localSeat]:setJiang(msg.iBombCount[i], msg.iBombRewardScore[i], msg.iPickupScore[i])
    end
end

function PlayerView:onGameWinOrder(event)
    local msg = event.msg
    local localSeat = CF.roomData:seatToLocal(msg.seat)
    local playerHead = self._playerHeads[localSeat]
    if playerHead then
        playerHead:showWinOrderImg(true, msg.order)
        playerHead:setLeftCardNum(0)
    end
    self._gameData:setShowWinOrder(localSeat, msg.order)
end

function PlayerView:onShowAllPlayerHandCard(event)
    for seat = 0, CF.roomData:getMaxPlayer() - 1 do
        --隐藏剩余牌数
        local localSeat = CF.roomData:seatToLocal(seat)
        --显示手牌
        local cardIDs = self._gameData:getHandCardIDs(seat)
        if cardIDs ~= nil then
            if not CardLogic.isBackHandCards(cardIDs) then
                self:moveHeadWithOpenHand(localSeat)
                --播放头像移动动画
            end
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

function PlayerView:onGameShowChangeSeatBtn(event)
    local msg = event.msg
    for _, playerHead in pairs(self._playerHeads) do
        playerHead:showSwapSeatBtn(msg.bShow)
    end
end

function PlayerView:clearPlayerHead(localSeat)
    local playerHead = self._playerHeads[localSeat]
    if playerHead then
        playerHead:setLeftCardNum(0)    --剩余牌数清零
        playerHead:showWinOrderImg(false)
        playerHead:setJiang(0, 0, 0)
        CF.game:getModule("RoomInfo"):onUpdateGongScore(0)
    end
end

return PlayerView