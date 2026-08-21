local WinLostModule = CF.gameClass("WinLostModule", CF.ModuleBase)

WinLostModule.EVENT_GAME_WINLOST = "EVENT_GAME_WINLOST"
WinLostModule.EVENT_SHOW_GUIDE = "EVENT_SHOW_GUIDE"
-- 洗牌4.0 start --
-- 抓牌
WinLostModule.EVENT_SHUFFLE_TIP_WIN_AND_LOST = "EVENT_SHUFFLE_TIP_WIN_AND_LOST" 
-- 洗牌4.0 end   --

-- 旁观玩家小结束刷新手牌
WinLostModule.EVENT_WINLOST_SHOWWATCHHAND = 'EVENT_WINLOST_SHOWWATCHHAND'
WinLostModule.EVENT_WINLOST_CLOCK = "EVENT_WINLOST_CLOCK"
WinLostModule.EVENT_SHOW_TRUST_PUNISHMENT = "EVENT_SHOW_TRUST_PUNISHMENT"
WinLostModule.EVENT_SHOW_RESULT_YXBD = "EVENT_SHOW_RESULT_YXBD"

function WinLostModule:ctor()
    WinLostModule.super.ctor(self)
    self._gameData = CF.game:getModule("GameLayer"):getGameData()
end

function WinLostModule:getSubXYDealList()
    return {
        {callback = handler(self, self.onMsgWinLost), msgClass = CF.GameProtocol.msgWinLost}, --1435
        {callback = handler(self, self.onMsgWinLostWatch), msgClass = CF.GameProtocol.msgWinLostWatch}, --1535
        {callback = handler(self, self.onMsgTrustPunishment), msgClass = CF.GameProtocol.msgTrustPunishment}, --2017 托管惩罚
        {callback = handler(self, self.onMsgResultYxbd), msgClass = CF.GameProtocol.msgResultYxbd}, --2030 以小博大
    }
end

function WinLostModule:getProxyEvents()
    return {
        {module = CF.netEngine, eventName = CF.PyrrlaProtobuf.ClockNotify.event_key, callBack = "onClockNotify"},
    }
end

--#
function WinLostModule:onMsgWinLost(msgData)
    local gameData = CF.game:getModule("GameLayer"):getGameData()
    local winLostData = gameData:getWinLostData()
    if CF.roomData:getPlayCount() == CF.roomData:getMaxPlayCount() then
        winLostData:setIsLastPlayCount(true)
    else
        winLostData:setIsLastPlayCount(false)
    end

    for seat = 0, CF.roomData:getMaxPlayer() - 1 do
        local player = CF.roomData:getPlayerDataBySeatId(seat)
        if player then
            winLostData:setPlayerName(seat, player:getNickName())
        end
    end

    winLostData:setEndType(msgData.sEndType)
    winLostData:setWinMut(msgData.sWinMut)
    winLostData:setWinOrder(msgData.sWinOrder)
    winLostData:setPlayerScore(msgData.iScore)
    winLostData:setEscapeSeat(msgData.sEscapeSeat)
    winLostData:setChaoDiSeat(msgData.sChaoDiSeat)
    winLostData:setGongData(msgData.sGong)
    winLostData:setXianShu(msgData.sNewXianShu or {})
    winLostData:setIsPoChan(msgData.bPoChan)

    self:dispatchEvent({name = self.EVENT_GAME_WINLOST, msg = {bShow = true}})

    -- 根据分数设置洗牌4.0+5.0
    if winLostData.getPlayerScoreBySeat then
        local selfSeat = CF.roomData:getSelfSeat()
        local score = winLostData:getPlayerScoreBySeat(selfSeat) or 0
        self:dispatchEvent({ name = self.EVENT_SHUFFLE_TIP_WIN_AND_LOST, msg = { score = score, isDianPao = false } })
        CF.game:getModule("ShareWin"):updateShowShareWinView(score)
    end

    -- 游戏结束后请求金币信息
    CF.SysTool.performWithDelayGlobal(
        function()
            if CF.msgManager then
                CF.msgManager:sendReqPlayerGold()
            end
        end,
        0.5
    )

    -- 游戏小结束后触发
    self:doAfterMsgResult()
end

function WinLostModule:onMsgWinLostWatch(msgData)
    self:onMsgWinLost(msgData)
    for i = 0, CF.roomData:getChairs() - 1 do
        local handCardIDs = {}
        for j = 1, msgData.ucCount[i] do
            table.insert(handCardIDs, msgData.ucCards[i][j])
        end
        self._gameData:setHandCardIDs(i, handCardIDs)
        self:dispatchEvent({name = self.EVENT_WINLOST_SHOWWATCHHAND, msg = {seat = i, bIsShow = true}})
    end
end

function WinLostModule:onClockNotify(event)
    local msgData = CF.Protobuf.protobufToMsg(CF.PyrrlaProtobuf.ClockNotify,event.msg.buff)
    -- local msgData = {
    --     time = 88,
    --     flag = "TIMEOUT_KICK",
    --     seat = 0,
    -- }
    self:dispatchEvent({name = self.EVENT_WINLOST_CLOCK, msgData = msgData})
end

function WinLostModule:setHideWinlostUI(bHide)
    self._needHideWinlostUI = bHide or false
end

function WinLostModule:getHideWinlostUI()
    return self._needHideWinlostUI or false
end

-- 游戏小结束后触发
function WinLostModule:doAfterMsgResult()
    self._needHideWinlostUI = false
    if CF.roomData:isGoldRoom() then
        -- 发送折扣礼包信息
        CF.getLobbyModule("SaleGiftbag"):reqStartDiscountGiftBag()
        -- 金币场对局掉落活动
        CF.getLobbyModule("GoldPlayAct"):reqGoldPlayActAward()
        -- 留存活动
        CF.getLobbyModule("BackActivity"):onEventMsgResult()
        -- 新手引导奖励
        CF.getLobbyModule("Guide"):reqNewUserGuideAward()
    end
    CF.game:getModule("Marker"):onAfterWinLost()
    self:dispatchEvent({name = self.EVENT_SHOW_GUIDE})
end

function WinLostModule:onMsgTrustPunishment(msgData)
    local gameData = CF.game:getModule("GameLayer"):getGameData()
    local winLostData = gameData:getWinLostData()
    if msgData.nCount > 0 then
        -- 首先初始化所有座位的惩罚值
        for i = 0, CF.roomData:getMaxPlayer() - 1 do
            winLostData:setTrustPunishment(i, msgData.nPunishment[i])
        end

        -- 然后处理有惩罚的玩家
        for i = 0, msgData.nCount - 1 do
            local seat = msgData.seats[i]
            if winLostData:getTrustPunishment(seat) ~= 0 then
                local localSeat = CF.roomData:seatToLocal(seat)
                winLostData:setTrustChastise(localSeat, 1)
                -- 触发事件显示结果
                self:dispatchEvent({name = self.EVENT_SHOW_TRUST_PUNISHMENT})
            end
        end
    end
end

function WinLostModule:onMsgResultYxbd(msgData)
    local gameData = CF.game:getModule("GameLayer"):getGameData()
    local winLostData = gameData:getWinLostData()
    winLostData:setResultYxbd(msgData.nYXBD)
    -- 触发事件显示结果
    self:dispatchEvent({name = self.EVENT_SHOW_RESULT_YXBD})
end

return WinLostModule
+