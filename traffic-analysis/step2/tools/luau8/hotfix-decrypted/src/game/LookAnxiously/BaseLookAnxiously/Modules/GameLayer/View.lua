local GameLayer = CF.gameClass("GameLayer", CF.ViewBase)
local CardLayer = CF.gameRequire("Modules.GameLayer.GameCardLayer")
local SmartSelectCards = CF.gameRequire("Modules.GameLayer.SmartSelectCards")
local SpecfCardLayer = CF.gameRequire("Modules.GameLayer.GameSpecfCardLayer")
local AnimationManager = CF.gameRequire("Manager.AnimationManager")
local CardLogic = CF.gameRequire("Modules.GameLayer.CardLogic")
local CardEnum = CF.gameRequire("Define.CardEnum")
local CardLayerConfig = CF.gameRequire("Modules.CardLayer.CardLayerConfig")
CF.gameRequire("Modules.GameLayer.CardRule")

function GameLayer:ctor(param)
    param = param or {}
    GameLayer.super.ctor(self, param)
    self:createChildren()
    self:initDatas()
end

function GameLayer:getCSBPath()
    return "res/cocosStudio/LookAnxiously/GameLayer/CSB/Layer.csb"
end

function GameLayer:getBindingInfo()
    return {
        ["_KW_PANEL_CLOCKPOS_"] = {varName = "_clockUI_", beginIndex = 0, endIndex = 5},
        ["_KW_PANEL_CLOCKPOS_4_5"] = {varName = "_clockUI_4_5"},
        ["_KW_PANEL_CLOCK"] = {varName = "_clockPanel"},
        ["_KW_UI_CLOCK_TEXT"] = {varName = "_clockText"},

        --显示提示
        ["_KW_PLAYER_TIP_"] = {varName = "_playerTipPanel_", beginIndex = 1, endIndex = 5},
        ["_KW_PLAYER_TIP_4_5"] = {varName = "_playerTipPanel_4_5"},

        ["_KW_PANEL_BTNS_GAME"] = {varName ="_btnsGameLayer"},
        ["_KW_BTN_PASS@"] = {varName = "_passBtn", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventPass"},
        ["_KW_BTN_TELL_ME@"] = {varName = "_tellMeBtn", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventTellMe"},
        ["_KW_BTN_OUT_CARD@"] = {varName = "_outCardBtn", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventOutCard"},
        ["_KW_PANEL_CANT_DOWN"]= {varName ="_downPanel"},
        ["_KW_BTN_CANT_DOWN"] = {varName ="_downBtn", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventPass"},

        ["_KW_BTN_SORT@"] = {varName = "_sortBtn", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventSort"},
        ["_KW_UI_CARD_LAYER"] = {varName ="_cardPanel"},
        ["_KW_UI_SPECF_CARD_LAYER"]= {varName = "_specfPanel"},
        ["_KW_UI_ARMATURE_PANEL"] = {varName = "_aniPanel"},
    }
end

function GameLayer:getProxyEvents()
    local eventTable = {
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_UPDATE_CLOCK", callBack = "onUpdateClock"},
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_LEFT_CARDS_COUNT", callBack = "onLeftCardsCount"},
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_SEND_CARDS", callBack = "onSendCards"},
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_ADD_CARDS", callBack = "onAddCards"},
        
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_OUT_CARD", callBack = "onGameOutCards"},
        
        {module = CF.roomData, eventKeyName = "EVENT_PLAYER_START", callBack = "onPlayerStart"},
        {module = CF.game:getModule("Match"), eventKeyName = "EVENT_MATCH_STATE_CHANGED", callBack = "onMatchStateChanged" },
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_GAME_START", callBack = "onGameStart"},
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_GAME_STEP", callBack = "onGameStep"},
        {module = CF.game:getModule("BigWinLost"), eventKeyName = "EVENT_GAME_TOTAL_RESULT", callBack = "onGameTotalResult"},
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_GAME_POWER", callBack = "onGamePower"},
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_GAME_END", callBack = "onGameEnd"},

        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_ALL_HAND_CARDS", callBack = "onAllHandCards"},
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_PLAYER_SHOW_OUT_CARD", callBack = "onPlayerShowOutCard"},
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_CHECK_CARD", callBack = "onCheckedCardsJudge"},
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_GAME_CHANGE_BTNS_STATE", callBack = "onGameChangeBtnsState"},
        -- 做牌
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_ALL_CARDS", callBack = "onMsgAllCards"},
        --大牌切换
        {module = CF.settingData, eventKeyName = "EVENT_CARD_BACK_STYLE_CHANGED", callBack = "onEventSwitchCardSize" },
        -- 春天
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_SPRING", callBack = "onSpring"},
        -- 续桌匹配
        { module = CF.game:getModule("Player"), eventKeyName = "EVENT_PLAYER_READY", callBack = "onMatchPlayerReady"},
    }
    return eventTable
end

function GameLayer:initDatas()
    self._gameData = CF.game:getModule("GameLayer"):getGameData()
end

function GameLayer:createChildren()
    self:initTableData()
    self:initSpecfCardLayer()
    self:resetTable()
end

function GameLayer:initTableData()
    -- 出牌ID
    self._promptID = 0
    self._promptCards = {}
end

function GameLayer:getAdaptationConfig()
    return {
        {node = self._clockUI_1, bRight = false, bHalf = false},
        {node = self._clockUI_3, bRight = true, bHalf = false},
        {node = self._playerTipPanel_1, bRight = false, bHalf = false},
        {node = self._playerTipPanel_3, bRight = true, bHalf = false},
    }
end

--初始化牌层
function GameLayer:initCardLayer(playerCount)
    local playerCount = 4
    if CF.roomData:getChairs() == CF.roomData:getMaxPlayer() then 
        playerCount = CF.roomData:getMaxPlayer()
    end 
    if self._cardLayer == nil or self._cardLayer:getPlayerCount() ~= playerCount then
        self._cardPanel:removeAllChildren()
        local param = {playerCount = playerCount}
        self._cardLayer = CardLayer.new(param)
        self._cardPanel:addChild(self._cardLayer)
    else
        self._cardLayer:clearAllCards()
    end
    self._cardLayer:resetDivideCards()
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
        if CF.roomData:isPlayBack() then
            self._specfCardLayer:setVisible(false)
        end
    end
end

function GameLayer:resetTable()
    CF.roomData:clearTable()
    self._sortBtn:setVisible(false)
    --清除桌面牌
    if self._cardLayer then 
        self._cardLayer:clearAllCards()
        self._cardLayer:showCardsPanel(false)
    end 
    --隐藏操作按钮
    self:updateOptBtns(false)
    -- 出牌ID
    self._promptID = 0
    self._promptCards = {}
    --关闭等待弹窗
    CF.TipTool.clearScrollTip()
end

function GameLayer:updateOptBtns(show)
    self._downPanel:setVisible(show)
    self._btnsGameLayer:setVisible(show)
end

function GameLayer:onGameStart(event)
    self:initCardLayer()
    if not CF.roomData:isPlayBack() then
        --##非回放、非旁观,显示排序按钮
        if not CF.roomData:getIsSeer() then
            self._sortBtn:setVisible(true)
        end
        --游戏开始时隐藏左右玩家手牌节点，防止之前逻辑导致的显示左右玩家手牌问题发生
        self._cardLayer:showLeftAndRightHandCardArea(false)
    else
        self._cardLayer:showLeftAndRightHandCardArea(true)
    end
    self:resetTable()
    self._gameData:setIsHaveResult(false)
    CF.soundManager:playSoundStart()
end

function GameLayer:onUpdateClock(event)
    local seat = event.msg.seat
    local tm = event.msg.time
    self:showClock(true, tm, seat)
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

function GameLayer:showClock(show,tm,seatId)
    if self._clockPanel == nil then 
        return 
    end 
    self._clockPanel:setVisible(show)
    if show == false then
        self._clockText:stopAllActions()
        return
    end
    local localSeat = CF.roomData:seatToLocal(seatId)
    if seatId == CF.roomData:getMaxPlayer() then
        localSeat = 0
    end
    local clockUI = self["_clockUI_"..localSeat]
    if clockUI == nil  then 
        return 
    end
    -- 要不起时，客户端提示时间为3s
    if self._downPanel:isVisible() and seatId == CF.roomData:getSelfSeat() then
        tm = 3
    end
    self._clockPanel:setPosition(self["_clockUI_"..localSeat]:getPosition())
    if CF.roomData:isFivePlayer() and localSeat == CF.GameDefine.LOCAL_SEAT.TOP then
        self._clockPanel:setPosition(self._clockUI_4_5:getPosition())
    end

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
                if tm < 5 then
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
end


function GameLayer:onLeftCardsCount(event)
    local leftCardsCount = event.msg.leftCardsCount
    local totalCardsCount = event.msg.totalCardsCount
    self._cardLayer:setTotalCardsCount(totalCardsCount)
    self._cardLayer:setLeftCardsCount(leftCardsCount,leftCardsCount)
    self._cardLayer:showCardsPanel(leftCardsCount > 0)
end 

function GameLayer:onSendCards(event)
    local seatId = event.msg.seat
    local localSeat = CF.roomData:seatToLocal(seatId)
    local orderCards = event.msg.orderCards
    CardLayerConfig.isFirstDivide = #orderCards > 1
    if #orderCards == 0 or orderCards[1] == CardEnum.CARD_ID.ID_BACK then 
    else 
        self._cardLayer:setHandCards(localSeat,orderCards,event.msg.bShowAni)
    end 
    
    if event.msg.bShowAni then 
        CF.soundManager:playerSoundDealCard()
        self._cardLayer:divideCardsAni(localSeat,#orderCards)
        self._cardLayer:reduceCardsPile(#orderCards,event.msg.bShowAni)
    end 
end

function GameLayer:onAddCards(event)
    local seatId = event.msg.seat
    local localSeat = CF.roomData:seatToLocal(seatId)
    local orderCards = event.msg.orderCards
    local insertIndexs = event.msg.insertIndexs
    CardLayerConfig.isFirstDivide = #orderCards > 1
    if CF.roomData:isPlayBack() then
        CardLayerConfig.isFirstDivide = true
    end
    if #orderCards == 0 or orderCards[1] == CardEnum.CARD_ID.ID_BACK then 
    else
        self._cardLayer:addHandCards(localSeat,orderCards,insertIndexs,true)
    end
    self._cardLayer:divideCardsAni(localSeat,#orderCards)
    self._cardLayer:reduceCardsPile(#orderCards,true)
end 

function GameLayer:onGamePower(event)
    local sPowerSeat = self._gameData:getCurrentPlayer()
    local preOutSeat = self._gameData:getLastPlayer()
    local localSeat = CF.roomData:seatToLocal(sPowerSeat)
    if self._cardLayer then
        self._cardLayer:clearOutCard(localSeat)
    end

    local sSeatId = CF.roomData:getSelfSeat()
    --上次出牌为自己时,清空上次出牌记录
    if sPowerSeat == preOutSeat then
        self._gameData:resetLastOutCard()
        self._gameData:resetCardType()
    end
    --提示下标置-1,代表还未查询过
    self._promptID = 0
    self._gameData:resetLastCheckCardsCount()

    if self._downBtn then
        self._downBtn:stopAllActions()
    end

    if sPowerSeat == sSeatId and not CF.roomData:getIsSeer() then -- and not self._playback then
        self:canOpt()
        self:updateDownPanel()
        -- self:autoPass()
        self:autoRaiseCard()    -- 自动提牌
    else
        self:updateOptBtns(false)
    end
end 

function GameLayer:canOpt()
    local curPlayer = self._gameData:getCurrentPlayer()
    local preOutSeat = self._gameData:getLastPlayer()

    local sSeatId = CF.roomData:getSelfSeat()
    local nextSeat = (curPlayer + 1) % CF.roomData:getChairs()
    local nextHandCardsCnt = self._gameData:getHandCardsCount(nextSeat)
    local handCardsCnt = self._gameData:getHandCardsCount(curPlayer)

    self._gameData:setPreShowOut(true)
    local lastCardstype = self._gameData:getLastCardType()
    local isLastFreeOut = self:isLastFreedomOut()
    local allCardIDs = self._gameData:getHandCards(sSeatId)

    --判断能否不出
    local lastOutCards = self._gameData:getLastOutCard()
    if #lastOutCards == 0 or preOutSeat == sSeatId then
        self:setButtonState(self._passBtn,false)
        if isLastFreeOut and (allCardIDs[1] == CardEnum.CARD_ID.ID_SJ or allCardIDs[1] == CardEnum.CARD_ID.ID_BJ) then
            self:setButtonState(self._passBtn,true)
        end
    else
        self._promptCards = CardRule:getPromptCards(allCardIDs, lastOutCards, 1, isLastFreeOut, lastCardstype)
        self:mustOut()
    end
    -- 判断能否出牌
    local checkedCards = self._cardLayer:getSelectCardIDs(CF.roomData:getSelfLocalSeat())
    if not checkedCards then
        return false
    end
    local canOut = CardRule:canOut(checkedCards, lastOutCards, isLastFreeOut, lastCardstype)
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

function GameLayer:updateDownPanel()
    local show = true
    local lastOutCard = self._gameData:getLastOutCard()
    local preOutSeat = self._gameData:getLastPlayer()
    if not(#lastOutCard == 0 or preOutSeat == CF.roomData:getSelfSeat()) and #self._promptCards == 0 then
        show = false
    end
    self._downPanel:setVisible(not show)
    self._btnsGameLayer:setVisible(show)
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

function GameLayer:onGameTotalResult(event)
    local msg = event.msg
    CF.roomData:setIsGameOver(msg.show)
    if not msg.show then
        return
    end
    local isLastCount = CF.roomData:getPlayCount() == CF.roomData:getMaxPlayCount()
    local delayTime = isLastCount and 3 or 1
    if not self._gameData:getIsHaveResult() or not isLastCount then
        -- self:clearWinLostLayer()
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

function GameLayer:onEventSwitchCardSize()
    if not self._cardLayer then
        return
    end
    self:setButtonState(self._outCardBtn, false)
    for seat = 0, CF.roomData:getChairs() - 1 do
        local localSeat = CF.roomData:seatToLocal(seat)
        local handCards = self._gameData:getHandCards(seat)
        self._cardLayer:setHandCards(localSeat, handCards)

        local outCards = self._cardLayer:getOutCards(localSeat)
        self._cardLayer:setOutCards(localSeat, outCards)
    end
end

function GameLayer:onTouchEventPass(send, eventType)
    if CF.roomData and (CF.roomData:isPlayBack() or CF.roomData:getIsSeer()) then
        return
    end

    --隐藏操作按钮
    self:updateOptBtns(false)
    self._cardLayer:resetHandCards()
    self._gameData:setPreShowOut(false)
    --逻辑由mananger处理
    CF.game:getModule("GameLayer"):onPassClick()

    if self._downBtn then
        self._downBtn:stopAllActions()
    end
end


function GameLayer:onGameOutCards(event)
    local msgOutCard = event.msg.msgOutCard
    local localSeat = CF.roomData:seatToLocal(msgOutCard.sSeat)
    if msgOutCard.ucCardCount == 0 then
        if CF.roomData:isFivePlayer() and localSeat == CF.GameDefine.LOCAL_SEAT.TOP then
            AnimationManager.showGameOperateAni(self._playerTipPanel_4_5, CF.GameDefine.KW_PIC_PASS_PNG)
        else
            AnimationManager.showGameOperateAni(self["_playerTipPanel_"..localSeat], CF.GameDefine.KW_PIC_PASS_PNG)
        end
        CF.soundManager:playSoundPass()
        return
    end
    -- 如果有手牌的情况 删除手牌 重置手牌区
    local allCardIDs = self._gameData:getHandCards(msgOutCard.sSeat)
    if allCardIDs ~= nil then
        if msgOutCard.sSeat == CF.roomData:getSelfSeat() then
            self._gameData:deleteHandCards(msgOutCard.sSeat, msgOutCard.ucCard)
            local newCardIds = self._gameData:getHandCards(msgOutCard.sSeat)
            local viewHandCardIDs = self._cardLayer:getHandCards(localSeat)
            local bSame = CardLogic:checkTwoCardDataIsSame(newCardIds, viewHandCardIDs)
            if not bSame then
                self._cardLayer:setHandCards(localSeat,newCardIds)
            end
        elseif CF.roomData:isPlayBack() then
            -- 回放删除其他玩家手牌数据
            self._gameData:deleteHandCards(msgOutCard.sSeat, msgOutCard.ucCard)
        end
    end

    self._gameData:setLastPlayer(msgOutCard.sSeat)
    self._gameData:setLastOutCard(msgOutCard.ucCard)
    self._gameData:updateCardType(msgOutCard)

    --清空掉首出一定要出的牌
    self._gameData:clearMustOutCard()
    --显示附带动画
    if not CF.roomData:getIsFastPlay() then
        self._cardLayer:playCardTypeAction(msgOutCard.sSeat, msgOutCard.sCardType)
    end
    self:playSpecialAniAndSound(msgOutCard.sSeat, msgOutCard.sCardType, msgOutCard.sEndPower)
    --显示出牌
    if CF.roomData:isPlayBack() or msgOutCard.sSeat ~= CF.roomData:getSelfSeat() or self._gameData:isTrust() or CF.roomData:getIsSeer() then
        self:showOutCard(msgOutCard.sSeat, msgOutCard.ucCard)
    end
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
end

function GameLayer:onMsgAllCards(event)
    local msgAllCards = event.msg.msgAllCards
    if msgAllCards.sSeat == CF.roomData:getSelfSeat() and not CF.roomData:getIsSeer() and not CF.roomData:isPlayBack() then
        self._specfCardLayer:setAllCards(msgAllCards.ucCards)
        self._specfCardLayer:showSpecfLayer(true)
    end
end

function GameLayer:onPlayerShowOutCard(event)
    if self._gameData:isPreShowOut() then
        local seat = event.msg.seat
        local outCardIDs = event.msg.outCardIDs
        self:showOutCard(seat, outCardIDs)
        self._gameData:setPreShowOut(false)
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
        self:updateOptBtns(false)
    end
end

function GameLayer:onCheckedCardsJudge(event)
    local checkedCards = event.msg.selectCardIDs
    local lastOutCards = self._gameData:getLastOutCard()
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
    local isLastFreeOut = self:isLastFreedomOut()
    local lastCardstype = self._gameData:getLastCardType()

    local canOut = CardRule:canOut(checkedCards, lastOutCards, isLastFreeOut, lastCardstype)
    self:setButtonState(self._outCardBtn, canOut)
end

function GameLayer:onTouchEventOutCard(send,eventType)
    if CF.roomData:isPlayBack() or CF.roomData:getIsSeer() then
        return
    end
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

function GameLayer:onTouchEventTellMe(send, eventType)
    if CF.roomData:isPlayBack() or CF.roomData:getIsSeer() then
        return
    end
    local seatId = CF.roomData:getSelfSeat()
    local localSeat = CF.roomData:getSelfLocalSeat()
    if not self._cardLayer:canTouchCard(localSeat) then
        return
    end
    local allCardIDs = self._gameData:getHandCards(seatId)
    local lastOutCards = self._gameData:getLastOutCard()
    self._cardLayer:resetHandCards()

    local curPlayer = self._gameData:getCurrentPlayer()
    local nextSeat = (curPlayer + 1) % CF.roomData:getChairs()
    local nextHandCardsCnt = self._gameData:getHandCardsCount(nextSeat)

    -- 上一手牌的type，转换成cardrule里的结构后，传给cardrule
    local lastCardstype = self._gameData:getLastCardType()
    local isLastFreeOut = self:isLastFreedomOut()

    self._promptID = self._promptID + 1
    self._promptCards = CardRule:getPromptCards(allCardIDs, lastOutCards, self._promptID, isLastFreeOut, lastCardstype)

    --不存在可选项直接过
    if #self._promptCards == 0 then
        if self._promptID == 1 then
            self._gameData:setPreShowOut(false)
            CF.game:getModule("GameLayer"):onPassClick()
            return
        end
        if self._promptID > 1 then
            self._promptID = 1
            self._promptCards = CardRule:getPromptCards(allCardIDs, lastOutCards, self._promptID, isLastFreeOut, lastCardstype)
        end
    end

    self._cardLayer:setSelectCards(localSeat,self._promptCards)
    local canOut = CardRule:canOut(self._promptCards, lastOutCards, isLastFreeOut, lastCardstype)
    self:setButtonState(self._outCardBtn, canOut)
end

function GameLayer:sendOutCard(outCardIDs)
    local eventDispatcher = cc.Director:getInstance():getEventDispatcher()
    local event = cc.EventCustom:new("UICardLayer.UICardArea.onEventOutCards")
    event.outCardIDs = outCardIDs
    eventDispatcher:dispatchEvent(event)
end

function GameLayer:onGameChangeBtnsState(event)
    local msg = event.msg
    if msg.btnTagFlag == CF.GameDefine.GAME_BTNS_TAG_FLAG.BTN_OUTCARD then
        self:setButtonState(self._outCardBtn, msg.state)
    end
end

function GameLayer:onGameStep()
    if gameStep >= CF.GameDefine.ENUM_GAME_STEP.GAME_STEP_START_GAME
        and gameStep < CF.GameDefine.ENUM_GAME_STEP.GAME_STEP_WIN_LOST
        and not CF.roomData:isPlayBack() and not CF.roomData:getIsSeer() then
        self._sortBtn:setVisible(true)
    else
        self._sortBtn:setVisible(false)
    end
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

function GameLayer:onGameEnd(event)
    self:showClock(false)
    self:updateOptBtns(false)
end

function GameLayer:onAllHandCards(event)
    -- 获取全部人手牌并展示
    local ucPlayerCnt = event.msg.ucPlayerCount
    for i = 1, ucPlayerCnt do
        local localSeat = CF.roomData:seatToLocal(i - 1)
        local orderCards = self._gameData:getHandCards(i - 1)
        self._cardLayer:setHandCards(localSeat, orderCards)
    end
    self._cardLayer:showLeftAndRightHandCardArea(true)
end

-- 是否是最后一张牌,并且是自由出牌，并且牌堆没牌了，王可单出
function GameLayer:isLastFreedomOut()
    local leftCardCount = self._gameData:getLeftCardCount()
    local preOutSeat = self._gameData:getLastPlayer()
    local sSeatId = CF.roomData:getSelfSeat()
    local selfCard = clone(self._gameData:getHandCards(sSeatId))
    if preOutSeat == sSeatId and selfCard and #selfCard <= 1 and leftCardCount <= 0 then
        return true
    end
    return false
end

function GameLayer:onSpring(event)
    if not event or not event.msg then
        return
    end
    -- local ucShutedCount = event.msg.ucShutedCount
    -- local sShutedSeat = event.msg.sShutedSeat

    -- for i = 1, ucShutedCount do
    --     if sShutedSeat[i] == CF.roomData:getSelfSeat() then
    --         local winLostData = self._gameData:getWinLostData()
    --         winLostData:addPlayerLabel("被关门")
    --     end
    -- end

    if event.msg.sSpringSeat and #event.msg.sSpringSeat > 0 then
        AnimationManager.showCardTypeAni(self._aniPanel, CF.GameDefine.KW_CARD_STYPE_SPRING)
    end
end

function GameLayer:onMatchStateChanged(event)
    self:resetTable()
end

function GameLayer:onMatchPlayerReady(event)
    if event and event.msg and event.msg.seatId and event.msg.seatId == CF.roomData:getSelfSeat() then
        self:resetTable()
    end
end

function GameLayer:autoRaiseCard()
    if CF.roomData:isPlayBack() or CF.roomData:getIsSeer() or not self._cardLayer then
        return
    end

    -- 自由出牌情况下，不调用该接口
    local preOutSeat = self._gameData:getLastPlayer()
    local seatId = CF.roomData:getSelfSeat()
    local lastOutCards = self._gameData:getLastOutCard()
    if #lastOutCards == 0 or preOutSeat == seatId then
        return
    end
    self._cardLayer:resetHandCards()

    -- 获取自动提起的牌
    local localSeat = CF.roomData:getSelfLocalSeat()
    local allCardIDs = self._gameData:getHandCards(seatId)
    local lastCardstype = self._gameData:getLastCardType()
    local isLastFreeOut = self:isLastFreedomOut()
    self._promptCards = CardRule:getPromptCards(allCardIDs, lastOutCards, 1, isLastFreeOut, lastCardstype)
    
    --不存在可选项直接过
    if #self._promptCards == 0 then
        return
    end
    self._cardLayer:setSelectCards(localSeat,self._promptCards)
    local canOut = CardRule:canOut(self._promptCards, lastOutCards, isLastFreeOut, lastCardstype)
    self:setButtonState(self._outCardBtn, canOut)
end

return GameLayer3{