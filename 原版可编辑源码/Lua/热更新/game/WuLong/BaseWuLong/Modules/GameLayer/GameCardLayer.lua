local AnimationManager = CF.gameRequire("Manager.AnimationManager")
local CardEnum = CF.gameRequire("Define.CardEnum")
local CardLogic = CF.gameRequire("Logic.CardLogic")
local CardLayerConfig = CF.gameRequire("Modules.CardLayer.CardLayerConfig")
local CardModule = CF.gameRequire("Modules.CardLayer.Card")
local GameCardLayer = CF.gameClass("GameCardLayer", "game.WuLong.BaseWuLong.Modules.CardLayer.CardLayer")

local KW_CSB_GAME_CARD_LAYER = "res/cocosStudio/WuLong/GameLayer/CSB/CardLayer.csb"

function GameCardLayer:getCSBPath()
    return KW_CSB_GAME_CARD_LAYER
end

function GameCardLayer:getBindingInfo()
    local bindInfo = GameCardLayer.super.getBindingInfo(self)
    bindInfo["_KW_POS_ANI_CARD_PILE"] = { varName = "_aniCardPliePanel" }
    bindInfo["_KW_POS_OPEN_CARD"] = { varName = "_openCardPos" }
    bindInfo["_KW_POS_KW_FLY_CARD_"] = { varName = "_flyCard", beginIndex = 1, endIndex = 2 }
    bindInfo["_KW_PANEL_OPEN_CARD_"] = { varName = "_openCardPanel_", beginIndex = 1, endIndex = 4 }
    bindInfo["_KW_POS_OPEN_CARD_1_"] = { varName = "_openCardPos_1_", beginIndex = 1, endIndex = 3 }
    bindInfo["_KW_POS_OPEN_CARD_2_"] = { varName = "_openCardPos_2_", beginIndex = 1, endIndex = 3 }
    bindInfo["_KW_POS_OPEN_CARD_3_"] = { varName = "_openCardPos_3_", beginIndex = 1, endIndex = 3 }
    bindInfo["_KW_POS_OPEN_CARD_4_"] = { varName = "_openCardPos_4_", beginIndex = 1, endIndex = 3 }
    bindInfo["_KW_POS_ACTION_"] = { varName = "_actionPos", beginIndex = 1, endIndex = 4 }
    bindInfo["_KW_POS_ACTION_BOMB"] = { varName = "_actionBombPos" }
    bindInfo["_KW_SCT_PANEL"] = { varName = "_KW_SCT_PANEL" }
    bindInfo["_KW_PANEL_CHANGESEAT_TIP"] = { varName = "_KW_PANEL_CHANGESEAT_TIP" }
    bindInfo["_KW_BG_CHANGESEAT_TIP"] = { varName = "_KW_BG_CHANGESEAT_TIP" }
    bindInfo["_KW_IMG_CHANGESEAT_TIP_1"] = { varName = "_KW_IMG_CHANGESEAT_TIP_1" }
    bindInfo["_KW_IMG_CHANGESEAT_TIP_3"] = { varName = "_KW_IMG_CHANGESEAT_TIP_3" }
    bindInfo["_KW_IMG_CHANGESEAT_TIP_2"] = { varName = "_KW_IMG_CHANGESEAT_TIP_2" }
    bindInfo["_KW_TEXT_CHANGESEAT_TIP"] = { varName = "_KW_TEXT_CHANGESEAT_TIP" }
    return bindInfo
end

function GameCardLayer:ctor(param)
    GameCardLayer.super.ctor(self, param)
    self:AdaptationIphoneX()
end

function GameCardLayer:getProxyEvents()
    local eventTable = GameCardLayer.super.getProxyEvents(self) or {}
    eventTable[#eventTable + 1] = { module = CF.roomData, eventKeyName = "EVENT_CARD_HOLDER_CHANGED", callBack = "onCardHolderChanged" }
    eventTable[#eventTable + 1] = { module = CF.settingData, eventKeyName = "EVENT_CLEAR_MODEL", callBack = "onEventClearModel" }
    eventTable[#eventTable + 1] = { module = CF.settingData, eventKeyName = "EVENT_DOUBLEKOU_BACK_STYLE_CHANGED", callBack = "onEventCardStyle" }
    eventTable[#eventTable + 1] = { module = CF.settingData, eventKeyName = "EVENT_DOUBLEKOU_FACE_STYLE_CHANGED", callBack = "onEventCardFaceStyle" }
    return eventTable
end

function GameCardLayer:AdaptationIphoneX()
    local nodeArr = {
        { node = self._openCardPanel_1, bRight = false, bHalf = false },
        { node = self._outCardPos1, bRight = false, bHalf = false },
        { node = self._handCardPos1, bRight = false, bHalf = false },
        { node = self._actionPos1, bRight = false, bHalf = false },
        { node = self._openCardPanel_3, bRight = true, bHalf = false },
        { node = self._outCardPos3, bRight = true, bHalf = false },
        { node = self._handCardPos3, bRight = true, bHalf = false },
        { node = self._actionPos3, bRight = true, bHalf = false }
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

function GameCardLayer:playCardTypeAction(seat, cardType, outCardIDs)
    local localSeat = CF.roomData:seatToLocal(seat)
    if cardType >= CardEnum.CARDS_TYPE.CT_4_JUNKO_1_CONTINUOUS then
        local boomXian = CardLogic.GetBombLineNumberByType(cardType, outCardIDs)
        self:playBombAction(localSeat, boomXian)
        self:playBombLineAction(localSeat, boomXian)
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
            local removeAction =            cc.CallFunc:create(
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
    local jokerCards = CardLogic.getJokerCnt(cardIDs)
    local specialCardIDs = {}
    for _, v1 in pairs(tNormalBomb) do
        if #v1 >= 4 then
            for _, v2 in pairs(v1) do
                table.insert(specialCardIDs, v2)
            end
        end
    end
    if jokerCards >= 4 then
        table.insert(specialCardIDs, CardEnum.CARD_ID.CID_SJ)
        table.insert(specialCardIDs, CardEnum.CARD_ID.CID_BJ)
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