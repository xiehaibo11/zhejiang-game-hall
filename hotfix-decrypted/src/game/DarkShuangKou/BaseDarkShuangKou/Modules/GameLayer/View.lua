local GameLayer = CF.gameClass("GameLayer", CF.ViewBase)
local CardEnum = CF.gameRequire("Define.CardEnum")
local CardLogic = CF.gameRequire("Logic.CardLogic")
local CardLayer = CF.gameRequire("Modules.GameLayer.GameCardLayer")
local SpecfCardLayer = CF.gameRequire("Modules.GameLayer.GameSpecfCardLayer")

function GameLayer:ctor(param)
    param = param or {}
    GameLayer.super.ctor(self, param)
    self:createChildren()
    self:initDatas()
end

function GameLayer:getCSBPath()
    return CF.gameResourceRootPath .. "DarkShuangKou/GameLayer/CSB/NewGameLayer.csb"
end

function GameLayer:getBindingInfo()
    local table = {
        ["_KW_PANEL_CARDLAYER_POS"] = {varName = "_cardLayerPanelPos"},
        --游戏操作按钮 不出、提示、出牌
        ["_KW_PANEL_GAMEPLAY_BTNS"] = {varName = "_gamePlayBtns"},
        ["_KW_PANEL_PLAYER_CLOCK"] = {varName = "_clockPanel"},
        ["_KW_POS_CLOCK_ANI"] = {varName = "_posClockAni"},
        ["_KW_TEXT_OUT_CARD_TIME"] = {varName = "_outCardTimeText"},
        ["_KW_TEXT_PLAYER_OUT_CLOCK"] = {varName = "_outClockText"},
        ["_KW_BTN_TELL_ME"] = {varName = "_tellMeBtn", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onTellMeBtnClicked"},
        ["_KW_BTN_OUTCARD"] = {varName = "_outCardBtn", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onOutCardBtnClicked"}
    }
    return table
end

function GameLayer:createChildren()
    self:initCardLayer()
    self:clearTable()
end

function GameLayer:initDatas()
    self._gameData = CF.game:getModule("GameLayer"):getGameData()
    self._gameModule = CF.game:getModule("GameLayer")
    self._gamename = CF.gameSub:getGameNameByGameId(CF.roomData:getGameID())
end

function GameLayer:getProxyEvents()
    local eventTable = {
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_HAND_CARD_CHANGED", callBack = "onHandCardChanged"},
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_CLEAR_OUT_CARDS", callBack = "onClearAllOutCards"},
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_TAKE_CARD", callBack = "onTakeCard"},
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_COLLECT_CARDS", callBack = "onCollectCards"},
        --
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_GAME_START", callBack = "onGameStart"},
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_GAME_END", callBack = "onGameEnd"},
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_GAME_CLOCK", callBack = "onGameClock"},
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_CLEAR_TIME_OUT_CARD", callBack = "onClearStopOutCard"},
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_CLEAR_TIME_OUT_CARD_CLOCK", callBack = "onClearStopOutCardClock"},
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_PLAYER_GET_POWER", callBack = "onPlayerPower"},
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_PLAYER_OUT_CARD", callBack = "onPlayerOutCard"},
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_PLAYER_SHOW_OUT_CARD", callBack = "onPlayerShowOutCard"},
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_PLAYER_FRESH_OUT_CARD", callBack = "onPlayerFreshOutCard"},
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_GAME_PLAYER_START", callBack = "clearTable"},
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_BEFORE_ATTACK_EFFECT", callBack = "onBeforeAttackEffect"},
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_SPECF_CARD", callBack = "onStartSpecfCards"}
    }
    return eventTable
end

function GameLayer:getAdaptationConfig()
    return {}
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

function GameLayer:onGameStart(event)
    --#是否回放
    self:clearTable()
    if not CF.roomData:isPlayBack() then
        self._cardLayer:showLeftAndRightHandCardArea(false)
    else
        self._cardLayer:showLeftAndRightHandCardArea(true)
    end
end

function GameLayer:clearTable()
    --清除头像数据
    CF.roomData:clearTable()
    self:stopOutCardClock()
    --清除桌面牌
    self._cardLayer:clearAllCards()
    --关闭等待弹窗
    CF.TipTool.clearScrollTip()
    self:showPanelGamePlayBtns(false)
end

function GameLayer:startOutCardClock()
    local nTime = self._gameData:getClock()
    if nTime > 0 and nTime < 300 then
        --设置时钟数字
        local outCardTimePanel = self._clockPanel
        local outCardTimeText = self._outCardTimeText
        outCardTimeText:setString(string.format("%d", nTime))
        outCardTimePanel:stopAllActions()
        local callback =
            cc.CallFunc:create(
            function()
                nTime = self._gameData:getClock()
                outCardTimeText:setString(string.format("%d", nTime))
                if nTime <= 5 then
                    outCardTimeText:addLuaComponent(
                        cc.ext.CompSpineAction,
                        {jsonFilePath = CF.gameResourceRootPath .. "DarkShuangKou/Spine/Round/zzb_ap_nz.json", animationName = "animation2", boneName = "touying2", slotName = "touying2"}
                    )
                    CF.SpineManager:playAni(self._posClockAni, CF.gameResourceRootPath .. "DarkShuangKou/Spine/Round/", "zzb_ap_nz", "animation2", true)
                    CF.soundManager:playSoundClock()
                end
                if nTime <= 0 then
                    outCardTimePanel:stopAllActions()
                    outCardTimePanel:setVisible(false)
                    self._posClockAni:removeAllChildren()
                end
            end
        )
        local squence = cc.RepeatForever:create(cc.Sequence:create(cc.DelayTime:create(1), callback))
        outCardTimePanel:runAction(squence)
        outCardTimePanel:setVisible(true)
        CF.SpineManager:playAni(self._posClockAni, CF.gameResourceRootPath .. "DarkShuangKou/Spine/Round/", "zzb_ap_nz", "animation", true)
    else
        self:stopOutCardClock()
    end
end

function GameLayer:startOutCardTextClock()
    local nTime = self._gameData:getClock()
    if nTime > 0 and nTime < 300 then
        --设置时钟数字
        self._outClockText:setString(string.format("出牌阶段 %d", nTime))
        self._outClockText:stopAllActions()
        local callback =
            cc.CallFunc:create(
            function()
                nTime = self._gameData:getClock()
                self._outClockText:setString(string.format("出牌阶段 %d", nTime))
                if nTime <= 0 then
                    self._outClockText:setVisible(false)
                    self._outClockText:stopAllActions()
                end
            end
        )
        local squence2 = cc.RepeatForever:create(cc.Sequence:create(cc.DelayTime:create(1), callback))
        self._outClockText:runAction(squence2)
        self._outClockText:setVisible(true)
    else
        self:stopOutCardClock()
    end
end

function GameLayer:stopOutCardClock()
    self._clockPanel:stopAllActions()
    self._clockPanel:setVisible(false)
    self._outClockText:stopAllActions()
    self._outClockText:setVisible(false)
    self._posClockAni:removeAllChildren()
end

function GameLayer:onGameEnd(event)
    self:stopOutCardClock()

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

function GameLayer:onPlayerPower(event)
    if self._gameData:getPowerBySeat(CF.roomData:getSelfSeat()) == CF.GameDefine.tagPowerState.POWER_STATE_CAN_OUT then
        -- 显示操作按钮
        self:showPanelGamePlayBtns(true)
    else
        -- 隐藏操作按钮
        self:showPanelGamePlayBtns(false)
    end
end

--设置操作按钮的可见性
function GameLayer:showPanelGamePlayBtns(bShow)
    if CF.roomData:getIsSeer() then
        -- 旁观玩家不显示操作按钮
        return
    end
    self._gamePlayBtns:setVisible(bShow)
end

function GameLayer:onTellMeBtnClicked(send, eventType)
    if CF.roomData:isPlayBack() then
        return
    end

    local hintCardIDs = self._gameData:getHintCardIDs()
    if not hintCardIDs or #hintCardIDs <= 0 then
        -- 防止数据过快，这边重新计算一次
        local selfSeat = CF.roomData:getSelfSeat()
        local handCardIDs = self._gameData:getHandCardIDs(selfSeat)
        local cardsInfo = CardLogic.FindMaxCardType(handCardIDs)
        self._gameData:setHintCards(cardsInfo.cards)
        hintCardIDs = self._gameData:getHintCardIDs()
        if not hintCardIDs or #hintCardIDs <= 0 then
            return
        end
    end

    self._cardLayer:setSelfSelectCards(clone(hintCardIDs))
    CF.game:getModule("GameLayer"):gameEventCheckedCards({selectCardIDs = hintCardIDs})
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
end

function GameLayer:onGameClock(event)
    self:stopOutCardClock()
    if CF.game:getModule("GameLayer"):getHaveOutCards() then
        self:startOutCardTextClock()
    else
        self:startOutCardClock()
    end
end

function GameLayer:onClearStopOutCard(event)
    self:showPanelGamePlayBtns(false)
    self:stopOutCardClock()
end

function GameLayer:onClearStopOutCardClock(event)
    self:stopOutCardClock()
end

-- 收到已经出牌的信息
function GameLayer:onPlayerOutCard(event)
    local msg = event.msg
    local localSeat = CF.roomData:seatToLocal(msg.seat)
    if localSeat == CF.roomData:getSelfLocalSeat() then
        self._cardLayer:newOutCardArea(localSeat)
        local outCardIDs = msg.outCardIDs
        if #outCardIDs > 0 then
            local openCardIds = self._gameData:getOpenCardIDs(msg.seat)
            self._cardLayer:setOutCards(localSeat, outCardIDs, openCardIds, msg.invalidCards, nil, false)
            self._cardLayer:runScaleAni(localSeat)
            local handCardIDs = self._gameData:getHandCardIDs(msg.seat)
            local _, newHandCardIDs = CardLogic.deleteCardIDs(handCardIDs, outCardIDs)
            local _, newOpenCardIDs = CardLogic.deleteCardIDs(openCardIds, outCardIDs)
            self:setHandAndHeadCards(localSeat, newHandCardIDs, newOpenCardIDs)
        end
        CF.soundManager:playSoundOut()

        self:stopOutCardClock()
        self:startOutCardTextClock()
    else
        CF.soundManager:playSoundOut()
    end
end

-- 展示出牌的牌
function GameLayer:onPlayerShowOutCard(event)
    self:stopOutCardClock()
    self:stopAllActions() -- 重连时，这边可能同时收到多个出牌的消息，需要停止所有的动画
    if CF.roomData:getSelfSeat() == CF.roomData:getMaxPlayer() then
        -- 异常
        return
    end
    local showCardTime = 0.85
    local msg = event.msg

    local startSeat = math.random(0, 3)
    local delayControl = 1
    if msg.relink then
        delayControl = 0
    end
    local aniIndex = 0
    for i = startSeat, startSeat + 3 do
        local seat = i % 4
        local localSeat = CF.roomData:seatToLocal(seat)
        self._cardLayer:newOutCardArea(localSeat)
        local outCardIDs = msg.outCardIDs[seat]
        if #outCardIDs > 0 then
            aniIndex = aniIndex + 1
            local squence =
                cc.Sequence:create(
                cc.DelayTime:create(showCardTime * (aniIndex - 1) * delayControl),
                cc.CallFunc:create(
                    function()
                        local playerData = CF.roomData:getPlayerDataBySeatId(seat)
                        local cardTypeInfo = CardEnum.getCardTypeInfoByCardTypeID(msg.cardType[seat])
                        if cardTypeInfo ~= nil then
                            if playerData then
                                CF.soundManager:playSoundCardType(playerData:getSex(), cardTypeInfo.soundid)
                            else
                                CF.soundManager:playSoundCardType(0, cardTypeInfo.soundid)
                            end
                        end
                        local openCardIds = self._gameData:getOpenCardIDs(seat)
                        self._cardLayer:setOutCards(localSeat, outCardIDs, openCardIds, msg.invalidCards[seat], msg.cardType[seat], nil, not msg.relink)
                        msg.callback(localSeat)

                        local handCardIDs = self._gameData:getHandCardIDs(seat)
                        local _, newHandCardIDs = CardLogic.deleteCardIDs(handCardIDs, outCardIDs)
                        local _, newOpenCardIDs = CardLogic.deleteCardIDs(openCardIds, outCardIDs)
                        self:setHandAndHeadCards(localSeat, newHandCardIDs, newOpenCardIDs)
                    end
                )
            )
            self:runAction(squence)
        else
            -- 没有牌，说明玩家已经认输
            msg.callback(localSeat)
        end
    end
end

function GameLayer:onPlayerFreshOutCard(event)
    local msg = event.msg

    local startSeat = math.random(0, 3)
    for i = startSeat, startSeat + 3 do
        local seat = i % 4
        local localSeat = CF.roomData:seatToLocal(seat)
        self._cardLayer:newOutCardArea(localSeat)
        local outCardIDs = msg.outCardIDs[seat]
        if #outCardIDs > 0 then
            local openCardIds = self._gameData:getOpenCardIDs(seat)
            self._cardLayer:setOutCards(localSeat, outCardIDs, openCardIds, msg.invalidCards[seat], msg.cardType[seat], false, false)
        end
    end
end

function GameLayer:onBeforeAttackEffect(event)
    local msg = event.msg
    self._cardLayer:playOutCardsBeforeAttackEffect(msg)
end

-----------------------------------------------------------------
------新的处理
-----------------------------------------------------------------
-- 设置手牌
function GameLayer:setHandAndHeadCards(localSeat, handCardIDs, openCardIDs)
    if self._gameData:getGameStep() == CF.GameDefine.GAME_STEP.GAME_STEP_TOTAL_RESULT then
        -- 这边曾经出现bug，在所有人出玩牌的一瞬间，解散房间，牌动画还在播，但是已经不需要显示头像边的牌了。
        return
    end
    if localSeat == CF.roomData:getSelfLocalSeat() then
        self._cardLayer:setHandCards(localSeat, handCardIDs, openCardIDs)
    else
        self._cardLayer:setHeadCards(localSeat, handCardIDs, openCardIDs)
    end
end

-- 手牌变化了
function GameLayer:onHandCardChanged(event)
    local msg = event.msg
    local localSeat = CF.roomData:seatToLocal(msg.seat)
    local cardIds = self._gameData:getHandCardIDs(msg.seat)
    local openCardIds = self._gameData:getOpenCardIDs(msg.seat)
    if self._gameData:getGameStep() == CF.GameDefine.GAME_STEP.GAME_STEP_TOTAL_RESULT then
        self._cardLayer:clearOutCardType(localSeat)
        self._cardLayer:showLeftAndRightHandCardArea(true)
        self._cardLayer:setHandCards(localSeat, cardIds, openCardIds)
        self._cardLayer:setHeadCards(localSeat, {}, {})
    else
        self:setHandAndHeadCards(localSeat, cardIds, openCardIds)
    end
end

-- 清空出牌
function GameLayer:onClearAllOutCards()
    self._cardLayer:clearAllOutCards()
end

-- 抓牌
function GameLayer:onTakeCard(event)
    local aniStartTime = socket.gettime()
    local msg = event.msg
    local cnt = 0
    for i = 0, 3 do
        cnt = math.max(cnt, msg.ucDrawCount[i])
    end

    local aniCompleteCnt = 0
    local completeCallback = function(seat)
        -- 动画播放完成，排序刷新手牌
        local data = clone(self._gameData:getHandCardIDs(seat) or {})
        self._gameData:setHandCardIDs(seat, data)

        CF.game:getModule("GameLayer"):refreshHandCard(seat)
        aniCompleteCnt = aniCompleteCnt + 1
        if aniCompleteCnt == 4 then
            print(os.date("%Y-%m-%d %H:%M:%S", os.time()) .. " [DarkShuangKou][AniTime] " .. cnt .. "张发牌: " .. (socket.gettime() - aniStartTime))
            if msg.callback then
                msg.callback()
            end
        end
    end

    local dataCallback = function(seat, cardid)
        local handCardIDs = self._gameData:getHandCardIDs(seat)
        local tmpCards = {}
        if seat == CF.roomData:getSelfSeat() then
            -- 自己家，按顺序是插在前面
            table.insert(tmpCards, cardid)
            table.insertto(tmpCards, handCardIDs)
        else
            -- 其他家，按顺序是插在后面
            table.insertto(tmpCards, handCardIDs)
            table.insert(tmpCards, cardid)
        end
        self._gameData:setHandCardIDs(seat, tmpCards, false)

        CF.game:getModule("GameLayer"):refreshHandCard(seat)
    end

    self._cardLayer:takeCardsByAni(msg.ucDrawCards, completeCallback, dataCallback)
end

function GameLayer:onCollectCards(event)
    for localSeat = 1, 4 do
        self._cardLayer:newOutCardArea(localSeat)
    end
    self._cardLayer:collectCardsAni(event.msg.callback)
end

function GameLayer:onStartSpecfCards(event)
    if not self._specfCardLayer then
        self:initSpecfCardLayer()
    end
    local msg = event.msg
    local handSize = {6, 8, 10, 12, 14, 16}
    local nowRound = self._gameData:getRoundInfo()
    if CF.roomData:isDebug() then
        nowRound = 1
    end
    local handCardSize = #self._gameData:getHandCardIDs(CF.roomData:getSelfSeat())
    self._specfCardLayer:setAllCards(msg.cards, handSize[nowRound] - handCardSize)
    self._specfCardLayer:showSpecfLayer(true)
end

return GameLayer
 3J  