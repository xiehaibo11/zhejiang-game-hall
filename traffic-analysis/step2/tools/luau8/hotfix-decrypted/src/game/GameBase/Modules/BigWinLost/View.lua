local RemoteImage = CF.RemoteImage

local BigWinLostUI = CF.gameClass("BigWinLostUI", CF.ViewBase)
local LuckyTaskDefine = require("lobby.Modules.LuckyTask.Define")

BigWinLostUI.KW_TEXT_TOTAL_SCORE = "KW_TEXT_TOTAL_SCORE"

local KW_TEXT_DES = "KW_TEXT_DES"
local KW_TEXT_SCORE = "KW_TEXT_SCORE"
local KW_PANEL_HEAD_POS = "KW_PANEL_HEAD_POS"
local KW_IMG_HOST = "KW_IMG_HOST"
local KW_IMG_BIG_WINNER = "KW_IMG_BIG_WINNER"
local KW_TEXT_NICK_NAME = "KW_TEXT_NICK_NAME"
local KW_TEXT_NUM_ID = "KW_TEXT_NUM_ID"
local KW_LISTVIEW_SCORES = "KW_LISTVIEW_SCORES"

local KW_DEFAULT_HEAD_IMG_NAME = "KW_DEFAULT_HEAD_IMG_NAME"
local KW_DEFAULT_STRING = "------"

function BigWinLostUI:getCSBPath()
    return "cocosStudio/Common/CSB/GameBase/BigWinLost.csb"
end

function BigWinLostUI:getBindingInfo()
    return {
        ["_KW_PLAYER_SCORE_MOD"] = {varName = "_playerScoreMod"},
        ["_KW_UI_END_PANEL"] = {varName = "_endPanel"},
        ["_KW_SCORE_MOD"] = {varName = "_scoreMod"},
        ["_KW_SCORE_MOD_1"] = {varName = "_scoreMod1"},
        ["_KW_TEXT_ROOM_ID"] = {varName = "_roomID"},
        ["_KW_TEXT_TIME"] = {varName = "_timeStr"},
        ["_KW_TEXT_PLAY_COUNT"] = {varName = "_playCount"},
        ["_KW_BTN_BACK"] = {varName = "_btnBack", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onBtnBack"},
        ["_KW_BTN_BACK_LOBBY"] = {varName = "_btnBackLobby", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onBtnBack"},
        ["_KW_BTN_SHARE"] = {varName = "_btnShare", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onBtnShare"},
        ["_KW_BTN_CONTINUE"] = {varName = "_btnContinue", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onBtnContinue"},
        ["_KW_PANAEL_BG"] = {varName = "_bgNode"},
        ["_KW_PANAEL_SCORE_POS_1"] = {varName = "_pos1"},
        ["_KW_CONTINE_TIME"] = {varName = "_uContinueTime"},
        ["_KW_CONTINE_TIME_BG"] = {varName = "_uContinueTimeBg"},
        ["_KW_IMG_FISH_ICON"] = {varName = "_btnFishIcon", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onBtnFishIcon"},
        ["_KW_BTN_SHARE_PIC"] = {varName = "_KW_BTN_SHARE_PIC", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onTouchSharePic"},

        ["_lt_panel"] = {varName = "_btnLuckyTask", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onBtnLuckyTask"},
        -- ["_KW_BTN_LUCKYTASK"] = {varName = "_luckyTaskProgress"},
        ["_lt_txt"] = {varName = "_luckyTaskProcessText"},
        ["_lt_progress"] = {varName = "_ltProgress"},
        ["_lt_ani"] = {varName = "_ltAni"},
        ["_KW_BTN_FEEDBACK"] = {varName = "_KW_BTN_FEEDBACK", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onBtnFeedBack"},
    }
end

function BigWinLostUI:getProxyEvents()
    return {
        {module = CF.game:getModule("Continue"), eventKeyName = "EVENT_GAME_CONTINUE", callBack = "onGameContinue"},
        {module = CF.game:getModule("Continue"), eventKeyName = "EVENT_UPDATE_BIG_WIN_LOST", callBack = "onUpdateUI"},
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_GAME_START", callBack = "onGameStart"},
        {module = XH.lobby:getModule("LuckyTask"), eventKeyName = "EVENT_NUIUPDATELOBBYICONBUBBLETIP", callBack = "onEventLuckyTaskIconTip"},
        {module = XH.lobby:getModule("LuckyTask"), eventKeyName = "EVENT_NotifyLuckyClose", callBack = "onNotifyLuckyClose"},
    }
end

function BigWinLostUI:ctor(param)
    param = param or {}
    BigWinLostUI.super.ctor(self, param)
    self._param = param
    self._playerCnt = CF.roomData:getChairs()
    self._playersUI = {}
    self._selfSeat = CF.roomData:getSelfSeat()
    self:createChildren()
    CF.game:getModule("BigWinLost"):doAfterShowBigWinLost()
    if CF.roomData:getIsSeer() then
        CF.game:getModule("WatchGame"):onExitWatch()
    end
    self:showAutoAddCardNotify()
    self:initShareBtn()
    self:initLuckyTaskBtn()
    self:initFishIconAni()
    self:showWatermark()
end

function BigWinLostUI:initLuckyTaskBtn()
    if not self._btnLuckyTask then 
        return 
    end
    self._btnLuckyTask:setVisible(false)
    if CF.roomData:isPlayBack() or CF.roomData:getIsSeer() then
        return
    end
    if not XH.lobby:getModule("LuckyTask"):isHaveTask() then 
        return 
    end
    XH.viewManager:closeView("LuckyTaskView")
    local aniPath = "animation/Lobby/Base/zzb_dt_xyrw_rk/"
    local aniName = XH.lobby:getModule("LuckyTask"):isHaveAward() and "animation4" or "animation"
    local params = {path = aniPath, tex = "zzb_dt_xyrw_rk.json", ske = "zzb_dt_xyrw_rk.atlas", armatureName = aniName, scale = 1}
    local ani = display.playDargonBonesSpine(params)
    self._ltAni:addChild(ani)
    self._ani = ani

    local isUpdate = false
    local updateUI = function(isHaveDuiJuTask, taskInfo) 
        if tolua.isnull(self) then return end
        if not isHaveDuiJuTask then return end
        if not self._btnLuckyTask:isVisible() then
            XH.lobby:getModule("LuckyTask"):reportData("iconShow", CF.roomData:isBoxRoom() and CF.teaHouseManager:isInTeaHouse() and "比赛场战绩" or "包厢战绩")
        end
        self._btnLuckyTask:setVisible(isHaveDuiJuTask)

        local multiple = 1
        local str = taskInfo.progress / multiple .. "/" .. taskInfo.content[#taskInfo.content].target / multiple
        if taskInfo.jump.jump == "AC_JUMPTYPE_BY" and taskInfo.actType == "byyx" then
            multiple = 60
            str = math.ceil(taskInfo.progress / multiple).. "/" .. math.ceil(taskInfo.content[#taskInfo.content].target / multiple)
        end
        self._luckyTaskProcessText:setString(str)
        self._ltProgress:setPercent(100 * taskInfo.progress / taskInfo.content[#taskInfo.content].target)
        isUpdate = taskInfo[".isUpdate"]
    end
    
    --延时一秒请求，防止进度未更新
    self:runAction(cc.Sequence:create(cc.DelayTime:create(1), cc.CallFunc:create(function() 
        XH.lobby:getModule("LuckyTask"):reqTaskList(false)
        XH.lobby:getModule("LuckyTask"):reqIsHaveDuiJuTask(updateUI)
    end)))
    self:runAction(cc.Sequence:create(cc.DelayTime:create(3), cc.CallFunc:create(function() 
        if not isUpdate then
            print('delay req 3')
            XH.lobby:getModule("LuckyTask"):reqTaskList(false)
            XH.lobby:getModule("LuckyTask"):reqIsHaveDuiJuTask(updateUI)
        end
    end)))
end

function BigWinLostUI:onEventLuckyTaskIconTip()
    if not self._ani then return end
    local aniName = XH.lobby:getModule("LuckyTask"):isHaveAward() and "animation4" or "animation"
    self._ani:setAnimation(0, aniName, true)
end

function BigWinLostUI:onNotifyLuckyClose()
    if not self._btnLuckyTask then 
        return 
    end
    self._btnLuckyTask:setVisible(false)
    XH.TipTool.showToast('本次活动已完成或已下线')
end

function BigWinLostUI:initFishIconAni()
    if not self._btnFishIcon then
        return
    end
    local LobbyConfig = require("lobby.Modules.Lobby.Config")
    local iconConf = LobbyConfig.MenuIconConfig[LobbyConfig.ICON_ID.REN_REN_BU_YU]
    local aniInfo = iconConf and iconConf.SpineInfo
    if not aniInfo then
        return
    end
    self._btnFishIcon:loadTexture("cocosStudio/hall/Image/touming.png", ccui.TextureResType.localType)
    local image3 = self._btnFishIcon:getChildByName("Image_3")
    if image3 then
        image3:setVisible(false)
    end
    local size = self._btnFishIcon:getContentSize()
    local createScale = iconConf.IconScaleSpine or 0.6
    local nodeScale = iconConf.IconAniScale
    local anchor = cc.Node:create()
    anchor:setCascadeOpacityEnabled(true)
    anchor:setAnchorPoint(cc.p(0.5, 0.5))
    anchor:setPosition(cc.p(size.width / 2, size.height / 2 + 5))
    if nodeScale then
        anchor:setScale(nodeScale)
    end
    self._btnFishIcon:addChild(anchor)
    if aniInfo.RemoteKey and XH.RemoteSpineManager then
        local override = {
            scale = createScale,
        }
        local preset = XH.RemoteSpineManager:getRemoteAniPreset(aniInfo.RemoteKey)
        local fb = preset and preset.localFallback
        if fb then
            override.localFallback = {
                path = fb.path,
                fileName = fb.fileName,
                aniName = fb.aniName or aniInfo.ArmatureName or "animation",
                scale = createScale,
            }
        end
        XH.RemoteSpineManager:playRemoteAni(anchor, aniInfo.RemoteKey, override)
    else
        local params = {
            path = "",
            tex = aniInfo.JsonPath,
            ske = aniInfo.AtlasPath,
            armatureName = aniInfo.ArmatureName,
            scale = createScale,
        }
        local armature = display.playDargonBonesSpine(params)
        if armature then
            anchor:addChild(armature)
            armature:setAnchorPoint(cc.p(0.5, 0.5))
        end
    end
end

function BigWinLostUI:initShareBtn()
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

-- 保存截图
function BigWinLostUI:onTouchSharePic()
    CF.game:getModule("Share"):captureScreenLocal()
    local mode = "包厢"
	if CF.teaHouseManager:isInTeaHouse() then
		mode = "比赛场"
	end
	XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.lyn24082201, { block_item_id = "结束", block_label = mode })
end

--根据人数计算位置
function BigWinLostUI:calLayoutByPlayerCount(seat)
    local playerCount = self._playerCnt
    local itemSize = self._playerScoreMod:getContentSize()
    local displaySize = self._bgNode:getContentSize()
    local pos = seat - 1
    local posX = displaySize.width / 2
    if playerCount % 2 == 0 then
        posX = posX + ((pos + 0.5 - playerCount / 2) * itemSize.width)
    else
        posX = posX + ((pos - math.floor(playerCount / 2)) * itemSize.width)
    end
    return cc.p(posX, displaySize.height / 2)
end

function BigWinLostUI:createChildren()
    self:setRoomInfo(self._param)
    self:setPlayersInfo(self._param)
    self:initContinueUI()
    self:showShareBtn(true)
end

function BigWinLostUI:showShareBtn(bShow)
    self._btnShare:setVisible(bShow)
end

function BigWinLostUI:showContinueBtn(bShow)
    self._btnContinue:setVisible(bShow)
    self:updateBtnsPosition()
end

function BigWinLostUI:showContinueTime(bShow)
    self._uContinueTime:setVisible(bShow)
    self._uContinueTimeBg:setVisible(bShow)
end

function BigWinLostUI:initContinueUI()
    local continueTm = CF.roomData:getContinueTime()
    self:updateContinueUI(continueTm)
end

function BigWinLostUI:onUpdateUI(event)
    local canContinue = CF.roomData:isCanContinue()
    self:showContinueBtn(canContinue)
    self._uContinueTime:setVisible(canContinue)
    self._uContinueTimeBg:setVisible(canContinue)
    self:showContinueAni(canContinue)

    local isRemove = event.msg.remove or false
    if isRemove then
        self:close()
        return
    end
    if canContinue then
        local continueTm = CF.roomData:getContinueTime()
        self:updateContinueUI(continueTm)
    end
end

function BigWinLostUI:updateContinueUI(continueTime)
    if continueTime and continueTime > 0 then
        self._uContinueTime:stopAllActions()

        self._uContinueTime:setString(continueTime .. "s")
        self._uContinueTime:setVisible(continueTime > 0)
        self._uContinueTimeBg:setVisible(continueTime > 0)

        self._curTime = continueTime
        self:showContinueBtn(true)
        self:showContinueAni(true)
        CF.UITool.createRepeateAction(self._uContinueTime, 1,  function ()
            self._curTime = self._curTime - 1
            if self._curTime >= 0 then
                self._uContinueTime:setString(self._curTime .. "s")
            else
                self._btnContinue:setEnabled(false)
                self._uContinueTime:stopAllActions()
                self._uContinueTime:setVisible(false)
                self._uContinueTimeBg:setVisible(false)
                self:showContinueAni(false)
            end
        end)
    else
        self._uContinueTime:stopAllActions()
        self._uContinueTime:setVisible(false)
        self._uContinueTimeBg:setVisible(false) 
    end
end

function BigWinLostUI:initBigWinLostBtns()
    local btns = {
        self._btnBackLobby,
        self._btnShare,
        self._btnContinue,
    }
    return btns
end 

function BigWinLostUI:updateBtnsPosition()
    local btns = self:initBigWinLostBtns()
    local finlBtns = {}
    for _, v in ipairs(btns) do
        if v:isVisible() then
            table.insert(finlBtns, v)
        end
    end
    --按钮适配
    local btnNum = #finlBtns
    local whiteLen = display.width / (btnNum + 1)
    for i, v in ipairs(finlBtns) do
        v:setPositionX(whiteLen * i)
    end
end

--更新头像
function BigWinLostUI:updateImg(node, url)
    if not node then
        return
    end

    if url == "" then
        url = "http://thirdwx.qlogo.cn/mmopen/vi_32/RZWHFDljz1SW2Azl6kZyxic4ziaibicnUPo8dB3YiaGbhpyx3Tq34Vemk6KqexyJQJtAphjc9TELicPuRryc0UQ4DPmw/132"
    end

    local headImg = CF.UITool.seekNodeByName(node, KW_DEFAULT_HEAD_IMG_NAME)
    if headImg == nil then
        local size = node:getContentSize()
        headImg = RemoteImage.new()
        :setPosition(size.width / 2, size.height / 2)
        :ignoreContentAdaptWithSize(false)
        :setContentSize(size.width, size.height)
        :setName(KW_DEFAULT_HEAD_IMG_NAME)
        :addTo(node)
    end
    headImg:setUrl(url)
end

--设置房间信息
function BigWinLostUI:setRoomInfo(param)
    self._roomID:setString("房间号: " .. string.format("%06d", param.roomid or KW_DEFAULT_STRING))
    self._timeStr:setString(param.timeStr or "")
    self:setPlayCountStr(param)
end

function BigWinLostUI:setPlayCountStr(param)
    self._playCount:setString("局数:  " .. (param.playCount or 0) .. "/" .. (param.maxCount or 0))
end

function BigWinLostUI:getPlayerItem(pos)
    local playerNode = self._playersUI[pos]
    if playerNode == nil then
        playerNode = self._playerScoreMod:clone()
        playerNode:setPosition(self:calLayoutByPlayerCount(pos))
        :addTo(self._playerScoreMod:getParent())
        self._playersUI[pos] = playerNode
    end
    return playerNode
end

function BigWinLostUI:setPlayerDesc(node, scores, scoreDes)
    scores = scores or {}
    scoreDes = scoreDes or {}
    for count, score in ipairs(scores) do
        local tmpScoreNode = self._scoreMod:clone()
        tmpScoreNode:addTo(CF.UITool.seekNodeByName(node, KW_LISTVIEW_SCORES))

        local des = scoreDes[count] or ""
        local color = score < 0 and cc.c3b(3, 87, 146) or cc.c3b(215, 78, 24)
        local scoreStr = tostring(score)
        CF.UITool.setText(tmpScoreNode, KW_TEXT_DES, des)
        CF.UITool.setTextColor(tmpScoreNode, KW_TEXT_SCORE, color)
        CF.UITool.setText(tmpScoreNode, KW_TEXT_SCORE, scoreStr)
    end
end

function BigWinLostUI:setPlayerScoreStr(node, scoreDes)
    if not node then
        return
    end
    scoreDes = scoreDes or {}
    for count, _ in ipairs(scoreDes) do
        local tmpScoreNode = self._scoreMod1:clone()
        tmpScoreNode:addTo(CF.UITool.seekNodeByName(node, KW_LISTVIEW_SCORES))
        
        local des = scoreDes[count] or ""
        CF.UITool.setText(tmpScoreNode, KW_TEXT_DES, des)
    end
end

function BigWinLostUI:setPlayerTotalScore(seat, totalScore)
    local node = self._playersUI[seat]
    local totalScoreStr = totalScore < 0 and tostring(totalScore) or ("+" .. totalScore)
    local color = totalScore < 0 and cc.c3b(3, 87, 146) or cc.c3b(215, 78, 24)
    CF.UITool.setText(node, self.KW_TEXT_TOTAL_SCORE, totalScoreStr)
    CF.UITool.setTextColor(node, self.KW_TEXT_TOTAL_SCORE, color)
end

function BigWinLostUI:resetBigWinnerAll()
    for _, playerUI in pairs(self._playersUI) do
        CF.UITool.setVisible(playerUI, KW_IMG_BIG_WINNER, false)
    end
end

--设置冠军
function BigWinLostUI:setBigWinner(bigWinnerSeat, players)
    local players = players or {}
    local isVip = false
    for seat, player in pairs(players) do
        if bigWinnerSeat == seat + 1 then
            isVip = CF.game:getModule("GameBag"):getIsVipWithTag(player:getNumberID())
            break
        end
    end
    if bigWinnerSeat ~= nil and self._playersUI[bigWinnerSeat] then
        if isVip then
            -- vip动画
            local size = self._playersUI[bigWinnerSeat]:getContentSize()
            local lightNode = cc.Node:create()
            lightNode:setName("KW_VIP_SHOW_1")
            self._playersUI[bigWinnerSeat]:addChild(lightNode)
            lightNode:setPosition(cc.p(size.width / 2, size.height / 2))

            local lightdNode = cc.Node:create()
            lightdNode:setName("KW_VIP_SHOW_2")
            lightdNode:setLocalZOrder(-1)
            self._playersUI[bigWinnerSeat]:addChild(lightdNode)
            lightdNode:setPosition(cc.p(size.width / 2 - 5, size.height / 2 + 3))
        else
            CF.UITool.setVisible(self._playersUI[bigWinnerSeat], KW_IMG_BIG_WINNER, true)
        end
    end
end

function BigWinLostUI:playVipAni()
    self:updateShowShareWinView(true)
    XH.SysTool.performDelayOnce(function()
        if not self or tolua.isnull(self) then
            return
        end
		if not self._playersUI then
            return
        end
        for k, v in pairs(self._playersUI) do
            local vipNode1 = v:getChildByName("KW_VIP_SHOW_1")
            local vipNode2 = v:getChildByName("KW_VIP_SHOW_2")
            if vipNode1 and vipNode2 then
                local aniPath = "animation/GameCommon/vip/"
                local params = { path = aniPath, tex = "zzb_hy_js.json", ske = "zzb_hy_js.atlas", armatureName = "cx", scale = 1 }
                local lightNode = sp.SkeletonAnimation:create(params.path .. params.tex, params.path .. params.ske, 1)
                if lightNode then
                    vipNode1:addChild(lightNode)
                    lightNode:registerSpineEventHandler(function(event)
                        if event.type == 'complete' then
                            lightNode:setAnimation(0, "loop", true)
                        end
                    end, sp.EventType.ANIMATION_COMPLETE)
                    lightNode:setAnimation(0, "cx", false)
                end
                -- 光圈动画
                local paramsd = { path = aniPath, tex = "zzb_hy_js.json", ske = "zzb_hy_js.atlas", armatureName = "cx_d", scale = 1 }
                local lightdNode = sp.SkeletonAnimation:create(params.path .. params.tex, params.path .. params.ske, 1)
                if lightdNode then
                    vipNode2:addChild(lightdNode)
                    lightdNode:registerSpineEventHandler(function(event)
                        if event.type == 'complete' then
                            lightdNode:setAnimation(0, "loop_d", true)
                        end
                    end, sp.EventType.ANIMATION_COMPLETE)
                    lightdNode:setAnimation(0, "cx_d", false)
                end
            end
        end
	end, 2/30)
end

function BigWinLostUI:showSelf(isShowAni)
    if isShowAni ~= false then
        self:playVipAni()
    end
    local parent = display.getRunningScene()
    self:setName("BigWinLostUI")
    parent:addChild(self, CF.ZORDER.WINDOW)
    local data = {
        block_label = "人人捕鱼"
    }
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.lianyun2024040101, data)
    local changeCardModule = CF.game:getModule("ChangeCard")
    if changeCardModule then
        changeCardModule:clearChangeCard()
    end

    self:runAction(cc.Sequence:create(cc.DelayTime:create(2),cc.CallFunc:create(function()
        XH.lobby:getModule("Share"):reqLuckyBag(true)
    end)))
end

function BigWinLostUI:setCanContinue(state)
    -- self._btnContinue:setEnabled(state)
    self:showContinueBtn(state)
    self:showContinueAni(state)
end

--分享
function BigWinLostUI:onBtnShare(send, eventType)
    CF.game:getModule("Share"):startShare(CF.GameDefine.SHARE_SELECT.PIC, self._param)
    local data = self:throwData(self._param)
    CF.throwDataManager:recordButtonClick(CF.ThrowDataDefine.ButtonEnumTable.BOX_ROOM_BIG_WINLOST_SHARE,data)
end

--通过大结束玩家优胜值情况来判断胜负
function BigWinLostUI:throwData(info)
    local data = {}
    if info == nil then
        return
    end
    local Seatnum = {}      
    local totalScore = info.totalScore or {}
    local players = info.players or {}
    for i , v in pairs(totalScore) do
        if v > 0 then
            table.insert(Seatnum,i)
        end 
    end
    for _ ,v in pairs(Seatnum) do 
        if players[v]._nNumberID == CF.selfPlayerData:getNumberID() then 
            data.SYType = "Y"
        else
            data.SYType = "S"
        end
    end
    return data
end

--继续
function BigWinLostUI:onBtnContinue(send, eventType)
    -- CF.game:getModule("Continue"):gameEventContinueGame(true)
    -- local gameid = CF.roomData:getGameID()
    -- local bInTeaHouse
    -- if CF.teaHouseManager:isInTeaHouse() then
    --     bInTeaHouse = 1
    -- else
    --     bInTeaHouse = 0
    -- end
    -- CF.throwDataManager:recordButtonClick(CF.ThrowDataDefine.ButtonEnumTable.BOX_ROOM_BIG_WINLOST_CONTINUE)
    -- 抛送续桌数据到数数
    local gameID = CF.roomData:getGameID()
    local scenceName = CF.teaHouseManager:isInTeaHouse() and "比赛场" or "包厢"
    local data = {
        block_label = scenceName,
        item_id = string.format("%s_%d", CF.gameSub:getGameNameByGameId(gameID), gameID)
    }
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.zj24052701, data)
    
    if CF.roomData:isSupportNewContinue() then 
        CF.userDefault:setValue(CF.userDefault.KEY_ID.KW_CONTINUE_CLICK, 1)
    end
    if self:isNeedCloseAfterClickContinue() then
        self:close()
        CF.game:getModule("Continue"):gameEventContinueGame(true)
    else
        CF.game:getModule("Continue"):gameEventContinueGame(true)
    end
end

function BigWinLostUI:onBtnLuckyTask(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    local isMatch = CF.teaHouseManager:isInTeaHouse()
    XH.lobby:getModule("LuckyTask"):reportData("iconClick", isMatch and "比赛场战绩" or "包厢战绩")
    XH.viewManager:openView("LuckyTaskView", nil, isMatch and  LuckyTaskDefine.POP_FROM.MATCH_BILL or LuckyTaskDefine.POP_FROM.BOX_BILL)
end

function BigWinLostUI:onBtnFishIcon(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    local data = {
        block_label = "人人捕鱼"
    }
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.lianyun2024040102, data)
    if XH.lobby:getModule("RRBuYu"):isDownloading() then 
        XH.TipTool.showToast("正在加载中，请稍等...", 3)
        return
    end
    XH.TipTool.showLoading(2)
    if device.platform == "android" then
        XH.lobby:getModule("RRBuYu"):isDownloadCompleted(true)
        XH.lobby:getModule("Replugin"):postToSepperllitaPlugin(1)
    elseif device.platform == "ios" then
        XH.lobby:getModule("RRBuYu"):joinInRRBuyu()
    end
end


function BigWinLostUI:isNeedCloseAfterClickContinue()
    return true
end

--返回
function BigWinLostUI:onBtnBack(send, eventType)
    CF.game:getModule("Continue"):gameEventContinueGame(false)
    if not CF.teaHouseManager:isInTeaHouse() then
        XH.lobby:getModule("AutoPop"):onBackToLobby("bigwinlost")
    else
        XH.lobby:getModule("AutoPop"):onBackToLobby("bigwinlostMatch")
        XH.lobby:getModule("AutoPop"):whenBackLobbyCheckPop()
    end
    local data = self:throwData(self._param)
    CF.throwDataManager:recordButtonClick(CF.ThrowDataDefine.ButtonEnumTable.BOX_ROOM_BIG_WINLOST_BACK_LOBBY,data)
    self:close()
end

function BigWinLostUI:onGameContinue(event)
    local msg = event.msg
    if msg.bSuccess then
        self:close()
    end
end

function BigWinLostUI:showContinueAni(show)
    local lobbyID = CF.areaData:getLobbyID()
    local isSupportNewContinue = CF.roomData:isSupportNewContinue() 
    if isSupportNewContinue and CF.userDefault:getValue(CF.userDefault.KEY_ID.KW_CONTINUE_CLICK, 0) == 1 then
        return
    end
    if isSupportNewContinue or lobbyID == 900037 or lobbyID == 900038 or lobbyID == 900023 or lobbyID == 900008 then
        if self._guideAni then
            self._guideAni:setVisible(show)
            return
        end

        if not show then
            return
        end

        local GuideUILogic = CF.gameRequire("Modules.Guide.UILogic")
        self._guideAni = GuideUILogic.showGuideAni(self._btnContinue)
    end
end

function BigWinLostUI:updateHeadFrame(node, numid)
    local GameBagUILogic = CF.gameRequire("Modules.GameBag.UILogic")
    if CF.game:getModule("CaiYunProp"):isShowCaiYun(numid) then
        GameBagUILogic.showCaiShenHeadFrame(node, cc.size(20, 0), cc.size(80, 80))
        return
    end
    GameBagUILogic.showCaiShenHeadFrame(node, cc.size(20, 0), cc.size(80, 80), true)
    local headFrame = CF.roomData:getHeadFrameData(numid) or {}
    GameBagUILogic.showHeadFrame(node, headFrame.frame_url, cc.size(0, 5), cc.size(45, 45), headFrame.propid)
end

function BigWinLostUI:setPlayersInfo(param)
    if param == nil then
        return
    end

    local players = param.players or {}
    for seat, player in pairs(players) do
        self:setSinglePlayer(seat, player, param)
    end
    self:resetBigWinnerAll()
    if param.maxTotalScoreSeat then
        self:setBigWinner(param.maxTotalScoreSeat + 1, players)
    end
    if param.bigWinnerSeat then
        self:setBigWinner(param.bigWinnerSeat + 1, players)
    end
    if param.bigWinnerSeatList then
        for _, bigWinnerSeat in ipairs(param.bigWinnerSeatList) do
            self:setBigWinner(bigWinnerSeat + 1, players)
        end
    end
end

function BigWinLostUI:setSinglePlayer(seat, player, param)
    self:refreshSinglePlayerInfo(seat, player, param)
    self:refreshSinglePlayerBattleInfo(seat, param)
end

function BigWinLostUI:refreshSinglePlayerInfo(seat, player, param)
    local playerUi = self:getPlayerItem(seat + 1)
    CF.UITool.setText(playerUi, KW_TEXT_NICK_NAME, player:getNickName() or KW_DEFAULT_STRING)
    CF.UITool.setText(playerUi, KW_TEXT_NUM_ID, ("序号: " .. player:getNumberID() or KW_DEFAULT_STRING))
    CF.UITool.setVisible(playerUi, KW_IMG_HOST, seat == param.hostSeat)
    self:updateImg(CF.UITool.seekNodeByName(playerUi, KW_PANEL_HEAD_POS), player:getAvatarUrl())
    self:updateHeadFrame(CF.UITool.seekNodeByName(playerUi, KW_PANEL_HEAD_POS), player:getNumberID())
    local isShowCaiYun = CF.game:getModule("CaiYunProp"):isShowCaiYun(player:getNumberID())
    if isShowCaiYun then
        playerUi:setBackGroundImage("cocosStudio/Common/Image/caiyun_bigwinlost_bg.png", ccui.TextureResType.localType)
    else
        playerUi:setBackGroundImage("doublekou_result_total_item_bg.png", ccui.TextureResType.plistType)
    end

end

function BigWinLostUI:refreshSinglePlayerBattleInfo(seat, param)
end

function BigWinLostUI:showAutoAddCardNotify()
    local cardtype = CF.userDefault:getValue(CF.userDefault.KEY_ID.KW_DATA_AUTO_CARD_NOTIFY_TYPE, -1)
    if cardtype ~= -1 then
        if CF.TipTool.showAutoCardTip then
            CF.TipTool.showAutoCardTip(CF.SCENE_TAG.GAME, cardtype)
            CF.userDefault:setValue(CF.userDefault.KEY_ID.KW_DATA_AUTO_CARD_NOTIFY_TYPE, -1)
        end
    end
end

-- 续桌成功开局时，旁观玩家自动进入下一局
function BigWinLostUI:onGameStart(event)
    if not self or tolua.isnull(self) then
        return
    end
    self:close()
end

function BigWinLostUI:showWatermark()
    local WatermarkModule = CF.game:getModule("Watermark")
    if not WatermarkModule then 
        return 
    end
    for k, playerUI in pairs(self._playersUI) do
        if not playerUI then return end
        local headNode = CF.UITool.seekNodeByName(playerUI, "KW_PANEL_HEAD_POS")
        WatermarkModule:addWatermark(headNode, cc.p(150,40))
        local scoreNode = CF.UITool.seekNodeByName(playerUI, "KW_TEXT_TOTAL_SCORE")
        WatermarkModule:addWatermark(scoreNode, cc.p(100,60))
    end
    WatermarkModule:addWatermarkFullScene(self)
end

function BigWinLostUI:onBtnFeedBack()
    local gameNameList = XH.areaData:getAreaGameNameList()
    XH.viewManager:openView("FeedBackView", nil, gameNameList[CF.roomData:getGameID()])
end

function BigWinLostUI:updateShowShareWinView(bShowSelf)
    if bShowSelf then
        local module = CF.game:getModule("ShareWin")
        local selfScore = self:getSelfScore(self._param)
        module:updateShowShareWinViewBigWinlost(selfScore)
    end
end

function BigWinLostUI:getSelfScore(info)
    if info == nil then
        return 0
    end
    local Seatnum = {}      
    local totalScore = info.totalScore or {}
    local players = info.players or {}
    for k,v in pairs(players) do 
        if players[k]._nNumberID == CF.selfPlayerData:getNumberID() then 
            return totalScore[k]
        end
    end
    return 0
end

return BigWinLostUI
Du