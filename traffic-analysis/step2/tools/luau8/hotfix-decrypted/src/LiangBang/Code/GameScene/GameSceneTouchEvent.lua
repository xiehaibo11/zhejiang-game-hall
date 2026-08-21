local CURRENT_MODULE_NAME = ...
local GameScene = class("GameScene")
local GameSceneDefine = import(".GameSceneDefine",CURRENT_MODULE_NAME)
local PlayerData = import("GameCommon.Code.GameData.PlayerData")
local CardAlgorithm = import("..GameAlgorithmTZ.CardAlgorithm",CURRENT_MODULE_NAME)
local GameKeyWord = import("..Config.GameKeyWord",CURRENT_MODULE_NAME)
local SmartSelectCard = import("..GameAlgorithmTZ.SmartSelectCards",CURRENT_MODULE_NAME)

function GameScene:onTouchEventMenu(send,eventType)
    if eventType == ccui.TouchEventType.began then
        Game.GameSound.playButtonClick()
    end
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    self._uiMenuIsIn = not self._uiMenuIsIn
    self:showMenu(self._uiMenuIsIn)
    Game.TKFunction.addBtnClickCount(TalkingDataKeyword.KW_CLICK_DOUBLE_BUCKLE_MENU + self._gameID * 100)
end
--
function GameScene:onTouchEventExit(send,eventType)
    if eventType == ccui.TouchEventType.began then
    end
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    local selfPlayer = Game.FrameworkFunction.getSelfPlayer()
    if selfPlayer == nil then
        return
    end
    if selfPlayer:getStateEx() == PlayerData.USER_STATEEX.psPlaying then 
XH.TipTool.showTip(
{
    type = XH.TIP_LAYER_TYPE.OK_CANCEL,
    funcOK = function()
        self:leaveGame()
    end
},
"确定要强退？"
)
        return 
    else 
        self:leaveGame()
    end
    local menuBtn = ccui.Helper:seekWidgetByName(self:getRootNode(),GameSceneDefine.KW_BTN_MENU)
    if menuBtn then
        self:onTouchEventMenu(menuBtn,ccui.TouchEventType.ended)
    end
    Game.TKFunction.addBtnClickCount(TalkingDataKeyword.KW_CLICK_DOUBLE_BUCKLE_MENU_EXIT + self._gameID * 100)
end

function GameScene:onTouchEventSetUp(send,eventType)
    if eventType == ccui.TouchEventType.began then
    end
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    -- Game.Interface.showPopLayer("SetLayer")
    -- XH.GT.showPopLayer("lobby.Modules.Set.View")
    local setView = require("lobby.Modules.Set.View").new()
    if setView then
        self:getRootNode():addChild(setView, XH.ZORDER.WINDOW)
    end
    local menuBtn = ccui.Helper:seekWidgetByName(self:getRootNode(),GameSceneDefine.KW_BTN_MENU)
    if menuBtn then
        self:onTouchEventMenu(menuBtn,ccui.TouchEventType.ended)
    end
    Game.TKFunction.addBtnClickCount(TalkingDataKeyword.KW_CLICK_DOUBLE_BUCKLE_MENU_SETTING + self._gameID * 100)
end
--
function GameScene:onTouchEventTrust(send,eventType)
    if eventType == ccui.TouchEventType.began then
        Game.GameSound.playButtonClick()
    end
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    local selfPlayer = Game.FrameworkFunction.getSelfPlayer()
    if selfPlayer then
        if selfPlayer:getStateEx() ~= PlayerData.USER_STATEEX.psPlaying then 
            --showtips
            local trustTip = ccui.Helper:seekWidgetByName(self:getRootNode(),GameSceneDefine.KW_TIP_NO_TRUST)
            if trustTip then
                trustTip:runAction(cc.Sequence:create(cc.FadeIn:create(0.5),cc.DelayTime:create(1),cc.FadeOut:create(0.5)))
            end
        else 
            self:sendTrust(true)
            local menuBtn = ccui.Helper:seekWidgetByName(self:getRootNode(),GameSceneDefine.KW_BTN_MENU)
            if menuBtn then
                self:onTouchEventMenu(menuBtn,ccui.TouchEventType.ended)
            end
        end
    end
    Game.TKFunction.addBtnClickCount(TalkingDataKeyword.KW_CLICK_DOUBLE_BUCKLE_MENU_TRUST + self._gameID * 100)
end

function GameScene:onTouchEventRobotPanel(send,eventType)
    if eventType == ccui.TouchEventType.began then
        Game.GameSound.playButtonClick()
    end
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    self:sendTrust(false)
end

--
function GameScene:onTouchEventChangeSeat(send,eventType)
    if eventType ~= ccui.TouchEventType.began then
        Game.GameSound.playButtonClick()
    end
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    local selfPlayer = Game.FrameworkFunction.getSelfPlayer()
    if selfPlayer then
        if selfPlayer:getStateEx() == PlayerData.USER_STATEEX.psPlaying then 
            local changeSeatTip = ccui.Helper:seekWidgetByName(self:getRootNode(),GameSceneDefine.KW_TIP_NO_CHANGE_TABLE)
            if changeSeatTip then
                changeSeatTip:runAction(cc.Sequence:create(cc.FadeIn:create(0.5),cc.DelayTime:create(1),cc.FadeOut:create(0.5)))
            end
        else 
            self:sendPlayerAct(self.ENUM_PLAYER_ACT.CHANGESEAT,self._roomMode) 
            local menuBtn = ccui.Helper:seekWidgetByName(self:getRootNode(),GameSceneDefine.KW_BTN_MENU)
            if menuBtn then
                self:onTouchEventMenu(menuBtn,ccui.TouchEventType.ended)
            end
        end
    end
    Game.TKFunction.addBtnClickCount(TalkingDataKeyword.KW_CLICK_DOUBLE_BUCKLE_MENU_CHANGE_SEAT + self._gameID * 100)
end

function GameScene:onTouchEventBack(send,eventType)
    if eventType == ccui.TouchEventType.began then
        Game.GameSound.playButtonClick()
    end
    if eventType ~= ccui.TouchEventType.ended then
        return
    end   
    if self._clientData._roomHostSeat == Game.FrameworkFunction.getSelfSeat() then
        XH.TipTool.showTip( {
        type = XH.TIP_LAYER_TYPE.OK_CANCEL,
        funcOK = function()
          self:leaveGame(true)
        end,
    } , "返回大厅包厢依然保留")
    else
        if self._clientData._playCount == 0 then
            XH.TipTool.showTip( {
        type = XH.TIP_LAYER_TYPE.OK_CANCEL,
        funcOK = function()
          self:leaveGame(false)
        end,
    } , "您的小伙伴仍在等您，确定离开?")
        else
            XH.TipTool.showTip( {
        type = XH.TIP_LAYER_TYPE.OK_CANCEL,
        funcOK = function()
          self:leaveGame(true)
        end,
    } , "游戏进行中，确定离开?")
        end
    end
    local menuBtn = ccui.Helper:seekWidgetByName(self:getRootNode(),GameSceneDefine.KW_BTN_MENU)
    if menuBtn then
        self:onTouchEventMenu(menuBtn,ccui.TouchEventType.ended)
    end
    Game.TKFunction.addBtnClickCount(TalkingDataKeyword.KW_CLICK_DOUBLE_BUCKLE_MENU_BACK + self._gameID * 100)
    if self._playback:isPlayback() then
        if display.getRunningScene() == self._gameScene then
            if not self._bTeaHouse then
                self:leaveGame() 
            end
        end 
        local eventDispatcher = cc.Director:getInstance():getEventDispatcher()
        local event = cc.EventCustom:new("TouchHistoryBack.HistoryDetail")
        event.bTeaHouse = self._bTeaHouse
        eventDispatcher:dispatchEvent(event)
    end
end

function GameScene:onTouchEventBoxRoomDismiss(send,eventType)
    if eventType == ccui.TouchEventType.began then
        Game.GameSound.playButtonClick()
    end
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    if self._clientData._playCount > 0 then
        local text = ""   
        if self._canContinue == false then 
          text = "游戏已开始，发起解散包厢请求?"
        else 
          text = "游戏可续桌，发起解散包厢请求?"
        end
        XH.TipTool.showTip( {
        type = XH.TIP_LAYER_TYPE.OK_CANCEL,
        funcOK = function()
          self:sendRespContinue(false)
          self:sendRequestDismiss()
          self:sendRespondDismiss(true)
          XH.lobby:getModule("Sxvip.FriendInfo"):onDismiss()
        end,
    } , text)
    else
        if self._clientData._roomHostSeat == Game.FrameworkFunction.getSelfSeat() then
            XH.TipTool.showTip(
              {
                  type = XH.TIP_LAYER_TYPE.OK_CANCEL,
                  funcOK = function()
                    self:sendRespContinue(false)
                    self:sendRequestDismiss()
                  end
              },
              "游戏未开始，解散包厢不会扣除钻石！"
              )
        else
            if self._clientData._roomHostSeat >= 0 and self._clientData._roomHostSeat < Game.FrameworkFunction.getMaxPlayer() then                 
                XH.TipTool.showTip({
                    type = XH.TIP_LAYER_TYPE.OK,            
                }, "游戏未开始，只有房主才能解散包厢！")
            else
                XH.TipTool.showTip({
                    type = XH.TIP_LAYER_TYPE.OK,            
                }, "牌局还未开始，无需解散。")
            end
        end
    end
    local menuBtn = ccui.Helper:seekWidgetByName(self:getRootNode(),GameSceneDefine.KW_BTN_MENU)
    if menuBtn then
        self:onTouchEventMenu(menuBtn,ccui.TouchEventType.ended)
    end
    Game.TKFunction.addBtnClickCount(TalkingDataKeyword.KW_CLICK_DOUBLE_BUCKLE_MENU_DISSOLVE + self._gameID * 100)
end

function GameScene:onTouchEventInfoPanel(localSeat,send,eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    -- 播放声音
    Game.GameSound.playButtonClick()
    for i = 1 , Game.FrameworkFunction.getMaxPlayer() do
        if i == localSeat then
            self:showInfoPanel(i,true)
        else 
            self:showInfoPanel(i,false)
        end
    end
    Game.TKFunction.addBtnClickCount(TalkingDataKeyword.KW_CLICK_DOUBLE_BUCKLE_HEAD + self._gameID * 100)
end

function GameScene:onBtnEventSendRequestSwapSeat(localSeat,send,eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    Game.GameSound.playButtonClick()
    
    local seat = Game.FrameworkFunction.localToSeat(localSeat)
    self:sendRequestSwapSeat(seat)
    self:sendRespondSwapSeat(true)
end

function GameScene:onTouchEventTalk(send,eventType)
    if eventType == ccui.TouchEventType.began then
        Game.GameSound.playButtonClick()
    end
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    local uiTalk = self:getUITalk()
    uiTalk:setSendMessageFunc(handler(self, self.sendQiaoPiHua), handler(self, self.sendChatMessage), handler(self, self.sendExpression))
    if uiTalk then
        uiTalk:showTalkPanel()
    end
    Game.TKFunction.addBtnClickCount(TalkingDataKeyword.KW_CLICK_DOUBLE_BUCKLE_TALK + self._gameID * 100)
end

function GameScene:onTouchEventBackGround(send,eventType) 
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    SmartSelectCard:reset()
    self._uiMenuIsIn = false
    self:showMenu(false)
    for i = 1,Game.FrameworkFunction.getMaxPlayer() do
        self:showInfoPanel(i,false)
    end
end

function GameScene:onTouchEventStart(send,eventType)
    if eventType == ccui.TouchEventType.began then
        send:setColor(cc.c3b(160,160,160))
        Game.GameSound.playButtonClick()
    elseif eventType == ccui.TouchEventType.ended or
        eventType == ccui.TouchEventType.canceled then
        send:setColor(cc.c3b(255,255,255))
    end

    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    -- 播放声音
    Game.GameSound.playButtonClick()
    -- 发送玩家准备信息
    self:sendGameStart()
    Game.TKFunction.addBtnClickCount(TalkingDataKeyword.KW_CLICK_DOUBLE_BUCKLE_START + self._gameID * 100)
    self:sendRoomNumber(self._boxRoomID)   
end

function GameScene:createShareInfo()
    local shareKeyword = import("..Config.ShareKeyWord",CURRENT_MODULE_NAME)
    local strURL = shareKeyword.KW_MOCHUANG_LINK_URL .. "?key=" .. self._boxRoomID
    --local strText = "房间号:" .. self._boxRoomID .. " 局数:" .. self._clientData._maxplayCount .. " 房间规则:" .. Game.FrameworkFunction.getChairs() .. "人/" .. self._strGameRule
    local autoReady = self._clientData:getAutoReady()
    local autoReadyStr = ''
    if tonumber(autoReady) == 1 then
        autoReadyStr = '自动准备'
    end
    local strText = "两帮：" .. self._clientData._maxplayCount .. '局,' .. Game.FrameworkFunction.getChairs() .. '人,'
    strText = strText .. self._strGameRule .. autoReadyStr .. "(长按复制消息打开游戏直接进房)"
    if self.teaHousePswd then
        strText = string.format("比赛场口令：%06d ",self.teaHousePswd) .. strText
        strURL  = shareKeyword.KW_MOCHUANG_LINK_URL .. "?key=house_" .. self.teaHousePswd .. "_table_" .. self._boxRoomID
    end

    local nickName = Game.FrameworkFunction.getPlayerBySeat(Game.FrameworkFunction.getSelfSeat()):getNickName()
    local titleText = ""

    strText = "【边锋台州】" .. nickName .. "的房号【" .. self._boxRoomID .. "】\n" .. strText
    local shareInfo = {
        textTitle = '',         --分享标题
        textTitleUrl="",       --微信不用
        site="",               --微信不用
        siteUrl="",            --微信不用
        imagePath="",          --微信不用
        url=strURL,            --微信网页模式分享的链接
        type="word",            --word是文字分享，url网页模式分享，pic分享图片
        scene="0",             --0是分享到好友会话，1是分享到朋友圈
        imageUrl="",           --分享图片地址（分享网页模式，需要传安卓包名）
        text=strText,          --分享内容 
        comment="",            --微信不用
    }
    shareInfo.textTitle = "两帮：" .. self._boxRoomID .. " 底分：" .. tostring(self._clientData:getBaseScore())
    return shareInfo
end

function GameScene:onTouchEventShare(send,eventType)
    if eventType == ccui.TouchEventType.began then
        send:setColor(cc.c3b(160,160,160))
        Game.GameSound.playButtonClick()
    elseif eventType == ccui.TouchEventType.ended or
        eventType == ccui.TouchEventType.canceled then
        send:setColor(cc.c3b(255,255,255))
    end
    
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    
    local shareInfo = self:createShareInfo()
    XH.sdkManager:startShare(shareInfo)
    -- Game.Interface.showPopLayer("ShareGameLayer",{self:createShareInfo(), self._gameID})
end

function GameScene:onTouchEventMike(send,eventType) 
    if self._playback:isPlayback() then
        return
    end 
    if eventType == ccui.TouchEventType.began then
        if not Game.FrameworkFunction.isVoiceLimitVersion() then
            -- 录音动画 
            self:showMikeRecordAni(true)
            -- 录音标志开始
            self._isRecordingVoice = true
            Game.GameSound.setPlayEffectLimit(true)
            self._fastVoiceScheduleID = self._fastVoiceScheduleID or 0
            if self._fastVoiceScheduleID ~= 0 then
                cc.Director:getInstance():getScheduler():unscheduleScriptEntry(self._fastVoiceScheduleID)
                self._fastVoiceScheduleID = 0
            end

            local recordTime = 0
            self._fastVoiceScheduleID = cc.Director:getInstance():getScheduler():scheduleScriptFunc(
                function()
                    recordTime = recordTime + 1
                    if recordTime >= 30 then
                        self._isRecordingVoice = false
                        self:showMikeRecordAni(false)
                        XH.bf.ThirdManager:getInstance():callFunction("fastvo_stop_record")
                        Game.GameSound.setPlayEffectLimit(false)
                        cc.Director:getInstance():getScheduler():unscheduleScriptEntry(self._fastVoiceScheduleID)
                        self._fastVoiceScheduleID = 0
                    end
                end
                ,1,false)

            Game.FrameworkFunction.stopSoundInSpeaking()
            if device.platform == "ios" and XH.bf.SysFunc:GetBundleVersion() > "3.3.0" then
                local mapData = {}
                mapData["0"] = tostring(XH.playerData:getNumberID())
                XH.bf.ThirdManager:getInstance():callFunctionWithMap("fastvo_start_record",mapData)
            else
                XH.bf.ThirdManager:getInstance():callFunction("fastvo_start_record")
            end
            self._recordingVoiceTime = socket.gettime()
        else
            Game.GameSound.playButtonClick()
        end
    elseif eventType == ccui.TouchEventType.ended then
        if not Game.FrameworkFunction.isVoiceLimitVersion() then
            -- 录音动画停止
            self:showMikeRecordAni(false)
            print("send:setTouchEnabled(false) lcylcylcy")
            send:setBright(false)
            send:setTouchEnabled(false)
            local funcStopRecordingVoice = function()
                self._isRecordingVoice = false
                if self._fastVoiceScheduleID ~= 0 then
                    cc.Director:getInstance():getScheduler():unscheduleScriptEntry(self._fastVoiceScheduleID)
                    self._fastVoiceScheduleID = 0
                    XH.bf.ThirdManager:getInstance():callFunction("fastvo_stop_record")
                end
                Game.GameSound.setPlayEffectLimit(false)
                if device.platform == "ios" then
                  XH.SysTool.performWithDelayGlobal(function()
                        send:setBright(true)
                        send:setTouchEnabled(true)
                    end,2)
                else
                    send:setBright(true)
                    send:setTouchEnabled(true)
                end
            end
            local recordingVoiceTime = socket.gettime() - self._recordingVoiceTime
            if recordingVoiceTime < 1000 then
                send:runAction(cc.Sequence:create(cc.DelayTime:create((1000 - recordingVoiceTime) * 0.001),
                    cc.CallFunc:create(funcStopRecordingVoice)))
            else
                funcStopRecordingVoice()
            end
            Game.TKFunction.addBtnClickCount(TalkingDataKeyword.KW_CLICK_DOUBLE_BUCKLE_MIKE + self._gameID * 100)
        end
    elseif eventType == ccui.TouchEventType.canceled then
        self:showMikeRecordAni(false)
        XH.bf.ThirdManager:getInstance():callFunction("fastvo_cancel_record")
        Game.GameSound.setPlayEffectLimit(false)
    end
end

function GameScene:onTouchEventReplay(localSeat,send,eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    if #self._playVoiceList == 0 and self._justPlayLocalSeatToURL[localSeat] then
        local playVoiceInfo = {}
        playVoiceInfo["voicelocalSeat"] = localSeat
        playVoiceInfo["voiceUrl"] = self._justPlayLocalSeatToURL[localSeat]
        self._playVoiceList[#self._playVoiceList + 1] = playVoiceInfo
        self:showPlayVoice()
        self:showInfoPanel(localSeat,false)
    end
    Game.TKFunction.addBtnClickCount(TalkingDataKeyword.KW_CLICK_DOUBLE_BUCKLE_HEAD_MIKE + self._gameID * 100)
end

function GameScene:onTouchEventPass(send,eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    
    Game.GameSound.playButtonClick()
    local player = Game.FrameworkFunction.getSelfPlayer()
    if player then
        --Game.GameSound.playSoundPass(player:getSex()) --有重音
    end
    if self._clientData._powerSeat ~= Game.FrameworkFunction.getSelfSeat() then
        return
    end

    if self._clientData._preOutSeat == Game.FrameworkFunction.getSelfSeat() or self._clientData._preOutSeat == Game.FrameworkFunction.getMaxPlayer() then
        return
    end
    if self._playback:isPlayback() then
        return
    end
    local GameData = import("..GameAlgorithm.CardRuleConstants",CURRENT_MODULE_NAME)
    local cardGroup = GameData.CardsGroup.new()
    self:sendOutCards(cardGroup)
    
    Game.UIFunction.setVisible(self:getRootNode(),GameSceneDefine.KW_PANEL_BTNS_GAME_NORMAL,false)
    
    local GameLogicProtocol = import("..GameProtocol.GameLogicProtocol",CURRENT_MODULE_NAME)
    local msgShowOutCards = GameLogicProtocol.msgShowOutCards:new()
    msgShowOutCards.sSeat = Game.FrameworkFunction.getSelfSeat()
    msgShowOutCards.ucCount = 0
    msgShowOutCards.sCardType = 0    
    local GameMXY = import("GameCommon.Code.GameProtocol.GameMXY")
    local tClientToServerMessageData = GameMXY.ClientToServerMessage:new()
    local bos = msgShowOutCards:bostream()
    tClientToServerMessageData.cmdid = msgShowOutCards.XY_ID
    tClientToServerMessageData.message = bos:getBytes()
    tClientToServerMessageData.msglen = bos:getLength()

    self:onMsgShowOutCards(tClientToServerMessageData.cmdid, tClientToServerMessageData.message,tClientToServerMessageData.msglen)   
    self._clientData._preconditionOutCards = true

    local selfLocalSeat = Game.FrameworkFunction.getSelfLocalSeat()
    self:getUICardLayer():clearCheckedCards(selfLocalSeat)
end

function GameScene:onTouchEventOutCard(send,eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    Game.GameSound.playButtonClick()
    if self._playback:isPlayback() then
        return
    end
    local checkCardsID = self:getUICardLayer():getCheckedCardIDs(Game.FrameworkFunction.getSelfLocalSeat())

   if CardAlgorithm:canOut(self._clientData._preOutSeat,
       self._clientData._powerSeat,
       checkCardsID,
       {},
       self._clientData._outCardsRecord,
       self._clientData._jokerData,
       self._clientData._lianZhaBuDai,
       self._clientData._gameType) == false then
       return
   end
    local event = {}
    event.outCardIDs = checkCardsID
    self:gameEventOutCards(event)
end

function GameScene:onTouchEventHint(send,eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    Game.GameSound.playButtonClick()
    if #self._clientData._handCard[Game.FrameworkFunction.getSelfSeat()] < 1 then
        return
    end
    if self._playback:isPlayback() then
        return
    end
    local time1 = socket.gettime()

    local isFirstSeat = self._clientData._preOutSeat == Game.FrameworkFunction.getMaxPlayer() or self._clientData._preOutSeat == Game.FrameworkFunction.getSelfSeat()
    local preOutCard = nil
    if isFirstSeat then
    else
        local lastOut = self._clientData._outCardsRecord[self._clientData._preOutSeat]
        preOutCard = lastOut[#lastOut]
    end

    local handCards = {}
    local GameCard = import("..GameAlgorithm.GameCard",CURRENT_MODULE_NAME)
    local MyCard = import("..GameAlgorithm.MyCard",CURRENT_MODULE_NAME)
    for i = 1,#self._clientData._handCard[Game.FrameworkFunction.getSelfSeat()] do
        local gameCard = GameCard:new()
        table.insert(handCards,MyCard.new(self._clientData._handCard[Game.FrameworkFunction.getSelfSeat()][i].id))
    end
    local jokerData = {}
    for i = 1,#self._clientData._jokerData do
        table.insert(jokerData,MyCard.new(self._clientData._jokerData[i].id))
    end

    local preOutCards = {}
    if preOutCard == nil then
        preOutCards.Cards = {}
        preOutCards.tType = 0
    else
        for i = 1,#preOutCard.Cards do
            table.insert(preOutCards,MyCard.new( preOutCard.Cards[i].id))
        end
        preOutCards.tType = preOutCard.tType
    end

    local time2 = socket.gettime()
    local outCardsType = CardAlgorithm:getCardTypesByMyCardsandType(preOutCards,preOutCards.tType,jokerData,self._clientData._lianZhaBuDai)

    local HintCard = import("..GameAlgorithmTZ.HintCard",CURRENT_MODULE_NAME)
    local aa = HintCard.GetHintCards(handCards,jokerData,self._clientData._lianZhaBuDai,outCardsType) 
    local time3 = socket.gettime()  
    local hintCards = {}
    for i = 1,#aa do
        local gameCard = GameCard:new()
        gameCard:setID(aa[i]:GetID())
        table.insert(hintCards,gameCard)
    end

    if #hintCards > 0 then
        local selfLocalSeat = Game.FrameworkFunction.getSelfLocalSeat()
        local selfHandCardIDs = self:getUICardLayer():getAllCardIDs(selfLocalSeat)
        local selfCheckedCardIndexs = self:getUICardLayer():getCheckedCardIDIndexes(selfLocalSeat)
        local hintCardIndexs = CardAlgorithm:getPlayerCardsIndexByGroup(hintCards,selfHandCardIDs,selfCheckedCardIndexs)
        
        self:getUICardLayer():clearCheckedCards(selfLocalSeat)
        local hintCardIDs = {}
        for i = 1,#hintCardIndexs do
            table.insert(hintCardIDs,selfHandCardIDs[hintCardIndexs[i]])
        end
        self:getUICardLayer():setCheckedCards(selfLocalSeat,hintCardIDs,hintCardIndexs)
        local tmpEvent = {}
        tmpEvent.checkedCardIDs = hintCardIDs
        tmpEvent.checkedCardIDIndexes = hintCardIndexs
        self:gameEventCheckedCard(tmpEvent)
    else
        Game.UIFunction.onTouchEventByObj(self:getRootNode(),
            GameSceneDefine.KW_BTN_PASS,
            self.onTouchEventPass,
            ccui.TouchEventType.ended,
            self)
    end
end

function GameScene:onTouchEventChaoDi(send,eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    Game.GameSound.playButtonClick()
    self:sendPlayerChaoDi()
    Game.UIFunction.setVisible(self:getRootNode(),GameSceneDefine.KW_BTN_CHAO_DI,false)
end

function GameScene:onTouchEventSort(send,eventType)  
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    
    Game.GameSound.playButtonClick()
    self._clientData._sortCardIndex = (self._clientData._sortCardIndex + 1 ) % GameKeyWord.KW_NUM_SORT_COUNT
    self._clientData._handCard[Game.FrameworkFunction.getSelfSeat()] = CardAlgorithm:sortCard(self._clientData._handCard[Game.FrameworkFunction.getSelfSeat()],self._clientData._sortCardIndex)
    local tmpHandCard = {}
    tmpHandCard = CardAlgorithm:gameCards2IDs(self._clientData._handCard[Game.FrameworkFunction.getSelfSeat()])
    self:getUICardLayer():setNorMalHandCards(Game.FrameworkFunction.seatToLocal(Game.FrameworkFunction.getSelfSeat()),tmpHandCard)
    
    if Game.FrameworkFunction.getChairs() == 4 then
        self._clientData._handCard[Game.FrameworkFunction.getFriendSeat()] = CardAlgorithm:sortCard(self._clientData._handCard[Game.FrameworkFunction.getFriendSeat()],self._clientData._sortCardIndex)
        tmpHandCard = {} 
        tmpHandCard = CardAlgorithm:gameCards2IDs(self._clientData._handCard[Game.FrameworkFunction.getFriendSeat()])
        local localSeat = Game.FrameworkFunction.seatToLocal(Game.FrameworkFunction.getFriendSeat())
        local handCardsID = self:getUICardLayer():getAllCardIDs(localSeat)
        if handCardsID and #handCardsID > 0 then
            self:getUICardLayer():setNorMalHandCards(localSeat,tmpHandCard)
        end
    end
    Game.TKFunction.addBtnClickCount(TalkingDataKeyword.KW_CLICK_DOUBLE_BUCKLE_SORT + self._gameID * 100)
end
----------------------------------------------以下为回放中按钮监听事件---------------------------------------------------------
--回放速率限制
local maxSpeed = 4
local minSpeed = 0.25

function GameScene:onTouchEventPlayBack(send,eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    self._playback:play()
    Game.UIFunction.setVisible(self:getRootNode(),GameSceneDefine.KW_BTN_PAUSE_BACK,true)
    Game.UIFunction.setVisible(self:getRootNode(),GameSceneDefine.KW_BTN_PLAY_BACK,false)
end

function GameScene:onTouchEventPauseBack(send,eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    self._playback:pause()
    Game.UIFunction.setVisible(self:getRootNode(),GameSceneDefine.KW_BTN_PAUSE_BACK,false)
    Game.UIFunction.setVisible(self:getRootNode(),GameSceneDefine.KW_BTN_PLAY_BACK,true)
end

function GameScene:onTouchEventPlayBackFast(send,eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    if self._playbackSpeed < maxSpeed then
        self._playbackSpeed = self._playbackSpeed*2
    else
        self._playbackSpeed = maxSpeed
    end
    self._playback:fast(self._playbackSpeed)
    self:showMoviePlaySpeed()
end

function GameScene:onTouchEventPlayBackSlow(send,eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    if self._playbackSpeed > minSpeed then
        self._playbackSpeed = self._playbackSpeed / 2.0 
    else
        self._playbackSpeed = minSpeed
    end

    self._playback:slow(self._playbackSpeed)
    self:showMoviePlaySpeed()
end

function GameScene:onTouchEventBackGround(send,eventType) 
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    SmartSelectCard:reset()
    self._uiMenuIsIn = false
    self:showMenu(false)
    for i = 1,Game.FrameworkFunction.getMaxPlayer() do
        self:showInfoPanel(i,false)
    end
    if self._isRuleShow then
        local ruleInfoBtn = Game.UIFunction.seekWidgetByName(self:getRootNode(), GameSceneDefine.KW_ROOM_RULE_BTN_RETRACT)
        self:onTouchEventRuleInfoRetract(ruleInfoBtn,ccui.TouchEventType.ended)
    end
end

function GameScene:onTouchEventRuleInfoShow(send,eventType)
    if eventType == ccui.TouchEventType.began then
        send:setColor(cc.c3b(212,28,34))
    elseif eventType == ccui.TouchEventType.ended then  
        if self._isRuleShow == false then
            self._isRuleShow = true
            Game.UIFunction.setVisible(self:getRootNode(), "KW_ROOM_RULE_BTN_RETRACT", true)
            Game.UIFunction.setVisible(self:getRootNode(), "KW_ROOM_RULE_BTN_SHOW", false)
            local scaleX = Game.UIFunction.seekWidgetByName(self:getRootNode(), "KW_ROOM_RULE_LAYOUT"):getScaleX()        
            local ruleListNode = Game.UIFunction.seekWidgetByName(self:getRootNode(), "KW_ROOM_RULE_BG")
            local distance = ruleListNode:getContentSize().width*scaleX       
            send:getParent():runAction(cc.MoveBy:create(0.2, cc.p(distance, 0)))
            ruleListNode:runAction(cc.FadeIn:create(0.2))
        end
        send:setColor(cc.c3b(255,255,255))
    elseif eventType == ccui.TouchEventType.canceled then
        send:setColor(cc.c3b(255,255,255))
    end
end

function GameScene:onTouchEventRuleInfoRetract(send,eventType)
    if eventType == ccui.TouchEventType.began then
        send:setColor(cc.c3b(212,28,34))                 
    elseif eventType == ccui.TouchEventType.ended then 
        if self._isRuleShow == true then
            self._isRuleShow = false
            Game.UIFunction.setVisible(self:getRootNode(), "KW_ROOM_RULE_BTN_RETRACT", false)
            Game.UIFunction.setVisible(self:getRootNode(), "KW_ROOM_RULE_BTN_SHOW", true)
            local scaleX = Game.UIFunction.seekWidgetByName(self:getRootNode(), "KW_ROOM_RULE_LAYOUT"):getScaleX()
            local ruleListNode = Game.UIFunction.seekWidgetByName(self:getRootNode(), "KW_ROOM_RULE_BG")
            local distance = ruleListNode:getContentSize().width * scaleX  
            send:getParent():runAction(cc.MoveBy:create(0.2, cc.p(-distance, 0)))
            ruleListNode:runAction(cc.FadeOut:create(0.2))
        end
        send:setColor(cc.c3b(255,255,255))
    elseif eventType == ccui.TouchEventType.canceled then
        send:setColor(cc.c3b(255,255,255))
    end
end


function GameScene:onTouchEventCopyRoomID(send,eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    
    local tmpName = KW_CONFIG_APP_NAME
    if self.teaHouseName and #self.teaHouseName > 0 then
        tmpName = self.teaHouseName .. "·"
    end
    --微信分享不能    出现支付
    local shareKeyword = import("..Config.ShareKeyWord",CURRENT_MODULE_NAME)
    local autoReady = self._clientData:getAutoReady()
    local autoReadyStr = ''
    if tonumber(autoReady) == 1 then
        autoReadyStr = '自动准备'
    end

    local nickName = Game.FrameworkFunction.getPlayerBySeat(Game.FrameworkFunction.getSelfSeat()):getNickName()
    local strText = "两帮:" .. self._clientData._maxplayCount .. '局,' .. Game.FrameworkFunction.getChairs() .. '人,'
    strText = strText .. self._strGameRule .. autoReadyStr .. "(长按复制消息打开游戏直接进房)"
    strText = "【边锋台州】" .. nickName .. "的房号【" .. self._boxRoomID .. "】\n" .. strText

    if self.teaHousePswd then
        strText = string.format("比赛场口令：%06d ",self.teaHousePswd) .. strText
        -- strURL  = shareKeyword.KW_MOCHUANG_LINK_URL .. "?key=house_" .. self.teaHousePswd .. "_table_" .. self._boxRoomID
    end

    local mapData = {["0"] = strText}
    XH.bf.ThirdManager:getInstance():callFunctionWithMap("sysfunc_copy_clipboard",mapData)
    if KW_CONFIG_IS_IOS_CHECK == true then
        Game.Interface.showPopLayer("WeakHintLayer",{"复制房间号成功！"})
    else
        Game.Interface.showPopLayer("WeakHintLayer",{"复制房间号成功，请到微信粘贴！"})
    end
end

function GameScene:onTouchEventCopyRoomNo(send,eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    
    local tmpName = KW_CONFIG_APP_NAME
    if self.teaHouseName and #self.teaHouseName > 0 then
        tmpName = self.teaHouseName .. "·"
    end
    --微信分享不能    出现支付
    local shareKeyword = import("..Config.ShareKeyWord",CURRENT_MODULE_NAME)
    local autoReady = self._clientData:getAutoReady()
    local autoReadyStr = ''
    if tonumber(autoReady) == 1 then
        autoReadyStr = '自动准备'
    end
    
    local nickName = Game.FrameworkFunction.getPlayerBySeat(Game.FrameworkFunction.getSelfSeat()):getNickName()
    local strText = "两帮：" .. self._clientData._maxplayCount .. '局,' .. Game.FrameworkFunction.getChairs() .. '人,'
    strText = strText .. self._strGameRule .. autoReadyStr .. "(长按复制消息打开游戏直接进房)"
    strText = "【边锋台州】" .. nickName .. "的房号【" .. self._boxRoomID .. "】\n" .. strText

    if self.teaHousePswd then
        strText = string.format("比赛场口令：%06d ",self.teaHousePswd) .. strText
        -- strURL  = shareKeyword.KW_MOCHUANG_LINK_URL .. "?key=house_" .. self.teaHousePswd .. "_table_" .. self._boxRoomID
    end

    local mapData = {["0"] = strText}
    XH.bf.ThirdManager:getInstance():callFunctionWithMap("sysfunc_copy_clipboard",mapData)
    if KW_CONFIG_IS_IOS_CHECK == true then
        Game.Interface.showPopLayer("WeakHintLayer",{"复制房间号成功！"})
    else
        Game.Interface.showPopLayer("WeakHintLayer",{"复制房间号成功，请到微信粘贴！"})
    end
    cc.Application:getInstance():openURL("weixin://")
end

function GameScene:onTouchEventSurrender(send, eventType)
    if eventType == ccui.TouchEventType.began then
        send:setScale(0.95)
        send:setColor(cc.c3b(160,160,160))
        Game.GameSound.playButtonClick()
    elseif eventType == ccui.TouchEventType.ended or
        eventType == ccui.TouchEventType.canceled then
        send:setScale(1)
        send:setColor(cc.c3b(255,255,255))
    end

    if eventType ~= ccui.TouchEventType.ended then
        return 
    end

    if self._playback:isPlayback() then
        return
    end

    --发送请求投降
    self:sendSurrenderRequestMsg()
end

function GameScene:onTouchEventScorePanel(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    local scoreCardIds = self._clientData:getScoreCards()
    local layer = Game.Interface.showPopLayer("ScoreCardLayer")
    if layer then
        layer:setOutScoreCard(scoreCardIds) 
    end
end

function GameScene:onTouchEventLobbyRule(send, eventType)
   if eventType == ccui.TouchEventType.began then
        send:setColor(cc.c3b(160,160,160))
        Game.GameSound.playButtonClick()
    elseif eventType == ccui.TouchEventType.ended or
        eventType == ccui.TouchEventType.canceled then
        send:setColor(cc.c3b(255,255,255))
    end
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    Game.Interface.showPopLayer("HelpLayer",{self._gameID})

    local menuBtn = ccui.Helper:seekWidgetByName(self:getRootNode(),GameSceneDefine.KW_BTN_MENU)
    if menuBtn then
        self:onTouchEventMenu(menuBtn,ccui.TouchEventType.ended)
    end

    Game.TKFunction.addBtnClickCount(TalkingDataKeyword.KW_CLICK_DOUBLE_BUCKLE_MENU_RULE + self._gameID * 100)
end

return GameScene
�