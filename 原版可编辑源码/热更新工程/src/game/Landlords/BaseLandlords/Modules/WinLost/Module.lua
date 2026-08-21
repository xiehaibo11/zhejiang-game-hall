local WinLostModule = CF.gameClass("WinLostModule", CF.ModuleBase)

WinLostModule.EVENT_GAME_WINLOST = "EVENT_GAME_WINLOST"
WinLostModule.EVENT_SHOW_GUIDE   = "EVENT_SHOW_GUIDE"
-- 洗牌4.0 start --
-- 抓牌
WinLostModule.EVENT_SHUFFLE_TIP_WIN_AND_LOST = "EVENT_SHUFFLE_TIP_WIN_AND_LOST" 
-- 洗牌4.0 end   --

function WinLostModule:ctor()
    WinLostModule.super.ctor(self)
end

function WinLostModule:getSubXYDealList()
    return {
        {callback = handler(self, self.onMsgWinLost), msgClass = CF.GameProtocol.msgWinLost}
    }
end

function WinLostModule:onMsgWinLost(msgData)
    CF.game:getModule("GameLayer"):getGameData():setWinLostData(msgData)
    self:dispatchEvent({name = self.EVENT_GAME_WINLOST, msg = {bShow = true}})
    -- 游戏结束后请求金币信息
    CF.SysTool.performWithDelayGlobal(function() CF.msgManager:sendReqPlayerGold() end, 0.5)
    -- 游戏小结束后触发
    self:doAfterMsgResult()
    
    -- 根据分数设置洗牌4.0+5.0
    if msgData.nWinLostScore then
        local selfSeat = CF.roomData:getSelfSeat()
        local score = msgData.nWinLostScore[selfSeat + 1] or 0
        self:dispatchEvent({ name = self.EVENT_SHUFFLE_TIP_WIN_AND_LOST, msg = { score = score, isDianPao = false } })
        CF.game:getModule("ShareWin"):updateShowShareWinView(score)
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
    CF.game:getModule("Marker"):onAfterWinLost()
    CF.game:getModule("Marker"):showMarkerLine(false)
    CF.game:getModule("Trust"):hideTrustView()
    self:dispatchEvent({name = self.EVENT_SHOW_GUIDE})
    CF.roomData:setIsGameStart(false)
end

--for test
function WinLostModule:testWinlost()
	local msgData={
        nWinLostType = 2,
        nPlayerCnt = 3,
        nWinLostScore = { 1,2,3},
        nPlayerCardTypesCounts = {4,5,6 },
        nPlayerCardTypes = {{1005},{1006},{1007}},
        nBombNumbers = {7,8,9},
	}
    self:onMsgWinLost(msgData)
    local winlostLayer = CF.gameRequire("Modules.WinLost.View").new()
    winlostLayer:showSelf()
end

return WinLostModule