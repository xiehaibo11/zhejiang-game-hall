local WinLostModule = CF.gameClass("WinLostModule", CF.ModuleBase)

WinLostModule.EVENT_GAME_WINLOST = "EVENT_GAME_WINLOST"
WinLostModule.EVENT_SHOW_GUIDE   = "EVENT_SHOW_GUIDE"
WinLostModule.EVENT_SHOW_BIG_WINLOST   = "EVENT_SHOW_BIG_WINLOST"
-- 洗牌4.0 start --
-- 抓牌
WinLostModule.EVENT_SHUFFLE_TIP_WIN_AND_LOST = "EVENT_SHUFFLE_TIP_WIN_AND_LOST" 
-- 洗牌4.0 end   --

function WinLostModule:getSubXYDealList()
    return {
        {callback = handler(self, self.onMsgWinLost), msgClass = CF.GameProtocol.msgWinLostDT}
    }
end

function WinLostModule:onMsgWinLost(msgData)

    CF.game:getModule("GameLayer"):getGameData():getWinLostData():setWinlostMsgData(msgData)

    self:dispatchEvent({name = self.EVENT_GAME_WINLOST, msg = {bShow = true}})
    -- 游戏结束后请求金币信息
    CF.SysTool.performWithDelayGlobal(function() CF.msgManager:sendReqPlayerGold() end, 0.5)
    self:doAfterMsgResult()
    
    -- 根据分数设置洗牌4.0+5.0
    local selfSeat = CF.roomData:getSelfSeat()
    local winLostData = CF.game:getModule("GameLayer"):getGameData():getWinLostData():getWinlostMsgData()
    if winLostData and winLostData.sTotalScore then
        local score = winLostData.sTotalScore[selfSeat] or 0
        self:dispatchEvent({ name = self.EVENT_SHUFFLE_TIP_WIN_AND_LOST, msg = { score = score, isDianPao = false } })
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

function WinLostModule:showBigWinlost()
    self:dispatchEvent({name = self.EVENT_SHOW_BIG_WINLOST})
end

--for test
function WinLostModule:testWinlost()
    local allComb = {
        {
            {
                combScore = 4,
                ucCount = 8,
                ucCards = {3,3,3,4,4,4,5,5,6}
            },
            {
                combScore = 4,
                ucCount = 10,
                ucCards = {4,4,4,4,3,4,5,6,6,7}
            },   
            {
                combScore = 4,
                ucCount = 15,
                ucCards = {4,4,4,4,3,3,5,6,7}
            }, 
            {
                combScore = 4,
                ucCount = 27,
                ucCards = {4,4,4,4}
            },  
            {
                combScore = 4,
                ucCount = 27,
                ucCards = {4,4,4,}
            },  
        },
    }
    local msgData = {
        sEndType = 6,
        sGraspScore = {-1, -2, 3, 4,6,5},
        sBombScore = {-5,-6,7,8,4,5},
        sRankScore = {-9,-1,2,3,5,6},
        sTotalScore = {-1,-2,3,45,6,7},
        sWinOrder = {[1] = 4, [2] = 1, [3] = 2 , [4] = 3},
        sDoubleOrSingle = {[1] = 0 ,[2] = 0, [3] = 2 , [4] = 2},
        allComb = allComb,
        bIsFinal = false,
        sCombType = {{201,401,501,601,701,801,901},{201,401,501,601,701,801,901},{201,401,501,601,701,801,901},{201,401,501,601,701,801,901},{201,401,501,601,701,801,901},{201,401,501,601,701,801,901}}
    }
    self:onMsgWinLost(msgData)
end

return WinLostModules