local CardArea = NG.GAME.gameRequire("Modules.GameMain.CardLayer.CardArea")
local Card = NG.GAME.gameRequire("Modules.GameMain.CardLayer.Card")
local HandCardArea = NG.GAME.gameRequire("Modules.GameMain.CardLayer.HandCardArea")
local CardLayerConfig = NG.GAME.gameRequire("Modules.GameMain.CardLayer.CardLayerConfig")
local CardLayerDefine = NG.GAME.gameRequire("Modules.GameMain.CardLayer.CardLayerDefine")
local CardLayerFunction = NG.GAME.gameRequire("Modules.GameMain.CardLayer.CardLayerFunction")
local GameMainDefine = NG.GAME.gameRequire("Modules.GameMain.Define.GameMainDefine")
local CardLayer = NG.GAME.gameClass("CardLayer", NG.ViewBase)
local GoldSoundConfig = NG.GAME.gameRequire("Config.GoldSoundConfig")

function CardLayer:getCSBPath()
    return "cocosStudio/GoldNew/Game/HPLandlord/CSB/GameMain/CardLayer.csb"
end

function CardLayer:getBindingInfo()
    return {
        ["_KW_PANEL_TOUCH"] = {varName = "_touchPanel"},
        --手牌区
        ["_KW_POS_HANDCARD_"] = {varName = "_handCardPos", beginIndex = 1, endIndex = 3},
        --手牌区
        ["_KW_POS_OUTCARD_"] = {varName = "_outCardPos", beginIndex = 1, endIndex = 3},
        --底牌
        ["_KW_NODE_DIPAI_BIG"] = {varName = "_bigDiPaiNode"},
        ["_KW_NODE_DIPAI_SMALL"] = {varName = "_smallDiPaiNode"},
        --加倍信息
        ["_KW_PANEL_MULT"] = {varName = "_KW_PANEL_MULT"},
        ["_KW_TEXT_BEI"] = {varName = "_KW_TEXT_BEI"},
        ["_KW_PANEL_BEI_TIP"] = {varName = "_KW_PANEL_BEI_TIP"},
        ["_KW_TEXT_BEI_TIP"] = {varName = "_KW_TEXT_BEI_TIP"},
    }
end

function CardLayer:getProxyEvents()
    return {
        {module = NG.goldGame:getModule("GameMain"), eventKeyName = "EVENT_START_GAME", callBack = "onStartGame"},
        {module = NG.goldGame:getModule("GameMain"), eventKeyName = "EVENT_TAKE_FIRST", callBack = "onTakeFirst"},
        {module = NG.goldGame:getModule("GameMain"), eventKeyName = "EVENT_BASE_CARDS_CHANGE", callBack = "onBaseCard"},
        {module = NG.goldGame:getModule("GameMain"), eventKeyName = "EVENT_RELINK_ENTER", callBack = "onRelinkEnter"},
        {module = NG.goldGame:getModule("GameMain"), eventKeyName = "EVENT_ADD_BASE", callBack = "onAddBase"},
        {module = NG.goldGame:getModule("GameMain"), eventKeyName = "EVENT_PLAY_CARD", callBack = "onPlayCard"},
        {module = NG.goldGame:getModule("GameMain"), eventKeyName = "EVENT_TIP_CARD", callBack = "onTipCard"},
        {module = NG.goldGame:getModule("GameMain"), eventKeyName = "EVENT_CLOCK", callBack = "onClock"},
        {module = NG.goldGame:getModule("GameMain"), eventKeyName = "EVENT_RESET_TABLE", callBack = "onResetTable"},
        {module = NG.goldGame:getModule("GameMain"), eventKeyName = "EVENT_ON_MSG_RESULT", callBack = "onGameResult"},
        {module = NG.goldGame:getModule("GameMain"), eventKeyName = "EVENT_START_GAME_READY", callBack = "onResetTable"},
        {module = NG.goldGame:getModule("GameMain"), eventKeyName = "EVENT_OUT_CARDS", callBack = "onOutCards"},
        {module = NG.goldGame:getModule("GameMain"), eventKeyName = "EVENT_FLUSH_MARKER_STATE", callBack = "onFlushMarkerState"},
        {module = NG.goldGame:getModule("GameMain"), eventKeyName = "EVENT_POWER", callBack = "onPower"},
        {module = NG.goldGame:getModule("GameMain"), eventKeyName = "EVENT_UPDATE_SPACE_BASE", callBack = "onMarkerMultUpdate"},
        }
end

function CardLayer:ctor(param)
    param = param or {}
    CardLayer.super.ctor(self, param)

    self:initData()
    self:initTouchPanel()
    self:initDiPaiNode()
end

function CardLayer:initData()
    self._tHandCardArea = {}
    self._tOutCardArea = {}
    self._bigDiPais = {}
end

function CardLayer:initTouchPanel()
    self._touchPanel:setTouchEnabled(true)
    self._touchPanel:setSwallowTouches(false)
    self._touchPanel:addTouchEventListener(handler(self, self.onTouchEventTouchLayer))
end

function CardLayer:initDiPaiNode()
    self._bigDiPaiNode:setVisible(false)
    self._smallDiPaiNode:setVisible(false)
    self._KW_PANEL_MULT:setVisible(false)
    self._KW_PANEL_BEI_TIP:setVisible(false)
end

--牌层点击事件
function CardLayer:onTouchEventTouchLayer(send, eventType)
    if eventType ~= ccui.TouchEventType.began then
        return
    end
    --重置牌层操作状态
    self:resetHandCards()
end

----------------------------------------
--重置牌层操作状态(收回)
----------------------------------------
function CardLayer:resetHandCards(localSeat)
    localSeat = localSeat or CardLayerConfig.LocalSeat.Bottom
    if localSeat ~= CardLayerConfig.LocalSeat.Bottom then
        --暂时只处理自己手牌，只有自己手牌可以触摸
        return
    end
    if self._tHandCardArea[localSeat] then
        self._tHandCardArea[localSeat]:resetCards()
    end
end

----------------------------------------
--设置手牌数据
--bShowAni表示是否显示动画效果（发牌）
----------------------------------------
function CardLayer:setHandCards(localSeat, cardIDs, bShowAni)
    if not self._tHandCardArea[localSeat] then
        self:createHandCardArea(localSeat)
    end

    self._tHandCardArea[localSeat]:setShowCards(cardIDs, bShowAni)
    -- self._tHandCardArea[localSeat]:updateCardsPositionAndOrder()

    self._tHandCardArea[localSeat]:setLandlordFlagVisible(self:getGameData():getBankerSeat() == localSeat)

    if localSeat == CardLayerConfig.LocalSeat.Bottom then
        local bombCards = NG.goldGame:getModule("GameMain"):getTipLogic().gameLogic:getNormalBoomWithoutKing(cardIDs)
        self._tHandCardArea[localSeat]:setBombCards(bombCards)
    end
end

function CardLayer:getHandCards(localSeat)
    if not self._tHandCardArea[localSeat] then
        return {}
    end

    return self._tHandCardArea[localSeat]:getCardIDs()
    -- self._tHandCardArea[localSeat]:updateCardsPositionAndOrder()
end

----------------------------------------
--清除手牌数据
----------------------------------------
function CardLayer:clearHandCard(localSeat)
    if not self._tHandCardArea[localSeat] then
        return
    end
    self._tHandCardArea[localSeat]:clearCards()
end

----------------------------------------
--设置提示自己选中牌数据
----------------------------------------
function CardLayer:onTipCard(event)
    local cardIDs = event.msg.cards
    -- dump(cardIDs,"CardLayer:onTipCard")
    self:setSelectCards(CardLayerConfig.LocalSeat.Bottom, cardIDs)
end

----------------------------------------
--设置自己选中牌数据
----------------------------------------
function CardLayer:setSelfSelectCards(cardIDs)
    self:setSelectCards(CardLayerConfig.LocalSeat.Bottom, cardIDs)
end

----------------------------------------
--设置选中牌数据
----------------------------------------
function CardLayer:setSelectCards(localSeat, cardIDs)
    --只有自己的手牌才能选中
    if localSeat ~= CardLayerConfig.LocalSeat.Bottom then
        return
    end
    if not self._tHandCardArea[localSeat] then
        self:createHandCardArea(localSeat)
    end
    self._tHandCardArea[localSeat]:setSelectCards(clone(cardIDs))
    local isShowFire = CardLayerFunction.isAllBoom(cardIDs)
    self._tHandCardArea[localSeat]:showFireOnSelectedCards(isShowFire)
end

----------------------------------------
--获取选中牌数据
----------------------------------------
function CardLayer:getSelectCardIDs(localSeat)
    local tempLocalSeat = localSeat
    if tempLocalSeat == nil then
        tempLocalSeat = CardLayerConfig.LocalSeat.Bottom
    end
    --只有自己的手牌才能选中
    if tempLocalSeat ~= CardLayerConfig.LocalSeat.Bottom then
        return
    end
    if not self._tHandCardArea[tempLocalSeat] then
        return
    end
    return self._tHandCardArea[tempLocalSeat]:getSelectCardIDs()
end

----------------------------------------
--设置打出牌数据
----------------------------------------
function CardLayer:setOutCards(localSeat, cardIDs, isShowAni)
    if not self._tOutCardArea[localSeat] then
        self:createOutCardArea(localSeat)
    end
    self._tOutCardArea[localSeat]:setShowCards(cardIDs, isShowAni, "out")
    -- self._tOutCardArea[localSeat]:updateCardsPositionAndOrder()
end

----------------------------------------
--清除打出牌数据
----------------------------------------
function CardLayer:clearOutCard(localSeat)
    if not self._tOutCardArea[localSeat] then
        return
    end
    self._tOutCardArea[localSeat]:clearCards()
end

----------------------------------------
--清除所有牌
----------------------------------------
function CardLayer:clearAllCards()
    self:clearAllHandCards()
    for _, cardArea in pairs(self._tOutCardArea) do
        cardArea:clearCards()
    end
end

function CardLayer:clearAllHandCards()
    for _, cardArea in pairs(self._tHandCardArea) do
        cardArea:clearCards()
    end
end

----------------------------------------
--设置牌区的通用配置
----------------------------------------
function CardLayer:setCardAreaNormalConf(cardArea, conf)
    cardArea:setLayoutType(conf.layoutType)
    cardArea:setLineCardCount(conf.lineCardCount)
    cardArea:setStartPosition(conf.startPosX, conf.startPosY)
    cardArea:setCardDistance(conf.cardDistanceX, conf.cardDistanceY)
    cardArea:setCarAddDistance(conf.cardAddDirectionX, conf.cardAddDirectionY)
end

----------------------------------------
--创建玩家手牌
----------------------------------------
function CardLayer:createHandCardArea(localSeat)
    local cardArea
    if localSeat == CardLayerConfig.LocalSeat.Bottom then
        cardArea = HandCardArea.new()
    else
        cardArea = CardArea.new()
    end
    local handCardConf = CardLayerConfig.HandCardConf[localSeat]
    self:setCardAreaNormalConf(cardArea, handCardConf)
    -- cardArea:setMaxCarDistance(handCardConf.maxCardDistanceX)
    cardArea:setScale(CardLayerConfig.HandCardScale[localSeat])
    self["_handCardPos" .. localSeat]:addChild(cardArea)
    self._tHandCardArea[localSeat] = cardArea
end

----------------------------------------
--创建玩家打出的牌
----------------------------------------
function CardLayer:createOutCardArea(localSeat)
    local cardArea = CardArea.new()
    self:setCardAreaNormalConf(cardArea, CardLayerConfig.OutCardConf[localSeat])
    cardArea:setScale(CardLayerConfig.OutCardScale)
    self["_outCardPos" .. localSeat]:addChild(cardArea)
    self._tOutCardArea[localSeat] = cardArea
end

----------------------------------------
--设置需要显示特殊颜色的牌
----------------------------------------
function CardLayer:setHandCardAreaSpecialColorCardIDs(localSeat, cardIDs)
    if not self._tHandCardArea[localSeat] then
        return
    end
    self._tHandCardArea[localSeat]:setSpecialColorCardIDs(cardIDs)
end

function CardLayer:clearSmallDiPais()
    self._smallDiPaiNode:removeAllChildren()
    self._KW_PANEL_MULT:setVisible(false)
end

function CardLayer:showSmallDiPai(cardIDs)
    self._inAni = false
    self._smallDiPaiNode:setVisible(true)
    self:clearSmallDiPais()
    self:clearBigDiPais()

    for i=1,3 do
        local cView = Card.new()
        cView:setCardID(cardIDs[i])
        cView:setScale(0.5)
        cView:setPosition((i-2)*25, 0)
        self._smallDiPaiNode:addChild(cView)
    end
    self:flushSmallDiPaiState()
end

local BigDiPaiScale = 0.55
function CardLayer:showBigDiPai(cardIDs)
    self._bigDiPaiNode:setVisible(true)
    
    if #self._bigDiPais == 3 and cardIDs[1] > 0 then
        self._inAni = true
        for i = 1, 3 do
            local cView = self._bigDiPais[i]
            if i == 1 then
                cView:runAction(
                    cc.Sequence:create(
                        cc.DelayTime:create(0.2-0.05*i),
                        cc.ScaleTo:create(0.2, 0, 0.55),
                        cc.CallFunc:create(
                            function()
                                cView:setCardID(cardIDs[i])
                            end
                        ),
                        cc.ScaleTo:create(0.2, BigDiPaiScale, BigDiPaiScale)
                    )
                )
            else
                cView:runAction(
                    cc.Sequence:create(
                        cc.DelayTime:create(0.2-0.05*i),
                        cc.ScaleTo:create(0.2, 0, 0.55),
                        cc.CallFunc:create(
                            function()
                                cView:setCardID(cardIDs[i])
                            end
                        ),
                        cc.ScaleTo:create(0.2, BigDiPaiScale, BigDiPaiScale),
                        cc.DelayTime:create(0.5),
                        cc.CallFunc:create(
                            function()
                                self:showSmallDiPai(cardIDs)
                            end
                        )
                    )
                )
            end
            
        end
        return
    end

    self:clearBigDiPais()
    for i=1,3 do
        local cView = Card.new()
        cView:setCardID(cardIDs[i])
        cView:setScale(0.55)
        cView:setPosition((i-2)*130, 0)
        self._bigDiPaiNode:addChild(cView)
        self._bigDiPais[i] = cView
    end
end

function CardLayer:clearBigDiPais()
    for _, dipai in pairs(self._bigDiPais) do
        dipai:removeFromParent()
    end
    self._bigDiPais = {}
end

---------------------------------------事件处理----------------------------------------

function CardLayer:getGameData()
    return NG.goldGame:getModule("GameMain"):getData()
end

function CardLayer:onStartGame(event)
    self:showBigDiPai({0, 0, 0})
end

function CardLayer:onTakeFirst(event)
    local selfHandCards = self:getGameData():getHandCards(GameMainDefine.SELF_LOCAL_SEAT)
    local showCards = NG.goldGame:getModule("GameMain"):getTipLogic().gameLogic:sortMinCardsByValue(selfHandCards)
    self:setHandCards(GameMainDefine.SELF_LOCAL_SEAT, showCards, true)
end

function CardLayer:onBaseCard(event)
    local baseCards = self:getGameData():getBaseCards()
    self:showBigDiPai(baseCards)
end

function CardLayer:onRelinkEnter(event)
    self:updateHandCards(GameMainDefine.SELF_LOCAL_SEAT)
end

function CardLayer:updateHandCards(localSeat)
    if localSeat == GameMainDefine.SELF_LOCAL_SEAT then
        local selfHandCards = self:getGameData():getHandCards(GameMainDefine.SELF_LOCAL_SEAT)
        local showCards = NG.goldGame:getModule("GameMain"):getTipLogic().gameLogic:sortMinCardsByValue(selfHandCards)
        self:setHandCards(GameMainDefine.SELF_LOCAL_SEAT, showCards)
    end
end

function CardLayer:onAddBase(event)
    local localSeat = event.msg.localSeat
    self:updateHandCards(localSeat)
end

function CardLayer:onPlayCard(event)
    local localSeat = event.msg.localSeat
    local outCards = self:getGameData():getOutCards(localSeat)
    if not outCards.nCards or #outCards.nCards <= 0 then
        return
    end

    self:setOutCards(localSeat, outCards.nCards, #outCards.nCards >= 5)

    self:updateHandCards(localSeat)
end

--断线重连时下发的出牌数据
function CardLayer:onOutCards(event)
    local localSeat = event.msg.localSeat
    local outCards = self:getGameData():getOutCards(localSeat)
    if not outCards.nCards or #outCards.nCards <= 0 then
        return
    end

    self:setOutCards(localSeat, outCards.nCards)
end

function CardLayer:onClock(event)
    local localSeat = event.msg.localSeat
    self:clearOutCard(localSeat)
end

function CardLayer:onResetTable()
    self:clearBigDiPais()
    self:clearSmallDiPais()
    self:clearAllCards()
end

function CardLayer:onGameResult()
    for i = 1, GameMainDefine.MAX_PLAYER do
        local handCards = self:getGameData():getHandCards(i)
        if #handCards > 0 then
            self:setOutCards(i, handCards)
            NG.soundManager:playNormalEffect(GoldSoundConfig.tanHanCard)
        else
            local outCards = self:getGameData():getOutCards(i)
            self:setOutCards(i, outCards.nCards)
        end
    end
    self:clearAllHandCards()
end

function CardLayer:onFlushMarkerState(event)
    if event == nil or event.msg == nil then
        return
    end
    self._isMarkerShow = event.msg.isshow
    self:flushSmallDiPaiState()
end

function CardLayer:onPower(event)
    local localSeat = event.msg.localSeat
    local gameData = NG.goldGame:getModule("GameMain"):getData()
    local gameStep = gameData:getGameStep()
    local power = gameData:getPower(localSeat)
    if gameStep == GameMainDefine.ENUM_GAME_STEP.GAME_STEP_CALL_DOUBLE and localSeat == GameMainDefine.SELF_LOCAL_SEAT then
        self._tHandCardArea[localSeat]:flushBoomEffectNodes(false)
    end
end

function CardLayer:flushSmallDiPaiState()
    if self._isMarkerShow == nil then
        self:onMarkerMultUpdate()
        return
    end
    self._smallDiPaiNode:setVisible(not self._isMarkerShow)
    self._KW_PANEL_MULT:setVisible(false)
    self._KW_PANEL_BEI_TIP:setVisible(false)
    if not self._isMarkerShow then
        self:onMarkerMultUpdate()
    end
end

function CardLayer:onMarkerMultUpdate()
    if self._inAni or #self._bigDiPais > 0 then
        return
    end
    local data = NG.goldGame:getModule("GameMain"):getData():getSpaceBase()
    self._KW_PANEL_MULT:setVisible(false)
    self._KW_PANEL_BEI_TIP:setVisible(false)
    if data.nMult ~= nil and data.nMult > 0 then
        self._KW_PANEL_MULT:setVisible(true)
        self._KW_TEXT_BEI:setString(data.nMult .. "倍")
        local mapName = { "散牌", "豹子", "双王", "单王", "单王", "同花顺", "顺子", "同花", "对子" }
        if data.nFlag > 0 and mapName[data.nFlag + 1] ~= nil then
            self._KW_TEXT_BEI_TIP:setString(mapName[data.nFlag + 1] .. "翻" .. data.nMult .. "倍")
            self._KW_PANEL_BEI_TIP:setVisible(true)
        end
    end
end

return CardLayer
