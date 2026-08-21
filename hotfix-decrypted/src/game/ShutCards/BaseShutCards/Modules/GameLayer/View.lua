local GameLayer = CF.gameClass("GameLayer", CF.ViewBase)
local CardLogic = CF.gameRequire("Modules.GameLayer.CardLogic")
local SmartSelectCards = CF.gameRequire("Modules.GameLayer.SmartSelectCards")
local MyCardsType = CF.gameRequire("Modules.GameLayer.MyCardsType")
local CardLayer = CF.gameRequire("Modules.GameLayer.GameCardLayer")
local SpecfCardLayer = CF.gameRequire("Modules.GameLayer.GameSpecfCardLayer")
local GameWinLostLayer = CF.gameRequire("Modules.WinLost.View")
local CardEnum = CF.gameRequire("Define.CardEnum")
local AnimationManager = CF.gameRequire("Manager.AnimationManager")

function GameLayer:ctor(param)
    param = param or {}
    GameLayer.super.ctor(self, param)
    self:createChildren()
    self:initDatas()
    self._touchStartPos = nil
    self._isCancel = false
    self._enterGameViewTime = os.time()
end

function GameLayer:getCSBPath()
    return "res/cocosStudio/ShutCards/GameLayer/CSB/Layer.csb"
end

function GameLayer:getBindingInfo()
    return {
        ["_KW_PANEL_CARDLAYER_POS"] = {varName = "_cardLayerPanelPos"},
        ["_KW_PANEL_WINLOSTLAYER_POS"] = {varName = "_winLostLayerPanelPos"},
        --显示提示
        ["_KW_POS_PLAYER_TIP_"] = {varName = "_playerTipPanel", beginIndex = 1, endIndex = 4},
        --游戏操作按钮 不出、提示、出牌
        ["_KW_PANEL_GAMEPLAY_BTNS"] = {varName = "_gamePlayBtns"},
        ["_KW_BTN_PASS@"] = {varName = "_passBtn", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventPass"},
        ["_KW_BTN_TELL_ME@"] = {varName = "_tellMeBtn", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventTellMe"},
        ["_KW_BTN_OUT_CARD@"] = {varName = "_outCardBtn", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventOutCard"},
        ["_KW_BTN_NOT_ROT_SHUT@"] = {varName = "_notRobShutBtn", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onNotRobShutEvent"},
        ["_KW_BTN_ROB_SHUT@"] = {varName = "_robShutBtn", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onRobShutEvent"},

        ["_KW_PANEL_CLOCKPOS_"] = {varName = "_clockUI_", beginIndex = 0, endIndex = 4},
        ["_KW_UI_LEFT_CARD_TEXT_"] = {varName = "_leftCardTextUI_", beginIndex = 1, endIndex = 4},
        ["_KW_UI_LEFT_CARD_"] = {varName = "_leftCardPanelUI_", beginIndex = 1, endIndex = 4},
        ["_KW_PANEL_HEAD_"] = {varName = "_head_panel_", beginIndex = 1, endIndex = 4},
        ["_KW_UI_GAME_OPERATE_"] = {varName = "_operateUI_", beginIndex = 1, endIndex = 4},
        ["_KW_UI_READY_"] = {varName = "_readyUI_", beginIndex = 1, endIndex = 4},
        ["_KW_UI_ARMATURE_WARING_"] = {varName = "_waringUI_", beginIndex = 1, endIndex = 4},
        ["_KW_PANEL_HEAD_TIPS_"] = {varName = "_headTip_", beginIndex = 1, endIndex = 4},
        --排序按钮
        ["_KW_BTN_SORT@"] = {varName = "_sortBtn", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventSort"},
        ["_KW_UI_ROB_WAIT"] = {varName = "_robWaitUI"},
        ["_KW_UI_TIPS"] = {varName = "_tipsUI"},
        ["_KW_UI_FIRST_OUT"] = {varName = "_firstTipUI"},
        ["_KW_PANEL_BTNS_ROB_SHUT"] = {varName ="_robShutPanel"},
        ["_KW_PANEL_BTNS_GAME"] = {varName ="_btnsGameLayer"},
        ["_KW_UI_CARD_LAYER"] = {varName ="_cardPanel"},
        ["_KW_PANEL_BTNS_READY"] = {varName ="_btnsReadyPanel"},

        ["_KW_PANEL_FEATURES_LEFT"] = {varName = "_leftPanel"},
        ["_KW_PANEL_FEATURES_RIGHT"] = {varName = "_rightPanel"},
        ["_KW_PANEL_FEATURES_TOP"] = {varName = "_topPanel"},
        ["_KW_UI_SPECF_CARD_LAYER"]= {varName = "_specfPanel"},

        ["_KW_PANEL_CLOCK"] = {varName = "_clockPanel"},
        ["_KW_UI_CLOCK_TEXT"] = {varName = "_clockText"},
        ["_KW_UI_ARMATURE_PANEL"] = {varName = "_aniPanel"},

        ["_KW_PANEL_CANT_DOWN"]= {varName ="_downPanel"},
        ["_KW_BTN_CANT_DOWN"] = {varName ="_downBtn", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventPass"},
        ["_KW_BTN_UNREADY"] = {varName ="_waitBtn", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventWait"},

        --需要隐藏的界面
        ["_KW_PANEL_GAME_INFO_SYS"]= {varName ="_sysInfoPanel"},
        ["_KW_UI_ROOM_INFO"]= {varName ="_roomInfoPanel"},
        ["_KW_PANEL_ROOM_RULE"]= {varName ="_roomRulePanel"},
        ["_KW_BTN_TALK@"]= {varName ="_talkBtn"},
        ["_KW_BTN_MIKE@"]= {varName ="_mikeBtn"},
    }
end

function GameLayer:createChildren()
    self:initTableData()
    self:initCardLayer()
    self:initSpecfCardLayer()
    self:initHideLayer()
    self:resetTable()
end

function GameLayer:initDatas()
    self._gameData = CF.game:getModule("GameLayer"):getGameData()
    self._gameModule = CF.game:getModule("GameLayer")
    self._enterGameViewTime = os.time()
    self._gamename = CF.gameSub:getGameNameByGameId(CF.roomData:getGameID())
end

function GameLayer:getProxyEvents()
    local eventTable = {
        {module = CF.roomData, eventKeyName = "EVENT_PLAYER_START", callBack = "onPlayerStart"},
        {module = CF.game:getModule("Match"), eventKeyName = "EVENT_MATCH_STATE_CHANGED", callBack = "onMatchStateChanged" },
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_GAME_START", callBack = "onGameStart"},
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_GAME_STEP", callBack = "onGameStep"},
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_ALL_CARDS", callBack = "onMsgAllCards"},
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_SEND_CARDS", callBack = "onSendCards"},
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_PLAYER_CARDS_COUNT", callBack = "onShowCardCount"},
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_UPDATE_CLOCK", callBack = "onUpdateClock"},
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_ROB_SHUT_POWER", callBack = "onRobShutPower"},
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_ROB_SHUT_RESPONSE", callBack = "onRobShut"},
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_GAME_POWER", callBack = "onGamePower"},
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_OUT_CARD", callBack = "onGameOutCards"},
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_HOME_SHUT", callBack = "onHomeShut"},
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_GAME_END", callBack = "onGameEnd"},
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_BREAK_SHUT", callBack = "onBreakShut"},
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_ALL_HAND_CARDS", callBack = "onAllHandCards"},
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_PLAYER_SHOW_OUT_CARD", callBack = "onPlayerShowOutCard"},
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_CHECK_CARD", callBack = "onCheckedCardsJudge"},
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_GAME_CHANGE_BTNS_STATE", callBack = "onGameChangeBtnsState"},
        {module = CF.game:getModule("WinLost"), eventKeyName = "EVENT_GAME_WINLOST", callBack = "onGameWinLost"},
        {module = CF.game:getModule("BigWinLost"), eventKeyName = "EVENT_GAME_TOTAL_RESULT", callBack = "onGameTotalResult"},
        {module = CF.settingData, eventKeyName = "EVENT_AUTORAISE_STYLE_CHANGED", callBack = "onEventAutoRaise" },--设置自动提牌    
        {module = CF.settingData, eventKeyName = "EVENT_CARD_BACK_STYLE_CHANGED", callBack = "onEventSwitchCardSize" },--大牌切换
    }
    return eventTable
end

function GameLayer:getClockAniNode(clockBG)
    if clockBG == nil then
        return
    end
    local parentNode = clockBG:getParent()
    local aniNode = ccui.Helper:seekWidgetByName(parentNode, "_KW_ANI_OUT_CARD_TIME_BG")
    if not aniNode then
        local newNode = ccui.Layout:create()
        newNode:setName("_KW_ANI_OUT_CARD_TIME_BG")
        local x, y = clockBG:getPosition()
        newNode:setPosition(cc.p(x, y))
        newNode:setContentSize(0, 0)
        parentNode:addChild(newNode, -1)
        aniNode = newNode
    end
    return aniNode
end

function GameLayer:playClockLoopAni(clockPanel)
    local isXGSJ = CF.settingData:getXGClock()
    local clockBG = ccui.Helper:seekWidgetByName(clockPanel, "KW_UI_CLOCK_BG")
    if clockBG then
        clockBG:setVisible(isXGSJ == false)
        if isXGSJ then
            local aniNode = self:getClockAniNode(clockBG)
            local info = XH.XGSJ_BUNDLE_INFO[XH.XGSJ_PROP_ID.CLOCK]
            XH.SpineManager:playAni(aniNode, info.aniPath, info.filename, info.animationLoop, true)
        else
            local aniNode = self:getClockAniNode(clockBG)
            if aniNode then
                aniNode:removeFromParent()
            end
        end
    end
    local outCardTimeText = self._clockText
    if outCardTimeText then
        if isXGSJ then
            outCardTimeText:setFntFile("cocosStudio/Common/Font/Fnt_miaoz-export.fnt")
        else
            outCardTimeText:setFntFile("cocosStudio/Common/Font/naozhong_num-export.fnt")
        end
    end
end

function GameLayer:initTableData()
    -- 出牌ID
    self._promptID = -1
    -- 带牌ID
    self._withCardID = 1
    self._promptCards = {}
end

function GameLayer:getAdaptationConfig()
    return {
        {node = self._headTip_1, bRight = false, bHalf = false},
        {node = self._headTip_3, bRight = true, bHalf = false},
        {node = self._head_panel_1, bRight = true, bHalf = false},
        {node = self._head_panel_2, bRight = true, bHalf = false},
        {node = self._head_panel_3, bRight = false, bHalf = false},
        {node = self._leftPanel, bRight = true, bHalf = false},
        {node = self._rightPanel, bRight = true, bHalf = false},
        {node = self._clockUI_1, bRight = false, bHalf = false},
        {node = self._clockUI_3, bRight = true, bHalf = false},
        {node = self._topPanel, bRight = false, bHalf = true},
    }
end

--初始化牌层
function GameLayer:initCardLayer()
    if self._cardLayer == nil then
        self._cardLayer = CardLayer.new()
        self._cardPanel:addChild(self._cardLayer)
    end
    self._cardLayer:clearAllCards()
end

--初始化牌层
function GameLayer:initSpecfCardLayer()
    if CF.roomData:getIsSeer() then
        return
    end
    local bTest = CF.areaData:getAreaTypeID() > 1000 and CF.areaData:getSrsGroupID() == 5008
    if not bTest then return end
    if self._specfCardLayer == nil then
        self._specfCardLayer = SpecfCardLayer.new()
        self._specfPanel:addChild(self._specfCardLayer)
    end
end

--需要隐藏的界面
function GameLayer:initHideLayer()
    self._sysInfoPanel:setVisible(false)
    self._roomInfoPanel:setVisible(false)
    self._roomRulePanel:setVisible(false)
    self._topPanel:setVisible(false)
    self._talkBtn:setVisible(false)
    self._mikeBtn:setVisible(false)
end

function GameLayer:onPlayerStart(event)
    -- 旁观视角准备时，不清除旁观玩家的UI
    if CF.roomData:getIsSeer() then
        return
    end
    local msg = event.msg
    if msg.seatID == CF.roomData:getSelfSeat() then
        self:resetTable()
    end
end

function GameLayer:onMatchStateChanged(event)
    if self._winlostLayer and not tolua.isnull(self._winLostLayer) then
        return
    end
    self:resetTable()
end

function GameLayer:onGameStart(event)
    if not CF.roomData:isPlayBack() then
        --##非回放、非旁观,显示排序按钮
        if not CF.roomData:getIsSeer() then
            self._sortBtn:setVisible(true)
        end
        --游戏开始时隐藏左右玩家手牌节点，防止之前逻辑导致的显示左右玩家手牌问题发生
        self._cardLayer:showLeftAndRightHandCardArea(false)
        self._gameStartTime = os.time() or 0
        self:recordData()
    else
        self._cardLayer:showLeftAndRightHandCardArea(true)
    end
    --隐藏小结束
    self:clearWinLostLayer()
    self:resetTable()
    CF.soundManager:playSoundStart()
end

function GameLayer:recordData(  )
    local data = {}
    data.Page_name = "GameStart"
    data.Start_time = self._enterGameViewTime or 0
    data.End_time = os.time() 
    data.staytime = data.End_time - data.Start_time
    data.userid = CF.selfPlayerData:getNumberID()
    if CF.roomData:isGoldRoom() then
        CF.throwDataManager:throwData(CF.ThrowDataDefine.GoldGamesMatched,data)
    else
        CF.throwDataManager:throwData(CF.ThrowDataDefine.BOX_GAME_START_TIME,data)
    end
end

function GameLayer:onGameStep(event)
    local gameStep = event.msg.gameStep
    if gameStep == CF.GameDefine.ENUM_GAME_STEP.GAME_STEP_ROB_SHUT then
        self:showGameTips(true,CF.GameDefine.ENUM_GAME_TIP.GAME_TIP_ROB_WAIT)
    else
        self:showGameTips(false)
    end

    if gameStep >= CF.GameDefine.ENUM_GAME_STEP.GAME_STEP_START_GAME
        and gameStep < CF.GameDefine.ENUM_GAME_STEP.GAME_STEP_WIN_LOST
        and not CF.roomData:isPlayBack() and not CF.roomData:getIsSeer() then
        self._sortBtn:setVisible(true)
    else
        self._sortBtn:setVisible(false)
    end
end

function GameLayer:onMsgAllCards(event)
    local msgAllCards = event.msg.msgAllCards
    if msgAllCards.sSeat == CF.roomData:getSelfSeat() and not CF.roomData:getIsSeer() then
        self._specfCardLayer:setAllCards(msgAllCards.ucCards)
        self._specfCardLayer:showSpecfLayer(true)
    end
end

function GameLayer:onSendCards(event)
    local seatId = event.msg.seat
    local localSeat = CF.roomData:seatToLocal(seatId)
    if CF.roomData:getIsSeer() and not CF.roomData:isDelayWatch() then
        localSeat = CF.roomData:getSelfLocalSeat()
    end
    local orderCards = event.msg.orderCards
    if not CF.roomData:isPlayBack() then
        self._cardLayer:setHandCards(localSeat,orderCards,event.msg.bShowAni)
    end
end

function GameLayer:onShowCardCount(event)
    local seatId = event.msg.seat
    local bShow = event.msg.bShow
    if not CF.roomData:isPlayBack() and not CF.roomData:isDelayWatch() then
        self:showCardCount(seatId,bShow,false)
    end
end

function GameLayer:showCardCount(seatId,show,bEnd)
    local localSeat = CF.roomData:seatToLocal(seatId)
    local count = self._gameData:getHandCardsCount(seatId)
    self["_leftCardTextUI_"..localSeat]:setString(count)
    self["_leftCardTextUI_"..localSeat]:setVisible(show)
    self["_leftCardPanelUI_"..localSeat]:setVisible(show)
    self["_leftCardTextUI_"..localSeat]:setPositionPercent(cc.p(0.52,0.46))
    if count > 10 then
        self["_leftCardTextUI_"..localSeat]:setPositionPercent(cc.p(0.50,0.46))
    end
    ccui.Helper:doLayout(self["_leftCardPanelUI_"..localSeat])

    local bWaring = false
    if not bEnd and count > 0 and count == 1 then
        bWaring = true
    end
    self:showWaringAni(localSeat,bWaring)
end

function GameLayer:showWaringAni(localseat,show)
    if localseat == CF.roomData:getSelfLocalSeat() then
        return
    end
    self["_waringUI_"..localseat]:removeAllChildren()

    if show then
        AnimationManager.playAlarmJsonArmature(self["_waringUI_"..localseat])
    end
end

function GameLayer:onUpdateClock(event)
    local seat = event.msg.seat
    local tm = event.msg.time
    if not seat or not self._clockPanel then
        return
    end
    self:showClock(true, tm, seat)
end

function GameLayer:showClock(show,tm,seatId)
    self._clockPanel:setVisible(show)
    if show == false then
        self._clockText:stopAllActions()
        return
    end
    local localSeat = CF.roomData:seatToLocal(seatId)
    if seatId == CF.roomData:getChairs() then
        localSeat = 0
    end
    self._clockPanel:setPosition(self["_clockUI_"..localSeat]:getPosition())

    local clockTime = self._clockText
    if clockTime then
        clockTime:setString(tonumber(string.format("%02d", tm)))
        clockTime:setPositionPercent(cc.p(0.47,0.5))
        ccui.Helper:doLayout(self._clockPanel)
        clockTime:stopAllActions()
        self:playClockLoopAni(self._clockPanel)

        CF.UITool.createRepeateAction(clockTime, 1, function()
            tm = tm - 1
            if tm >= 0 then
                if CF.GameDefine and tm < CF.GameDefine.KW_COUNT_CLOCK_WARNING then
                    CF.soundManager:playSoundClock()
                end
                clockTime:setString(tonumber(string.format("%02d", tm)))
                clockTime:setPositionPercent(cc.p(0.47,0.5))
                ccui.Helper:doLayout(self._clockPanel)
            else
                clockTime:stopAllActions()
            end
        end)
    end
    if localSeat == CF.GameDefine.LOCAL_SEAT.BOTTOM then
        self._StartTime = os.time()
    end
end

function GameLayer:onRobShutPower(event)
    local seatId = event.msg.seat
    if seatId == CF.roomData:getSelfSeat() then
        self:showGameTips(false)
        if not CF.roomData:getIsSeer() then
            self:showRobShut(true)
        end
    else
        self:showRobShut(false)
        self:showGameTips(true, CF.GameDefine.ENUM_GAME_TIP.GAME_TIP_ROB_WAIT)
    end
end

function GameLayer:showGameTips(show,type)
    self._tipsUI:setVisible(show)
    if show == false then
        return
    end

    if type ==CF.GameDefine.ENUM_GAME_TIP.GAME_TIP_ROB_WAIT then
        self._robWaitUI:setVisible(true)
        self._firstTipUI:setVisible(false)
    elseif type == CF.GameDefine.ENUM_GAME_TIP.GAME_TIP_FIRST_OUT then
        self._firstTipUI:setVisible(true)
        self._robWaitUI:setVisible(false)
    end
end

-- 抢关面板
function GameLayer:showRobShut(show)
    self._robShutPanel:setVisible(show)
end

function GameLayer:onRobShut(event)
    local seatId = event.msg.seat
    local bRobShut = event.msg.bRobShut

    if seatId == CF.roomData:getSelfSeat() then
        self:showRobShut(false)
    end

    local localSeat = CF.roomData:seatToLocal(seatId)
    if bRobShut then
        AnimationManager.showGameOperateAni(self["_operateUI_"..localSeat], CF.GameDefine.KW_PIC_BOT_SHUT_PNG)
    else
        AnimationManager.showGameOperateAni(self["_operateUI_"..localSeat], CF.GameDefine.KW_PIC_NOT_BOT_SHUT_PNG)
    end

    if bRobShut then
        self._gameData:setRobSeat(seatId)
    end
end

function GameLayer:onGamePower(event)
    local sPowerSeat = self._gameData:getCurrentPlayer()
    local preOutSeat = self._gameData:getLastPlayer()
    local localSeat = CF.roomData:seatToLocal(sPowerSeat)
    self._cardLayer:clearOutCard(localSeat)

    local sSeatId = CF.roomData:getSelfSeat()
    --上次出牌为自己时,清空上次出牌记录
    if sPowerSeat == preOutSeat then
        self._gameData:resetLastOutCard()
        self._gameData:resetCardType()
    end
    --提示下标置-1,代表还未查询过
    self._promptID = -1
    self._withCardID = 1
    self._gameData:resetLastCheckCardsCount()

    if self._downBtn then
        self._downBtn:stopAllActions()
    end

    if sPowerSeat == sSeatId and not CF.roomData:getIsSeer() then -- and not self._playback then
        self:canOpt()
        if not self:AutoOutCard() then
            self:updateDownPanel()
        end
        self:autoRaiseCard()    -- 自动提牌
        self:autoPass()
    else
        self:updateOptBtns(false)
    end
end

function GameLayer:canOpt()
    local curPlayer = self._gameData:getCurrentPlayer()
    local preOutSeat = self._gameData:getLastPlayer()
    local lastCardType = self._gameData:getLastCardType()

    local sSeatId = CF.roomData:getSelfSeat()
    local nextSeat = (curPlayer + 1) % CF.roomData:getChairs()
    local nextHandCardsCnt = self._gameData:getHandCardsCount(nextSeat)
    local handCardsCnt = self._gameData:getHandCardsCount(curPlayer)

    self._gameData:setPreShowOut(true)
    --判断能否不出
    local lastOutCards = self._gameData:getLastOutCard()
    if #lastOutCards == 0 or preOutSeat == sSeatId then
        self:setButtonState(self._passBtn,false)
    else
        local allCardIDs = self._gameData:getHandCards(sSeatId)
        local mustControl = CF.roomData:isMustControl() and nextHandCardsCnt == 1
        self._promptCards,self._promptWithNum = CardLogic:getPromptCards(allCardIDs, lastCardType,nil,mustControl)
        self._promptID = 0
        self._withCardID = 1
        self:mustOut()
        self:mustControl(curPlayer)
    end
    -- 判断能否出牌
    local checkedCards = self._cardLayer:getSelectCardIDs(CF.roomData:getSelfLocalSeat())
    if not checkedCards then
        return false
    end
    local lastOut = (#checkedCards == handCardsCnt)
    local canOut = CardLogic:canOut(checkedCards, lastCardType, lastOut, self._gameData:getMustOutCard())
    self:setButtonState(self._outCardBtn, canOut)
    return canOut
end

-- 必须管
function GameLayer:mustOut()
    if CF.roomData:isMustOut() then
        if #self._promptCards == 0 then
            self:setButtonState(self._passBtn,true)
        else
            self:setButtonState(self._passBtn,false)
        end
    else
        self:setButtonState(self._passBtn,true)
    end
end

-- 逢跑必压/报单必大
function GameLayer:mustControl(curPlayer)
    local nextSeat = (curPlayer + 1) % CF.roomData:getChairs()
    local handCardsCnt = self._gameData:getHandCardsCount(nextSeat)
    local lastOutCards = self._gameData:getLastOutCard()
    if CF.roomData:isMustControl() and handCardsCnt == 1 then
        if #self._promptCards ~= 0 and (#lastOutCards == 1 or curPlayer == nextSeat)then
            self:setButtonState(self._passBtn,false)
        end
    end
end

--TODO CHECK 最后4张以内，判断能否一次出牌
function GameLayer:AutoOutCard()
    return false
end

function GameLayer:updateDownPanel()
    if CF.roomData:isGoldRoom() then
        local show = true
        local lastOutCard = self._gameData:getLastOutCard()
        local preOutSeat = self._gameData:getLastPlayer()
        if not(#lastOutCard == 0 or preOutSeat == CF.roomData:getSelfSeat()) and #self._promptCards == 0 then
            show = false
        end
        self._downPanel:setVisible(not show)
        self._btnsGameLayer:setVisible(show)
    else
        self._btnsGameLayer:setVisible(true)
    end
end

-- 金币场要不起自动过牌
function GameLayer:autoPass()
    if CF.roomData:isGoldRoom() then
        local lastOutCard = self._gameData:getLastOutCard()
        local preOutSeat = self._gameData:getLastPlayer()
        if not(#lastOutCard == 0 or preOutSeat == CF.roomData:getSelfSeat()) and #self._promptCards == 0 then
            if self._downBtn then
                local delayAction = cc.DelayTime:create(0.5)
                local callFuncAct = cc.CallFunc:create(function()
                    self:onTouchEventPass(self._downBtn,ccui.TouchEventType.ended)
                end)
                self._downBtn:runAction(cc.Sequence:create(delayAction,callFuncAct))
            end
        end
    end
end

function GameLayer:onGameOutCards(event)
    local msgOutCard = event.msg.msgOutCard
    local localSeat = CF.roomData:seatToLocal(msgOutCard.sSeat)
    if msgOutCard.ucCardCount == 0 then
        AnimationManager.showGameOperateAni(self["_operateUI_"..localSeat], CF.GameDefine.KW_PIC_PASS_PNG)
        CF.soundManager:playSoundPass()
        return
    end
    -- 如果有手牌的情况 删除手牌 重置手牌区
    local allCardIDs = self._gameData:getHandCards(msgOutCard.sSeat)
    if  allCardIDs ~= nil and msgOutCard.sSeat == CF.roomData:getSelfSeat() then
        self._gameData:deleteHandCards(msgOutCard.sSeat, msgOutCard.ucCard)
        local newCardIds = self._gameData:getHandCards(msgOutCard.sSeat)
        local viewHandCardIDs = self._cardLayer:getHandCards(localSeat)
        local bSame = CardLogic:checkTwoCardDataIsSame(newCardIds, viewHandCardIDs)
        if not bSame then
            self._cardLayer:setHandCards(localSeat,newCardIds)
        end
    end

    self._gameData:setLastPlayer(msgOutCard.sSeat)
    self._gameData:setLastOutCard(msgOutCard.ucCard)
    self._gameData:updateCardType(msgOutCard)

    -- 清空置灰的牌
    if localSeat == CF.roomData:getSelfLocalSeat() then
        self._cardLayer:clearDisableCard(localSeat)
    end
    --清空掉首出一定要出的牌
    self._gameData:clearMustOutCard()
    self:playSpecialAniAndSound(msgOutCard.sSeat, msgOutCard.sCardType, msgOutCard.sEndPower)
    --显示出牌
    if CF.roomData:isPlayBack() or msgOutCard.sSeat ~= CF.roomData:getSelfSeat() or self._gameData:isTrust() or CF.roomData:getIsSeer() then
        self:showOutCard(msgOutCard.sSeat, msgOutCard.ucCard)
    end
end

function GameLayer:showOutCard(sSeat, outCardIDs)
    local localSeat = CF.roomData:seatToLocal(sSeat)
    local allCardIDs = self._gameData:getHandCards(sSeat)
    --如果有手牌的情况 删除手牌 重置手牌区
    if allCardIDs ~= nil then
        local handCardIDs = self._cardLayer:getHandCards(localSeat)
        local newHandCardIDs = CardLogic:removeCardsID(handCardIDs, outCardIDs)
        self._cardLayer:setHandCards(localSeat,newHandCardIDs)
    end

    local outCards = CardLogic:ID2MyCards(outCardIDs)
    outCards = CardLogic:sortCardByCount(outCards)
    outCards = CardLogic:cards2UChar(outCards)

    self._cardLayer:setOutCards(localSeat,outCards)
    --如果是自己,隐藏操作按钮
    if sSeat == CF.roomData:getSelfSeat() then
        -- self._btnsGameLayer:setVisible(false)
        self:updateOptBtns(false)
    end
end

function GameLayer:onHomeShut(event)
    local ucShutedCount = event.msg.ucShutedCount
    local sShutedSeat = event.msg.sShutedSeat
    local bSpring = event.msg.bSpring

    for i = 1, ucShutedCount do
        if sShutedSeat[i] == CF.roomData:getSelfSeat() then
            local winLostData = self._gameData:getWinLostData()
            winLostData:addPlayerLabel("被关门")
        end
    end

    if bSpring == true then
        self:showCardTypeAni(CF.GameDefine.KW_CARD_STYPE_SPRING)
    end
end

function GameLayer:showCardTypeAni(type)
    if self._aniPanel then
        AnimationManager.showCardTypeAni(self._aniPanel, type)
    end
end

function GameLayer:onGameEnd(event)
    self:showClock(false)
    self._btnsReadyPanel:setVisible(false)
    -- self._btnsGameLayer:setVisible(false)
    self:updateOptBtns(false)
    self._robShutPanel:setVisible(false)
    self:recordGameData()
end

function GameLayer:recordGameData()
    local data = {}
    data.time1 = self._gameStartTime or -1
    data.time2 = os.time() or -1
    data.staytime = data.time2 - data.time1
    data.userid = CF.selfPlayerData:getNumberID()
    data.chairs = CF.roomData:getChairs()
    data.gamename = CF.gameSub:getGameNameByGameId(CF.roomData:getGameID())
    CF.throwDataManager:throwData(CF.ThrowDataDefine.GameStarted,data)
end

-- 破关 抢关
function GameLayer:onBreakShut(event)
    local sBreakShutSeat = event.msg.sBreakShutSeat
    local bBreakShut = event.msg.bBreakShut
    if sBreakShutSeat == CF.roomData:getSelfSeat() then
        local winLostData = self._gameData:getWinLostData()
        if bBreakShut == true then
            winLostData:addPlayerLabel("破关")
        else
            winLostData:addPlayerLabel("抢关成功")
        end
    end
end

function GameLayer:onAllHandCards(event)
    -- 获取全部人手牌并展示
    local ucPlayerCnt = event.msg.ucPlayerCount
    for i = 1, ucPlayerCnt do
        local localSeat = CF.roomData:seatToLocal(i - 1)
        local orderCards = self._gameData:getHandCards(i - 1)
        self._cardLayer:setHandCards(localSeat, orderCards)
        --剩余手牌数可以隐藏
        self:showCardCount(i-1, false, true)
    end
    self._cardLayer:showLeftAndRightHandCardArea(true)
end

function GameLayer:resetTable()
    CF.roomData:clearTable()
    self:updateOptBtns(false)
    self._sortBtn:setVisible(false)
    self:showRobShut(false)
    self:showGameTips(false)
    self:clearWaringAni()
    --清除桌面牌
    self._cardLayer:clearAllCards()
    --隐藏小结束
    self:clearWinLostLayer()
    --隐藏操作按钮
    self:updateOptBtns(false)
    -- 出牌ID
    self._promptID = -1
    -- 带牌ID
    self._withCardID = 1

    self._promptCards = {}
    --关闭等待弹窗
    CF.TipTool.clearScrollTip()
end

function GameLayer:clearWinLostLayer()
    if self._winLostLayer then
        self._winLostLayer:removeFromParent()
        self._winLostLayer = nil
    end
    if not tolua.isnull(self._bigWinLostLayer) then
        self._bigWinLostLayer:removeFromParent()
        self._bigWinLostLayer = nil
    end
end

function GameLayer:clearWaringAni()
    for i = 1, CF.roomData:getMaxPlayer() do
        self:showWaringAni(i, false)
    end
end

function GameLayer:onStartSpecfCards(event)
    if not self._specfCardLayer then
        self:initSpecfCardLayer()
    end
    local msg = event.msg
    self._specfCardLayer:setAllCards(msg.cards, msg.cardCount)
    self._specfCardLayer:showSpecfLayer(true)
end

function GameLayer:playSpecialAniAndSound(sSeat, sCardType, sEndPower)
    -- -- 播放音效
    local player = CF.roomData:getPlayerDataBySeatId(sSeat)
    if player then
        local playerSex = player:getSex()
        CF.soundManager:playSoundOut()
        if not CF.settingData:getIsNormalVoice() then
            local gameId = CF.roomData:getGameID()
            local boxGameId = CF.gameSub:getGoldToBoxGameId(gameId) or gameId
            CF.soundManager:playSoundCards(playerSex, sCardType, sEndPower, true, boxGameId)
        else
            CF.soundManager:playSoundCards(playerSex, sCardType, sEndPower, false, 0)
        end
    end

    local paiXing = self:judgeCardTypeAni(sCardType)
    if paiXing ~= nil then
        AnimationManager.showCardTypeAni(self._aniPanel, paiXing)
    end
end

-- 飞机炸弹动画
function GameLayer:judgeCardTypeAni(sCardType)
    if sCardType > CardEnum.CARDS_TYPE.CT_3_JUNKO_0_EXCESS_1_CONTINUOUS and
        sCardType < CardEnum.CARDS_TYPE.CT_4_JUNKO_1_EXCESS_0_CONTINUOUS and
        (sCardType % 100) > 1 then
        return CF.GameDefine.KW_CARD_STYPE_AIRPLANE
    elseif sCardType > CardEnum.CARDS_TYPE.CT_4_JUNKO_1_EXCESS_0_CONTINUOUS and
            sCardType < CardEnum.CARDS_TYPE.CT_4_JUNKO_3_EXCESS_0_CONTINUOUS then
        return CF.GameDefine.KW_CARD_STYPE_BOMB
    end
end

function GameLayer:updateOptBtns(show)
    self._downPanel:setVisible(show)
    self._btnsGameLayer:setVisible(show)
end

function GameLayer:onTouchEventPass(send, eventType)
    if CF.roomData and (CF.roomData:isPlayBack() or CF.roomData:getIsSeer()) then
        return
    end

    --隐藏操作按钮
    self:updateOptBtns(false)
    self._cardLayer:resetHandCards()
    self._cardLayer:clearDisableCard(CF.roomData:getSelfLocalSeat())
    self._gameData:setPreShowOut(false)
    --逻辑由mananger处理
    CF.game:getModule("GameLayer"):onPassClick()

    if self._downBtn then
        self._downBtn:stopAllActions()
    end
end

function GameLayer:onTouchEventTellMe(send, eventType)
    if CF.roomData:isPlayBack() or CF.roomData:getIsSeer() then
        return
    end
    local seatId = CF.roomData:getSelfSeat()
    local localSeat = CF.roomData:getSelfLocalSeat()
    local allCardIDs = self._gameData:getHandCards(seatId)
    self._cardLayer:resetHandCards()

    local curPlayer = self._gameData:getCurrentPlayer()
    local lastCardType = self._gameData:getLastCardType()
    local nextSeat = (curPlayer + 1) % CF.roomData:getChairs()
    local nextHandCardsCnt = self._gameData:getHandCardsCount(nextSeat)

    --首次获取提示序列(每次到自己都会重置)
    local mustOutCardID = self._gameData:getMustOutCard()
    if self._promptID == -1 then
        local mustControl = CF.roomData:isMustControl() and nextHandCardsCnt == 1
        self._promptCards, self._promptWithNum = CardLogic:getPromptCards(allCardIDs, lastCardType,mustOutCardID,mustControl)
    end

    --不存在可选项直接过
    if #self._promptCards == 0 then
        self._gameData:setPreShowOut(false)
        CF.game:getModule("GameLayer"):onPassClick()
        return
    end

    --防止崩溃
    if self._promptID > #self._promptCards or self._promptID < 1 then
        self._promptID = 1
        self._withCardID = 1
    end

    --主牌ID
    local checkCards = CardLogic:cards2UChar(self._promptCards[self._promptID])
    local withcardnum = self._promptWithNum[self._promptID]
    --如果是先手,提前加入3
    if mustOutCardID and CardLogic:findCardIDFromCardsID(mustOutCardID, checkCards) == false and withcardnum > 0 then
        table.insert(checkCards, mustOutCardID)
        withcardnum = withcardnum - 1
    end

    --获取带牌ID
    if withcardnum ~= 0 then
        local restCardsID = CardLogic:removeCardsID(allCardIDs, checkCards)
        local havNext,withComb = CardLogic:getWithCards(restCardsID, withcardnum, self._withCardID)
        --带牌序列+1
        if havNext ~= true then
            self._promptID = self._promptID + 1
            self._withCardID = 1
        else
            self._withCardID = self._withCardID + 1
        end
        for i = 1, #withComb do
            table.insert(checkCards, withComb[i]:getCardID())
        end
    else
        --无带牌,直接主序列+1
        self._promptID = self._promptID + 1
    end
    self._cardLayer:setSelectCards(localSeat,checkCards)

    local lastOut = (#checkCards == #allCardIDs)
    local canOut = CardLogic:canOut(checkCards, lastCardType, lastOut, mustOutCardID)
    self:setButtonState(self._outCardBtn, canOut)
    CF.throwDataManager:throwDataClick(CF.ThrowDataDefine.TABLE_16,{gamename = self._gamename})
end

function GameLayer:onTouchEventOutCard(send,eventType)
    if CF.roomData:isPlayBack() or CF.roomData:getIsSeer() then
        return
    end

    -- self._btnsGameLayer:setVisible(false)
    self:updateOptBtns(false)
    local localSeat = CF.roomData:getSelfLocalSeat()
    local outCardIDs = self._cardLayer:getSelectCardIDs(localSeat)
    self:sendOutCard(outCardIDs)
    --出牌时间数据统计
    local data = {}
    data.time1 = self._StartTime or 0
    data.time2 = os.time() or 0
    data.staytime = data.time2 - data.time1
    data.gamename = self._gamename
    CF.throwDataManager:throwDataClick(CF.ThrowDataDefine.TABLE_17,data)
end

function GameLayer:sendOutCard(outCardIDs)
    local eventDispatcher = cc.Director:getInstance():getEventDispatcher()
    local event = cc.EventCustom:new("UICardLayer.UICardArea.onEventOutCards")
    event.outCardIDs = outCardIDs
    eventDispatcher:dispatchEvent(event)
end

-- 不抢
function GameLayer:onNotRobShutEvent(event,eventType)
    CF.soundManager:playButtonClick()
    CF.msgManager:sendPlayerRob(false)
    self:showRobShut(false)
end

-- 抢关
function GameLayer:onRobShutEvent(event,eventType)
    CF.soundManager:playButtonClick()
    CF.msgManager:sendPlayerRob(true)
    self:showRobShut(false)
end

-- 排序
function GameLayer:onTouchEventSort(send,eventType)
    if CF.roomData:getIsSeer() then
        return
    end
    local sortType = self._gameData:getSortType()
    if sortType == CF.GameDefine.KW_NUM_SORT_BY_POWER then
        sortType = CF.GameDefine.KW_NUM_SORT_BY_COUNT
    else
        sortType = CF.GameDefine.KW_NUM_SORT_BY_POWER
    end
    self._gameData:setSortType(sortType)

    local localSeat = CF.roomData:getSelfLocalSeat()
    local sSeatId = CF.roomData:getSelfSeat()
    local handCards = self._gameData:getHandCards(sSeatId)
    local orderCards = CardLogic:ID2MyCards(handCards)
    orderCards = CardLogic:sortCard(orderCards, sortType)
    orderCards = CardLogic:cards2UChar(orderCards)
    self._cardLayer:setHandCards(localSeat,orderCards)
    self:setButtonState(self._outCardBtn,false)
end

function GameLayer:setButtonState(node,enable)
    node:setEnabled(enable)
    node:setTouchEnabled(enable)
    node:setBright(enable)
end

function GameLayer:onPlayerShowOutCard(event)
    if self._gameData:isPreShowOut() then
        local seat = event.msg.seat
        local outCardIDs = event.msg.outCardIDs
        self:showOutCard(seat, outCardIDs)
        self._gameData:setPreShowOut(false)
    end
end

function GameLayer:onExit()
    GameLayer.super.onExit(self)
    if self._clockText then
        self._clockText:stopAllActions()
    end
end

function GameLayer:onCheckedCardsJudge(event)
    local checkedCards = event.msg.selectCardIDs
    local lastOutCards = self._gameData:getLastOutCard()
    local lastCardType = self._gameData:getLastCardType()
    local curPlayer = self._gameData:getCurrentPlayer()
    local allCardIDs = self._gameData:getHandCards(CF.roomData:getSelfSeat())
    local bSuccess = false
    local orderCards = {}
    local lastCheckCardsCount = self._gameData:getLastCheckCardsCount()
    if lastCheckCardsCount < #checkedCards then
        bSuccess,orderCards = SmartSelectCards:selectOtherCardsAuto(allCardIDs, checkedCards, lastOutCards)
    end
    --如果检测成功,则自动选择对应牌
    if bSuccess == true then
        local checkCards = CardLogic:cards2UChar(orderCards)
        self._cardLayer:setSelfSelectCards(checkCards)
        checkedCards = self._cardLayer:getSelectCardIDs(CF.roomData:getSelfLocalSeat())
    end
    self._gameData:setLastCheckCardsCount(#checkedCards)
    local handCardsCnt = self._gameData:getHandCardsCount(curPlayer)
    local lastOut = (#checkedCards == handCardsCnt)
    local canOut = CardLogic:canOut(checkedCards, lastCardType, lastOut, self._gameData:getMustOutCard())
    self:setButtonState(self._outCardBtn, canOut)
    local nextSeat = (curPlayer + 1) % CF.roomData:getChairs()
    local nextPlayerHandCardsCnt = self._gameData:getHandCardsCount(nextSeat)
    if CF.roomData:isMustControl() and #checkedCards == 1 and nextPlayerHandCardsCnt == 1 then  -- 逢跑必压/报单必大(下家只剩一张牌)
        local checkCardPower = CardLogic:ID2MyCards(checkedCards)[1]:getPower()
        local allCards = CardLogic:ID2MyCards(allCardIDs)
        local _, maxCardPower = CardLogic:getPowerRangeFromCards(allCards)
        if checkCardPower < maxCardPower then
            self:setButtonState(self._outCardBtn, false)
        end
    end
end

function GameLayer:onGameChangeBtnsState(event)
    local msg = event.msg
    if msg.btnTagFlag == CF.GameDefine.GAME_BTNS_TAG_FLAG.BTN_OUTCARD then
        self:setButtonState(self._outCardBtn, msg.state)
    end
end

function GameLayer:onGameWinLost(event)
    --小结束隐藏记牌器界面
    CF.game:getModule("Marker"):showMarkerLine(false)
    local winLostData = self._gameData:getWinLostData()
    --关闭倒计时
    self:showClock(false)

    --最后一局,隐藏开始按钮
    -- if winLostData:getIsLastPlayCount() then
    --     self._startBtn:setVisible(false)
    --     self._continueBtn:setVisible(false)
    -- else
    --     self._continueBtn:setVisible(true)
    -- end
    local iBoomCnt = winLostData:getBoomCnt()
    local selfSeat = CF.roomData:getSelfSeat()
    if iBoomCnt[selfSeat] > 0 then
        winLostData:addPlayerLabel("炸弹数", iBoomCnt[selfSeat])
    end
    if not self._winLostLayer then
        self._winLostLayer = GameWinLostLayer.new()
        self._winLostLayer:showSelf()
        self._winLostLayer:setWinLostData(winLostData)
        self._winLostLayer:setVisible(false)
    end
    local ftime = 1.5
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
                if self._winLostLayer then
                    self._winLostLayer:setVisible(true)
                    self._winLostLayer:onTimeClose()
                end
                if CF.roomData:isGoldRoom() then
                    CF.game:getModule("ChangeLevel"):show()
                    if CF.selfPlayerData:getIsNewUserGuide() and  CF.selfPlayerData:getIsFirstGoldGame() then
                        if self._winLostLayer then
                            self._winLostLayer:setLocalZOrder(CF.ZORDER.DIALOG)
                        end
                        CF.selfPlayerData:setIsFirstGoldGame(false)
                    end
                end
                CF.soundManager:playSoundEnd()
            end)
        }
    )
    self:runAction(sequenceAction)
end

function GameLayer:onGameTotalResult(event)
    self._gameData:setBigSettleData(nil)

    local msg = event.msg
    CF.roomData:setIsGameOver(msg.show)
    if not msg.show then
        return
    end
    local isLastCount = CF.roomData:getPlayCount() == CF.roomData:getMaxPlayCount()
    local delayTime = isLastCount and 3 or 1
    if not self._gameData:getIsHaveResult() or not isLastCount then
        self:clearWinLostLayer()
        self._gameData:setBigSettleData(nil)
        if tolua.isnull(self._bigWinLostLayer) then
            self._bigWinLostLayer = CF.gameRequire("Modules.BigWinLost.View").new(msg)
            self._bigWinLostLayer:setCanContinue(false)
            self._bigWinLostLayer:showSelf(false)
        end
        self._bigWinLostLayer:setVisible(false)
        CF.SysTool.performWithDelayGlobal(function()
            if not tolua.isnull(self._bigWinLostLayer) then
                self._bigWinLostLayer:setVisible(true)
                self._bigWinLostLayer:playVipAni()
            end
        end, delayTime)
	else
        self._gameData:setBigSettleData(msg)
	end
end

function GameLayer:autoRaiseCard()
    if CF.roomData:isPlayBack() or CF.roomData:getIsSeer() then
        return
    end
    if not CF.settingData:getAutoRaise() then
        return
    end

    -- 自由出牌情况下，调用该接口
    local preOutSeat = self._gameData:getLastPlayer()
    local seatId = CF.roomData:getSelfSeat()
    local lastOutCards = self._gameData:getLastOutCard()
    if #lastOutCards == 0 or preOutSeat == seatId then
        return
    end
    self._cardLayer:resetHandCards()

    local localSeat = CF.roomData:getSelfLocalSeat()
    local allCardIDs = self._gameData:getHandCards(seatId)

    local curPlayer = self._gameData:getCurrentPlayer()
    local lastCardType = self._gameData:getLastCardType()
    local nextSeat = (curPlayer + 1) % CF.roomData:getChairs()
    local nextHandCardsCnt = self._gameData:getHandCardsCount(nextSeat)

    --首次获取提示序列(每次到自己都会重置)
    local mustOutCardID = self._gameData:getMustOutCard()
    if self._promptID == -1 then
        local mustControl = CF.roomData:isMustControl() and nextHandCardsCnt == 1
        self._promptCards, self._promptWithNum = CardLogic:getPromptCards(allCardIDs, lastCardType, mustOutCardID, mustControl)
    end

    --不存在可选项直接过
    if #self._promptCards == 0 then
        return
    end

    local promptID = 1
    local withCardID = 1
    --主牌ID
    local checkCards = CardLogic:cards2UChar(self._promptCards[promptID])
    local withcardnum = self._promptWithNum[promptID]
    --如果是先手,提前加入3
    if mustOutCardID and CardLogic:findCardIDFromCardsID(mustOutCardID, checkCards) == false and withcardnum > 0 then
        table.insert(checkCards, mustOutCardID)
        withcardnum = withcardnum - 1
    end

    --获取带牌ID
    if withcardnum ~= 0 then
        local restCardsID = CardLogic:removeCardsID(allCardIDs, checkCards)
        local havNext,withComb = CardLogic:getWithCards(restCardsID, withcardnum, withCardID)
        --带牌序列+1
        if havNext ~= true then
            promptID = promptID + 1
            withCardID = 1
        else
            withCardID = withCardID + 1
        end
        for i = 1, #withComb do
            table.insert(checkCards, withComb[i]:getCardID())
        end
    else
        --无带牌,直接主序列+1
        promptID = promptID + 1
    end
    if self._promptID ~= -1 then
        self._promptID = promptID
        self._withCardID = withCardID
        self._cardLayer:setSelectCards(localSeat,checkCards)
    
        local lastOut = (#checkCards == #allCardIDs)
        local canOut = CardLogic:canOut(checkCards, lastCardType, lastOut, mustOutCardID)
        self:setButtonState(self._outCardBtn, canOut)
    end
    self:showMaskCards()
end

function GameLayer:showMaskCards()
    if CF.roomData:isPlayBack() or CF.roomData:getIsSeer() then
        return
    end
    local localSeat = CF.roomData:getSelfLocalSeat()
    -- 置灰之前，先清楚置灰牌
    self._cardLayer:clearDisableCard(localSeat)
    if not CF.settingData:getAutoRaise() then
        return
    end

    local seatId = CF.roomData:getSelfSeat()
    local allCardIDs = self._gameData:getHandCards(seatId)

    local curPlayer = self._gameData:getCurrentPlayer()
    local lastCardType = self._gameData:getLastCardType()
    local nextSeat = (curPlayer + 1) % CF.roomData:getChairs()
    local nextHandCardsCnt = self._gameData:getHandCardsCount(nextSeat)

    --首次获取提示序列(每次到自己都会重置)
    local mustOutCardID = self._gameData:getMustOutCard()
    if self._promptID == -1 then
        local mustControl = CF.roomData:isMustControl() and nextHandCardsCnt == 1
        self._promptCards, self._promptWithNum = CardLogic:getPromptCards(allCardIDs, lastCardType,mustOutCardID,mustControl)
    end
    local allWithCardNum = false
    for k,v in pairs(self._promptWithNum) do
        if v ~= 0 then
            allWithCardNum = true
            break
        end
    end
    if allWithCardNum or mustOutCardID ~= nil then
        self._cardLayer:clearDisableCard(localSeat)
    else
        -- 获取可以出的牌，给不可出的手牌置灰
        local enableCards = {}
        local tmpEnableCard = {}
        -- 提示的牌
        for k, v in pairs(self._promptCards) do 
            local tmpCards = CardLogic:cards2UChar(v)
            for i = 1, #tmpCards do
                local include = false
                for j = 1, #tmpEnableCard do
                    if mustOutCardID and CardEnum.ucCardValue[tmpCards[i]] == CardEnum.ucCardValue[mustOutCardID] then
                        include = false
                    elseif CardEnum.ucCardValue[tmpCards[i]] == CardEnum.ucCardValue[tmpEnableCard[j]] then
                        include = true
                    end
                end
                if not include then
                    table.insert(tmpEnableCard, tmpCards[i])
                end
            end
        end
        -- 报单必大里，可以出的顺子牌
        local lastCardType = self._gameData:getLastCardType()
        local mustControl = CF.roomData:isMustControl() and nextHandCardsCnt == 1
        local minStraightLength = MyCardsType:getMinCTLength(CardEnum.CARDS_TYPE.CT_1_JUNKO_0_EXCESS_1_CONTINUOUS)
        if mustControl and #allCardIDs >= minStraightLength and lastCardType._nCardTypeEnum == CardEnum.CARDS_TYPE.CT_0_JUNKO_0_CONTINUOUS then
            local tmpPromptCards = {}
            local startCardID = allCardIDs[1]
            -- 循环筛选可出的顺子
            for i=1, #allCardIDs-1 do
                if allCardIDs[i] == startCardID then
                    local checkedCards = {}
                    table.insert(checkedCards, allCardIDs[i])
                    table.insert(checkedCards, allCardIDs[i+1])
                    local bSuccess,orderCards = SmartSelectCards:selectOtherCardsAuto(allCardIDs, checkedCards, {})
                    if bSuccess then
                        local checkCards = CardLogic:cards2UChar(orderCards)
                        for j=1, #checkCards do
                            table.insert(tmpPromptCards, checkCards[j])
                        end
                        startCardID = checkCards[#checkCards]
                    else
                        startCardID = allCardIDs[i+1]
                    end
                end
            end
            -- 去重
            for _,v in pairs(tmpPromptCards) do
                local include = false
                for _,t in pairs(tmpEnableCard) do
                    if v == t then
                        include = true
                        break
                    end
                end
                if not include then
                    table.insert(tmpEnableCard, v)
                end
            end
        end
        for k,v in pairs(tmpEnableCard) do
            if mustOutCardID and CardEnum.ucCardValue[v] == CardEnum.ucCardValue[mustOutCardID] then
                table.insert(enableCards, v)
            else
                for i = CardEnum.CARD_ID.ID_DIAMOND_A, CardEnum.CARD_ID.ID_SPADE_K do
                    if CardEnum.ucCardValue[i] == CardEnum.ucCardValue[v] then
                        table.insert(enableCards, i)
                    end
                end
            end
        end
        self._cardLayer:setCardDisableCard(localSeat, enableCards)
    end
end

function GameLayer:onEventAutoRaise()
    self:showMaskCards()
end

function GameLayer:onEventSwitchCardSize()
    self:setButtonState(self._outCardBtn, false)
    for seat = 0, CF.roomData:getChairs() - 1 do
        local localSeat = CF.roomData:seatToLocal(seat)
        local handCards = self._gameData:getHandCards(seat)
        self._cardLayer:setHandCards(localSeat, handCards)

        local outCards = self._cardLayer:getOutCards(localSeat)
        self._cardLayer:setOutCards(localSeat, outCards)
    end
    self:showMaskCards()
end

return GameLayer ��  