local AnimationManager = CF.gameRequire("Manager.AnimationManager")
local CardEnum = CF.gameRequire("Define.CardEnum")
local CardLogic = CF.gameRequire("Logic.CardLogic")
local CardLayerConfig = CF.gameRequire("Modules.CardLayer.CardLayerConfig")
local CardModule = CF.gameRequire("Modules.CardLayer.Card")
local GameCardLayer = CF.gameClass("GameCardLayer", "game.BaseCardGame.Modules.CardLayer.CardLayer")

local KW_CSB_GAME_CARD_LAYER = "res/cocosStudio/DoubleKou/GameLayer/CSB/CardLayer.csb"

function GameCardLayer:getCSBPath()
    if CF.roomData:isNewUI() then
        return "res/cocosStudio/DoubleKou/GameLayer/CSB/CardLayerNew.csb"
    else
        return KW_CSB_GAME_CARD_LAYER
    end
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
    bindInfo["_KW_SCT_PANEL"] = {varName = "_KW_SCT_PANEL"}
    bindInfo["_KW_PANEL_CHANGESEAT_TIP"] = {varName="_KW_PANEL_CHANGESEAT_TIP"}
    bindInfo["_KW_BG_CHANGESEAT_TIP"] = {varName="_KW_BG_CHANGESEAT_TIP"}
    bindInfo["_KW_IMG_CHANGESEAT_TIP_1"] = {varName="_KW_IMG_CHANGESEAT_TIP_1"}
    bindInfo["_KW_IMG_CHANGESEAT_TIP_3"] = {varName="_KW_IMG_CHANGESEAT_TIP_3"}
    bindInfo["_KW_IMG_CHANGESEAT_TIP_2"] = {varName="_KW_IMG_CHANGESEAT_TIP_2"}
    bindInfo["_KW_TEXT_CHANGESEAT_TIP"] = {varName="_KW_TEXT_CHANGESEAT_TIP"}
    return bindInfo
end

function GameCardLayer:ctor(param)
    GameCardLayer.super.ctor(self, param)
    self:AdaptationIphoneX()
end

function GameCardLayer:getProxyEvents()
    local eventTable = GameCardLayer.super.getProxyEvents(self) or {}
    eventTable[#eventTable+1] = {module = CF.roomData, eventKeyName = "EVENT_CARD_HOLDER_CHANGED", callBack = "onCardHolderChanged"}
    eventTable[#eventTable+1] = {module = CF.settingData, eventKeyName = "EVENT_CLEAR_MODEL", callBack = "onEventClearModel"}
    eventTable[#eventTable+1] = {module = CF.settingData, eventKeyName = "EVENT_DOUBLEKOU_BACK_STYLE_CHANGED", callBack = "onEventCardStyle"}
    eventTable[#eventTable+1] = {module = CF.settingData, eventKeyName = "EVENT_DOUBLEKOU_FACE_STYLE_CHANGED", callBack = "onEventCardFaceStyle"}
    return eventTable
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

    if CF.game and CF.game:getModule("GameLayer") then
        CF.game:getModule("GameLayer"):onTouchCardLayerBg()
    end
end

function GameCardLayer:showLeftAndRightHandCardArea(bShow)
    self._handCardPos1:setVisible(bShow)
    self._handCardPos3:setVisible(bShow)
end

function GameCardLayer:onGameOpenCard(msg)
    if msg.bPlayAni then
        local callBack = function()
            CF.msgManager:sendWaitOpenCard()
        end

        self:showOpenCardAni(msg.cardID, callBack)

        local cardPileAniPos = self._aniCardPliePanel
        if cardPileAniPos then
            cardPileAniPos:removeAllChildren()
            local armature = AnimationManager.getFlyCardMovieArmature()
            if armature then
                armature:registerSpineEventHandler(function(event)
                    if event.type == 'complete' then
                      armature:runAction(cc.Sequence:create(
                        cc.DelayTime:create(0.1),
                        cc.CallFunc:create(function()
                          armature:removeFromParent(true)
                        end)
                        ))
                    end
                end, sp.EventType.ANIMATION_COMPLETE)
                cardPileAniPos:addChild(armature)
            end
        end
    end
end

function GameCardLayer:onGameOpenCardSeat(msg)
    if msg.bPlayAni then
        local localFirstcardSeat = CF.roomData:seatToLocal(msg.firstSeat)
        local localSecondcardSeat = CF.roomData:seatToLocal(msg.secondSeat)
        local callBack = function()
            CF.msgManager:sendWaitTakeCard()
        end
        local openCardID = CF.game:getModule("GameLayer"):getGameData():getOpenCardID()
        self:showSepCardsAni(localFirstcardSeat, localSecondcardSeat, openCardID, callBack)
    else
        if self._flyCard1 then
            self._flyCard1:setVisible(false)
        end
    end
end

function GameCardLayer:showOpenCardAfterSwapSeat(bigLocalSeat, smallLocalSeat, openCardID, callBack)
    if bigLocalSeat ~= smallLocalSeat then
        local smallOpenCard = self["_openCardPos_" .. smallLocalSeat .. "_3"]
        if smallOpenCard then
            local card = CardModule:new()
            card:setCardID(openCardID)
            self:checkSetCardStyle(card)
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
            self:checkSetCardStyle(card)
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
    openCard:removeAllChildren()
    local card = CardModule:new()
    card:setCardID(openCardID)
    self:checkSetCardStyle(card)
    card:setScale(0.65)
    openCard:setScale(0)
    openCard:setVisible(true)
    openCard:setOpacity(255)
    openCard:addChild(card)

    local delayTimeBeforeShow = cc.DelayTime:create(10 / 30)
    local scaleToAni1 = cc.ScaleTo:create(5 / 30, 1.22)
    local scaleToAni2 = cc.ScaleTo:create(4 / 30, 1)
    local showCardEnd = cc.CallFunc:create(
    function()
        local armature = AnimationManager.playSaoGuangAni(0.65)
        if armature and not tolua.isnull(card) then
            card:addChild(armature)
            armature:setPosition(card:getContentSize().width / 2, card:getContentSize().height / 2)
        end
    end
    )
    local delayTimeAfterShow = cc.DelayTime:create(0.4)
    local allAction = cc.Sequence:create(delayTimeBeforeShow, scaleToAni1, scaleToAni2, showCardEnd, delayTimeAfterShow)
    if callBack then
        local doCallBack = cc.CallFunc:create(callBack)
        allAction = cc.Sequence:create(delayTimeBeforeShow, scaleToAni1, scaleToAni2, showCardEnd, delayTimeAfterShow, doCallBack)
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

    local card1 = CardModule:new()
    card1:setCardID(openCardID)
    self:checkSetCardStyle(card1)
    card1:setScale(0.65)
    self._flyCard1:removeAllChildren()
    self._flyCard1:addChild(card1)
    self._flyCard1:setScale(1)

    local card2 = CardModule:new()
    card2:setCardID(openCardID)
    self:checkSetCardStyle(card2)
    card2:setScale(0.4)
    self._flyCard2:setScale(0)
    self._flyCard2:addChild(card2)
    self._flyCard2:setVisible(false)

    local function secondOpenCardAni()
        local secondFlyNode = self._flyCard2
        if secondFlyNode then
            secondFlyNode:setPosition(secondTargetPosToNode)
            secondFlyNode:setVisible(true)
            local tipFadeInAction = cc.ScaleTo:create(8 / 30, 1)
            local allAction = cc.Sequence:create(tipFadeInAction)
            secondFlyNode:runAction(allAction)
        end
    end

    local function firstOpenCardAni()
        local firstFlyNode = self._flyCard1
        local moveCard = cc.MoveTo:create(8 / 30, firstTargetPosToNode)
        local scaleCard = cc.ScaleTo:create(8 / 30, 0.8)
        local showSecondOpenCard =        cc.CallFunc:create(
        function()
            secondOpenCardAni()
            -- 提示显示
            self._KW_PANEL_CHANGESEAT_TIP:setOpacity(0)
            self._KW_PANEL_CHANGESEAT_TIP:setVisible(CF.roomData:isGoldRoom())
            local tipDelayTime = cc.DelayTime:create(20 / 30)
            local tipFadeInAction = cc.FadeIn:create(5 / 30)
            local tipDelayTime2 = cc.DelayTime:create(37 / 30)
            local tipFadeOutAction = cc.FadeOut:create(12 / 30)
            self._KW_IMG_CHANGESEAT_TIP_1:setVisible(firstLocalSeat ~= secondLocalSeat and math.abs(firstLocalSeat - secondLocalSeat) ~= 2)
            self._KW_IMG_CHANGESEAT_TIP_2:setVisible(firstLocalSeat == secondLocalSeat)
            self._KW_IMG_CHANGESEAT_TIP_3:setVisible(firstLocalSeat ~= secondLocalSeat and math.abs(firstLocalSeat - secondLocalSeat) == 2)
            local playerData = CF.roomData:getPlayerDataBySeatId(CF.roomData:localToSeat(firstLocalSeat))
            local otherPlayerData = CF.roomData:getPlayerDataBySeatId(CF.roomData:localToSeat(secondLocalSeat))
            if firstLocalSeat == secondLocalSeat then
                if playerData then
                    self._KW_TEXT_CHANGESEAT_TIP:setString(playerData:getNickName())
                    self._KW_BG_CHANGESEAT_TIP:setContentSize(self._KW_TEXT_CHANGESEAT_TIP:getContentSize().width + self._KW_IMG_CHANGESEAT_TIP_2:getContentSize().width + 100, self._KW_BG_CHANGESEAT_TIP:getContentSize().height)
                end
            else
                if playerData and otherPlayerData then
                    self._KW_TEXT_CHANGESEAT_TIP:setString(playerData:getNickName() .. "和" .. otherPlayerData:getNickName())
                    self._KW_BG_CHANGESEAT_TIP:setContentSize(self._KW_TEXT_CHANGESEAT_TIP:getContentSize().width + self._KW_IMG_CHANGESEAT_TIP_1:getContentSize().width + 100, self._KW_BG_CHANGESEAT_TIP:getContentSize().height)
                end
            end
            self._KW_TEXT_CHANGESEAT_TIP:setPositionX(-(self._KW_BG_CHANGESEAT_TIP:getContentSize().width - 100) / 2)
            for i=1,3 do
                local tipNode = self["_KW_IMG_CHANGESEAT_TIP_" .. i]
                if tipNode then
                    tipNode:setPositionX(-(self._KW_BG_CHANGESEAT_TIP:getContentSize().width - 100) / 2 + self._KW_TEXT_CHANGESEAT_TIP:getContentSize().width)
                end
            end
            local allAction = cc.Sequence:create(tipDelayTime, tipFadeInAction, tipDelayTime2)--, tipFadeOutAction)
            self._KW_PANEL_CHANGESEAT_TIP:runAction(allAction)
        end
        )
        local delayTimeBeforeShow = cc.DelayTime:create(80 / 30)
        local showCardEnd = cc.CallFunc:create(
        function()
            if self._flyCard1 then
                self._flyCard1:setVisible(false)
            end
            if self._flyCard2 then
                self._flyCard2:setVisible(false)
            end
            if self._KW_PANEL_CHANGESEAT_TIP then
                self._KW_PANEL_CHANGESEAT_TIP:setVisible(false)
            end
        end
        )
        local allAction = cc.Sequence:create(moveCard, showSecondOpenCard, delayTimeBeforeShow, showCardEnd)
        firstFlyNode:runAction(allAction)
        firstFlyNode:runAction(scaleCard)
    end
    firstOpenCardAni()
end

function GameCardLayer:playBombAction(localSeat, xianCount)
    local actionPanel = self._actionBombPos
    if not actionPanel then
        return
    end
    if CF.roomData:isShowNewBomb() then
        AnimationManager.playThrowBombSpineAni(actionPanel, xianCount, localSeat)
    else
        AnimationManager.playSmallBombJsonArmature(actionPanel, xianCount)
    end
end

function GameCardLayer:playBombLineAction(localSeat, xianCount)
    local actionPanel = self["_actionPos" .. localSeat]
    if not actionPanel then
        return
    end
    if CF.roomData:isNewUI() then
        AnimationManager.playBombLineSpineAni(actionPanel, xianCount, localSeat)
    else
        AnimationManager.playBombLineJsonArmature(actionPanel, xianCount)
    end
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
    if cardType > CardEnum.CARDS_TYPE.CT_4_JUNKO_0_CONTINUOUS then
        local boomXian = CardLogic.GetBombLineNumberByType(cardType)
        self:playBombAction(localSeat, boomXian)
        self:playBombLineAction(localSeat, boomXian)
    elseif cardType >= CardEnum.CARDS_TYPE.CT_3_JUNKO_3_CONTINUOUS and cardType <= CardEnum.CARDS_TYPE.CT_3_JUNKO_8_CONTINUOUS then
        self:playShunAction(localSeat, 3)
    elseif cardType >= CardEnum.CARDS_TYPE.CT_2_JUNKO_3_CONTINUOUS and cardType <= CardEnum.CARDS_TYPE.CT_2_JUNKO_12_CONTINUOUS then
        self:playShunAction(localSeat, 2)
    elseif cardType >= CardEnum.CARDS_TYPE.CT_1_JUNKO_5_CONTINUOUS and cardType <= CardEnum.CARDS_TYPE.CT_1_JUNKO_12_CONTINUOUS then
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
    if CF.settingData and CF.settingData:getDoubleKouBackStyle() == CF.settingData.tagInfo.BACK_TYPE.index then
        cardStyle = XH.XG_CARD_STYLE
    end
    self._tHandCardArea[localSeat]:setShowCards(cardIDs, bShowAni, nil, nil, cardStyle)

    if localSeat == CardLayerConfig.LocalSeat.Top then
        self:updateTopHandAreaPos()
    end

    local specialCardIDs = self:getSpecialCardIDs(cardIDs)
    local tNormalBomb = CardLogic.switchCardIDsToPowerKey(cardIDs)
    self:setHandCardAreaSpecialColorCardIDs(localSeat, specialCardIDs, tNormalBomb)
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

function GameCardLayer:onGameShowSpecialBomb(data)
    local actionPanel = self["_actionPos" .. data.localSeat]
    AnimationManager.showSpecialBombGong(data.nCardsType, data.nCardsGong, self._KW_SCT_PANEL, actionPanel, data.localSeat)
end

function GameCardLayer:clearOutCard(localSeat)
    GameCardLayer.super.clearOutCard(self, localSeat)
    local actionPanel = self["_actionPos" .. localSeat]
    if actionPanel then
        actionPanel:removeAllChildren()
    end
end

function GameCardLayer:setOutCards(localSeat, cardIDs, isShowFire)
    if not self._tOutCardArea[localSeat] then
        self:createOutCardArea(localSeat)
    end
    local cardStyle = 0
    if CF.settingData and CF.settingData:getDoubleKouBackStyle() == CF.settingData.tagInfo.BACK_TYPE.index then
        cardStyle = XH.XG_CARD_STYLE
    end
    self._tOutCardArea[localSeat]:setShowCards(cardIDs, nil, nil, isShowFire, cardStyle)
    -- self._tOutCardArea[localSeat]:updateCardsPositionAndOrder()
end

function GameCardLayer:onEventCardFaceStyle()
    local changeStyle = CF.settingData:getDoubleKouFaceStyle()
    local cardAreas = {
        self._tHandCardArea,
        self._tOutCardArea,
    }
    for _, cardArea in ipairs(cardAreas) do
        for _, v in pairs(cardArea) do
            if v then
                v:setCardFaceStyle(changeStyle)
            end
        end
    end
    for i = 1, 4 do
        local cards = {
            self["_openCardPos_" .. i .. "_3"],
            self["_openCardPos_" .. i .. "_3"],
            self._flyCard1,
            self._flyCard2
        }
        for _, v in pairs(cards) do
            local childs = v:getChildren()
            for _, child in pairs(childs) do
                if child.setCardStyle then
                    child:setCardFaceStyle(changeStyle)
                end
            end
        end
    end
end

function GameCardLayer:onEventCardStyle()
    local changeStyle = 0
    if CF.settingData and CF.settingData:getDoubleKouBackStyle() == CF.settingData.tagInfo.BACK_TYPE.index then
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
    for i = 1, 4 do
        local cards = {
            self["_openCardPos_" .. i .. "_3"],
            self["_openCardPos_" .. i .. "_3"],
            self._flyCard1,
            self._flyCard2
        }
        for _, v in pairs(cards) do
            local childs = v:getChildren()
            for _, child in pairs(childs) do
                if child.setCardStyle then
                    child:setCardStyle(changeStyle)
                end
            end
        end
    end
end

function GameCardLayer:checkSetCardStyle(card)
    if CF.settingData and CF.settingData:getDoubleKouBackStyle() == CF.settingData.tagInfo.BACK_TYPE.index then
        card:setCardStype(XH.XG_CARD_STYLE)
    end
end

return GameCardLayer
 [`  