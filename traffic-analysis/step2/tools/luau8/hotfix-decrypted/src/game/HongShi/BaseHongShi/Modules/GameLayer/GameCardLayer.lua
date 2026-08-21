local AnimationManager = CF.gameRequire("Manager.AnimationManager")
local CardEnum = CF.gameRequire("Define.CardEnum")
local CardLogic = CF.gameRequire("Logic.CardLogic")
local CardLayer = CF.gameRequire("Modules.CardLayer.CardLayer")
local CardLayerConfig = CF.gameRequire("Modules.CardLayer.CardLayerConfig")
local CardModule = CF.gameRequire("Modules.CardLayer.Card")
local GameCardLayer = class("GameCardLayer", CardLayer)

local KW_CSB_GAME_CARD_LAYER = "res/cocosStudio/HongShi/GameLayer/CSB/CardLayer.csb"

function GameCardLayer:getCSBPath()
    return KW_CSB_GAME_CARD_LAYER
end

function GameCardLayer:getBindingInfo()
    local bindInfo = GameCardLayer.super.getBindingInfo(self)
    bindInfo["_KW_POS_ANI_CARD_PILE"] = {varName = "_aniCardPliePanel"}
    bindInfo["_KW_POS_OPEN_CARD"] = {varName = "_openCardPos"}
    bindInfo["_KW_POS_KW_FLY_CARD_"] = {varName = "_flyCard", beginIndex = 1, endIndex = 2}
    bindInfo["_KW_PANEL_OPEN_CARD_"] = {varName = "_openCardPanel_", beginIndex = 1, endIndex = 4}
    bindInfo["_KW_POS_OPEN_CARD_1_"] = {varName = "_openCardPos_1_", beginIndex = 1, endIndex = 3}
    bindInfo["_KW_POS_OPEN_CARD_2_"] = {varName = "_openCardPos_2_", beginIndex = 1, endIndex = 3}
    bindInfo["_KW_POS_OPEN_CARD_3_"] = {varName = "_openCardPos_3_", beginIndex = 1, endIndex = 3}
    bindInfo["_KW_POS_OPEN_CARD_4_"] = {varName = "_openCardPos_4_", beginIndex = 1, endIndex = 3}
    bindInfo["_KW_POS_ACTION_"] = {varName = "_actionPos", beginIndex = 1, endIndex = 4}
    bindInfo["_KW_POS_ACTION_BOMB"] = {varName = "_actionBombPos"}
    return bindInfo
end

function GameCardLayer:ctor(param)
    GameCardLayer.super.ctor(self, param)

    self:AdaptationIphoneX()
    self:initEvents()
end

function GameCardLayer:initEvents()
    self._gameManagerProxy = cc.EventProxy.new(CF.roomData, self):addEventListener(CF.roomData.EVENT_CARD_HOLDER_CHANGED, handler(self, self.onCardHolderChanged))
    self._settingDataProxy = cc.EventProxy.new(CF.settingData, self):addEventListener(CF.settingData.EVENT_CLEAR_MODEL, handler(self, self.onEventClearModel))
    self._settingData2Proxy = cc.EventProxy.new(CF.settingData, self):addEventListener(CF.settingData.EVENT_HONGSHI_BACK_STYLE_CHANGED, handler(self, self.onEventCardStyle))
end

function GameCardLayer:onExit()
    GameCardLayer.super.onExit(self)
    if self._gameManagerProxy then
        self._gameManagerProxy:removeAllEventListeners()
        self._gameManagerProxy = nil
    end
    if self._settingDataProxy then
        self._settingDataProxy:removeAllEventListeners()
        self._settingDataProxy = nil
    end
end

function GameCardLayer:AdaptationIphoneX()
    local nodeArr = {
        {node = self._openCardPanel_1, bRight = false, bHalf = false},
        {node = self._outCardPos1, bRight = false, bHalf = false},
        {node = self._handCardPos1, bRight = false, bHalf = false},
        {node = self._actionPos1, bRight = false, bHalf = false},
        {node = self._openCardPanel_3, bRight = true, bHalf = false},
        {node = self._outCardPos3, bRight = true, bHalf = false},
        {node = self._handCardPos3, bRight = true, bHalf = false},
        {node = self._actionPos3, bRight = true, bHalf = false}
    }
    CF.UITool.AdaptationIphoneX(nodeArr)
end

function GameCardLayer:onTouchEventTouchLayer(send, eventType)
    GameCardLayer.super.onTouchEventTouchLayer(self, send, eventType)

    if CF.game:getModule("GameLayer") then
        CF.game:getModule("GameLayer"):onTouchCardLayerBg()
    end
end

function GameCardLayer:showLeftAndRightHandCardArea(bShow)
    self._handCardPos1:setVisible(bShow)
    self._handCardPos3:setVisible(bShow)
end

function GameCardLayer:showOpenCardAfterSwapSeat(bigLocalSeat, smallLocalSeat, openCardID, callBack)
    if bigLocalSeat ~= smallLocalSeat then
        local smallOpenCard = self["_openCardPos_" .. smallLocalSeat .. "_3"]
        if smallOpenCard then
            local card = CardModule:new()
            card:setCardID(openCardID)
            card:setScale(0.65)
            smallOpenCard:addChild(card)
            local showNode =
                cc.CallFunc:create(
                function()
                    smallOpenCard:setOpacity(255)
                    smallOpenCard:setScale(0.75, 0.75)
                end
            )
            smallOpenCard:runAction(cc.Sequence:create(showNode, cc.DelayTime:create(1), cc.FadeOut:create(0.2)))
        end

        local bigOpenCard = self["_openCardPos_" .. bigLocalSeat .. "_3"]
        if bigOpenCard then
            local card = CardModule:new()
            card:setCardID(openCardID)
            card:setScale(0.65)
            bigOpenCard:addChild(card)
            local showNode =
                cc.CallFunc:create(
                function()
                    bigOpenCard:setOpacity(255)
                    bigOpenCard:setScale(1, 1)
                end
            )
            local clearOpenCard =
                cc.CallFunc:create(
                function()
                    self:clearOpenCards(bigLocalSeat)
                    self:clearOpenCards(smallLocalSeat)
                end
            )
            local action = cc.Sequence:create(showNode, cc.DelayTime:create(1), cc.FadeOut:create(0.2), clearOpenCard)
            if callBack then
                action = cc.Sequence:create(showNode, cc.DelayTime:create(1), cc.FadeOut:create(0.2), cc.CallFunc:create(callBack), clearOpenCard)
            end
            bigOpenCard:runAction(action)
        end
    end
end

function GameCardLayer:clearOpenCards(localSeat)
    for i = 1, 3 do
        local openCardPanel = self["_openCardPos_" .. localSeat .. "_" .. i]
        if openCardPanel then
            openCardPanel:removeAllChildren()
        end
    end
end

function GameCardLayer:showOpenCardAni(openCardID, callBack)
    if self._flyCard1 == nil then
        return
    end

    local openCard = self._flyCard1
    local card = CardModule:new()
    card:setCardID(openCardID)
    card:setScale(0.65)
    openCard:setVisible(false)
    openCard:addChild(card)

    local delayTimeBeforeShow = cc.DelayTime:create(0.7)
    local showCard =
        cc.CallFunc:create(
        function()
            openCard:setOpacity(0)
            openCard:setVisible(true)
        end
    )
    local fadeInTime = 0.3
    local fadeIn = cc.FadeIn:create(fadeInTime)
    local scaleToBig = cc.ScaleBy:create(fadeInTime, 1.3, 1.3)
    local spawnScaleAndFadeIn = cc.Spawn:create(fadeIn, scaleToBig)
    local scaleToNormal = cc.ScaleBy:create(0.1, 0.75, 0.75)
    local delayTimeAfterShow = cc.DelayTime:create(0.4)
    local allAction = cc.Sequence:create(delayTimeBeforeShow, showCard, spawnScaleAndFadeIn, scaleToNormal, delayTimeAfterShow)
    if callBack then
        local doCallBack = cc.CallFunc:create(callBack)
        allAction = cc.Sequence:create(delayTimeBeforeShow, showCard, spawnScaleAndFadeIn, scaleToNormal, delayTimeAfterShow, doCallBack)
    end
    openCard:runAction(allAction)
end

function GameCardLayer:showSepCardsAni(firstLocalSeat, secondLocalSeat, openCardID, callBack)
    local openCardStartPos = self._openCardPos
    if openCardStartPos == nil then
        return
    end
    local firstIndex = 3
    local secondIndex = 3
    if firstLocalSeat == secondLocalSeat then
        firstIndex = 1
        secondIndex = 2
    end

    local firstTarget = self["_openCardPos_" .. firstLocalSeat .. "_" .. firstIndex]
    local firstTargetPosToNode = cc.p(0, 0)
    if firstTarget then
        local firstTargetPos = firstTarget:convertToWorldSpace(cc.p(0, 0))
        firstTargetPosToNode = openCardStartPos:convertToNodeSpace(firstTargetPos)
    end

    local secondTarget = self["_openCardPos_" .. secondLocalSeat .. "_" .. secondIndex]
    local secondTargetPosToNode = cc.p(0, 0)
    if secondTarget then
        local secondTargetPos = secondTarget:convertToWorldSpace(cc.p(0, 0))
        secondTargetPosToNode = openCardStartPos:convertToNodeSpace(secondTargetPos)
    end

    local function secondOpenCardAni()
        local secondFlyNode = self._flyCard2
        if secondFlyNode then
            local showCard =
                cc.CallFunc:create(
                function()
                    secondFlyNode:setOpacity(0)
                    secondFlyNode:setVisible(true)
                    secondFlyNode:setPosition(cc.p(0, 0))
                end
            )
            local setPosToTarget =
                cc.CallFunc:create(
                function()
                    secondFlyNode:setPosition(secondTargetPosToNode)
                    secondFlyNode:setScaleX(openCardStartPos:getScaleX() * 0.75)
                    secondFlyNode:setScaleY(openCardStartPos:getScaleY() * 0.75)
                end
            )
            local fadeInTime = 0.3
            local fadeIn = cc.FadeIn:create(fadeInTime)
            local scaleToBig = cc.ScaleBy:create(fadeInTime, 1.3, 1.3)
            local spawnScaleAndFadeIn = cc.Spawn:create(fadeIn, scaleToBig)
            local scaleToNormal = cc.ScaleBy:create(0.1, 0.75, 0.75)
            local delayTime = cc.DelayTime:create(0.8)
            local fadeOut = cc.FadeOut:create(0.2)
            local destroyCard =
                cc.CallFunc:create(
                function()
                    secondFlyNode:setVisible(false)
                end
            )
            local allAction = cc.Sequence:create(showCard, setPosToTarget, spawnScaleAndFadeIn, scaleToNormal, delayTime, fadeOut, destroyCard)
            if callBack then
                local doCallBack = cc.CallFunc:create(callBack)
                allAction = cc.Sequence:create(showCard, setPosToTarget, spawnScaleAndFadeIn, scaleToNormal, delayTime, fadeOut, doCallBack, destroyCard)
            end
            secondFlyNode:runAction(allAction)
        end
    end

    local function firstOpenCardAni()
        local rotateDirect = 1
        if firstTargetPosToNode.x < 0 then
            rotateDirect = -1
        end
        --开牌飞出动画
        local firstFlyNode = self._flyCard1
        if firstFlyNode then
            local showCard =
                cc.CallFunc:create(
                function()
                    firstFlyNode:setVisible(true)
                    firstFlyNode:setPosition(cc.p(0, 0))
                    firstFlyNode:setOpacity(255)
                end
            )
            local rotateCard = cc.RotateBy:create(0.4, rotateDirect * 360)
            local moveCard = cc.MoveTo:create(0.4, firstTargetPosToNode)
            local moveAction = cc.EaseIn:create(cc.Spawn:create(rotateCard, moveCard), 0.3)
            local fadeOut = cc.FadeOut:create(0.2)
            local destroyCard =
                cc.CallFunc:create(
                function()
                    firstFlyNode:setVisible(false)
                end
            )
            local showSecondOpenCard =
                cc.CallFunc:create(
                function()
                    secondOpenCardAni()
                end
            )
            local delatTimeAfterShowSecond = cc.DelayTime:create(1.2)
            local allAction = cc.Sequence:create(showCard, moveAction, showSecondOpenCard, delatTimeAfterShowSecond, fadeOut, destroyCard)
            firstFlyNode:runAction(allAction)
        end
    end

    local card1 = CardModule:new()
    card1:setCardID(openCardID)
    card1:setScale(0.65)
    self._flyCard1:addChild(card1)

    local card2 = CardModule:new()
    card2:setCardID(openCardID)
    card2:setScale(0.65)
    self._flyCard2:addChild(card2)

    firstOpenCardAni()
end

function GameCardLayer:playBombAction(localSeat, xianCount)
    local actionPanel = self._actionBombPos
    if not actionPanel then
        return
    end
    AnimationManager.playSmallBombJsonArmature(actionPanel, xianCount)
end

function GameCardLayer:playBombLineAction(localSeat, xianCount)
    local actionPanel = self["_actionPos" .. localSeat]
    if not actionPanel then
        return
    end
    AnimationManager.playBombLineJsonArmature(actionPanel, xianCount)
end

function GameCardLayer:playShunAction(localSeat, shunCount)
    local actionPanel = self["_actionPos" .. localSeat]
    if not actionPanel then
        return
    end
    local armature = AnimationManager.getShunJsonArmature(shunCount)
    if armature then
        armature:getAnimation():setMovementEventCallFunc(
            function()
                actionPanel:removeChild(armature)
            end
        )
        actionPanel:addChild(armature)
    end
end

function GameCardLayer:playCardTypeAction(seat, cardType)
    local localSeat = CF.roomData:seatToLocal(seat)
    if cardType > CardEnum.CARDS_TYPE.CT_3_JUNKO_0_EXCESS_0_CONTINUOUS then
        local boomXian = CardLogic.GetBombLineNumberByType(cardType)
        self:playBombAction(localSeat, boomXian)
    elseif cardType >= CardEnum.CARDS_TYPE.CT_1_JUNKO_0_EXCESS_3_CONTINUOUS and cardType <= CardEnum.CARDS_TYPE.CT_1_JUNKO_0_EXCESS_14_CONTINUOUS then
        self:playShunAction(localSeat, 1)
    end
end

function GameCardLayer:showNoBigAni()
    local playerTipPanel = self._handCardPos2
    if playerTipPanel then
        local noBigSprite = cc.Sprite:create()
        if noBigSprite then
            noBigSprite:setSpriteFrame("doublekou_text_tips_1.png")
            playerTipPanel:addChild(noBigSprite)
            local delayAction = cc.DelayTime:create(0.2 + 0.2)
            local fadeOutAction = cc.FadeOut:create(0.4)
            local removeAction =
                cc.CallFunc:create(
                function()
                    noBigSprite:removeFromParent()
                end
            )
            noBigSprite:runAction(cc.Sequence:create(delayAction, fadeOutAction, removeAction))
        end
    end
end

function GameCardLayer:showNoBiggerSprite()
    local playerTipPanel = self._handCardPos2
    if playerTipPanel then
        local noBiggerSprite = cc.Sprite:create()
        if noBiggerSprite then
            noBiggerSprite:setSpriteFrame("doublekou_text_tips_1.png")
            noBiggerSprite:setName("NoBiggerSprite")
            noBiggerSprite:setPositionY(-20)
            playerTipPanel:addChild(noBiggerSprite)
        end
    end
end

function GameCardLayer:removeNoBiggerSprite()
    local playerTipPanel = self._handCardPos2
    if playerTipPanel then
        local noBiggerSprite = playerTipPanel:getChildByName("NoBiggerSprite")
        if noBiggerSprite then
            noBiggerSprite:removeFromParent()
        end
    end
end

function GameCardLayer:setHandCards(localSeat, cardIDs, bShowAni)
    if not self._tHandCardArea[localSeat] then
        self:createHandCardArea(localSeat)
    end
    local cardStyle = 0
    if CF.settingData and CF.settingData:getBackStyle() == CF.settingData.tagInfo.BACK_TYPE.index then
        cardStyle = XH.XG_CARD_STYLE
    end
    self._tHandCardArea[localSeat]:setShowCards(cardIDs, bShowAni, nil, nil, cardStyle)

    if localSeat == CardLayerConfig.LocalSeat.Top then
        self:updateTopHandAreaPos()
    end

    local specialCardIDs = self:getSpecialCardIDs(cardIDs)
    self:setHandCardAreaSpecialColorCardIDs(localSeat, specialCardIDs)
end

function GameCardLayer:setOutCards(localSeat, cardIDs, isShowFire)
    if not self._tOutCardArea[localSeat] then
        self:createOutCardArea(localSeat)
    end
    local cardStyle = 0
    if CF.settingData and CF.settingData:getBackStyle() == CF.settingData.tagInfo.BACK_TYPE.index then
        cardStyle = XH.XG_CARD_STYLE
    end
    self._tOutCardArea[localSeat]:setShowCards(cardIDs, nil, nil, isShowFire, cardStyle)
    -- self._tOutCardArea[localSeat]:updateCardsPositionAndOrder()
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

local TOP_HANDAREA_POS_GAP_TO_CENTER = 80
function GameCardLayer:updateTopHandAreaPos()
    if not self._tHandCardArea[CardLayerConfig.LocalSeat.Top] then
        return
    end
    local cardArea = self._tHandCardArea[CardLayerConfig.LocalSeat.Top]
    local cardAreaConf = CardLayerConfig.HandCardConf[CardLayerConfig.LocalSeat.Top]
    local defaultCardGap = cardAreaConf.cardDistanceX
    local maxCardCount = cardAreaConf.lineCardCount
    local totalGap = maxCardCount * defaultCardGap
    local cardCount = cardArea:getCardCount()
    local nowCardGap = cardArea:getCardDistanceX()
    local posX = (totalGap - nowCardGap * cardCount) / 2 - TOP_HANDAREA_POS_GAP_TO_CENTER
    if posX > 0 then
        posX = 0
    end
    cardArea:setPositionX(posX)
end

----------------------------------------
--创建玩家手牌
----------------------------------------
function GameCardLayer:createHandCardArea(localSeat)
    GameCardLayer.super.createHandCardArea(self, localSeat)
    if localSeat == CardLayerConfig.LocalSeat.Bottom then
        self["_handCardPos" .. localSeat]:getParent():setLocalZOrder(99)
    end
end

function GameCardLayer:onCardHolderChanged(event)
    self:updateCardHolder()
end

function GameCardLayer:onEventClearModel(event)
    self:updateCardHolder()
end

function GameCardLayer:updateCardHolder()
    local ypqData = CF.roomData:getSelfCardHolderData() or {}
    local GameBagUILogic = CF.gameRequire("Modules.GameBag.UILogic")
    GameBagUILogic.showCardHolder(self:getChildByName("Layer"), CF.roomData:getSelfLocalSeat(), ypqData.ypq_url, ypqData.ypq)
end

function GameCardLayer:onEventCardStyle()
    local changeStyle = 0
    if CF.settingData and CF.settingData:getBackStyle() == CF.settingData.tagInfo.BACK_TYPE.index then
        changeStyle = XH.XG_CARD_STYLE
    end
    local cardAreas = {
        self._tHandCardArea,
        self._tOutCardArea,
    }
    for _, cardArea in ipairs(cardAreas) do
        for _, v in pairs(cardArea) do
            if v then
                v:setCardStyle(changeStyle)
            end
        end
    end
end

return GameCardLayer
�H