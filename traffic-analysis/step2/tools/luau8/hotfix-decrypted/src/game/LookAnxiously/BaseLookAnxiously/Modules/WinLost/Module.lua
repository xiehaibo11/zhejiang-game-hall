local WinLostModule = CF.gameClass("WinLostModule", CF.ModuleBase)
WinLostModule.EVENT_GAME_WINLOST = "EVENT_GAME_WINLOST"
WinLostModule.EVENT_SHOW_WINLOST = "EVENT_SHOW_WINLOST"
WinLostModule.EVENT_SHUFFLE_TIP_WIN_AND_LOST = "EVENT_SHUFFLE_TIP_WIN_AND_LOST"

function WinLostModule:ctor()
    WinLostModule.super.ctor(self)
    self._gameData = CF.game:getModule("GameLayer"):getGameData()
    self._sEndType = 0
end

function WinLostModule:getSubXYDealList()
    return {
        {callback = handler(self, self.onMsgEndType), msgClass = CF.GameProtocol.msgEndType},
        {callback = handler(self, self.onMsgWinLost), msgClass = CF.GameProtocol.msgWinLost},
    }
end

function WinLostModule:onMsgEndType(msgData)
    self._sEndType = msgData.sEndType
end

function WinLostModule:getEndType()
    return self._sEndType
end

function WinLostModule:onMsgWinLost(msgData)
    self._gameData:setIsHaveResult(true)
    local selfSeat = CF.roomData:getSelfSeat()
    local winLostData = {
        isWin = msgData.iScore[selfSeat] >= 0,
        leftCardCount = msgData.iLeftNum,
        publicMult = msgData.iPublicMult,
        privateMult = msgData.iSelfMult,
        winLostScore = msgData.iScore
    }
    
    local playersInfo = {}

    local springSeat = CF.game:getModule("GameLayer")._gameData:getSpringSeat()
    for seat = 0, CF.roomData:getMaxPlayer() - 1 do
        local player = CF.roomData:getPlayerDataBySeatId(seat)
        if player then
            local playerInfo = {}
            playerInfo.nickName = player:getNickName()
            playerInfo.numid = player:getNumberID()
            playerInfo.headUrl = player:getAvatarUrl()
            playerInfo.isHost = CF.roomData:getHostSeat() == seat
            playerInfo.isSpring = false
            for i = 1, #springSeat do
                if springSeat[i] == seat then
                    playerInfo.isSpring = true
                end
            end
            playersInfo[seat] = playerInfo
        end
    end 

    self:dispatchEvent({ name = self.EVENT_SHUFFLE_TIP_WIN_AND_LOST })
    self:dispatchEvent({name = self.EVENT_GAME_WINLOST,msg = {winLostData = winLostData,playersInfo = playersInfo}})
    CF.game:getModule("ShareWin"):updateShowShareWinView(msgData.iScore[selfSeat], selfSeat)
end

--小结束是否显示洗牌按钮
function WinLostModule:needShowShuffleButton(isCutCard)
    --回放
    if CF.roomData:isPlayBack() or CF.roomData:getIsSeer() then
        return false
    end
    --局数信息
    local playCount = CF.roomData:getPlayCount()
    local maxPlayCount = CF.roomData:getMaxPlayCount()
    --大结束
    if playCount == maxPlayCount and not CF.roomData:isGoldRoom() then
        return false
    end
    --读取配置,是否开启洗牌
    local isShowShuffle = CF.gameSub:getIsOpenShuffle(CF.roomData:getGameID())

    -- 下局是否预洗牌
    if isShowShuffle and not isCutCard then
        local propUseModule = CF.game:getModule("PropUse")
        if propUseModule and propUseModule.isPreShuffle then
            isShowShuffle = not propUseModule:isPreShuffle()
        end
    end
    return isShowShuffle
end

function WinLostModule:showSettleWindow()
    self:dispatchEvent({name = self.EVENT_SHOW_WINLOST,msg = {bShow = true}})
end

return WinLostModule
-