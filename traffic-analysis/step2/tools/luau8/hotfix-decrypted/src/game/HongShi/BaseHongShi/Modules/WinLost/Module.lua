local WinLostModule = CF.gameClass("WinLostModule", CF.ModuleBase)

WinLostModule.EVENT_GAME_WINLOST = "EVENT_GAME_WINLOST"
WinLostModule.EVENT_SHOW_GUIDE = "EVENT_SHOW_GUIDE"
-- 洗牌4.0 start --
-- 抓牌
WinLostModule.EVENT_SHUFFLE_TIP_WIN_AND_LOST = "EVENT_SHUFFLE_TIP_WIN_AND_LOST" 
-- 洗牌4.0 end   --
-- 旁观玩家小结束刷新手牌
WinLostModule.EVENT_WINLOST_SHOWWATCHHAND = 'EVENT_WINLOST_SHOWWATCHHAND'

function WinLostModule:ctor()
    WinLostModule.super.ctor(self)
end

function WinLostModule:getSubXYDealList()
    return {
        {callback = handler(self, self.onMsgWinLost), msgClass = CF.GameProtocol.msgResult}, --1435
        {callback = handler(self, self.onMsgWinLostWatch), msgClass = CF.GameProtocol.msgResultWatch} --1136
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
    winLostData:setPlayerScore(msgData.nWinLost)
    self:dispatchEvent({name = self.EVENT_GAME_WINLOST, msg = {bShow = true}})
    -- 游戏小结束后触发
    self:doAfterMsgResult()
    
    -- 根据分数设置洗牌4.0+5.0
    if winLostData.getPlayerScoreBySeat then
        local selfSeat = CF.roomData:getSelfSeat()
        local score = winLostData:getPlayerScoreBySeat(selfSeat) or 0
        self:dispatchEvent({ name = self.EVENT_SHUFFLE_TIP_WIN_AND_LOST, msg = { score = score, onlyNeedScore = true } }) --此处因为不能触发洗牌相关逻辑，但是分数相关代码又需要分数，特加入参数onlyNeedScore
    end
end

function WinLostModule:onMsgWinLostWatch(msgData)
    self:onMsgWinLost(msgData)
    -- 旁观玩家展示手牌
    for seat = 0, CF.roomData:getMaxPlayer() - 1 do
        local handCardIDs = {}
        for i = 1,msgData.handCount[seat] do
            table.insert(handCardIDs, msgData.handCards[seat][i])
        end
        local gameData = CF.game:getModule("GameLayer"):getGameData()
        gameData:setHandCardIDs(seat, handCardIDs)
        gameData:setHandCardNum(seat, #handCardIDs)
        self:dispatchEvent( { name = self.EVENT_WINLOST_SHOWWATCHHAND, msg = {seat = seat, bIsShow = true}})
    end
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
end

return WinLostModule
l