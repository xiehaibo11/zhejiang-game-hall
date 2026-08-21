local GameCardLayer     = CF.gameClass("GameCardLayer", "game.BaseCardGame.Modules.CardLayer.CardLayer")
local HandCardArea      = CF.gameRequire("Modules.CardLayer.HandCardArea")
local CardLayerConfig   = CF.gameRequire("Modules.CardLayer.CardLayerConfig")
local CardArea          = CF.gameRequire("Modules.CardLayer.CardArea")
local CardEnum      	= CF.gameRequire("Define.CardEnum")
local CardLogic     	= CF.gameRequire("Logic.CardLogic")
local GameDefine 		= CF.gameRequire("Define.GameDefine")
local AnimationManager  = CF.gameRequire("Manager.AnimationManager")

local KW_STABLE_BOMB_NODE_NAME 	= "stableBombNode"
local MAX_BOMB_COUNT 			= 7  --最多炸弹数量
local TOP_HANDAREA_POS_GAP_TO_CENTER = 80

function GameCardLayer:getCSBPath()
    return "res/cocosStudio/DaTong/GameLayer/CSB/CardLayer.csb"
end

function GameCardLayer:getBindingInfo()
    local bindInfo = GameCardLayer.super.getBindingInfo(self)
    bindInfo["_KW_POS_HANDCARD_6_"] = {varName = "_handCardPos6_",beginIndex = 1, endIndex = 6}
    bindInfo["_KW_POS_KW_FLY_CARD_"] = {varName = "_flyCard",beginIndex = 1, endIndex = 3}
    bindInfo["_KW_PANEL_OPEN_CARD_"] = {varName = "_openCardPanel_",beginIndex = 1, endIndex = 4}
    bindInfo["_KW_POS_OPEN_CARD_1_"] = {varName = "_openCardPos_1_",beginIndex = 1, endIndex = 4}
    bindInfo["_KW_POS_OPEN_CARD_2_"] = {varName = "_openCardPos_2_",beginIndex = 1, endIndex = 4}
    bindInfo["_KW_POS_OPEN_CARD_3_"] = {varName = "_openCardPos_3_",beginIndex = 1, endIndex = 4}
    bindInfo["_KW_POS_OPEN_CARD_4_"] = {varName = "_openCardPos_4_",beginIndex = 1, endIndex = 4}
	bindInfo["_KW_PANEL_OPEN_CARD_6_"] = {varName = "_openCardPanel_6_",beginIndex = 1, endIndex = 6}
	bindInfo["_KW_POS_OPEN_CARD_6_1_"] = {varName = "_openCardPos_6_1_",beginIndex = 1, endIndex = 3}
	bindInfo["_KW_POS_OPEN_CARD_6_2_"] = {varName = "_openCardPos_6_2_",beginIndex = 1, endIndex = 3}
	bindInfo["_KW_POS_OPEN_CARD_6_3_"] = {varName = "_openCardPos_6_3_",beginIndex = 1, endIndex = 3}
	bindInfo["_KW_POS_OPEN_CARD_6_4_"] = {varName = "_openCardPos_6_4_",beginIndex = 1, endIndex = 3}
	bindInfo["_KW_POS_OPEN_CARD_6_5_"] = {varName = "_openCardPos_6_5_",beginIndex = 1, endIndex = 3}
	bindInfo["_KW_POS_OPEN_CARD_6_6_"] = {varName = "_openCardPos_6_6_",beginIndex = 1, endIndex = 3}
	bindInfo["_KW_UI_GAMEAREA_BOMB_CARD_4_"] = {varName = "_bombCardPos_4_",beginIndex = 1, endIndex = 4}
	bindInfo["_KW_UI_GAMEAREA_BOMB_CARD_6_"] = {varName = "_bombCardPos_6_",beginIndex = 1, endIndex = 6}
    bindInfo["_KW_POS_ACTION_"] = {varName = "_actionPos",beginIndex = 1, endIndex = 4}
    bindInfo["_KW_POS_ANI_CARD_PILE"] = {varName = "_aniCardPliePanel"}
    bindInfo["_KW_POS_OPEN_CARD"] = {varName = "_openCardPos"}
    bindInfo["_KW_POS_ACTION_BOMB"] = {varName = "_actionBombPos"}
    bindInfo["_KW_IMG_SAME_COLOR_BG"] = {varName = "_sameColorImg"}
    bindInfo["_KW_STABLE_BOMB_IMG_BG"] = {varName = "_stableBombNode"}
    return bindInfo
end

function GameCardLayer:ctor(param)
    GameCardLayer.super.ctor(self, param)
    self._tOutCardAreaFFZ = {}
    self._gameData = CF.game:getModule("GameLayer"):getGameData()
    self:initUI()
end

function GameCardLayer:getProxyEvents()
    local eventTable = GameCardLayer.super.getProxyEvents(self) or {}
    eventTable[#eventTable+1] = {module = CF.roomData, eventKeyName = "EVENT_CARD_HOLDER_CHANGED", callBack = "onCardHolderChanged"}
    eventTable[#eventTable+1] = {module = CF.settingData, eventKeyName = "EVENT_CLEAR_MODEL", callBack = "onEventClearModel"}
    eventTable[#eventTable+1] = {module = CF.settingData, eventKeyName = "EVENT_GAME_BACK_STYLE_CHANGED", callBack = "onEventCardStyle"}
    return eventTable
end

function GameCardLayer:initUI()
    self:showUIBombCardLayer(false,false)
end

function GameCardLayer:getAdaptationConfig()
    local uiList =  GameCardLayer.super.getAdaptationConfig(self) or {}
    uiList[#uiList+1] = {node = self._openCardPanel_1, bRight = false, bHalf = false}
    uiList[#uiList+1] ={node = self._openCardPanel_3, bRight = true, bHalf = false}
    uiList[#uiList+1] ={node = self._outCardPos1, bRight = false, bHalf = false}
    uiList[#uiList+1] ={node = self._handCardPos1, bRight = false, bHalf = false}
    uiList[#uiList+1] ={node = self._actionPos1, bRight = false, bHalf = false}
    uiList[#uiList+1] ={node = self._outCardPos3, bRight = true, bHalf = false}
    uiList[#uiList+1] ={node = self._handCardPos3, bRight = true, bHalf = false}
    uiList[#uiList+1] ={node = self._actionPos3, bRight = true, bHalf = false}
    uiList[#uiList+1] ={node = self._handCardPos6_1, bRight = false, bHalf = false}
    uiList[#uiList+1] ={node = self._handCardPos6_6, bRight = false, bHalf = false}
    uiList[#uiList+1] ={node = self._handCardPos6_3, bRight = true, bHalf = false}
    uiList[#uiList+1] ={node = self._handCardPos6_4, bRight = true, bHalf = false}
    uiList[#uiList+1] ={node = self._openCardPanel_6_1, bRight = false, bHalf = false}
    uiList[#uiList+1] ={node = self._openCardPanel_6_6, bRight = false, bHalf = false}
    uiList[#uiList+1] ={node = self._openCardPanel_6_3, bRight = true, bHalf = false}
    uiList[#uiList+1] ={node = self._openCardPanel_6_4, bRight = true, bHalf = false}
    return uiList
end

function GameCardLayer:createOutCardArea(localSeat)
    if not self["_outCardPos"..localSeat] then return end
    local cardArea = CardArea.new()
    self:setCardAreaNormalConf(cardArea, CardLayerConfig.OutCardConf[localSeat])
    cardArea:setScale(CardLayerConfig.OutCardScale)
    self["_outCardPos"..localSeat]:addChild(cardArea)
    self._tOutCardArea[localSeat] = cardArea
end

function GameCardLayer:showUIBombCardLayer(fourVisible, sixVisible)
    for index = 1 , CF.roomData:getMaxChairs() do
        local localPanel4 = self["_bombCardPos_4_" .. index]
        local localPanel6 = self["_bombCardPos_6_" .. index]
        if localPanel4 then localPanel4:setVisible(fourVisible) end
        if localPanel6 then localPanel6:setVisible(sixVisible) end
        for j = 1 , MAX_BOMB_COUNT do
            CF.UITool.setVisible(localPanel4,"KW_UI_BOMB_CARD_" .. j , fourVisible)
            CF.UITool.setVisible(localPanel6,"KW_UI_BOMB_CARD_" .. j , sixVisible)
        end
    end
end

function GameCardLayer:onTouchEventTouchLayer(send, eventType)
    GameCardLayer.super.onTouchEventTouchLayer(self, send, eventType)
    if CF.game:getModule("GameLayer") then
        CF.game:getModule("GameLayer"):onTouchCardLayerBg()
    end
end

function GameCardLayer:showLeftAndRightHandCardArea(bShow)
    if CF.roomData:isSixPlayer() then
        if self._handCardPos6_1 then self._handCardPos6_1:setVisible(bShow) end
        if self._handCardPos6_3 then self._handCardPos6_3:setVisible(bShow) end
        if self._handCardPos6_4 then self._handCardPos6_4:setVisible(bShow) end
        if self._handCardPos6_6 then self._handCardPos6_6:setVisible(bShow) end
    else
        if self._handCardPos1 then self._handCardPos1:setVisible(bShow) end
        if self._handCardPos3 then self._handCardPos3:setVisible(bShow) end
    end
end

function GameCardLayer:onGameOpenCard(msg)
    if msg.bPlayAni then
        local callBack = function()
            CF.msgManager:sendWaitOpenCard()
        end
        self:showOpenCardAni(msg.cardID,callBack)
        local cardPileAniPos = self._aniCardPliePanel
        if cardPileAniPos then
            cardPileAniPos:removeAllChildren()
            local armature = AnimationManager.getFlyCardMovieArmature()
            if armature then
                armature:getAnimation():setMovementEventCallFunc(function()
                    cardPileAniPos:removeChild(armature)
                    end)
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
        local openCardID = self._gameData:getOpenCardID()
        self:showSepCardsAni(localFirstcardSeat, localSecondcardSeat, openCardID, callBack)
    else
        if self._flyCard1 then
            self._flyCard1:setVisible(false)
        end
    end
end

function GameCardLayer:showOpenCardAfterSwapSeat(bigLocalSeat, smallLocalSeat, openCardID, callBack)
    if bigLocalSeat ~= smallLocalSeat  then
        local CardModule = CF.gameRequire("game.BaseCardGame.Modules.CardLayer.Card")
        local smallOpenCard = self["_openCardPos_"..smallLocalSeat.."_3"]
        if smallOpenCard then
            local card = CardModule:new()
            card:setCardID(openCardID)
            card:setScale(0.65)
            smallOpenCard:addChild(card)
            local showNode = cc.CallFunc:create(function()
                smallOpenCard:setOpacity(255)
            end)
            smallOpenCard:runAction(cc.Sequence:create(showNode,cc.DelayTime:create(1),cc.FadeOut:create(0.2)))
        end
        
        local bigOpenCard = self["_openCardPos_"..bigLocalSeat.."_3"]
        if bigOpenCard then
            local card = CardModule:new()
            card:setCardID(openCardID)
            card:setScale(0.65)
            bigOpenCard:addChild(card)
            local showNode = cc.CallFunc:create(function()
                bigOpenCard:setOpacity(255)
            end)
            local clearOpenCard = cc.CallFunc:create(function()
                self:clearOpenCards(bigLocalSeat)
                self:clearOpenCards(smallLocalSeat)
            end)
            local action = cc.Sequence:create(showNode,cc.DelayTime:create(1),cc.FadeOut:create(0.2),clearOpenCard)
            if callBack then
                action = cc.Sequence:create(showNode,cc.DelayTime:create(1),cc.FadeOut:create(0.2),cc.CallFunc:create(callBack),clearOpenCard)
            end
            bigOpenCard:runAction(action)
        end
    end
end

function GameCardLayer:clearOpenCards(localSeat)
    for i = 1, 3 do
        local openCardPanel = self["_openCardPos_"..localSeat.."_"..i]
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
    local CardModule = CF.gameRequire("game.BaseCardGame.Modules.CardLayer.Card")
    local card = CardModule:new()
    card:setCardID(openCardID)
    card:setScale(0.65)
    openCard:setVisible(false)
    openCard:addChild(card)

    local delayTimeBeforeShow = cc.DelayTime:create(0.7)
    local showCard = cc.CallFunc:create(function()
        openCard:setOpacity(0)
        openCard:setVisible(true)
    end)
    local fadeInTime = 0.3
    local fadeIn = cc.FadeIn:create(fadeInTime)
    local scaleToBig = cc.ScaleTo:create(fadeInTime,1.3)
    local spawnScaleAndFadeIn = cc.Spawn:create(fadeIn,scaleToBig)
    local scaleToNormal = cc.ScaleTo:create(0.1,1.0)
    local delayTimeAfterShow = cc.DelayTime:create(0.4)
    local allAction = cc.Sequence:create(delayTimeBeforeShow,showCard,spawnScaleAndFadeIn,scaleToNormal,delayTimeAfterShow)
    if callBack then
        local doCallBack = cc.CallFunc:create(callBack)
        allAction = cc.Sequence:create(delayTimeBeforeShow,showCard,spawnScaleAndFadeIn,scaleToNormal,delayTimeAfterShow,doCallBack)
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
    
    local firstTarget = self["_openCardPos_"..firstLocalSeat.."_"..firstIndex]
    local firstTargetPosToNode = cc.p(0,0)
    if firstTarget then
        local firstTargetPos = firstTarget:convertToWorldSpace(cc.p(0,0))
        firstTargetPosToNode = openCardStartPos:convertToNodeSpace(firstTargetPos)
    end
    
    local secondTarget = self["_openCardPos_"..secondLocalSeat.."_"..secondIndex]
    local secondTargetPosToNode = cc.p(0,0)
    if secondTarget then
        local secondTargetPos = secondTarget:convertToWorldSpace(cc.p(0,0))
        secondTargetPosToNode = openCardStartPos:convertToNodeSpace(secondTargetPos)
    end
    
    local function secondOpenCardAni()
        local secondFlyNode = self._flyCard2
        if secondFlyNode then
            local showCard = cc.CallFunc:create(function()
                secondFlyNode:setOpacity(0)
                secondFlyNode:setVisible(true)
                secondFlyNode:setPosition(cc.p(0,0))
            end)
            local setPosToTarget = cc.CallFunc:create(function()
                secondFlyNode:setPosition(secondTargetPosToNode)
            end)
            local fadeInTime = 0.3
            local fadeIn = cc.FadeIn:create(fadeInTime)
            local scaleToBig = cc.ScaleTo:create(fadeInTime,1.3)
            local spawnScaleAndFadeIn = cc.Spawn:create(fadeIn,scaleToBig)
            local scaleToNormal = cc.ScaleTo:create(0.1,1.0)
            local delayTime = cc.DelayTime:create(0.8)
            local fadeOut = cc.FadeOut:create(0.2)
            local destroyCard = cc.CallFunc:create(function()
                secondFlyNode:setVisible(false)
            end)
            local allAction = cc.Sequence:create(showCard,setPosToTarget,spawnScaleAndFadeIn,scaleToNormal,delayTime,fadeOut,destroyCard)
            if callBack then
                local doCallBack = cc.CallFunc:create(callBack)
                allAction = cc.Sequence:create(showCard,setPosToTarget,spawnScaleAndFadeIn,scaleToNormal,delayTime,fadeOut,doCallBack,destroyCard)
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
            local showCard = cc.CallFunc:create(function()
                firstFlyNode:setVisible(true)
                firstFlyNode:setPosition(cc.p(0,0))
                firstFlyNode:setOpacity(255)
            end)
            local rotateCard = cc.RotateBy:create(0.4,rotateDirect * 360)
            local moveCard = cc.MoveTo:create(0.4,firstTargetPosToNode)
            local moveAction = cc.EaseIn:create(cc.Spawn:create(rotateCard,moveCard),0.3)
            local fadeOut = cc.FadeOut:create(0.2)
            local destroyCard = cc.CallFunc:create(function()
                firstFlyNode:setVisible(false)
            end)
            local showSecondOpenCard = cc.CallFunc:create(function()
                secondOpenCardAni()
            end)
            local delatTimeAfterShowSecond = cc.DelayTime:create(1.2)
            local allAction = cc.Sequence:create(showCard,moveAction,showSecondOpenCard,delatTimeAfterShowSecond,fadeOut,destroyCard)
            firstFlyNode:runAction(allAction)
        end
    end

    if self._flyCard1 then
        self._flyCard1:removeAllChildren()
    end

    if self._flyCard2 then
        self._flyCard2:removeAllChildren()
    end

    local CardModule = CF.gameRequire("game.BaseCardGame.Modules.CardLayer.Card")
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

local firstOpenCardIndex = 1
local secondOpenCardIndex = 2
local onlyOpenCardIndex = 3
function GameCardLayer:showSepCardsAniSix(firstLocalSeat, secondLocalSeat, thirdLocalSeat, openCardID, callBack)
    local openCardStartPos = self._openCardPos
    if openCardStartPos == nil then
        return
    end

    local firstIndex = firstOpenCardIndex
    local secondIndex = secondOpenCardIndex
    local thirdIndex = onlyOpenCardIndex
    if firstLocalSeat == secondLocalSeat and firstLocalSeat == thirdLocalSeat then
        firstIndex = firstOpenCardIndex
        secondIndex = secondOpenCardIndex
        thirdIndex = onlyOpenCardIndex
    end

    if firstLocalSeat ~= secondLocalSeat and firstLocalSeat ~= thirdLocalSeat and secondLocalSeat ~= thirdLocalSeat then
        firstIndex = onlyOpenCardIndex
        secondIndex = onlyOpenCardIndex
        thirdIndex = onlyOpenCardIndex
    end
    
    local firstTarget = self["_openCardPos_6_"..firstLocalSeat.."_"..firstIndex]
    local firstTargetPosToNode = cc.p(0,0)
    if firstTarget then
        local firstTargetPos = firstTarget:convertToWorldSpace(cc.p(0,0))
        firstTargetPosToNode = openCardStartPos:convertToNodeSpace(firstTargetPos)
    end
    
    local secondTarget = self["_openCardPos_6_"..secondLocalSeat.."_"..secondIndex]
    local secondTargetPosToNode = cc.p(0,0)
    if secondTarget then
        local secondTargetPos = secondTarget:convertToWorldSpace(cc.p(0,0))
        secondTargetPosToNode = openCardStartPos:convertToNodeSpace(secondTargetPos)
    end

    local thirdTarget = self["_openCardPos_6_"..thirdLocalSeat.."_"..thirdIndex]
    local thirdTargetPosToNode = cc.p(0,0)
    if thirdTarget then
        local thirdTargetPos = thirdTarget:convertToWorldSpace(cc.p(0,0))
        thirdTargetPosToNode = openCardStartPos:convertToNodeSpace(thirdTargetPos)
    end
    
    local function thirdOpenCardAni()
        local thirdFlyNode = self._flyCard3
        if thirdFlyNode then
            local showCard = cc.CallFunc:create(function()
                thirdFlyNode:setOpacity(0)
                thirdFlyNode:setVisible(true)
                thirdFlyNode:setPosition(cc.p(0,0))
            end)
            local setPosToTarget = cc.CallFunc:create(function()
                thirdFlyNode:setPosition(thirdTargetPosToNode)
            end)
            local fadeInTime = 0.3
            local fadeIn = cc.FadeIn:create(fadeInTime)
            local scaleToBig = cc.ScaleTo:create(fadeInTime,1.3)
            local spawnScaleAndFadeIn = cc.Spawn:create(fadeIn,scaleToBig)
            local scaleToNormal = cc.ScaleTo:create(0.1,1.0)
            local delayTime = cc.DelayTime:create(0.8)
            local fadeOut = cc.FadeOut:create(0.2)
            local destroyCard = cc.CallFunc:create(function()
                thirdFlyNode:setVisible(false)
            end)
            local allAction = cc.Sequence:create(showCard,setPosToTarget,spawnScaleAndFadeIn,scaleToNormal,delayTime,fadeOut,destroyCard)
            if callBack then
                local doCallBack = cc.CallFunc:create(callBack)
                allAction = cc.Sequence:create(showCard,setPosToTarget,spawnScaleAndFadeIn,scaleToNormal,delayTime,fadeOut,doCallBack,destroyCard)
            end
            thirdFlyNode:runAction(allAction)
        end
    end
    
    local function secondOpenCardAni()
        local rotateDirect = 1
        if secondTargetPosToNode.x < 0 then
            rotateDirect = -1
        end
        --开牌飞出动画
        local secondFlyNode = self._flyCard2
        if secondFlyNode then
            local showCard = cc.CallFunc:create(function()
                secondFlyNode:setVisible(true)
                secondFlyNode:setPosition(cc.p(0,0))
                secondFlyNode:setOpacity(255)
            end)
            local rotateCard = cc.RotateBy:create(0.4,rotateDirect * 360)
            local moveCard = cc.MoveTo:create(0.4,secondTargetPosToNode)
            local moveAction = cc.EaseIn:create(cc.Spawn:create(rotateCard,moveCard),0.3)
            local fadeOut = cc.FadeOut:create(0.2)
            local destroyCard = cc.CallFunc:create(function()
                secondFlyNode:setVisible(false)
            end)
            local showSecondOpenCard = cc.CallFunc:create(function()
                thirdOpenCardAni()
            end)
            local delatTimeAfterShowSecond = cc.DelayTime:create(1.2)
            local allAction = cc.Sequence:create(showCard,moveAction,showSecondOpenCard,delatTimeAfterShowSecond,fadeOut,destroyCard)
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
            local showCard = cc.CallFunc:create(function()
                firstFlyNode:setVisible(true)
                firstFlyNode:setPosition(cc.p(0,0))
                firstFlyNode:setOpacity(255)
            end)
            local rotateCard = cc.RotateBy:create(0.4,rotateDirect * 360)
            local moveCard = cc.MoveTo:create(0.4,firstTargetPosToNode)
            local moveAction = cc.EaseIn:create(cc.Spawn:create(rotateCard,moveCard),0.3)
            local fadeOut = cc.FadeOut:create(0.2)
            local destroyCard = cc.CallFunc:create(function()
                firstFlyNode:setVisible(false)
            end)
            local showSecondOpenCard = cc.CallFunc:create(function()
                secondOpenCardAni()
            end)
            local delatTimeAfterShowSecond = cc.DelayTime:create(1.2)
            local allAction = cc.Sequence:create(showCard,moveAction,showSecondOpenCard,delatTimeAfterShowSecond,fadeOut,destroyCard)
            firstFlyNode:runAction(allAction)
        end
    end

    self:setFlyCards(openCardID,firstOpenCardIndex)
    self:setFlyCards(openCardID,secondOpenCardIndex)
    self:setFlyCards(openCardID,onlyOpenCardIndex)

    firstOpenCardAni()
end

function GameCardLayer:setFlyCards(openCardID, index)
    local cardParent = self["_flyCard" .. index]
    if not cardParent then return end
    cardParent:setVisible(false)
    local cardNode = cardParent:getChildByName("CardModuleNode")
    if cardNode then
        cardNode:setCardID(openCardID)
    else
        local CardModule = CF.gameRequire("game.BaseCardGame.Modules.CardLayer.Card")
        local card = CardModule:new()
        card:setCardID(openCardID)
        card:setScale(0.65) 
        cardParent:addChild(card)
        card:setName("CardModuleNode")
    end
end

function GameCardLayer:playBombAction(localSeat, xianCount)
    local actionPanel = self._actionBombPos
    if not actionPanel then
        return 
    end
    AnimationManager.playSmallBombJsonArmature(actionPanel, xianCount)
end

function GameCardLayer:playBombLineAction(localSeat, xianCount)
    local actionPanel = self["_actionPos"..localSeat]
    if not actionPanel then
        return 
    end
    AnimationManager.playBombLineJsonArmature(actionPanel, xianCount)
end

function GameCardLayer:playShunAction(localSeat, shunCount)
    local actionPanel = self["_actionPos"..localSeat]
    if not actionPanel then
        return 
    end
    local armature = AnimationManager.getShunJsonArmature(shunCount)
    if armature then
        armature:getAnimation():setMovementEventCallFunc(function()
            actionPanel:removeChild(armature)
            end)
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
    local playerTipPanel = CF.roomData:isSixPlayer() and self._handCardPos6_2 or self._handCardPos2
    if playerTipPanel then 
        local noBigSprite = cc.Sprite:create()
        if noBigSprite then
            noBigSprite:setSpriteFrame("doublekou_text_tips_1.png")
            playerTipPanel:addChild(noBigSprite)
            local delayAction = cc.DelayTime:create(0.2 + 0.2)
            local fadeOutAction = cc.FadeOut:create(0.4)
            local removeAction = cc.CallFunc:create(
                function ()
                    noBigSprite:removeFromParent()
                end)
            noBigSprite:runAction(cc.Sequence:create(delayAction, fadeOutAction ,removeAction))
        end
    end
end

function GameCardLayer:showNoBiggerSprite()
    local playerTipPanel = CF.roomData:isSixPlayer() and self._handCardPos6_2 or self._handCardPos2
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
    local playerTipPanel = CF.roomData:isSixPlayer() and self._handCardPos6_2 or self._handCardPos2
    if playerTipPanel then 
        local noBiggerSprite = playerTipPanel:getChildByName("NoBiggerSprite")
        if noBiggerSprite then
            noBiggerSprite:removeFromParent()
        end
    end
end

function GameCardLayer:setHandCards(localSeat, cardIDs ,bShowAni)
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

    if localSeat == CardLayerConfig.LocalSeat.Bottom then
        local specialCardIDs = self:getSpecialCardIDs(cardIDs)
        self:setHandCardAreaSpecialColorCardIDs(localSeat, specialCardIDs)
    end
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

function GameCardLayer:updateTopHandAreaPos()
    if CF.roomData:isSixPlayer() then return end
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
    local posX = (totalGap - nowCardGap * cardCount)/2 - TOP_HANDAREA_POS_GAP_TO_CENTER
    if posX > 0 then
        posX = 0
    end
    cardArea:setPositionX(posX)
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
    local handCardConf = CF.roomData:isSixPlayer() and CardLayerConfig.HandCardConfSix[localSeat] or CardLayerConfig.HandCardConf[localSeat]
    self:setCardAreaNormalConf(cardArea, handCardConf)
    cardArea:setMaxCarDistance(handCardConf.maxCardDistanceX)
    cardArea:setScale(CardLayerConfig.HandCardScale[localSeat])

    local handCardPosNode = CF.roomData:isSixPlayer() and self["_handCardPos6_" .. localSeat] or self["_handCardPos"..localSeat]
    if handCardPosNode then
        handCardPosNode:addChild(cardArea)
        self._tHandCardArea[localSeat] = cardArea
        if localSeat == CardLayerConfig.LocalSeat.Bottom then
            handCardPosNode:getParent():setLocalZOrder(99)
        end
    end
end

function GameCardLayer:onCardHolderChanged(event)
   self:updateCardHolder()
end

--纯净模式
function GameCardLayer:onEventClearModel(event)
   self:updateCardHolder()
end

function GameCardLayer:updateCardHolder()
	local ypqData = CF.roomData:getSelfCardHolderData() or {}
    local GameBagUILogic = CF.gameRequire("Modules.GameBag.UILogic")
    GameBagUILogic.showCardHolder(self:getChildByName("Layer"), CF.roomData:getSelfLocalSeat(), ypqData.ypq_url, ypqData.ypq)
end

----------------------------------------
--清除所有牌
----------------------------------------
function GameCardLayer:clearAllCards()
    GameCardLayer.super.clearAllCards(self)
    for localSeat = 1 , CF.roomData:getMaxPlayer() do
        if self._tOutCardAreaFFZ[localSeat] then
            for index = 1 , MAX_BOMB_COUNT do
                if self._tOutCardAreaFFZ[localSeat][index] then
                    self._tOutCardAreaFFZ[localSeat][index]:clearCards()
                end
            end
            self._tOutCardAreaFFZ[localSeat] = {}
        end
    end
    self:showUIBombCardLayer(false, false)

    local bombCardNodeName = CF.roomData:isSixPlayer() and "_bombCardPos_6_" or "_bombCardPos_4_"
    for localSeat = 1 , CF.roomData:getMaxPlayer() do
        local localSeatPanel = self[bombCardNodeName .. localSeat]
        for index = 1 , MAX_BOMB_COUNT do
            local bombCardPanel = CF.UITool.seekNodeByName(localSeatPanel,"KW_UI_BOMB_CARD_" .. index)
            local panelBG = CF.UITool.seekNodeByName(bombCardPanel, "KW_PANEL_BG")
            local stableNode = CF.UITool.seekNodeByName(panelBG,KW_STABLE_BOMB_NODE_NAME)
            if stableNode then
                stableNode:removeSelf()
            end
            CF.UITool.setText(panelBG,"KW_TEXT_CATD_TYPE","")
            CF.UITool.setText(panelBG,"KW_TEXT_CATD_SCORE","")
        end
    end
end

function GameCardLayer:setCardAreaNormalConf(cardArea, conf)
    if not conf then return end
    cardArea:setLayoutType(conf.layoutType)
    cardArea:setLineCardCount(conf.lineCardCount)
    cardArea:setStartPosition(conf.startPosX, conf.startPosY)
    cardArea:setCardDistance(conf.cardDistanceX, conf.cardDistanceY)
    cardArea:setCarAddDistance(conf.cardAddDirectionX, conf.cardAddDirectionY)
end

----------------------------------------
--翻翻炸
----------------------------------------

--设置翻炸的出牌
function GameCardLayer:setOutCardsFFZ(localSeat, cardIDs, index)
    self._tOutCardAreaFFZ[localSeat] = self._tOutCardAreaFFZ[localSeat] or {}
    if not self._tOutCardAreaFFZ[localSeat][index] then
        self:createOutCardAreaFFZ(localSeat, index)
    end
    if self._tOutCardAreaFFZ[localSeat][index] then
        self._tOutCardAreaFFZ[localSeat][index]:setShowCards(cardIDs)
    end
end

--创建翻翻炸出牌
function GameCardLayer:createOutCardAreaFFZ(localSeat,index)
    local CardFFZArea = CF.gameRequire("Modules.CardLayer.CardFFZArea")
    local cardArea = CardFFZArea.new()
    self:setCardAreaNormalConf(cardArea, CardLayerConfig.OutCardConfFFZ)
    cardArea:setScale(CardLayerConfig.OutCardScaleFFZ)
    local bombCardNodeName = CF.roomData:isSixPlayer() and "_bombCardPos_6_" or "_bombCardPos_4_"
    local localSeatPanel = self[bombCardNodeName .. localSeat]
    if localSeatPanel then localSeatPanel:setVisible(true) end
    local cardPanelIndexNode = CF.UITool.seekNodeByName(localSeatPanel,"KW_UI_BOMB_CARD_" .. index)
    local cardPanelPosNode = CF.UITool.seekNodeByName(cardPanelIndexNode,"KW_PANEL_CARD")
    CF.UITool.setVisible(localSeatPanel,"KW_UI_BOMB_CARD_" .. index, true)
    if cardPanelPosNode then
        cardPanelPosNode:addChild(cardArea)
        self._tOutCardAreaFFZ[localSeat] = self._tOutCardAreaFFZ[localSeat] or {}
        self._tOutCardAreaFFZ[localSeat][index] = cardArea
    end
end

--显示翻炸牌型
function GameCardLayer:setBombCardType(localSeat, typeEnum, index, bAni)
    local bombCardNodeName = CF.roomData:isSixPlayer() and "_bombCardPos_6_" or "_bombCardPos_4_"
    local localSeatPanel = self[bombCardNodeName .. localSeat]
    if localSeatPanel then localSeatPanel:setVisible(true) end
    CF.UITool.setVisible(localSeatPanel,"KW_UI_BOMB_CARD_" .. index, true)
    local cardPanelIndexNode = CF.UITool.seekNodeByName(localSeatPanel,"KW_UI_BOMB_CARD_" .. index)
    CF.UITool.setText(cardPanelIndexNode, "KW_TEXT_CATD_TYPE",self:getCardTypeChineseByEnum(typeEnum) or "")
    if bAni then
        local textNode = CF.UITool.seekNodeByName(cardPanelIndexNode, "KW_TEXT_CATD_TYPE")
        if textNode then
            textNode:setScale(5)
            local scaleTo = cc.ScaleTo:create(0.15,1.0)
            textNode:runAction(scaleTo)
        end
    end
end

--根据炸弹类型获取翻炸中文
function GameCardLayer:getCardTypeChineseByEnum(typeEnum)
    return GameDefine.CardTypeChinese[typeEnum]
end

--设置翻炸的分数
function GameCardLayer:setBombCardScore(localSeat, score, index, bAni)
    score = tonumber(score) or 0
    if score >= 0 then
        score = '+' .. tostring(score)
    else
        score = '-' .. tostring(score)
    end

    local bombCardNodeName = CF.roomData:isSixPlayer() and "_bombCardPos_6_" or "_bombCardPos_4_"
    local localSeatPanel = self[bombCardNodeName .. localSeat]
    local cardPanelIndexNode = CF.UITool.seekNodeByName(localSeatPanel,"KW_UI_BOMB_CARD_" .. index)
    CF.UITool.setText(cardPanelIndexNode, "KW_TEXT_CATD_SCORE", score)
    if bAni then
        local textNode = CF.UITool.seekNodeByName(cardPanelIndexNode, "KW_TEXT_CATD_SCORE")
        if textNode then
            textNode:setFontSize(45)
            local scaleTo = cc.ScaleTo:create(0.2,1.5)
            local revert = cc.ScaleTo:create(0.2,1.0)
            local seq = cc.Sequence:create(scaleTo,revert)
            textNode:runAction(seq)
        end
    end
end

--设置是否同色炸
function GameCardLayer:setBombCardSameColor(localSeat,isSameColor,index)
    if not isSameColor then return end
    self._tOutCardAreaFFZ[localSeat] = self._tOutCardAreaFFZ[localSeat] or {}
    if self._tOutCardAreaFFZ[localSeat][index] then
        local cards = self._tOutCardAreaFFZ[localSeat][index]._cards
        if cards and #cards > 0 then
            local firstCard = cards[#cards]
            local sameColorBgImg = self._sameColorImg
            if sameColorBgImg then
                local cloneNode = sameColorBgImg:clone()
                firstCard:addChild(cloneNode)
                local consize = firstCard:getContentSize()
                cloneNode:setPosition(cc.p(-30,consize.height/2))
                cloneNode:setScale(2.0)
            end
        end
    end
end

--显示定型炸
function GameCardLayer:showStableBombIcon(localSeat)
    self._tOutCardAreaFFZ[localSeat] = self._tOutCardAreaFFZ[localSeat] or {}
    local cardNums = table.nums(self._tOutCardAreaFFZ[localSeat])
    if cardNums > 0 then
        local bombCardNodeName = CF.roomData:isSixPlayer() and "_bombCardPos_6_" or "_bombCardPos_4_"
        local localSeatPanel = self[bombCardNodeName .. localSeat]
        local bombCardPanel = CF.UITool.seekNodeByName(localSeatPanel,"KW_UI_BOMB_CARD_" .. cardNums)
        local panelBG = CF.UITool.seekNodeByName(bombCardPanel, "KW_PANEL_BG")
        local stableBombNode = self._stableBombNode
        if panelBG and stableBombNode then
            local stableNode = panelBG:getChildByName(KW_STABLE_BOMB_NODE_NAME)
            if stableNode then
                stableNode:removeSelf()
            end
            local cloneNode = stableBombNode:clone()
            panelBG:addChild(cloneNode)
            cloneNode:setPosition(cc.p(0,-40))
            cloneNode:setName(KW_STABLE_BOMB_NODE_NAME)
            local textNode = CF.UITool.seekNodeByName(cloneNode,"KW_TEXT_CATD_SCORE")
            if textNode then
                textNode:setFontSize(45)
                local scaleTo = cc.ScaleTo:create(0.2,3.0)
                local revert = cc.ScaleTo:create(0.2,1.0)
                local seq = cc.Sequence:create(scaleTo,revert)
                textNode:runAction(seq) 
            end
        end
    end
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

return GameCardLayer w�  