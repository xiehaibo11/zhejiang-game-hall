---------------------------------------------------------
--
-- Description: 游戏结束
-- Author: hejaifeng
-- Date: 2019-07-22
--
---------------------------------------------------------
local AnimationManager = CF.gameRequire("Manager.AnimationManager")
local GameWinLostLayer = CF.gameClass("GameWinLostLayer", CF.ViewBase)

local Define = CF.gameRequire("Modules.ChangeCard.Define")
local KW_PATH_RESOUCE_FONT = "res/cocosStudio/Common/Font"
--字体
local KW_LOST_TEXT_FNT = "jiesuan_num3-export.fnt"
local KW_WIN_TEXT_FNT = "jiesuan_num2-export.fnt"

function GameWinLostLayer:getCSBPath()
    return "res/cocosStudio/ShutCards/GameLayer/CSB/GameWinLost.csb"
end

function GameWinLostLayer:getBindingInfo()
    return {
        ["_KW_BTN_GO_ON@"] = {varName = "_continueBtn", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onBtnEventContinue"},
        ["_KW_BTN_NEXT@"] = {varName = "_nextBtn", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onBtnEventContinue"},
        ["_KW_BTN_CHECK_BILL"] = {varName = "_checkBillBtn",type = CF.UI_TYPE.BUTTON, onTouchEnded = "onBtnEventContinue"},
        ["_KW_UI_LABEL_LIST"] = {varName = "_labelList"},
        ["_KW_UI_LABLE_ITEM"] = {varName = "_labelITem"},
        ["_KW_UI_ANI_PANEL"] = {varName = "_aniPanel"},
        ["_KW_UI_ANI_REPEAT_PANEL"] = {varName = "_aniRepeatPanel"},
        ["_KW_CONTINE_TIME"] = {varName = "_uContinueTime"},
        ["_KW_CONTINE_TIME_EX"] = {varName = "_uContinueTimeEx"},
        ["_KW_ANI_GO_ON"] = {varName = "_aniGoOn"},

        ["_KW_BTN_SHUFFLE_DIRECT"] = {varName = "_shuffleBtn", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onShuffleDirectClicked"},
        ["_KW_IMG_SHUFFLE_PROP_DIRECT"] = {varName = "_imgShuffleProp"},
        ["_KW_IMG_SHUFFLE_PROP_DIAMOND"] = {varName = "_imgShufflePropDiamond"},
        ["_KW_TXT_SHUFFLE_PROP_DIRECT"] = {varName = "_txtShuffleProp"},
		["_KW_TEXT_COSTNAME"] = { varName = "_txtCostName"},
		["_KW_TXT_SHUFFLE_FREE_DIRECT"] = { varName = "_txtShuffleFree"},
        ["_KW_TEXT_SHUFFLE_TIPS"] = {varName = "_textShuffleTips"},
        ["_KW_IMG_SHUFFLEBUBBLE"] = {varName = "_imgShuffleBubble"},

        ["_KW_BTN_SHUFFLE_INDIRECT"] = {varName = "_shuffleQuanBtn", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onShuffleIndirectClicked"},
        ["_KW_TXT_SHUFFLE_PROP_INDIRECT_COST"] = {varName = "_txtShufflePropCost"},
        ["_KW_TXT_SHUFFLE_PROP_INDIRECT_COUNT"] = {varName = "_txtShufflePropCount"},

        ["_KW_BTN_SHUFFLE_GOLD"] = {varName = "_shuffleGoldBtn", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onShuffleGoldClicked"},
        ["_KW_TXT_SHUFFLE_PROP_GOLD_COST"] = {varName = "_txtShuffleGoldCost"},
        ["_KW_TXT_SHUFFLE_PROP_GOLD_SALE"] = {varName = "_txtShuffleGoldSale"},

        ["_KW_NEW_USER_GUIDE"] = { varName = "_newUserLayer"},
        ["_KW_UI_JUMP_OVER_BTN"] = {varName = "_jumpOverBtn",type = CF.UI_TYPE.BUTTON, onTouchEnded = "onJumpOverClicked"},
        ["_KW_NEW_USER_GUIDE_PANEL"] = { varName = "_nextGuideTip"},

        ["_KW_UI_WINLOST_"] = {varName = "_winLostUI_", beginIndex = 1, endIndex = 4},
        ["_KW_TEXT_PLAYER_SCORE_"] = {varName = "_resultScore_", beginIndex = 1, endIndex = 4},
        ["_KW_PANEL_BOMB_COUNT_"] = {varName = "_panelBombCount_", beginIndex = 1, endIndex = 4},

        ["_KW_BTN_CUTCARD"] = {varName = "_btnCutCard",type = CF.UI_TYPE.BUTTON, onTouchEnded = "onCutCardClicked"},--切牌按钮
        ["_KW_BTN_CUTCARD_QUAN"] = {varName = "_btnCardQuan", onTouchEnded = "onCutCardClicked"},--切牌按钮
        ["_KW_TXT_CUTCARD_PROP_DIRECT"] = {varName = "_txtCutCard"},--切牌数量
        ["_KW_TEXT_CUTCARD_COSTNAME"] = {varName = "_txtCutCardName"},--切牌数量
        ["_KW_IMG_CUTCARD_PROP_DIRECT"] = {varName = "_imgCutCard"},--切牌数量
        ["_KW_IMG_CUTCARD_PROP_DIAMOND"] = {varName = "_imgCutCardDiamond"},
        ["_KW_TEXT_CUTCARD_FREE"] = {varName = "_txtCutCardFree"},--免费

        ["_KW_PANEL_BTNS"] = {varName = "_panelBtns"},
        ["_KW_PANEL_BTN_NEXT"] = {varName = "_panelBtnNext"},
        ["_KW_PANEL_LEVEL_CHANGE"] = {varName = "_panelLevelChange"},
		["_KW_BTN_EXIT_WATCH"] = {varName = "_exitWatchBtn",type = CF.UI_TYPE.BUTTON, onTouchEnded = "onExitWatch"},	-- 退出观战
        ["_KW_PANEL_ICON"] = {varName = "_changeCardBtn", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onChangeCardClicked"}, --处理点击监听
        ["_KW_IMG_DIAMOND"] = {varName = "_imgDiamond"},
        ["_KW_IMG_ROOMCARD"] = {varName = "_imgRoomCard"},
        ["_KW_TEXT_COST"] = {varName = "_txtCost"},
        ["_KW_TEXT_COST_CARD"] = {varName = "_txtCostCard"},
        ["_KW_BTN_UNLIMIT"] = {varName = "_KW_BTN_UNLIMIT", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onBtnUnLimit"},
        ["_KW_TEXT_UNLIMIT"] = {varName = "_KW_TEXT_UNLIMIT"},
    }
end

function GameWinLostLayer:getProxyEvents()
    return {
        {module = CF.goldManager, eventKeyName = "EVENT_GAME_START_CHANGE", callBack = "onGameStart"},
        {module = CF.game:getModule("Continue"), eventKeyName = "EVENT_GAME_CONTINUE", callBack = "onGameContinue"},
        {module = CF.game:getModule("PropUse"), eventKeyName = "EVENT_SHUFFLE_USE_PROP_SUCCESS", callBack = "onShuffleUsePropSuccess"},
        {module = CF.game:getModule("PropUse"), eventKeyName = "EVENT_PRE_SUCCESS", callBack = "onPreShuffleSuc"},
        {module = CF.game:getModule("ReadyTip"), eventKeyName = "EVENT_SHOW_FINGER", callBack = "showGuideFinger"},
        {module = CF.game:getModule("Share"), eventKeyName = "EVENT_CLOSE_CAPTURE_SCREEN_VIEW", callBack = "showGoldRoomBtn"},
        {module = CF.game:getModule("Share"), eventKeyName = "EVENT_SHARE_HIDE_UNUSE_BTNS", callBack = "hideGoldRoomBtn"},
		{module = CF.game:getModule("Shuffle4"), eventKeyName = "EVENT_PRE_NEXT_SHUFFLE_BY_TIP", callBack = "onUsePreShuffle"},
        {module = CF.game:getModule("Shuffle4"), eventKeyName = "EVENT_UPDATE_DISCOUNT_TIME", callBack = "onUpdateDisTime"},
        -- {module = CF.game:getModule("ChangeCard"), eventKeyName = "EVENT_BTN_VISIBLE", callBack = "updateBtnVisivble"},
    }
end

function GameWinLostLayer:ctor(param)
    param = param or {}
    GameWinLostLayer.super.ctor(self, param)
    self:initDatas()
    self:initView()
    self:initDiscountNode()
    self:initCutCard()
    self:initShuffle()
    if cc.UserDefault:getInstance():getBoolForKey("KW_RN_TOURIST_LOGIN") and cc.UserDefault:getInstance():getBoolForKey("KW_RN_TOURIST_LOGIN_GAME_OVER") then
        local msg = "游客您好，您已经完成40分钟体验，之后您可以选择【微信登录】继续享受精彩的游戏服务哦！"
        local time = cc.UserDefault:getInstance():getIntegerForKey("KW_RN_TOURIST_LOGIN_GAME_OVER_TIMNER")
        if time > 0 then
            msg = msg .. "下次体验时间:".. os.date("%Y",time).."年"..os.date("%m",time).."月"..os.date("%d",time).."日"..os.date("%H",time).."时"..os.date("%M",time).."分"
        end
        CF.TipTool.showTip({
            type = CF.TIP_LAYER_TYPE.OK_NO_CLOSE,
            funcOK = function()
                CF.game:leaveGame()
            end,
        }, msg)
    end
    local goldShareView = CF.gameRequire("game.GameBase.Modules.Share.GoldShareView")
    if CF.roomData:isGoldRoom() and goldShareView then
        self:addChild(goldShareView.new())
    end
    self:showWatermark()
    -- local changeCardModule = CF.game:getModule("ChangeCard")
	-- if changeCardModule then
	-- 	changeCardModule:updateBtn()
	-- end

    if CF.roomData:isGoldRoom() then
        self:runAction(cc.Sequence:create(cc.DelayTime:create(2),cc.CallFunc:create(function()
            XH.lobby:getModule("Share"):reqLuckyBag(true)
        end)))
    end
end

function GameWinLostLayer:showGuideFinger()
    local pos = cc.p(self._continueBtn:getContentSize().width,self._continueBtn:getContentSize().height / 4 )
    CF.UITool.showFingerAni(self._continueBtn,-1,pos)
end

function GameWinLostLayer:showSelf()
    local parent = display.getRunningScene()
    parent:addChild(self, 46)
    self._startShowTime = os.time()
end

function GameWinLostLayer:initDatas()
    self._gameData = CF.game:getModule("GameLayer"):getGameData()
    self._sEndType = CF.GameDefine.ENUM_WINLOST_ENDTYPE.ET_NONE
    self._labelTable = {}
    self._tScore = {}
    self._playerName = {}
    self._bombCount = {}
end

function GameWinLostLayer:initView()
    local isGold = CF.roomData:isGoldRoom()
    self._continueBtn:setVisible(not isGold)
    self._nextBtn:setVisible(isGold)
    local bContinueBtnEnabled = not CF.roomData:isPlayBack() and not self:isShowBigWinLost()
    self._continueBtn:setEnabled(bContinueBtnEnabled)
    if not isGold and not bContinueBtnEnabled then
        local isLastCount = CF.roomData:getPlayCount() == CF.roomData:getMaxPlayCount()
        local delayTime = isLastCount and 3 or 1.5
        self._continueBtn:runAction(cc.Sequence:create(cc.DelayTime:create(delayTime),cc.CallFunc:create(function()
            self:onBtnEventContinue(nil, ccui.TouchEventType.ended)
        end)))
    end
    if isGold then
        -- 手指引导
        self._viewStartTime = os.time()
        local lobbyID = CF.areaData:getLobbyID()
        local hasGuide = cc.UserDefault:getInstance():getBoolForKey("GOLD_SHUTCARDS_NEXT_ANI_" .. lobbyID)
        if hasGuide then
            self._aniGoOn:setVisible(false)
            self._KW_BTN_UNLIMIT:setVisible(false)
        end
        cc.UserDefault:getInstance():setBoolForKey("GOLD_SHUTCARDS_NEXT_ANI_" .. lobbyID, true)
        self:updateContinueUI(10)
        self:updateGuideLayer()
        self:startSchedule()
    else
        self:updateLastWinLostBtn()
    end
    if self._labelList and self._labelITem then
        self._labelList:setItemModel(self._labelITem)
    end
    for seat = 0, CF.roomData:getChairs() -1 do
        local localSeat = CF.roomData:seatToLocal(seat)
        self["_winLostUI_"..localSeat]:setVisible(true)
    end
end

function GameWinLostLayer:initShuffle()
    self._shuffleBtn:setVisible(false)
    self._shuffleQuanBtn:setVisible(false)
    self._shuffleGoldBtn:setVisible(false)
    self._costInfo = {propid=CF.gameSub:getShufflePropQuanID(), costPropid=CF.gameSub:getShufflePropQuanID(), cnt=1}
    --显示洗牌按钮
    if CF.game:getModule("WinLost"):needShowShuffleButton() then
        self._nextBtn:setPositionX(300)
        self._continueBtn:setPositionX(300)
        --洗牌券的道具id
        if CF.roomData:isGoldRoom() then
            self._shuffleGoldBtn:setPositionX(-300)
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
                self._shuffleBtn:setPositionX(-300)
                self._shuffleBtn:setVisible(true)
                self._imgShuffleProp:setVisible(true)
                self._imgShufflePropDiamond:setVisible(false)
                self:setShufflePropCount()
                self._costInfo.costPropid = shuffleInfo.propID
				self._costInfo.cnt = shuffleInfo.cost
            elseif shuffleQuanCount and shuffleQuanCount > 0 then
                self._shuffleQuanBtn:setPositionX(-300)
                self._shuffleQuanBtn:setVisible(true)
                self._txtShufflePropCount:setString("x" .. shuffleQuanCount)
            else
                self._shuffleBtn:setPositionX(-300)
                self._shuffleBtn:setVisible(true)
                if shuffleInfo and shuffleInfo.propID == CF.areaData:getPropRoomCardID() then
                    self._imgShuffleProp:setVisible(true)
                    self._imgShufflePropDiamond:setVisible(false)
                elseif shuffleInfo and shuffleInfo.propID == CF.areaData:getPropDiamndID() then
                    self._imgShuffleProp:setVisible(false)
                    self._imgShufflePropDiamond:setVisible(true)
                end
                self:setShufflePropCount()
                self._costInfo.costPropid = shuffleInfo.propID
				self._costInfo.cnt = shuffleInfo.cost
            end
        end
        XH.lobby:getModule("PropEventTracker"):track(XH.NewThrowDataDefine.dj24091901, { 
            costInfo = self._costInfo
        })
    else
        self._nextBtn:setPositionX(0)
        self._continueBtn:setPositionX(0)
        self._shuffleBtn:setVisible(false)
        self._shuffleGoldBtn:setVisible(false)
    end
    -- 判断切牌按钮重新显示位置,有切牌必有洗牌
    if self._btnCutCard:isVisible() or self._btnCardQuan:isVisible() then
        self._btnCutCard:setPositionX(0)
        self._btnCardQuan:setPositionX(0)
        self._nextBtn:setPositionX(500)
        self._continueBtn:setPositionX(500)
        self._shuffleBtn:setPositionX(-500)
        self._shuffleQuanBtn:setPositionX(-500)
    end
end

function GameWinLostLayer:initDiscountNode()
    local modu = CF.game:getModule("Shuffle4")
    if modu then
        local size = self._shuffleBtn:getContentSize()
        self.m_shuffleDisNode = modu:getDiscountNode(self._shuffleBtn, size.width / 2, size.height - 10)
		if modu:isFree() then
			self.m_shuffleDisNode:setVisible(true)
			self.m_shuffleDisNode:getChildByName("_KW_DISCOUNT_TXT"):setVisible(false)
			self.m_shuffleDisNode:getChildByName("bg"):setVisible(false)
		end
    end
end

function GameWinLostLayer:setWinLostData(winLostData)
    self._sEndType = winLostData:getEndType()
    if CF.roomData:getIsSeer() then
        self._sEndType = winLostData:getPlayerScoreBySeat(CF.roomData:getSelfSeat()) > 0 and CF.GameDefine.ENUM_WINLOST_ENDTYPE.ET_WIN or CF.GameDefine.ENUM_WINLOST_ENDTYPE.ET_LOST
    end
    self._labelTable = winLostData:getPlayerLabel()
    self._tScore = winLostData:getPlayerScore()
    self._playerName = winLostData:getPlayerName()
    self._bombCount = winLostData:getBoomCnt()

    self:updateEndType()
    self:updatePlayerScore()
    self:updatePlayerLabel()
    self:updatePlayerBomb()

    if CF.roomData:isGoldRoom() then
        CF.getLobbyModule("ToponAct"):reqGoldActInfo(self._tScore[CF.roomData:getSelfSeat()] >= 0)
        self._hasH5GameWidget = true
        CF.getLobbyModule("H5GameWidget"):setGameData(CF.roomData:getRoomID(), CF.gameSub:getGameNameByGameId(CF.roomData:getGameID()),"结束","BMC002")
        CF.getLobbyModule("H5GameWidget"):addH5GameWidget("game_end",CF.roomData._gameID)
    end
end

function GameWinLostLayer:updateLastWinLostBtn()
    local isShowBigWinLost = self:isShowBigWinLost()
    if self._continueBtn and self._checkBillBtn then
        self._continueBtn:setVisible(not isShowBigWinLost)
        self._checkBillBtn:setVisible(isShowBigWinLost)
        local bContinueBtnEnabled = not CF.roomData:isPlayBack() and not isShowBigWinLost
        self._checkBillBtn:setEnabled(bContinueBtnEnabled)
    end
    -- 退出旁观按钮显隐
    if self._exitWatchBtn then
        if CF.roomData:getIsSeer() then
            self._exitWatchBtn:setVisible(not isShowBigWinLost)
        end
    end
end

function GameWinLostLayer:updateEndType()
    if self._aniPanel then
        self._aniPanel:removeAllChildren()
    end
    AnimationManager.playWinLostJsonArmature(self._aniPanel, self._sEndType)
    if self._sEndType == CF.GameDefine.ENUM_WINLOST_ENDTYPE.ET_LOST then
        CF.soundManager:playSoundLose()
    else
        CF.soundManager:playSoundWin()
    end
end

function GameWinLostLayer:updatePlayerScore()
    for seat = 0, CF.roomData:getChairs() -1 do
        local playerScore = self._tScore[seat] or 0
        local localSeat = CF.roomData:seatToLocal(seat)
        local scoreText = self["_resultScore_" .. localSeat]
        if scoreText then
            if playerScore > 0 then
                scoreText:setString("+" .. playerScore)
                scoreText:setFntFile(KW_PATH_RESOUCE_FONT .. "/" .. KW_WIN_TEXT_FNT)
            else
                scoreText:setString(playerScore)
                scoreText:setFntFile(KW_PATH_RESOUCE_FONT .. "/" .. KW_LOST_TEXT_FNT)
            end
            scoreText:setVisible(true)
        end
        if seat == CF.roomData:getSelfSeat() then
            CF.game:getModule("Share"):setGoldScore(playerScore)
            local winLostWithServicePay = playerScore 
            local gameData = CF.game:getModule("GameLayer"):getGameData()
            if gameData.getServicePay then 
                winLostWithServicePay = winLostWithServicePay - gameData:getServicePay()
            end
            CF.SysTool.performDelayOnce(function()
                if not self or tolua.isnull(self) then
                    return
                end
                if not CF or not CF.roomData then
                    return
                end
                if CF.roomData:is50() then
                    CF.getLobbyModule("Guide"):flushGoldCoin()
                end
                CF.getLobbyModule("YGiftBankruptcy"):showBuyBankuptcyGift(CF.roomData:getGameID(), winLostWithServicePay, CF.roomData:is50())
            end, 1)
        end
    end
end

function GameWinLostLayer:updatePlayerBomb()
    for seat = 0, CF.roomData:getChairs() -1 do
        local bombCount = self._bombCount[seat] or 0
        local localSeat = CF.roomData:seatToLocal(seat)
        local panelBombCount = self["_panelBombCount_" .. localSeat]
        if seat ~= CF.roomData:getSelfSeat() then
            if panelBombCount then
                panelBombCount:setVisible(bombCount > 0)
                if bombCount > 0 then
                    CF.UITool.setText(panelBombCount, "KW_TEXT_BOMB_COUNT", "x " .. bombCount)
                end
            end
        end
    end
end

function GameWinLostLayer:updatePlayerLabel()
    if self._labelList == nil or self._labelITem == nil then
        return
    end
    for _, var in ipairs(self._labelTable) do
        self._labelList:pushBackDefaultItem()
        local items = self._labelList:getItems()
        local curItem = items[#items]
        CF.UITool.setText(curItem, "KW_LABEL_ITEM_TYPE", var.label or "")
        if var.count then
            CF.UITool.setText(curItem, "KW_LABEL_ITEM_MULTIPLE", "x " .. var.count)
        else
            CF.UITool.setText(curItem, "KW_LABEL_ITEM_MULTIPLE", "")
            local width = self._labelITem:getContentSize().width
            CF.UITool.setPositionX(curItem, "KW_LABEL_ITEM_TYPE", width / 2)
        end
    end
end

--续桌
function GameWinLostLayer:onGameContinue(event)
    -- local msg = event.msg
    -- if msg.bSuccess then
    --     -- self:close()
    -- end
end

function GameWinLostLayer:onBtnEventContinue(send, eventType)
    if  CF.selfPlayerData:getIsShieldBaseLiveView() then
        CF.selfPlayerData:setIsShieldBaseLiveView(false)
        CF.selfPlayerData:flushGoldCoin()
    else
        self._uContinueTime:stopAllActions()
        self._uContinueTime:setVisible(false)
        CF.game:getModule("ChangeLevel"):hide()
        if not self:isShowBigWinLost() then
            if CF.roomData:getIsSeer() and CF.roomData:isDelayWatch() then
                self:setSelfVisible(false)
                CF.game:getModule("WatchGame"):changeToRealWatch()
                return
            end
            CF.game:getModule("CenterBtns"):onStartGameEvent()
        else
            local bigSettleData = self._gameData:getBigSettleData()
            if bigSettleData then
                -- TODO
                local BigWinLostLayer = CF.gameRequire("Modules.BigWinLost.View")
                local layer = BigWinLostLayer.new(bigSettleData)
                layer:setCanContinue(CF.roomData:isCanContinue())
                layer:showSelf()
            end
        end
        self:recordWinLostData()
        self:setSelfVisible(false)
    end
end

function GameWinLostLayer:isShowBigWinLost()
    if CF.roomData:isGoldRoom() then
        return false
    end
    local isShowBigWinLost = not (CF.roomData:getPlayCount() < CF.roomData:getMaxPlayCount())
    return isShowBigWinLost or CF.roomData:getIsGameOver()
end

function GameWinLostLayer:getSelfResultScore()
    local msgData = self._gameData:getWinLostData()
    if not msgData then
        return 0
    end
    return msgData:getPlayerScoreBySeat(CF.roomData:getSelfSeat()) or 0
end

--使用房卡或者钻石洗牌
function GameWinLostLayer:onShuffleDirectClicked(send, eventType)
    local success, err = pcall(function()
        if eventType then
            CF.NewThrowDataManager:throwData(CF.NewThrowDataDefine.SHUFFLE_CARDS_INRESULT)
            self._reportData ={sucID = "dj24080805", costInfo=self._costInfo, score = self:getSelfResultScore()}
            XH.lobby:getModule("PropEventTracker"):track(XH.NewThrowDataDefine.dj24080804, self._reportData)
        end
    end)
    CF.game:getModule("PropUse"):reqShuffleWithProp()
    -- CF.throwDataManager:recordButtonClick(CF.ThrowDataDefine.ButtonEnumTable.BOX_ROOM_SHUFFLE,{ShuffleType = "房卡洗牌",SYType = self:recordSYtype()})
    -- self:setSelfVisible(false)
end

--洗牌按钮消耗道具的数量
function GameWinLostLayer:setShufflePropCount()
    --消耗的道具数量
    local gameID = CF.roomData:getGameID()
	local shuffleInfo = CF.game:getModule("PropUse"):getShufflePropInfo(CF.gameSub:getShufflePropQuanID())
	local count = shuffleInfo.cost or CF.gameSub:getShufflePropCount(gameID)
	local propID = shuffleInfo.propID or CF.gameSub:getShufflePropID(gameID)
    if CF.areaData:getPropList().smallRoomCardID and propID == CF.areaData:getPropList().smallRoomCardID then
        local smallRoomCardRatio = CF.areaData:getPropSmallRoomCardRatio()
        if smallRoomCardRatio then
            count = count / smallRoomCardRatio
        end
    end
    if self._txtShuffleProp then
        self._txtShuffleProp:setString("x" .. count .. "）")
    end
    if self._textShuffleTips then
        self._textShuffleTips:setString("洗个好手气，开始下一局")
    end

	if CF.game:getModule("Shuffle4"):isFree() then
		self._txtShuffleProp:setVisible(false)
		self._imgShuffleProp:setVisible(false)
        self._imgShufflePropDiamond:setVisible(false)
		self._txtCostName:setVisible(false)
		self._txtShuffleFree:setVisible(true)
	end
end

function GameWinLostLayer:onShuffleIndirectClicked(send, eventType)
    CF.game:getModule("PropUse"):reqShuffleWithTicket()
    if eventType then
        CF.NewThrowDataManager:throwData(CF.NewThrowDataDefine.SHUFFLE_CARDS_INRESULT)
        self._reportData ={sucID = "dj24080805", costInfo=self._costInfo, score = self:getSelfResultScore()}
        XH.lobby:getModule("PropEventTracker"):track(XH.NewThrowDataDefine.dj24080804, self._reportData)
    end
    -- self:setSelfVisible(false)
    -- CF.throwDataManager:recordButtonClick(CF.ThrowDataDefine.ButtonEnumTable.BOX_ROOM_SHUFFLE,{ShuffleType = "洗牌卷洗牌",SYType = self:recordSYtype()})
end

function GameWinLostLayer:recordData()
    local data = {}
    data.Page_name = "GameStart"
    data.Start_time = self._startShowTime or 0
    data.End_time = os.time()
    data.staytime = data.End_time - data.Start_time
    CF.throwDataManager:throwData(CF.ThrowDataDefine.BOX_GAME_END_TIME,data)
 end

--------------------------------------------- 金币场 ---------------------------------------------
function GameWinLostLayer:onGameStart(event)
    if self and self.setSelfVisible then
        self:setSelfVisible(false)
    end
end

function GameWinLostLayer:updateContinueUI(continueTime)
    if continueTime and continueTime > 0 then
        self._uContinueTime:stopAllActions()

        self._uContinueTime:setString(continueTime .. "s")
        self._uContinueTime:setVisible(true)

        self._curTime = continueTime
        CF.UITool.createRepeateAction(
            self._uContinueTime,
            1,
            function()
                self._curTime = self._curTime - 1
                if self._curTime >= 0 then
                    self._uContinueTime:setString(self._curTime .. "s")
                else
                    self._uContinueTime:stopAllActions()

                    -- 模拟点击
                    if not CF.roomData:isGoldRoom() then
                        self:setVisible(false)
                        CF.game:getModule("CenterBtns"):onStartGameEvent()
                    end
                end
            end
        )
    else
        self._uContinueTime:setVisible(false)
    end
end

function GameWinLostLayer:onShuffleGoldClicked(send, eventType)
    if CF.roomData:is50() then
        CF.game:getModule("PropUse50"):reqShuffleCharge()
    else
        CF.game:getModule("PropUse"):reqShuffleCharge()
    end
    self:setSelfVisible(false)
    CF.NewThrowDataManager:throwData(CF.NewThrowDataDefine.SHUFFLE_CARDS_INRESULT)
    self._reportData ={sucID = "dj24080805", costInfo=self._costInfo, score = self:getSelfResultScore()}
    XH.lobby:getModule("PropEventTracker"):track(XH.NewThrowDataDefine.dj24080804, self._reportData)
    -- CF.throwDataManager:recordButtonClick(CF.ThrowDataDefine.ButtonEnumTable.BOX_ROOM_SHUFFLE,{ShuffleType = "金币洗牌",SYType = self:recordSYtype()})
end

function GameWinLostLayer:updateGuideLayer()
    if CF.selfPlayerData:getIsNewUserGuide() and  CF.selfPlayerData:getIsFirstGoldGame() then
        self._newUserLayer:setVisible(true)
        self._nextGuideTip:setVisible(true)
    else
        self._newUserLayer:setVisible(false)
        self._nextGuideTip:setVisible(false)
    end
end

function GameWinLostLayer:onJumpOverClicked(send, eventType)
    CF.TipTool.showTip({
        bTop = true,
        type = CF.TIP_LAYER_TYPE.OK_CANCEL_NO_CLOSE,
        funcOK = function()
            self:recordWinLostData()
            self._newUserLayer:setVisible(false)
            self._nextGuideTip:setVisible(false)
            CF.getLobbyModule("Guide"):reqSetNewUserGuideState(CF.getLobbyModule("Guide").GUIDE_STATE["end"])
        end,
    }, "退出引导将无法获得丰富奖励，是否确认退出？")
end

function GameWinLostLayer:recordWinLostData()
    local data = {}
    data.time1 = self._viewStartTime or 0
    data.time2 = os.time() or 0
    data.staytime = data.time2 - data.time1
    data.userid = CF.selfPlayerData:getNumberID()
    data.result = self._sEndType or -1
    data.gamename = CF.gameSub:getGameNameByGameId(CF.roomData:getGameID())
    data.sytype = self:recordSYtype()
    CF.throwDataManager:throwData(CF.ThrowDataDefine.NextGameStarted,data)
end

--判断这局胜负状态
function GameWinLostLayer:recordSYtype()
    local myScore = self._tScore[CF.roomData:getSelfSeat()] or 0
    local sytype   --胜负
    if myScore >= 0 then 
        sytype = "Y"
    else
        sytype = "S"
    end
    return sytype
end 

function GameWinLostLayer:setSelfVisible(bShow)
    if CF.roomData:isGoldRoom() and not bShow then
        CF.game:getModule("ChangeLevel"):hide()
        CF.getLobbyModule("ToponAct"):closeToponGoldDrawView()
        CF.getLobbyModule("H5GameWidget"):close5GameWidget("game_end",CF.roomData._gameID)
        CF.getLobbyModule("H5GameWidget"):close5GameWidget("game_begin",CF.roomData._gameID)
    end
    self:setVisible(bShow)
    if not bShow then
        self:recordData()
    end
end

function GameWinLostLayer:onShuffleUsePropSuccess()
    self:setSelfVisible(false)
end

function GameWinLostLayer:onPreShuffleSuc(event)
    if self._reportData then
        XH.lobby:getModule("PropEventTracker"):track(self._reportData.sucID, self._reportData)
        self._reportData = nil
    end
end

function GameWinLostLayer:initCutCard()
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
        local propNum = shuffleInfo.cost or 100

        self._txtCutCardFree:setVisible(CF.roomData._bIsFreeCut)
        self._txtCutCardName:setVisible(not CF.roomData._bIsFreeCut)
        self._txtCutCard:setVisible(not CF.roomData._bIsFreeCut)
        -- self._imgCutCard:setVisible(not CF.roomData._bIsFreeCut)
        -- self._imgCutCardDiamond:setVisible(not CF.roomData._bIsFreeCut)
        self._txtCutCard:setText("x" .. propNum .."）")
        local quanCount = CF.game:getModule("PropUse"):getPropCnt(cutCardsDefine.QuanId)
        if quanCount and quanCount > 1 and not CF.roomData._bIsFreeCut then
            self._btnCardQuan:setVisible(true)
        else
            self._btnCutCard:setVisible(true)
        end
        self._cutCostInfo = {propid=cutCardsDefine.QuanId, costPropid=shuffleInfo.propID,cnt=shuffleInfo.cost}
        XH.lobby:getModule("PropEventTracker"):track(XH.NewThrowDataDefine.dj24091902, { 
            costInfo = self._cutCostInfo
        })
        return
    end
end

function GameWinLostLayer:onCutCardClicked()
    CF.NewThrowDataManager:throwData(CF.NewThrowDataDefine.CUT_CARDS_DO)
    local reportData ={sucID = "dj24080814", costInfo=self._costInfo, score = self:getSelfResultScore()}
    XH.lobby:getModule("PropEventTracker"):track(XH.NewThrowDataDefine.dj24080813, reportData)
    CF.game:getModule("PropUse"):onPreCutCard(reportData)
    self:setSelfVisible(false)
end

function GameWinLostLayer:hideGoldRoomBtn()
    self._lastShowBtns = CF.game:getModule("Share"):setShareHideIcons(self)
end

function GameWinLostLayer:showGoldRoomBtn()
    CF.game:getModule("Share"):setShareShowIcons(self, self._lastShowBtns)
end

function GameWinLostLayer:onUsePreShuffle(event)
	if self and not tolua.isnull(self) and event and not event.isTable then
		if self._shuffleQuanBtn:isVisible() then
			self:onShuffleIndirectClicked(self._shuffleQuanBtn, nil)
		elseif self._shuffleBtn:isVisible() then
			self:onShuffleDirectClicked(self._shuffleBtn, nil)
		end
	end
end

function GameWinLostLayer:onUpdateDisTime(event) 
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

function GameWinLostLayer:onExitWatch(send, eventType)
	if eventType ~= ccui.TouchEventType.ended then
		return
	end
    CF.game:getModule("WatchGame"):onExitWatch()
	CF.game:leaveGame()
end

function GameWinLostLayer:onTimeClose()
    self._uContinueTimeEx:setVisible(false)
    if CF.roomData:isGoldRoom() then
        return
    end
    self._curTime = 0
	if CF.roomData:getAutoContinueTime() and CF.roomData:getAutoContinueTime() > 0 then
		self._curTime = CF.roomData:getAutoContinueTime()
		self._uContinueTimeEx:setVisible(true)
	end
	if self._curTime ~= 0 then
		self._uContinueTimeEx:stopAllActions()
		self._uContinueTimeEx:setString(self._curTime .. "s")
		CF.UITool.createRepeateAction(self._uContinueTimeEx, 1,  function ()
			self._curTime = self._curTime - 1
			if self._curTime >= 0 then
				self._uContinueTimeEx:setString(self._curTime .. "s")
			else
				self._uContinueTimeEx:stopAllActions()
				self:onBtnEventContinue(nil, ccui.TouchEventType.ended)
			end
		end)
	end
end

-- 增加头像/分数水印
function GameWinLostLayer:showWatermark()
    local WatermarkModule = CF.game:getModule("Watermark")
    if not WatermarkModule then
        return
    end
    for i = 1, 4 do
        local scoreText = self["_resultScore_" .. i]
        WatermarkModule:addWatermark(scoreText, cc.p(100, 30), 1.2)
    end
end

function GameWinLostLayer:onChangeCardClicked(sender , eventType)
    CF.game:getModule("ChangeCard"):reservedChangeCard()
end

function GameWinLostLayer:updateBtnVisivble(event)
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

function GameWinLostLayer:onBtnUnLimit()
    XH.viewManager:openView("UnLimitGoldActView", nil, {})
end

function GameWinLostLayer:flushLeftTime()
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

function GameWinLostLayer:startSchedule()
    self:removeSchedule()
    self:flushLeftTime()
    self._listener = cc.Director:getInstance():getScheduler():scheduleScriptFunc(function()
        if self and not tolua.isnull(self) then
            self:flushLeftTime()
        end
    end, 1, false)
end

function GameWinLostLayer:removeSchedule()
    if self._listener then
        cc.Director:getInstance():getScheduler():unscheduleScriptEntry(self._listener)
    end
    self._listener = nil
end

function GameWinLostLayer:onCleanup()
    self:removeSchedule()
    GameWinLostLayer.super.onCleanup(self)
end

return GameWinLostLayer
'�