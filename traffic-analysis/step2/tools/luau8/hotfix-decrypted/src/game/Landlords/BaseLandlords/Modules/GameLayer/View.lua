local GameLayer             = CF.gameClass("GameLayer", CF.ViewBase)
local CardLayer             = CF.gameRequire("Modules.GameLayer.GameCardLayer")
local CardModule            = CF.gameRequire("Modules.CardLayer.Card")
local AnimationManager      = CF.gameRequire("Manager.AnimationManager")
local CardType              = CF.gameRequire("Define.CardType")
local SpecfCardLayer        = CF.gameRequire("Modules.GameLayer.GameSpecfCardLayer")

function GameLayer:ctor(param)
    param = param or {}
    GameLayer.super.ctor(self, param)
    self:initDatas()
    self:createChildren()
    self:clearTable()
end

function GameLayer:getCSBPath()
    return "res/cocosStudio/Landlords/GameLayer/CSB/NewGameLayer.csb"
end

function GameLayer:getBindingInfo()
    return {
        --牌层节点
        ["_KW_PANEL_CARDLAYER_POS"] = {varName = "_cardLayerPanelPos"},
        ["_KW_PANEL_WINLOSTLAYER_POS"] = {varName = "_winLostLayerPanelPos"},
        --显示提示
        ["_KW_POS_PLAYER_TIP_"] = {varName = "_playerTipPanel", beginIndex = 1, endIndex = 4},
        --排序按钮
        ["_KW_BTN_CARD_SORT"] = {varName = "_sortCardBtn", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onSortCardBtnClicked"},
        --闹钟
        ["_KW_PANEL_PLAYER_CLOCK_"] = {varName = "_clockPanel", beginIndex = 1, endIndex = 4},
        -- 底牌  
        ["_KW_PANEL_DIPAI"] = {varName = "_backCardPanel"},
        ["_KW_PANAEL_DIPAI_SUB_"] = {varName = "_backCardSubPanel",beginIndex = 1, endIndex = 3},
        --游戏操作按钮 不出、提示、出牌
        ["_KW_PANEL_GAMEPLAY_BTNS"] = {varName = "_gamePlayBtns"},
        ["_KW_BTN_NOT_OUTCARD"] = {varName = "_notOutCardBtn", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onNotOutCardBtnClicked"},
        ["_KW_BTN_TELL_ME"] = {varName = "_tellMeBtn", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onTellMeBtnClicked"},
        ["_KW_BTN_OUTCARD"] = {varName = "_outCardBtn", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onOutCardBtnClicked"},
        --游戏操作按钮 要不起
        ["_KW_BTN_YAOBUQI"] = {varName = "_yaoBuQiBtns", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onYaoBuQiBtnClicked"},
        -- 叫地主分值按钮
        ["_KW_PANEL_ROB_LANDLORD_BTNS_0"] = {varName = "_robLandlordScoreBtns"},
        ["_KW_BTN_ROB_SCORE_BUJIAO"] = {varName = "_notRobScoreBtn", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onNotRobLandlordBtnClicked"},
        ["_KW_BTN_ROB_SCORE_"] = {varName = "_robScoreBtn", beginIndex = 1, endIndex = 3, type = CF.UI_TYPE.BUTTON, onTouchEnded = "onRobScoreBtnClicked"},
        -- 叫地主按钮
        ["_KW_PANEL_ROB_LANDLORD_BTNS_1"] = {varName = "_robLandlordBtns"},
        ["_KW_BTN_NOT_CALL_LANDLORD"] = {varName = "_notCallLandlordBtn", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onNotRobLandlordBtnClicked"},
        ["_KW_BTN_CALL_LANDLORD"] = {varName = "_callLandlordBtn", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onCallLandlordBtnClicked"},
        ["_KW_BTN_NOT_ROB_LANDLORD"] = {varName = "_notRobLandlordBtn", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onNotRobLandlordBtnClicked"},
        ["_KW_BTN_ROB_LANDLORD"] = {varName = "_robLandlordBtn", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onRobLandlordBtnClicked"},
        -- 明牌按钮
        ["_KW_PANEL_SHOW_HAND_BTNS"] = {varName = "_showHandBtns"},
        ["_KW_BTN_NOT_SHOW_HAND"] = {varName = "_notShowHandBtn", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onNotShowHandBtnClicked"},
        ["_KW_BTN_SHOW_HAND"] = {varName = "_showHandBtn", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onShowHandBtnClicked"},
        -- 加倍按钮
        ["_KW_PANEL_SET_DOUBLE_BTNS"] = {varName = "_setDoubleBtns"},
        ["_KW_BTN_NOT_SET_DOUBLE"] = {varName = "_notSetDoubleBtn", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onNotSetDoubleBtnClicked"},
        ["_KW_BTN_SET_DOUBLE"] = {varName = "_setDoubleBtn", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onSetDoubleBtnClicked"},
    }
end

function GameLayer:createChildren()
    self:initBackCard()
    self:initCardLayer()
end

function GameLayer:initDatas()
    self._gameData = CF.game:getModule("GameLayer"):getGameData()
    self._cardLogic = CF.game:getModule("GameLayer"):getCardLogic()
    self._enterGameViewTime = os.time()
    self._delayWinLostTime = 0
    self._cacheTipSprite = {}
    self._gamename = CF.gameSub:getGameNameByGameId(CF.roomData:getGameID())
end

function GameLayer:getProxyEvents()
    local eventTable = {
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_GAME_START", callBack = "onGameStart"},
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_PLAYER_HEAD_CLOCK", callBack = "onPlayerHeadClock"},
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_HAND_CARD_CHANGED", callBack = "onHandCardChanged"},
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_PLAYER_GET_POWER", callBack = "onPlayerGetPower"},
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_SHOW_ALL_PLAYER_HANDCARDS", callBack = "onShowAllPlayerHandCards"},
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_SHOW_ROB_LANDLORDS_VIEW", callBack = "onShowRobLandlordsView"},
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_SHOW_ROB_LANDLORDS_RESULT_VIEW", callBack = "onShowRobLandlordsResultView"},
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_SHOW_LANDLORD_SEAT", callBack = "onShowLandlordSeat"},
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_SHOW_BACK_CARD", callBack = "onShowBackCard"},
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_SHOW_HANDCARD_POWER", callBack = "onShowHandCardPower"},
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_SHOW_HANDCARD_RESULT", callBack = "onShowHandCardResult"},
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_SHOW_SET_DOUBLE_POWER", callBack = "onShowSetDoublePower"},
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_SHOW_SET_DOUBLE_RESULT", callBack = "onShowSetDoubleResult"},
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_PLAY_CARD_RESULT", callBack = "onPlayCardResult"},
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_GAME_SELECT_HINTCARDS", callBack = "onSelectHintCards"},
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_GAME_HINTCARDS_CANOUT", callBack = "onHintCardsCanOut"},
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_GAME_CONTINUE", callBack = "onGameContinue"},
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_DO_CARDS", callBack = "onMsgAllDoCards"},
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_GAME_PLAYER_START", callBack = "clearTable"},
        {module = CF.game:getModule("Continue"), eventKeyName  = "EVENT_GAME_CONTINUE", callBack = "onGameContinue"},
        {module = CF.game:getModule("WinLost"),  eventKeyName  = "EVENT_GAME_WINLOST", callBack = "onGameWinLost"},
        {module = CF.game:getModule("BigWinLost"),eventKeyName = "EVENT_GAME_TOTAL_RESULT", callBack = "onGameTotalResult"},
        {module = CF.goldManager, eventKeyName = "EVENT_MATCH_STATUS_CHANGE", callBack = "onMatchStatusEvent"},
        {module = CF.roomData, eventKeyName = "EVENT_PLAYER_START", callBack = "onSelfPlayerStart"},
        {module = CF.game:getModule("Match"), eventKeyName = "EVENT_MATCH_STATE_CHANGED", callBack = "onMatchStateChanged" },
        {module = CF.settingData, eventKeyName = "EVENT_LANDLORDS_BACK_STYLE_CHANGED", callBack = "onEventCardStyle"},
    }
    return eventTable
end

function GameLayer:getAdaptationConfig()
    return {
        {node = self._clockPanel1, bRight = false, bHalf = false},
        {node = self._playerTipPanel1, bRight = false, bHalf = false},
        {node = self._clockPanel3, bRight = true, bHalf = false},
        {node = self._playerTipPanel3, bRight = true, bHalf = false},
        {node = self._sortCardBtn, bRight = true, bHalf = false},
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

function GameLayer:clearTable()
    self:clearAllPlayerOutCardClock()
    --清除桌面牌
    self._cardLayer:clearAllCards()
    --清除提示文本
    self:clearNormalTips()
    --隐藏操作按钮
    self._gamePlayBtns:setVisible(false)
    --要不起
    if self._yaoBuQiBtns then
        self._yaoBuQiBtns:setVisible(false)
    end
    -- 隐藏底牌
    self._backCardPanel:setVisible(false)
    -- 隐藏抢地主按钮
    if self._robLandlordBtns then
        self._robLandlordBtns:setVisible(false)
    end
    if self._robLandlordScoreBtns then
        self._robLandlordScoreBtns:setVisible(false)
    end
    -- 隐藏加倍按钮
    if self._setDoubleBtns then
        self._setDoubleBtns:setVisible(false)
    end
    -- 隐藏明牌按钮
    if self._showHandBtns then
        self._showHandBtns:setVisible(false)
    end

    if not CF.roomData:isPlayBack() then
        self._sortCardBtn:setVisible(false)
    end

    self:clearWinLostLayer()
    self._delayWinLostTime = 0
    
     --关闭等待弹窗
     CF.TipTool.clearScrollTip()
end

function GameLayer:clearWinLostLayer()
    if not tolua.isnull(self._winLostLayer) then
        self._winLostLayer:removeFromParent()
        self._winLostLayer = nil
    end
    if not tolua.isnull(self._bigWinLostLayer) then
        self._bigWinLostLayer:removeFromParent()
        self._bigWinLostLayer = nil
    end
end

-- 初始化底牌
function GameLayer:initBackCard()
    self._backCardPanel:setVisible(false)
    for i=1,3 do
        local subPanel = self["_backCardSubPanel"..i]
        local size = subPanel:getContentSize()
        local cView = CardModule.new()
        local cardStyle = 0
        if CF.settingData and CF.settingData:getLandlordsBackStyle() == CF.settingData.tagInfo.BACK_TYPE.index then
            cardStyle = XH.XG_CARD_STYLE
        end
        cView:setCardID(0, nil, nil, nil, nil, cardStyle)
        cView:setName("BACK_CARD_SUB_PANEL_"..i)
        cView:setScaleX(size.width / cView:getContentSize().width)
        cView:setScaleY(size.height / cView:getContentSize().height)
        subPanel:addChild(cView)
        cView:setPosition(size.width / 2, size.height / 2)
    end
end

function GameLayer:onGameStart(event)
   --#是否回放
    self:clearTable()
    self._cardLayer:setLandlordFlagVisible(CF.roomData:getSelfLocalSeat(), false)
    self._cardLayer:setShowHandFlagVisible(CF.roomData:getSelfLocalSeat(), false)
    if not CF.roomData:isPlayBack() then
        self._sortCardBtn:setVisible(not CF.roomData:getIsSeer())
        self._gameStartTime = os.time() or 0
        self:recordData()
    end
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

function GameLayer:onPlayerHeadClock(event)
    -- 如果不是在游戏中，不处理倒计时消息
    if not CF.roomData:getIsGameStart() then
        return
    end
    local msg = event.msg
    local nTime = msg.nTime
    local localSeat = CF.roomData:seatToLocal(msg.seat)
    for i = 1, CF.roomData:getMaxPlayer() do
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

function GameLayer:startOutCardClock(localSeat, nTime)
    if nTime > 0 then
        --设置时钟数字
        local outCardTimePanel = self["_clockPanel"..localSeat]
        if not outCardTimePanel then return end
        self:playClockLoopAni(outCardTimePanel)
        local outCardTimeText = ccui.Helper:seekWidgetByName(outCardTimePanel, "_KW_TEXT_OUT_CARD_TIME")
        outCardTimeText:setString(string.format("%02d",nTime))
        outCardTimePanel:stopAllActions()
        local delay = cc.DelayTime:create(1)
        local callback = cc.CallFunc:create(function()
            nTime = nTime - 1
            outCardTimeText:setString(string.format("%02d",nTime))
            if nTime < 5 then
                self:playClockDaoJiShiAni(outCardTimePanel)
                CF.soundManager:playSoundClock()
            end
            if nTime <= 0 then
                outCardTimePanel:stopAllActions()
            end
        end)
        local squence = cc.Repeat:create(cc.Sequence:create(delay,callback),nTime)
        outCardTimePanel:runAction(squence)
        outCardTimePanel:setVisible(true)
        if localSeat ~= CF.roomData:getSelfLocalSeat() and CF.roomData:isGoldRoom()then
            CF.game:getModule("Player"):dispatchEvent( { name = CF.game:getModule("Player").EVENT_SHOW_LEFTTIME_TIP, msg = {localSeat = localSeat}})
        end
    else
        self:stopOutCardClock(localSeat)
    end
end

function GameLayer:clearAllPlayerOutCardClock()
    for i = 1, CF.roomData:getMaxPlayer() do
        self:stopOutCardClock(i)
    end
end

function GameLayer:onHandCardChanged(event)
    local seatId = event.msg.seatId
    local localSeat = CF.roomData:seatToLocal(seatId)
    local orderCards = event.msg.orderCards
    self._cardLayer:setHandCards(localSeat, orderCards, event.msg.bShowAni)
end

-- 出牌权限
function GameLayer:onPlayerGetPower(event)
    local seat = event.msg.seat
    local localSeat = CF.roomData:seatToLocal(seat)

    -- 清掉原来出的牌
    self._cardLayer:clearOutCard(localSeat)
    self:showNormalTip(localSeat, "landlords_text_buchu.png", false)

    if seat == CF.roomData:getSelfSeat() and not CF.roomData:getIsSeer() then
        local tipCards = self._gameData:getHintCardIDs()
        if not tipCards then
            if self._yaoBuQiBtns then
                self._yaoBuQiBtns:setVisible(true)
            end
            return
        end

        -- 有没有选中牌,有的话看看能不能出
        local checkOutCardIDs = self._cardLayer:getSelectCardIDs(localSeat)
        local isCanOut = false
        if checkOutCardIDs and #(checkOutCardIDs) > 0 then
            isCanOut = self._cardLogic:canOut(checkOutCardIDs, self._gameData:getLastCardsType(), {} ,true)
        end

        -- 判断能否不出
        if #(self._gameData:getPreOutCard()) == 0 or self._gameData:getPreOutSeat() == CF.roomData:getSelfSeat() then
            self:setPlayButtonState(true, isCanOut, false)
        else
            self:setPlayButtonState(true, isCanOut, true)
        end
    end
end

-- 出牌按钮显示隐藏
function GameLayer:setPlayButtonState(show, canOut, canPass)
    if CF.roomData:getIsSeer() then
        return
    end
    self._gamePlayBtns:setVisible(show)
    if show then
        if nil ~= canOut then
            self._outCardBtn:setEnabled(canOut)
        end
        if nil ~= canPass then
            self._notOutCardBtn:setEnabled(canPass)
        end
    end
end

-- 显示不出这种驻留提示
function GameLayer:showNormalTip(localSeat, imageName, bShow)
    self._cacheTipSprite[localSeat] = self._cacheTipSprite[localSeat] or {}
    local playerTipPanel = self["_playerTipPanel"..localSeat]
    if playerTipPanel then 
        if bShow then
            local passSprite = cc.Sprite:create()
            if passSprite then
                passSprite:setSpriteFrame(imageName)
                playerTipPanel:addChild(passSprite)
                self._cacheTipSprite[localSeat][imageName] = passSprite
            end
        else
            if self._cacheTipSprite[localSeat][imageName] then
                self._cacheTipSprite[localSeat][imageName]:removeFromParent()
                self._cacheTipSprite[localSeat][imageName] = nil
            end
        end
    end
end

--清除提示文本
function GameLayer:clearNormalTips()
    self._cacheTipSprite = self._cacheTipSprite or {}
    for _, tSeatCache in pairs(self._cacheTipSprite) do
        if next(tSeatCache) then
            for _, nodeTip in pairs(tSeatCache) do
                if not tolua.isnull(nodeTip) then
                    nodeTip:removeFromParent()
                end
            end
        end
    end
    self._cacheTipSprite = {}
end

-- 一局结束，显示未出完牌的玩家的牌
function GameLayer:onShowAllPlayerHandCards(event)
    local handCards = event.msg.handCards
    for seat = 0, #handCards do
        --隐藏剩余牌数
        local localSeat = CF.roomData:seatToLocal(seat)
        --显示手牌
        local cardIDs = handCards[seat]
        if cardIDs ~= nil then
            self._cardLayer:setHandCards(localSeat, cardIDs, false)
        end
    end
end

-- 显示抢地主操作界面
function GameLayer:onShowRobLandlordsView(event)
    local landlordType = event.msg.type -- 0: 叫分，1：叫地主
    local score = event.msg.score or 0
    local show = event.msg.show

    if show then
        if landlordType == 0 then
            self._robLandlordScoreBtns:setVisible(true)
            for i = 1, 3 do
                self["_robScoreBtn"..i]:setEnabled(i > score)
            end
        else
            if self._robLandlordBtns then
                self._robLandlordBtns:setVisible(true)
            end
        end
    else
        self._robLandlordScoreBtns:setVisible(false)
        if self._robLandlordBtns then
            self._robLandlordBtns:setVisible(false)
        end
    end
end

-- 显示抢地主操作结果
function GameLayer:onShowRobLandlordsResultView(event)
    local seat = event.msg.seat
    local localSeat = CF.roomData:seatToLocal(seat)
    local robRate = event.msg.robRate
    local landlordType = self._gameData:getLandlordType()
    local landlordStatus = self._gameData:getLandlordStatus()

    if robRate > 0 then
        self._gameData:setLandlordStatus(0)
        if landlordType == 0 and landlordStatus == 0 then -- 叫分值
            self:showTip(localSeat, "landlords_score_tip_"..robRate..".png")
            local player = CF.roomData:getPlayerDataBySeatId(seat)
            if player then
                local playerSex = player:getSex()
                CF.soundManager:playQiangLandlordSound(playerSex == 1, robRate)
            end
        else
            self:showTip(localSeat, "landlords_tip_rob_landlord.png")
            self:playEventSound(seat, CF.soundManager.EventEffect.RobLandlord)
        end
    else
        self:showTip(localSeat, "landlords_tip_buqiang.png")
        if landlordType == 0 and landlordStatus == 0 then
            self:playEventSound(seat, CF.soundManager.EventEffect.NotQiangLandlord)
        else
            self:playEventSound(seat, CF.soundManager.EventEffect.NotRobLandlord)
        end
    end
    self:stopOutCardClock(localSeat)
end

-- 播放音效
function GameLayer:playEventSound(seat, effect)
    local player = CF.roomData:getPlayerDataBySeatId(seat)
    if player then
        local playerSex = player:getSex()
        CF.soundManager:playEventSound(playerSex == 1, effect)
    end
end

-- 显示3分，2分，过，叫地主这种提示
function GameLayer:showTip(localSeat, imageName)
    local playerTipPanel = self["_playerTipPanel"..localSeat]
    if playerTipPanel then 
        local passSprite = cc.Sprite:create()
        if passSprite then
            passSprite:setSpriteFrame(imageName)
            playerTipPanel:addChild(passSprite)
            local delayAction = cc.DelayTime:create(0.2 + 0.2)
            local fadeOutAction = cc.FadeOut:create(0.4)
            local removeAction = cc.CallFunc:create(
                function ()
                    passSprite:removeFromParent()
                end)
            passSprite:runAction(cc.Sequence:create(delayAction, fadeOutAction, removeAction))
        end
    end
end

function GameLayer:stopOutCardClock(localSeat)
    local outCardTimePanel = self["_clockPanel"..localSeat]
    if outCardTimePanel then
        outCardTimePanel:stopAllActions()
        outCardTimePanel:setVisible(false)
    end
end

-- 显示最终地主位置
function GameLayer:onShowLandlordSeat(event)
    local seat = event.msg.seat
    local localSeat = CF.roomData:seatToLocal(seat)
    if seat == CF.roomData:getSelfSeat() then
        self._cardLayer:setLandlordFlagVisible(localSeat, true)
    end
end

-- 显示底牌
function GameLayer:onShowBackCard(event)
    local cards = event.msg.cards
    if #cards > 0 then
        self._backCardPanel:setVisible(true)
        for i=1,#cards do
            local subPanel = self["_backCardSubPanel"..i]
            local cView = subPanel:getChildByName("BACK_CARD_SUB_PANEL_"..i)
            local cardStyle = 0
            if CF.settingData and CF.settingData:getLandlordsBackStyle() == CF.settingData.tagInfo.BACK_TYPE.index then
                cardStyle = XH.XG_CARD_STYLE
            end
            cView:setCardID(cards[i], nil, nil, nil, nil, cardStyle)
        end
    end

    if CF.roomData:isPlayBack() or CF.roomData:isDelayWatch() then
        local seat = self._gameData:getLandlordSeat()
        local localSeat = CF.roomData:seatToLocal(seat)
        local handCards = self._gameData:getHandCards(seat)
        self._cardLayer:setHandCards(localSeat, handCards, true)
    end
end

-- 明牌权限
function GameLayer:onShowHandCardPower(event)
    if self._showHandBtns then
        self._showHandBtns:setVisible(true)
    end
end

-- 显示明牌结果
function GameLayer:onShowHandCardResult(event)
    local seat = event.msg.seat
    local localSeat = CF.roomData:seatToLocal(seat) 
    local cards = event.msg.cards

    CF.soundManager:playMingPaiBgSound()
    self:playEventSound(seat, CF.soundManager.EventEffect.ShowHandCard)

    if seat == CF.roomData:getSelfSeat() then -- 自己
        if self._showHandBtns then
            self._showHandBtns:setVisible(false)
        end
        if cards then
            -- 给自己的牌上加明牌标识
            self._cardLayer:setShowHandFlagVisible(localSeat, true)
        end
    else
        if cards then
            self._cardLayer:setHandCards(localSeat, cards, true)
        end
    end
    self:stopOutCardClock(localSeat)
end

-- 加倍权限
function GameLayer:onShowSetDoublePower(event)
    local isDouble = event.msg.isDouble
    if self._setDoubleBtns then
        self._setDoubleBtns:setVisible(isDouble)
    end
    if self._showHandBtns then
        self._showHandBtns:setVisible(false)
    end
end

-- 加倍结果
function GameLayer:onShowSetDoubleResult(event)
    local seat = event.msg.seat
    local localSeat = CF.roomData:seatToLocal(seat) 
    local isDouble = event.msg.isDouble

    -- 显示加倍提示和音效
    if isDouble then
        self:playEventSound(seat, CF.soundManager.EventEffect.IsDouble)
    else
        self:playEventSound(seat, CF.soundManager.EventEffect.IsNotDouble)
    end

    if seat == CF.roomData:getSelfSeat() then -- 自己
        if self._setDoubleBtns then
            self._setDoubleBtns:setVisible(false)
        end
    end
    self:stopOutCardClock(localSeat)
end

-- 出牌
function GameLayer:onPlayCardResult(event)
    local seat = event.msg.seat
    local localSeat = CF.roomData:seatToLocal(seat)
    local cards = event.msg.cards
    local cardType = event.msg.cardType
    local endPower = event.msg.endPower
    local first = event.msg.first

    self:stopOutCardClock(localSeat)

    if seat == CF.roomData:getSelfSeat() then
        --隐藏操作按钮
        self._gamePlayBtns:setVisible(false)
        if self._yaoBuQiBtns then
            self._yaoBuQiBtns:setVisible(false)
        end
    end
    
    -- 过
    if #cards == 0 then
        --可能预出牌了
        self._cardLayer:clearOutCard(localSeat)
        self:showNormalTip(localSeat, "landlords_text_buchu.png", true)
        self:playEventSound(seat, CF.soundManager.EventEffect.Pass)
        return
    end

    self:outCard(seat, cards, self._gameData:getLastCardsType().cardTypeID, true)

    --牌型音效
    local player = CF.roomData:getPlayerDataBySeatId(seat)
    if player then
        local playerSex = player:getSex()
        CF.soundManager:playSoundOut()
        CF.soundManager:playSoundCards(playerSex == 1, cardType, endPower, CF.roomData:getGameID(), first)
    end

    local handCards = self._gameData:getHandCards(seat)
    if handCards then
        local leftCount = #handCards
        if leftCount == 2 then -- 剩两张
            self:playEventSound(seat, CF.soundManager.EventEffect.Double)
        end
        if leftCount == 1 then -- 我就剩一张牌了
            self:playEventSound(seat, CF.soundManager.EventEffect.Single)
        end
    end    
end

function GameLayer:onSelectHintCards(event)
    local localSeat = CF.roomData:getSelfLocalSeat()
    local selectCards = event.msg.cards
    self._cardLayer:resetHandCards(localSeat)
    self._cardLayer:setSelfSelectCards(selectCards)
end

function GameLayer:onHintCardsCanOut(event)
    self:setPlayButtonState(self._gamePlayBtns:isVisible(), event.msg.canOut, nil)
end

--续桌
function GameLayer:onGameContinue(event)
    local msg = event.msg 
    if msg.bSuccess then
        self:clearTable()
    end
end

--做牌
function GameLayer:onMsgAllDoCards(event)
    if not self._specfCardLayer then
        self:initSpecfCardLayer()
    end
    self._specfCardLayer:setAllCards(event.msg.cards)
    self._specfCardLayer:showSpecfLayer(true)
end

function GameLayer:onGameWinLost(event)
    self:clearAllPlayerOutCardClock()
  
    local winLostData = self._gameData:getWinLostData()
    local ftime = self._delayWinLostTime
    if winLostData.nWinLostType == 2 or winLostData.nWinLostType == 3 then
        -- 如果最后一手是炸弹，则延时播放春天动画
        CF.SysTool.performWithDelayGlobal(function() 
            self:playSpringAnimation(winLostData.nWinLostType == 2) 
        end, ftime)
        ftime = ftime + 3
    end

    if tolua.isnull(self._winLostLayer) then
        self._winLostLayer = CF.gameRequire("Modules.WinLost.View").new()
        self._winLostLayer:showSelf()
    end
    self._winLostLayer:setVisible(false)

    CF.SysTool.performWithDelayGlobal(function()
        if CF.roomData and CF.roomData:isDelayWatch() and CF.game:getModule("WinLost"):getHideWinlostUI() then
            CF.game:getModule("WinLost"):setHideWinlostUI(false)
            return
        end
        if not tolua.isnull(self._winLostLayer) then
            self._winLostLayer:setVisible(true)
            self._winLostLayer:onTimeClose()
            self:recordGameData()
        end
        if CF.roomData:isGoldRoom() then
            CF.game:getModule("ChangeLevel"):show()
            if CF.selfPlayerData:getIsNewUserGuide() and CF.selfPlayerData:getIsFirstGoldGame() then
                self._winLostLayer:setLocalZOrder(CF.ZORDER.DIALOG)
                CF.selfPlayerData:setIsFirstGoldGame(false)
            end
        end
    end, ftime)
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

function GameLayer:onGameTotalResult(event)
    self:clearAllPlayerOutCardClock()
    local delayTime = 1
    if CF.roomData:getPlayCount() == CF.roomData:getMaxPlayCount() then
        delayTime = 3
    end

    if tolua.isnull(self._bigWinLostLayer) then
        self._bigWinLostLayer = CF.gameRequire("Modules.BigWinLost.View").new(event.msg)
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
end

function GameLayer:onMatchStatusEvent(event)
    if not tolua.isnull(self._winLostLayer) then
        return
    end
    self:clearTable()
end

function GameLayer:onSelfPlayerStart(event)
    local msg = event.msg
    if msg and msg.seatID and msg.seatID == CF.roomData:getSelfSeat() and not CF.roomData:getIsSeer() then
        self:clearTable()
    end
end

function GameLayer:playSpringAnimation(spring)
    local armature = AnimationManager.playSpringArmature(self._cardLayerPanelPos, spring)
    armature:setPosition(self:getContentSize().width / 2, self:getContentSize().height / 2)
    armature:getAnimation():setMovementEventCallFunc(function()
        armature:removeFromParent()
    end)
end

-- 出牌动画
function GameLayer:playCardTypeAnimation(localSeat, cardTypeID)
    if CF.roomData and CF.roomData:getIsFastPlay() then
        return
    end
    local isMe = localSeat == CF.roomData:getSelfLocalSeat()
    local left = localSeat <= CF.roomData:getSelfLocalSeat()
    local armaturePanel = self._cardLayer:getOutCardPanel(localSeat)
    local armature = nil
    local haveScreenAnimation = false
    if CardType:isShunZi(cardTypeID) then -- 顺子
        armature = AnimationManager.playShunZiArmature(armaturePanel, left)
        if armature then
            if isMe then
                armature:setPosition(-50, 0)
            else
                armature:setPosition(-150, 0)
            end
        end
    elseif CardType:isLianDui(cardTypeID) then -- 连对
        armature = AnimationManager.playLianDuiArmature(armaturePanel, left)
        if armature then
            if isMe then
                armature:setPosition(-armature:getContentSize().width / 3 - 30, -20)
            elseif left then
                armature:setPosition(-armature:getContentSize().width / 4 - 10, -20)
            else
                armature:setPosition(-armature:getContentSize().width / 2 + 10, -20)
            end
        end
    elseif CardType:isFeiJi(cardTypeID) then -- 飞机
        haveScreenAnimation = true
        local textArmature = AnimationManager.playFeiJiTextArmature(armaturePanel, left)
        if textArmature then
            textArmature:getAnimation():setMovementEventCallFunc(function()
                textArmature:removeFromParent()
            end)
            if isMe then
                textArmature:setPosition(20, -20)
            elseif left then
                textArmature:setPosition(30, -20)
            else
                textArmature:setPosition(-textArmature:getContentSize().width / 4 + 10, -20)
            end
        end
        armaturePanel = self._cardLayer:getOutCardPanel(CF.roomData:getSelfLocalSeat())
        armature = AnimationManager.playFeiJiArmature(armaturePanel, left)
        if armature then
            armature:setPosition(-self:getContentSize().width / 5 * 4, self:getContentSize().height / 4 *3)
        end
    elseif CardType:isBoom(cardTypeID) then -- 炸弹
        haveScreenAnimation = true
        armature = AnimationManager.playBombArmature(armaturePanel)
        AnimationManager.playShakeArmature(self._csbRoot, 0.03, 0.3, 10, 20, 0)
        local armatureY = 160
        if armature then
            if isMe then
                armature:setPosition(0, armatureY)
            elseif left then
                armature:setPosition(50, armatureY)
            else
                armature:setPosition(-60, armatureY)
            end
        end
    elseif CardType:isWangZha(cardTypeID) then -- 王炸
        haveScreenAnimation = true
        armaturePanel = self._cardLayer:getOutCardPanel(CF.roomData:getSelfLocalSeat())
        armature = AnimationManager.playWangZhaArmature(armaturePanel)
        AnimationManager.playShakeArmature(self._csbRoot, 0.03, 0.3, 10, 20, 0.1)
    end

    if armature then
        armature:getAnimation():setMovementEventCallFunc(function()
            armature:removeFromParent()
        end)
    else
        haveScreenAnimation = false
    end
    return haveScreenAnimation    
end

-------------------按钮事件 start
function GameLayer:onSortCardBtnClicked(send, eventType)
    local gameData = self._gameData
    if gameData:getHandSortType() == CF.GameDefine.SORT_TYPE.SORT_TYPE_POWER then
        gameData:setHandSortType(CF.GameDefine.SORT_TYPE.SORT_TYPE_COUNT)
    else
        gameData:setHandSortType(CF.GameDefine.SORT_TYPE.SORT_TYPE_POWER)
    end

    local seat = CF.roomData:getSelfSeat()
    local handCards = gameData:getHandCards(seat)
    local sortType = gameData:getHandSortType()
    local orderCards = self._cardLogic:IDToCards(handCards)
    orderCards = self._cardLogic:sortCard(orderCards, sortType)
    orderCards= self._cardLogic:cardsToUChar(orderCards)
    self._cardLayer:setHandCards(CF.roomData:getSelfLocalSeat(), orderCards, true)
    CF.soundManager:playSortCard()
end

function GameLayer:onYaoBuQiBtnClicked(send, eventType)
    if CF.roomData:isPlayBack() then
        return
    end
    self._yaoBuQiBtns:setVisible(false)
    self._cardLayer:resetHandCards(CF.roomData:getSelfLocalSeat())
    CF.msgManager:sendPass()
end

-- 出牌按钮事件
function GameLayer:onOutCardBtnClicked(send, eventType)
    if CF.roomData:isPlayBack() then
        return
    end
    if not self._gamePlayBtns:isVisible() then
        return
    end
    
    --隐藏操作按钮
    self._gamePlayBtns:setVisible(false)
    
    local outCardIDs = self._cardLayer:getSelectCardIDs()
    local seat = CF.roomData:getSelfSeat()

    local isCanOut, cardTypeStruct = self._cardLogic:canOut(outCardIDs, self._gameData:getLastCardsType(), {}, true)
    self:outCard(seat, outCardIDs, cardTypeStruct.cardTypeID, false)
    CF.msgManager:sendOutCard(outCardIDs)
    print("isCanOut: " .. tostring(isCanOut))
    --出牌时间数据统计
    local data = {}
    data.time1 = self._StartTime or 0
    data.time2 = os.time() or 0
    data.staytime = data.time2 - data.time1
    data.gamename = self._gamename
    CF.throwDataManager:throwDataClick(CF.ThrowDataDefine.TABLE_17,data)
end

-- 出牌
function GameLayer:outCard(seat, outCardIDs, cardType, animated)
    if not outCardIDs then return end
    --隐藏操作按钮
    self._gamePlayBtns:setVisible(false)
    local localSeat = CF.roomData:seatToLocal(seat)
    local gameData = self._gameData
    local cardLogic = self._cardLogic

    if #outCardIDs > 0 then
        local sortType = gameData:getHandSortType()
        local orderCards = cardLogic:IDToCards(outCardIDs)
        orderCards = cardLogic:sortCard(orderCards, sortType)
        orderCards= cardLogic:cardsToUChar(orderCards)
        self._cardLayer:setOutCards(localSeat, orderCards)

        if animated then
            local haveAnimation = self:playCardTypeAnimation(localSeat, cardType)
            if haveAnimation then
                local handCardCnt = gameData:getHandCardsCount(seat)
                local isLast = #outCardIDs == handCardCnt
                if isLast then
                    self._delayWinLostTime = 1
                end
            end
        end
        -- 预出牌，删掉出了的牌
        local isSuccess, newHandCardIDs = cardLogic:deleteCardIDs(gameData:getHandCards(seat), orderCards)
        if isSuccess then
            gameData:setHandCards(seat, newHandCardIDs)
        end
        local sortHandCards = CF.game:getModule("GameLayer"):getSortHandCards(seat)
        self._cardLayer:setHandCards(localSeat, sortHandCards, false)
        self._cardLayer:resetHandCards()
    end
end

-- 不要
function GameLayer:onNotOutCardBtnClicked(send, eventType)
    if CF.roomData:isPlayBack() then
        return
    end
    self._gamePlayBtns:setVisible(false)
    self._cardLayer:resetHandCards(CF.roomData:getSelfLocalSeat())
    CF.msgManager:sendPass()
end

-- 叫地主分值按钮
function GameLayer:onNotRobLandlordBtnClicked(send, eventType)
    if CF.roomData:isPlayBack() then
        return
    end
    -- 不叫
    CF.msgManager:sendRobLandlord(0)
end

function GameLayer:onRobScoreBtnClicked(send, eventType)
    if CF.roomData:isPlayBack() then
        return
    end
    local strName = send:getName()
    local robLandType = CF.StringTool.getNumberSuffixByString(strName)
    CF.msgManager:sendRobLandlord(robLandType)
end

-- 提示
function GameLayer:onTellMeBtnClicked(send, eventType)
    if CF.roomData:isPlayBack() then
        return
    end

    local gameData = self._gameData
    local localSeat = CF.roomData:getSelfLocalSeat()

    local tipCards = gameData:getHintCardIDs()
    if tipCards then
        local selectCards = clone(tipCards.cardsID)
        self._cardLayer:setSelfSelectCards(selectCards)
        -- 有没有选中牌,有的话看看能不能出
        local checkOutCardIDs = self._cardLayer:getSelectCardIDs(localSeat)
        local isCanOut = false
        if #(checkOutCardIDs) > 0 then
            isCanOut = self._cardLogic:canOut(checkOutCardIDs, gameData:getLastCardsType(), {}, true)
        end
        self:setPlayButtonState(true, isCanOut, nil)
        gameData:nextHintIndex()
    else
        --隐藏操作按钮
        self._gamePlayBtns:setVisible(false)
        CF.msgManager:sendPass()
    end
    CF.throwDataManager:throwDataClick(CF.ThrowDataDefine.TABLE_16,{gamename = self._gamename})
end

-- 叫地主按钮
function GameLayer:onCallLandlordBtnClicked(send, eventType)
    if CF.roomData:isPlayBack() then
        return
    end
    CF.msgManager:sendRobLandlord(1)
end

-- 抢地主按钮
function GameLayer:onRobLandlordBtnClicked(send, eventType)
    if CF.roomData:isPlayBack() then
        return
    end
    CF.msgManager:sendRobLandlord(2)
end

-- 明牌按钮
function GameLayer:onNotShowHandBtnClicked(send, eventType)
    if CF.roomData:isPlayBack() then
        return
    end
    if self._showHandBtns then
        self._showHandBtns:setVisible(false)
    end
    CF.msgManager:sendShowHandCardPower(false)
end

function GameLayer:onShowHandBtnClicked(send, eventType)
    if CF.roomData:isPlayBack() then
        return
    end
    if self._showHandBtns then
        self._showHandBtns:setVisible(false)
    end
    CF.msgManager:sendShowHandCardPower(true)
end

-- 加倍按钮
function GameLayer:onNotSetDoubleBtnClicked(send, eventType)
    if CF.roomData:isPlayBack() then
        return
    end
    CF.msgManager:sendSetDouble(false)
end

function GameLayer:onSetDoubleBtnClicked(send, eventType)
    if CF.roomData:isPlayBack() then
        return
    end
    CF.msgManager:sendSetDouble(true)
end

function GameLayer:onMatchStateChanged(event)
    self:clearTable()
end

function GameLayer:onEventCardStyle()
    for i=1, 3 do
        local subPanel = self["_backCardSubPanel"..i]
        local cView = subPanel:getChildByName("BACK_CARD_SUB_PANEL_"..i)
        local cardStyle = 0
        if CF.settingData and CF.settingData:getLandlordsBackStyle() == CF.settingData.tagInfo.BACK_TYPE.index then
            cardStyle = XH.XG_CARD_STYLE
        end
        cView:setCardStype(cardStyle)
    end
end

return GameLayere�