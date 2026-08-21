local WinLostView = CF.gameClass("WinLostView", CF.ViewBase)
local AnimationManager = CF.gameRequire("Manager.AnimationManager")
local Define = CF.gameRequire("Modules.ChangeCard.Define")

function WinLostView:ctor(param)
    WinLostView.super.ctor(self, param)
    self:initDiscountNode()
    self:showWatermark()
    -- local changeCardModule = CF.game:getModule("ChangeCard")
	-- if changeCardModule then
	-- 	changeCardModule:updateBtn()
	-- end
end

function WinLostView:getCSBPath()
    return "res/cocosStudio/LookAnxiously/GameLayer/CSB/WinLost.csb"
end

function WinLostView:getBindingInfo()
    return {
        ["_KW_BTN_GO_ON@"] = {varName = "_continueBtn", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onBtnEventContinue"},
        ["_KW_BTN_CHECK_TABLE"] = {varName = "_checkTableBtn", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onCheckTableClicked"},
        ["_KW_WIN_LOST_BG"] = {varName = "_winLostBG"},
        ["_KW_WIN_LOST"] = {varName = "_winLost"},
        ["_KW_WIN_LOST_INFO_PANEL_"] = {varName = "_winLostInfoPanel_", beginIndex = 1, endIndex = 5},
        -- 钻石房卡洗牌
        ["_KW_BTN_SHUFFLE_DIRECT"] = { varName = "_shuffleBtn", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onShuffleDirectClicked"},
        ["_KW_IMG_SHUFFLE_PROP_DIRECT"] = {varName = "_imgShuffleProp"},
        ["_KW_IMG_SHUFFLE_PROP_DIAMOND"] = {varName = "_imgShufflePropDiamond"},
        ["_KW_TXT_SHUFFLE_PROP_DIRECT"] = {varName = "_txtShuffleProp"},
		["_KW_TEXT_COSTNAME"] = { varName = "_txtCostName"},
		["_KW_TXT_SHUFFLE_FREE_DIRECT"] = { varName = "_txtShuffleFree"},
        -- 洗牌券洗牌
        ["_KW_BTN_SHUFFLE_INDIRECT"] = { varName = "_shuffleQuanBtn", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onShuffleIndirectClicked"},
        ["_KW_TXT_SHUFFLE_PROP_INDIRECT_COST"] = {varName = "_txtShufflePropCost"},
        ["_KW_TXT_SHUFFLE_PROP_INDIRECT_COUNT"] = {varName = "_txtShufflePropCount"},
        -- 金币场洗牌
        ["_KW_BTN_SHUFFLE_GOLD"] = {varName = "_shuffleGoldBtn", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onShuffleGoldClicked"},
        ["_KW_TXT_SHUFFLE_PROP_GOLD_COST"] = {varName = "_txtShuffleGoldCost"},
        ["_KW_TXT_SHUFFLE_PROP_GOLD_SALE"] = {varName = "_txtShuffleGoldSale"},
        -- 切牌
        ["_KW_BTN_CUTCARD"] = {varName = "_btnCutCard",type = CF.UI_TYPE.BUTTON, onTouchEnded = "onCutCardClicked"},--切牌按钮
        ["_KW_BTN_CUTCARD_QUAN"] = {varName = "_btnCardQuan", onTouchEnded = "onCutCardClicked"},--切牌按钮
        ["_KW_TXT_CUTCARD_PROP_DIRECT"] = {varName = "_txtCutCard"},--切牌数量
        ["_KW_TEXT_CUTCARD_COSTNAME"] = {varName = "_txtCutCardName"},--切牌数量
        ["_KW_IMG_CUTCARD_PROP_DIRECT"] = {varName = "_imgCutCard"},--切牌数量
        ["_KW_IMG_CUTCARD_PROP_DIAMOND"] = {varName = "_imgCutCardDiamond"},

        ["_KW_KICK_OUT_CLOCK"] = {varName = "_kickOutClock"},--被踢出房间的倒计时

        ["_KW_PANEL_ICON"] = {varName = "_changeCardBtn", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onChangeCardClicked"}, --处理点击监听
        ["_KW_IMG_DIAMOND"] = {varName = "_imgDiamond"},
        ["_KW_IMG_ROOMCARD"] = {varName = "_imgRoomCard"},
        ["_KW_TEXT_COST"] = {varName = "_txtCost"},
        ["_KW_TEXT_COST_CARD"] = {varName = "_txtCostCard"},
        ["_KW_BTN_UNLIMIT"] = {varName = "_KW_BTN_UNLIMIT", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onBtnUnLimit"},
        ["_KW_TEXT_UNLIMIT"] = {varName = "_KW_TEXT_UNLIMIT"},
    }
end

function WinLostView:getProxyEvents()
    return {
        {module = CF.game:getModule("WinLost"), eventKeyName = "EVENT_GAME_WINLOST", callBack = "onEventGameWinLost"},
        {module = CF.game:getModule("WinLost"), eventKeyName = "EVENT_SHOW_WINLOST", callBack = "onEventShowWinLost"},
		{module = CF.game:getModule("Shuffle4"), eventKeyName = "EVENT_PRE_NEXT_SHUFFLE_BY_TIP", callBack = "onUsePreShuffle"},
        {module = CF.game:getModule("Shuffle4"), eventKeyName = "EVENT_UPDATE_DISCOUNT_TIME", callBack = "onUpdateDisTime"},
        {module = CF.game:getModule("PropUse"), eventKeyName = "EVENT_PRE_SUCCESS", callBack = "onPreShuffleSuc"},
        {module = CF.roomData, eventKeyName = "EVENT_PLAYER_START", callBack = "onPlayerStart"},
        {module = CF.game, eventKeyName = "EVENT_MATCH_CONTINUE_CLOCK", callBack = "onClock"},
        { module = CF.game:getModule("Match"), eventKeyName = "EVENT_MATCH_STATE_CHANGED", callBack = "onMatchStateChanged" },
        -- {module = CF.game:getModule("ChangeCard"), eventKeyName = "EVENT_BTN_VISIBLE", callBack = "updateBtnVisivble"},
    }
end

function WinLostView:initBtns()
    self:initCutCard()
    self:initShuffle()
end

function WinLostView:initDiscountNode()
    local modu = CF.game:getModule("Shuffle4")
    if modu then
        local size = self._shuffleBtn:getContentSize()
        self.m_shuffleDisNode = modu:getDiscountNode(self._shuffleBtn, size.width / 2, size.height - 10)
		if modu:isFree() and self.m_shuffleDisNode and not tolua.isnull(self.m_shuffleDisNode) then
			self.m_shuffleDisNode:setVisible(true)
			self.m_shuffleDisNode:getChildByName("_KW_DISCOUNT_TXT"):setVisible(false)
			self.m_shuffleDisNode:getChildByName("bg"):setVisible(false)
		end
    end
end

function WinLostView:onBtnEventContinue(send, eventType)
    self:showSelf(false)
    if not self:isShowBigWinLost() then
		if CF.roomData:getIsSeer() and CF.roomData:isDelayWatch() then
			CF.game:getModule("WatchGame"):changeToRealWatch()
            return
		end
        CF.game:getModule("CenterBtns"):onStartGameEvent()
    else
        local bigSettleData = CF.game:getModule("GameLayer")._gameData:getBigSettleData()
        if bigSettleData then
            -- TODO
            local BigWinLostLayer = CF.gameRequire("Modules.BigWinLost.View")
            local layer = BigWinLostLayer.new(bigSettleData)
            layer:setCanContinue(CF.roomData:isCanContinue())
            layer:showSelf()
		end
    end
end 

function WinLostView:onEventGameWinLost(event)
    if not event or not event.msg then
        return
    end
    local winLostData = event.msg.winLostData
    local playersInfo = event.msg.playersInfo
    local playerScore = 0
    for seat,playerInfo in pairs(playersInfo) do 
        -- local index = seat + 1
        local index = self:changeSeatToResult(seat)
        self:updateNickName(index, playerInfo.nickName)
        self:updateHead(index, playerInfo.headUrl)
        self:updateNumID(index, playerInfo.numid)
        self:updateHost(index, playerInfo.isHost)
        self:updateLeftCardCount(index, winLostData.leftCardCount[seat])
        self:updatePublicMultiple(index, winLostData.publicMult)
        self:updatePrivateMultiple(index, winLostData.privateMult[seat], playerInfo.isSpring)
        self:updateWinLostScore(index, winLostData.winLostScore[seat])
        if seat == CF.roomData:getSelfSeat() then
            playerScore = winLostData.winLostScore[seat]
        end
        self["_winLostInfoPanel_" .. index]:setVisible(true)
    end 
    self:updateWinLostState(winLostData.isWin)

    local ftime = 1
    local springSeat = CF.game:getModule("GameLayer")._gameData:getSpringSeat()
    if springSeat and #springSeat > 0 then
        ftime = 2.5
    end
    local delayTime = cc.DelayTime:create(ftime)
    local sequenceAction =
        cc.Sequence:create(
        {
            delayTime,
            cc.CallFunc:create(function()
                if CF.roomData and CF.roomData:isDelayWatch() and CF.game:getModule("WinLost"):getHideWinlostUI() then
                    CF.game:getModule("WinLost"):setHideWinlostUI(false)
                    return
                end
                if not tolua.isnull(self) then
                    self:showSelf()
                    CF.soundManager:playSoundEnd()
                end
                local winLostWithServicePay = playerScore 
                local gameData = CF.game:getModule("GameLayer"):getGameData()
                if gameData.getServicePay then 
                    winLostWithServicePay = winLostWithServicePay - gameData:getServicePay()
                end
                CF.getLobbyModule("Guide"):flushGoldCoin()
                CF.getLobbyModule("YGiftBankruptcy"):showBuyBankuptcyGift(CF.roomData:getGameID(), winLostWithServicePay, true)
            end)
        }
    )
    self:runAction(sequenceAction)
end

function WinLostView:onEventShowWinLost(event)
    local bShow = false
    if event and event.msg and event.msg.bShow then
        bShow = event.msg.bShow
    end
    self:showSelf(bShow)
end

function WinLostView:showSelf(show)
    if show == nil then 
        show = true
    end
    -- 包厢已经准备了的玩家，就不显示小结束界面了
    if not CF.roomData:isGoldRoom() then
        local selfPlayerData = CF.roomData:getSelfPlayerData()
        if selfPlayerData and selfPlayerData:getStateEx() == selfPlayerData.USER_STATEEX.psReady then 
            show = false
        end
    else
        self:startSchedule()
    end
    if show then
        self:initBtns()
        if CF.roomData:isGoldRoom() then
            self:showKickOutClock()
            CF.game:getModule("ChangeLevel"):show()
            self:runAction(cc.Sequence:create(cc.DelayTime:create(2),cc.CallFunc:create(function()
                XH.lobby:getModule("Share"):reqLuckyBag(true)
            end)))
        end
    else
        if CF.roomData:isGoldRoom() then
            CF.game:getModule("ChangeLevel"):hide()
        end
    end
    self._winLost:setVisible(show)
end 

function WinLostView:updateWinLostState(isWin)
    if isWin then 
        CF.soundManager:playSoundWin()
        self._winLostBG:loadTexture("Img_s_di.png", ccui.TextureResType.plistType)
    else 
        CF.soundManager:playSoundLose()
        self._winLostBG:loadTexture("Img_b_di.png", ccui.TextureResType.plistType)
    end 
end

function WinLostView:updateNickName(seat,nickName)
    local winLostInfoPanel = self["_winLostInfoPanel_" .. seat]
    CF.UITool.setText(winLostInfoPanel,"_KW_NICK_NAME",nickName)
end

function WinLostView:updateHead(seat,url)
    if url == "" then
        url = "http://thirdwx.qlogo.cn/mmopen/vi_32/RZWHFDljz1SW2Azl6kZyxic4ziaibicnUPo8dB3YiaGbhpyx3Tq34Vemk6KqexyJQJtAphjc9TELicPuRryc0UQ4DPmw/132"
    end

    local winLostInfoPanel = self["_winLostInfoPanel_" .. seat]
    local headPos = CF.UITool.seekWidgetByName(winLostInfoPanel,"_KW_HEAD")
    if headPos then 
        local headImg = CF.UITool.seekWidgetByName(headPos,"KW_DEFAULT_HEAD_IMG_NAME")
        if headImg == nil then 
            local size = headPos:getContentSize()
            headImg = CF.RemoteImage.new()
            :setPosition(size.width / 2, size.height / 2)
            :ignoreContentAdaptWithSize(false)
            :setContentSize(size.width, size.height)
            :setName("KW_DEFAULT_HEAD_IMG_NAME")
            :addTo(headPos)
        end 
        headImg:setUrl(url)
    end 
end

function WinLostView:updateNumID(seat, numId)
    local winLostInfoPanel = self["_winLostInfoPanel_" .. seat]
    CF.UITool.setText(winLostInfoPanel,"_KW_PLAYER_NUMID", numId)
end

function WinLostView:updateHost(seat,isHost)
    local winLostInfoPanel = self["_winLostInfoPanel_" .. seat]
    CF.UITool.setVisible(winLostInfoPanel,"_KW_ROOM_HOST",isHost)
end

function WinLostView:updateLeftCardCount(seat,leftCardCount)
    local winLostInfoPanel = self["_winLostInfoPanel_" .. seat]
    CF.UITool.setText(winLostInfoPanel,"_KW_CARD_COUNT",leftCardCount)
end

function WinLostView:updatePublicMultiple(seat,publicMult)
    local winLostInfoPanel = self["_winLostInfoPanel_" .. seat]
    CF.UITool.setText(winLostInfoPanel,"_KW_PUBLIC_MULTIPLE",publicMult)
end

function WinLostView:updatePrivateMultiple(seat, privateMult, isSpring)
    local winLostInfoPanel = self["_winLostInfoPanel_" .. seat]
    local strSpring = ""
    if isSpring then
        strSpring = strSpring .. "(春天)"
    end
    CF.UITool.setText(winLostInfoPanel,"_KW_PRIVATE_MULTIPLE", privateMult .. strSpring)
end

function WinLostView:updateWinLostScore(seat,winLostScore)
    local winLostInfoPanel = self["_winLostInfoPanel_" .. seat]
    CF.UITool.setText(winLostInfoPanel,"_KW_WIN_LOST_SCORE",winLostScore)
end

function WinLostView:isShowBigWinLost()
    if CF.roomData:isGoldRoom() then
        return false
    end
    local isShowBigWinLost = not (CF.roomData:getPlayCount() < CF.roomData:getMaxPlayCount())
    return isShowBigWinLost or CF.roomData:getIsGameOver()
end

function WinLostView:initShuffle()
    self._shuffleBtn:setVisible(false)
    self._shuffleQuanBtn:setVisible(false)
    self._shuffleGoldBtn:setVisible(false)
    self._costInfo = {propid=CF.gameSub:getShufflePropQuanID(), costPropid=CF.gameSub:getShufflePropQuanID(), cnt=1}
    --显示洗牌按钮
    if CF.game:getModule("WinLost"):needShowShuffleButton() then
        self._continueBtn:setPositionX(620)
        self._checkTableBtn:setPositionX(-620)
        --洗牌券的道具id
        if CF.roomData:isGoldRoom() then
            self._shuffleGoldBtn:setPositionX(0)
            self._shuffleGoldBtn:setVisible(true)
            local oriPrice = CF.game:getModule("PropUse"):getOriginalShufflePrice()
            local nowPrice = CF.game:getModule("PropUse"):getShufflePrice()
            self._txtShuffleGoldCost:setString(tostring(oriPrice))
            self._txtShuffleGoldSale:setString(tostring(nowPrice))
            if oriPrice <= nowPrice then
                self._txtShuffleGoldCost:setVisible(false)
            end
            self._costInfo.costPropid = XH.areaData:getGoldPropId()
			self._costInfo.cnt = nowPrice
        else
            local propId = CF.gameSub:getShufflePropQuanID()
            local shuffleInfo = CF.game:getModule("PropUse"):getShufflePropInfo(propId)
            local shuffleQuanCount = CF.game:getModule("PropUse"):getPropCnt(propId)
            -- 优先消耗免费房卡
            if shuffleInfo and shuffleInfo.propID == CF.areaData:getPropBindRoomCardID() then
                self._shuffleBtn:setPositionX(0)
                self._shuffleBtn:setVisible(true)
                self._imgShuffleProp:setVisible(true)
                self._imgShufflePropDiamond:setVisible(false)
                self:setShufflePropCount(shuffleInfo)
                self._costInfo.costPropid = shuffleInfo.propID
				self._costInfo.cnt = shuffleInfo.cost
            elseif shuffleQuanCount and shuffleQuanCount > 0 then
                self._shuffleQuanBtn:setPositionX(0)
                self._shuffleQuanBtn:setVisible(true)
                self._txtShufflePropCount:setString("x" .. shuffleQuanCount)
            else
                self._shuffleBtn:setPositionX(0)
                self._shuffleBtn:setVisible(true)
                if shuffleInfo and shuffleInfo.propID == CF.areaData:getPropRoomCardID() then
                    self._imgShuffleProp:setVisible(true)
                    self._imgShufflePropDiamond:setVisible(false)
                elseif shuffleInfo and shuffleInfo.propID == CF.areaData:getPropDiamndID() then
                    self._imgShuffleProp:setVisible(false)
                    self._imgShufflePropDiamond:setVisible(true)
                end
                self:setShufflePropCount(shuffleInfo)
                self._costInfo.costPropid = shuffleInfo.propID
				self._costInfo.cnt = shuffleInfo.cost
            end
        end
        XH.lobby:getModule("PropEventTracker"):track(XH.NewThrowDataDefine.dj24091901, { 
            costInfo = self._costInfo
        })
    else
        self._continueBtn:setPositionX(300)
        self._checkTableBtn:setPositionX(-300)
        self._shuffleBtn:setVisible(false)
        self._shuffleGoldBtn:setVisible(false)
    end
    -- 判断切牌按钮重新显示位置,有切牌必有洗牌
    if self._btnCutCard:isVisible() or self._btnCardQuan:isVisible() then
        self._btnCutCard:setPositionX(220)
        self._btnCardQuan:setPositionX(220)
        self._shuffleBtn:setPositionX(-220)
        self._shuffleQuanBtn:setPositionX(-265)
        self._continueBtn:setPositionX(620)
        self._checkTableBtn:setPositionX(-620)
    end
end

function WinLostView:initCutCard()
    self._btnCutCard:setVisible(false)
    self._btnCardQuan:setVisible(false)
    self._cutCostInfo = {}
    if CF.roomData:isGoldRoom() or not CF.game:getModule("WinLost"):needShowShuffleButton(true) then
        return
    end
    local cutCardsDefine = CF.gameRequire("Modules.PropUse.CutCardsDefine") 
    local gameID = CF.roomData:getGameID()
    if CF.roomData:isOpenCutCards() then
        local shuffleInfo = CF.game:getModule("PropUse"):getShufflePropInfo(cutCardsDefine.QuanId, 2)
        if shuffleInfo.propID == CF.areaData:getPropRoomCardID() or shuffleInfo.propID == CF.areaData:getPropBindRoomCardID() or shuffleInfo.propID == CF.areaData:getPropBindRoomCardID() then
            self._imgCutCard:setVisible(true)
            self._imgCutCardDiamond:setVisible(false)
        else
            self._imgCutCard:setVisible(false)
            self._imgCutCardDiamond:setVisible(true)
        end
        local propNum = shuffleInfo.cost or 200

        self._txtCutCard:setText("x" .. propNum .."）")
        local quanCount = CF.game:getModule("PropUse"):getPropCnt(cutCardsDefine.QuanId)
        if quanCount and quanCount > 1 then
            self._btnCardQuan:setVisible(true)
        else
            self._btnCutCard:setVisible(true)
        end
        self._cutCostInfo = {propid=cutCardsDefine.QuanId, costPropid=shuffleInfo.propID,cnt=shuffleInfo.cost}
        return
    end
end

--洗牌按钮消耗道具的数量
function WinLostView:setShufflePropCount(shuffleInfo)
    --消耗的道具数量
    if not shuffleInfo then
        return
    end
	local count = shuffleInfo.cost or 100
	local propID = shuffleInfo.propID or CF.areaData:getPropDiamndID()
    if CF.areaData:getPropList().smallRoomCardID and propID == CF.areaData:getPropList().smallRoomCardID then
        local smallRoomCardRatio = CF.areaData:getPropSmallRoomCardRatio()
        if smallRoomCardRatio then
            count = count / smallRoomCardRatio
        end
    end
    if self._txtShuffleProp then
        self._txtShuffleProp:setString("x" .. count .. "）")
    end

    if CF.game:getModule("Shuffle4"):isShufflePlanActive() then
        if CF.game:getModule("Shuffle4"):isFree() then
            self._txtShuffleProp:setVisible(false)
            self._imgShuffleProp:setVisible(false)
            self._imgShufflePropDiamond:setVisible(false)
            self._txtCostName:setVisible(false)
            self._txtShuffleFree:setVisible(true)
        else
            self._txtShuffleProp:setVisible(true)
            self._txtCostName:setVisible(true)
            self._txtShuffleFree:setVisible(false)
        end
        if self.m_shuffleDisNode and not tolua.isnull(self.m_shuffleDisNode) then
            self.m_shuffleDisNode:removeFromParent()
            self.m_shuffleDisNode = nil
            self:initDiscountNode()
        end
    else
        self._txtShuffleProp:setVisible(true)
		self._txtCostName:setVisible(true)
		self._txtShuffleFree:setVisible(false)
        if self.m_shuffleDisNode and not tolua.isnull(self.m_shuffleDisNode) then
            self.m_shuffleDisNode:removeFromParent()
            self.m_shuffleDisNode = nil
        end
    end
end

--查看桌子
function WinLostView:onCheckTableClicked(send, eventType)
	CF.game:getModule("CenterBtns"):showWinLostButton()
    self:showSelf(false)
end

--使用房卡或者钻石洗牌
function WinLostView:onShuffleDirectClicked(send, eventType)
    CF.game:getModule("PropUse"):reqShuffleWithProp()
    -- self:showSelf(false)
end

function WinLostView:onShuffleIndirectClicked(send, eventType)
    CF.game:getModule("PropUse"):reqShuffleWithTicket()
    self:showSelf(false)
end

function WinLostView:onUsePreShuffle(event)
	if self and not tolua.isnull(self) and event and not event.isTable then
		if self._shuffleQuanBtn:isVisible() then
			self:onShuffleIndirectClicked(self._shuffleQuanBtn, nil)
		elseif self._shuffleBtn:isVisible() then
			self:onShuffleDirectClicked(self._shuffleBtn, nil)
		end
	end
end

function WinLostView:onShuffleGoldClicked(send, eventType)
    if CF.roomData:is50() then
        CF.game:getModule("PropUse50"):reqShuffleCharge()
    else
        CF.game:getModule("PropUse"):reqShuffleCharge()
    end
    self:showSelf(false)
end

function WinLostView:onCutCardClicked()
    CF.game:getModule("PropUse"):onPreCutCard()
    self:showSelf(false)
end

function WinLostView:onUpdateDisTime(event) 
    if self and not tolua.isnull(self) and self.m_shuffleDisNode and CF.game:getModule("Shuffle4") then
        local timeBg = self.m_shuffleDisNode:getChildByName("_KW_DISCOUNT_TIME_BG")
        local timeTxt = timeBg:getChildByName("_KW_DISCOUNT_TIME_TXT")
        local discount = CF.game:getModule("Shuffle4"):getCurDiscount()
        local leftTime = CF.game:getModule("Shuffle4"):getCurDisTime()
        if discount < 100 and leftTime > 0 then
            timeBg:setVisible(true)
            local min = math.floor(leftTime / 60)
	    	local second = leftTime % 60
	    	min = min > 9 and min or ("0" .. min)
	    	second = second > 9 and second or ("0" .. second)
            timeTxt:setString(min .. "分" .. second .. "秒")
            timeBg:setContentSize(cc.size(timeTxt:getContentSize().width + 14, 42))
        else
            timeBg:setVisible(false)
        end
    end
end

function WinLostView:onPreShuffleSuc(event)
    self:showSelf(false)
    self._shuffleBtn:setVisible(false)
    self._shuffleQuanBtn:setVisible(false)
    self._shuffleGoldBtn:setVisible(false)
end

function WinLostView:onPlayerStart(event)
    if event and event.msg and event.msg.seatID == CF.roomData:getSelfSeat() then
        self:showSelf(false)
    end
end

-- 增加头像/分数水印
function WinLostView:showWatermark()
    local WatermarkModule = CF.game:getModule("Watermark")
    if not WatermarkModule then
        return
    end
    for i = 1, 5 do
        local winLostInfoPanel = self["_winLostInfoPanel_" .. i]
        if winLostInfoPanel then
            local head = winLostInfoPanel:getChildByName("_KW_HEAD")
            WatermarkModule:addWatermark(head, cc.p(100, 50))
        end
    end
end

function WinLostView:onClock(event) 
    local time = event.msgData.time 
    self:showKickOutClock(time)
end 

function WinLostView:showKickOutClock(time)
    local animNode = self._kickOutClock:getChildByName("KW_CLOCK_NODE")
    if animNode then
        animNode:removeAllChildren()
        AnimationManager.playKickOutClockJsonArmature(animNode,2)
    end
    local text = self._kickOutClock:getChildByName("KW_CLOCK_TEXT")
    if text then
        local leftTime = time or 10
        text:stopAllActions()
        text:setString(leftTime.. "s")
        CF.UITool.setTextColor(self._kickOutClock, "KW_CLOCK_TEXT", cc.c3b(0,128,0))
        CF.UITool.createRepeateAction(
            text,1,
            function()
                leftTime = leftTime - 1
                if leftTime >= 0 then
                    text:setString(leftTime .. "s")
                else
                    text:stopAllActions()
                end
                if leftTime <= 3 then
                    CF.UITool.setTextColor(self._kickOutClock, "KW_CLOCK_TEXT", cc.c3b(255,0,0))
                end
            end
        )
    end
    self._kickOutClock:setVisible(true)
end

-- 金币场踢出后，隐藏准备UI
function WinLostView:onMatchStateChanged()
    if CF.roomData:isMatching() and self._winLost and self._winLost:isVisible() then
        self._winLost:setVisible(false)
    end
end

--座位转换函数(将座位转换成本地座位，自己在第一个, 返回本地坐标（1，2，3，4）
function WinLostView:changeSeatToResult(seat, selfServerSeat)
    local selfSeat = selfServerSeat or CF.roomData:getSelfSeat()
    return ( (seat - selfSeat + CF.roomData:getChairs() ) % CF.roomData:getChairs() ) + 1
end

function WinLostView:onChangeCardClicked(sender , eventType)
    CF.game:getModule("ChangeCard"):reservedChangeCard()
end

function WinLostView:updateBtnVisivble(event)
    if not event or not event.data then
        return
    end
    if event.data.isShow == false then
        self._changeCardBtn:setVisible(false)
        return
    end
    self._changeCardBtn:setVisible(true)

    if event.data.type == Define.ShowType.ROOM_CARD then
        self._imgDiamond:setVisible(false)
        self._imgRoomCard:setVisible(true)
        self._txtCost:setVisible(true)
        self._txtCost:setString(tostring(event.data.price))
        self._txtCostCard:setVisible(false)
    elseif event.data.type == Define.ShowType.DIAMOND then
        self._imgDiamond:setVisible(true)
        self._imgRoomCard:setVisible(false)
        self._txtCost:setVisible(true)
        self._txtCost:setString(tostring(event.data.price))
        self._txtCostCard:setVisible(false)
    elseif event.data.type == Define.ShowType.CHANGE_CARD then
        self._imgDiamond:setVisible(false)
        self._imgRoomCard:setVisible(false)
        self._txtCost:setVisible(false)
        self._txtCostCard:setVisible(true)
        self._txtCostCard:setString("x"..tostring(event.data.price))
    end
end

function WinLostView:onBtnUnLimit()
    XH.viewManager:openView("UnLimitGoldActView", nil, {})
end

function WinLostView:flushLeftTime()
    if CF == nil or CF.roomData == nil then
        return
    end
    local confId = XH.goldConfigManager:getConfIDByGameID(CF.roomData:getGameID(), CF.roomData:getChairs())
    local roominfo = XH.lobby:getModule("GoldNew"):getGoldRoomInfoByLeisureID(confId)
    local session_id = CF.roomData:getRoomLevel()
    local leftTime = XH.lobby:getModule("UnlimitGoldAct"):getRemainTime(2)
    self._KW_BTN_UNLIMIT:setVisible(leftTime > 0 and XH.lobby:getModule("UnlimitGoldAct"):isSupportUse(roominfo, session_id, confId))
    if self._isReport == nil and leftTime > 0 and XH.lobby:getModule("UnlimitGoldAct"):isSupportUse(roominfo, session_id, confId) then
        self._isReport = true
        XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.zjq25050703, { page = "金币游戏结算" })
    end
    local hour = math.floor(leftTime / 3600)
    local min = math.floor((leftTime - hour * 3600) / 60)
    local sec = leftTime % 60
    self._KW_TEXT_UNLIMIT:setString(string.format("%02d", hour) .. ":" .. string.format("%02d", min) .. ":" .. string.format("%02d", sec))
end

function WinLostView:startSchedule()
    self:removeSchedule()
    self:flushLeftTime()
    self._listener = cc.Director:getInstance():getScheduler():scheduleScriptFunc(function()
        if self and not tolua.isnull(self) then
            self:flushLeftTime()
        end
    end, 1, false)
end

function WinLostView:removeSchedule()
    if self._listener then
        cc.Director:getInstance():getScheduler():unscheduleScriptEntry(self._listener)
    end
    self._listener = nil
end

function WinLostView:onCleanup()
    self:removeSchedule()
    WinLostView.super.onCleanup(self)
end

return WinLostView�l  