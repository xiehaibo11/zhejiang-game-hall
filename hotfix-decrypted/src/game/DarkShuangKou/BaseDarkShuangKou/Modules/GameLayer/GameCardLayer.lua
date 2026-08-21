local GameCardLayer = CF.gameClass("CardLayer", CF.ViewBase)
local CardArea = CF.gameRequire("Modules.CardLayer.CardArea")
local HandCardArea = CF.gameRequire("Modules.CardLayer.HandCardArea")
local CardLayerConfig = CF.gameRequire("Modules.CardLayer.CardLayerConfig")
local CardModule = CF.gameRequire("Modules.CardLayer.Card")
local HeadCardArea = CF.gameRequire("Modules.CardLayer.HeadCardArea")
local CardLayerDefine = CF.gameRequire("Modules.CardLayer.CardLayerDefine")
local CardLogic = CF.gameRequire("Logic.CardLogic")

local KW_CSB_GAME_CARD_LAYER = CF.gameResourceRootPath .. "DarkShuangKou/GameLayer/CSB/CardLayer.csb"

function GameCardLayer:getCSBPath()
    return KW_CSB_GAME_CARD_LAYER
end

function GameCardLayer:getBindingInfo()
    local bindInfo = {
        ["_KW_PANEL_TOUCH"] = {varName = "_touchPanel"},
        ["_KW_POS_HANDCARD_"] = {varName = "_handCardPos", beginIndex = 1, endIndex = 4}, -- 手牌区
        ["_KW_POS_OUTCARD_"] = {varName = "_outCardPos", beginIndex = 1, endIndex = 4}, -- 出牌区
        ["_KW_POS_HEADCARD_"] = {varName = "_headCardPos", beginIndex = 1, endIndex = 4}, -- 头像边显示区
        ["_KW_POS_ANI_CARD_PILE"] = {varName = "_aniCardPliePanel"}
    }
    return bindInfo
end

function GameCardLayer:ctor(param)
    GameCardLayer.super.ctor(self, param)

    self:initData()
    self:initTouchPanel()
end

function GameCardLayer:initData()
    self._tHandCardArea = {}
    self._tOutCardArea = {}
    self._tHeadCardArea = {}
end

function GameCardLayer:initTouchPanel()
    self._touchPanel:setTouchEnabled(true)
    self._touchPanel:setSwallowTouches(false)
    self._touchPanel:addTouchEventListener(handler(self, self.onTouchEventTouchLayer))
end

function GameCardLayer:getProxyEvents()
    local eventTable = GameCardLayer.super.getProxyEvents(self) or {}
    return eventTable
end

function GameCardLayer:getAdaptationConfig()
    return {
        {node = self._outCardPos1, bRight = false, bHalf = false},
        {node = self._handCardPos1, bRight = false, bHalf = false},
        {node = self._headCardPos1, bRight = false, bHalf = false},
        {node = self._outCardPos3, bRight = true, bHalf = false},
        {node = self._handCardPos3, bRight = true, bHalf = false},
        {node = self._headCardPos3, bRight = true, bHalf = false}
    }
end

--牌层点击事件
function GameCardLayer:onTouchEventTouchLayer(send, eventType)
    if eventType ~= ccui.TouchEventType.began then
        return
    end
    --重置牌层操作状态
    self:resetHandCards()

    if CF.game and CF.game:getModule("GameLayer") then
        CF.game:getModule("GameLayer"):onTouchCardLayerBg()
    end
end

----------------------------------------
--重置牌层操作状态(收回)
----------------------------------------
function GameCardLayer:resetHandCards(localSeat)
    localSeat = localSeat or CardLayerConfig.LocalSeat.Bottom
    if localSeat ~= CardLayerConfig.LocalSeat.Bottom then
        --暂时只处理自己手牌，只有自己手牌可以触摸
        return
    end
    if self._tHandCardArea[localSeat] then
        self._tHandCardArea[localSeat]:resetCards()
    end
end

function GameCardLayer:getHandCards(localSeat)
    if not self._tHandCardArea[localSeat] then
        return {}
    end

    return self._tHandCardArea[localSeat]:getCardIDs()
end

----------------------------------------
--清除手牌数据
----------------------------------------
function GameCardLayer:clearHandCard(localSeat)
    if not self._tHandCardArea[localSeat] then
        return
    end
    self._tHandCardArea[localSeat]:clearCards()
end

----------------------------------------
--设置自己选中牌数据
----------------------------------------
function GameCardLayer:setSelfSelectCards(cardIDs)
    self:setSelectCards(CardLayerConfig.LocalSeat.Bottom, cardIDs)
end

----------------------------------------
--设置选中牌数据
----------------------------------------
function GameCardLayer:setSelectCards(localSeat, cardIDs)
    --只有自己的手牌才能选中
    if localSeat ~= CardLayerConfig.LocalSeat.Bottom then
        return
    end
    if not self._tHandCardArea[localSeat] then
        self:createHandCardArea(localSeat)
    end
    self._tHandCardArea[localSeat]:setSelectCards(cardIDs)
end

----------------------------------------
--获取选中牌数据
----------------------------------------
function GameCardLayer:getSelectCardIDs(localSeat)
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
function GameCardLayer:newOutCardArea(localSeat)
    if not self._tOutCardArea[localSeat] then
        self:createOutCardArea(localSeat)
    end
end

function GameCardLayer:clearAllOutCards()
    for localSeat = 1, 4 do
        self:newOutCardArea(localSeat)
        self._tOutCardArea[localSeat]:clearCards()
        self._tOutCardArea[localSeat]:clearPlayCardTypeAction()
    end
end

function GameCardLayer:clearOutCards(localSeat)
    self._tOutCardArea[localSeat]:clearCards()
end

function GameCardLayer:setOutCards(localSeat, cardIDs, openCards, invalidCards, cardType, isShowCardType, bPlayAni)
    isShowCardType = isShowCardType == nil and true or isShowCardType
    self._tOutCardArea[localSeat]:setShowCards(cardIDs, openCards, invalidCards, nil, CardModule.SIZETYPE.OUT)
    if cardType and isShowCardType and cardType ~= 0 then
        self._tOutCardArea[localSeat]:playCardTypeAction(cardType, bPlayAni)
    end
end

function GameCardLayer:runScaleAni(localSeat)
    self._tOutCardArea[localSeat]:runAction(cc.Sequence:create(cc.ScaleTo:create(2 / 30, 0.88), cc.ScaleTo:create(2 / 30, 1.0)))
end

function GameCardLayer:getOutCards(localSeat)
    if not self._tOutCardArea[localSeat] then
        return {}
    end
    return self._tOutCardArea[localSeat]:getCardIDs()
end

function GameCardLayer:playOutCardsBeforeAttackEffect(msg)
    local attackFromList = msg.localAttackFromList
    if #attackFromList == 0 then
        if msg.callback then
            msg.callback()
        end
        return
    end
    local aniCompleteCnt = 0
    local callback = function()
        aniCompleteCnt = aniCompleteCnt + 1
        if aniCompleteCnt == #attackFromList then
            if msg.callback then
                msg.callback()
            end
        end
    end
    for i = 1, #attackFromList do
        local localSeat = attackFromList[i]
        if self._tOutCardArea[localSeat] then
            self._tOutCardArea[localSeat]:playOutCardsBeforeAttackEffect(msg.cardTypeList[attackFromList[i]], callback)
        end
    end
end
----------------------------------------
--设置头像边的数据
----------------------------------------
function GameCardLayer:setHeadCards(localSeat, cardIDs, openCardIDs)
    if localSeat == -1 then
        return
    end
    if not self._tHeadCardArea[localSeat] then
        self:createHeadCardArea(localSeat)
    end
    self._tHeadCardArea[localSeat]:setShowCards(cardIDs, openCardIDs)
end

----------------------------------------
--清除打出牌数据
----------------------------------------
function GameCardLayer:clearOutCard(localSeat)
    if not self._tOutCardArea[localSeat] then
        return
    end
    self._tOutCardArea[localSeat]:clearCards()
    self._tOutCardArea[localSeat]:clearPlayCardTypeAction()
end

function GameCardLayer:clearOutCardType(localSeat)
    self._tOutCardArea[localSeat]:clearPlayCardTypeAction()
end

----------------------------------------
--清除所有牌
----------------------------------------
function GameCardLayer:clearAllCards()
    for _, cardArea in pairs(self._tHandCardArea) do
        cardArea:clearCards()
    end
    for _, cardArea in pairs(self._tOutCardArea) do
        cardArea:clearCards()
    end
    for _, cardArea in pairs(self._tHeadCardArea) do
        cardArea:clearCards()
    end
    self:clearAllOutCards()
end

----------------------------------------
--设置牌区的通用配置
----------------------------------------
function GameCardLayer:setCardAreaNormalConf(cardArea, conf)
    cardArea:setLayoutType(conf.layoutType)
    cardArea:setLineCardCount(conf.lineCardCount)
    cardArea:setStartPosition(conf.startPosX, conf.startPosY)
    cardArea:setCardDistance(conf.cardDistanceX, conf.cardDistanceY)
    cardArea:setCarAddDistance(conf.cardAddDirectionX, conf.cardAddDirectionY)
end

----------------------------------------
--创建玩家手牌
----------------------------------------
function GameCardLayer:createHandCardArea(localSeat)
    local cardArea
    if localSeat == CardLayerConfig.LocalSeat.Bottom then
        cardArea = HandCardArea.new()
    else
        cardArea = CardArea.new()
    end
    local handCardConf = CardLayerConfig.HandCardConf[localSeat]
    if localSeat == CardLayerConfig.LocalSeat.Bottom then
        self:setCardAreaNormalConf(cardArea, handCardConf)
        cardArea:setAutoPositionBool(false)
        cardArea:setMaxCarDistance(handCardConf.maxCardDistanceX)
        cardArea:setScale(CardLayerConfig.HandCardScale[localSeat])
    else
        self:setCardAreaNormalConf(cardArea, CardLayerConfig.HeadCardConf[localSeat])
        cardArea:setAutoPositionBool(false)
        cardArea:setMaxCarDistance(handCardConf.maxCardDistanceX)
    end
    self["_handCardPos" .. localSeat]:addChild(cardArea)
    self._tHandCardArea[localSeat] = cardArea
    if localSeat == CardLayerConfig.LocalSeat.Bottom then
        self["_handCardPos" .. localSeat]:getParent():setLocalZOrder(99)
    end
end

----------------------------------------
--创建玩家打出的牌
----------------------------------------
function GameCardLayer:createOutCardArea(localSeat)
    local cardArea = CardArea.new()
    self:setCardAreaNormalConf(cardArea, CardLayerConfig.OutCardConf[localSeat])
    self["_outCardPos" .. localSeat]:addChild(cardArea)
    self._tOutCardArea[localSeat] = cardArea
end

----------------------------------------
--创建玩家头像边的牌
----------------------------------------
function GameCardLayer:createHeadCardArea(localSeat)
    local headArea = HeadCardArea.new()
    self["_headCardPos" .. localSeat]:addChild(headArea)
    self._tHeadCardArea[localSeat] = headArea
end

function GameCardLayer:showLeftAndRightHandCardArea(bShow)
    self._handCardPos1:setVisible(bShow)
    self._handCardPos3:setVisible(bShow)
end

-- 牌堆向玩家飞牌
function GameCardLayer:takeCardsByAni(cards, completeCallback, dataCallback)
    local completeAniCnt = 0
    local cardStartScale = 0.29
    local aniDelayTime = 4 / 30 -- 每轮飞牌动画的时间间隔
    local aniMoveTime = 8 / 30 -- 飞牌过程的时间
    local aniCnt = 0 -- 第几个动画
    local maxCardCnt = 0 -- 最大牌张数，相当于第几轮发牌
    local completeCallbackInner = function(seat)
        completeAniCnt = completeAniCnt + 1
        if completeAniCnt == 4 then
            self._aniCardPliePanel:removeAllChildren()
        end
        if completeCallback then
            completeCallback(seat)
        end
    end
    for seat = 0, #cards do
        maxCardCnt = math.max(#cards[seat], maxCardCnt)
        if #cards[seat] == 0 then
            if completeCallbackInner then
                completeCallbackInner(seat)
            end
        end
    end
    local playSendCardAni = function()
        CF.soundManager:playSoundSendCard()
    end
    for i = 1, maxCardCnt do
        for seat = 0, #cards do
            local localSeat = CF.roomData:seatToLocal(seat)
            if cards[seat][i] then
                if aniCnt <= 4 then
                    local card1 = cc.Sprite:create()
                    card1:setScale(cardStartScale)
                    card1:setName("KW_PIPLE_CARD_TEMP")
                    self._aniCardPliePanel:addChild(card1)
                    card1:setSpriteFrame(CardLayerDefine.KW_UI_CARD_BACK_NAME[CardModule.SIZETYPE.NORMAL])
                    card1:setPosition(cc.p(0 + aniCnt * 2, 0))
                    card1:setLocalZOrder(100 - aniCnt)
                    card1:getParent():getParent():setLocalZOrder(100)
                end

                if localSeat == CF.roomData:getSelfLocalSeat() then
                    local cardIndex = 1
                    local handCardArea = self._tHandCardArea[localSeat]
                    local card2 = cc.Sprite:create()
                    card2:setScale(cardStartScale)
                    self._aniCardPliePanel:addChild(card2)
                    card2:setSpriteFrame(CardLayerDefine.KW_UI_CARD_BACK_NAME[CardModule.SIZETYPE.NORMAL])
                    card2:setPosition(cc.p(0, 0))
                    -- card2:setLocalZOrder(100 - aniCnt)
                    card2:getParent():getParent():setLocalZOrder(100)
                    card2:setVisible(false)

                    local pos = handCardArea:getCardPositionByIndex(cardIndex)
                    local localPos = self._aniCardPliePanel:convertToNodeSpace(pos)
                    localPos.x = localPos.x + i * 30
                    aniCnt = aniCnt + 1
                    local allAction =
                        cc.Sequence:create(
                        cc.DelayTime:create(aniDelayTime * (i - 1)),
                        cc.Show:create(),
                        cc.Spawn:create(cc.MoveTo:create(aniMoveTime, localPos), cc.EaseQuarticActionIn:create(cc.ScaleTo:create(aniMoveTime, 1.0)), cc.CallFunc:create(playSendCardAni)),
                        cc.CallFunc:create(
                            function()
                                card2:removeFromParent()
                                if dataCallback then
                                    dataCallback(seat, cards[seat][i])
                                end
                                if cards[seat][i + 1] == nil then
                                    if completeCallbackInner then
                                        completeCallbackInner(seat)
                                    end
                                end
                            end
                        )
                    )
                    card2:runAction(allAction)
                else
                    local headCardArea = self._tHeadCardArea[localSeat]
                    local node = headCardArea:getFlyCardNode()

                    local card2 = cc.Sprite:create()
                    card2:setScale(cardStartScale)
                    card2:setName("KW_FLY_CARD_TEMP")
                    self._aniCardPliePanel:addChild(card2)
                    if localSeat == CardLayerConfig.LocalSeat.Top then
                        card2:setSpriteFrame("darkdoublekou_send_ani_2.png")
                    elseif localSeat == CardLayerConfig.LocalSeat.Left or localSeat == CardLayerConfig.LocalSeat.Right then
                        card2:setSpriteFrame("darkdoublekou_send_ani_1.png")
                    end
                    card2:setPosition(cc.p(0, 0))
                    -- card2:setLocalZOrder(100)
                    card2:getParent():getParent():setLocalZOrder(100)
                    card2:setVisible(false)

                    local pos = node:getParent():convertToWorldSpace(cc.p(node:getPositionX(), node:getPositionY()))
                    local localPos = self._aniCardPliePanel:convertToNodeSpace(pos)
                    aniCnt = aniCnt + 1
                    local allAction =
                        cc.Sequence:create(
                        cc.DelayTime:create(aniDelayTime * (i - 1)),
                        cc.CallFunc:create(
                            function()
                                CF.soundManager:playSoundSendCard()
                            end
                        ),
                        cc.Show:create(),
                        cc.MoveTo:create(aniMoveTime, localPos),
                        cc.CallFunc:create(
                            function()
                                card2:removeFromParent()
                                if dataCallback then
                                    dataCallback(seat, cards[seat][i])
                                end
                                if cards[seat][i + 1] == nil then
                                    if completeCallbackInner then
                                        completeCallbackInner(seat)
                                    end
                                end
                            end
                        )
                    )
                    card2:runAction(allAction)
                end
            end
        end
    end
end

-- 收牌
function GameCardLayer:collectCardsAni(callback)
    local aniDelayTime = 1.5 / 30 -- 每轮飞牌动画的时间间隔
    local aniMoveTime = 1.5 / 30 -- 飞牌过程的时间
    local pileScaleTime1 = 3 / 30 -- 1.0缩放时间
    local pileScaleTime2 = 3 / 30 -- 缩放到最小时间
    local pileScaleTime = 3 / 30
    local pileStayTime = 7 / 30 -- 收牌完成，牌堆停留时间

    local function completeCallback()
        for localSeat = 1, 4 do
            self:clearOutCard(localSeat)
        end
        self._aniCardPliePanel:runAction(
            cc.Sequence:create(
                cc.DelayTime:create(0.5),
                cc.CallFunc:create(
                    function()
                        if callback then
                            callback()
                        end
                    end
                )
            )
        )
    end

    local cardsNodes = {}
    local maxCardCnt = 0
    for seat = 0, 3 do
        local localSeat = CF.roomData:seatToLocal(seat)
        cardsNodes[localSeat] = self._tOutCardArea[localSeat]:getCards()
        maxCardCnt = math.max(#cardsNodes[localSeat], maxCardCnt)
        self._tOutCardArea[localSeat]:clearPlayCardTypeAction()
    end

    if maxCardCnt == 0 then
        if callback then
            callback()
        end
        return
    end
    local card1 = cc.Sprite:create()
    card1:setScale(0.29)
    self._aniCardPliePanel:addChild(card1)
    card1:setSpriteFrame(CardLayerDefine.KW_UI_CARD_BACK_NAME[CardModule.SIZETYPE.OUT])
    card1:setPosition(cc.p(0, 0))
    card1:setName("collectCards")

    local playSendCardAni = function()
        CF.soundManager:playSoundSendCard()
    end
    local aniCnt = 0
    local completeAniCnt = 0
    for i = 1, maxCardCnt do
        for localSeat = 1, 4 do
            local cardNode = cardsNodes[localSeat][i]
            if localSeat == CardLayerConfig.LocalSeat.Right then -- 右侧的左边第一张开始收
                cardNode = cardsNodes[localSeat][#cardsNodes[localSeat] - i + 1]
            end
            if cardNode then
                local pos = self._aniCardPliePanel:getParent():convertToWorldSpace(cc.p(self._aniCardPliePanel:getPositionX(), self._aniCardPliePanel:getPositionY()))
                local localPos = cardNode:getParent():convertToNodeSpace(pos)
                aniCnt = aniCnt + 1
                local allAction =
                    cc.Sequence:create(
                    cc.DelayTime:create(aniDelayTime * (i - 1)),
                    cc.Spawn:create(cc.MoveTo:create(aniMoveTime, localPos), cc.CallFunc:create(playSendCardAni)),
                    cc.CallFunc:create(
                        function()
                            completeAniCnt = completeAniCnt + 1
                            -- if dataCallback then
                            --     dataCallback(seat, cards[localSeat][i])
                            -- end
                            if completeAniCnt == aniCnt then
                                completeCallback()
                            end
                        end
                    ),
                    cc.Hide:create()
                )
                cardNode:runAction(allAction)
            end
        end
    end

    local totalAniTime = aniDelayTime * (maxCardCnt - 1) + aniMoveTime
    totalAniTime = totalAniTime - pileScaleTime1 - pileScaleTime2
    local repeatCnt = math.floor(totalAniTime / (pileScaleTime + pileScaleTime)) -- 可以播放几次1.15-0.85
    if repeatCnt > 5 then
        repeatCnt = 3
    end
    if repeatCnt < 0 then
        repeatCnt = 0
    end
    card1:runAction(
        cc.Sequence:create(
            cc.ScaleTo:create(pileScaleTime1, 1.0),
            cc.Repeat:create(cc.Sequence:create(cc.ScaleTo:create(pileScaleTime, 1.15), cc.ScaleTo:create(pileScaleTime, 0.85)), repeatCnt),
            cc.ScaleTo:create(pileScaleTime2, CardLayerConfig.Card1ToCard3Scale / CardLayerConfig.Card1ToCard2Scale),
            cc.DelayTime:create(pileStayTime),
            cc.RemoveSelf:create()
        )
    )
end

----------------------------------------
--设置手牌数据
--bShowAni表示是否显示动画效果（发牌）
----------------------------------------
function GameCardLayer:setHandCards(localSeat, cardIDs, openCardIds)
    if not self._tHandCardArea[localSeat] then
        self:createHandCardArea(localSeat)
    end
    if not self._tHeadCardArea[localSeat] then
        self:createHeadCardArea(localSeat)
    end

    if localSeat == CardLayerConfig.LocalSeat.Bottom then
        self._tHandCardArea[localSeat]:setShowCards(cardIDs, openCardIds)
        local specialCardIDs = self:getSpecialCardIDs(cardIDs)
        local tNormalBomb = CardLogic.switchCardIDsToPowerKey(cardIDs)
        self:setHandCardAreaSpecialColorCardIDs(localSeat, specialCardIDs, tNormalBomb)
    else
        self._tHandCardArea[localSeat]:setShowCards(cardIDs, openCardIds, nil, nil, CardModule.SIZETYPE.HEAD)
    end
end

function GameCardLayer:getSpecialCardIDs(cardIDs)
    local tNormalBomb = CardLogic.switchCardIDsToPowerKey(cardIDs)
    local specialCardIDs = {}
    for _, v1 in pairs(tNormalBomb) do
        if #v1 >= 4 then
            for _, v2 in pairs(v1) do
                table.insert(specialCardIDs, v2)
            end
        end
    end
    return specialCardIDs
end

function GameCardLayer:setHandCardAreaSpecialColorCardIDs(localSeat, cardIDs, normalBomb)
    if not self._tHandCardArea[localSeat] then
        return
    end
    self._tHandCardArea[localSeat]:setSpecialColorCardIDs(cardIDs, normalBomb)
end

function GameCardLayer:setCardDisableCard(localSeat, cardIDs)
    if not self._tHandCardArea[localSeat] then
        return
    end
    self._tHandCardArea[localSeat]:setCardDisableCard(cardIDs)
end

function GameCardLayer:clearDisableCard(localSeat)
    if not self._tHandCardArea[localSeat] then
        return
    end
    self._tHandCardArea[localSeat]:clearDisableCard()
end

return GameCardLayer
 \  