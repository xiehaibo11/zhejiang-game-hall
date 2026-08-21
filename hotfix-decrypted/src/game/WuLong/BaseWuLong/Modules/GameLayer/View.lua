local GameLayer = CF.gameClass("GameLayer", CF.ViewBase)
local CardLogic = CF.gameRequire("Logic.CardLogic")
local CardLayer = CF.gameRequire("Modules.GameLayer.GameCardLayer")
local SpecfCardLayer = CF.gameRequire("Modules.GameLayer.GameSpecfCardLayer")
local GameWinLostLayer = CF.gameRequire("Modules.WinLost.View")
local CardEnum = CF.gameRequire("Define.CardEnum")

function GameLayer:ctor(param)
    param = param or {}
    GameLayer.super.ctor(self, param)
    self:createChildren()
    self:initDatas()
end

function GameLayer:getCSBPath()
    return "res/cocosStudio/WuLong/GameLayer/CSB/NewGameLayer.csb"
end

function GameLayer:getBindingInfo()
    local table = {
        ["_KW_PANEL_CARDLAYER_POS"] = { varName = "_cardLayerPanelPos" },
        ["_KW_PANEL_WINLOSTLAYER_POS"] = { varName = "_winLostLayerPanelPos" },
        --显示提示
        ["_KW_POS_PLAYER_TIP_"] = { varName = "_playerTipPanel", beginIndex = 1, endIndex = 4 },
        --游戏操作按钮 不出、提示、出牌
        ["_KW_PANEL_GAMEPLAY_BTNS"] = { varName = "_gamePlayBtns" },
        ["_KW_BTN_NOT_OUTCARD"] = { varName = "_notOutCardBtn", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onNotOutCardBtnClicked" },
        ["_KW_BTN_TELL_ME"] = { varName = "_tellMeBtn", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onTellMeBtnClicked" },
        ["_KW_BTN_OUTCARD"] = { varName = "_outCardBtn", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onOutCardBtnClicked" },
        ["_KW_BTN_OUTCARD_2"] = { varName = "_outCardBtn2", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onOutCardBtnClicked" },
        ["_KW_BTN_CHAODI"] = { varName = "_chaoDiBtn", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onChaoDiBtnClicked" },
        ["_KW_BTN_NO_BIGGER_CARD"] = { varName = "_noBiggerCardBtn", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onNoBiggerCardBtnClicked" },

        ["_KW_PANEL_PLAYER_CLOCK"] = { varName = "_clockPanelAll" },
        ["_KW_PANEL_PLAYER_CLOCK_"] = { varName = "_clockPanel", beginIndex = 0, endIndex = 4 },
        ["_KW_PLAYER_CLOCK_POS_"] = { varName = "_clockPos", beginIndex = 0, endIndex = 4 },
        --选牌
        ["_KW_PANEL_CARDTYPE_SELECT_POS"] = { varName = "_cardTypeSelectPanelPos" },
        ["_KW_BTN_CHAODI_"] = { varName = "_chaoDiBtnPlayBack", beginIndex = 1, endIndex = 4 },

        ["_KW_PANEL_GAMEPLAY_BTNS_NEW"] = { varName = "_gamePlayBtnsNewPos" },
        ["_KW_PANEL_CHAODI_BTN_NEWPOS"] = { varName = "_chaoDiBtnNewPos" },
        ["_KW_TEXT_DESK_SCORE"] = { varName = "_KW_TEXT_DESK_SCORE" },
        ["_KW_TEXT_DESK_SCORE_PLAY_BACK"] = { varName = "_KW_TEXT_DESK_SCORE_PLAY_BACK" },
        ["_KW_PANEL_DESK_SCORE"] = { varName = "_KW_PANEL_DESK_SCORE" },
        ["_KW_PANEL_DESK_SCORE_PLAY_BACK"] = { varName = "_KW_PANEL_DESK_SCORE_PLAY_BACK" },
    }
    return table
end

function GameLayer:createChildren()
    self:initCardLayer()
    self:initClockPosData()
    self:clearTable()
end

function GameLayer:initDatas()
    self._gameData = CF.game:getModule("GameLayer"):getGameData()
    self._gameModule = CF.game:getModule("GameLayer")
    self._enterGameViewTime = os.time()
    self._gamename = CF.gameSub:getGameNameByGameId(CF.roomData:getGameID())
    self._KW_PANEL_DESK_SCORE:setVisible(not CF.roomData:isPlayBack())
    self._KW_PANEL_DESK_SCORE_PLAY_BACK:setVisible(CF.roomData:isPlayBack())
    self._KW_TEXT_DESK_SCORE:setString("桌面分：0")
    self._KW_TEXT_DESK_SCORE_PLAY_BACK:setString("0")
end

function GameLayer:getProxyEvents()
    local eventTable = {
        { module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_CLEAR_ALL_DESK", callBack = "onPlayerClear" },
        { module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_GAME_START", callBack = "onGameStart" },
        { module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_HAND_CARD_CHANGED", callBack = "onHandCardChanged" },
        { module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_PLAYER_SHOW_OUT_CARD", callBack = "onPlayerShowOutCard" },
        { module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_GAME_WIN_ORDER", callBack = "onGameWinOrder" },
        { module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_GAME_END", callBack = "onGameEnd" },
        { module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_GAME_CAN_CHAODI", callBack = "onCanChaoDi" },
        { module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_GAME_CAN_CHAODI_PLAY_BACK", callBack = "onCanChaoDiPlayBack" },
        { module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_PLAYER_GET_POWER", callBack = "onPlayerGetPower" },
        { module = CF.game:getModule("GameLayer")._gameData, eventKeyName = "EVENT_HANDCARD_UPDATE", callBack = "onHandCardUpdate" },
        { module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_SHOW_ALL_PLAYER_HANDCARDS", callBack = "onShowAllPlayerHandCard" },
        { module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_GAME_SELECT_HINTCARDS", callBack = "onGameSelectHintCards" },
        { module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_GAME_CHANGE_BTNS_STATE", callBack = "onGameChangeBtnsState" },
        { module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_PLAYER_HEAD_CLOCK", callBack = "onPlayerHeadClock" },
        { module = CF.game:getModule("WinLost"), eventKeyName = "EVENT_GAME_WINLOST", callBack = "onGameWinLost" },
        { module = CF.game:getModule("BigWinLost"), eventKeyName = "EVENT_GAME_TOTAL_RESULT", callBack = "onGameTotalResult" },
        { module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_GAME_PLAYER_START", callBack = "clearTable" },
        { module = CF.game:getModule("CenterBtns"), eventKeyName = "EVENT_GAME_JOIN_50_MATCH_LIST", callBack = "clearTable" },
        { module = CF.game:getModule("Continue"), eventKeyName = "EVENT_GAME_CONTINUE", callBack = "onGameContinue" },
        { module = CF.game:getModule("Setting"), eventKeyName = "EVENT_PLAYER_CHANGESEAT", callBack = "onPlayerChangeSeat" },
        { module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_AUTO_PASS", callBack = "onAutoPass" },
        { module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_SPECF_CARD", callBack = "onStartSpecfCards" },
        { module = CF.game:getModule("WinLost"), eventKeyName = "EVENT_WINLOST_SHOWWATCHHAND", callBack = "onShowWatchHandCard" },
        { module = CF.goldManager, eventKeyName = "EVENT_CLEAR_TABLE", callBack = "clearTable" },
        { module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_ALL_CARDS", callBack = "onMsgAllCards" },
        { module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_DESK_SCORE", callBack = "onMsgDeskScore" },
    }
    return eventTable
end

function GameLayer:getAdaptationConfig()
    return {
        { node = self._clockPanel1, bRight = false, bHalf = false },
        { node = self._playerTipPanel1, bRight = false, bHalf = false },
        { node = self._clockPanel3, bRight = true, bHalf = false },
        { node = self._playerTipPanel3, bRight = true, bHalf = false },
    }
end

--初始化牌层
function GameLayer:initCardLayer()
    if self._cardLayer == nil then
        self._cardLayer = CardLayer.new()
        self._cardLayerPanelPos:addChild(self._cardLayer)
    end
    self._cardLayer:clearAllCards()
end

--初始化牌层
function GameLayer:initSpecfCardLayer()
    if self._specfCardLayer == nil then
        self._specfCardLayer = SpecfCardLayer.new()
        self._cardLayerPanelPos:addChild(self._specfCardLayer)
    end
end

--设置操作按钮的可见性
function GameLayer:showPanelGamePlayBtns(bShow, bHaveBiggerCard)
    -- 旁观玩家不显示操作按钮
    if CF.roomData:getIsSeer() then
        return
    end
    if not self._gamePlayBtns then
        return
    end

    if bHaveBiggerCard == nil then
        bHaveBiggerCard = true
    end
    if bShow then
        self._noBiggerCardBtn:setVisible(not bHaveBiggerCard)
        self._notOutCardBtn:setVisible(false)
        self._tellMeBtn:setVisible(bHaveBiggerCard)
        self._outCardBtn:setVisible(bHaveBiggerCard)
        self._outCardBtn2:setVisible(bHaveBiggerCard)
    else
        self._cardLayer:removeNoBiggerSprite()
    end

    self._gamePlayBtns:setVisible(bShow)
end


function GameLayer:onGameStart(event)
    --#是否回放
    self:clearTable()
    if not CF.roomData:isPlayBack() then
        --游戏开始时隐藏左右玩家手牌节点，防止之前逻辑导致的显示左右玩家手牌问题发生
        self._cardLayer:showLeftAndRightHandCardArea(false)
        self:recordData()
    else
        self._cardLayer:showLeftAndRightHandCardArea(true)
    end
end

function GameLayer:onMsgAllCards(event)
    if CF.roomData:isPlayBack() then
        return
    end
    local msgAllCards = event.msg.msg
    if msgAllCards.sSeat == CF.roomData:getSelfSeat() and not CF.roomData:getIsSeer() then
        if not self._specfCardLayer then
            self:initSpecfCardLayer()
        end
        self._specfCardLayer:setAllCards(msgAllCards.ucCards)
        self._specfCardLayer:showSpecfLayer(true)
    end
end

function GameLayer:onMsgDeskScore(event)
    local msg = event.msg.msg
    self._KW_TEXT_DESK_SCORE:setVisible(not CF.roomData:isPlayBack())
    self._KW_TEXT_DESK_SCORE_PLAY_BACK:setVisible(CF.roomData:isPlayBack())
    self._KW_TEXT_DESK_SCORE:setString("桌面分：" .. msg.iDesktopScore)
    self._KW_TEXT_DESK_SCORE_PLAY_BACK:setString(msg.iDesktopScore)
    if msg.sScoreSeat >= 0 then
        if CF.roomData:isPlayBack() then
            return
        end
        local pos = self._KW_PANEL_DESK_SCORE:getPosition()
        local nodePos = self._KW_PANEL_DESK_SCORE:getParent():convertToWorldSpace(cc.p(self._KW_PANEL_DESK_SCORE:getPositionX(), self._KW_PANEL_DESK_SCORE:getPositionY()))
        CF.game:getModule("GameLayer"):showFlyAni(msg.sScoreSeat, nodePos)
    end
end

function GameLayer:recordData()
    local data = {}
    data.Page_name = "GameStart"
    data.Start_time = self._enterGameViewTime or 0
    data.End_time = os.time()
    data.staytime = data.End_time - data.Start_time
    data.userid = CF.selfPlayerData:getNumberID()
    if CF.roomData:isGoldRoom() then
        CF.throwDataManager:throwData(CF.ThrowDataDefine.GoldGamesMatched, data)
    else
        CF.throwDataManager:throwData(CF.ThrowDataDefine.BOX_GAME_START_TIME, data)
    end
end

function GameLayer:onPlayerChangeSeat(event)
    self:clearTable()
end

function GameLayer:clearTable()
    --清除头像数据
    CF.roomData:clearTable()
    self:clearAllPlayerOutCardClock()
    --清除桌面牌
    self._cardLayer:clearAllCards()
    --隐藏小结束
    self:clearWinLostLayer()
    --隐藏操作按钮
    self:showPanelGamePlayBtns(false)
    --隐藏抄底按钮
    self:showChaoDiBtn(false)
    if CF.roomData:isPlayBack() then
        self.isHideChaoDiPlaybBack = false
    end
    CF.game:getModule("GameLayer")._playerEndState = false
    --关闭等待弹窗
    CF.TipTool.clearScrollTip()
end

function GameLayer:clearWinLostLayer()
    if self._winLostLayer and not tolua.isnull(self._winLostLayer) then
        self._winLostLayer:removeFromParent()
        self._winLostLayer = nil
    end
end

--设置抄底按钮的可见性
function GameLayer:showChaoDiBtn(bShow)
    if not self._chaoDiBtn then
        return
    end
    if CF.roomData:getIsSeer() then
        bShow = false
    end
    self._chaoDiBtn:setVisible(bShow)
end

function GameLayer:onNotOutCardBtnClicked(send, eventType)
    if CF.roomData and CF.roomData:isPlayBack() then
        return
    end

    --隐藏操作按钮
    self:showPanelGamePlayBtns(false)

    --逻辑由mananger处理
    CF.game:getModule("GameLayer"):onNotOutCardClick()
end

function GameLayer:onShowWatchHandCard(event)
    local msg = event.msg
    local localSeat = CF.roomData:seatToLocal(msg.seat)
    self._cardLayer:setHandCards(localSeat, self._gameData:getHandCardIDs(msg.seat), false)
end

function GameLayer:onHandCardChanged(event)
    local msg = event.msg
    local localSeat = CF.roomData:seatToLocal(msg.seat)
    if msg.bIsShow then
        self._cardLayer:setHandCards(localSeat, self._gameData:getHandCardIDs(msg.seat), msg.bPlayAni)
        if msg.bPlayAni and msg.seat == CF.roomData:getSelfSeat() then
            CF.soundManager:playSoundStart()
        end
    else
        if CF.roomData:getIsSeer() and localSeat == CF.roomData:getSelfLocalSeat() then
            self._cardLayer:setHandCards(localSeat, self._gameData:getHandCardIDs(msg.seat), msg.bPlayAni)
        else
            self._cardLayer:clearHandCard(localSeat)
        end
    end
    if CF.roomData:getIsSeer() and localSeat == CF.roomData:getSelfLocalSeat() then
        return
    end
    if msg.seat ~= CF.roomData:getSelfSeat() then
        local isOpenHand = false
        if msg.bIsShow then
            local cardIDs = self._gameData:getHandCardIDs(msg.seat)
            if CardLogic.isBackHandCards(cardIDs) then
                isOpenHand = false
            else
                isOpenHand = true
            end
        end

        if not isOpenHand then
            self._cardLayer:clearHandCard(localSeat)
        end
    end
end

function GameLayer:onlyShowOutCard(event)
    local msg = event.msg
    local localSeat = CF.roomData:seatToLocal(msg.seat)
    local outCardIDs = msg.outCardIDs
    if #outCardIDs > 0 then
        self._cardLayer:setOutCards(localSeat, outCardIDs, false)

        local handCardIDs = self._gameData:getHandCardIDs(msg.seat)
        if not CardLogic.isBackHandCards(handCardIDs) then
            local _, newHandCardIDs = CardLogic.deleteCardIDs(handCardIDs, outCardIDs)
            self._cardLayer:setHandCards(localSeat, newHandCardIDs)
        else
            if CF.roomData:getIsSeer() and msg.seat == CF.roomData:getSelfSeat() then
                for i = 1, #outCardIDs do
                    outCardIDs[i] = 0
                end
                local _, newHandCardIDs = CardLogic.deleteCardIDs(handCardIDs, outCardIDs)
                self._cardLayer:setHandCards(localSeat, newHandCardIDs)
            end
        end
    end

    self:stopOutCardClock(localSeat)
end

function GameLayer:onPlayerShowOutCard(event)
    --隐藏操作按钮
    self:showPanelGamePlayBtns(false)
    --隐藏抄底按钮
    self:showChaoDiBtn(false)
    if CF.roomData:isPlayBack() then
        self:hideChaoDiPlayBack()
    end

    local msg = event.msg
    if msg.ani == false then
        self:onlyShowOutCard(event)
        return
    end
    local localSeat = CF.roomData:seatToLocal(msg.seat)
    local outCardIDs = msg.outCardIDs
    if #outCardIDs > 0 then
        CF.soundManager:playSoundOut()
        -- 牌型音效
        local player = CF.roomData:getPlayerDataBySeatId(msg.seat)
        if player then
            local power = CardLogic.getMinPowerInCardIDs(outCardIDs) --最小的牌权值即为牌型的牌权值
            local bFangYan = not CF.settingData:getDoubleKouIsNormalVoice()
            local gameid = CF.roomData:getGameID()
            CF.soundManager:playSoundPlayCardType(player:getSex(), msg.cardType, power, bFangYan, gameid, outCardIDs)
        end

        --显示附带动画
        self:showCardTypeAni(msg.seat, msg.cardType, outCardIDs)

        self._cardLayer:setOutCards(localSeat, outCardIDs, false)

        local handCardIDs = self._gameData:getHandCardIDs(msg.seat)
        if not CardLogic.isBackHandCards(handCardIDs) then
            local _, newHandCardIDs = CardLogic.deleteCardIDs(handCardIDs, outCardIDs)
            self._cardLayer:setHandCards(localSeat, newHandCardIDs)
        else
            if CF.roomData:getIsSeer() and msg.seat == CF.roomData:getSelfSeat() then
                for i = 1, #outCardIDs do
                    outCardIDs[i] = 0
                end
                local _, newHandCardIDs = CardLogic.deleteCardIDs(handCardIDs, outCardIDs)
                self._cardLayer:setHandCards(localSeat, newHandCardIDs)
            end
        end
    else
        CF.soundManager:playSoundPass()
        self:showPassAni(localSeat)
    end

    self:stopOutCardClock(localSeat)
end

function GameLayer:initClockPosData()
    self._clockPosTable = {}
    for i = 0, 4 do
        if self["_clockPos" .. i] then
            local pos = {}
            pos.x, pos.y = self["_clockPos" .. i]:getPosition()
            self._clockPosTable[i] = pos
        end
    end
end

function GameLayer:clearAllPlayerOutCardClock()
    self._lastOutCardClockLocalSeat = nil
    for i = 0, CF.roomData:getMaxPlayer() do
        self:stopOutCardClock(i)
    end
end

function GameLayer:stopOutCardClock(localSeat)
    local outCardTimePanel = self["_clockPanel" .. localSeat]
    outCardTimePanel:stopAllActions()
    outCardTimePanel:setVisible(false)
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
    local clockBG = ccui.Helper:seekWidgetByName(clockPanel, "KW_IMG_OUT_CARD_TIME_BG")
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
    local outCardTimeText = ccui.Helper:seekWidgetByName(clockPanel, "_KW_TEXT_OUT_CARD_TIME")
    if outCardTimeText then
        if isXGSJ then
            outCardTimeText:setFntFile("cocosStudio/Common/Font/Fnt_miaoz-export.fnt")
        else
            outCardTimeText:setFntFile("cocosStudio/Common/Font/naozhong_num-export.fnt")
        end
    end
end

function GameLayer:playClockDaoJiShiAni(clockPanel)
    local isXGSJ = CF.settingData:getXGClock()
    local clockBG = ccui.Helper:seekWidgetByName(clockPanel, "KW_IMG_OUT_CARD_TIME_BG")
    if clockBG then
        clockBG:setVisible(isXGSJ == false)
        if isXGSJ then
            local aniNode = self:getClockAniNode(clockBG)
            local info = XH.XGSJ_BUNDLE_INFO[XH.XGSJ_PROP_ID.CLOCK]
            XH.SpineManager:playAni(aniNode, info.aniPath, info.filename, info.animationDaoJiShi, false)
        else
            local aniNode = self:getClockAniNode(clockBG)
            if aniNode then
                aniNode:removeFromParent()
            end
        end
    end
    local outCardTimeText = ccui.Helper:seekWidgetByName(clockPanel, "_KW_TEXT_OUT_CARD_TIME")
    if outCardTimeText then
        if isXGSJ then
            outCardTimeText:setFntFile("cocosStudio/Common/Font/Fnt_miaoz-export.fnt")
        else
            outCardTimeText:setFntFile("cocosStudio/Common/Font/naozhong_num-export.fnt")
        end
    end
end

local KW_CLOCK_MOVE_NEED_TIME = 0.3
function GameLayer:startOutCardClock(localSeat, nTime, firstTime)
    if not firstTime and CF.roomData:isGoldRoom() then
        self:startFirstOutCardClock(localSeat, nTime)
        return
    end
    if nTime >= 0 then
        --设置时钟数字
        local outCardTimePanel = self["_clockPanel" .. localSeat]
        self:playClockLoopAni(outCardTimePanel)
        local outCardTimeText = ccui.Helper:seekWidgetByName(outCardTimePanel, "_KW_TEXT_OUT_CARD_TIME")
        outCardTimeText:setString(string.format("%02d", nTime))
        outCardTimePanel:stopAllActions()
        local delay = cc.DelayTime:create(1)
        local callback =        cc.CallFunc:create(
        function()
            nTime = nTime - 1
            outCardTimeText:setString(string.format("%02d", nTime))
            if nTime < 5 then
                CF.soundManager:playSoundClock()
            end
            if nTime <= 3 then
                self:playClockDaoJiShiAni(outCardTimePanel)
                self:playClockShakeAction(localSeat)
            end
            if nTime <= 0 then
                outCardTimePanel:stopAllActions()
            end
        end
        )
        local squence = cc.Repeat:create(cc.Sequence:create(delay, callback), nTime)
        outCardTimePanel:runAction(squence)

        if self._lastOutCardClockLocalSeat ~= nil then
            self:startFlyClockAction(localSeat, nTime)
        else
            outCardTimePanel:setVisible(true)
        end
        if CF.roomData and localSeat ~= CF.roomData:getSelfLocalSeat() and CF.roomData:isGoldRoom() then
            CF.game:getModule("Player"):dispatchEvent({ name = CF.game:getModule("Player").EVENT_HIDE_LEFTTIME_TIP, msg = { localSeat = localSeat } })
        end
    else
        self:stopOutCardClock(localSeat)
    end
    self._lastOutCardClockLocalSeat = localSeat
end

function GameLayer:startFirstOutCardClock(localSeat, nTime)
    local outCardTime = nTime
    local firstTime = 8
    nTime = outCardTime - firstTime
    if nTime >= 0 then
        nTime = firstTime
        --设置时钟数字
        local outCardTimePanel = self["_clockPanel" .. localSeat]
        self:playClockLoopAni(outCardTimePanel)
        local outCardTimeText = ccui.Helper:seekWidgetByName(outCardTimePanel, "_KW_TEXT_OUT_CARD_TIME")
        outCardTimeText:setString(string.format("%02d", nTime))
        outCardTimePanel:stopAllActions()
        local delay = cc.DelayTime:create(1)
        local callback =        cc.CallFunc:create(
        function()
            nTime = nTime - 1
            outCardTimeText:setString(string.format("%02d", nTime))
            if nTime <= 0 then
                outCardTimePanel:stopAllActions()
                self:startOutCardClock(localSeat, outCardTime - firstTime, true)
            end
        end
        )
        if self._lastOutCardClockLocalSeat ~= nil then
            self:startFlyClockAction(localSeat, nTime)
        else
            outCardTimePanel:setVisible(true)
        end
        local squence = cc.Repeat:create(cc.Sequence:create(delay, callback), nTime)
        outCardTimePanel:runAction(squence)
    else
        self:startOutCardClock(localSeat, outCardTime, true)
    end
    self._lastOutCardClockLocalSeat = localSeat
end

function GameLayer:playClockShakeAction(localSeat)
    if CF.roomData and CF.roomData:getIsFastPlay() then
        return
    end
    local posPanel = self["_clockPos" .. localSeat]
    --抖屏动画
    -- local actMoveRight1 = cc.MoveBy:create(0.08,cc.p(10, 0))
    -- local actMoveRight2 = cc.MoveBy:create(0.08,cc.p(20, 0))
    -- local actMoveLeft = cc.MoveBy:create(0.08,cc.p(-20, 0))
    local actMoveUp = cc.MoveBy:create(0.08, cc.p(0, 20))
    local actMoveDown = cc.MoveBy:create(0.08, cc.p(0, -20))

    local actMoveRight1 = cc.RotateBy:create(0.08, 10)
    local actMoveRight2 = cc.RotateBy:create(0.08, 20)
    local actMoveLeft = cc.RotateBy:create(0.08, -20)

    local finalFunc =    cc.CallFunc:create(
    function()
        if self._clockPosTable[localSeat] then
            posPanel:setPosition(self._clockPosTable[localSeat])
        end
    end
    )
    posPanel:runAction(
    cc.Sequence:create(actMoveRight1, actMoveLeft, actMoveRight2, actMoveLeft, actMoveRight2, actMoveLeft, actMoveRight1, cc.DelayTime:create(0.2), actMoveUp, actMoveDown, finalFunc)
    )
end

local KW_NAME_CLOCK_FLY_PANEL = "DoubleKouClockFlyPanel"
function GameLayer:startFlyClockAction(localSeat, nTime)
    if CF.roomData and CF.roomData:getIsFastPlay() then
        return
    end
    local outCardTimePanel = self["_clockPanel" .. localSeat]
    local posPanelNow = self["_clockPos" .. localSeat]
    local posPanelLast = self["_clockPos" .. self._lastOutCardClockLocalSeat]
    if posPanelNow and posPanelLast then
        --先移除原有动画
        local flyPanel = self._clockPanelAll:getChildByName(KW_NAME_CLOCK_FLY_PANEL)
        if flyPanel then
            flyPanel:stopAllActions()
            flyPanel:removeFromParent()
        end
        local posLast = posPanelLast:convertToWorldSpace(cc.p(0, 0))
        local posNow = posPanelNow:convertToWorldSpace(cc.p(0, 0))
        local posLastAfterConvert = self._clockPanelAll:convertToNodeSpace(posLast)
        local posNowAfterConvert = self._clockPanelAll:convertToNodeSpace(posNow)

        local tempPosPanel = posPanelLast:clone()
        self:playClockLoopAni(tempPosPanel)
        tempPosPanel:setName(KW_NAME_CLOCK_FLY_PANEL)
        tempPosPanel:setPosition(posLastAfterConvert)
        local outCardTimeText = ccui.Helper:seekWidgetByName(tempPosPanel, "_KW_TEXT_OUT_CARD_TIME")
        outCardTimeText:setString(string.format("%02d", nTime))
        self._clockPanelAll:addChild(tempPosPanel)

        local moveToAction = cc.MoveTo:create(KW_CLOCK_MOVE_NEED_TIME, posNowAfterConvert)
        local aftermoveToCall = function()
            tempPosPanel:setVisible(false)
            outCardTimePanel:setVisible(true)
        end
        local moveToAni = cc.Sequence:create(moveToAction, cc.CallFunc:create(aftermoveToCall))
        tempPosPanel:runAction(moveToAni)
        tempPosPanel:setVisible(true)
    end
end

--显示牌型动画
function GameLayer:showCardTypeAni(seat, cardType, outCardIDs)
    if CF.roomData and CF.roomData:getIsFastPlay() then
        return
    end
    self._cardLayer:playCardTypeAction(seat, cardType, outCardIDs)
end

function GameLayer:onGameWinOrder(event)
    local msg = event.msg
    local localSeat = CF.roomData:seatToLocal(msg.seat)
    self._cardLayer:clearHandCard(localSeat)
end

function GameLayer:onGameEnd(event)
    self:clearAllPlayerOutCardClock()

    self:showPanelGamePlayBtns(false)    --隐藏操作按钮

    --显示左右玩家手牌节点
    self._cardLayer:showLeftAndRightHandCardArea(true)

    local data = {}
    data.time1 = self._gameStartTime or 0
    data.time2 = os.time() or 0
    data.staytime = data.time2 - data.time1
    data.userid = CF.selfPlayerData:getNumberID()
    data.appid = CF.roomData:getGameID()
    data.roomid = CF.roomData:getRoomID()
    CF.throwDataManager:throwData(CF.ThrowDataDefine.GameStarted, data)
end

function GameLayer:onCanChaoDi(event)
    self:showChaoDiBtn(true)
end

function GameLayer:onCanChaoDiPlayBack(event)
    if not CF.roomData:isPlayBack() then
        return
    end
    local maxPlayer = CF.roomData:getMaxPlayer()
    local localSeat = CF.roomData:seatToLocal(event.seat % maxPlayer)
    self["_chaoDiBtnPlayBack" .. localSeat]:setVisible(true)
end

function GameLayer:hideChaoDiPlayBack()
    if self.isHideChaoDiPlaybBack == false then
        local maxPlayer = CF.roomData:getMaxPlayer()
        for i = 1, maxPlayer do
            self["_chaoDiBtnPlayBack" .. i]:setVisible(false)
        end
        self.isHideChaoDiPlaybBack = true
    end
end

function GameLayer:onPlayerGetPower(event)
    self:showPanelGamePlayBtns(false)
    local maxPlayer = CF.roomData:getMaxPlayer()
    local preOutSeat = self._gameData:getPreOutSeat()
    local powerSeat = self._gameData:getPowerSeat()
    if preOutSeat ~= maxPlayer then
        local sEndSeat = powerSeat
        if preOutSeat >= powerSeat then
            sEndSeat = powerSeat + maxPlayer
        end
        for i = preOutSeat + 1, sEndSeat do
            local localSeatNeedClear = CF.roomData:seatToLocal(i % maxPlayer)
            self._cardLayer:clearOutCard(localSeatNeedClear)
        end
    end

    self:clearPassAni(powerSeat)

    if powerSeat ~= CF.roomData:getSelfSeat() then
        return
    end

    self._cardLayer:clearOutCard(CF.roomData:getSelfLocalSeat())
    if CF.roomData:getIsSeer() then
        return
    end

    local msg = event.msg
    if not msg.bChaoDi then
        self:showChaoDiBtn(false)
    end

    local bHaveBiggerCard = true
    if not msg.bChaoDi then
        local hintCards = self._gameData:getHintCards()
        if not hintCards or #hintCards <= 0 then
            --显示没有大过上家的牌动画
            self._cardLayer:showNoBiggerSprite()
            bHaveBiggerCard = false
        end
    end

    --显示操作按钮
    self:showPanelGamePlayBtns(true, bHaveBiggerCard)
    self._notOutCardBtn:setEnabled(false)

    local selectCardIDs = self._cardLayer:getSelectCardIDs(CF.roomData:getSelfLocalSeat())
    local bCanOut = CF.game:getModule("GameLayer"):checkSelfCanOutCard(selectCardIDs)
    self._outCardBtn:setEnabled(bCanOut)
    self._outCardBtn2:setEnabled(bCanOut)
    if not bCanOut then
        self._cardLayer:resetHandCards() --不能出牌，手牌收回
    end
    if not msg.bChaoDi then
        local hintCards = self._gameData:getHintCards()
        if not hintCards or #hintCards <= 0 then

        else
            self:onTellMeBtnClicked()
        end
    end
end

-- 过动画
function GameLayer:clearPassAni(powerSeat)
    if CF.roomData and CF.roomData:getIsFastPlay() then
        return
    end
    local localSeat = CF.roomData:seatToLocal(powerSeat)
    local playerTipPanel = self["_playerTipPanel" .. localSeat]
    if playerTipPanel then
        local passSprite = playerTipPanel:getChildByName("doublekou_text_guo")
        if passSprite then
            passSprite:removeFromParent()
        end
    end
end

function GameLayer:showPassAni(localSeat)
    if CF.roomData and CF.roomData:getIsFastPlay() then
        return
    end
    local playerTipPanel = self["_playerTipPanel" .. localSeat]
    if playerTipPanel then
        local passSprite = playerTipPanel:getChildByName("doublekou_text_guo")
        if not passSprite then
            passSprite = cc.Sprite:create()
        end
        if passSprite then
            passSprite:stopAllActions()
            passSprite:setSpriteFrame("doublekou_text_guo.png")
            passSprite:setName("doublekou_text_guo")
            playerTipPanel:addChild(passSprite)
            local delayAction = cc.DelayTime:create(0.2 + 0.2)
            local fadeOutAction = cc.FadeOut:create(0.4)
            local removeAction =            cc.CallFunc:create(
            function()
                passSprite:removeFromParent()
            end
            )
            passSprite:runAction(cc.Sequence:create(delayAction, fadeOutAction, removeAction))
        end
    end
end

function GameLayer:onHandCardUpdate(event)
    --有座位号表示只更新一个人手牌
    if event.msg ~= nil and event.msg.seat ~= nil then
        local cardIDs = self._gameData:getHandCardIDs(event.msg.seat)
        local localSeat = CF.roomData:seatToLocal(event.msg.seat)
        -- local cardCount = self._gameData:getHandCardNum(event.msg.seat)

        if not CardLogic.isBackHandCards(cardIDs) then
            if event.msg.bDeleteCard then
                local viewHandCardIDs = self._cardLayer:getHandCards(localSeat)
                local bSame = CardLogic.checkTwoCardDataIsSame(cardIDs, viewHandCardIDs)
                if not bSame then
                    self._cardLayer:setHandCards(localSeat, cardIDs, false)
                end
            else
                self._cardLayer:setHandCards(localSeat, cardIDs, false)
            end
        end
        return
    end
    self:updateAllHandCards()
end

function GameLayer:updateAllHandCards()
    for seat = 0, CF.roomData:getMaxPlayer() - 1 do
        local cardIDs = self._gameData:getHandCardIDs(seat)
        if cardIDs ~= nil then
            local localSeat = CF.roomData:seatToLocal(seat)
            -- local cardCount = self._gameData:getHandCardNum(seat)

            if not CardLogic.isBackHandCards(cardIDs) then
                self._cardLayer:setHandCards(localSeat, cardIDs, false)
            end

            -- if self._playerHeads[localSeat] then
            --     self._playerHeads[localSeat]:setLeftCardNum(cardCount)
            -- end
        end
    end
end

function GameLayer:onShowAllPlayerHandCard(event)
    for seat = 0, CF.roomData:getMaxPlayer() - 1 do
        --隐藏剩余牌数
        local localSeat = CF.roomData:seatToLocal(seat)
        --显示手牌
        local cardIDs = self._gameData:getHandCardIDs(seat)
        if cardIDs ~= nil then
            if not CardLogic.isBackHandCards(cardIDs) then
                self._cardLayer:setHandCards(localSeat, cardIDs, false)
                -- self:moveHeadWithOpenHand(localSeat)--播放头像移动动画
            end
        end
    end
    --显示左右玩家手牌节点
    self._cardLayer:showLeftAndRightHandCardArea(true)
end

function GameLayer:onGameSelectHintCards(event)
    local msg = event.msg
    self._cardLayer:setSelfSelectCards(msg.hintCardIDs)
end

function GameLayer:onGameChangeBtnsState(event)
    local msg = event.msg
    if self._outCardBtn and msg.btnTagFlag == CF.GameDefine.GAME_BTNS_TAG_FLAG.BTN_OUTCARD then
        self._outCardBtn:setEnabled(msg.state)
        self._outCardBtn2:setEnabled(msg.state)
        if msg.state == false and msg.isBg then
            self._cardLayer:resetHandCards()
        end
    end
end

function GameLayer:onOutCardBtnClicked(send, eventType)
    if CF.roomData:isPlayBack() then
        return
    end

    local outCardIDs = self._cardLayer:getSelectCardIDs()
    local eventDispatcher = cc.Director:getInstance():getEventDispatcher()
    local event = cc.EventCustom:new("UICardLayer.UICardArea.onEventOutCards")
    event.outCardIDs = outCardIDs
    eventDispatcher:dispatchEvent(event)
    --出牌数据数据统计
    local data = {}
    data.time1 = self._StartTime or 0
    data.time2 = os.time() or 0
    data.staytime = data.time2 - data.time1
    data.gamename = self._gamename
    CF.throwDataManager:throwDataClick(CF.ThrowDataDefine.TABLE_17, data)
end

function GameLayer:onTellMeBtnClicked(send, eventType)
    if CF.roomData:isPlayBack() then
        return
    end

    local hintCardIDs = self._gameData:getHintCardIDs()
    if not hintCardIDs or #hintCardIDs <= 0 then
        self:showPanelGamePlayBtns(false)
        CF.game:getModule("GameLayer"):onNotOutCardClick()
        return
    end

    self._cardLayer:setSelfSelectCards(hintCardIDs)
    self._outCardBtn:setEnabled(true)
    self._outCardBtn2:setEnabled(true)
    CF.throwDataManager:throwDataClick(CF.ThrowDataDefine.TABLE_16, { gamename = self._gamename })
end

function GameLayer:onChaoDiBtnClicked(send, eventType)
    --隐藏操作按钮
    self:showPanelGamePlayBtns(false)
    self._chaoDiBtn:setVisible(false)
    CF.msgManager:sendPlayerChaoDi()
end

function GameLayer:onNoBiggerCardBtnClicked(send, eventType)
    --隐藏操作按钮
    self:showPanelGamePlayBtns(false)
    CF.game:getModule("GameLayer"):onNotOutCardClick()
end

function GameLayer:onPlayerHeadClock(event)
    -- 如果不是在游戏中，不处理倒计时消息
    if not CF.roomData:getIsGameStart() then
        return
    end
    local msg = event.msg
    local nTime = msg.nTime
    local localSeat = CF.roomData:seatToLocal(msg.seat)
    if msg.seat == CF.roomData:getMaxPlayer() then
        for i = 1, CF.roomData:getMaxPlayer() do
            self:stopOutCardClock(i)
        end
        self:startOutCardClock(0, nTime, true)
    else
        for i = 0, CF.roomData:getMaxPlayer() do
            if i == localSeat then
                self:startOutCardClock(i, nTime)
            else
                self:stopOutCardClock(i)
            end
        end
        if localSeat == CF.GameDefine.LOCAL_SEAT.BOTTOM then
            self._StartTime = os.time()
        end
    end

end

function GameLayer:onGameWinLost(event)
    self._gameData:setIsHaveResult(true)
    self:clearAllPlayerOutCardClock()
    CF.game:getModule("Marker"):showMarkerLine(false)
    local winLostData = self._gameData:getWinLostData()

    if CF.roomData and CF.roomData:isDelayWatch() and CF.game:getModule("WinLost"):getHideWinlostUI() then
        CF.game:getModule("WinLost"):setHideWinlostUI(false)
        return
    end
    if not self._winLostLayer or tolua.isnull(self._winLostLayer) then
        self._winLostLayer = GameWinLostLayer.new()
        self._winLostLayer:showSelf()
    end
    self._winLostLayer:setWinLostData(winLostData)
    self._winLostLayer:setVisible(true)
    if CF.roomData:isGoldRoom() then
        CF.game:getModule("ChangeLevel"):show()
        if CF.selfPlayerData:getIsNewUserGuide() and CF.selfPlayerData:getIsFirstGoldGame() then
            self._winLostLayer:setLocalZOrder(CF.ZORDER.DIALOG)
            CF.selfPlayerData:setIsFirstGoldGame(false)
        end
    end
    CF.soundManager:playSoundEnd()
end

function GameLayer:onGameTotalResult(event)
    self._gameData:setBigSettleData(nil)
    self:clearAllPlayerOutCardClock()

    local msg = event.msg
    CF.roomData:setIsGameOver(msg.show)
    if not msg.show then
        return
    end

    if msg.show and not self._gameData:getIsHaveResult() then
        self:clearWinLostLayer()
        self._gameData:setBigSettleData(nil)
        local BigWinLostLayer = CF.gameRequire("Modules.BigWinLost.View")
        local layer = BigWinLostLayer.new(msg)
        layer:setCanContinue(CF.roomData:isCanContinue())
        layer:showSelf()
    elseif msg.show then
        self._gameData:setBigSettleData(msg)
    end
end

--续桌
function GameLayer:onGameContinue(event)
    local msg = event.msg
    if msg.bSuccess then
        self:clearTable()
    end
end

function GameLayer:onAutoPass(event)
    --隐藏操作按钮
    self:showPanelGamePlayBtns(false)

    --逻辑由mananger处理
    CF.game:getModule("GameLayer"):onNotOutCardClick()
end

function GameLayer:onStartSpecfCards(event)
    if CF.roomData:isPlayBack() then
        return
    end
    if not self._specfCardLayer then
        self:initSpecfCardLayer()
    end
    local msg = event.msg
    self._specfCardLayer:setAllCards(msg.cards, msg.cardCount)
    self._specfCardLayer:showSpecfLayer(true)
end

function GameLayer:onPlayerClear()
    for i = 1, 4 do
        self._cardLayer:clearOutCard(i)
    end
end

return GameLayer   A�  