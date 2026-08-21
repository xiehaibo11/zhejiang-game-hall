---------------------------------------------------------
--
-- Description: 游戏结束
-- Author: hejaifeng
-- Date: 2019-07-22
--
---------------------------------------------------------
local GameWinLostLayer = CF.gameClass("GameWinLostLayer", CF.ViewBase)
local KW_PATH_RESOUCE_FONT = "res/cocosStudio/Common/Font"
--字体
local KW_LOST_TEXT_FNT = "jiesuan_num3-export.fnt"
local KW_WIN_TEXT_FNT = "jiesuan_num2-export.fnt"
local Define = CF.gameRequire("Modules.ChangeCard.Define")

local KW_RESULT_ANI_JSONPATH = "res/animation/GameCommon/PokerGame/sk_js_ani/sk_js_ani_ex.ExportJson"

function GameWinLostLayer:getCSBPath()
    return "res/cocosStudio/HongShi/GameLayer/CSB/GameWinLost.csb"
end

function GameWinLostLayer:getBindingInfo()
    return {
        ["_KW_CONTINE_TIME_EX"] = {varName = "_KW_CONTINE_TIME_EX"},
        ["_KW_UI_END_PANEL"] = {varName = "_endPanel"},
        ["_KW_BTN_GO_ON@"] = {varName = "_goOnBtn", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onGoOnClicked"},
        ["_KW_BTN_NEXT@"] = {varName = "_nextBtn", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onGoOnClicked"},
        ["_KW_BTN_CHECK_BILL"] = {varName = "_checkBillBtn",type = CF.UI_TYPE.BUTTON, onTouchEnded = "onGoOnClicked"},
        ["_KW_TEXT_PLAYER_SCORE_"] = {varName = "_playerScoreText", beginIndex = 1, endIndex = 4},
        ["_KW_TEXT_PLAYER_NAME_"] = {varName = "_winPlayerName", beginIndex = 1, endIndex = 2},
        ["_KW_TEXT_XIANGFAN_NUM"] = {varName = "_xiangFanText"},
        ["_KW_TEXT_XIANGFAN"] = {varName = "_xiangFanName"},
        ["_KW_TEXT_CHAIXIANG_NUM"] = {varName = "_chaiXiangText"},
        ["_KW_TEXT_CHAIXIANG"] = {varName = "_chaiXiangName"},
        ["_KW_UI_BREAK_PANEL"] = {varName = "_breakPanel"},
        ["_KW_TEXT_BREAK"] = {varName = "_breakText"},
        ["_KW_PANEL_ARMATURE_RESULT"] = {varName = "_armaturePanel"},
        ["_KW_UI_ANI_PANEL"] = {varName = "_aniPanel"},
        ["_KW_UI_ANI_REPEAT_PANEL"] = {varName = "_aniRepeatPanel"},
        ["_KW_PANEL_BTNS"] = {varName = "_panelBtns"},
		["_KW_BTN_EXIT_WATCH"] = {varName = "_exitWatchBtn",type = CF.UI_TYPE.BUTTON, onTouchEnded = "onExitWatch"},	-- 退出观战
        ["_KW_PANEL_ICON"] = {varName = "_changeCardBtn", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onChangeCardClicked"}, --处理点击监听
        ["_KW_IMG_DIAMOND"] = {varName = "_imgDiamond"},
        ["_KW_IMG_ROOMCARD"] = {varName = "_imgRoomCard"},
        ["_KW_TEXT_COST"] = {varName = "_txtCost"},
        ["_KW_TEXT_COST_CARD"] = {varName = "_txtCostCard"}
    }
end

function GameWinLostLayer:getProxyEvents()
    return {
        {module = CF.game:getModule("ReadyTip"), eventKeyName = "EVENT_SHOW_FINGER", callBack = "showGuideFinger"},
        {module = CF.game:getModule("Share"), eventKeyName = "EVENT_CLOSE_CAPTURE_SCREEN_VIEW", callBack = "showGoldRoomBtn"},
        {module = CF.game:getModule("Share"), eventKeyName = "EVENT_SHARE_HIDE_UNUSE_BTNS", callBack = "hideGoldRoomBtn"},
        {module = CF.game:getModule("ChangeCard"), eventKeyName = "EVENT_BTN_VISIBLE", callBack = "updateBtnVisivble"},
    }
end

function GameWinLostLayer:ctor(param)
    param = param or {}
    GameWinLostLayer.super.ctor(self, param)
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
    local changeCardModule = CF.game:getModule("ChangeCard")
	if changeCardModule then
		changeCardModule:updateBtn()
	end
end

function GameWinLostLayer:onTimeClose()
    self._KW_CONTINE_TIME_EX:setVisible(false)
    if CF.roomData:isGoldRoom() then
        return
    end
    self._curTime = 0
	if CF.roomData:getAutoContinueTime() and CF.roomData:getAutoContinueTime() > 0 then
		self._curTime = CF.roomData:getAutoContinueTime()
		self._KW_CONTINE_TIME_EX:setVisible(true)
	end
	if self._curTime ~= 0 then
		self._KW_CONTINE_TIME_EX:stopAllActions()
		self._KW_CONTINE_TIME_EX:setString(self._curTime .. "s")
		CF.UITool.createRepeateAction(self._KW_CONTINE_TIME_EX, 1,  function ()
			self._curTime = self._curTime - 1
			if self._curTime >= 0 then
				self._KW_CONTINE_TIME_EX:setString(self._curTime .. "s")
			else
				self._KW_CONTINE_TIME_EX:stopAllActions()
				self:onGoOnClicked(nil, ccui.TouchEventType.ended)
			end
		end)
	end
end

function GameWinLostLayer:showGuideFinger()
    local pos = cc.p(self._goOnBtn:getContentSize().width,self._goOnBtn:getContentSize().height / 4 )
    CF.UITool.showFingerAni(self._goOnBtn,-1,pos)
end

function GameWinLostLayer:showSelf()
    local parent = display.getRunningScene()
    parent:addChild(self, 46)
    self._startShowTime = os.time()
end

function GameWinLostLayer:setWinLostData(winLostData)
    self._winLostData = winLostData
    self._bLastPlayCount = winLostData:getIsLastPlayCount()
    self._tScore = winLostData:getPlayerScore()
    self._playerName = winLostData:getPlayerName()
    self:updateContinueBtnState()
    self:updateWinMut()
    self:updatePlayerScore()
    self._goOnBtn:setVisible(true)
    self:updateLastWinLostBtn()
    self:showWatermark()
end

function GameWinLostLayer:onGoOnClicked(send, eventType)
    self:setVisible(false)
    if CF.roomData:getIsSeer() and CF.roomData:isDelayWatch() then
        CF.game:getModule("WatchGame"):changeToRealWatch()
        return
    end
    CF.game:getModule("CenterBtns"):onStartGameEvent()
    self:recordData()
end

function GameWinLostLayer:updateContinueBtnState()
    if self._goOnBtn then
        self._goOnBtn:setEnabled(not self._bLastPlayCount and not CF.roomData:isPlayBack())
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

function GameWinLostLayer:isShowBigWinLost()
    if CF.roomData:isGoldRoom() then
        return false
    end
    local isShowBigWinLost = not (CF.roomData:getPlayCount() < CF.roomData:getMaxPlayCount())
    return isShowBigWinLost or CF.roomData:getIsGameOver()
end

function GameWinLostLayer:updateWinMut()
    self._xiangFanText:setVisible(false)
    self._xiangFanName:setVisible(false)
    self._chaiXiangText:setVisible(false)
    self._chaiXiangName:setVisible(false) 
end 

function GameWinLostLayer:updatePlayerScore()
    for seat = 0 , #self._tScore do 
        local playerScore = self._tScore[seat] or 0
        local localSeat = CF.roomData:seatToLocal(seat)
        local scoreText = self["_playerScoreText"..localSeat]
        if scoreText then 
            if playerScore > 0 then 
                scoreText:setString("+" .. playerScore)
                scoreText:setFntFile(KW_PATH_RESOUCE_FONT .. "/" .. KW_WIN_TEXT_FNT)
            else 
                scoreText:setString(playerScore)
                scoreText:setFntFile(KW_PATH_RESOUCE_FONT .. "/" .. KW_LOST_TEXT_FNT)
            end
            if seat == CF.roomData:getSelfSeat() then
                if playerScore > 0 then
                    self:showRusultAni(2)
                elseif playerScore < 0 then
                    self:showRusultAni(3)
                end
            end
            scoreText:setVisible(true)
        end
        if seat == CF.roomData:getSelfSeat() then
            CF.game:getModule("Share"):setGoldScore(playerScore)
        end
    end
end 

function GameWinLostLayer:showRusultAni(sEndType)
    if self._aniPanel then
        self._aniPanel:removeAllChildren()
        local resultAni = nil
        if sEndType == 3 then
            resultAni = "js_sb_chuxian"
        elseif sEndType == 2 then
            resultAni = "js_sl_chuxian"
        elseif sEndType == 1 then
            resultAni = "js_js_chuxian"
        end
        if resultAni == nil then
            return 
        end
        CF.UITool.playJsonAnimationByName(self._aniPanel,"sk_js_ani_ex",KW_RESULT_ANI_JSONPATH,-1, resultAni, nil, nil, function()
            self:showRepeatAni(sEndType)
        end)
    end
end

function GameWinLostLayer:showRepeatAni(sEndType)
    if self._aniRepeatPanel then
        self._aniRepeatPanel:removeAllChildren()
        local resultAni = nil
        if sEndType == 3 then
            resultAni = "js_sb_xunhuan"
        elseif sEndType == 2 then
            resultAni = "js_sl_xunhuan"
        elseif sEndType == 1 then
            resultAni = "js_js_xunhuan"
        end
        if resultAni == nil then
            return 
        end
        CF.UITool.playJsonAnimationByName(self._aniRepeatPanel,"sk_js_ani_ex",KW_RESULT_ANI_JSONPATH,1, resultAni)
    end
end

function GameWinLostLayer:recordData()
    local data = {}
    data.Page_name = "GameStart"
    data.Start_time = self._startShowTime or 0
    data.End_time = os.time()
    data.staytime = data.End_time - data.Start_time
    data.gamename = CF.gameSub:getGameNameByGameId(CF.roomData:getGameID())
    data.sytype = self:recordSYtype()
    CF.throwDataManager:throwData(CF.ThrowDataDefine.BOX_GAME_END_TIME,data)
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

function GameWinLostLayer:hideGoldRoomBtn()
    self._lastShowBtns = CF.game:getModule("Share"):setShareHideIcons(self)
end

function GameWinLostLayer:showGoldRoomBtn()
    CF.game:getModule("Share"):setShareShowIcons(self, self._lastShowBtns)
end

function GameWinLostLayer:onExitWatch(send, eventType)
	if eventType ~= ccui.TouchEventType.ended then
		return
	end
    CF.game:getModule("WatchGame"):onExitWatch()
	CF.game:leaveGame()
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

return GameWinLostLayer
