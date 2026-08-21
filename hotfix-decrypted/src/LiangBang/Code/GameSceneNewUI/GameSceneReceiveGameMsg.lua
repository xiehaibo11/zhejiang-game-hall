local CURRENT_MODULE_NAME = ...
local GameScene = class("GameScene")
local GameMXY = import("GameCommon.Code.GameProtocol.GameMXY")
local GameSceneDefine = import(".GameSceneDefine",CURRENT_MODULE_NAME)
local GameBaseProtocol = import("GameCommon.Code.GameBase.GameBaseProtocol")
local GameLogicProtocol = import("..GameProtocol.GameLogicProtocol",CURRENT_MODULE_NAME)
local PlayerData = import("GameCommon.Code.GameData.PlayerData")
local CellWXImageDownload = import("GameCommon.Code.GameTeaBusiness.CellWXImageDownload")
local MyCardsType = import("..GameAlgorithm.MyCardsType",CURRENT_MODULE_NAME)
local GameKeyWord = import("..Config.GameKeyWord",CURRENT_MODULE_NAME)
local HintCard = import("..GameAlgorithm.HintCard",CURRENT_MODULE_NAME)
local GameCard = import("..GameAlgorithm.GameCard",CURRENT_MODULE_NAME)
local MyCard = import("..GameAlgorithm.MyCard",CURRENT_MODULE_NAME)
local SetData = import("GameCommon.Code.GameData.SetData")
local CardAlgorithm = import("..GameAlgorithm.CardAlgorithm",CURRENT_MODULE_NAME)
local SmartSelectCard = import("..GameAlgorithm.SmartSelectCards",CURRENT_MODULE_NAME)
local UICardsLayerBase = import("GameCommon.Code.CardLayer.CardLayerBase.UICardsLayerConfig")

function GameScene:onMsgHandCard(XYID,buff,len)
    local msgHandCard = GameLogicProtocol.msgHandCard:new()
    msgHandCard:bistream(buff, len)

    self._clientData._handCard[msgHandCard.ucSeat] = {}
    for i = 1,msgHandCard.ucCount do
        local gameCard = GameCard:new()
        local cardId = msgHandCard.ucCards[i]
        if cardId == 0 then
            cardId = MyCard.CardID.CID_BACK
            msgHandCard.ucCards[i] = MyCard.CardID.CID_BACK
        end
        gameCard:setID(cardId)
        table.insert(self._clientData._handCard[msgHandCard.ucSeat],gameCard)
    end

    self._clientData._handCard[msgHandCard.ucSeat] = CardAlgorithm:sortCard(self._clientData._handCard[msgHandCard.ucSeat],self._clientData._sortCardIndex)

    local tmpHandCard = {}
    tmpHandCard = CardAlgorithm:gameCards2IDs(self._clientData._handCard[msgHandCard.ucSeat])

    local localSeat = Game.FrameworkFunction.seatToLocal(msgHandCard.ucSeat)
    if msgHandCard.bIsShow then
        if msgHandCard.bPlayAni then
            self:getUICardLayer():setFirstHandCards(localSeat,tmpHandCard,GameSceneDefine.CardAniType.FirstDealHandCard)
        else
            self:getUICardLayer():setNorMalHandCards(localSeat,tmpHandCard)
        end
    else
        self:getUICardLayer():clearHandCards(localSeat)
    end

    -- 对其他玩家做特殊处理，若手牌全为牌背则不显示手牌只显示张数，且头像移至特定位置。
    if localSeat ~= UICardsLayerBase.CardLocalSeat.Bottom then
        local isOpenHand = false
        if msgHandCard.bIsShow then
            if self:isBackHandCards(tmpHandCard) then
                isOpenHand = false
            else
                isOpenHand = true
            end
        end

        local headUI = self:getUIPlayerHead(localSeat)
        Game.UIFunction.setVisible(headUI, GameSceneDefine.KW_PANEL_CARD_LEFT, not isOpenHand)
        self:moveHeadWithOpenHand(localSeat,isOpenHand)
        if not isOpenHand then
            self:getUICardLayer():clearHandCards(localSeat)
        end
        self:showCardCount(localSeat,#self._clientData._handCard[msgHandCard.ucSeat],not isOpenHand)
    else
        self:moveHeadWithOpenHand(localSeat,msgHandCard.bIsShow)
        self:showCardCount(localSeat,#self._clientData._handCard[msgHandCard.ucSeat],not msgHandCard.bIsShow)
    end
end


function GameScene:onMsgBase(XYID,buff,len)
    local msgBase = GameLogicProtocol.msgBase:new()
    msgBase:bistream(buff, len) 

    self._clientData._baseScore = msgBase.iBase
    Game.UIFunction.setText(self._rootNode,GameSceneDefine.KW_TEXT_BASE_SCORE,self._clientData._baseScore)
end

function GameScene:onMsgGameRule(XYID,buff,len)
    if KW_CONFIG_IS_IOS_CHECK then
        return
    end
    local msgGameRule = GameLogicProtocol.msgGameRule:new()
    msgGameRule:bistream(buff, len)
    local getTextSuccess = false
    getTextSuccess,self._strGameRule = self:getTextByGameRule(msgGameRule.strGameRule)
    if not getTextSuccess then
        self._strGameRule = un.StringUtils.GB_18030_2000_TO_UTF8(self._strGameRule)
    end


    self._strGameRule = un.StringUtils.GB_18030_2000_TO_UTF8(msgGameRule.strGameRule)  
    local textBG = Game.UIFunction.seekWidgetByName(self:getRootNode(), "KW_ROOM_RULE_BG")
    if textBG then
        textBG:removeAllChildren()
        if self._strGameRule == "" then
        -- Game.UIFunction.seekWidgetByName(self:getRootNode(),"KW_ROOM_RULE_LAYOUT"):setVisible(false) 
        else
            local strGameRule = self._strGameRule .. "/"
            local textSet = Game.StringFunction.spiltStringByFlag(strGameRule,"/")
            local labelList = {}
            local edgeW = 12 
            local edgeH = 31
            local lineHeigh = 13
            local fontSize = 16
            local textBgHeight = textBG:getContentSize().height
            local textBgWidth = textBG:getContentSize().width
            local textWidth = 0
            for i = 1 , #textSet do
                if textSet[i] ~= "" then
                    -- labelList[i] =cc.ui.UILabel.new({text = textSet[i], size = fontSize})

                    labelList[i] = ccui.Text:create()
                    labelList[i]:setFontSize(fontSize)
                    labelList[i]:setString(textSet[i])

                    labelList[i]:setAnchorPoint(cc.p(0, 1))
                    textBG:addChild(labelList[i])
                    if textWidth < labelList[i]:getContentSize().width then
                        textWidth = labelList[i]:getContentSize().width
                    end
                end
            end
            if #labelList > 0 then
                local textHeight = (labelList[1]:getContentSize().height + lineHeigh) * #labelList - lineHeigh
                if textBgWidth < textHeight + edgeH*2 then
                    textBgHeight = textHeight + edgeH*2
                end
                if textBgWidth < textWidth + edgeW*2 then
                    textBgWidth = textWidth + edgeW*2
                end
                textBG:setContentSize(cc.size(textBgWidth, textBgHeight))
                for i = 1, #labelList do
                    labelList[i]:setPosition(cc.p(edgeW, textBgHeight - ((i - 1)*(labelList[i]:getContentSize().height + lineHeigh) + edgeH)))
                end
            end
            if self._isRuleShowFirstTime == nil or self._isRuleShowFirstTime == true then
                self._isRuleShowFirstTime = false
                self._isRuleShow = false
                local showBtn = Game.UIFunction.seekWidgetByName(self:getRootNode(), "KW_ROOM_RULE_BTN_SHOW")    
                self:onTouchEventRuleInfoShow(showBtn,ccui.TouchEventType.ended)
                XH.SysTool.performWithDelayGlobal(function()
                    if self._isRuleShow then
                        local retractBtn = Game.UIFunction.seekWidgetByName(self:getRootNode(), "KW_ROOM_RULE_BTN_RETRACT")    
                        self:onTouchEventRuleInfoRetract(retractBtn,ccui.TouchEventType.ended)
                    end
                end, 5)
            end
        end
    end
end

function GameScene:onMsgGameGong(XYID,buff,len)
    local msgGameGong = GameLogicProtocol.msgGameGong:new()
    msgGameGong:bistream(buff, len)

    local localSeat = Game.FrameworkFunction.seatToLocal(msgGameGong.sSeat)
    local currGongXian = self._clientData._gongXian[msgGameGong.sSeat]
    local changedGong = tonumber(msgGameGong.iGongXian) - tonumber(currGongXian)
    

    if  self:getUIWinLost():getINoOutZhaDan() then
        local targetContribution = self:getContributionBySeat(localSeat)
        targetContribution:setString(msgGameGong.iGongXian)
        return
    end

    local gongMoveDistance = 
        {
            {["x"] = 120,["y"] = 0},
            {["x"] = 0,["y"] = 120},
            {["x"] = -120,["y"] = 0},
            {["x"] = 120,["y"] = 0},
        }

    --贡献分起飞动画
    local function contrbutionFlyAni(targetWidget,sourceWidget,flyWidget,sourceSeat,allFlyGong)
        if targetWidget == nil then
            return
        end
        if sourceWidget == nil then
            return
        end
        if flyWidget == nil then
            return
        end
        flyWidget:setOpacity(0)
        flyWidget:setVisible(true)
        flyWidget:setString("+"..math.floor(allFlyGong / (Game.FrameworkFunction.getChairs() - 1)))
        local posBeginWorld = {}
        posBeginWorld = sourceWidget:convertToWorldSpace(cc.p(0,0))
        local posBeginToNode = {}
        posBeginToNode = targetWidget:convertToNodeSpace(posBeginWorld)
        local posEnd = {}
        posEnd.x,posEnd.y = flyWidget:getPosition()
        local posBegin = {}
        posBegin.x = posBeginToNode.x + sourceWidget:getPositionX()
        posBegin.y = posBeginToNode.y + sourceWidget:getPositionY()
        flyWidget:setPosition(posBegin.x,posBegin.y)
        targetWidget:getParent():addChild(flyWidget)
        local delayTimeBeforeMove = cc.DelayTime:create(0.6+sourceSeat * 0.05)
        local moveOutAction = cc.Spawn:create(cc.EaseIn:create(cc.MoveBy:create(0.2,cc.p(gongMoveDistance[sourceSeat])),0.3),cc.FadeIn:create(0.2))
        local moveToGongAction = cc.Spawn:create(cc.EaseOut:create(cc.MoveTo:create(0.5,posEnd),0.3),cc.ScaleTo:create(0.5,2))      
        local moveScaleAction = cc.ScaleTo:create(0.2,1.5)
        flyWidget:runAction(cc.Sequence:create(
            delayTimeBeforeMove,
            moveOutAction,
            moveToGongAction,
            moveScaleAction,
            cc.CallFunc:create(
                function ()
                    flyWidget:removeFromParent(true)
                end
            )))
    end
    --扣贡献分动画
    local function reduceContributionAni(lostWidget,aniWidget,reduceGong)
        if lostWidget == nil then
            return
        end
        if aniWidget == nil then
            return
        end
        reduceGong = reduceGong or ""
        lostWidget:setVisible(false)
        lostWidget:getParent():addChild(aniWidget)
        aniWidget:runAction(cc.Sequence:create(
            cc.ScaleTo:create(0.3,0.5),cc.ScaleTo:create(0.3,1),cc.CallFunc:create(
                function ()
                    lostWidget:setVisible(true)
                    aniWidget:setScale(2,2)
                    aniWidget:setOpacity(255)
                    aniWidget:setString(reduceGong)
                end),
            cc.Spawn:create(cc.ScaleTo:create(0.3,2.5),cc.FadeOut:create(0.3)),
            cc.CallFunc:create(
                function()
                    aniWidget:removeFromParent(true)
                end)))
    end

    --控制动画的播放
    if changedGong > 0 then
        local targetContribution = self:getContributionBySeat(localSeat)
        --        local modelContribution = Game.UIFunction.seekWidgetByName(self._rootNode,GameSceneDefine.KW_TEXT_CONTRIBUTION)
        for i = 0,Game.FrameworkFunction.getChairs() - 1 do
            while true do
                if i == msgGameGong.sSeat then
                    break
                end
                local localLostSeat = Game.FrameworkFunction.seatToLocal(i)
                local sourceContribution = self:getContributionBySeat(localLostSeat)
                local flyContribution = nil
                if targetContribution then --modelContribution then
                    flyContribution = targetContribution:clone()
                end
                contrbutionFlyAni(targetContribution,sourceContribution,flyContribution,localLostSeat,changedGong)
                targetContribution:runAction(cc.Sequence:create(cc.DelayTime:create(1.8),cc.CallFunc:create(function()
                    targetContribution:setString(msgGameGong.iGongXian)
                end)))
                break
            end
        end
    elseif changedGong < 0 then
        local lostContribution = self:getContributionBySeat(localSeat)
        if lostContribution then
            lostContribution:setString(msgGameGong.iGongXian)
            if localSeat == Game.FrameworkFunction.getSelfLocalSeat() then
                local aniContribution = lostContribution:clone()
                reduceContributionAni(lostContribution,aniContribution,changedGong)
            end
        end
    else
        return
    end

    self._clientData._gongXian[msgGameGong.sSeat] = msgGameGong.iGongXian
end



function GameScene:onMsgWinOrder(XYID,buff,len)
    local msgWinOrder = GameLogicProtocol.msgWinOrder:new()
    msgWinOrder:bistream(buff, len)
    if Game.FrameworkFunction.getSelfSeat() == msgWinOrder.ucSeat then 
        self:getUITipsLayer():showMiniTips(true)
    end
    local localSeat = Game.FrameworkFunction.seatToLocal(msgWinOrder.ucSeat)
    local headUI =  self:getUIPlayerHead(localSeat)
    if headUI then 
        Game.UIFunction.setText(headUI,GameSceneDefine.KW_UI_GAME_END_RANK,msgWinOrder.ucOrder + 1) 
        Game.UIFunction.setVisible(headUI,GameSceneDefine.KW_UI_GAME_END_RANK,true) 
        Game.UIFunction.setVisible(headUI,GameSceneDefine.KW_UI_PLAYER_CARD_LEFT,false)
    end
    if localSeat == UICardsLayerBase.CardLocalSeat.Top then
        self:moveHeadWithOpenHand(localSeat,false)
    end
end

function GameScene:onMsgClientForwardMobileSignalMsg(msgClientForward)
    if msgClientForward.seat == Game.FrameworkFunction.getSelfSeat() then
        local delayTime = socket.gettime() - self._clientData._sendMobileSignalMsgTime
        self._clientData._sendMobileSignalMsgTime = 0
        self:showWifiState(delayTime * 1000)
        self:showDelayTime(delayTime * 1000)
    end

    if msgClientForward.seat ~= Game.FrameworkFunction.getSelfSeat() then
        self._clientData._playerHeartTime[msgClientForward.seat] = socket.gettime()
    end
end


function GameScene:onMsgAllHandCards(XYID,buff,len)
    local msgAllHandCards = GameLogicProtocol.msgAllHandCards:new()
    msgAllHandCards:bistream(buff, len)

    --获取全部人手牌并展示
    local setHandCardsTimes = {}
    for i = 1, msgAllHandCards.allRoundCount do
        local localSeat = Game.FrameworkFunction.seatToLocal(i - 1)
        local handCardPanel = ccui.Helper:seekWidgetByName(self:getRootNode(),GameSceneDefine.KW_ADAPT_CARDS_..localSeat)
        if handCardPanel then
            local handCardNode = handCardPanel:getChildByName(GameSceneDefine.KW_UI_GAMEAREA_HAND_CARD)
            if handCardNode then
                handCardNode:setVisible(true)
            end
        end

        local handCards
        for n = 1, msgAllHandCards.allRoundCount do
            local player = Game.PlayerData.getPlayerBySeat(n - 1)
            if msgAllHandCards.playerID[i] == player:getNumberID() then
                handCards = CardAlgorithm:SZ2CardsGroup(msgAllHandCards.ObviousCards[n].ucCards,msgAllHandCards.ObviousCards[n].ucCount)
            end
        end

        local orderCards = handCards
        orderCards = CardAlgorithm:sortCard(orderCards, self._clientData._sortCardIndex)
        orderCards = CardAlgorithm:gameCards2IDs(orderCards)
        self:getUICardLayer():setNorMalHandCards(localSeat,orderCards)
        self._clientData._handCard[i - 1] = CardAlgorithm:sortCard(handCards,self._clientData._sortCardIndex)
        --剩余手牌数可以隐藏
        local headUI = self:getUIPlayerHead(localSeat)
        if headUI then 
            local cardLeftPanel = ccui.Helper:seekWidgetByName(headUI,GameSceneDefine.KW_PANEL_CARD_LEFT)
            if cardLeftPanel then
                cardLeftPanel:setVisible(false)
            end
        end
        --玩家头像手牌适配
        self:moveHeadWithOpenHand(localSeat,true)
    end
end

return GameSceneL?  