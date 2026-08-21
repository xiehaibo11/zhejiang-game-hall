local WinLostGoldView = CF.gameClass("WinLostGoldView", CF.ViewBase)

WinLostGoldView.EndType =
{
    [0] = "settle_text_run.png",  --逃跑
    [1] = "settle_text_zimo.png",  --自摸
    [2] = "settle_text_dianpao.png",  --点炮
    [3] = "settle_text_qianggang.png", --抢杠
    [5] = "settle_text_liuju.png", --流局
}

function WinLostGoldView:ctor(param)
    param = param or {}
    WinLostGoldView.super.ctor(self, param)
    self._panelPayer = { self._panelPayer_1, self._panelPayer_2, self._panelPayer_3, self._panelPayer_4 }
    self:createChildren()
    self:onTimeClose()
    if CF.roomData:isGoldRoom() then
        self:startSchedule()
    end
    self._viewStartTime = os.time()
    local selfScore = 0
    local selfSeat = self:getSelfSeat()
    if self._settleData:getWinLost(selfSeat) then
        selfScore = self._settleData:getWinLost(selfSeat)
        CF.getLobbyModule("ToponAct"):reqGoldActInfo(selfScore >= 0)
    end
    local gameData = CF.game:getModule("GameLayer"):getGameData()
    local huSeats = gameData:getHuSeat()
    if huSeats and #huSeats > 0 then
        for i = 1, #huSeats do
            if huSeats[i] == selfSeat then
                CF.game:getModule("ShareWin"):updateShowShareWinView(selfScore, selfSeat)
                break
            end
        end
    end
    self._hasH5GameWidget = true
    CF.getLobbyModule("H5GameWidget"):setGameData(CF.roomData:getRoomID(), CF.gameSub:getGameNameByGameId(CF.roomData:getGameID()),"结束","BMC002")
    CF.getLobbyModule("H5GameWidget"):addH5GameWidget("game_end",CF.roomData._gameID)
    local goldShareView = CF.gameRequire("game.GameBase.Modules.Share.GoldShareView")
    if CF.roomData:isGoldRoom() and goldShareView then
        self:addChild(goldShareView.new())
    end

    if CF.roomData:isGoldRoom() then
        self:runAction(cc.Sequence:create(cc.DelayTime:create(2),cc.CallFunc:create(function()
            XH.lobby:getModule("Share"):reqLuckyBag(true)
        end)))
    end
end

function WinLostGoldView:getWinLostData()
    if not self._settleData then
        self._settleData = CF.game:getModule("WinLost"):getWinLostData()
    end
    return self._settleData
end

function WinLostGoldView:getCSBPath()
    return "cocosStudio/MahjongNew/GameLayer/CSB/Settle/SettleGold.csb"
end

function WinLostGoldView:getBindingInfo()
    return {
        ["_KW_IMG_RESULT"] = { varName = "_titleSp"},
        ["_KW_BTN_CHECK_TABLE"] = { varName = "_checkTableBtn", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onCheckTableClicked"},
        ["_KW_BTN_NEXT_GAME"] = { varName = "_nextGameBtn", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onNextGameClicked"},
        
        ["_KW_BTN_SHUFFLE_GOLD"] = { varName = "_shuffleGoldBtn", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onShuffleGoldClicked"},
        ["_KW_TXT_SHUFFLE_PROP_GOLD_COST"] = { varName = "_txtShuffleGoldCost"},
        ["_KW_TXT_SHUFFLE_PROP_GOLD_SALE"] = { varName = "_txtShuffleGoldSale"},

        ["_KW_ANI_NEXT_GAME"] = { varName = "_aniNextGame"},
        ["_KW_CONTINE_TIME"] = { varName = "_uContinueTime"},
        ["_KW_TEXT_FAN_DETAIL"] = { varName = "_txtFanDetail"},
        ["_KW_PANEL_HAND_CARD"] = { varName = "_panelHandCard"},
        ["_KW_PANEL_FLOWER"] = { varName = "_panelFlower"},
        ["_KW_PANEL_COMBO"] = { varName = "_panelCombo"},
        ["_KW_IMG_CONTRACT"] = { varName = "_contractSp"},
        ["_KW_IMG_DECONTRACT"] = { varName = "_decontractSp"},
        ["_KW_PANEL_PLAYER_"] = { varName = "_panelPayer_", beginIndex = 1, endIndex = 4},

        ["_KW_NEW_USER_GUIDE"] = {varName = "_newUserLayer"},
        ["_KW_UI_JUMP_OVER_BTN"] = {varName = "_jumpOverBtn", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onJumpOverClicked"},
        ["_KW_NEW_USER_GUIDE_PANEL"] = { varName = "_nextGuideTip"},
        ["_KW_PANEL_BOTTOM_CENTER"] = { varName = "_panelBottomCenter"},
        ["_KW_BTN_UNLIMIT"] = {varName = "_KW_BTN_UNLIMIT", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onBtnUnLimit"},
        ["_KW_TEXT_UNLIMIT"] = {varName = "_KW_TEXT_UNLIMIT"},
    }
end

function WinLostGoldView:getProxyEvents()
    local winLostData = self:getWinLostData()
    return {
        {module = winLostData, eventKeyName = "EVENT_RESULT_EXINFO_CHANGED", callBack = "updateResultInfoUI"},
        {module = winLostData, eventKeyName = "EVENT_RESULT_SHOW_HUANI", callBack = "showHuAni"},
        {module = CF.game:getModule("WinLost"), eventKeyName = "EVENT_CLOSE_GOLD_VIEW", callBack = "closeView"},
        {module = CF.game:getModule("Setting"), eventKeyName = "EVENT_PLAYER_CHANGESEAT", callBack = "onPlayerChangeSeat"},
        {module = CF.game:getModule("Share"), eventKeyName = "EVENT_CLOSE_CAPTURE_SCREEN_VIEW", callBack = "showGoldRoomBtn"},
        {module = CF.game:getModule("Share"), eventKeyName = "EVENT_SHARE_HIDE_UNUSE_BTNS", callBack = "hideGoldRoomBtn"},
    }
end

function WinLostGoldView:createChildren()
	for i = 0, CF.roomData:getMaxPlayer() - 1 do
        local playerData = CF.roomData:getTempPlayerDataBySeatId(i)
        if playerData then
            local localSeat = self:seatToLocal(i)
		    self:onUpdatPlayerUI(localSeat, playerData)
        end
	end
    self:updateResultInfoUI()
    self:updateBankerFlag()
    self:updateWindFlag()
	--显示洗牌按钮
    self:initGoldShuffle()
    self:updateGuideLayer()

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
end

function WinLostGoldView:initGoldShuffle()
	self._shuffleGoldBtn:setVisible(false)
	if CF.game:getModule("WinLost"):needShowShuffleButton() then
		local posX = { -600, 0, 600 }
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
	end
end

function WinLostGoldView:onUpdatPlayerUI(index, playerData)
    if not playerData or not self._panelPayer[index] then
        return
    end
   self._panelPayer[index]:setVisible(true)
   local nickname = playerData:getNickName()
   if string.len(nickname) > 12 then
        local validBytes = CF.StringTool.getMinimumValidBytesUTF8(nickname, 12)
        nickname = string.sub(nickname, 1, validBytes) .. "..."
     end
    CF.UITool.setText(self._panelPayer[index], "KW_TEXT_NICKNAME", nickname)
    
    self:updateHeadImg(index, playerData)

    if CF.roomData:isGoldRoom() and CF.roomData:getRoomMode2() == CF.ROOM_TYPE.GOLD_ROOM then
        self:createKickBtn(index, playerData)
    end
end

function WinLostGoldView:createKickBtn(index, playerData)
    if not playerData then
        return
    end
    local headFrame = CF.UITool.seekNodeByName(self._panelPayer[index], "KW_IMG_HEAD_FRAME")

    if playerData:getNumberID() == XH.playerData:getNumberID() then
        return
    end
    local imgUrl = "Btn_game_vip_tc.png"
    local btnKick = ccui.Button:create(imgUrl, imgUrl, imgUrl, ccui.TextureResType.plistType)
    btnKick:setPosition(cc.p(0, 90))
    btnKick:addClickEventListener(function (event)
        CF.game:getModule("Kick"):sendVipKick(playerData:getBrandID(), playerData:getNumberID(), playerData:getNickName())

        local m = XH.lobby:getModule("Sxvip.ThrowData")
        m:setBeforeGameStartStr("对局后")
        m:throwData(XH.NewThrowDataDefine.hy24090621, {block_item_id="对局后", game_id = string.format("%d_%d", XH.areaData:getAreaID(), CF.roomData:getGameID())})
    end)
    btnKick:setPressedActionEnabled(true)
    local parent = headFrame:getParent()
    local childrenNode = parent:getChildren()
    for i = 1, #childrenNode do
        childrenNode[i]:setLocalZOrder(childrenNode[i]:getLocalZOrder() + 2)
    end
    headFrame:setLocalZOrder(0)
    parent:addChild(btnKick, 1)
end

function WinLostGoldView:updateHeadImg(index, playerData)
    if not playerData then
        return
    end
    local headFrame = CF.UITool.seekNodeByName(self._panelPayer[index], "KW_IMG_HEAD_FRAME")
    if not headFrame then
        return
    end
    local url = playerData:getAvatarUrl()
    if url == "" then
        url = "http://thirdwx.qlogo.cn/mmopen/vi_32/RZWHFDljz1SW2Azl6kZyxic4ziaibicnUPo8dB3YiaGbhpyx3Tq34Vemk6KqexyJQJtAphjc9TELicPuRryc0UQ4DPmw/132"
    end

    local size = headFrame:getContentSize()
    local headImg = CF.RemoteImage.new()
        :setTouchEnabled(true)
        :setPosition(size.width/2, size.height/2)
        :ignoreContentAdaptWithSize(false)
        :setContentSize(size.width - 7, size.height - 7)
        :addTo(headFrame)
    headImg:setUrl(url)
end

function WinLostGoldView:updateBankerFlag()
    local gameData = CF.game:getModule("GameLayer"):getGameData()
    local laozhuangNum = gameData:getLaoZhuangNum()
    local bShowLaoZhuang = false
    if laozhuangNum > 0 and CF.configData:getIsShowLaoZhuang() then
        bShowLaoZhuang = true
    end
    for i = 0, CF.roomData:getMaxPlayer() - 1 do
        local playerData = CF.roomData:getTempPlayerDataBySeatId(i)
        if playerData then
            local localSeat = self:seatToLocal(i)
            local isBanker = gameData:isBanker(i)
            if bShowLaoZhuang then
                CF.UITool.setVisible(self._panelPayer[localSeat], "KW_IMG_FLAG", false)
                CF.UITool.setVisible(self._panelPayer[localSeat], "KW_IMG_ZHUANG_BG", isBanker)
                CF.UITool.setText(self._panelPayer[localSeat], "KW_FNT_ZHUANG_NUM", "x"..laozhuangNum)
            else
                CF.UITool.setVisible(self._panelPayer[localSeat], "KW_IMG_FLAG", isBanker)
            end
        end
	end
end

function WinLostGoldView:updateWindFlag()
    for i = 0, CF.roomData:getMaxPlayer() - 1 do
        local playerData = CF.roomData:getTempPlayerDataBySeatId(i)
        if playerData then
            local wind = self:getWinLostData():getSeatWind(i)
            local localSeat = self:seatToLocal(i)
            if wind and wind ~= -1 then
                CF.UITool.loadTexture(self._panelPayer[localSeat], "KW_IMG_WIND", string.format("settle_feng_%d.png", wind), ccui.TextureResType.plistType)
                CF.UITool.setVisible(self._panelPayer[localSeat], "KW_IMG_WIND", true)
            end
        end
	end
end

function WinLostGoldView:onTimeClose()
    local lobbyID = CF.areaData:getLobbyID()
    self._curTime = 10
    if lobbyID == CF.LOBBY_ID.LISHUI then
        self._curTime = 5
    end
    self._uContinueTime:setVisible(true)

    -- 手指引导
    local hasGuide = cc.UserDefault:getInstance():getBoolForKey("GOLD_MAHJONG_NEXT_ANI_" .. lobbyID, false)
    if self._aniNextGame and not hasGuide then
        self._aniNextGame:setVisible(true)
    end
    if hasGuide then
        self._KW_BTN_UNLIMIT:setVisible(false)
    end
    cc.UserDefault:getInstance():setBoolForKey("GOLD_MAHJONG_NEXT_ANI_" .. lobbyID, true)

    if self._curTime ~= 0 then
        self._uContinueTime:stopAllActions()
        self._uContinueTime:setString(self._curTime .. "s")
        CF.UITool.createRepeateAction(self._uContinueTime, 1, function()
            self._curTime = self._curTime - 1
            if self._curTime >= 0 then
                self._uContinueTime:setString(self._curTime .. "s")
            else
                self._uContinueTime:stopAllActions()
                self._uContinueTime:setVisible(false)
            end
        end)
    end
end

function WinLostGoldView:getSelfSeat()
     for i = 0, CF.roomData:getMaxPlayer() - 1 do
        local playerData = CF.roomData:getTempPlayerDataBySeatId(i)
        if playerData and playerData:getNumberID() == CF.selfPlayerData:getNumberID() then
            return playerData:getSeat()
        end
    end
    return CF.roomData:getMaxPlayer()
end

function WinLostGoldView:updateResultInfoUI()
    self:onUpdatePlayerScore()

    local showSeat = self:getResutInfoSeat()
    local mahData = self:getWinLostData():getMahData(showSeat)
    if mahData and mahData.handData and #mahData.handData > 0 then
        self:updataHandMah(mahData.handData, mahData.handDfData, mahData.combData)
    end

    if mahData and mahData.flowerData and #mahData.flowerData > 0 then
        self:updataFlowerMah(mahData.flowerData)
    end

    self:updateEndTypeTitle()
--    local lostEndType = self:getWinLostData():getLostEndType(self._seatId)
--    if lostEndType then
--        self._lostTypeSp:loadTexture(string.format("settle_icon_%d.png", lostEndType), ccui.TextureResType.plistType)
--        self._lostTypeSp:setVisible(true)
--    else
--        self._lostTypeSp:setVisible(false)
--    end
    local strFanName = self:getWinLostData():getFanNameBySeat(showSeat)
    self._txtFanDetail:setString(strFanName)
    --是否承包
    if self._contractSp then
        self._contractSp:setVisible(self:getWinLostData():getIsContract(showSeat))
    end
    --是否反承包
    if self._decontractSp then
        self._decontractSp:setVisible(self:getWinLostData():getIsDeContract(showSeat))
    end
end

function WinLostGoldView:updateEndTypeTitle()
    local endType = self:getWinLostData():getEndType()
    self._titleSp:loadTexture(self.EndType[endType], ccui.TextureResType.plistType)
end

function WinLostGoldView:onUpdatePlayerScore()
    for i = 0, CF.roomData:getMaxPlayer() - 1 do
        local playerData = CF.roomData:getTempPlayerDataBySeatId(i)
        if playerData then
            local localSeat = self:seatToLocal(i)
            local score = self:getWinLostData():getWinLost(i) or 0
            local scoreString
	        local fntPath = "cocosStudio/MahjongNew/GameLayer/Font/win_number-export.fnt"
	        if score >= 0 then
			    scoreString = "+"..score
		    else
			    fntPath = "cocosStudio/MahjongNew/GameLayer/Font/lose_number-export.fnt"
			    scoreString = score
		    end
            local txtScoreNode = CF.UITool.seekNodeByName(self._panelPayer[localSeat], "KW_TEXT_SCORE")
            if txtScoreNode then
                txtScoreNode:setFntFile(fntPath)
                txtScoreNode:setString(scoreString)
            end
            if i == CF.roomData:getSelfSeat() then
                CF.game:getModule("Share"):setGoldScore(score)
            end
        end
	end
end

function WinLostGoldView:updataHandMah(handMahs, dfMahID, combData)
    local combs = {}
    for _, comb in ipairs(combData) do
        local singleCombData = {}
        singleCombData.mahValues = comb.nMahs
        singleCombData.combFlag = comb.nFlag
        if comb.nFlag and comb.nFlag == CF.GameDefine.COMB_FLAG.CKONG then
            singleCombData.showBackIndexs = self:_getCKongShowBackIndexs(clone(singleCombData)) or {}
        end
        table.insert(combs, singleCombData)
    end
    if self:getHandArea().setJokerData then
        local gameData = CF.game:getModule("GameLayer"):getGameData()
        local jokerData = gameData:getJokerData()
        local insteadsData = gameData:getInsteadMahData()
        self:getHandArea():setJokerData(jokerData, insteadsData)  
    end
    self:getHandArea():showResultMahs(handMahs, dfMahID, combs)
end

function WinLostGoldView:updataFlowerMah(flowerMahs)
    local config = CF.settingData:getDefaultData(nil, true)
    local UIMahFlowerArea = CF.gameRequire("Modules.GameLayer.View2D.UIMahFlowerArea")
    local settleFlowerMahs = UIMahFlowerArea.new(CF.GameDefine.LOCAL_SEAT.BOTTOM, config)
    self._panelFlower:addChild(settleFlowerMahs)
    settleFlowerMahs:setFlowers(flowerMahs)
    --self._panelFlower:setPositionY(125)
    self._panelFlower:setScale(0.32)
end

function WinLostGoldView:getHandArea()
    if not self._handArea then 
        local config = CF.settingData:getDefaultData(nil, true)
        local ItemMahsArea = CF.gameRequire("Modules.WinLost.ItemMahsArea")
        self._handArea = ItemMahsArea.new(config)
        self._panelHandCard:addChild(self._handArea)
    end
    return self._handArea
end

-- 暗杠时显示的牌背序号
function WinLostGoldView:_getCKongShowBackIndexs(combData)
    return {1,2,3}
end

--查看桌子
function WinLostGoldView:onCheckTableClicked(send, eventType)
    CF.game:getModule("CenterBtns"):showWinLostButton()
    self:closeView()
end

--下一局游戏
function WinLostGoldView:onNextGameClicked(send, eventType)
    if CF.roomData:is50Match() then 
        local gameLayer = CF.game:getModule("GameLayer")
        gameLayer:getGameData():clearAllMahData()
        gameLayer:getGameData():initEveryTimesDatas()
        CF.game:getModule("CenterBtns"):onStartGameEvent()
    else 
        CF.msgManager:sendGameStart()
        CF.goldManager:sendPlayerJoinMatch()
        self:recordWinLostData()
    end 
    
    self:closeView()
end

--将窗体显示到屏幕
function WinLostGoldView:showSelf(zorder)
    zorder = zorder or 46
	local runningScene = display.getRunningScene()
	if runningScene then
        runningScene:addChild(self, zorder)
	end
	return self
end

function WinLostGoldView:removeAllEventListeners()
	if self._settleDataProxy then
        self._settleDataProxy:removeAllEventListeners()
    end
end

function WinLostGoldView:onGameStart(event)
    self:closeView()
end

function WinLostGoldView:onShuffleGoldClicked(send, eventType)
	if eventType == ccui.TouchEventType.began then
		CF.getGameSoundManager().playButtonClick()
	end
	if eventType ~= ccui.TouchEventType.ended then
		return
	end

	if CF.roomData:is50() then
		CF.game:getModule("PropUse50"):reqShuffleCharge()
	else
    	CF.game:getModule("PropUse"):sendReqCharge(CF.game:getModule("PropUse"):getShufflePrice(), "shuffle=1")
    end
    CF.NewThrowDataManager:throwData(CF.NewThrowDataDefine.SHUFFLE_CARDS_GOLD)
    -- CF.throwDataManager:recordButtonClick(CF.ThrowDataDefine.ButtonEnumTable.BOX_ROOM_SHUFFLE,{ShuffleType = "金币洗牌",SYType = self:recordSYtype()})
    self:closeView()
end

function WinLostGoldView:showHuAni(event)
    if not self:getWinLostData() then return end
    local showSeat = self:getResutInfoSeat()
    local huMahID = self:getWinLostData():getHuMahData(showSeat)
    if event.data.seat ~= showSeat then
        return
    end
    if huMahID and huMahID ~= 0 then
        local mahData = self:getWinLostData():getMahData(showSeat)
        local node = self:getHandArea():findFirstMahNodeByID(huMahID, mahData)
        if node then
            local tempCursor = ccui.Layout:create()
            CF.UITool.playJsonAnimationByName(tempCursor, "gameend_cardlight", "res/animation/Mahjong/Base/gameend_cardlight/gameend_cardlight.ExportJson", 1, "Animation1", cc.p(0,0))
            tempCursor:setPosition(cc.p(70, 100))
            node:addChild(tempCursor)
        end
    end
end

function WinLostGoldView:getResutInfoSeat()
    local selfSeat = self:getSelfSeat()
    local gameData = CF.game:getModule("GameLayer"):getGameData()
    local huSeats = gameData:getHuSeat()
    local huSeat = huSeats[1]
    return huSeat or selfSeat
end

function WinLostGoldView:updateGuideLayer()
    if CF.selfPlayerData:getIsNewUserGuide() and CF.selfPlayerData:getIsFirstGoldGame() then
        self._newUserLayer:setVisible(true)
        self._nextGuideTip:setVisible(true)
        -- CF.selfPlayerData:setIsFirstGoldGame(false)
    else
        self._newUserLayer:setVisible(false)
        self._nextGuideTip:setVisible(false)
    end
end

function WinLostGoldView:onJumpOverClicked(send, eventType)
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

function WinLostGoldView:recordWinLostData()
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
function WinLostGoldView:recordSYtype()
	local sytype   --胜负
	local myScore =  self:getWinLostData():getWinLost(self:getSelfSeat()) or 0
	if myScore >= 0 then 
		sytype = "Y"
	else
		sytype = "S"
	end
	return sytype
end 

function WinLostGoldView:closeView()
    CF.game:getModule("ChangeLevel"):hide()
    CF.getLobbyModule("ToponAct"):closeToponGoldDrawView()
    CF.getLobbyModule("H5GameWidget"):close5GameWidget("game_end",CF.roomData._gameID)
    CF.getLobbyModule("H5GameWidget"):close5GameWidget("game_begin",CF.roomData._gameID)
    self:close()
end

function WinLostGoldView:onPlayerChangeSeat(event)
    self:close()
end

function WinLostGoldView:hideGoldRoomBtn()
    self._lastShowBtns = CF.game:getModule("Share"):setShareHideIcons(self)
end

function WinLostGoldView:showGoldRoomBtn()
    CF.game:getModule("Share"):setShareShowIcons(self, self._lastShowBtns)
end

function WinLostGoldView:seatToLocal(seat)
    -- 如果玩家被踢出了，getSelfSeat会不正确导致计算出来的localseat有异常，所以使用麻将缓存下来的selfSeat
    local selfPlayerData = CF.roomData:getSelfPlayerData()
    if selfPlayerData ~= nil then
        return CF.roomData:seatToLocal(seat)
    end
    local localSeat = -1
    local chairCount = CF.roomData:getChairs()
    if seat >= 0 and seat <= chairCount - 1 then
        localSeat = ((seat - self:getSelfSeat() + chairCount) % chairCount + 1) % chairCount + CF.roomData:getSelfLocalSeat() - 1
        if chairCount == 2 and localSeat == CF.GameDefine.LOCAL_SEAT.LEFT then
            localSeat = CF.GameDefine.LOCAL_SEAT.TOP
        end
    end
    return localSeat
end

function WinLostGoldView:onBtnUnLimit()
    XH.viewManager:openView("UnLimitGoldActView", nil, {})
end

function WinLostGoldView:flushLeftTime()
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

function WinLostGoldView:startSchedule()
    self:removeSchedule()
    self:flushLeftTime()
    self._listener = cc.Director:getInstance():getScheduler():scheduleScriptFunc(function()
        if self and not tolua.isnull(self) then
            self:flushLeftTime()
        end
    end, 1, false)
end

function WinLostGoldView:removeSchedule()
    if self._listener then
        cc.Director:getInstance():getScheduler():unscheduleScriptEntry(self._listener)
    end
    self._listener = nil
end

function WinLostGoldView:onCleanup()
    self:removeSchedule()
    WinLostGoldView.super.onCleanup(self)
end

return WinLostGoldViewc