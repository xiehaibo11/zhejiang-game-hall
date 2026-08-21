----create by lcy 2017.12.1
local CURRENT_MOUDLE_NAME = ...
local UICardsLayerBase = import("GameCommon.Code.CardLayer.CardLayerBase.UICardsLayerInterface")
local UICardsLayer = class("UICardsLayer",UICardsLayerBase)
-- local UICardsArea = import("GameCommon.Code.CardLayer.CardLayerBase.UICardsArea")
local UICardsArea = import("LiangBang.Code.CardLayer.CardAreaLiangBang.UICardsArea")

local KW_UI_GAMEAREA_OPEN_CARD = "KW_UI_GAMEAREA_OPEN_CARD_"
local firstOpenCardIndex = 1
local secondOpenCardIndex = 2
local onlyOpenCardIndex = 3

local KW_OPEN_CARD_POS = "KW_OPEN_CARD_POS"
local KW_FLY_CARD = "KW_FLY_CARD_"
local KW_UI_GAMEAREA_HAND_CARD = "KW_UI_GAMEAREA_HAND_CARD"
local KW_UI_GAMEAREA_OUT_CARD = "KW_UI_GAMEAREA_OUT_CARD"
local KW_UI_GAMEAREA_BOMB_CARD = "KW_UI_GAMEAREA_BOMB_CARD"
local KW_UI_BOMB_CARD = "KW_UI_BOMB_CARD_"
local KW_TEXT_CATD_TYPE = "KW_TEXT_CATD_TYPE"
local KW_TEXT_CATD_SCORE = "KW_TEXT_CATD_SCORE"
local KW_TEXT_CARD_SCORE_NEW = 'KW_TEXT_CARD_SCORE_NEW'
local KW_PANEL_BG = "KW_PANEL_BG"
local KW_PANEL_CARD = 'KW_PANEL_CARD'
local KW_IMG_SAME_COLOR_BG = 'KW_IMG_SAME_COLOR_BG'
local KW_STABLE_BOMB_IMG_BG = 'KW_STABLE_BOMB_IMG_BG'
local KW_TEXT_STABLE_SCORE = 'KW_TEXT_STABLE_SCORE'
local KW_IMG_COUNT_NUM = "KW_IMG_COUNT_NUM"
local KW_FFZ_FONT_FILE = 'LiangBang/Fonts/ziti-export.fnt'  --新的字体
-- local KW_FFZ_FONT_FILE = 'LiangBang/Fonts/yhdt_end_number1-ffz.fnt'
local CARD_IMG_COUNT_NAME = 'cardImgCountName'
local CARD_BOOM_MASK_NAME = 'cardBoomMaskName'  -- 炸弹遮罩

function UICardsLayer:setOpenCards(localseat,index,cards)
    if  self._openCards[localseat][index] then
        self._openCards[localseat][index]:destroyCards()
    end
    
    local openCard = self._adaptOpenCardNode[localseat]:getChildByName(KW_UI_GAMEAREA_OPEN_CARD .. index)
    if openCard then
        self._openCards[localseat][index] = UICardsArea:new()
        self._openCards[localseat][index]:init(openCard)
        self._openCards[localseat][index]:setCanTouch(self.OpenCard.touchEnable)
        self._openCards[localseat][index]:setCheckDistance(self.OpenCard.checkDistance)
        self._openCards[localseat][index]:setMaxCardsCount(self.OpenCard.maxCardsCount)
        self._openCards[localseat][index]:setCardsDistance(self.OpenCard.cardsDistanceX,self.OpenCard.cardsDistanceY)
        self._openCards[localseat][index]:setArrangementWay(self.OpenCard.arrangementWay)
        self._openCards[localseat][index]:setCardsIncreaseDirection(self.OpenCard.cardIncreaseDirectionX,self.OpenCard.cardIncreaseDirectionY)
        self._openCards[localseat][index]:setStartPos(self.OpenCard.startPosX,self.OpenCard.startPosY)
        self._openCards[localseat][index]:setCards(cards)
        self._openCards[localseat][index]:arrangeCards()
    end
end

function UICardsLayer:clearOpenCards(localSeat)
    for i = firstOpenCardIndex,onlyOpenCardIndex do
        local firstOpenCardPanel = ccui.Helper:seekWidgetByName(self._adaptOpenCardNode[localSeat], KW_UI_GAMEAREA_OPEN_CARD .. i)
        if firstOpenCardPanel then
            if  self._openCards[localSeat][i] then
                self._openCards[localSeat][i]:destroyCards()
            end
        end
    end
end

function UICardsLayer:setFlyCards(cards,index)
    if  self._flyCard[index] then
        self._flyCard[index]:destroyCards()
    end

    local flyCard = ccui.Helper:seekWidgetByName(self._rootNode, KW_FLY_CARD .. index)
    if flyCard then
        self._flyCard[index] = UICardsArea:new()
        self._flyCard[index]:init(flyCard)
        self._flyCard[index]:setCanTouch(self.FlyCard.touchEnable)
        self._flyCard[index]:setCheckDistance(self.FlyCard.checkDistance)
        self._flyCard[index]:setMaxCardsCount(self.FlyCard.maxCardsCount)
        self._flyCard[index]:setCardsDistance(self.FlyCard.cardsDistanceX,self.FlyCard.cardsDistanceY)
        self._flyCard[index]:setArrangementWay(self.FlyCard.arrangementWay)
        self._flyCard[index]:setCardsIncreaseDirection(self.FlyCard.cardIncreaseDirectionX,self.FlyCard.cardIncreaseDirectionY)
        self._flyCard[index]:setStartPos(self.FlyCard.startPosX,self.FlyCard.startPosY)
        self._flyCard[index]:setCards(cards)
        self._flyCard[index]:arrangeCards()
    end
end

function UICardsLayer:clearFlyCards(index)
    local flyCard = ccui.Helper:seekWidgetByName(self._rootNode, KW_FLY_CARD .. index)
    if flyCard == nil then
        return
    end
    if  self._flyCard[index] then
        self._flyCard[index]:destroyCards()
    end
end

function UICardsLayer:showOpenCardAfterSwapSeat(bigLocalSeat,smallLocalSeat,openCardID,callBack)
    if bigLocalSeat ~= smallLocalSeat  then
        self:setOpenCards(smallLocalSeat,onlyOpenCardIndex,openCardID)
        local smallOpenCard = self._adaptOpenCardNode[smallLocalSeat]:getChildByName(KW_UI_GAMEAREA_OPEN_CARD ..onlyOpenCardIndex)
        if smallOpenCard then
            local showNode = cc.CallFunc:create(function()
                smallOpenCard:setOpacity(255)
                -- smallOpenCard:setScale(0.75,0.75)
            end)
            smallOpenCard:runAction(cc.Sequence:create(showNode,cc.DelayTime:create(1),cc.FadeOut:create(0.2)))
        end
        
        self:setOpenCards(bigLocalSeat,onlyOpenCardIndex,openCardID)
        local bigOpenCard = self._adaptOpenCardNode[bigLocalSeat]:getChildByName(KW_UI_GAMEAREA_OPEN_CARD ..onlyOpenCardIndex)
        if bigOpenCard then
            local showNode = cc.CallFunc:create(function()
                bigOpenCard:setOpacity(255)
                bigOpenCard:setScale(1,1)
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

function UICardsLayer:showOpenCardAni(openCardID,callBack)
    local openCard = ccui.Helper:seekWidgetByName(self._rootNode, KW_FLY_CARD .. firstOpenCardIndex)
    if openCard == nil then
        return
    end
    openCard:setPosition(cc.p(0,0))
    self:setFlyCards(openCardID,firstOpenCardIndex)
    local delayTimeBeforeShow = cc.DelayTime:create(0.7)
    local showCard = cc.CallFunc:create(function()
        openCard:setOpacity(0)
        openCard:setVisible(true)
    end)
    local fadeInTime = 0.3
    local fadeIn = cc.FadeIn:create(fadeInTime)
    local scaleToBig = cc.ScaleBy:create(fadeInTime,1.3,1.3)
    local spawnScaleAndFadeIn = cc.Spawn:create(fadeIn,scaleToBig)
    local scaleToNormal = cc.ScaleBy:create(0.1,0.75,0.75)
    local delayTimeAfterShow = cc.DelayTime:create(0.4)
    local allAction = cc.Sequence:create(delayTimeBeforeShow,showCard,spawnScaleAndFadeIn,scaleToNormal,delayTimeAfterShow)
    if callBack then
        local doCallBack = cc.CallFunc:create(callBack)
        allAction = cc.Sequence:create(delayTimeBeforeShow,showCard,spawnScaleAndFadeIn,scaleToNormal,delayTimeAfterShow,doCallBack)
    end
    openCard:runAction(allAction)
end

function UICardsLayer:showSepCardsAni(firstLocalSeat,secondLocalSeat,openCardID,callBack)

    local openCardStartPos = ccui.Helper:seekWidgetByName(self._rootNode, KW_OPEN_CARD_POS)
    if openCardStartPos == nil then
        return
    end
    local firstIndex = onlyOpenCardIndex
    local secondIndex = onlyOpenCardIndex
    if firstLocalSeat == secondLocalSeat then
        firstIndex = firstOpenCardIndex
        secondIndex = secondOpenCardIndex
    end
    
    local firstTarget = ccui.Helper:seekWidgetByName(self._adaptOpenCardNode[firstLocalSeat], KW_UI_GAMEAREA_OPEN_CARD .. firstIndex)
    local firstTargetPosToNode = cc.p(0,0)
    if firstTarget then
        local firstTargetPos = firstTarget:convertToWorldSpace(cc.p(0,0))
        firstTargetPosToNode = openCardStartPos:convertToNodeSpace(firstTargetPos)
    end
    
    local secondTarget = ccui.Helper:seekWidgetByName(self._adaptOpenCardNode[secondLocalSeat], KW_UI_GAMEAREA_OPEN_CARD .. secondIndex)
    local secondTargetPosToNode = cc.p(0,0)
    if secondTarget then
        local secondTargetPos = secondTarget:convertToWorldSpace(cc.p(0,0))
        secondTargetPosToNode = openCardStartPos:convertToNodeSpace(secondTargetPos)
    end
    
    local function secondOpenCardAni()
        local secondFlyNode = ccui.Helper:seekWidgetByName(self._rootNode, KW_FLY_CARD .. secondOpenCardIndex)
        if secondFlyNode then
            local showCard = cc.CallFunc:create(function()
                secondFlyNode:setOpacity(0)
                secondFlyNode:setVisible(true)
                secondFlyNode:setPosition(cc.p(0,0))
            end)
            local setPosToTarget = cc.CallFunc:create(function()
                secondFlyNode:setPosition(secondTargetPosToNode)
                -- secondFlyNode:setScaleX(openCardStartPos:getScaleX() * 0.75)
                -- secondFlyNode:setScaleY(openCardStartPos:getScaleY() * 0.75)
            end)
            local fadeInTime = 0.3
            local fadeIn = cc.FadeIn:create(fadeInTime)
            local scaleToBig = cc.ScaleTo:create(fadeInTime,1.3,1.3)
            local spawnScaleAndFadeIn = cc.Spawn:create(fadeIn,scaleToBig)
            -- local scaleToNormal = cc.ScaleBy:create(0.1,0.75,0.75)
            local scaleToNormal = cc.ScaleTo:create(0.1,1.0,1.0)
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
        local firstFlyNode = ccui.Helper:seekWidgetByName(self._rootNode, KW_FLY_CARD .. firstOpenCardIndex)
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
    
    firstOpenCardAni()
end

--设置手牌
function UICardsLayer:setHandCards(localseat,cards,aniType)
    if  self._playerCards[localseat] then
        self._playerCards[localseat]:destroyCards()
    end
    local handCard = self._adaptCardNode[localseat]:getChildByName(KW_UI_GAMEAREA_HAND_CARD)
    if handCard then
        self._playerCards[localseat] = UICardsArea:new()
        self._playerCards[localseat]:init(handCard)
        self._playerCards[localseat]:setCanTouch(self.HandCards[localseat].touchEnable)
        self._playerCards[localseat]:setCheckDistance(self.HandCards[localseat].checkDistance)
        self._playerCards[localseat]:setMaxCardsCount(self.HandCards[localseat].maxCardsCount)
        local distanceX = self:getDistanceX(localseat,#cards)
        self._playerCards[localseat]:setCardsDistance(distanceX,self.HandCards[localseat].cardsDistanceY)
        self._playerCards[localseat]:setArrangementWay(self.HandCards[localseat].arrangementWay)
        self._playerCards[localseat]:setCardsIncreaseDirection(self.HandCards[localseat].cardIncreaseDirectionX,self.HandCards[localseat].cardIncreaseDirectionY)
        self._playerCards[localseat]:setStartPos(self.HandCards[localseat].startPosX,self.HandCards[localseat].startPosY)
        self._playerCards[localseat]:setCards(cards,aniType)
        if localseat == 2 then
            if aniType == 1 or aniType == 2 then
                local delayTime = cc.DelayTime:create(1.0)
                local cfk = cc.CallFunc:create(function ()
                    self:setCardNum(localseat)
                end)
                local seq = cc.Sequence:create(delayTime,cfk)
                handCard:stopAllActions()
                handCard:runAction(seq)
            else
                self:setCardNum(localseat)
            end
        end
        if aniType == 0 or aniType == nil then
            self._playerCards[localseat]:arrangeCards()
        end
    end
end

--删除手牌
function UICardsLayer:deleteHandCards(localSeat,allCardsID,delCardsIDs,delCardsIndexes)
    if  self._playerCards[localSeat] then
        local nowDistanceX = self:getDistanceX(localSeat,#allCardsID - #delCardsIDs)
        self._playerCards[localSeat]:setCardsDistance(nowDistanceX,self.HandCards[localSeat].cardsDistanceY)
        self._playerCards[localSeat]:deleteCards(delCardsIDs,delCardsIndexes)
        if localSeat == 2 then
            self:setCardNum(localSeat)
        end
    end
end

--设置出牌
function UICardsLayer:setOutCards(localseat,cards)
    if  self._playerOutCards[localseat] then
        self._playerOutCards[localseat]:destroyCards()
    end
    local outCard = self._adaptCardNode[localseat]:getChildByName(KW_UI_GAMEAREA_OUT_CARD)
    if outCard then
        self._playerOutCards[localseat] = UICardsArea:new()
        self._playerOutCards[localseat]:init(outCard)
        self._playerOutCards[localseat]:setCanTouch(self.OutCards[localseat].touchEnable)
        self._playerOutCards[localseat]:setCheckDistance(self.OutCards[localseat].checkDistance)
        self._playerOutCards[localseat]:setMaxCardsCount(self.OutCards[localseat].maxCardsCount)
        self._playerOutCards[localseat]:setCardsDistance(self.OutCards[localseat].cardsDistanceX,self.OutCards[localseat].cardsDistanceY)
        self._playerOutCards[localseat]:setArrangementWay(self.OutCards[localseat].arrangementWay)
        self._playerOutCards[localseat]:setCardsIncreaseDirection(self.OutCards[localseat].cardIncreaseDirectionX,self.OutCards[localseat].cardIncreaseDirectionY)
        self._playerOutCards[localseat]:setStartPos(self.OutCards[localseat].startPosX,self.OutCards[localseat].startPosY)
        self._playerOutCards[localseat]:setCards(cards)
        self._playerOutCards[localseat]:arrangeCards()
    end
end

--显示翻炸
function UICardsLayer:setBombCards(localseat,cards,index)
    local tmpSeat = tonumber(localseat .. index)
    print('hcc>>tmpSeat:' .. tostring(tmpSeat))
    if not tmpSeat then return end
    if  self._playerBombCards[tmpSeat] then
        self._playerBombCards[tmpSeat]:destroyCards()
    end
    local bombCard = self._adaptCardNode[localseat]:getChildByName(KW_UI_GAMEAREA_BOMB_CARD)
    if bombCard then
        local panelBombCard = bombCard:getChildByName(KW_UI_BOMB_CARD .. index)
        if panelBombCard then
            local panelCard = panelBombCard:getChildByName(KW_PANEL_CARD)
            if panelCard then
                self._playerBombCards[tmpSeat] = UICardsArea:new()
                self._playerBombCards[tmpSeat]:init(panelCard)
                self._playerBombCards[tmpSeat]:setCanTouch(self.BombCards[localseat].touchEnable)
                self._playerBombCards[tmpSeat]:setCheckDistance(self.BombCards[localseat].checkDistance)
                self._playerBombCards[tmpSeat]:setMaxCardsCount(self.BombCards[localseat].maxCardsCount)
                self._playerBombCards[tmpSeat]:setCardsDistance(self.BombCards[localseat].cardsDistanceX,self.BombCards[localseat].cardsDistanceY)
                self._playerBombCards[tmpSeat]:setArrangementWay(self.BombCards[localseat].arrangementWay)
                self._playerBombCards[tmpSeat]:setCardsIncreaseDirection(self.BombCards[localseat].cardIncreaseDirectionX,self.BombCards[localseat].cardIncreaseDirectionY)
                self._playerBombCards[tmpSeat]:setStartPos(self.BombCards[localseat].startPosX,self.BombCards[localseat].startPosY)
                self._playerBombCards[tmpSeat]:setCards(cards)
                self._playerBombCards[tmpSeat]:arrangeCards()
                local panelBg = ccui.Helper:seekWidgetByName(panelBombCard,KW_PANEL_BG)
                 if panelBg then
                    panelBg:setVisible(true)
                    Game.UIFunction.setText(panelBg,KW_TEXT_CATD_TYPE,'')
                    Game.UIFunction.setText(panelBg,KW_TEXT_CATD_SCORE,'')
                end
            end
        end
    end
end

function UICardsLayer:setBombCardsNew(localseat,cards,index)
    -- local UICardsArea  = import('.UICardsArea',CURRENT_MOUDLE_NAME)
    local cardsArea = require('LiangBang/Code/CardLayer/UICardsArea')
    local tmpSeat = tonumber(localseat .. index)
    if not tmpSeat then return end
    if  self._playerBombCards[tmpSeat] then
        self._playerBombCards[tmpSeat]:destroyCards()
    end
    local bombCard = self._adaptCardNode[localseat]:getChildByName(KW_UI_GAMEAREA_BOMB_CARD)
    if bombCard then
        local panelBombCard = bombCard:getChildByName(KW_UI_BOMB_CARD .. index)
        if panelBombCard then
            local panelCard = panelBombCard:getChildByName(KW_PANEL_CARD)
            if panelCard then
                -- panelCard:setScale(1.3)
                panelCard:setVisible(true)
                self._playerBombCards[tmpSeat] = cardsArea:new()
                self._playerBombCards[tmpSeat]:init(panelCard)
                self._playerBombCards[tmpSeat]:setCanTouch(self.BombCardsNew[localseat].touchEnable)
                self._playerBombCards[tmpSeat]:setCheckDistance(self.BombCardsNew[localseat].checkDistance)
                self._playerBombCards[tmpSeat]:setMaxCardsCount(self.BombCardsNew[localseat].maxCardsCount)
                self._playerBombCards[tmpSeat]:setCardsDistance(self.BombCardsNew[localseat].cardsDistanceX,self.BombCardsNew[localseat].cardsDistanceY)
                self._playerBombCards[tmpSeat]:setArrangementWay(self.BombCardsNew[localseat].arrangementWay)
                self._playerBombCards[tmpSeat]:setCardsIncreaseDirection(self.BombCardsNew[localseat].cardIncreaseDirectionX,self.BombCardsNew[localseat].cardIncreaseDirectionY)
                self._playerBombCards[tmpSeat]:setStartPos(self.BombCardsNew[localseat].startPosX,self.BombCardsNew[localseat].startPosY)
                self._playerBombCards[tmpSeat]:setCards(cards)
                self._playerBombCards[tmpSeat]:arrangeCards()
                local panelBg = ccui.Helper:seekWidgetByName(panelBombCard,KW_PANEL_BG)
                 if panelBg then
                    panelBg:setVisible(true)
                    Game.UIFunction.setText(panelBg,KW_TEXT_CATD_TYPE,'')
                    Game.UIFunction.setText(panelBg,KW_TEXT_CATD_SCORE,'')
                end
            end
        end
    end
end

--牌型
function UICardsLayer:setBombCardType(localseat,typeEnum,index,bAni)
    if self._adaptCardNode[localseat] then
        local bombCard = self._adaptCardNode[localseat]:getChildByName(KW_UI_GAMEAREA_BOMB_CARD)
        if bombCard then
            local panelBombCard = bombCard:getChildByName(KW_UI_BOMB_CARD .. index)
            if panelBombCard then
                Game.UIFunction.setVisible(panelBombCard,KW_TEXT_CATD_TYPE,true)
                Game.UIFunction.setText(panelBombCard,KW_TEXT_CATD_TYPE,tostring(self:getCardTypeChineseByEnum(typeEnum)))
                if bAni == true then
                    local textNode = ccui.Helper:seekWidgetByName(panelBombCard,KW_TEXT_CATD_TYPE)
                    if textNode then
                        textNode:setScale(5)
                        local scaleTo = cc.ScaleTo:create(0.15,1.0)
                        textNode:runAction(scaleTo)
                    end
                end
            end
        end
    end
end
--分数
function UICardsLayer:setBombCardScore(localseat, score, index, bAni)
    score = tonumber(score) or 0
    if score >= 0 then
        score = '+' .. tostring(score)
    else
        score = '-' .. tostring(score)
    end
    if self._adaptCardNode[localseat] then
        local bombCard = self._adaptCardNode[localseat]:getChildByName(KW_UI_GAMEAREA_BOMB_CARD)
        if bombCard then
            local panelBombCard = bombCard:getChildByName(KW_UI_BOMB_CARD .. index)
            if panelBombCard then
                Game.UIFunction.setVisible(panelBombCard,KW_TEXT_CATD_SCORE,false)
                Game.UIFunction.setText(panelBombCard,KW_TEXT_CATD_SCORE,score)
                local textNode = ccui.Helper:seekWidgetByName(panelBombCard,KW_TEXT_CATD_SCORE)
                local textNodeNew = panelBombCard:getChildByName(KW_TEXT_CARD_SCORE_NEW)
                if textNodeNew then
                    textNodeNew:setVisible(true)
                    textNodeNew:setString(score)
                else
                    textNodeNew =  display.newBMFontLabel({
                                text = score,
                                font = KW_FFZ_FONT_FILE,
                                textAlign = cc.TEXT_ALIGNMENT_LEFT,
                            })
                    if textNodeNew and textNode then
                        textNodeNew:setName(KW_TEXT_CARD_SCORE_NEW)
                        panelBombCard:addChild(textNodeNew)
                        textNodeNew:setPosition(cc.p(textNode:getPositionX() + 32 , textNode:getPositionY() - 18))
                        textNodeNew:setAnchorPoint(cc.p(0, 0.5))
                        -- textNodeNew:setScale(1.2)
                    end
                end

                if bAni == true then
                    if textNodeNew then
                        local scaleTo = cc.ScaleTo:create(0.2,1.5)
                        local revert = cc.ScaleTo:create(0.2,1.0)
                        local seq = cc.Sequence:create(scaleTo,revert)
                        textNodeNew:runAction(seq)
                    end
                end
            end
        end
    end
end

--清除翻炸牌
function UICardsLayer:clearBombCards()
    for seat = 1 , Game.FrameworkFunction.getMaxPlayer() do
        for index = 1 , 7 do
            local tmpSeat = tonumber(seat .. index)
            if  self._playerBombCards[tmpSeat] then
                self._playerBombCards[tmpSeat]:destroyCards()
            end
            local bombCard = ccui.Helper:seekWidgetByName(self._adaptCardNode[seat], KW_UI_GAMEAREA_BOMB_CARD)
            if bombCard then
                local panelBombCard = bombCard:getChildByName(KW_UI_BOMB_CARD .. index)
                if panelBombCard then
                    local panelBg = ccui.Helper:seekWidgetByName(panelBombCard,KW_PANEL_BG)
                    if panelBg then
                        panelBg:setVisible(false)
                        Game.UIFunction.setText(panelBg,KW_TEXT_CATD_TYPE,'')
                        Game.UIFunction.setText(panelBg,KW_TEXT_CATD_SCORE,'')
                    end
                    local textNodeNew = panelBombCard:getChildByName(KW_TEXT_CARD_SCORE_NEW)
                    if textNodeNew then
                        textNodeNew:setVisible(false)
                    end
                end
            end
        end
    end
end

function UICardsLayer:getCardTypeChineseByEnum(typeEnum)
    return self.CardTypeChinese[typeEnum]
end
--同色标签
function UICardsLayer:setBombCardSameColor(localseat,isSameColor,index)
    if not isSameColor then return end
    local tmpSeat = tonumber(localseat .. index)
    if self._playerBombCards[tmpSeat] then
        local cards = self._playerBombCards[tmpSeat]._cards
        if #cards > 0 then
            local firstCard = cards[#cards]
            local sameColorBgImg = ccui.Helper:seekWidgetByName(self._rootNode,KW_IMG_SAME_COLOR_BG)
            local cloneNode = sameColorBgImg:clone()
            firstCard:addChild(cloneNode)
            cloneNode:setPosition(cc.p(-10,55))
            cloneNode:setScaleX(1.8)
        end
    end
end

function UICardsLayer:setCardNum(localSeat)
     if not self._playerCards[localSeat] then return end
     local CardAlgorithm = import("..GameAlgorithmTZ.CardAlgorithm",CURRENT_MOUDLE_NAME)
     local cardNodes = self._playerCards[localSeat]._cards

     if #cardNodes > 0 then
        self:clearCardNum(localSeat)
     end
     
     function addNumNode(cardNode,count)
        if cardNode then
            local oldImg = cardNode:getChildByName(CARD_IMG_COUNT_NAME)
            if oldImg then
                oldImg:loadTexture(string.format("img_text_num_lb_%d.png",count),ccui.TextureResType.plistType)
                oldImg:setVisible(true)
            else
                local numbg = ccui.Helper:seekWidgetByName(self._rootNode,KW_IMG_COUNT_NUM)
                if numbg then
                    local cloneNode = numbg:clone()
                    cloneNode:setAnchorPoint(0,0)
                    cardNode:addChild(cloneNode)
                    cloneNode:setPosition(cc.p(0,2))
                    cloneNode:setName(CARD_IMG_COUNT_NAME)
                    cloneNode:loadTexture(string.format("img_text_num_lb_%d.png",count),ccui.TextureResType.plistType)
                end
            end
        end
     end

    function addBoomNode(cardNode, status)
        if cardNode then
            local oldImg = cardNode:getChildByName(CARD_BOOM_MASK_NAME)
            if not oldImg then
                local size = cardNode:getContentSize()
                oldImg = ccui.Scale9Sprite:create("LiangBang/CardLayer/Default/Button_Normal.png", cc.rect(10, 10, 10, 10))
                oldImg:setContentSize(size)
                oldImg:setAnchorPoint(0,0)
                cardNode:addChild(oldImg)
                oldImg:setName(CARD_BOOM_MASK_NAME)
                oldImg:setOpacity(77)
            end
            if status == 0 then
                oldImg:setVisible(false)
            elseif status == 1 then
                oldImg:setVisible(true)
                oldImg:setColor(cc.c3b(215, 124, 92))
            elseif status == 2 then
                oldImg:setVisible(true)
                oldImg:setColor(cc.c3b(228, 212, 77))
            end
        end    
    end

     if #cardNodes > 0 then
        local allIds = self:getAllCardIDs(localSeat)
        local gameCards = CardAlgorithm:SZ2CardsGroup(allIds,#allIds)
        
        local powertb = {}
        local bombCardId = {}
        local boomCards = {}    -- 炸弹集合
        local cardNodeTable = {}
        for i = 3 ,17 do
            powertb[i] = 0
            cardNodeTable[i] = {}
        end
        
        for _,v in ipairs(gameCards) do
            local power = v:GetPower()
            local count = powertb[power]
            powertb[power] = count + 1
        end
        for p,c in pairs(powertb) do
            -- if c >= 4 then
                table.insert(bombCardId,{power = p,count = c})
            -- end
            if c >= 4 then
                table.insert(boomCards,{power = p,count = c})
            end
        end

        local isHasLeftBoom = false -- 左边是否已经有炸弹，用于变更相邻炸弹的蒙层颜色
        local curCnt = 0
        for _,card in ipairs(cardNodes) do
            local id = card:getID()
            local gamecards = CardAlgorithm:SZ2CardsGroup({id},1)
            if #gamecards > 0 then
                local power = gamecards[1]:GetPower()
                for i = 1 , #bombCardId do
                    if bombCardId[i].power == power then
                        table.insert(cardNodeTable[power],{_card = card, _count = bombCardId[i].count})
                    end
                end
                -- 炸弹加蒙层
                for i = 1, #boomCards do
                    if boomCards[i].power == power then
                        curCnt = curCnt + 1
                        addBoomNode(card, isHasLeftBoom and 2 or 1)
                        if curCnt == boomCards[i].count then
                            isHasLeftBoom = not isHasLeftBoom
                            curCnt = 0
                        end
                    end
                end
            end
        end

        for _,v in pairs(cardNodeTable) do
            if #v > 0 then
                local firstCard = v[#v]._card
                local count = v[#v]._count
                addNumNode(firstCard,count)
            end
        end
    end
end

function UICardsLayer:clearCardNum(localSeat)
     if self._playerCards[localSeat] then
         local cardNodes = self._playerCards[localSeat]._cards
         if #cardNodes > 0 then
            for i,cardNode in ipairs(cardNodes) do
                local imgNode = cardNode:getChildByName(CARD_IMG_COUNT_NAME)
                if imgNode then
                    imgNode:setVisible(false)
                end
                local imgBoomNode = cardNode:getChildByName(CARD_BOOM_MASK_NAME)
                if imgBoomNode then
                    imgBoomNode:setVisible(false)
                end
            end
         end
     end
end

--定型炸标签
function UICardsLayer:showStableBombIcon(localSeat)
    if not self._adaptCardNode[localSeat] then return end
    local count = 0
    local panelCardNode = nil
    local bombCard = self._adaptCardNode[localSeat]:getChildByName(KW_UI_GAMEAREA_BOMB_CARD)
    if bombCard then
        for index = 1 , 7 do
            local panelBombCard = bombCard:getChildByName(KW_UI_BOMB_CARD .. index)
            if panelBombCard then
                local panelBg = ccui.Helper:seekWidgetByName(panelBombCard,KW_PANEL_BG)
                if panelBg and panelBg:isVisible() == true then
                    count = count + 1
                end
            end
        end
        if count > 0 then
            local panelBombCard = bombCard:getChildByName(KW_UI_BOMB_CARD .. count)
            if panelBombCard then
                local panelCard = ccui.Helper:seekWidgetByName(panelBombCard,KW_PANEL_CARD)
                if panelCard then
                    local stableBombNode = ccui.Helper:seekWidgetByName(self._rootNode,KW_STABLE_BOMB_IMG_BG)
                    if stableBombNode then
                        local cloneNode = stableBombNode:clone()
                        panelCard:addChild(cloneNode)
                        cloneNode:setPosition(cc.p(40,-85))
                        local textNode = ccui.Helper:seekWidgetByName(cloneNode,KW_TEXT_STABLE_SCORE)
                        if textNode then
                            textNode:setVisible(false)
                            local textNodeNew =  display.newBMFontLabel({
                                        text = '+1',
                                        font = KW_FFZ_FONT_FILE,
                                        textAlign = cc.TEXT_ALIGNMENT_LEFT,
                                    })

                            if textNodeNew then
                                cloneNode:addChild(textNodeNew)
                                textNodeNew:setPosition(cc.p(textNode:getPositionX() + 20, textNode:getPositionY() + 0))
                                textNodeNew:setScale(2.5)

                                local scaleTo = cc.ScaleTo:create(0.2,3.0)
                                local revert = cc.ScaleTo:create(0.2,2.5)
                                local seq = cc.Sequence:create(scaleTo,revert)
                                textNodeNew:runAction(seq)
                            end
                        end
                    end
                end
            end
        end
    end
end

return UICardsLayer