---------------------------------------------------------
--
-- Description: 游戏结束
-- Aut  or: hejaifeng
-- Date: 2019-07-22
--
---------------------------------------------------------
local AnimationManager = CF.gameRequire("Manager.AnimationManager")
local GameWinLostLayer = CF.gameClass("GameWinLostLayer", CF.ViewBase)
local Define = CF.gameRequire("Modules.ChangeCard.Define")

local ENUM_WIN_ORDER_TYPE = {
    KW_ENDTYPE_PINGKOU = {1, 0},
    KW_ENDTYPE_DANKOU = {1, 3},
    KW_ENDTYPE_SHUANGKOU = {1, 2}
}

local KW_NUM_MIN_XIANGFAN = 4
local KW_PATH_RESOUCE_FONT = "res/cocosStudio/Common/Font"
--字体
local KW_LOST_TEXT_FNT = "jiesuan_num3-export.fnt"
local KW_WIN_TEXT_FNT = "jiesuan_num2-export.fnt"

function GameWinLostLayer:getCSBPath()
    return "res/cocosStudio/DoubleKou/GameLayer/CSB/GameWinLost.csb"
end

function GameWinLostLayer:getBindingInfo()
    return {
        ["_KW_TEXT_PLAYER_GONG_"] = {varName = "_KW_TEXT_PLAYER_GONG_", beginIndex = 1, endIndex = 4},
        ["_KW_DI"] = {varName = "_KW_DI"},
        ["_KW_UI_END_PANEL"] = {varName = "_endPanel"},
        ["_KW_BTN_GO_ON@"] = {varName = "_goOnBtn", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onGoOnClicked"},
        ["_KW_BTN_NEXT@"] = {varName = "_nextBtn", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onGoOnClicked"},
        ["_KW_BTN_CHECK_BILL"] = {varName = "_checkBillBtn",type = CF.UI_TYPE.BUTTON, onTouchEnded = "onGoOnClicked"},
        ["_KW_TEXT_PLAYER_SCORE_"] = {varName = "_playerScoreText", beginIndex = 1, endIndex = 4},
        ["_KW_IMG_HEAD_FRAME_"] = {varName = "_playerHead", beginIndex = 1, endIndex = 4},
        ["_KW_TEXT_NICKNAME_"] = {varName = "_playerNickName", beginIndex = 1, endIndex = 4},
        ["_KW_TEXT_PLAYER_NAME_"] = {varName = "_winPlayerName", beginIndex = 1, endIndex = 2},
        ["_KW_TEXT_XIANGFAN_NUM"] = {varName = "_xiangFanText"},
        ["_KW_TEXT_XIANGFAN"] = {varName = "_xiangFanName"},
        ["_KW_TEXT_CHAIXIANG_NUM"] = {varName = "_chaiXiangText"},
        ["_KW_TEXT_CHAIXIANG"] = {varName = "_chaiXiangName"},
        ["_KW_UI_BREAK_PANEL"] = {varName = "_breakPanel"},
        ["_KW_TEXT_BREAK"] = {varName = "_breakText"},
        ["_KW_PANEL_ARMATURE_RESULT"] = {varName = "_armaturePanel"},
        ["_KW_NEXT_TIME"] = {varName = "_uNextTime", class = "text"},
        ["_KW_CONTINE_TIME"] = {varName = "_uContinueTime"},
        ["_KW_ANI_GO_ON"] = {varName = "_aniGoOn"},
        ["_KW_BTN_SHUFFLE_DIRECT"] = {varName = "_shuffleBtn", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onShuffleDirectClicked"},
        ["_KW_BTN_SHUFFLE_INDIRECT"] = {varName = "_shuffleQuanBtn", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onShuffleIndirectClicked"},
        ["_KW_BTN_SHUFFLE_GOLD"] = {varName = "_shuffleGoldBtn", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onShuffleGoldClicked"},
        ["_KW_IMG_SHUFFLE_PROP_DIRECT"] = {varName = "_imgShuffleProp"},
        ["_KW_IMG_SHUFFLE_PROP_DIAMOND"] = {varName = "_imgShufflePropDiamond"},
        ["_KW_TXT_SHUFFLE_PROP_DIRECT"] = {varName = "_txtShuffleProp"},
        ["_KW_TEXT_COSTNAME"] = { varName = "_txtCostName"},
		["_KW_TXT_SHUFFLE_FREE_DIRECT"] = { varName = "_txtShuffleFree"},
        ["_KW_TEXT_SHUFFLE_TIPS"] = {varName = "_textShuffleTips"},
        ["_KW_IMG_SHUFFLEBUBBLE"] = {varName = "_imgShuffleBubble"},
        ["_KW_TXT_SHUFFLE_PROP_INDIRECT_COST"] = {varName = "_txtShufflePropCost"},
        ["_KW_TXT_SHUFFLE_PROP_INDIRECT_COUNT"] = {varName = "_txtShufflePropCount"},
        ["_KW_TXT_SHUFFLE_PROP_GOLD_COST"] = {varName = "_txtShuffleGoldCost"},
        ["_KW_TXT_SHUFFLE_PROP_GOLD_SALE"] = {varName = "_txtShuffleGoldSale"},
        ["_KW_NEW_USER_GUIDE"] = { varName = "_newUserLayer"},
        ["_KW_UI_JUMP_OVER_BTN"] = {varName = "_jumpOverBtn",type = CF.UI_TYPE.BUTTON, onTouchEnded = "onJumpOverClicked"},
        ["_KW_NEW_USER_GUIDE_PANEL"] = { varName = "_nextGuideTip"},
        ["_KW_KICK_OUT_CLOCK"] = {varName = "_kickOutClock"},--被踢出房间的倒计时

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

        ["_KW_BTN_SCORETIP_"] = {varName = "_KW_BTN_SCORETIP_", beginIndex = 1, endIndex = 4, onTouchEnded = "onScoreTipClicked"},
        ["_KW_TEXT_SCORETIP_"] = {varName = "_KW_TEXT_SCORETIP_", beginIndex = 1, endIndex = 4},
        ["_KW_IMG_SCORETIP_"] = {varName = "_KW_IMG_SCORETIP_", beginIndex = 1, endIndex = 4},
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
        {module = CF.game:getModule("WinLost"), eventKeyName = "EVENT_WINLOST_CLOCK", callBack = "onClock"},
        -- {module = CF.game:getModule("ChangeCard"), eventKeyName = "EVENT_BTN_VISIBLE", callBack = "updateBtnVisivble"},
    }
end

function GameWinLostLayer:ctor(param)
    param = param or {}
    GameWinLostLayer.super.ctor(self, param)
    self:initCutCard()
    self:initShuffle()
    self:onTimeClose()
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
    self:initDiscountNode()

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
    local pos = cc.p(self._goOnBtn:getContentSize().width,self._goOnBtn:getContentSize().height / 4 )
    CF.UITool.showFingerAni(self._goOnBtn,-1,pos)
end

function GameWinLostLayer:showSelf()
    local parent = display.getRunningScene()
    parent:addChild(self, 46)
    if CF.roomData:isGoldRoom() then
        self:showKickOutClock()
    end
    self._startShowTime = os.time()
    -- local DEBUG = require("app.Config.GlobalConfig").IsDebug
    -- if DEBUG then 
    --     local scheduleID
    --         scheduleID = cc.Director:getInstance():getScheduler():scheduleScriptFunc(function()
    --              CF.game:getModule("CenterBtns"):onStartGameEvent()
    --             cc.Director:getInstance():getScheduler():unscheduleScriptEntry(scheduleID)
    --         end, 3, false)
        
    -- end
end

function GameWinLostLayer:setWinLostData(winLostData)
    self._winLostData = winLostData

    self._sCaiXiang = winLostData:getCaiXiangData()
    self._sNoGong = winLostData:getNoGongData()
    self._iCaiXiang = winLostData:getIsCaiXiang()
    self._iNoGong = winLostData:getIsNoGong()
    self._bLastPlayCount = winLostData:getIsLastPlayCount()
    self._sEndType = winLostData:getEndType()
    self._sWinMut = winLostData:getWinMut()
    self._sWinOrder = winLostData:getWinOrder()
    self._tScore = winLostData:getPlayerScore()
    self._playerName = winLostData:getPlayerName()
    self._sGong = winLostData:getGongData()

    self:updateContinueBtnState()
    self:updateEndType()
    self:updateWinMut()
    self:updateWinOrder()
    self:updatePlayerScore()
    self:onUpdateDi()
    self:onUpdatePlayerGong()
    self:setEscapeSeat(winLostData:getEscapeSeat())
    self:setChaoDiSeat(winLostData:getChaoDiSeat())

    local isGold = CF.roomData:isGoldRoom()

    if isGold then
        for i = 0, CF.roomData:getMaxPlayer() - 1 do
            local playerData = CF.roomData:getPlayerDataBySeatId(i)
            if playerData then
                local localSeat = CF.roomData:seatToLocal(i)
                self:onUpdatPlayerUI(localSeat, playerData)
            end
        end
    else
        for i = 1, 4 do
            if self["_KW_BTN_SCORETIP_" .. i] then
                self["_KW_BTN_SCORETIP_" .. i]:setVisible(false)
            end
            if self["_KW_IMG_SCORETIP_" .. i] then
                self["_KW_IMG_SCORETIP_" .. i]:setVisible(false)
            end
            self["_playerHead" .. i]:setVisible(false)
            self["_playerNickName" .. i]:setVisible(false)
        end
    end

    self._goOnBtn:setVisible(not isGold)
    self._nextBtn:setVisible(isGold)
    if isGold then
        -- 手指引导
        self._viewStartTime = os.time()
        local lobbyID = CF.areaData:getLobbyID()
        local hasGuide = cc.UserDefault:getInstance():getBoolForKey("GOLD_DOUBLEKOU_NEXT_ANI_" .. lobbyID)
        if hasGuide then
            self._aniGoOn:setVisible(false)
            self._KW_BTN_UNLIMIT:setVisible(false)
        end
        cc.UserDefault:getInstance():setBoolForKey("GOLD_DOUBLEKOU_NEXT_ANI_" .. lobbyID, true)
        self:updateContinueUI(10)
        self:updateGuideLayer()
        self:startSchedule()
    else
        self:updateLastWinLostBtn()
    end
    -- 增加水印
    self:showWatermark()
    self:showScoreTip()
end

function GameWinLostLayer:onUpdatPlayerUI(index, playerData)
    if not playerData then
        return
    end

    local playerHeadFrame = self["_playerHead" .. index]
    local playerNickName = self["_playerNickName" .. index]
    playerHeadFrame:setVisible(true)
    playerNickName:setVisible(true)

    local nickname = playerData:getNickName()

    if string.len(nickname) > 12 then
        local validBytes = CF.StringTool.getMinimumValidBytesUTF8(nickname, 12)
        nickname = string.sub(nickname, 1, validBytes) .. "..."
    end
    playerNickName:setString(nickname)

    local url = playerData:getAvatarUrl()
    if url == "" then
        url = "http://thirdwx.qlogo.cn/mmopen/vi_32/RZWHFDljz1SW2Azl6kZyxic4ziaibicnUPo8dB3YiaGbhpyx3Tq34Vemk6KqexyJQJtAphjc9TELicPuRryc0UQ4DPmw/132"
    end

    local size = playerHeadFrame:getContentSize()
    local headImg = CF.RemoteImage.new()
        :setTouchEnabled(true)
        :setPosition(size.width/2, size.height/2)
        :ignoreContentAdaptWithSize(false)
        :setContentSize(size.width - 7, size.height - 7)
        :addTo(playerHeadFrame)
    headImg:setUrl(url)

    self:createKickBtn(index, playerData)
end

function GameWinLostLayer:createKickBtn(index, playerData)
    if not playerData then
        return
    end
    local headFrame = self["_playerHead" .. index]

    if playerData:getNumberID() == XH.playerData:getNumberID() then
        return
    end
    local imgUrl = "Btn_game_vip_tc.png"
    local btnKick = ccui.Button:create(imgUrl, imgUrl, imgUrl, ccui.TextureResType.plistType)
    btnKick:setPosition(cc.p(headFrame:getPositionX(), headFrame:getPositionY() - 80))
    btnKick:addClickEventListener(function (event)
        CF.game:getModule("Kick"):sendVipKick(playerData:getBrandID(), playerData:getNumberID(), playerData:getNickName())
        local m = XH.lobby:getModule("Sxvip.ThrowData")
        m:setBeforeGameStartStr("对局后")
        m:throwData(XH.NewThrowDataDefine.hy24090621, {block_item_id="对局后", game_id = string.format("%d_%d", XH.areaData:getAreaID(), CF.roomData:getGameID())})
    end)
    btnKick:setPressedActionEnabled(true)
    local parent = headFrame:getParent()
    parent:addChild(btnKick, 1)
end

function GameWinLostLayer:updateHeadImg(index, playerData)
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

function GameWinLostLayer:onGameStart(event)
    self:setSelfVisible(false)
end

function GameWinLostLayer:onGoOnClicked(send, eventType)
    self._uContinueTime:stopAllActions()
    self._uContinueTime:setVisible(false)
    self:setSelfVisible(false)
    self:recordWinLostData()
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

function GameWinLostLayer:updateContinueBtnState()
    if self._goOnBtn then
        self._goOnBtn:setEnabled(not CF.roomData:isPlayBack())
    end
end

function GameWinLostLayer:updateLastWinLostBtn()
    local isShowBigWinLost = self:isShowBigWinLost()
    if self._goOnBtn and self._checkBillBtn then 
        self._goOnBtn:setVisible(not isShowBigWinLost)
        self._checkBillBtn:setVisible(isShowBigWinLost)
    end
    -- 退出旁观按钮显隐
    if self._exitWatchBtn then
        if CF.roomData:getIsSeer() then
            self._exitWatchBtn:setVisible(not isShowBigWinLost)
        end
    end
end

function GameWinLostLayer:getWinSeat(orderType)
    local winOrder = {}
    for i = 1, #orderType do
        winOrder[#winOrder + 1] = self:findOrderSeat(orderType[i])
    end
    return winOrder
end

function GameWinLostLayer:findOrderSeat(order)
    for i = 0, #self._sWinOrder do
        if self._sWinOrder[i] == order then
            return i
        end
    end
    return nil
end

function GameWinLostLayer:updateWinMut()
    local lobbyID = CF.areaData:getLobbyID()
    if self._chaiXiangName then
        self._chaiXiangName:setString(lobbyID == CF.LOBBY_ID.WENZHOU and "拆相补偿：" or "拆线补分：")
    end
    local scaixiang = clone(self._sCaiXiang)
    if self._iCaiXiang then
        self._xiangFanText:setVisible(false)
        self._xiangFanName:setVisible(false)
        self._chaiXiangText:setVisible(true)
        self._chaiXiangName:setVisible(true)
        local seat = CF.roomData:getSelfSeat()
        local nSeat = (seat + 2) % 4
        if scaixiang[seat] ~= nil and scaixiang[nSeat] ~= nil then
            local caixiang = scaixiang[seat] - scaixiang[nSeat]
            if caixiang > 0 then
                self._chaiXiangText:setString("+" .. caixiang)
            else
                self._chaiXiangText:setString(caixiang)
            end
        else
            self._chaiXiangText:setVisible(false)
        end
    else
        self._xiangFanText:setVisible(true)
        self._xiangFanName:setVisible(true)
        self._chaiXiangText:setVisible(false)
        self._chaiXiangName:setVisible(false)
        if self._sWinMut >= KW_NUM_MIN_XIANGFAN then
            self._xiangFanText:setString(self._sWinMut)
        else
            self._xiangFanText:setString(0)
        end
    end

    local gameType = CF.game:getModule("GameLayer"):getGameData():getGameType()
    if gameType == CF.GameDefine.ENUM_GAME_TYPE.KW_NUM_GAME_TYPE_HUOPING_CHANGSHAN
        or gameType == CF.GameDefine.ENUM_GAME_TYPE.KW_NUM_GAME_TYPE_HUOPING_KAIHUA
        or gameType == CF.GameDefine.ENUM_GAME_TYPE.KW_NUM_GAME_TYPE_KAIHUA
        or gameType == CF.GameDefine.ENUM_GAME_TYPE.KW_NUM_GAME_TYPE_HANGZHOU then
        self._xiangFanText:setVisible(false)
        self._xiangFanName:setVisible(false)
    elseif gameType == CF.GameDefine.ENUM_GAME_TYPE.KW_NUM_GAME_TYPE_HANGZMAQUAN then
        self._xiangFanText:setVisible(false)
        self._xiangFanName:setVisible(false)
        self._chaiXiangText:setVisible(false)
        self._chaiXiangName:setVisible(false)
    end
end

function GameWinLostLayer:updateEndType()
    for _, type in pairs(CF.GameDefine.ENUM_WINLOST_ENDTYPE) do
        if self._sEndType == type then
            if self._armaturePanel then
                self._armaturePanel:removeAllChildren()
                AnimationManager.playWinLostJsonArmature(self._armaturePanel, self._sEndType)
            end
            local bShowEnd = true
            if self._sEndType == CF.GameDefine.ENUM_WINLOST_ENDTYPE.KW_ENDTYPE_TAOPAO or self._sEndType == CF.GameDefine.ENUM_WINLOST_ENDTYPE.KW_ENDTYPE_CHAODI then
                bShowEnd = false
            end
            self._endPanel:setVisible(bShowEnd)
            self._breakPanel:setVisible(not bShowEnd)
            break
        end
    end
end

function GameWinLostLayer:updatePlayerScore()
    for seat = 0, #self._tScore do
        local playerScore = self._tScore[seat] or 0
        local localSeat = CF.roomData:seatToLocal(seat)
        local scoreText = self["_playerScoreText" .. localSeat]
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
            -- CF.getLobbyModule("YGiftBankruptcy"):reqBuyDefeatGift(playerScore, CF.roomData:getGameID())
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
                CF.getLobbyModule("YGiftBankruptcy"):showBuyBankuptcyGift(CF.roomData:getGameID(), winLostWithServicePay, CF.roomData:is50())--hjq todo
            end, 1)
        end
    end
    local isGold = CF.roomData:isGoldRoom()
    if self._tScore[CF.roomData:getSelfSeat()] and isGold then
        CF.getLobbyModule("ToponAct"):reqGoldActInfo(self._tScore[CF.roomData:getSelfSeat()] >= 0)
    end
    if isGold then
        self._hasH5GameWidget = true
        CF.getLobbyModule("H5GameWidget"):setGameData(CF.roomData:getRoomID(), CF.gameSub:getGameNameByGameId(CF.roomData:getGameID()),"结束","BMC002")
        CF.getLobbyModule("H5GameWidget"):addH5GameWidget("game_end",CF.roomData._gameID)
    end
end

function GameWinLostLayer:setEscapeSeat(seat)
    if self._sEndType == CF.GameDefine.ENUM_WINLOST_ENDTYPE.KW_ENDTYPE_TAOPAO then
        local nameStr = self._playerName[seat] or ""
        self._breakText:setString(nameStr .. "逃跑")
        self._breakText:setVisible(true)
    end
end

function GameWinLostLayer:setChaoDiSeat(seat)
    if self._sEndType == CF.GameDefine.ENUM_WINLOST_ENDTYPE.KW_ENDTYPE_CHAODI then
        local nameStr = self._playerName[seat] or ""
        self._breakText:setString(nameStr .. "抄底")
        self._breakText:setVisible(true)
    end
end

function GameWinLostLayer:updateWinOrder()
    local winOrder

    if self._sEndType == CF.GameDefine.ENUM_WINLOST_ENDTYPE.KW_ENDTYPE_PINGKOU then
        winOrder = self:getWinSeat(ENUM_WIN_ORDER_TYPE.KW_ENDTYPE_PINGKOU)
    elseif self._sEndType == CF.GameDefine.ENUM_WINLOST_ENDTYPE.KW_ENDTYPE_DANKOU then
        winOrder = self:getWinSeat(ENUM_WIN_ORDER_TYPE.KW_ENDTYPE_DANKOU)
    elseif self._sEndType == CF.GameDefine.ENUM_WINLOST_ENDTYPE.KW_ENDTYPE_SHUANGKOU then
        winOrder = self:getWinSeat(ENUM_WIN_ORDER_TYPE.KW_ENDTYPE_SHUANGKOU)
    else
        return
    end
    if self._iCaiXiang then
        local seat = CF.roomData:getSelfSeat()
        local nseat = (seat + 2) % 4
        for i = 1, 2 do
            local tempSeat = seat
            if i == 2 then
                tempSeat = nseat
            end
            self["_winPlayerName" .. i]:setString(self._playerName[tempSeat])
            self["_winPlayerName" .. i]:setVisible(true)
        end
    else
        for i = 1, #winOrder do
            local seat = winOrder[i]
            self["_winPlayerName" .. i]:setString(self._playerName[seat])
            self["_winPlayerName" .. i]:setVisible(true)
        end
    end
end

function GameWinLostLayer:onTimeClose()
    local isLastCoutn = CF.roomData:getPlayCount() == CF.roomData:getMaxPlayCount()
    self._uContinueTime:setVisible(isLastCoutn)
    self._curTime = 0
    if isLastCoutn then
        self._curTime = 3
    elseif CF.roomData:getAutoContinueTime() and CF.roomData:getAutoContinueTime() > 0 then
		self._curTime = CF.roomData:getAutoContinueTime()
        self._uContinueTime:setVisible(true)
    else
        return
    end
    if CF.game:getModule("GameLayer")._nDelayPhaseTime then
        self._curTime = self._curTime + CF.game:getModule("GameLayer")._nDelayPhaseTime
        CF.game:getModule("GameLayer")._nDelayPhaseTime = 0
    end
    if self._curTime ~= 0 then
        self._uContinueTime:stopAllActions()
        self._uContinueTime:setString(self._curTime .. "s")
        CF.UITool.createRepeateAction(
            self._uContinueTime,
            1,
            function()
                self._curTime = self._curTime - 1
                if self._curTime >= 0 then
                    self._uContinueTime:setString(self._curTime .. "s")
                else
                    if not CF or not CF.roomData then
                        return
                    end
                    self._uContinueTime:stopAllActions()
                    if not CF.roomData:isGoldRoom() then
                        self:onGoOnClicked(nil, ccui.TouchEventType.ended)
                    end
                end
            end
        )
    end
end

function GameWinLostLayer:isShowBigWinLost()
    if CF.roomData and CF.roomData:isGoldRoom() then
        return false
    end
    local isShowBigWinLost = not (CF.roomData:getPlayCount() < CF.roomData:getMaxPlayCount())
    return isShowBigWinLost or CF.roomData:getIsGameOver()
end

-- -500 0 500
-- -300 300
-- 0
function GameWinLostLayer:initShuffle()
    self._shuffleBtn:setVisible(false)
    self._shuffleQuanBtn:setVisible(false)
    self._shuffleGoldBtn:setVisible(false)
    self._costInfo = {propid=CF.gameSub:getShufflePropQuanID(), costPropid=CF.gameSub:getShufflePropQuanID(), cnt=1}
    --显示洗牌按钮
    if CF.game:getModule("GameLayer"):needShowShuffleButton() then
        self._nextBtn:setPositionX(300)
        self._goOnBtn:setPositionX(300)
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
            --洗牌券的道具id
            local propId = CF.gameSub:getShufflePropQuanID()
            local shuffleInfo = CF.game:getModule("PropUse"):getShufflePropInfo(propId)
            local shuffleQuanCount = CF.game:getModule("PropUse"):getPropCnt(propId)
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
            XH.lobby:getModule("PropEventTracker"):track(XH.NewThrowDataDefine.dj24091901, { 
                costInfo = self._costInfo
            })
        end
    else
        self._nextBtn:setPositionX(0)
        self._goOnBtn:setPositionX(0)
        self._shuffleBtn:setVisible(false)
        self._shuffleGoldBtn:setVisible(false)
    end
    -- 判断切牌按钮重新显示位置,有切牌必有洗牌
    if self._btnCutCard:isVisible() or self._btnCardQuan:isVisible() then
        self._btnCutCard:setPositionX(0)
        self._btnCardQuan:setPositionX(0)
        self._nextBtn:setPositionX(500)
        self._goOnBtn:setPositionX(500)
        self._shuffleBtn:setPositionX(-500)
        self._shuffleQuanBtn:setPositionX(-500)
    end
end

function GameWinLostLayer:initDiscountNode()
    local modu = CF.game:getModule("Shuffle4")
    if modu then
        local size = self._shuffleBtn:getContentSize()
        self.m_shuffleDisNode = modu:getDiscountNode(self._shuffleBtn, size.width / 2, size.height - 10)
		if CF.game:getModule("Shuffle4"):isFree() then
			self.m_shuffleDisNode:setVisible(true)
			self.m_shuffleDisNode:getChildByName("_KW_DISCOUNT_TXT"):setVisible(false)
			self.m_shuffleDisNode:getChildByName("bg"):setVisible(false)
		end
    end
end

function GameWinLostLayer:getSelfResultScore()
    local msgData = CF.game:getModule("GameLayer")._gameData:getWinLostData()
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
    -- self:setSelfVisible(false)
    -- CF.throwDataManager:recordButtonClick(CF.ThrowDataDefine.ButtonEnumTable.BOX_ROOM_SHUFFLE,{ShuffleType = "房卡洗牌",SYType = self:recordSYtype()})
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

--------------------------------------------- 金币场 ---------------------------------------------

local currentContinueTime = 0
function GameWinLostLayer:updateContinueUI(continueTime)
    if continueTime and continueTime > 0 then
        self._uNextTime:stopAllActions()

        self._uNextTime:setString(continueTime .. "s")
        self._uNextTime:setVisible(true)

        currentContinueTime = continueTime
        CF.UITool.createRepeateAction(
            self._uNextTime,
            1,
            function()
                currentContinueTime = currentContinueTime - 1
                if currentContinueTime >= 0 then
                    self._uNextTime:setString(currentContinueTime .. "s")
                else
                    self._uNextTime:stopAllActions()

                    -- 模拟点击
                    if CF.roomData and not CF.roomData:isGoldRoom() then
                        self:setVisible(false)
                        CF.game:getModule("CenterBtns"):onStartGameEvent()
                    end
                end
            end
        )
    else
        self._uNextTime:setVisible(false)
    end
end

function GameWinLostLayer:onShuffleGoldClicked(send, eventType)
    if CF.roomData:is50() then
        CF.game:getModule("PropUse50"):reqShuffleCharge()
    else
        CF.game:getModule("PropUse"):reqShuffleCharge()
    end
    CF.NewThrowDataManager:throwData(CF.NewThrowDataDefine.SHUFFLE_CARDS_GOLD)
    self:setSelfVisible(false)
    self._reportData ={sucID = "dj24080805", costInfo=self._costInfo, score = self:getSelfResultScore()}
    XH.lobby:getModule("PropEventTracker"):track(XH.NewThrowDataDefine.dj24080804, self._reportData)
    -- CF.throwDataManager:recordButtonClick(CF.ThrowDataDefine.ButtonEnumTable.BOX_ROOM_SHUFFLE,{ShuffleType = "金币洗牌",SYType = self:recordSYtype()})
end

--续桌
function GameWinLostLayer:onGameContinue(event)
    -- local msg = event.msg
    -- if msg.bSuccess then
    --     -- self:close()
    -- end
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

--移除窗口
function GameWinLostLayer:close()
    CF.getLobbyModule("ToponAct"):closeToponGoldDrawView()
    GameWinLostLayer.super.close(self)
    self:recordData()
end

function GameWinLostLayer:setSelfVisible(bShow)
    if CF.roomData and CF.roomData:isGoldRoom() and not bShow then
        CF.getLobbyModule("ToponAct"):closeToponGoldDrawView()
        CF.getLobbyModule("H5GameWidget"):close5GameWidget("game_end",CF.roomData._gameID)
        CF.getLobbyModule("H5GameWidget"):close5GameWidget("game_begin",CF.roomData._gameID)
        CF.game:getModule("ChangeLevel"):hide()
    end
    self:setVisible(bShow)
end

function GameWinLostLayer:recordData()
    local data = {}
    data.Page_name = "GameStart"
    data.Start_time = self._startShowTime or 0
    data.End_time = os.time()
    data.staytime = data.End_time - data.Start_time
    CF.throwDataManager:throwData(CF.ThrowDataDefine.BOX_GAME_END_TIME,data)
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

 function GameWinLostLayer:showKickOutClock(time)
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

function GameWinLostLayer:initCutCard()
    self._btnCutCard:setVisible(false)
    self._btnCardQuan:setVisible(false)
    self._cutCostInfo = {}
    if CF.roomData:isGoldRoom() or not CF.game:getModule("GameLayer"):needShowShuffleButton(true) then
        return
    end
    local cutCardsDefine = CF.gameRequire("Modules.PropUse.CutCardsDefine") 
    local gameID = CF.roomData:getGameID()
    if CF.roomData:isOpenCutCards() then
        local shuffleInfo = CF.game:getModule("PropUse"):getShufflePropInfo(cutCardsDefine.QuanId, 2)
        if shuffleInfo.propID == CF.areaData:getPropRoomCardID() or shuffleInfo.propID == CF.areaData:getPropBindRoomCardID() then
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

function GameWinLostLayer:onClock(event) 
    local time = event.msgData.time 
    self:showKickOutClock(time)
end 


function GameWinLostLayer:onExitWatch(send, eventType)
	if eventType ~= ccui.TouchEventType.ended then
		return
	end
    CF.game:getModule("WatchGame"):onExitWatch()
	CF.game:leaveGame()
end

-- 刷新底分和倍数
function GameWinLostLayer:onUpdateDi()
    if not CF.roomData:isGoldRoom() then
        return
    end
    self._KW_DI:setVisible(true)
    local di = CF.roomData:getBaseScore()
    self._KW_DI:setString("底分:" .. di)
end

-- 刷新玩家贡献
function GameWinLostLayer:onUpdatePlayerGong()
    if not CF.roomData:isGoldRoom() then
        return
    end
    if CF.game:getModule("GameLayer"):getGameData():getGameType() == CF.GameDefine.ENUM_GAME_TYPE.KW_NUM_GAME_TYPE_HANGZMAQUAN then 
        return
    end 
    if self._sGong and #self._sGong > 0 then
        for seat = 0, #self._sGong do
            local playerScore = self._sGong[seat] or 0
            local localSeat = CF.roomData:seatToLocal(seat)
            local scoreText = self["_KW_TEXT_PLAYER_GONG_" .. localSeat]
            if scoreText then
                scoreText:setString("贡献：" .. playerScore)
                scoreText:setVisible(true)
            end
        end
    end
end

-- 增加头像/分数水印
function GameWinLostLayer:showWatermark()
    local WatermarkModule = CF.game:getModule("Watermark")
    if not WatermarkModule then
        return
    end
    for i = 1, 4 do
        local scoreText = self["_playerScoreText" .. i]
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

-- 设置分数显示节点
function GameWinLostLayer:showScoreTip()
    if CF.roomData:isGoldRoom() then
        return
    end
    local lobbyID = CF.areaData:getLobbyID()
    if lobbyID == CF.LOBBY_ID.WENZHOU then
        return
    end
    if self._iNoGong or self._iCaiXiang then
        for seat = 0, 3 do
            local showText = ""
            local localSeat = CF.roomData:seatToLocal(seat)
            local nSeat = (seat + 2) % 4
            if self._iNoGong then
                showText = "未打出的炸弹：" .. (self._sNoGong[seat] or 0)
            end
            if self._iCaiXiang then
                if self._sCaiXiang[seat] ~= nil and self._sCaiXiang[nSeat] ~= nil then
                    if self._iNoGong then
                        showText = showText .. "\n"
                    end
                    local caixiang = self._sCaiXiang[seat] - self._sCaiXiang[nSeat]
                    if caixiang > 0 then
                        caixiang = "+" .. caixiang
                    end
                    showText = showText .. "拆线补分：" .. caixiang
                end
            end
            local score = self["_playerScoreText" .. localSeat]
            local scoreTip = self["_KW_BTN_SCORETIP_" .. localSeat]
            if score and scoreTip then
                scoreTip:setPositionX(score:getPositionX() + score:getContentSize().width / 2 + 20)
                scoreTip:setVisible(true)
                self["_KW_TEXT_SCORETIP_" .. localSeat]:setString(showText)
            end
        end
    end
end

function GameWinLostLayer:onScoreTipClicked(send)
    local childs = send:getChildren()
    if childs[1] then
        childs[1]:setVisible(not childs[1]:isVisible())
    end
    CF.NewThrowDataManager:throwData(CF.NewThrowDataDefine.zyt2025101002, {page_item_id = send:getName()})
end

return GameWinLostLayer
v�