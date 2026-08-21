local GameScene = class("GameScene")
local CURRENT_MODULE_NAME = ...
local GameSceneDefine = import(".GameSceneDefine",CURRENT_MODULE_NAME)
local CardAlgorithm = import("..GameAlgorithmTZ.CardAlgorithm",CURRENT_MODULE_NAME)
local SmartSelectCard = import("..GameAlgorithmTZ.SmartSelectCards",CURRENT_MODULE_NAME)
local MyCardsType = import("..GameAlgorithmTZ.MyCardsType",CURRENT_MODULE_NAME)

function GameScene:gameEventContinueGame(event)
    if event.bContinue == false then 
        return 
    end
    self:sendRespContinue(true)
    local btnStart = ccui.Helper:seekWidgetByName(self:getRootNode(),GameSceneDefine.KW_BTN_START)
    if btnStart then
        self:onTouchEventStart(btnStart,ccui.TouchEventType.ended)
    end
    if self._canContinue == true and Game.PlayerData.getPlayerCount() ~= Game.FrameworkFunction.getChairs() then  -- 在续桌投票但是服务已经把玩家踢出房间了
        XH.TipTool.showTip(
{
    type = XH.TIP_LAYER_TYPE.OK,
    funcOK = function()
      if display.getRunningScene() == self._gameScene then
        Game.Interface.popLayer("GameBigWinLostLayer")
        self:leaveGame()
    end
    end
},
"有玩家钻石不足，房间已解散！"
)
    end
end

function GameScene:gameEventPlayerSpeak(event)
    self:sendSpeak(event.speakIndex,event.speakContent)
end

function GameScene:gameEventSpecCard(event)
    self:sendSpecCard(event.cards)
end

----来自 GameSceneKLTZDaTong
function GameScene:gameEventOutCards(event)
    local checkCardIDs = event.outCardIDs
    if #checkCardIDs < 1 then
        SmartSelectCard:reset()
        return
    end
    
    if not CardAlgorithm:canOut(self._clientData._preOutSeat,
        self._clientData._powerSeat,
        checkCardIDs,
        {},
        self._clientData._outCardsRecord,
        self._clientData._jokerData,
        self._clientData._lianZhaBuDai,
        self._clientData._gameType) or self._playback:isPlayback() then
        local handCardIDs = CardAlgorithm:gameCards2IDs(self._clientData._handCard[Game.FrameworkFunction.getSelfSeat()])
        self:getUICardLayer():setNorMalHandCards(Game.FrameworkFunction.getSelfLocalSeat(),handCardIDs)
        return false
    end
    
    local preOutCard = nil
    local isFirstSeat = self._clientData._preOutSeat == Game.FrameworkFunction.getMaxPlayer() or self._clientData._preOutSeat == Game.FrameworkFunction.getSelfSeat()
    if isFirstSeat then

    else
        local lastOut = self._clientData._outCardsRecord[self._clientData._preOutSeat]
        preOutCard = lastOut[#lastOut]
    end
    
    
    checkCardIDs = CardAlgorithm:SZ2MyCards(checkCardIDs,#checkCardIDs)
    local retCards,retCardEndum = CardAlgorithm:filteCard(checkCardIDs,preOutCard,self._clientData._jokerData,{self._clientData._lianZhaBuDai},self._clientData._gameType)

    if retCards == nil then
        return false
    end
    if #retCards == 0 then
        return false
    end 
    

    local cardGroup = {}
    for i = 1,#retCards do
        cardGroup[i] = {}
        local tmpGroup = CardAlgorithm:getGameGroupByCardType(retCards[i],retCardEndum[i])
        cardGroup[i].Cards = {}
        for j = #tmpGroup.Cards,1,-1 do
            table.insert(cardGroup[i].Cards,tmpGroup.Cards[j])
        end
        cardGroup[i].tType = tmpGroup.tType
    end
    
    --多种选择面板
    if #cardGroup == 0 then
        return
    elseif #cardGroup > 1 then
        if event.outIndex == nil then
            self:getUISureCardLayer():showSureCardPanel(true,cardGroup)
            return
        end   
    end
    
    --hcc
    local outIndex = event.outIndex
    if outIndex == nil then
        outIndex = 1
    end
    
    Game.UIFunction.setVisible(self:getRootNode(),GameSceneDefine.KW_PANEL_BTNS_GAME_NORMAL,false)
    self:sendOutCards(cardGroup[outIndex])
    
    local GameLogicProtocol = import("..GameProtocol.GameLogicProtocol",CURRENT_MODULE_NAME)
    local msgShowOutCards = GameLogicProtocol.msgShowOutCards:new()
    msgShowOutCards.sSeat = Game.FrameworkFunction.getSelfSeat()
    msgShowOutCards.ucCount = #cardGroup[outIndex].Cards
    for i = 1,msgShowOutCards.ucCount do
        msgShowOutCards.ucCards[i] = cardGroup[outIndex].Cards[i]:getID()
    end   
    msgShowOutCards.sCardType = cardGroup[outIndex].tType 
    local GameMXY = import("GameCommon.Code.GameProtocol.GameMXY")   
    local tClientToServerMessageData = GameMXY.ClientToServerMessage:new()
    local bos = msgShowOutCards:bostream()
    tClientToServerMessageData.cmdid = msgShowOutCards.XY_ID
    tClientToServerMessageData.message = bos:getBytes()
    tClientToServerMessageData.msglen = bos:getLength()

    self:onMsgShowOutCards(tClientToServerMessageData.cmdid, tClientToServerMessageData.message,tClientToServerMessageData.msglen)   
    self._clientData._preconditionOutCards = true 
    

    SmartSelectCard:reset()  
end

function GameScene:gameEventCheckedCard(event)
     local checkedCardIDs = event.checkedCardIDs
     local checkedCardIDIndexes = event.checkedCardIDIndexes
     if checkedCardIDIndexes then
         SmartSelectCard._firstCheckIndex = checkedCardIDIndexes[1]
     end
     -- 点击牌提示
--     if SmartSelectCard._firstCheckIndex then
--         local lastOutRecord = self._clientData._outCardsRecord[self._clientData._preOutSeat] or {}
--         local preOutCards = lastOutRecord[#lastOutRecord]
--         local selfLocalSeat = Game.FrameworkFunction.getSelfLocalSeat()
--         local selfHandCardIDs = self:getUICardLayer():getAllCardIDs(selfLocalSeat)
--         local hintCardIndexs = SmartSelectCard:smartHintCard(selfHandCardIDs,checkedCardIDIndexes,preOutCards,self._clientData._preOutSeat,self._clientData._powerSeat,self._clientData._jokerData,self._clientData._lianZhaBuDai,self._clientData._gameType)
--         if hintCardIndexs ~= nil and #hintCardIndexs > 0 then
--             self:getUICardLayer():clearCheckedCards(selfLocalSeat)
--             local hintCardIDs = {}
--             for i = 1,#hintCardIndexs do
--                 table.insert(hintCardIDs,selfHandCardIDs[hintCardIndexs[i]])
--             end
--             self:getUICardLayer():setCheckedCards(selfLocalSeat,hintCardIDs,hintCardIndexs)
--             SmartSelectCard:reset()
--             local tmpEvent = {}
--             tmpEvent.checkedCardIDs = hintCardIDs
--             tmpEvent.checkedCardIDIndexes = hintCardIndexs
--             self:gameEventCheckedCard(tmpEvent)
--             return 
--         end
--     end
     

    local bCanOut = CardAlgorithm:canOut(self._clientData._preOutSeat,
         self._clientData._powerSeat,
         checkedCardIDs,
         {},
         self._clientData._outCardsRecord,
         self._clientData._jokerData,
         self._clientData._lianZhaBuDai,
         self._clientData._gameType)
    Game.UIFunction.setButtonState(self:getRootNode(),GameSceneDefine.KW_BTN_OUT_CARD,bCanOut)
end

-- function GameScene:gameEventShuffle(event)
--     if event._free == 1 then
--         self:sendReqShuffle()
--         local btnStart = ccui.Helper:seekWidgetByName(self:getRootNode(),GameSceneDefine.KW_BTN_START)
--         if btnStart then
--             self:onTouchEventStart(btnStart,ccui.TouchEventType.ended)
--         end
--     else
--         self:reqShuffleProps()
--     end
-- end

function GameScene:gameEventSetBackStyleType(event)
    if not self._setData3DGameOpen then
        if self._curBackStyleType ~= event.backStyleType then
            self._curBackStyleType = event.backStyleType
            local backTextureStr = string.format(KW_UI_BACK_PNG,event.backStyleType)
            Game.UIFunction.loadTexture(self:getRootNode(),GameSceneDefine.KW_UI_GAME_BG,backTextureStr,ccui.TextureResType.localType)
        end
    end
end 

function GameScene:gameEventSurrenderOK(event)
    if self._playback:isPlayback() then
        return
    end
    self:sendResPonseSurrenderMsg(1)
end

function GameScene:gameEventBuyCard(event)
    if self._playback:isPlayback() then
        return
    end
    self:sendResPonseSurrenderMsg(2)
end

function GameScene:gameEventIsAgreeDismiss(event)
    local isAgree = event.agree
    self:sendRespondDismiss(isAgree)
end

function GameScene:gameEventShuffle(event)
    local CellReqUseProp = import("LiangBang.Code.GameTeaBusiness.CellReqUseProp",CURRENT_MODULE_NAME)
    local cellReqUseProp = CellReqUseProp.new()
    cellReqUseProp:addCellCallBack(self,self.onReqUseShuffleCountCallBack)
    cellReqUseProp:start(KW_PROPID_SMALL_ROOMCARD,100,10)
end

return GameScene