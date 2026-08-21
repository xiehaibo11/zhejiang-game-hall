local WinLostModule = CF.gameClass("WinLostModule", CF.ModuleBase)
local ITEMNODEENDTYPE = require("game.Mahjong.BasicMahjong.Modules.WinLost.ItemNodeConfig") --icon类型

WinLostModule.EVENT_GAME_WINLOST = "EVENT_GAME_WINLOST"
WinLostModule.EVENT_SHOW_GUIDE = "EVENT_SHOW_GUIDE"
WinLostModule.EVENT_HIDE_SETTLE = "EVENT_HIDE_SETTLE"
WinLostModule.EVENT_CLOSE_GOLD_VIEW = "EVENT_CLOSE_GOLD_VIEW"
WinLostModule.EVENT_HIDE_SHOWDEAD_BTN = "EVENT_HIDE_SHOWDEAD_BTN"
-- 洗牌4.0 start --
-- 抓牌
WinLostModule.EVENT_SHUFFLE_TIP_WIN_AND_LOST = "EVENT_SHUFFLE_TIP_WIN_AND_LOST" 
-- 洗牌4.0 end   --

function WinLostModule:ctor()
    WinLostModule.super.ctor(self)
    self._needHideWinlostUI = false
    self:initWinLostData()
end

function WinLostModule:getProxyEvents()
    return {
        {module = CF.roomData, eventKeyName = "EVENT_PLAYER_START", callBack = "onPlayerStart"}
    }
end

function WinLostModule:getSubXYDealList()
    return {
        {callback = handler(self,self.onMsgResult),msgClass = CF.GameProtocol.msgResult},
        {callback = handler(self,self.onMsgResultExtInfo),msgClass = CF.GameProtocol.msgResultExtInfo},
        {callback = handler(self,self.onMsgGameMaxFan),msgClass = CF.GameProtocol.msgGameMaxFan},
        {callback = handler(self,self.onMsgEndType),msgClass = CF.GameProtocol.msgEndType},
        {callback = handler(self,self.onMsgFanCnt),msgClass = CF.GameProtocol.msgFanCnt},
    }
end

function WinLostModule:initWinLostData()
    if not self._winLostData then
        self._winLostData = CF.gameRequire("Modules.WinLost.WinLostData").new()
    end
    self._winLostData:initDatas()
end

function WinLostModule:getWinLostData()
    return self._winLostData
end

function WinLostModule:onPlayerStart(event)
    if not event or not event.msg or not event.msg.seatID then
        return
    end
    if event.msg.seatID == CF.roomData:getSelfSeat() and not CF.roomData:getIsSeer() then
        self:initWinLostData()
    end
end

--小结束是否显示洗牌按钮
function WinLostModule:needShowShuffleButton(isCutCard)
    --回放
    if CF.roomData:isPlayBack() or CF.roomData:getIsSeer() then
        return false
    end
    if CF.roomData:isGoldRoom() then
        return CF.gameSub:getIsOpenShuffle(CF.roomData:getGameID())
    end
    --局数信息
    local playCount = CF.roomData:getPlayCount()
    local maxPlayCount = CF.roomData:getMaxPlayCount()
    --大结束
    if playCount == maxPlayCount then
        return false 
    end
    if CF.roomData:getIsGameOver() then 
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

-- 小结束
function WinLostModule:onMsgResult(msgData)
    local gameData = CF.game:getModule("GameLayer"):getGameData()
    CF.roomData:setIsHaveResult(true)
    CF.soundManager:playSoundEnd()
    local time = self:getWinLostData():getDelayTime()
    local endType = self:getWinLostData()._sEndType
    if endType ~= CF.GameDefine.HU_TYPE.ET_NONE then
        for i = 0 , CF.roomData:getChairs() - 1 do
            gameData:clearHandMah(i)
            local mahIDs = gameData:getHuMahs(i)
            local huMahID = gameData:getHuDanFang(i)
            if mahIDs and huMahID then
                gameData:setHuMahsData(i, mahIDs, huMahID)
            end
        end
    end
    self:getWinLostData():onMsgResult(msgData)
    if time then
        self:performWithDelay(function()
            self:showSettleWindow()
            for i = 0 , CF.roomData:getChairs() - 1 do
                local huMahID = gameData:getHuDanFang(i)
                self:getWinLostData():setHuMahData(i, huMahID)
            end
        end,time)
        local selfWinLost = msgData.nWinLost[CF.roomData:getSelfSeat()]
        local winLostWithServicePay = selfWinLost 
        local gameData = CF.game:getModule("GameLayer"):getGameData()
        if gameData.getServicePay then 
            winLostWithServicePay = winLostWithServicePay - gameData:getServicePay()
        end
        CF.SysTool.performWithDelayGlobal(function()
            if not self or not CF.roomData then
                return
            end
            CF.getLobbyModule("YGiftBankruptcy"):showBuyBankuptcyGift(CF.roomData:getGameID(), winLostWithServicePay, CF.roomData:is50())--hjq todo
        end,time + 1)
    end
    -- 游戏结束后请求金币信息
    CF.msgManager:sendReqPlayerGold()
    -- 游戏小结束后触发
    self:doAfterMsgResult()
    --隐藏查看废牌按钮
    self:dispatchEvent({ name = self.EVENT_HIDE_SHOWDEAD_BTN})
    --关闭查看废牌堆界面
    self:clearDeadAreaLayer()
end

--金币场小结束
function WinLostModule:showSettleGoldWindow()
    local zorder
    if CF.roomData:isGoldRoom() then
        if CF.selfPlayerData:getIsNewUserGuide() and  CF.selfPlayerData:getIsFirstGoldGame() then
            zorder = CF.ZORDER.DIALOG
            CF.selfPlayerData:setIsFirstGoldGame(false)
        end
    end
    local settleGoldWindow = CF.gameRequire("Modules.WinLost.GoldView").new()
    settleGoldWindow:showSelf(zorder)
    CF.game:getModule("ChangeLevel"):show("mahjong")
end

function WinLostModule:hideSettleGoldWindow()
    self:dispatchEvent( { name = self.EVENT_HIDE_SETTLE})
end

function WinLostModule:showSettleBoxWindow()
    local lobbyID = CF.areaData:getLobbyID()
    if lobbyID == 900021 and 0 == CF.roomData:getTempPlayerDataCount() then
        -- 杭麻圈存在下发结算的时候，玩家数据还未下发的情况
    else
        local zorder
        if CF.roomData and CF.roomData:is50Match() then
            zorder = 46
        end
        CF.gameRequire("Modules.WinLost.View").new():showSelf(zorder)
    end
    CF.game:getModule("GameLayer"):clearTingUI()
end

function WinLostModule:setHideWinlostUI(bHide)
    self._needHideWinlostUI = bHide or false
end

function WinLostModule:setWinLostShow(bShow)
    self._isShowWinLost = bShow
end

function WinLostModule:getWinLostShow()
    return self._isShowWinLost
end

function WinLostModule:showSettleWindow(isCenter)
    if CF.roomData and CF.roomData:getIsSeer() and self._needHideWinlostUI then
        self._needHideWinlostUI = false
        return
    end
    CF.game:getModule("Trust"):hideTrustView()
    if CF.roomData:isGoldRoom() and CF.configData:isShowSettleGoldWindow() then
        self:showSettleGoldWindow()
    else
        self:showSettleBoxWindow()
    end

    CF.SysTool.performWithDelayGlobal(function()
        -- 因为有些地区设置self:getWinLostData():onMsgResult(msgData)是在本方法后面执行，导致取值有问题，所以强行做个延时
        -- 根据分数设置洗牌4.0+5.0
        if not self or not CF.roomData then
            return
        end
        local selfSeat = self:getWinLostData():getSelfSeat()
        local score = self:getWinLostData():getWinLost(selfSeat) or 0
        -- 自己被点炮胡
        local isDianPao = self:getWinLostData()._sEndType == 2 and self._lostEndType and tonumber(self._lostEndType.sSeat) == selfSeat -- 当前小结束类型是否是点炮胡
        self:dispatchEvent({ name = self.EVENT_SHUFFLE_TIP_WIN_AND_LOST, msg = { score = score, isDianPao = isDianPao } })
        if not isCenter then
            local gameData = CF.game:getModule("GameLayer"):getGameData()
            local huSeats = gameData:getHuSeat()
            for i = 1, #huSeats do
                if huSeats[i] == selfSeat then
                    CF.game:getModule("ShareWin"):updateShowShareWinView(score, selfSeat)
                    break
                end
            end
        end
    end, 0.1)
end

function WinLostModule:onGameStart()
    self:initWinLostData()
    self:hideSettleGoldWindow()
    self._gameStartTime = os.time() or 0
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
        self:dispatchEvent( { name = self.EVENT_SHOW_GUIDE })
        self:recordGameData()
    end
end

function WinLostModule:recordGameData()
    local data = {}
    data.time1 = self._gameStartTime or -1
    data.time2 = os.time() or -1
    data.staytime = data.time2 - data.time1
    data.userid = CF.selfPlayerData:getNumberID()
    data.appid =  CF.roomData:getGameID()
    data.roomid = CF.roomData:getRoomID()
    data.chairs = CF.roomData:getChairs()
    data.gamename = CF.gameSub:getGameNameByGameId(CF.roomData:getGameID())
    CF.throwDataManager:throwData(CF.ThrowDataDefine.GameStarted,data)
end

function WinLostModule:onMsgResultExtInfo(msgData)
    self:getWinLostData():onMsgResultExtInfo(msgData)
end

function WinLostModule:onMsgGameMaxFan(msgData)
    self:getWinLostData():onMsgGameMaxFan(msgData)
end

function WinLostModule:onMsgEndType(msgData)
    self:getWinLostData():onMsgEndType(msgData)
    local gameData = CF.game:getModule("GameLayer"):getGameData()
    local huSeats = gameData:getHuSeat()
    for i = 1, #huSeats do
        --播放胡牌音效
        local acitonindex = nil
        if msgData.sEndType == CF.GameDefine.END_TYPE.ET_SELF then
            acitonindex = "hu_1"
        elseif msgData.sEndType == CF.GameDefine.END_TYPE.ET_DISCARD or msgData.sEndType == CF.GameDefine.END_TYPE.ET_ROBKONG then
            acitonindex = "hu_2"
            gameData:deleteLastOutMahData(gameData:getLastPlaySeat())
        end
        if acitonindex then
            local bMan = false
            local playerData = CF.roomData:getPlayerDataBySeatId(huSeats[i])
            if playerData then
                bMan = playerData:getSex() == 1
            end
            local bFangYan = not CF.settingData:getMahIsNormalVoice()
            local gameid = bFangYan and CF.roomData:getGameID() or nil
            CF.soundManager:playSoundMahAction(acitonindex, bMan, gameid)
        end
        if self:isShowHuAni() then
            --胡动画
            local localHuSeat = CF.roomData:seatToLocal(huSeats[i])
            CF.game:getModule("GameLayer"):showMahAcitonAni(localHuSeat, CF.GameDefine.POWER.HU, msgData.sEndType == CF.GameDefine.END_TYPE.ET_SELF)
        end
    end
    self:setLostEndType(msgData)
    self._lostEndType = clone(msgData)
end

function WinLostModule:setLostEndType(msgData)
    if self:isShowEndType(CF.roomData:getGameID(),CF.GameDefine.HU_TYPE.TAKE_OTHER) then 
        if msgData.sSeat and msgData.sEndType == CF.GameDefine.HU_TYPE.TAKE_OTHER then
            self:getWinLostData():setLostEndType(msgData.sSeat,msgData.sEndType)
        end
    end
end

function WinLostModule:isShowEndType(gameid,huType)
    local conf 
    if huType == CF.GameDefine.HU_TYPE.TAKE_OTHER then 
        conf = ITEMNODEENDTYPE.MahjongDianPaoIconByConfID or {}
    end     
    if not conf[gameid] then 
        return false
	else
		return true
	end 
end

function WinLostModule:isShowHuAni()
    return true
end

-- 番数
function WinLostModule:onMsgFanCnt(msgData)
    -- 番数信息等，提供给小结束使用
    self:getWinLostData():onMsgFanCnt(msgData)
end

-- 关闭金币场弹窗
function WinLostModule:hideGoldView()
    self:dispatchEvent({name = self.EVENT_CLOSE_GOLD_VIEW})
end

--关闭查看废牌区的页面
function WinLostModule:clearDeadAreaLayer()
    local scene = display.getRunningScene()
    local node = scene:getChildByName("UIMahDeadAreaLayer")
    if node then
        node:close()
    end
end

return WinLostModule
