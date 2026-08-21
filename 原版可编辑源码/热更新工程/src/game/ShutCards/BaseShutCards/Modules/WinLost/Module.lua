local WinLostModule = CF.gameClass("WinLostModule", CF.ModuleBase)
local MutiVersionPropConfig = CF.gameRequire("Config.MutiVersionPropConfig")

WinLostModule.EVENT_GAME_WINLOST = "EVENT_GAME_WINLOST"
WinLostModule.EVENT_SHOW_GUIDE = "EVENT_SHOW_GUIDE"
-- 洗牌4.0 start --
-- 抓牌
WinLostModule.EVENT_SHUFFLE_TIP_WIN_AND_LOST = "EVENT_SHUFFLE_TIP_WIN_AND_LOST" 
-- 洗牌4.0 end   --

function WinLostModule:ctor()
    WinLostModule.super.ctor(self)
    self._gameData = CF.game:getModule("GameLayer"):getGameData()
end

function WinLostModule:getSubXYDealList()
    return {
        {callback = handler(self, self.onMsgEndType), msgClass = CF.GameProtocol.msgEndType},
        {callback = handler(self, self.onMsgWinLost), msgClass = CF.GameProtocol.msgWinLost},
    }
end

function WinLostModule:onMsgEndType(msgData)
    local winLostData = self._gameData:getWinLostData()
    winLostData:setEndType(msgData.sEndType)
end

function WinLostModule:onMsgWinLost(msgData)
    self._gameData:setIsHaveResult(true)

    local winLostData = self._gameData:getWinLostData()
    for seat = 0, CF.roomData:getMaxPlayer() - 1 do
        local player = CF.roomData:getPlayerDataBySeatId(seat)
        if player then
            winLostData:setPlayerName(seat, player:getNickName())
        end
    end

    winLostData:setBoomCnt(msgData.iBoomCount)
    winLostData:setPlayerScore(msgData.iScore)

    self:dispatchEvent({name = self.EVENT_GAME_WINLOST})
    
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

    --2022.5.31合规：仅多版本组内跨区玩法不开启洗牌；本区自有同 gameid（如绍兴900046的30144）不受影响
    local mutiPropCfg = MutiVersionPropConfig[CF.roomData:getGameID()]
    if mutiPropCfg then
        local curLobbyID = CF.areaData:getLobbyID()
        local isMutiVersionLobby = false
        for _, cfg in pairs(MutiVersionPropConfig) do
            if cfg.lobbyid == curLobbyID then
                isMutiVersionLobby = true
                break
            end
        end
        if isMutiVersionLobby and mutiPropCfg.lobbyid ~= curLobbyID then
            isShowShuffle = false
        end
    end
    -- 下局是否预洗牌
    if isShowShuffle and not isCutCard then
        local propUseModule = CF.game:getModule("PropUse")
        if propUseModule and propUseModule.isPreShuffle then
            isShowShuffle = not propUseModule:isPreShuffle()
        end
    end
    return isShowShuffle
end

return WinLostModule
