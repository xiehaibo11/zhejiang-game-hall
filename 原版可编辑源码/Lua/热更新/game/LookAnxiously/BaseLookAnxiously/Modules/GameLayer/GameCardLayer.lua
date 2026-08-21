
local CardLayerConfig = CF.gameRequire("Modules.CardLayer.CardLayerConfig")
local GameCardLayer = CF.gameClass("GameCardLayer", "game.BaseCardGame.Modules.CardLayer.CardLayer")
local AnimationManager = CF.gameRequire("Manager.AnimationManager")
local CardEnum = CF.gameRequire("Define.CardEnum")
local Card = CF.gameRequire("Modules.CardLayer.Card")
local KW_CSB_GAME_CARD_LAYER = "res/cocosStudio/LookAnxiously/BaseCardLayer/CSB/BaseCardLayer.csb"
local CardLayerDefine = CF.gameRequire("Modules.CardLayer.CardLayerDefine")

function GameCardLayer:getCSBPath()
    return KW_CSB_GAME_CARD_LAYER
end

local totalCardsCount = 54
function GameCardLayer:ctor(param)
    param = param or {}
    self._playerCount = param.playerCount
    GameCardLayer.super.ctor(self, param)
    if self._playerCount == 5 then
        CardLayerConfig.HandCardConf = CardLayerConfig.HandCardConfSmall
    end
    self:initEvents()
    self:refreshCards()
end

function GameCardLayer:refreshCards()
    cc.SpriteFrameCache:getInstance():addSpriteFrames(CardLayerDefine.KW_PATH_XG_CARD_PLIST)
    cc.SpriteFrameCache:getInstance():addSpriteFrames(CardLayerDefine.KW_PATH_BASE_CHANGE_CARD_PLIST)
    local changeCardModule = CF.game:getModule("ChangeCard")
    local isChanged = changeCardModule and changeCardModule:isChangeCardSuccess()
    self._leftCardsCount:enableOutline(cc.c3b(0x2c, 0x3f, 0x65), 3)
    local textureName = CardLayerDefine.KW_UI_CARD_BACK_NAME
    if isChanged then
        textureName = CardLayerDefine.KW_UI_CHANGE_CARD_BACK_NAME
    else
        if CF.settingData and CF.settingData:getCardBackStyle() == CF.settingData.tagInfo.BACK_TYPE.index then
            textureName = CardLayerDefine.KW_UI_XG_CARD_BACK_NAME
            self._leftCardsCount:enableOutline(cc.c3b(0x0A4, 0x2D, 0x08), 3)
        end
    end
    for i = 1, 27 do
        if self["_divideCards" .. i] then
            self["_divideCards" .. i]:loadTexture(textureName, ccui.TextureResType.plistType)
        end
    end
end

function GameCardLayer:initEvents()
    self._gameManagerProxy = cc.EventProxy.new(CF.roomData, self):addEventListener(CF.roomData.EVENT_CARD_HOLDER_CHANGED, handler(self, self.onCardHolderChanged))
    self._settingDataProxy = cc.EventProxy.new(CF.settingData, self):addEventListener(CF.settingData.EVENT_CLEAR_MODEL, handler(self, self.onEventClearModel))
    self._settingData2Proxy = cc.EventProxy.new(CF.settingData, self):addEventListener(CF.settingData.EVENT_CARD_BACK_STYLE_CHANGED, handler(self, self.onEventCardStyle))
    self._refreshCards = cc.EventProxy.new(CF.game:getModule("ChangeCard"), self):addEventListener("EVENT_PLAY_ANI", handler(self, self.refreshCards))
    self._clearCardsState = cc.EventProxy.new(CF.roomData, self):addEventListener("EVENT_GAMESTART_CHANGED", handler(self, self.refreshCards))
end


function GameCardLayer:getBindingInfo()
    local tables = GameCardLayer.super.getBindingInfo(self)
    -- varName不能重复
    tables["_KW_POS_ACTION_BOMB"] = {varName = "_actionBombPos"}
    tables["_KW_POS_ACTION_"] = {varName = "_actionPos", beginIndex = 1, endIndex = 3}
    tables["_KW_POS_MOVE_"] = {varName = "_moveCardPos", beginIndex = 1, endIndex = 3}
    if self._playerCount == 5 then 
        tables["_KW_POS_HANDCARD_"] = nil
        tables["_KW_POS_OUTCARD_"] = nil
        tables["_KW_POS_HANDCARD_1_5"] = {varName = "_handCardPos1"}
        tables["_KW_POS_HANDCARD_2"] = {varName = "_handCardPos2"}
        tables["_KW_POS_HANDCARD_3_5"] = {varName = "_handCardPos3"}
        tables["_KW_POS_HANDCARD_4_5"] = {varName = "_handCardPos4"}
        tables["_KW_POS_HANDCARD_5"] = {varName = "_handCardPos5"}
        tables["_KW_POS_MOVE_4_5"] = {varName = "_moveCardPos4"}
        tables["_KW_POS_MOVE_5"] = {varName = "_moveCardPos5"}
        tables["_KW_POS_OUTCARD_"] = {varName = "_outCardPos", beginIndex = 1, endIndex = 3}
        tables["_KW_POS_OUTCARD_4_5"] = {varName = "_outCardPos4"}
        tables["_KW_POS_OUTCARD_5"] = {varName = "_outCardPos5"}
        tables["_KW_POS_ACTION_4_5"] = {varName = "_actionPos4"}
        tables["_KW_POS_ACTION_5"] = {varName = "_actionPos5"}
    else
        tables["_KW_POS_MOVE_4"] = {varName = "_moveCardPos4"}
        tables["_KW_POS_ACTION_4"] = {varName = "_actionPos4"}
    end 
    tables["_KW_PANEL_DIVIDE_CARD"] = {varName = "_divideCardsPanel"}
    tables["_KW_CARD_BACK_"] = {varName = "_divideCards", beginIndex = 1, endIndex = 27}
    tables["_KW_CARDS_COUNT"] = {varName = "_leftCardsCount"}
    tables["_KW_ANI_START_NODE"] = {varName = "_divideCardsAniStartNode"}
    
    return tables
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
    if self._settingData2Proxy then
        self._settingData2Proxy:removeAllEventListeners()
        self._settingData2Proxy = nil
    end
    if self._refreshCards then
        self._refreshCards:removeAllEventListeners()
        self._refreshCards = nil
    end
    if self._clearCardsState then
        self._clearCardsState:removeAllEventListeners()
        self._clearCardsState = nil
    end
end

function GameCardLayer:getPlayerCount()
    return self._playerCount    
end


function GameCardLayer:getAdaptationConfig()
    return {
        {node = self._outCardPos1, bRight = false, bHalf = false},
        {node = self._handCardPos1, bRight = false, bHalf = false},
        {node = self._outCardPos3, bRight = true, bHalf = false},
        {node = self._handCardPos3, bRight = true, bHalf = false},
        {node = self._actionPos1, bRight = false, bHalf = false},
        {node = self._actionPos3, bRight = true, bHalf = false}
    }
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

----------------------------------------
--创建玩家手牌
----------------------------------------
function GameCardLayer:createHandCardArea(localSeat)
    if self._playerCount == 5 and localSeat == CardLayerConfig.LocalSeat.Top then
        CardLayerConfig.HandCardConf[CardLayerConfig.LocalSeat.Top].cardAddDirectionX = CardLayerConfig.CardAddDirectionX.Right
    end 
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

----------------------------------------
--设置手牌数据
--bShowAni表示是否显示动画效果（发牌）
----------------------------------------
function GameCardLayer:setHandCards(localSeat, cardIDs, bShowAni)
    if not self._tHandCardArea[localSeat] then
        self:createHandCardArea(localSeat)
    end
    local sizeType = Card.SIZETYPE.NORMAL
    if CF.settingData and CF.settingData:getCardBackStyle() == 2 then
        sizeType = Card.SIZETYPE.BIG
    end
    if localSeat ~= CardLayerConfig.LocalSeat.Bottom and self._playerCount == 5 then 
        sizeType = Card.SIZETYPE.SMALL
        bShowAni = false
    end 
    local pos
    if localSeat == CardLayerConfig.LocalSeat.Bottom and sizeType == Card.SIZETYPE.BIG then
        self._tHandCardArea[localSeat]:setPositionY(20)
    else
        self._tHandCardArea[localSeat]:setPositionY(0)
    end
    local scale = (sizeType == Card.SIZETYPE.BIG) and CardLayerConfig.HandCardScaleBig[localSeat] or CardLayerConfig.HandCardScale[localSeat]
    self._tHandCardArea[localSeat]:setScale(scale)
    local cardStyle = 0
    if CF.settingData and CF.settingData:getCardBackStyle() == CF.settingData.tagInfo.BACK_TYPE.index then
        cardStyle = XH.XG_CARD_STYLE
    end
    self._tHandCardArea[localSeat]:setShowCards(cardIDs, bShowAni, sizeType, nil, cardStyle)
end

function GameCardLayer:addHandCards(localSeat, cardIDs,indexs, bShowAni)
    if not self._tHandCardArea[localSeat] then
        self:createHandCardArea(localSeat)
    end
    local sizeType = Card.SIZETYPE.NORMAL
    if CF.settingData and CF.settingData:getCardBackStyle() == 2 then
        sizeType = Card.SIZETYPE.BIG
    end
    if localSeat ~= CardLayerConfig.LocalSeat.Bottom and self._playerCount == 5 then 
        sizeType = Card.SIZETYPE.SMALL
        bShowAni = false
    end 
    local pos
    if localSeat == CardLayerConfig.LocalSeat.Bottom and sizeType == Card.SIZETYPE.BIG then
        self._tHandCardArea[localSeat]:setPositionY(20)
    else
        self._tHandCardArea[localSeat]:setPositionY(0)
    end
    local scale = (sizeType == Card.SIZETYPE.BIG) and CardLayerConfig.HandCardScaleBig[localSeat] or CardLayerConfig.HandCardScale[localSeat]
    self._tHandCardArea[localSeat]:setScale(scale)
    local cardStyle = 0
    if CF.settingData and CF.settingData:getCardBackStyle() == CF.settingData.tagInfo.BACK_TYPE.index then
        cardStyle = XH.XG_CARD_STYLE
    end
    self._tHandCardArea[localSeat]:addShowCards(cardIDs,indexs, bShowAni, sizeType, cardStyle)
end

local showCountInUI = 54
local targetCountInUI = 54
local currentShowCardIndex = 54 / 2


function GameCardLayer:setTotalCardsCount(count)
    totalCardsCount = count
end 

local firstDivideCardsNumberPosY = nil
function GameCardLayer:setLeftCardsCount(count,targetCount)
    showCountInUI = count
    targetCountInUI = targetCount
    currentShowCardIndex = showCountInUI / 2
    for i = 1, totalCardsCount / 2 do
        if self["_divideCards" .. i] then 
            if (totalCardsCount / 2 - i + 1) <= math.ceil(currentShowCardIndex) then 
                self["_divideCards" .. i]:setVisible(true)
            else 
                self["_divideCards" .. i]:setVisible(false)
            end 
        end 
    end

    if firstDivideCardsNumberPosY ~= nil then 
        self._leftCardsCount:setPositionY(firstDivideCardsNumberPosY - (totalCardsCount - showCountInUI) / 2 * 3)
    else 
        firstDivideCardsNumberPosY = self._leftCardsCount:getPositionY()
    end 
    if showCountInUI == 0 then 
        self._leftCardsCount:setText("")
    else 
        self._leftCardsCount:setText(showCountInUI)
    end 
    

end 


function GameCardLayer:resetDivideCards()
    self:setLeftCardsCount(totalCardsCount,totalCardsCount)
end
---------

function GameCardLayer:divideCardsAni(localSeat,divideCount)
    if CardLayerConfig.isFirstDivide then
        CardLayerConfig.distanceDivideCardsTime = 0.12
    else
        CardLayerConfig.distanceDivideCardsTime = 0.3
    end
    local function moveNodeToHandCardPos(sourceNode,targetNode)
        sourceNode:setPosition(cc.p(0, 0))
        sourceNode:setVisible(true)
        -- 获取目标节点 _moveCardPos 的世界坐标
        local handCardPosWorldPos = targetNode:convertToWorldSpace(cc.p(0, 0))
    
        -- 获取要移动的节点 sourceNode 的当前世界坐标
        local sourceNodeCurrentWorldPos = sourceNode:convertToWorldSpace(cc.p(sourceNode:getContentSize().width / 2, sourceNode:getContentSize().height / 2))
    
        -- 计算从当前位置到目标位置的偏移量
        local offsetX = handCardPosWorldPos.x - sourceNodeCurrentWorldPos.x
        local offsetY = handCardPosWorldPos.y - sourceNodeCurrentWorldPos.y
        if localSeat == CardLayerConfig.LocalSeat.Bottom then
            offsetY = offsetY + 200
        end
    
        -- 创建一个移动动作，使节点移动到目标位置
        local moveAction = cc.MoveBy:create(CardLayerConfig.distanceDivideCardsTime, cc.p(offsetX, offsetY))
    
        -- 创建一个回调函数，用于在移动动作完成后隐藏节点
        local function onMoveComplete()
            sourceNode:setVisible(false)
        end

        -- 使用序列动作将延时动作、移动动作和隐藏节点的回调动作组合起来
        local seqAction = cc.Sequence:create(moveAction, cc.CallFunc:create(onMoveComplete))

        -- 让节点执行组合后的动作
        sourceNode:runAction(seqAction)
    end

    for i = 1, divideCount do
        local children = self._divideCardsAniStartNode:getChildren()
        local aniChild = nil
        for _, child in pairs(children) do
            if child:getNumberOfRunningActions() == 0 then 
                aniChild = child
                break
            end 
        end
        if aniChild == nil then 
            aniChild = self._divideCards1:clone()
            self._divideCardsAniStartNode:addChild(aniChild)
            aniChild:setAnchorPoint(cc.p(0.5, 0.5))
        end 
        local changeCardModule = CF.game:getModule("ChangeCard")
        local isChanged = changeCardModule and changeCardModule:isChangeCardSuccess()
        local textureName = CardLayerDefine.KW_UI_CARD_BACK_NAME
        if isChanged then
            textureName = CardLayerDefine.KW_UI_CHANGE_CARD_BACK_NAME
        else
            if CF.settingData and CF.settingData:getCardBackStyle() == CF.settingData.tagInfo.BACK_TYPE.index then
                textureName = CardLayerDefine.KW_UI_XG_CARD_BACK_NAME
            end
        end
        aniChild:loadTexture(textureName, ccui.TextureResType.plistType)
        aniChild:setVisible(false)
        local totalTime = CardLayerConfig.distanceDivideCardsTime * divideCount--(showCountInUI - targetCountInUI) * 0.05 
        local delayTime = (i - 1) * totalTime / divideCount
        aniChild:runAction(cc.Sequence:create(cc.DelayTime:create( delayTime),cc.CallFunc:create(function ()
            moveNodeToHandCardPos(aniChild,self["_moveCardPos" .. localSeat])
        end)))
    end
end 



function GameCardLayer:reduceCardsPile(reduceCount,isAni)
    if isAni then 
        local function dodo ()
            if showCountInUI == targetCountInUI then 
                self._divideCardsPanel:stopAllActions()
                return 
            end 
            if showCountInUI % 2 == 0 then 
            else
                local cardIndex = math.floor( (totalCardsCount - showCountInUI) / 2) + 1
                if self["_divideCards" .. cardIndex] then 
                    self["_divideCards" .. cardIndex]:setVisible(false)
                end 
                currentShowCardIndex = cardIndex + 1
                if currentShowCardIndex > 54 / 2 then 
                    currentShowCardIndex = 0
                end 
            end 
            showCountInUI = showCountInUI - 1
            
            self._leftCardsCount:setText(showCountInUI)
            self._leftCardsCount:setPositionY(firstDivideCardsNumberPosY - (totalCardsCount - showCountInUI) / 2 * 3)
            
        end

        self._divideCardsPanel:setVisible(true)
        self._divideCardsPanel:stopAllActions()
        targetCountInUI = targetCountInUI - reduceCount
        local distance = showCountInUI - targetCountInUI
        local sequence = cc.Sequence:create(cc.CallFunc:create(dodo),cc.CallFunc:create(dodo),cc.DelayTime:create( reduceCount * CardLayerConfig.distanceDivideCardsTime * 2/ distance))
        local action = cc.RepeatForever:create(sequence)
        self._divideCardsPanel:runAction(action)
    else 
        self:setLeftCardsCount(showCountInUI - reduceCount,targetCountInUI - reduceCount)
    end
end 
 -------------------------------
--设置打出牌数据
----------------------------------------
function GameCardLayer:setOutCards(localSeat, cardIDs)
    if not self._tOutCardArea[localSeat] then
        self:createOutCardArea(localSeat)
    end
    local sizeType = Card.SIZETYPE.NORMAL
    if CF.settingData and CF.settingData:getCardBackStyle() == 2 then
        sizeType = Card.SIZETYPE.BIG
    end
    self:setCardAreaNormalConf(self._tOutCardArea[localSeat], (sizeType == Card.SIZETYPE.BIG) and CardLayerConfig.OutCardConfBig[localSeat] or CardLayerConfig.OutCardConf[localSeat])
    local cardStyle = 0
    if CF.settingData and CF.settingData:getCardBackStyle() == CF.settingData.tagInfo.BACK_TYPE.index then
        cardStyle = XH.XG_CARD_STYLE
    end
    self._tOutCardArea[localSeat]:setShowCards(cardIDs, false, sizeType, nil, cardStyle)
end

function GameCardLayer:showCardsPanel(bShow)
    self._divideCardsPanel:setVisible(bShow)
end

function GameCardLayer:playBombAction(localSeat)
    local actionPanel = self["_actionPos" .. localSeat]
    if not actionPanel then
        return
    end
    AnimationManager.playBombJsonArmature(actionPanel)
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
    if cardType > CardEnum.CARDS_TYPE.CT_3_JUNKO_0_EXCESS_1_CONTINUOUS then
        self:playBombAction(localSeat)
    elseif cardType >= CardEnum.CARDS_TYPE.CT_2_JUNKO_0_EXCESS_2_CONTINUOUS and cardType <= CardEnum.CARDS_TYPE.CT_2_JUNKO_0_EXCESS_12_CONTINUOUS then
        self:playShunAction(localSeat, 2)
    elseif cardType >= CardEnum.CARDS_TYPE.CT_1_JUNKO_0_EXCESS_3_CONTINUOUS and cardType <= CardEnum.CARDS_TYPE.CT_1_JUNKO_0_EXCESS_12_CONTINUOUS then
        self:playShunAction(localSeat, 1)
    end
end

-- 判断手牌是否都是可点击状态
function GameCardLayer:canTouchCard(localSeat)
    --只有自己的手牌才能点击
    if localSeat ~= CardLayerConfig.LocalSeat.Bottom or not self._tHandCardArea[localSeat] then
        return false
    end
    return self._tHandCardArea[localSeat]:canTouchCard()
end

function GameCardLayer:onEventCardStyle()
    local changeStyle = 0
    if CF.settingData and CF.settingData:getCardBackStyle() == CF.settingData.tagInfo.BACK_TYPE.index then
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
    self:refreshCards()
end

return GameCardLayer
