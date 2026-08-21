local GameLayer = CF.gameClass("GameLayer", "game.Landlords.BaseLandlords.Modules.GameLayer.View")
local CardView  = CF.gameRequire("Modules.CardLayer.Card")
local CardType  = CF.gameRequire("Define.CardType")
local AnimationManager      = CF.gameRequire("Manager.AnimationManager")

function GameLayer:getCSBPath()
    return "res/cocosStudio/Landlords/GameLayer/CSB/YuYao/NewGameLayer.csb"
end

function GameLayer:getBindingInfo()
    local uiList = GameLayer.super.getBindingInfo(self)
    uiList["_KW_IMG_PLAYER_CALL_"] = {varName = "_call_img_", beginIndex = 1, endIndex = 4}
    uiList["_KW_BTN_SHOW_DIPAI"] = {varName = "_dipaiBtn", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onDiPaiBtnClicked"}--显示底牌按钮
    uiList["_KW_PANEL_DIPAI_BG"] = {varName="_dipaiBgPannel", onTouchEnded = "onCloseDiPaiClicked"}
    uiList["_KW_PANAEL_DIPAI_SUB_"] = {varName = "_backCardSubPanel",beginIndex = 1, endIndex = 8}
    uiList["_KW_PANEL_ROB_LANDLORD_BTNS"] = {varName = "_robLandlordScoreBtns"}
    uiList["_KW_PANEL_SELECT_CARDS"] = {varName = "_selectCardPanel",onTouchEnded = "onShowSelectCardsBg"}
    uiList["_KW_PANEL_SELECT_SINGLE_"] = {varName = "_selectSinglePanel_",beginIndex = 1, endIndex = 2, onTouchEnded = "onSelectSingleCards"}
    uiList["_KW_PANEL_SELECT1_CARD_"] = {varName = "_selcet1CardPanel",beginIndex = 1, endIndex = 5}
    uiList["_KW_PANEL_SELECT2_CARD_"] = {varName = "_selcet2CardPanel",beginIndex = 1, endIndex = 5}
    uiList["_KW_PANEL_MARKER_POS"] = {varName="_markerPanelPos"}
    return uiList
end

function GameLayer:getProxyEvents()
    -- local eventTable = GameLayer.super.getProxyEvents(self)
    local eventTable = {}
    eventTable[#eventTable+1] = {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_GAME_START", callBack = "onGameStart"}
    eventTable[#eventTable+1] = {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_PLAYER_HEAD_CLOCK", callBack = "onPlayerHeadClock"}
    eventTable[#eventTable+1] = {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_HAND_CARD_CHANGED", callBack = "onSendCards"}
    eventTable[#eventTable+1] = {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_SHOW_ROB_LANDLORDS_VIEW", callBack = "onShowRobLandlordsView"}
    eventTable[#eventTable+1] = {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_SHOW_ROB_LANDLORDS_RESULT_VIEW", callBack = "onShowRobLandlordsResultView"}
    eventTable[#eventTable+1] = {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_SHOW_LANDLORD_SEAT", callBack = "onShowLandlordSeat"}
    eventTable[#eventTable+1] = {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_SHOW_BACK_CARD", callBack = "onShowBackCard"}
    eventTable[#eventTable+1] = {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_SHOW_HANDCARD_POWER", callBack = "onShowHandCardPower"}
    eventTable[#eventTable+1] = {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_SHOW_HANDCARD_RESULT", callBack = "onShowHandCardResult"}
    eventTable[#eventTable+1] = {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_SHOW_SET_DOUBLE_POWER", callBack = "onShowSetDoublePower"}
    eventTable[#eventTable+1] = {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_SHOW_SET_DOUBLE_RESULT", callBack = "onShowSetDoubleResult"}
    eventTable[#eventTable+1] = {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_PLAYER_GET_POWER", callBack = "onPlayerGetPower"}
    eventTable[#eventTable+1] = {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_PLAY_CARD_RESULT", callBack = "onPlayCardResult"}
    eventTable[#eventTable+1] = {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_SHOW_ALL_PLAYER_HANDCARDS", callBack = "onShowAllPlayerHandCards"}
    eventTable[#eventTable+1] = {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_GAME_CONTINUE", callBack = "onGameContinue"}
    eventTable[#eventTable+1] = {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_GAME_SELECT_HINTCARDS", callBack = "onSelectHintCards"}
    eventTable[#eventTable+1] = {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_GAME_HINTCARDS_CANOUT", callBack = "onHintCardsCanOut"}
    eventTable[#eventTable+1] = {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_DO_CARDS", callBack = "onMsgAllDoCards"}
    eventTable[#eventTable+1] = {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_PLAYER_CALL_POINT", callBack = "onPlayerCallPointChanged"}
    eventTable[#eventTable+1] = {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_GAME_PLAYER_START", callBack = "clearTable"}
    eventTable[#eventTable+1] = {module = CF.game:getModule("WinLost"),  eventKeyName  = "EVENT_GAME_WINLOST", callBack = "onGameWinLost"}
    eventTable[#eventTable+1] = {module = CF.game:getModule("BigWinLost"),eventKeyName = "EVENT_GAME_TOTAL_RESULT", callBack = "onGameTotalResult"}
    eventTable[#eventTable+1] = {module = CF.goldManager, eventKeyName = "EVENT_MATCH_STATUS_CHANGE", callBack = "onMatchStatusEvent"}
    eventTable[#eventTable+1] = {module = CF.roomData, eventKeyName = "EVENT_PLAYER_START", callBack = "onSelfPlayerStart"}
    eventTable[#eventTable+1] = {module = CF.game:getModule("Continue"), eventKeyName  = "EVENT_GAME_CONTINUE", callBack = "onGameContinue"}
    eventTable[#eventTable+1] = {module = CF.settingData, eventKeyName = "EVENT_LANDLORDS_BACK_STYLE_CHANGED", callBack = "onEventCardStyle"}
    return eventTable
end

function GameLayer:createChildren()
   GameLayer.super.createChildren(self)
   self:initSelectCard()
end

-- 游戏开始
function GameLayer:onGameStart(event)
   --#是否回放
    self:clearTable()
    self:clearAllPlayerOutCardClock()
    self._cardLayer:setLandlordFlagVisible(CF.roomData:getSelfLocalSeat(), false)
    self._cardLayer:setShowHandFlagVisible(CF.roomData:getSelfLocalSeat(), false)
    if not CF.roomData:isPlayBack() then
        self._sortCardBtn:setVisible(not CF.roomData:getIsSeer())
    end

    local data = {}
    data.time1 = self._enterGameViewTime or 0
    data.time2 = os.time() or 0
    data.staytime = data.time2 - data.time1
    data.userid = CF.selfPlayerData:getNumberID()
    CF.throwDataManager:throwData(CF.ThrowDataDefine.GoldGamesMatched,data)
end

-- 初始化底牌
function GameLayer:initBackCard()
    self._dipaiBtn:setVisible(false)
    self._backCardPanel:setVisible(true)
    for i=1,8 do
        local subPanel = self["_backCardSubPanel"..i]
        local size = subPanel:getContentSize()
        local cView = CardView.new()
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

function GameLayer:initSelectCard()
    self._selectCardPanel:setVisible(false)
    for i=1,5 do
        local subPanel = self["_selcet1CardPanel"..i]
        local size = subPanel:getContentSize()
        local cView = CardView.new()
        local cardStyle = 0
        if CF.settingData and CF.settingData:getLandlordsBackStyle() == CF.settingData.tagInfo.BACK_TYPE.index then
            cardStyle = XH.XG_CARD_STYLE
        end
        cView:setCardID(2, nil, nil, nil, nil, cardStyle)
        cView:setName("SELECT1_CARD_PANEL_"..i)
        cView:setScaleX(size.width / cView:getContentSize().width)
        cView:setScaleY(size.height / cView:getContentSize().height)
        subPanel:addChild(cView)
        cView:setPosition(size.width / 2, size.height / 2)
    end

    for i=1,5 do
        local subPanel = self["_selcet2CardPanel"..i]
        local size = subPanel:getContentSize()
        local cView = CardView.new()
        local cardStyle = 0
        if CF.settingData and CF.settingData:getLandlordsBackStyle() == CF.settingData.tagInfo.BACK_TYPE.index then
            cardStyle = XH.XG_CARD_STYLE
        end
        cView:setCardID(3, nil, nil, nil, nil, cardStyle)
        cView:setName("SELECT2_CARD_PANEL_"..i)
        cView:setScaleX(size.width / cView:getContentSize().width)
        cView:setScaleY(size.height / cView:getContentSize().height)
        subPanel:addChild(cView)
        cView:setPosition(size.width / 2, size.height / 2)
    end
end

function GameLayer:clearTable()
    GameLayer.super.clearTable(self)
    -- 隐藏底牌
    self._dipaiBtn:setVisible(false)
    -- 隐藏叫分按钮
    self._robLandlordScoreBtns:setVisible(false)
end

-- 玩家叫分显示
function GameLayer:onPlayerCallPointChanged(event)
    local msg = event.msg
    local callPoint = msg.callPoint or 0
    local isShow = msg.isShow or false
    if isShow then
        local localSeat = CF.roomData:seatToLocal(msg.seat)
        local imgCallPoint = {"landlords_tip_bujiao.png","landlords_score_tip_1.png","landlords_score_tip_2.png","landlords_score_tip_3.png"}
        self["_call_img_"..localSeat]:setVisible(true)
        self["_call_img_"..localSeat]:loadTexture(imgCallPoint[callPoint+1], ccui.TextureResType.plistType)
        local player = CF.roomData:getPlayerDataBySeatId(msg.seat)
        if player then
            local playerSex = player:getSex()
            CF.soundManager:playQiangLandlordSound(playerSex == 1, callPoint)
        end
    else
        for index = 1, 4 do
            self["_call_img_"..index]:setVisible(false)
        end
    end
end

-- 显示抢地主操作界面
function GameLayer:onShowRobLandlordsView(event)
    local landlordType = event.msg.type -- 0: 叫分，1：叫地主
    local btnList = event.msg.btnList or {}
    local show = event.msg.show

    if show then
        if landlordType == 0 then
            self._robLandlordScoreBtns:setVisible(true)
            self._notRobScoreBtn:setEnabled(btnList[1])
            for i = 1, 3 do
                self["_robScoreBtn"..i]:setEnabled(btnList[i+1])
            end
        end
    else
        self._robLandlordScoreBtns:setVisible(false)
    end
end

-- 显示抢地主操作结果
function GameLayer:onShowRobLandlordsResultView(event)
    local seat = event.msg.seat
    local localSeat = CF.roomData:seatToLocal(seat)
    local robRate = event.msg.robRate
    local landlordType = self._gameData:getLandlordType()
    if robRate > 0 then
        if landlordType == 0 then -- 叫分值
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
        if landlordType == 0 then
            self:playEventSound(seat, CF.soundManager.EventEffect.NotQiangLandlord)
        else
            self:playEventSound(seat, CF.soundManager.EventEffect.NotRobLandlord)
        end
    end
    self:stopOutCardClock(localSeat)
end

--底牌按钮
function GameLayer:onDiPaiBtnClicked(send, eventType)
    self._dipaiBgPannel:setVisible(true)
end

--底牌背景
function GameLayer:onCloseDiPaiClicked(send, eventType)
    self._dipaiBgPannel:setVisible(false)
end

-- --显示底牌界面
function GameLayer:onShowBackCard(event)
    self._dipaiBgPannel:setVisible(true)
    self._backCardPanel:setVisible(true)
    local cards = event.msg.cards
    if #cards > 0 then
        self._dipaiBtn:setVisible(true)
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
    
    if self._gameData:getGameStep() == CF.GameDefine.GAME_STEP.GAME_STEP_ADD_BASE then
        CF.SysTool.performWithDelayGlobal(function()
            self._dipaiBgPannel:setVisible(false)
        end, 1.5)

        if CF.roomData:isPlayBack() or CF.roomData:isDelayWatch() then
            local seat = self._gameData:getLandlordSeat()
            local localSeat = CF.roomData:seatToLocal(seat)
            local handCards = self._gameData:getHandCards(seat)
            self._cardLayer:setHandCards(localSeat, handCards, true)
        end
    end
end

-- 加倍权限
function GameLayer:onShowSetDoublePower(event)
    local isDouble = event.msg.isDouble
    self._setDoubleBtns:setVisible(isDouble)
end

-- 出牌权限
function GameLayer:onPlayerGetPower(event)
    local seat = event.msg.seat
    local localSeat = CF.roomData:seatToLocal(seat)
    self._cardLayer:clearOutCard(localSeat)
    if seat == CF.roomData:getSelfSeat() and not CF.roomData:getIsSeer() then
        -- 有没有选中牌,有的话看看能不能出
        local checkOutCardIDs = self._cardLayer:getSelectCardIDs(localSeat)
        local isCanOut = false
        local jokerData = self._gameData:getJokerData()
        if checkOutCardIDs and #(checkOutCardIDs) > 0 then
            isCanOut = self._cardLogic:canOut(checkOutCardIDs, self._gameData:getLastCardsType(),jokerData)
        end
        -- 判断能否不出
        if #(self._gameData:getPreOutCard()) == 0 or self._gameData:getPreOutSeat() == CF.roomData:getSelfSeat() then
            self:setPlayButtonState(true, isCanOut, false)
        else
            self:setPlayButtonState(true, isCanOut, true)
        end
    end
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
    end
    -- 过
    if #cards == 0 then
        self:showTip(localSeat, "landlords_text_guo.png")
        self:playEventSound(seat, CF.soundManager.EventEffect.Pass)
        return
    end

    self:outCard(seat, cards, self._gameData:getLastCardsType().cardTypeID, true)

    --牌型音效
    local player = CF.roomData:getPlayerDataBySeatId(seat)
    if player then
        local playerSex = player:getSex()
        CF.soundManager:playSoundOut()
        --余姚特殊判断，小王power是17
        if #cards == 1 and cards[1] == 53 then
            endPower = 16
        end
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

-- 一局结束，显示未出完牌的玩家的牌
function GameLayer:onShowAllPlayerHandCards(event)
    local handCards = event.msg.handCards
    for seat = 0, #handCards do
        --隐藏剩余牌数
        local localSeat = CF.roomData:seatToLocal(seat)
        --显示手牌
        local cardIDs = handCards[seat]
        local sortType = self._gameData:getHandSortType()
        local orderCards = self._cardLogic:IDToCards(cardIDs)
        orderCards = self._cardLogic:sortCard(orderCards, sortType)
        orderCards= self._cardLogic:cardsToUChar(orderCards)
        if cardIDs ~= nil then
            self._cardLayer:setHandCards(localSeat, orderCards, false)
        end
    end
end

-- 小结束
function GameLayer:onGameWinLost(event)
    self:clearAllPlayerOutCardClock()

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
        end
    end, self._delayWinLostTime)
end

-- 叫地主分值按钮
function GameLayer:onNotRobLandlordBtnClicked(send, eventType)
    if CF.roomData:isPlayBack() then
        return
    end
    -- 不叫
    CF.msgManager:sendRobLandlord(CF.GameDefine.CallBanker.CB_NOT_CALL)
end

function GameLayer:onRobScoreBtnClicked(send, eventType)
    if CF.roomData:isPlayBack() then
        return
    end
    local strName = send:getName()
    local robLandType = CF.StringTool.getNumberSuffixByString(strName)
    local robMap = {
        CF.GameDefine.CallBanker.CB_CALL_ONE,
        CF.GameDefine.CallBanker.CB_CALL_TWO,
        CF.GameDefine.CallBanker.CB_CALL_THREE,
    }
    CF.msgManager:sendRobLandlord(robMap[robLandType])
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
            local jokerData = gameData:getJokerData()
            isCanOut = self._cardLogic:canOut(checkOutCardIDs, gameData:getLastCardsType(), jokerData, true)
        end
        self:setPlayButtonState(true, isCanOut, nil)
        gameData:nextHintIndex()
    else
        --隐藏操作按钮
        self._gamePlayBtns:setVisible(false)
        CF.msgManager:sendPass()
    end
end

--选牌界面背景
function GameLayer:onShowSelectCardsBg(send, eventType)
    if CF.roomData:isPlayBack() then
        return
    end
    --隐藏操作界面
    self._selectCardPanel:setVisible(false)
end

--选择选牌
function GameLayer:onSelectSingleCards(send, eventType)
    if CF.roomData:isPlayBack() then
        return
    end
    --隐藏操作按钮
    self._gamePlayBtns:setVisible(false)
    --隐藏操作界面
    self._selectCardPanel:setVisible(false)
    local outCardIDs = self._cardLayer:getSelectCardIDs()
    local cardTypeStruct = self._gameData:getSelfCardType()
    cardTypeStruct.cardPower = send:getTag()
    CF.msgManager:sendOutCard(outCardIDs,cardTypeStruct)
end

--选牌界面
function GameLayer:onShowSelectCards(powerList, tCardsNode,gameCardGroup, cardsType)
    self._selectCardPanel:setVisible(true)
    self._selectSinglePanel_1:setTag(powerList[1])
    self._selectSinglePanel_2:setTag(powerList[2])
    for i=1,#tCardsNode[1] do
        local subPanel = self["_selcet1CardPanel"..i]
        local cView = subPanel:getChildByName("SELECT1_CARD_PANEL_"..i)
        cView:setCardID(tCardsNode[1][i])
    end

    for i=1,#tCardsNode[2] do
        local subPanel = self["_selcet2CardPanel"..i]
        local cView = subPanel:getChildByName("SELECT2_CARD_PANEL_"..i)
        cView:setCardID(tCardsNode[2][i])
    end
end

--检测出牌
function GameLayer:checkOutCards(lasetCardsType, gameCardGroup, cardsType)
    local jokerData = self._gameData:getJokerData()
    --只有在3带1对 大小王百搭，且出牌中有大小王的情况下才要检测。
    local haveJoker = false
    for _, value in pairs(gameCardGroup) do
        if value == 53 or value == 54 then
            haveJoker = true
            break
        end
    end
    if cardsType.cardTypeID == 3201 and #jokerData > 0 and haveJoker then
        local powerList = self._cardLogic:getPowerListByCards(gameCardGroup)
        for index = #powerList, 1,-1 do
            if lasetCardsType.cardPower >= powerList[index] then
                table.remove(powerList, index)
            end
        end
        if #powerList > 1 then
            local tCardsNode = {}
            tCardsNode[1] = self._cardLogic:getOutTypeByCards(powerList[1],gameCardGroup)
            tCardsNode[2] = self._cardLogic:getOutTypeByCards(powerList[2],gameCardGroup)
            self:onShowSelectCards(powerList, tCardsNode, gameCardGroup, cardsType)
        else
            --隐藏操作按钮
            self._gamePlayBtns:setVisible(false)
            CF.msgManager:sendOutCard(gameCardGroup,cardsType)
        end
    else
        --隐藏操作按钮
        self._gamePlayBtns:setVisible(false)
        CF.msgManager:sendOutCard(gameCardGroup,cardsType)
    end
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
        orderCards = cardLogic:reverseTable(orderCards, sortType)
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
        local sortHandCards = CF.game:getModule("GameLayer"):getSortHandCards(seat)
        self._cardLayer:setHandCards(localSeat, sortHandCards, false)
    end
end

-- 出牌按钮事件
function GameLayer:onOutCardBtnClicked(send, eventType)
    if CF.roomData:isPlayBack() then
        return
    end

    local outCardIDs = self._cardLayer:getSelectCardIDs()
    local jokerData = self._gameData:getJokerData()
    local lasetCardsType = self._gameData:getLastCardsType()
    local _, cardTypeStruct = self._cardLogic:canOut(outCardIDs, lasetCardsType, jokerData, true)
    self._gameData:setSelfCardType(cardTypeStruct)
    self:checkOutCards(lasetCardsType, outCardIDs, cardTypeStruct)
end

-- 发送手牌
function GameLayer:onSendCards(event)
    local seatId = event.msg.seatId
    local localSeat = CF.roomData:seatToLocal(seatId)
    local orderCards = event.msg.orderCards
    self._cardLayer:setHandCards(localSeat,orderCards, event.msg.bShowAni)
end

-- 加倍结果
function GameLayer:onShowSetDoubleResult(event)
    local seat = event.msg.seat
    local localSeat = CF.roomData:seatToLocal(seat) 

    if seat == CF.roomData:getSelfSeat() then -- 自己
        if self._setDoubleBtns then
            self._setDoubleBtns:setVisible(false)
        end
    end
    self:stopOutCardClock(localSeat)
end

function GameLayer:onEventCardStyle(event)
    if self._dipaiBtn:isVisible() then
        for i=1,8 do
            local subPanel = self["_backCardSubPanel"..i]
            local cView = subPanel:getChildByName("BACK_CARD_SUB_PANEL_"..i)
            local cardStyle = 0
            if CF.settingData and CF.settingData:getLandlordsBackStyle() == CF.settingData.tagInfo.BACK_TYPE.index then
                cardStyle = XH.XG_CARD_STYLE
            end
            cView:setCardStype(cardStyle)
        end
    end
end
return GameLayern