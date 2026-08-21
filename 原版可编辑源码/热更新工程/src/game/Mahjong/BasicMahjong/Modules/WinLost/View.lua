local WinLostView = CF.gameClass("WinLostView", CF.ViewBase)
local Define = CF.gameRequire("Modules.ChangeCard.Define")

WinLostView.ObjName = "MahWinLostView"

WinLostView.WinLostType = {
    LOST = 0,
    WIN = 1,
}

WinLostView.EndType =
{
    [0] = "settle_text_run.png",  --逃跑
    [1] = "settle_text_zimo.png",  --自摸
    [2] = "settle_text_dianpao.png",  --点炮
    [3] = "settle_text_qianggang.png", --抢杠
    [5] = "settle_text_liuju.png", --流局
}

-- local winLostSpArr = {
-- 	[0] = "settle_text_zimo.png",
-- 	[1] = "settle_text_dianpao.png",
-- 	[2] = "settle_text_liuju.png"
-- }

function WinLostView:ctor(param)
	param = param or {}
	WinLostView.super.ctor(self,param)
    self:createChildren()
	self:onTimeClose()
	-- 金币场隐藏房间信息
	self:hideRoomInfo()
	self._viewStartTime = os.time()
	self:updateFingerState()

	self:initDiscountNode()
	self:initShareBtn()

	local changeCardModule = CF.game:getModule("ChangeCard")
	if changeCardModule then
		changeCardModule:updateBtn()
	end
    if CF.roomData:isGoldRoom() then
        self:runAction(cc.Sequence:create(cc.DelayTime:create(2),cc.CallFunc:create(function()
            XH.lobby:getModule("Share"):reqLuckyBag(true)
        end)))
    end
end

function WinLostView:onEnter()
	WinLostView.super.onEnter(self)
	CF.game:getModule("WinLost"):setWinLostShow(true)
end

function WinLostView:onExit()
	WinLostView.super.onExit(self)
	if CF and CF.game then
		CF.game:getModule("WinLost"):setWinLostShow(false)
	end
end

function WinLostView:getWinLostData()
    return CF.game:getModule("WinLost"):getWinLostData()
end

function WinLostView:getCSBPath()
    return "cocosStudio/MahjongNew/GameLayer/CSB/Settle/Settle.csb"
end

function WinLostView:getBindingInfo()
    return {
        ["_KW_IMG_RESULT"] = { varName = "_titleSp"},
        ["_KW_LABEL_ROOM_NUM"] = { varName = "_roomNumLabel"},
        ["_KW_LABEL_JUSHU"] = { varName = "_roomJuShuLabel"},
        ["_KW_LABEL_TIME"] = { varName = "_timeLabel"},
        ["_KW_LIST_VIEW"] = { varName = "_listView"},

        ["_KW_BTN_CHECK_TABLE"] = { varName = "_checkTableBtn", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onCheckTableClicked"},
		["_KW_BTN_NEXT_GAME"] = { varName = "_nextGameBtn", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onNextGameClicked"},
		["_KW_BTN_CHECK_BILL"] = {varName = "_checkBillBtn",type = CF.UI_TYPE.BUTTON, onTouchEnded = "onNextGameClicked"},
        ["_KW_CONTINE_TIME"] = { varName = "_uContinueTime"},
        ["_KW_IMG_FAN"] = { varName = "_imgFan"},
        ["_KW_IMG_GANG"] = { varName = "_imgGang"},
        ["_KW_TEXT_GAME_RULE"] = { varName = "_textGameRule"},
        ["_KW_BTN_SHUFFLE_DIRECT"] = { varName = "_shuffleBtn", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onShuffleDirectClicked"},
        ["_KW_IMG_SHUFFLE_PROP_DIRECT"] = { varName = "_imgShuffleProp"},
        ["_KW_TXT_SHUFFLE_PROP_DIRECT"] = { varName = "_txtShuffleProp"},
		["_KW_TEXT_COSTNAME"] = { varName = "_txtCostName"},
		["_KW_TXT_SHUFFLE_FREE_DIRECT"] = { varName = "_txtShuffleFree"},
        ["_KW_BTN_SHUFFLE_INDIRECT"] = { varName = "_shuffleQuanBtn", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onShuffleIndirectClicked"},
        ["_KW_TXT_SHUFFLE_PROP_COST"] = { varName = "_txtShufflePropCost"},
        ["_KW_TXT_SHUFFLE_PROP_INDIRECT_COUNT"] = { varName = "_txtShufflePropCount"},
        ["_KW_TEXT_SHUFFLE_TIPS"] = { varName = "_textShuffleTips"},
        ["_KW_IMG_SHUFFLEBUBBLE"] = { varName = "_imgShuffleBubble"},

        ["_KW_BTN_SHUFFLE_GOLD"] = { varName = "_shuffleGoldBtn", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onShuffleGoldClicked"},
        ["_KW_TXT_SHUFFLE_PROP_GOLD_COST"] = { varName = "_txtShuffleGoldCost"},
        ["_KW_TXT_SHUFFLE_PROP_GOLD_SALE"] = { varName = "_txtShuffleGoldSale"},
		["_KW_ANI_NEXT_GAME"] = { varName = "_aniNextGame"},
		
		["_KW_NEW_USER_GUIDE"] = { varName = "_newUserLayer"},
        ["_KW_UI_JUMP_OVER_BTN"] = {varName = "_jumpOverBtn", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onJumpOverClicked"},
		["_KW_NEW_USER_GUIDE_PANEL"] = { varName = "_nextGuideTip"},

        ["_KW_BTN_CUTCARD"] = {varName = "_btnCutCard",type = CF.UI_TYPE.BUTTON, onTouchEnded = "onCutCardClicked"},--切牌按钮
        ["_KW_BTN_CUTCARD_QUAN"] = {varName = "_btnCardQuan", onTouchEnded = "onCutCardClicked"},--切牌按钮
        ["_KW_TXT_CUTCARD_PROP_DIRECT"] = {varName = "_txtCutCard"},--切牌数量
        ["_KW_TEXT_CUTCARD_COSTNAME"] = {varName = "_txtCutCardName"},--切牌数量
        ["_KW_IMG_CUTCARD_PROP_DIRECT"] = {varName = "_imgCutCard"},--切牌数量
        ["_KW_TEXT_CUTCARD_FREE"] = {varName = "_txtCutCardFree"},--免费
		["_KW_BTN_EXIT_WATCH"] = {varName = "_exitWatchBtn",type = CF.UI_TYPE.BUTTON, onTouchEnded = "onExitWatch"},	-- 退出观战
		["_KW_BTN_SHARE_PIC"] = {varName = "_KW_BTN_SHARE_PIC",type = CF.UI_TYPE.BUTTON, onTouchEnded = "onTouchSharePic"},

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
    local winLostData = self:getWinLostData()
    return {
        { module = winLostData, eventKeyName = "EVENT_RESULT_CHANGED", callBack = "onUpdateUI" },
        { module = winLostData, eventKeyName = "EVENT_END_TYPE_CHANGED", callBack = "onUpdateUI" },
        { module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_GAME_START_CHANGE", callBack = "onGameStart" },
		{ module = CF.game:getModule("WinLost"), eventKeyName = "EVENT_HIDE_SETTLE", callBack = "onHideView" },
		{ module = CF.game:getModule("PropUse"), eventKeyName = "EVENT_SHUFFLE_USE_PROP_SUCCESS", callBack = "onGameStart"},
		{module = CF.game:getModule("PropUse"), eventKeyName = "EVENT_PRE_SUCCESS", callBack = "onPreShuffleSuc"},
		{ module = CF.game:getModule("ReadyTip"), eventKeyName = "EVENT_SHOW_FINGER", callBack = "showGuideFinger"},
        { module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_GAME_PLAYER_START", callBack = "onPlayerStart"},
		{module = CF.game:getModule("Shuffle4"), eventKeyName = "EVENT_PRE_NEXT_SHUFFLE_BY_TIP", callBack = "onUsePreShuffle"},
        {module = CF.game:getModule("Shuffle4"), eventKeyName = "EVENT_UPDATE_DISCOUNT_TIME", callBack = "onUpdateDisTime"},
		{module = CF.game:getModule("ChangeCard"), eventKeyName = "EVENT_BTN_VISIBLE", callBack = "updateBtnVisivble"},
    }
end

function WinLostView:initShareBtn()
    local supportLobbyIDs = { 900021, 900025 }
    if self._KW_BTN_SHARE_PIC then
        local isShow = false
        for i = 1, #supportLobbyIDs do
            if supportLobbyIDs[i] == CF.areaData:getLobbyID() then
                isShow = true
                break
            end
        end
        self._KW_BTN_SHARE_PIC:setVisible(isShow)
    end
end

-- 分享截图
function WinLostView:onTouchSharePic()
	XH.SysTool.performDelayOnce(function()
		if not self or tolua.isnull(self) then
			return
		end
		if CF == nil then
			return
		end
		CF.game:getModule("Share"):captureGoldScreenShareFinish()
	end, 4)
	CF.game:getModule("Share"):doShareWX(CF.GameDefine.SHARE_SELECT.PIC)
	local mode = "包厢"
	if CF.teaHouseManager:isInTeaHouse() then
		mode = "比赛场"
	end
	XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.lyn24082202, { block_item_id = "结束", block_label = mode })
end

function WinLostView:onPreShuffleSuc(event)
    if self._reportData then
        XH.lobby:getModule("PropEventTracker"):track(self._reportData.sucID, self._reportData)
        self._reportData = nil
    end
end

function WinLostView:hideRoomInfo()
	--房间号等
	local bGold = CF.roomData:isGoldRoom()
	if bGold then
		self._roomJuShuLabel:setVisible(false)
		self._roomNumLabel:setVisible(false)
	end
end

function WinLostView:updateFingerState()
	--存在等待提示框跳出指引手指
	local scene = display.getRunningScene()
    local node = scene:getChildByName("ScrollTipLayer")
    if node then
       self._aniNextGame:setVisible(true)
    end 
end

function WinLostView:initShuffle()
	self._shuffleBtn:setVisible(false)
	self._shuffleQuanBtn:setVisible(false)
	self._shuffleGoldBtn:setVisible(false)
	self._costInfo = {propid=CF.gameSub:getShufflePropQuanID(), costPropid=CF.gameSub:getShufflePropQuanID(), cnt=1}
	if CF.game:getModule("WinLost"):needShowShuffleButton() then
		local posX = { -600, 0, 600 }
		if CF.roomData:isGoldRoom() then
			local oriPrice = CF.game:getModule("PropUse"):getOriginalShufflePrice()
			local nowPrice = CF.game:getModule("PropUse"):getShufflePrice()
			self._txtShuffleGoldCost:setString(tostring(oriPrice))
			self._txtShuffleGoldSale:setString(tostring(nowPrice))
			if oriPrice <= nowPrice then
				self._txtShuffleGoldCost:setVisible(false)
			end
			local btn = { self._checkTableBtn, self._shuffleGoldBtn, self._nextGameBtn }
			for i, _ in ipairs(btn) do
				btn[i]:setPositionX(posX[i])
			end
			self._shuffleGoldBtn:setVisible(true)
			self._costInfo.costPropid = XH.areaData:getGoldPropId()
			self._costInfo.cnt = nowPrice
		else
			--洗牌券的道具id
			local propId = CF.gameSub:getShufflePropQuanID()
            local shuffleInfo = CF.game:getModule("PropUse"):getShufflePropInfo(propId)
			local shuffleQuanCount = CF.game:getModule("PropUse"):getPropCnt(propId)
			if shuffleInfo and shuffleInfo.propID == CF.areaData:getPropBindRoomCardID() then
				self._shuffleBtn:setVisible(true)
				local btn = { self._checkTableBtn, self._shuffleBtn, self._nextGameBtn }
				for i, _ in ipairs(btn) do
					btn[i]:setPositionX(posX[i])
				end
				self._costInfo.costPropid = shuffleInfo.propID
				self._costInfo.cnt = shuffleInfo.cost
			elseif shuffleQuanCount and shuffleQuanCount > 0 then
				self._shuffleQuanBtn:setVisible(true)
				local btn = { self._checkTableBtn, self._shuffleQuanBtn, self._nextGameBtn }
				for i, _ in ipairs(btn) do
					btn[i]:setPositionX(posX[i])
				end
				self._txtShufflePropCount:setString("x" .. shuffleQuanCount)
			else
				self._shuffleBtn:setVisible(true)
				local btn = { self._checkTableBtn, self._shuffleBtn, self._nextGameBtn }
				for i, _ in ipairs(btn) do
					btn[i]:setPositionX(posX[i])
				end
				self._costInfo.costPropid = shuffleInfo.propID
				self._costInfo.cnt = shuffleInfo.cost
			end
		end
	end
  self:flushPosWithCut()
end

function WinLostView:initDiscountNode()
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

function WinLostView:getListPlayerCount()
	return CF.roomData:getChairs()
end

function WinLostView:initItemList()
	local SettleItemNode = CF.gameRequire("Modules.WinLost.ItemNode")
	local playerCount = self:getListPlayerCount() or 0
	for i = 0, playerCount - 1 do
		local item = SettleItemNode.new({seatId = i})
		self._listView:addChild(item)
	end
end

function WinLostView:initPlayCountLabel()
	--局数信息
	self._playCount = CF.roomData:getPlayCount()
	self._maxPlayCount = CF.roomData:getMaxPlayCount()
	self._roomJuShuLabel:setString("局数"..self._playCount.."/"..self._maxPlayCount)
end

function WinLostView:createChildren()
    self:initItemList()

    --房间号
    local roomId = CF.roomData:getRoomID()
    local roomNum = string.format("房间号:%06d", roomId)
    self._roomNumLabel:setString(roomNum)

    --局数信息
    self:initPlayCountLabel()

    --系统时间
    local expirydate = os.date("%Y-%m-%d  %H:%M:%S", os.time())
    self._timeLabel:setString(expirydate)
    local isPlayBack = false
    self._timeLabel:setVisible(not isPlayBack)

    self:initGameRule()

    self:onUpdateUI()

    self:setShufflePropType()
    self:setShufflePropCount()

	--显示洗牌按钮
	self:initCutCard()
	self:initShuffle()

    if CF.roomData:isGoldRoom() then
        self:updateGuideLayer()
		self:startSchedule()
    end
end

function WinLostView:onTimeClose()
	local isLastCoutn = self._playCount == self._maxPlayCount

	-- 流程优化：小局结束自动准备倒计时
	local optimizeOn = CF.configData and CF.configData.isFlowOptimizeEnable and CF.configData:isFlowOptimizeEnable()
	if optimizeOn and not isLastCoutn and not CF.roomData:isGoldRoom() and not CF.roomData:getIsSeer() then
		local autoTime = 0
		if CF.configData and CF.configData.getSmallRoundAutoReadyTime then
			autoTime = CF.configData:getSmallRoundAutoReadyTime() or 0
		end
		if autoTime > 0 and self._uContinueTime then
			self._uContinueTime:setVisible(true)
			self._curTime = autoTime
			self._uContinueTime:stopAllActions()
			self._uContinueTime:setString(self._curTime .. "s")
			CF.UITool.createRepeateAction(self._uContinueTime, 1, function()
				if not self._uContinueTime or not CF.game or not CF.roomData then
					return
				end
				self._curTime = self._curTime - 1
				if self._curTime >= 0 then
					self._uContinueTime:setString(self._curTime .. "s")
				else
					self._uContinueTime:stopAllActions()
					self:onNextGameClicked(nil, ccui.TouchEventType.ended)
				end
			end)
			return
		end
	end

	self._uContinueTime:setVisible(isLastCoutn)
	local lobbyID = CF.areaData:getLobbyID()
	self._curTime = 0
	if isLastCoutn and not CF.roomData:isGoldRoom() then
		self._curTime = 3
	elseif lobbyID == 900038 then
		self._curTime = 5
		self._uContinueTime:setVisible(true)
	elseif CF.roomData:getAutoContinueTime() and CF.roomData:getAutoContinueTime() > 0 then
		self._curTime = CF.roomData:getAutoContinueTime()
		self._uContinueTime:setVisible(true)
	elseif CF.roomData:isGoldRoom() then
		self._curTime = 10
		self._uContinueTime:setVisible(true)

		-- 手指引导
		local hasGuide = cc.UserDefault:getInstance():getBoolForKey("GOLD_MAHJONG_NEXT_ANI_" .. lobbyID, false)
		if self._aniNextGame and not hasGuide then
			self._aniNextGame:setVisible(true)
		end
		cc.UserDefault:getInstance():setBoolForKey("GOLD_MAHJONG_NEXT_ANI_" .. lobbyID, true)
	end
	if self._curTime ~= 0 then
		self._uContinueTime:stopAllActions()
		self._uContinueTime:setString(self._curTime .. "s")
		CF.UITool.createRepeateAction(self._uContinueTime, 1,  function ()
			self._curTime = self._curTime - 1
			if self._curTime >= 0 then
				self._uContinueTime:setString(self._curTime .. "s")
			else
				self._uContinueTime:stopAllActions()
				if CF.roomData and CF.roomData:isGoldRoom() then
					self._uContinueTime:setVisible(false)
				elseif CF.roomData then
					self:onNextGameClicked(nil, ccui.TouchEventType.ended)
				end
			end
		end)
	end
end

function WinLostView:onUpdateUI()
	self:updateEndTypeTitle()
	self._checkTableBtn:setVisible(not CF.roomData:getIsGameOver())
	self._imgFan:setVisible(self:getWinLostData():getIsShowFan())
	if CF.roomData:getIsSeer() then
		self._exitWatchBtn:setVisible(true)
	end
	if self:isShowBigWinLost() then
		self:updateBtnInEnd()
	end
end

--最后一局结束页面中需保障只显示查看战绩
function WinLostView:updateBtnInEnd()
	self._checkBillBtn:setVisible(true)

	self._exitWatchBtn:setVisible(false)
	self._shuffleBtn:setVisible(false)
	self._shuffleQuanBtn:setVisible(false)
	self._shuffleGoldBtn:setVisible(false)
	self._nextGameBtn:setVisible(false)
	self._checkTableBtn:setVisible(false)
end

function WinLostView:updateEndTypeTitle()
    local endType = self:getWinLostData()._sEndType
	self._titleSp:loadTexture(self.EndType[endType], ccui.TextureResType.plistType)
end

--查看桌子
function WinLostView:onCheckTableClicked(send, eventType)
	CF.game:getModule("CenterBtns"):showWinLostButton()
	self:updateReadyTipPos()
    self:close()
end

function WinLostView:updateReadyTipPos()
	local scene = display.getRunningScene()
    local node = scene:getChildByName("ScrollTipLayer")
	if node then
        node:move(node:getPositionX(),node:getPositionY() + 265)
    end
end

--下一局游戏
function WinLostView:onNextGameClicked(send, eventType)
	if not self:isShowBigWinLost() or CF.roomData:isGoldRoom() then
		if CF.roomData:getIsSeer() and CF.roomData:isDelayWatch() then
			self:close()
			CF.game:getModule("WatchGame"):changeToRealWatch()
			return
		end
		if CF.roomData:is50Match() then
			local gameLayer = CF.game:getModule("GameLayer")
			gameLayer:getGameData():clearAllMahData()
			gameLayer:getGameData():initEveryTimesDatas()
			CF.game:getModule("CenterBtns"):onStartGameEvent()
		else
			CF.msgManager:sendGameStart()
			CF.goldManager:sendPlayerJoinMatch()
			self:clearReadyTip()
		end
	else
		local bigSettleData = CF.game:getModule("BigWinLost"):getBigWinLostData()
		if bigSettleData then
			CF.gameRequire("Modules.BigWinLost.View").new(bigSettleData):showSelf()
		end
	end
	CF.game:getModule("ShareWin"):closeWin()
	self:recordWinLostData()
	self:close()
end

function WinLostView:clearReadyTip()
	if CF.roomData:getPlayCount() > 0 then
		CF.TipTool.clearScrollTip()
		CF.game:getModule("ReadyTip"):showReadyTip()
	end
end

function WinLostView:isShowBigWinLost()
	return CF.roomData:getIsGameOver()
end

function WinLostView:getSelfResultScore()
	local msgData = self:getWinLostData()
    if not msgData then
        return 0
    end
    return msgData:getWinLost(self:getSelfSeat()) or 0
end

--使用房卡或者钻石洗牌
function WinLostView:onShuffleDirectClicked(send, eventType)
	local success, err = pcall(function()
		if eventType then
			CF.NewThrowDataManager:throwData(CF.NewThrowDataDefine.SHUFFLE_CARDS_INRESULT)
			self._reportData ={sucID = "dj24080805", costInfo=self._costInfo, score = self:getSelfResultScore()}
			XH.lobby:getModule("PropEventTracker"):track(XH.NewThrowDataDefine.dj24080804, self._reportData)
		end
	end)
	CF.game:getModule("PropUse"):reqShuffleWithProp()
    CF.game:getModule("ChangeLevel"):hide()
	-- CF.throwDataManager:recordButtonClick(CF.ThrowDataDefine.ButtonEnumTable.BOX_ROOM_SHUFFLE,{ShuffleType = "房卡洗牌",SYType = self:recordSYtype()})
	-- self:close()
end

--使用洗牌券洗牌
function WinLostView:onShuffleIndirectClicked(send, eventType)
	CF.game:getModule("PropUse"):reqShuffleWithTicket()
    CF.game:getModule("ChangeLevel"):hide()
	if eventType then
		CF.NewThrowDataManager:throwData(CF.NewThrowDataDefine.SHUFFLE_CARDS_INRESULT)
		self._reportData ={sucID = "dj24080805", costInfo=self._costInfo, score = self:getSelfResultScore()}
		XH.lobby:getModule("PropEventTracker"):track(XH.NewThrowDataDefine.dj24080804, self._reportData)
	end
	-- CF.throwDataManager:recordButtonClick(CF.ThrowDataDefine.ButtonEnumTable.BOX_ROOM_SHUFFLE,{ShuffleType = "洗牌卷洗牌",SYType = self:recordSYtype()})
	-- self:close()
end

--洗牌按钮消耗道具的数量
function WinLostView:setShufflePropCount()
    --消耗的道具数量
    local gameID = CF.roomData:getGameID()
	local shuffleInfo = CF.game:getModule("PropUse"):getShufflePropInfo(CF.gameSub:getShufflePropQuanID())
	local count = shuffleInfo.cost or CF.gameSub:getShufflePropCount(gameID)
	local propID = shuffleInfo.propID or CF.gameSub:getShufflePropID(gameID)
    local smallRoomCardID = CF.areaData:getPropSmallRoomCardID()
	if smallRoomCardID and propID == smallRoomCardID then
		count = count / CF.areaData:getSmallRoomCardRatio()
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
		self._txtCostName:setVisible(false)
		self._txtShuffleFree:setVisible(true)
	end
end

--洗牌按钮消耗道具的图片
function WinLostView:setShufflePropType(propType)
    --消耗的道具id
    -- local propPic = CF.gameSub:getShufflePropPic(CF.roomData:getGameID())
	local shuffleInfo = CF.game:getModule("PropUse"):getShufflePropInfo(CF.gameSub:getShufflePropQuanID())
	local propPic = shuffleInfo.pic or "zuanshi.png"
	if self._imgShuffleProp then
		local strPropPng = propPic --钻石是:"zuanshi.png", 房卡是:"fk.png"
		self._imgShuffleProp:loadTexture(strPropPng, ccui.TextureResType.plistType)
	end
end

--将窗体显示到屏幕
function WinLostView:showSelf(zorder)
	zorder = zorder or 55
	local runningScene = display.getRunningScene()
	if runningScene then
		self:setName(WinLostView.ObjName)
		runningScene:addChild(self, zorder)
	end
	return self
end

--设置规则
function WinLostView:initGameRule()
    self._textGameRule:setText(CF.roomData:getGameRule())
end

-- 金币场关闭计算
function WinLostView:onGameStart(event)
	self:close()
end

function WinLostView:onShuffleGoldClicked(send, eventType)
	if CF.roomData:is50() then
		CF.game:getModule("PropUse50"):reqShuffleCharge()
	else
		CF.game:getModule("PropUse"):sendReqCharge(CF.game:getModule("PropUse"):getShufflePrice(), "shuffle=1")
	end
    CF.NewThrowDataManager:throwData(CF.NewThrowDataDefine.SHUFFLE_CARDS_GOLD)
	self._reportData ={sucID = "dj24080805", costInfo=self._costInfo, score = self:getSelfResultScore()}
    XH.lobby:getModule("PropEventTracker"):track(XH.NewThrowDataDefine.dj24080804, self._reportData)
	-- CF.throwDataManager:recordButtonClick(CF.ThrowDataDefine.ButtonEnumTable.BOX_ROOM_SHUFFLE,{ShuffleType = "金币洗牌",SYType = self:recordSYtype()})
	self:close()
end

function WinLostView:updateGuideLayer()
    if CF.selfPlayerData:getIsNewUserGuide() and CF.selfPlayerData:getIsAfterFirstGoldGame() then
        self._newUserLayer:setVisible(true)
		self._nextGuideTip:setVisible(true)
		-- CF.selfPlayerData:setIsFirstGoldGame(false)
		self._KW_BTN_UNLIMIT:setVisible(false)
	else
        self._newUserLayer:setVisible(false)
        self._nextGuideTip:setVisible(false)
    end
end

function WinLostView:onJumpOverClicked(send, eventType)
    CF.TipTool.showTip({
        type = CF.TIP_LAYER_TYPE.OK_CANCEL,
		funcOK = function()
			self:recordWinLostData()
            self._newUserLayer:setVisible(false)
			self._nextGuideTip:setVisible(false)
			CF.getLobbyModule("Guide"):reqSetNewUserGuideState(CF.getLobbyModule("Guide").GUIDE_STATE["end"])
        end,
    }, "退出引导将无法获得丰富奖励，是否确认退出？")
end

function WinLostView:recordWinLostData()
    local data = {}
    data.time1 = self._viewStartTime or -1
    data.time2 = os.time() or -1
    data.userid = CF.selfPlayerData:getNumberID()
    data.result = self:getWinLostData():getLostEndType(self._seatId) or -1
	data.gamename = CF.gameSub:getGameNameByGameId(CF.roomData:getGameID())
	data.sytype = self:recordSYtype()
    CF.throwDataManager:throwData(CF.ThrowDataDefine.NextGameStarted,data)
end

--判断这局胜负状态
function WinLostView:recordSYtype()
	local sytype   --胜负
	local myScore =  self:getSelfResultScore()
	if myScore >= 0 then 
		sytype = "Y"
	else
		sytype = "S"
	end
	return sytype
end 

function WinLostView:getSelfSeat()
	for i = 0, CF.roomData:getMaxPlayer() - 1 do
	   local playerData = CF.roomData:getTempPlayerDataBySeatId(i)
	   if playerData and playerData:getNumberID() == CF.selfPlayerData:getNumberID() then
		   return playerData:getSeat()
	   end
   end
   return CF.roomData:getMaxPlayer()
end

function WinLostView:onHideView()
  if self.close then
	    self:close()
  end
end

function WinLostView:showGuideFinger()
	if self._aniNextGame then
		self._aniNextGame:setVisible(true)
	end
end

function WinLostView:initCutCard()
    if self._btnCutCard == nil then
        return
    end
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
		local propPic = shuffleInfo.pic or "zuanshi.png"
		if self._imgCutCard then
			local strPropPng = propPic --钻石是:"zuanshi.png", 房卡是:"fk.png"
			self._imgCutCard:loadTexture(strPropPng, ccui.TextureResType.plistType)
		end
	
        local propNum = shuffleInfo.cost or 100
        self._txtCutCardFree:setVisible(CF.roomData._bIsFreeCut)
        self._txtCutCardName:setVisible(not CF.roomData._bIsFreeCut)
        self._txtCutCard:setVisible(not CF.roomData._bIsFreeCut)
        self._imgCutCard:setVisible(not CF.roomData._bIsFreeCut)
        self._txtCutCard:setText("x" .. propNum .."）")
        if shuffleInfo.type == CF.GameDefine.SHUFFLE_SHOW_TYPE.QUAN then
            self._btnCardQuan:setVisible(true)
        else
            self._btnCutCard:setVisible(true)
        end
		self._cutCostInfo = {propid=cutCardsDefine.QuanId, costPropid=shuffleInfo.propID,cnt=shuffleInfo.cost}
		XH.lobby:getModule("PropEventTracker"):track(XH.NewThrowDataDefine.dj24091902, { 
            costInfo = self._cutCostInfo
        })
    end
end

function WinLostView:onCutCardClicked()
    CF.NewThrowDataManager:throwData(CF.NewThrowDataDefine.CUT_CARDS_DO)
	local reportData ={sucID = "dj24080814", costInfo=self._costInfo, score = self:getSelfResultScore()}
    XH.lobby:getModule("PropEventTracker"):track(XH.NewThrowDataDefine.dj24080813, reportData)
    CF.game:getModule("PropUse"):onPreCutCard(reportData)
	self:close()
end

-- 判断切牌按钮重新显示位置,有切牌必有洗牌
function WinLostView:flushPosWithCut()
    if self._btnCutCard == nil then
        return
    end
    if self._btnCutCard:isVisible() or self._btnCardQuan:isVisible() then
        self._btnCutCard:setPositionX(240)
        self._btnCardQuan:setPositionX(240)
        self._shuffleBtn:setPositionX(-250)
        self._shuffleQuanBtn:setPositionX(-250)
        self._nextGameBtn:setPositionX(620)
        self._checkTableBtn:setPositionX(-620)
    end
end

function WinLostView:onPlayerStart(event)
	if self and self.close then
		self:close()
	end
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

function WinLostView:onExitWatch(send, eventType)
	if eventType ~= ccui.TouchEventType.ended then
		return
	end
    CF.game:getModule("WatchGame"):onExitWatch()
	CF.game:leaveGame()
end

function WinLostView:onChangeCardClicked(sender , eventType)
     print("onChangeCardClicked")
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

return WinLostView
