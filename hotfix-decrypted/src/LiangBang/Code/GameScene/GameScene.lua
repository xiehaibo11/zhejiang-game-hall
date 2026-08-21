local CURRENT_MODULE_NAME = ...
local Cell = import("GameCommon.Code.GameTea.Cell")
local GameScene = class("GameScene")
local GameSceneDefine = import(".GameSceneDefine",CURRENT_MODULE_NAME)
local GameMXY = import("GameCommon.Code.GameProtocol.GameMXY")
local Playback = import("GameCommon.Code.GameModule.Playback")
local SetData = import("..PopLayer.SetData")

GameScene.ENUM_PLAYER_ACT = {
    CHANGESEAT = 1,
    SITDOWNTOSTART = 2,
    SITDOEM = 3,
}

function GameScene.getAllFunction(class,meathon)
    meathon = meathon or {}

    if class.super ~= nil then
        meathon = GameScene.getAllFunction(class.super,meathon)
    end

    local gameScenemetatable = getmetatable(class)
    if gameScenemetatable == nil then
        gameScenemetatable = class
    end
    for i,v in pairs(gameScenemetatable.__index) do
        meathon[i] = v
    end
    return meathon
end

function GameScene:ctor()


    self._joinRoomID = 0
    self._roomMode = 0
    self._boxRoomID = 0
    self._srsProcessID = 1

    self._gameScene = nil  
    self._clientData = {}
    
    
    self._selfJustPlayState = 0
    self._isChangeSelfState = false --用改变状态来确认是否重连
    
    self._uiCardsLayer = nil
    self._uiSureCardsLayer = nil

    self._wireBreakCheckSchedule = 0
    -- 语音
    self._isPlayingVoice = false
    self._isRecordingVoice = false
    self._isPlaySelfVoiceTime = 0
    self._isPlayVoiceURL = ""
    self._playVoiceList = {}
    self._playOtherRecordNodes = nil

    self._fastvoCallBackScriptFuncID = 0
    self._uiMike = nil
    self._uiPlayRecord = nil 
    self._justPlayLocalSeatToURL = {}
    
    --回放
    self._uuid = 0
    self._playback = Playback.new()
    self._selfJustPlayState = 0
    self._isChangeSelfState = false --用改变状态来确认是否重连
    self._playbackSpeed = 1
    self._allHandCardsTime = 0

    --比赛新增
    self._matchInfo = nil
    self._matchPlazaInfo = nil
    self._matchHintLayer = nil 
    self._canContinue = false

    --续桌
    self._canContinue = false
    --是否显示投降按钮
    self._surrenderBtn = false
    self._headFrameUrl = {}
    self._numidList = {}
    self._numidToSeat = {}
end

function GameScene:setMetaTable(path)
    local scriptPath = path or {}
    table.insert(scriptPath,".GameSceneInterface")
    table.insert(scriptPath,".GameSceneUI")
    table.insert(scriptPath,".GameSceneCallBack")
    table.insert(scriptPath,".GameSceneReceiveGameMsg")
    table.insert(scriptPath,".GameSceneReceiveServerMsg")
    table.insert(scriptPath,".GameSceneTouchEvent")
    table.insert(scriptPath,".GameSceneSendMsg")
    table.insert(scriptPath,".GameSceneShowUI")
    table.insert(scriptPath,".GameEventDispatcher")
    table.insert(scriptPath,".GameSceneRequest")
    table.insert(scriptPath,".GameSceneRecordGameMsg")
    table.insert(scriptPath,".GameSceneFillRecordGameMsg")
    table.insert(scriptPath,".GameSceneMatch") 
    
    for i,v in ipairs(scriptPath) do
        scriptPath[i] = self.getFullPathName(v,CURRENT_MODULE_NAME)
    end

    local tmp = {}  
    for i = 1, #scriptPath do  
        local key = #scriptPath  
        tmp[i] = table.remove(scriptPath)  
    end  
    scriptPath = tmp

    local tmpmetatable = {}
    for i,v in ipairs(scriptPath) do
        local script = import(v,CURRENT_MODULE_NAME)
        local object = script.new()
        local objectemetatable = getmetatable(object)
        for scripti,scriptv in pairs(objectemetatable.__index) do
            tmpmetatable[scripti] = scriptv
        end
    end

    --local gameScenemetatable = getmetatable(self)
    local gameScenemetatable =  GameScene.getAllFunction(self)
    for i,v in pairs(gameScenemetatable) do
        tmpmetatable[i] = v
    end

    setmetatable(self, {__index = tmpmetatable}) 
end

function GameScene:downloadGameSound()
    if device.platform == "windows" then
        return
    end
    local searchPaths = cc.FileUtils:getInstance():getSearchPaths()
    table.insert(searchPaths,1, cc.FileUtils:getInstance():getWritablePath() .. self._gameID .. "/" .. tostring(cc.UserDefault:getInstance():getIntegerForKey("KW_DATA_VERSION_INDEX" .. self._gameID,0)) .. "/LiangBang/")
    cc.FileUtils:getInstance():setSearchPaths(searchPaths)

    local manifestPath = GameSceneDefine.KW_GAME_PATH.."/SoundHotUpdate/project_LiangBang.manifest"
    print('hcc>>downloadGameSound>>path: ' .. manifestPath)
    local isExist = cc.FileUtils:getInstance():isFileExist(manifestPath)
    if isExist then
        print('hcc>>downloadGameSound>> path isExist!!!!!!!')
        local GameSoundsHotUpdate = require("LiangBang.Code.Hotupdate.GameSoundsHotUpdate")
        local gameSoundsHotUpdate = GameSoundsHotUpdate:new()
        -- gameSoundsHotUpdate:checkUpdate(self:getRootNode(),manifestPath,self._gameID)
    end
end

function GameScene:start(roomID,gameID,sessionID,roomMode, boxRoomID, linkNet, matchInfo, matchPlazaInfo, playerCount, strEx)
  XH.GT.setAppID(roomID)
    self:setMetaTable()
    Game = {}
    Game.Interface = import(".GameSceneInterface",CURRENT_MODULE_NAME)
    Game.FrameworkFunction = import("..GameFunction.GameFunction",CURRENT_MODULE_NAME) 
    Game.PlayerData = import("GameCommon.Code.GameData.AllPlayersData")
    Game.UIFunction = import("GameCommon.Code.GameFunction.UIFunction")
    Game.GameSound = import("..GameFunction.GameSound",CURRENT_MODULE_NAME)
    Game.StringFunction = import("GameCommon.Code.GameFunction.StringFunction")
    Game.TableData = import("GameCommon.Code.GameData.TableData")
    Game.TKFunction = import("..TalkingData.TalkingDataFunction",CURRENT_MODULE_NAME)

	if self._bPlaybackOnline == true then
        Game.FrameworkFunction.getSelfPlayer = function()
            return Game.PlayerData.getPlayerBySeat(0)
        end
        Game.FrameworkFunction.getSelfSeat = function()
            return 0
        end
	end
    
    --数据
    local ClientData = import("..GameData.ClientData",CURRENT_MODULE_NAME)
    self._clientData = ClientData.new()  
    self._clientData:initEveryTime()

    self._joinRoomID = roomID
    self._roomMode = roomMode
    self._boxRoomID = boxRoomID
    self._strGameRule = ""
    self._gameID = gameID
    self._strGPS = strEx or ""

    self._gameScene = display.newScene("GameScene")
    self._gameScene.onEnter = handler(self,self.onEnter)
    self._gameScene.onExit = handler(self,self.onExit)
    
    --match
    self._matchInfo = matchInfo
    self._matchPlazaInfo = matchPlazaInfo
    
    self._playerEndState = false
    --实现加载csb
    self._gameLayer = cc.CSLoader:createNode(GameSceneDefine.KW_GAME_CSB_PATH .."LayerLB.csb")
    self._gameScene:addChild(self._gameLayer)
    local rootNode = self:getRootNode()
    self:adapt9BoxHD(rootNode)
    
    local gamebg = rootNode:getChildByName(GameSceneDefine.KW_UI_GAME_BG)
    if gamebg then
        Game.UIFunction.adaptBackgroundTZ(gamebg)
    end
    local cardLayer = rootNode:getChildByName(GameSceneDefine.KW_UI_CARD_LAYER)
    if cardLayer then
        Game.UIFunction.adaptBackgroundTZ(cardLayer)
    end
    
    --iPhoneX适配
    self:adaptForIphoneX(rootNode)

    cc.Director:getInstance():pushScene(self._gameScene)

    SetData.setDialectOpen(false)
    
    if not(linkNet == false) then
        if self._joinRoomID ~= 0 then
            local TransmitLinkGame = import("GameCommon.Code.GameTeaBusiness.TransmitLinkGame")
            local transmitLinkGame = TransmitLinkGame:new()
            transmitLinkGame:addCellCallBack(self,self.onLinkGameCallBack)
            transmitLinkGame:start(XH.areaData:getAreaID(),XH.playerData:getNumberID(),self._joinRoomID,XH.playerData:getSessionID(),10)
        end

        Game.Interface.addProtocolScriptFuncByObj(self,self.onMsgChatMsgData,XH.bf.ProcessIDList and XH.bf.ProcessIDList.Game or 1)
        -- Game.Interface.addProtocolScriptFuncByObj(self,self.onRecordGameMsg,XH.bf.ProcessIDList and XH.bf.ProcessIDList.Game or 1)
        Game.Interface.addProtocolScriptFuncByObj(self,self.onReciveGameMsg,XH.bf.ProcessIDList and XH.bf.ProcessIDList.Game or 1)
        -- Game.Interface.addProtocolScriptFuncByObj(self,self.onRecordTableInfo,XH.bf.ProcessIDList and XH.bf.ProcessIDList.Game or 1)
        Game.Interface.addProtocolScriptFuncByObj(self,self.onReciveTableInfo,XH.bf.ProcessIDList and XH.bf.ProcessIDList.Game or 1)

        -- 新比赛协议监听
        self:addMatchProtocolScript()
    end

    -- 添加Touch监听
    -- 大厅按钮
    
    for i = 1,Game.FrameworkFunction.getMaxPlayer() do
        local panelHeadNode = self:getUIPlayerHead(i)
        if panelHeadNode then
            local uiHeadPicNode = Game.UIFunction.seekWidgetByName(panelHeadNode,GameSceneDefine.KW_UI_HEAD_PIC)
            if uiHeadPicNode then
                uiHeadPicNode:addTouchEventListener(handler(i,handler(self,self.onTouchEventInfoPanel)))
            end
            --请求换位注释
            -- local swapSeatBtnNode = Game.UIFunction.seekWidgetByName(panelHeadNode,GameSceneDefine.KW_BTN_SWAP)
            -- if swapSeatBtnNode then
            --     swapSeatBtnNode:addTouchEventListener(handler(i,handler(self,self.onBtnEventSendRequestSwapSeat)))
            -- end
        end
    end
    
    Game.UIFunction.addTouchEventListenerByObj(self:getRootNode(),GameSceneDefine.KW_BTN_MENU,self,self.onTouchEventMenu)
    Game.UIFunction.addTouchEventListenerByObj(self:getRootNode(),GameSceneDefine.KW_BTN_TALK,self,self.onTouchEventTalk)
    Game.UIFunction.addTouchEventListenerByObj(self:getRootNode(),GameSceneDefine.KW_BTN_START,self,self.onTouchEventStart)
    Game.UIFunction.addTouchEventListenerByObj(self:getRootNode(),GameSceneDefine.KW_BTN_INVITE,self,self.onTouchEventShare)
    Game.UIFunction.addTouchEventListenerByObj(self:getRootNode(),GameSceneDefine.KW_BTN_COPY_ROOMNO,self,self.onTouchEventCopyRoomNo)
    Game.UIFunction.addTouchEventListenerByObj(self:getRootNode(),GameSceneDefine.KW_UI_GAME_BG,self,self.onTouchEventBackGround)
    Game.UIFunction.addTouchEventListenerByObj(self:getRootNode(),GameSceneDefine.KW_BTN_MIKE,self,self.onTouchEventMike)
    Game.UIFunction.addTouchEventListenerByObj(self:getRootNode(),GameSceneDefine.KW_BTN_MIKE_2,self,self.onTouchEventMike)
    Game.UIFunction.addTouchEventListenerByObj(self:getRootNode(),GameSceneDefine.KW_BTN_REPLAY,self,self.onTouchEventReplay)
    Game.UIFunction.addTouchEventListenerByObj(self:getRootNode(),GameSceneDefine.KW_BTN_PASS,self,self.onTouchEventPass)
    Game.UIFunction.addTouchEventListenerByObj(self:getRootNode(),GameSceneDefine.KW_BTN_TELL_ME,self,self.onTouchEventHint)
    Game.UIFunction.addTouchEventListenerByObj(self:getRootNode(),GameSceneDefine.KW_BTN_OUT_CARD,self,self.onTouchEventOutCard)
    Game.UIFunction.addTouchEventListenerByObj(self:getRootNode(),GameSceneDefine.KW_BTN_CHAO_DI,self,self.onTouchEventChaoDi)
    Game.UIFunction.addTouchEventListenerByObj(self:getRootNode(),GameSceneDefine.KW_BTN_SORT,self,self.onTouchEventSort)
    -- 添加复制房间号触发监听
    Game.UIFunction.addTouchEventListenerByObj(self:getRootNode(),GameSceneDefine.KW_UI_BOX_ROOM_INFO_BG,self,self.onTouchEventCopyRoomID)
    Game.UIFunction.addTouchEventListenerByObj(self:getRootNode(), GameSceneDefine.KW_BTN_SURRENDER, self, self.onTouchEventSurrender)
    Game.UIFunction.addTouchEventListenerByObj(self:getRootNode(),GameSceneDefine.KW_ROOM_RULE_BTN_SHOW,self,self.onTouchEventRuleInfoShow)
    -- Game.UIFunction.addTouchEventListenerByObj(self:getRootNode(),GameSceneDefine.KW_ROOM_RULE_BTN_RETRACT,self,self.onTouchEventRuleInfoRetract)
    Game.UIFunction.addTouchEventListenerByObj(self:getRootNode(),GameSceneDefine.KW_IMG_LB_SCORE_BG,self,self.onTouchEventScorePanel)
    
    if self._roomMode == Game.FrameworkFunction.ROOM_MODE.BOXROOM then
        Game.UIFunction.addTouchEventListenerByObj(self:getUIBoxMenu(),GameSceneDefine.KW_BTN_BACK,self,self.onTouchEventBack)
        Game.UIFunction.addTouchEventListenerByObj(self:getUIBoxMenu(),GameSceneDefine.KW_BTN_DISSOLVE,self,self.onTouchEventBoxRoomDismiss)
        Game.UIFunction.addTouchEventListenerByObj(self:getUIBoxMenu(),GameSceneDefine.KW_BTN_SETTING,self,self.onTouchEventSetUp)
        Game.UIFunction.addTouchEventListenerByObj(self:getUIBoxMenu(),GameSceneDefine.KW_BTN_GAME_RULE_LOBBY,self,self.onTouchEventLobbyRule)

        Game.UIFunction.setVisible(self:getRootNode(),GameSceneDefine.KW_BTN_GAME_RULE_LOBBY,false)

        self:turnNormalRoomFeatures(true) 
        self:turnBoxRoomFeatures(true)
    else
        Game.UIFunction.addTouchEventListenerByObj(self:getUINormalMenu(),GameSceneDefine.KW_BTN_SETTING,self,self.onTouchEventSetUp)
        Game.UIFunction.addTouchEventListenerByObj(self:getUINormalMenu(),GameSceneDefine.KW_BTN_CHANGE_TABLE,self,self.onTouchEventChangeSeat)
        Game.UIFunction.addTouchEventListenerByObj(self:getUINormalMenu(),GameSceneDefine.KW_BTN_EXIT,self,self.onTouchEventExit)
        Game.UIFunction.addTouchEventListenerByObj(self:getUINormalMenu(),GameSceneDefine.KW_BTN_ROBOT,self,self.onTouchEventTrust)
        Game.UIFunction.addTouchEventListenerByObj(self:getRootNode(),GameSceneDefine.KW_PANEL_ROBOT,self,self.onTouchEventRobotPanel)
        self:turnNormalRoomFeatures(true)
        self:turnBoxRoomFeatures(false)
        -- 比赛UI
        self:showMatchGameUI(playerCount)
        Game.UIFunction.addTouchEventListenerByObj(self:getRootNode(),GameSceneDefine.KW_BTN_HOSTING,self,self.onTouchEventTrust)
        if self._setDataGameTypeOpen then
            local robotPanel = Game.UIFunction.seekWidgetByName(self:getRootNode(),GameSceneDefine.KW_PANEL_ROBOT)
            Game.UIFunction.addTouchEventListenerByObj(robotPanel,"KW_BTN_CANCEL_HOSTING",self,self.onTouchEventRobotPanel)
        end
    
    end
    
    -- 自定义事件监听
    local listenerEventContinueGame = cc.EventListenerCustom:create("GameBigWinLostLayer.ContinueGame", handler(self,self.gameEventContinueGame))
    cc.Director:getInstance():getEventDispatcher():addEventListenerWithSceneGraphPriority(listenerEventContinueGame, self._gameScene)

    local listenerEventContinueGame = cc.EventListenerCustom:create("UIWinLost.ContinueGame", handler(self,self.gameEventContinueGame))
    self._gameLayer:getEventDispatcher():addEventListenerWithSceneGraphPriority(listenerEventContinueGame, self._gameLayer)
    
    local listenerEventSpeak = cc.EventListenerCustom:create("UITalk.Speak", handler(self,self.gameEventPlayerSpeak))
    self._gameLayer:getEventDispatcher():addEventListenerWithSceneGraphPriority(listenerEventSpeak, self._gameLayer)
    
    local listenerEventPlay = cc.EventListenerCustom:create("UICardLayer.UICardArea.onEventOutCards", handler(self,self.gameEventOutCards))
    self._gameLayer:getEventDispatcher():addEventListenerWithSceneGraphPriority(listenerEventPlay, self._gameLayer)
    
    local listenerEventSureCard = cc.EventListenerCustom:create("UISureCard.onEventSureCards", handler(self,self.gameEventOutCards))
    self._gameLayer:getEventDispatcher():addEventListenerWithSceneGraphPriority(listenerEventSureCard, self._gameLayer)
    
    local listenerEventCheckedCard = cc.EventListenerCustom:create("UICardLayer.UICardArea.onEventCheckedCard", handler(self,self.gameEventCheckedCard))
    self._gameLayer:getEventDispatcher():addEventListenerWithSceneGraphPriority(listenerEventCheckedCard, self._gameLayer)
    
    local listenerEventSpecfCard = cc.EventListenerCustom:create("UISpecfCardLayer.SpecfCard", handler(self,self.gameEventSpecCard))
    self._gameLayer:getEventDispatcher():addEventListenerWithSceneGraphPriority(listenerEventSpecfCard, self._gameLayer)

    local listenerEventSurrenderOk = cc.EventListenerCustom:create("SurrenderLayer.SurrenderOK", handler(self,self.gameEventSurrenderOK))
    self._gameLayer:getEventDispatcher():addEventListenerWithSceneGraphPriority(listenerEventSurrenderOk, self._gameLayer)

    local listenerEventBuyCard = cc.EventListenerCustom:create("SurrenderLayer.BuyCard", handler(self,self.gameEventBuyCard))
    self._gameLayer:getEventDispatcher():addEventListenerWithSceneGraphPriority(listenerEventBuyCard, self._gameLayer)

    local listenerEventShuffle = cc.EventListenerCustom:create("UIWinLost.Shuffle", handler(self,self.gameEventShuffle))
    self._gameLayer:getEventDispatcher():addEventListenerWithSceneGraphPriority(listenerEventShuffle, self._gameLayer)

    local listenerEventIsAgreeDismiss = cc.EventListenerCustom:create("UIDismissLayer.AgreeFlag", handler(self,self.gameEventIsAgreeDismiss))
    self._gameLayer:getEventDispatcher():addEventListenerWithSceneGraphPriority(listenerEventIsAgreeDismiss, self._gameLayer)


    if self._fastvoCallBackScriptFuncID == 0 then
        -- self._fastvoCallBackScriptFuncID = XH.bf.ThirdManager:getInstance():addYMNCallBackScriptFunc(handler(self,self.onFastVoiceCallBack))
    end
    --安卓返回
    self._gameLayer:setKeypadEnabled(true)
    self._gameLayer:addNodeEventListener(cc.KEYPAD_EVENT, function (event)
        if event.key == "back" then            
            if self._roomMode == Game.FrameworkFunction.ROOM_MODE.BOXROOM then
                local backNode = ccui.Helper:seekWidgetByName(self:getRootNode(), GameSceneDefine.KW_BTN_BACK)
                if backNode then
                    self:onTouchEventBack(backNode,ccui.TouchEventType.ended)
                end 
            else
                local exitNode = ccui.Helper:seekWidgetByName(self:getRootNode(), GameSceneDefine.KW_BTN_EXIT)
                if exitNode then
                    self:onTouchEventExit(exitNode,ccui.TouchEventType.ended)
                end 
            end
        elseif event.key == "menu" then
            self:sendWireBreakSignal()    
        end
    end)

    self:showSysTime()
    self:showPowerState() 
    self:checkGameLink()
    self:downloadGameSound()
    
    --小提示增加
    Game.UIFunction.setVisible(self:getRootNode(),GameSceneDefine.KW_TEXT_SMALL_HINT,true)
    Game.GameSound = require("LiangBang.Code.GameFunction.GameSound")
    Game.UIFunction.setVisible(self:getRootNode(),KW_BTN_TALK,false)
    local startY = Game.UIFunction.getPositionY(self:getRootNode(),GameSceneDefine.KW_UI_GAME_SOUNDS_DOWNLOAD) + 35
    Game.UIFunction.setPositionY(self:getRootNode(),GameSceneDefine.KW_UI_GAME_SOUNDS_DOWNLOAD,startY)
    local txtTips = Game.UIFunction.getPositionY(self:getRootNode(),KW_TEXT_TIPS) - 5
    Game.UIFunction.setPositionY(self:getRootNode(),KW_TEXT_TIPS,txtTips)

    if self._roomMode ~= Game.FrameworkFunction.ROOM_MODE.MATCHROOM and self._roomMode ~= Game.FrameworkFunction.ROOM_MODE.BOXROOM then
        self:adaptGoldRoomInfo()
        Game.UIFunction.setVisible(self:getRootNode(),"KW_ROOM_RULE_LAYOUT",false)
    end

    local UICardDefine = import("LiangBang.Code.CardLayer.UICardDefine")
    if UICardDefine then
        cc.SpriteFrameCache:getInstance():addSpriteFrames(UICardDefine.KW_PATH_FFZ_IMG)
        cc.SpriteFrameCache:getInstance():addSpriteFrames(UICardDefine.KW_PATH_FFZ_CARD_IMG)
    end
end

function GameScene:clearTable()     
    for i = 1,Game.FrameworkFunction.getMaxPlayer() do
        self:clearTableBySeat(i)
        self:showAlert(i,false)
        self:showJokerCard(i,nil,false)
        self:showNoJoker(i,false)
        self:showNoBomb(i,false)
    end
    self:showNoOutZanDanGongXian({},false)
    self._clientData:initEveryTime()
    self:getUIWinLost():showWinLostPanel(false) -- for test
    Game.UIFunction.setText(self._rootNode,GameSceneDefine.KW_TEXT_WIN_MUT,"x" .. 1)
    Game.UIFunction.setText(self._rootNode,GameSceneDefine.KW_TEXT_LOST_MUT,"x" .. 1)
    Game.UIFunction.setVisible(self._rootNode,GameSceneDefine.KW_PANEL_BTNS_GAME_NORMAL , false)
    Game.UIFunction.setVisible(self._rootNode,GameSceneDefine.KW_BTN_CHAO_DI , false)
    Game.UIFunction.setVisible(self._rootNode, GameSceneDefine.KW_BTN_SURRENDER, false)
    self._playerEndState = false
    self:getUICardLayer():clearBombCards()
end

function GameScene:clearTableBySeat(localSeat) 
    self:showCardCount(localSeat,0,false)
    local headUI =  self:getUIPlayerHead(localSeat)
    if headUI then 
        Game.UIFunction.setText(headUI,GameSceneDefine.KW_UI_GAME_END_RANK,"") 
        Game.UIFunction.setVisible(headUI,GameSceneDefine.KW_UI_GAME_END_RANK,false) 
    end
    local lostContribution = self:getContributionBySeat(localSeat)
    if lostContribution then
        lostContribution:setString(0)
    end
    self:getUICardLayer():clearHandCards(localSeat)
    self:getUICardLayer():clearOutCards(localSeat)
    self:getUICardLayer():clearCheckedCards(localSeat)
end

function GameScene:onEnter()
    -- local glView = cc.Director:getInstance():getOpenGLView()
    -- glView:setDesignResolutionSize(1920, 1080, cc.ResolutionPolicy.EXACT_FIT)

    Game.Interface.movePopLayerToScene() 
    Game.Interface.popLayer("LoadingLayer")
    cc.Director:getInstance():setAnimationInterval(1/45)
    Game.TKFunction.startSendTKData()
    self:addMatchJoinRoomProtocolScript()
    cc.Director:getInstance():setDisplayStats(false)
    local  gameSound =  require("LiangBang.Code.GameFunction.GameSound")
    if gameSound then
        -- gameSound.playBackGroundMusic()  --TODO 背景音效
    end
end

function GameScene:onExit()
    cc.Director:getInstance():getScheduler():unscheduleScriptEntry(self._wireBreakCheckSchedule)
    
    Game.Interface.removeProtocolScriptFuncByObj(self,self.onMsgChatMsgData)
    Game.Interface.removeProtocolScriptFuncByObj(self,self.onReciveGameMsg)
    -- Game.Interface.removeProtocolScriptFuncByObj(self,self.onRecordGameMsg)
    -- Game.Interface.removeProtocolScriptFuncByObj(self,self.onRecordTableInfo)
    Game.Interface.removeProtocolScriptFuncByObj(self,self.onReciveTableInfo)
    Game.PlayerData.clearPlayersData()
    -- 比赛离开
    self:leaveMatchGame()
    
    if self._fastvoCallBackScriptFuncID ~= 0 then
        XH.bf.ThirdManager:getInstance():removeYMNCallBackScriptFunc(self._fastvoCallBackScriptFuncID)
        self._fastvoCallBackScriptFuncID = 0
    end
    
    self._playback:stopPlayback()
    
    local toRemoveModulePrefix =  GameSceneDefine.KW_GAME_PATH
    local toRemoveModuleGameCommon =  "GameCommon"
    for k,v in pairs(package.loaded) do
        if toRemoveModulePrefix == string.sub(k, 1, #toRemoveModulePrefix) then
            if package.loaded[k] then
                package.loaded[k] = nil
            end
        end
        if toRemoveModuleGameCommon == string.sub(k, 1, #toRemoveModuleGameCommon) then
            if package.loaded[k] then
                package.loaded[k] = nil
            end
        end
    end
    -- cc.Director:getInstance():setAnimationInterval(1/30)
    -- cc.FileUtils:getInstance():setSearchPaths({})
    Game.TKFunction.stopSendTKData()
    -- AudioEngine.pauseMusic()
    --退出游戏时清除相关资源缓存
    -- display.removeUnusedSpriteFrames()
end

function GameScene:onRelink()
    Game.PlayerData.clearPlayersData()  -- 清除所有玩家数据   
    self:clearTable()
    for i = 1,Game.FrameworkFunction.getMaxPlayer() do
        if i ~= Game.FrameworkFunction.getSelfLocalSeat() then
            Game.UIFunction.setVisible(self:getUIPlayerHead(i),GameSceneDefine.KW_PANEL_HEAD_ .. i,false)
        end
    end
end

function GameScene:enterGame()
    Game.PlayerData.clearPlayersData()  -- 清除所有玩家数据   
    self:clearTable()
    self:showTrustPanel(false)
    for i = 1,Game.FrameworkFunction.getMaxPlayer() do
        if i ~= Game.FrameworkFunction.getSelfLocalSeat() then
            Game.UIFunction.setVisible(self:getUIPlayerHead(i),GameSceneDefine.KW_IMAGE_HEAD_BG,false)
            Game.UIFunction.setVisible(self:getUIPlayerHead(i),GameSceneDefine.KW_IMAGE_NO_PLAYER,true)
        end
    end
    local TransmitLinkGame = import("GameCommon.Code.GameTeaBusiness.TransmitLinkGame")
    local transmitLinkGame = TransmitLinkGame:new()
    transmitLinkGame:addCellCallBack(self,self.onLinkGameCallBack)
    transmitLinkGame:start(XH.areaData:getAreaID(),XH.playerData:getNumberID(),self._joinRoomID,XH.playerData:getSessionID(),10)
end

function GameScene:leaveGame(canBack)
    if self._fastVoiceScheduleID then
        cc.Director:getInstance():getScheduler():unscheduleScriptEntry(self._fastVoiceScheduleID)
        XH.bf.ThirdManager:getInstance():callFunction("fastvo_cancel_record")
    end
    self:sendWireBreakSignal()
    
    local eventDispatcher = cc.Director:getInstance():getEventDispatcher()
    local event = cc.EventCustom:new("GameScene.exitgame")
    eventDispatcher:dispatchEvent(event) 
    
    if canBack then
    else
        local GameMXY = import("GameCommon.Code.GameProtocol.GameMXY")
        local playerLeaveData = GameMXY.PlayerLeave:new()
        Game.Interface.sendMessage(playerLeaveData,nil,1)
        if self._leaveRoomCallFunc then
            self._leaveRoomCallFunc(self._joinRoomID)  
        end
    end

    Game.PlayerData.clearPlayersData()
    cc.Director:getInstance():popScene()
    
    --断开游戏连接 todo
    XH.GT.setAppID(0)
    -- local srsGroupID = XH.GT.SRSManager:getInstance().getSRSGroupIDByAppID(self._joinRoomID)
    -- srsGroupID = srsGroupID or KW_CONFIG_DEFAULT_SRS_GROUP_ID
    -- XH.GT.SRSManager:getInstance():setAppIDBySRSGroupID(srsGroupID,0)
    -- XH.GT.SRSManager:getInstance():setGameAppID(0,srsGroupID)
    -- if self._joinRoomID ~= 0 then
        -- XH.GT.SRSManager:getInstance():removeAppID(self._joinRoomID,srsGroupID)
    -- end
    
    self:matchPopScene()
    self:onExit()
end

local maxWireBreakKeepTime = 15
function GameScene:checkPlayerLinkState()
    local playerHeartTime = self._clientData._playerHeartTime
    local curTime = socket.gettime()
    for seat,time in pairs(playerHeartTime) do
        local diffTime = curTime - time;
        local isWireBreak = diffTime > maxWireBreakKeepTime
        local player = Game.PlayerData.getPlayerBySeat(seat)
        if player and player ~= Game.FrameworkFunction.getSelfPlayer() then
            if isWireBreak then
                self:showWirebreakSign(player:getSeat(), true)
            else
                self:showWirebreakSign(player:getSeat(), false)
            end
        end
    end
end

function GameScene:playbackStart(gameID,roomMode,boxRoomID,recordPath)
    self:setPlaybackOnline(true)
    self:start(0,gameID,nil,roomMode, boxRoomID,false)
    Game.UIFunction.addTouchEventListenerByObj(self:getRootNode(),GameSceneDefine.KW_BTN_PLAY_BACK,self,self.onTouchEventPlayBack)
    Game.UIFunction.addTouchEventListenerByObj(self:getRootNode(),GameSceneDefine.KW_BTN_PAUSE_BACK,self,self.onTouchEventPauseBack)
    Game.UIFunction.addTouchEventListenerByObj(self:getRootNode(),GameSceneDefine.KW_BTN_ADD_SPEED,self,self.onTouchEventPlayBackFast)
    Game.UIFunction.addTouchEventListenerByObj(self:getRootNode(),GameSceneDefine.KW_BTN_MINUS_SPEED,self,self.onTouchEventPlayBackSlow)

    Game.UIFunction.setVisible(self:getRootNode(),GameSceneDefine.KW_BTN_PROP,false)
    Game.UIFunction.setVisible(self:getRootNode(),GameSceneDefine.KW_PANEL_PLAYBACK_TIP,true)
    Game.UIFunction.setVisible(self:getRootNode(),GameSceneDefine.KW_PANEL_PLAYBACK_SET,true)
    self._playback:setReciveGameMsgData(self,self.onReciveGameMsg)
    self._playback:setReciveGameMsgData(self,self.onReciveTableInfo)
    self._playback:setReciveGameMsgData(self, self.onMsgChatMsgData)
    if string.find(recordPath,"AllDirection") then
        local file = io.open(recordPath,"rb")
        local fillMsg = {}
        fillMsg.subXYID = tonumber(file:read(6),10)
        fillMsg.subLen = tonumber(file:read(6),10) or 0
        fillMsg.subBuff = file:read(fillMsg.subLen)
        self._playback:setFillGameMsgData(self,self.onAdjustRecordGameMsgList,fillMsg)
    end
    self._playback:startPlayback(recordPath)
    self:showMoviePlaySpeed()
end

function GameScene:setPlaybackOnline(bPlay)
    self._bPlaybackOnline = bPlay
end

function GameScene.getFullPathName(moduleName, currentModuleName)
    local currentModuleNameParts
    local moduleFullName = moduleName
    local offset = 1

    while true do
        if string.byte(moduleName, offset) ~= 46 then -- .
            moduleFullName = string.sub(moduleName, offset)
            if currentModuleNameParts and #currentModuleNameParts > 0 then
                moduleFullName = table.concat(currentModuleNameParts, ".") .. "." .. moduleFullName
            end
            break
        end
        offset = offset + 1

        if not currentModuleNameParts then
            if not currentModuleName then
                local n,v = debug.getlocal(3, 1)
                currentModuleName = v
            end

            currentModuleNameParts = string.split(currentModuleName, ".")
        end
        table.remove(currentModuleNameParts, #currentModuleNameParts)
    end

    return moduleFullName
end

function GameScene:adaptForIphoneX(rootNode)
    local viewSize = cc.Director:getInstance():getOpenGLView():getFrameSize()
    --此处修改需要先放外放了大厅display最新代码，处理掉了原先的2436判断
    if display.hasNotchInScreen and display.notchWidth > 0 then
        self:adaptForIphoneXEx(rootNode,display.notchWidth)
        self:adaptMinNode(rootNode,display.notchWidth)
    else
        self:adaptForIphoneXEx(rootNode,70)
        self:adaptMinNode(rootNode,70)
    end
end

function GameScene:adaptForIphoneXEx(node,startPosX)
    if node == nil then
        return
    end
    local designSize = cc.Director:getInstance():getWinSize()
    local safeSize = cc.size(designSize.width - startPosX * 2 ,designSize.height)

    local childrenNode = node:getChildren()
    for i = 1 , #childrenNode do
        local nodePos = cc.p(childrenNode[i]:getPosition())
        local newPos = cc.p(startPosX + nodePos.x / designSize.width * safeSize.width , nodePos.y)
        if childrenNode[i]:getName() ~= GameSceneDefine.KW_UI_GAME_BG then
            childrenNode[i]:setPosition(newPos)
        end
    end

    local voiceNode = Game.UIFunction.seekWidgetByName(self:getRootNode(),"KW_PANEL_FEATURES") --聊天界面
    local benlunfenNode = Game.UIFunction.seekWidgetByName(self:getRootNode(),GameSceneDefine.KW_PANEL_BENLUNFEN)
    local menuNode = Game.UIFunction.seekWidgetByName(self:getRootNode(),"KW_PANEL_MENU") --BACK
    local headUI_3 = self:getUIPlayerHead(3)
    local headUI_1 = self:getUIPlayerHead(1)
    local sortNode = Game.UIFunction.seekWidgetByName(self:getRootNode(),GameSceneDefine.KW_BTN_SORT)
    local ready1 = Game.UIFunction.seekWidgetByName(self:getRootNode(),"KW_PANEL_READY_1")
    
    local deviation = designSize.width - startPosX
    if voiceNode then
        voiceNode:setPositionX(deviation)
    end
    if menuNode then
        menuNode:setPositionX(deviation)
    end
    if benlunfenNode then
        benlunfenNode:setPositionX(deviation)
    end
    if headUI_3 then
        headUI_3:setPositionX(deviation)
    end
    if sortNode then
        sortNode:setPositionX(deviation - 200)
    end
end

function GameScene:adaptMinNode(node,startPosX)
    local screenSize = cc.Director:getInstance():getWinSize()
    local designSize = Game.UIFunction.getDesignSizeHD()
    local deviation = screenSize.width/2
    -- local tableNode = {}
    local childrenNode = node:getChildren()
    for i = 1 , #childrenNode do
        local nodePosX = childrenNode[i]:getPositionX()
        local name = childrenNode[i]:getName()
        if nodePosX >= designSize.width/2 and nodePosX <= designSize.width/2 + startPosX + 10 then
            if childrenNode[i]:getName() ~= GameSceneDefine.KW_UI_GAME_BG then
                childrenNode[i]:setPositionX(deviation)
            end
        end
    end
    -- tableNode[1] = Game.UIFunction.seekWidgetByName(self:getRootNode(),"KW_PANEL_GAME_INFO_SYS") 
    -- tableNode[2] = Game.UIFunction.seekWidgetByName(self:getRootNode(),"KW_PANEL_HEAD_TIPS_2") 
    -- tableNode[3] = Game.UIFunction.seekWidgetByName(self:getRootNode(),"KW_PANEL_HEAD_TIPS_4") 
    -- tableNode[4] = Game.UIFunction.seekWidgetByName(self:getRootNode(),"KW_PANEL_READY_2") 
    -- tableNode[5] = Game.UIFunction.seekWidgetByName(self:getRootNode(),"KW_ACTION_ANI_PANEL_2") 
    -- tableNode[6] = Game.UIFunction.seekWidgetByName(self:getRootNode(),"KW_ACTION_ANI_PANEL_4") 
    -- tableNode[7] = Game.UIFunction.seekWidgetByName(self:getRootNode(),"KW_POS_BOOM_ANI") 
    -- tableNode[8] = Game.UIFunction.seekWidgetByName(self:getRootNode(),"KW_PANEL_BTNS_GAME") 
    -- tableNode[9] = Game.UIFunction.seekWidgetByName(self:getRootNode(),"KW_PANEL_BTNS_READY") 
    -- tableNode[10] = Game.UIFunction.seekWidgetByName(self:getRootNode(),"KW_PANEL_BOTTOM_LINE") 
    -- tableNode[11] = Game.UIFunction.seekWidgetByName(self:getRootNode(),"KW_PANEL_PLAYBACK_TIP") 
    -- tableNode[12] = Game.UIFunction.seekWidgetByName(self:getRootNode(),"KW_PANEL_PLAYBACK_SET") 

    -- for i = 1, #tableNode do
    --     tableNode[i]:setPositionX(deviation)
    -- end
end

function GameScene:adapt9BoxHD(node)
    if node == nil then
        return
    end
    local glView = cc.Director:getInstance():getOpenGLView()
    local screenSize = cc.Director:getInstance():getWinSize()
    local designSize = Game.UIFunction.getDesignSizeHD()
    local scaleY = screenSize.height / designSize.height
    local kuangaobi = ( screenSize.width / screenSize.height) / (designSize.width / designSize.height)
    node:setScaleY(scaleY)
    local childrenNode = node:getChildren() 
    for i = 1 , #childrenNode do
        if kuangaobi < 1 then
            childrenNode[i]:setScaleX(scaleY * kuangaobi )
            childrenNode[i]:setScaleY(kuangaobi)
        else
            childrenNode[i]:setScaleX(scaleY) 
        end
    end
    -- Game.UIFunction.setScale(self:getRootNode(),GameSceneDefine.KW_UI_GAME_BG, kuangaobi)
    -- Game.UIFunction.setScale(self:getRootNode(),GameSceneDefine.KW_UI_CARD_LAYER, kuangaobi)
end

return GameScene  ��  