local eventType = import("newgold.GoldLobby.Modules.PeakRaceGame.XZDD.EventType")
local PKGameSet = require("newgold.MatchGames.subPKGame.PKGamePublic.PKGameSet")
local ExternalFunc = require("newgold.GoldLobby.Modules.PeakRaceGame.XZDD.ExternalFunc")
local PokerGameBase = class("GameBase", cc.load("mvc").ViewBase)
local GamePublic = require("newgold.MatchGames.GamePublic.GamePublic")

--幸运表情动画名
local luckAnimationName = {
    [1] = "caishend",
    [2] = "xishou",
    [3] = "zhaocm",
}

--幸运表情提示名字
local luckName = {
    [1] = "财神爷",
    [2] = "洗手",
    [3] = "招财猫",
}

--幸运表情偏移量，让其居中
local luckOffset = {
    [1] = cc.p(-15, -280),
    [2] = cc.p(-50, -120),
    [3] = cc.p(-15, -140),
}

--幸运表情持续世界
local luckTime = {
    3.0,
    5.9,
    4.2,
}


function PokerGameBase:ctor(...)
    local params = {...}
    self.mainRuler = params and params[1]
    
    self.tablePlayerInfoTable = {0,0,0,0}          --字牌中最多3个人，初始值都为0，如果有人数加进来就替换0，存放每个玩家详细信息，从左到右依次为自己，下家，对家，上家。
    self.tablePlayerHeadImgTable = {0,0,0,0}       --哪个位置坐的有人，
    self.tablePlayerTable = {0,0,0,0}               --各个玩家的手牌，出牌

    self.chatFaceType = 1

    self._voiceMsgQueue = {}                --语音播放队列

    self.djsSchedle = nil                   -- 倒计时时间

    self.isChooseRealTimeVoice = false      --是否勾选了实时语音

    self.isClub = false                     --是否是亲友圈开房

    self.isGameStart = false 

    self.isFangzhu = false

    self.createPlayerID = 0             -- 创房者id
    
    self.showJushuLable = false

    self.MinorGamePlayRuleList  = {}        -- 房间规则    
    self.MainGamePlayRule       = nil 
    self.isThisRoundOver = false
    PokerGameBase.super.ctor(self)
    self.node = cc.Node:create()
    if g_gameGlobal:getGameScene() ~= nil then
        g_gameGlobal:getGameScene():addChild(self.node)
    end
    self:netEvent()
    if type(self.__subCoverCtorFunc) == "function" then
        self:__subCoverCtorFunc()
    end
    
    -- 意图处理预加载
    GamePublic:loadItemFxPool()
    
    self.isSceneReady2PlayEnterFx = false  -- 是否完成了场景切换
    self.enterRoomFxCache   = {}

    -- 幸运道具新增
    self.luckStatus = 0
    self.luckTipStatus = 0
    self.luckAnimationCache = {}
end 

function PokerGameBase:initRoomInfo(msg)
    -- 观战标识
    self.isWatchWar = (msg.unused5 and msg.unused5 == 1)
    
    -- 禁止查看id
    self.playerIndexVisible = msg and (msg.unused3 ~= 1) or false
    self:adjustLuckBtnPos()
end

--function PokerGameBase:refreshDeskWatermark(MainGamePlayRule)
--    pcall(
--        function()
--            local Image_icon = self.resourceNode_:getChildByName("Image_icon")
--            local watePng = string.format("noplist/GameDeskWatermark/%s.png", tostring(MainGamePlayRule))
--            if Image_icon and cc.FileUtils:getInstance():isFileExist(watePng) then
--                Image_icon:loadTexture(watePng,ccui.TextureResType.localType)
--                Image_icon:ignoreContentAdaptWithSize(true)
--            end
--        end
--    )
--end

function PokerGameBase:updateSetLayer()
    
    local setLayer = g_gameGlobal:getGameScene():getChildByName("GameSetLayer")
    if not tolua.isnull(setLayer) then
        setLayer:updateGameWanFaSetting(self.isFangzhu,self.isGameStart)
    end
end

function PokerGameBase:btnEventFunc(sender)
    if sender == self.chatBtn and g_gameGlobal:getGameScene() ~= nil then
        
    elseif sender == self.gpsBtn then
        --self:refreshGpsLayer(true)

    elseif sender == self.setBtn then
        g_gameGlobal:backToLobby()
    elseif  sender == self.zhanjiBtn then
        
    
    -- 回看
    elseif sender == self.reviewBtn then
        
        local msgStruct = {}
        msgStruct.operation = g_gameConstant.POKER_OPERATION_GET_LAST_CHU_CARDS
        g_longConnect:sendMsg(g_msgDefinitions.MSG_GAME_PLAYER_TABLE_OPERATION, msgStruct)
        NFrame.Commons.UploadPointFuncs:uploadCustomData(NFrame.Defines.UploadPointDefines.CUSTOM_ID_POKER_REPLAY_BTN)
    elseif sender == self.ruleBtn then
        -- 规则
        self:ruleBtnFunc(sender)
    elseif sender == self.luckBtn then
        local gameScene = g_gameGlobal:getGameScene()
        if gameScene and not tolua.isnull(gameScene) then
            local m_LuckAnimation = gameScene:getChildByName("luck_animation")
            if (not m_LuckAnimation or tolua.isnull(m_LuckAnimation)) then
                local tipAction = self.luckBtn:getChildByName("luck_action_tip")
                if tipAction and not tolua.isnull(tipAction) then
                    self.luckTipStatus = 1
                end
                if (not g_gameGlobal:getGameScene():getChildByName("luck_view")) then
                    self:setLuckViewVisible(true)
                else
                    self:setLuckViewVisible(false)
                end
            end
        end
    end
end

function PokerGameBase:updateRealTimeSpeakerState()
    if not self.realTimeVoiceBtn then
        return
    end

    if self.realTimeVoiceSwitch then
        self.realTimeVoiceBtn:loadTextures("noplist/speaker_on.png", "noplist/speaker_on.png", "",ccui.TextureResType.localType)
    else
        self.realTimeVoiceBtn:loadTextures("noplist/speaker_off.png", "noplist/speaker_off.png", "",ccui.TextureResType.localType)
    end
end

function PokerGameBase:updateRealTimeMicState()
    if self.realTimeMicSwitch then
        self.voiceBtn:loadTextures("noplist/mic_on.png", "noplist/mic_on.png", "",ccui.TextureResType.localType)
    else
        self.voiceBtn:loadTextures("noplist/mic_off.png", "noplist/mic_off.png", "",ccui.TextureResType.localType)
    end
end

function PokerGameBase:realTimeVoiceFunc(event)
    if event.name == "ended" then
        self.realTimeVoiceSwitch = not self.realTimeVoiceSwitch
        g_UserDataTable.realTimeVoiceSwitchOn = self.realTimeVoiceSwitch
        self:updateRealTimeSpeakerState()

        g_RealTimeVoiceMgr:EnableSpeaker(self.realTimeVoiceSwitch)
    end
end

function PokerGameBase:playVoiceWith(audioContent)
    print('receive voice msg...')
    if tolua.isnull(self) then
        return
    end
   
    --将语音数据保存进队列
    table.insert(self._voiceMsgQueue,audioContent)
    self:playVocie()
end

function PokerGameBase:getTablePlayerHeadIcons()
    local tb = {}
    for i,v in ipairs(self.tablePlayerHeadImgTable) do
        if type(v)=="userdata" and not tolua.isnull(v) then
            tb[i] = v:getHeadIcon()
        end
    end
    return tb
end

function PokerGameBase:playVocie()
    
end

function PokerGameBase:onPlayVoiceOver()
    --隐藏当前位置播放语音消息的动画
    if self.tablePlayerHeadImgTable[self._playingSeat] ~= 0 then
        self.tablePlayerHeadImgTable[self._playingSeat]:showChatVoice(false)
    end
    self._playingSeat = nil
end

function PokerGameBase:update(dt)
    --TODO 使用原生平台播放完毕接口判断播放完成
    if self._lastPlayTime then
        if g_gameGlobal:getTime() > self._lastPlayTime + 0.2 then
            self:onPlayVoiceOver()
            self._lastPlayTime = nil
        end
    else
        self:playVocie()
    end
    if self.luckStatus and self.luckStatus == 2 then
        self.luckStatus = 0
        local m_LuckNode = g_gameGlobal:getGameScene():getChildByName("luck_animation")
        if m_LuckNode and not tolua.isnull(m_LuckNode) then
            m_LuckNode:removeFromParent()
        end
        if table.nums(self.luckAnimationCache) > 0 then
            self:playLuckAnimation(self.luckAnimationCache[1],true)
        else
            if self.chatBtn and not tolua.isnull(self.chatBtn) then
                self.chatBtn:setTouchEnabled(true)
            end
            for k, v in pairs(self.tablePlayerHeadImgTable) do
                if v and v ~= 0 then
                    v:setHudongEnable(true)
                end
            end
        end
    end
    if self.luckBtn and self.luckTipStatus and self.luckTipStatus == 1 then
        self.luckTipStatus = 0
        local tipAction = self.luckBtn:getChildByName("luck_action_tip")
        if tipAction and not tolua.isnull(tipAction) then
            tipAction:removeFromParent();
        end
    end
end


function PokerGameBase:isHasMinorRule(gameRule)
    
    if type(self.MinorGamePlayRuleList) == "table" then
        for i,v in ipairs(self.MinorGamePlayRuleList) do
            if v == gameRule then
                return true
            end
        end
    end

    return false
end

function PokerGameBase:netEvent()
    local netObj,eventObj = unpack(require("newgold.GoldLobby.Modules.PeakRaceGame.XZDD.msg_obj"))
    
    self:addChild(netObj.new(g_msgDefinitions.MSG_TALKING_IN_GAME, function (event, msg)
        --dump(msg)
        if g_gameGlobal:getIsPlayingGameLog() then
            return 
        end
        local posState = g_gameGlobal:getTablePlayerPosWithTablePos(msg.playerPos)
        if msg.msgType == 0 then --系统自带聊天文本
            if self.tablePlayerHeadImgTable[posState] and self.tablePlayerHeadImgTable[posState] ~= 0 then
                local cfg = g_quickChatCfg[self.MainGamePlayRule][msg.unused0 or g_UserDataTable.gameLanguageCfgIndex]
                if cfg then
                    local text = Language[string.format(cfg.prefix.."%d",msg.msgNo)]
                    --方言和普通话互发语言，兼容处理
                    if text then
                        self.tablePlayerHeadImgTable[posState]:showChatText(text)
                        local url = string.format("sound/%s/%s/%d.mp3",cfg.name,msg.playerSex == 1 and "man" or "female",msg.msgNo+1)
                        if cfg.fileSubPath and #cfg.fileSubPath>0 then
                            url = string.format("sound/%s/%s/%s/%d.mp3",cfg.name,msg.playerSex == 1 and "man" or "female", cfg.fileSubPath, msg.msgNo+1)                            
                        end
                        NG.soundManager:playMatchEffect(url)
                    end
                end
            end
        elseif msg.msgType == 1 then --表情
            if self.tablePlayerHeadImgTable[posState] and self.tablePlayerHeadImgTable[posState] ~= 0 then
                self.tablePlayerHeadImgTable[posState]:showChatFace(self.chatFaceType, msg.msgNo)
            end
        elseif msg.msgType == 2 then --用户输入文本
            if self.tablePlayerHeadImgTable[posState] and self.tablePlayerHeadImgTable[posState] ~= 0 then
                self.tablePlayerHeadImgTable[posState]:showChatText(msg.msgText)
            end
        elseif msg.msgType == 3 then --语音消息
            if not ((G_IS_INTEGRATE_REALTIMEVOICE or RealTimeVoice) and self.isChooseRealTimeVoice) then
                local time = msg.unused0/100
                local audioContent = {
                    content={
                        msg=msg.audio,--音频数据
                        time=time--音频时长(秒)
                    },
                    sender=posState--发送的玩家的客户端逻辑椅子号
                }
                self:playVoiceWith(audioContent)
            end
        elseif msg.msgType == 4 then --互动表情
            local fromPlayer = posState --发送者的客户端逻辑椅子号

            local toPlayer = g_gameGlobal:getTablePlayerPosWithTablePos(msg.unused0)   --对方客户端逻辑椅子号
            local isVip = (not g_gameGlobal:getVipTableID() or g_gameGlobal:getVipTableID()==0)
            if self.tablePlayerHeadImgTable[fromPlayer] and self.tablePlayerHeadImgTable[fromPlayer] ~= 0 and isVip then
                self.tablePlayerHeadImgTable[fromPlayer]:refreshGoldNum(msg.unused1)
            end
            local index = msg.msgNo --互动表情索引 从1开始
            if toPlayer == fromPlayer then
                local first = true
                if self.tablePlayerHeadImgTable[fromPlayer] and self.tablePlayerHeadImgTable[fromPlayer] ~= 0 then
                    for i,v in ipairs(self.tablePlayerHeadImgTable) do
                        if i ~= fromPlayer and v ~= 0 and self.tablePlayerInfoTable[i]~=0 then
                            local toPIcon = v.headFrame
                            local endPos = toPIcon:getParent():convertToWorldSpace(cc.p(toPIcon:getPosition()))
                            self.tablePlayerHeadImgTable[fromPlayer]:showInteractiveFace(endPos,index, fromPlayer == 1, first)
                            first = false
                        end
                    end
                end
            else
                if self.tablePlayerHeadImgTable[fromPlayer] and self.tablePlayerHeadImgTable[toPlayer] and self.tablePlayerInfoTable[toPlayer] and
                  self.tablePlayerHeadImgTable[fromPlayer] ~= 0 and self.tablePlayerHeadImgTable[toPlayer] ~= 0 and self.tablePlayerInfoTable[toPlayer]~=0 then
                    local toPIcon = self.tablePlayerHeadImgTable[toPlayer].headFrame
                    local endPos = toPIcon:getParent():convertToWorldSpace(cc.p(toPIcon:getPosition()))
                    self.tablePlayerHeadImgTable[fromPlayer]:showInteractiveFace(endPos,index, fromPlayer == 1, true)
                end
            end
        end
    end))
    self:addChild(netObj.new(g_msgDefinitions.MSG_GAME_VIP_ROOM_CLOSE, function (event, msg)
        self:showBigResultLayer()
    end))

    self:addChild(netObj.new(g_msgDefinitions.MSG_GAME_POKER_GAME_OVER_ACK, function (event, msg)
        ExternalFunc.sendCustomEvent(eventType.GAME_GAMEOVER)
        self:showResultLayer(msg,1)
    end))

    self:addChild(netObj.new(g_msgDefinitions.MSG_UPDATE_GPS_POSITION, function (event, msg)
        --dump(msg , "msg")
        local tablepos = msg.playerTablePos
        self:refreshTooNearMark()

        local posState = g_gameGlobal:getTablePlayerPosWithTablePos(tablepos)
        if self.tablePlayerHeadImgTable and self.tablePlayerHeadImgTable[posState] and self.tablePlayerHeadImgTable[posState] ~= 0 and msg.playerPostion ~= "" then
            self.tablePlayerHeadImgTable[posState]:updateIpInfo(msg.playerPostion)
        end
    end))

    -- 转运卡数据
    self:addChild(netObj.new(g_msgDefinitions.MSG_GET_PLAYER_GOOD_LIST_ACK, function (event, msg)
        -- 转运道具
        if msg.goodsType ~= 2 then
            print("bag donot listen this...\n" .. debug.traceback())
            return
        end
        
        self.luckItemList = {}
        
        for k, item in ipairs(msg.playerGoodList) do
            
            self.luckItemList[item.baseID] = item
        end
        
        -- 尝试刷新view
        self:updateLuckView()
    end))

    self:addChild(netObj.new(g_msgDefinitions.MSG_GAME_REFRESH_ITEM_BASE_ACK, function (event, msg)
        local itemList =  msg.itemList
        local gameCost = {}
        for _,v in pairs(itemList) do
            if v.base_id > 7000 and v.base_id < 8000 then
                gameCost[v.base_id] = v.price
            end
            if v.base_id > 3000 and v.base_id < 4000 then
                local diamondInfo = g_gameGlobal:getMinDiamondInfo()
                if not next(diamondInfo) then 
                    g_gameGlobal:setMinDiamondInfo(v)
                end
            elseif v.base_id >5000 and v.base_id < 6000 then
                local goldInfo = g_gameGlobal:getMinGlodInfo()
                if not next(goldInfo) then 
                    g_gameGlobal:setMinGlodInfo(v)
                end
            end
        end
        g_gameGlobal:setGameCostData(gameCost)
        self:updateLuckView()
    end))
end 
function PokerGameBase:showBigResultLayer(  )
    -- body
end
function PokerGameBase:showResultLayer( msg )
    -- body
end
function PokerGameBase:gameOperation(msg)
    if g_gameGlobal:getIsPlayingGameLog() then
        return 
    end

    if msg.opertaionID==g_gameConstant.GAME_OPERTAION_PLAYER_LEFT_TABLE then
        local posState = g_gameGlobal:getTablePlayerPosWithTablePos(msg.tablePos)

        -- 移除player
        if type(self.tablePlayerInfoTable[posState]) == "table" then
            self.tablePlayerInfoTable[posState] = 0
        end
        if type(self.tablePlayerHeadImgTable[posState])=="userdata" and not tolua.isnull(self.tablePlayerHeadImgTable[posState]) then
            self.tablePlayerHeadImgTable[posState]:initHeadImgPos(self:getHeadPosByLocalPos(posState))
        end
        self:refreshTooNearMark()
        if not self.isGameStart then 
            local gpsLalyer = self:getGpsLayer(true)
            if gpsLalyer then
                gpsLalyer:cleanPlayerHead(posState)
            end
        end 
        
        self:onPlayerExit()
        -- eventMgr:dispatch(eventType.GAME_PLAYER_EXIT_ROOM, {
        --     playerInfo = self.tablePlayerInfoTable,
        -- })
        
    elseif msg.opertaionID==g_gameConstant.GAME_OPERTAION_TABLE_ADD_NEW_PLAYER then 
        if self.isThisRoundOver then return end
        local LastPlayerCount = 0
        for i,v in ipairs(self.tablePlayerInfoTable) do
            if v~=0 then
                LastPlayerCount = LastPlayerCount + 1
            end
        end
        
        local headFrameInfo = json.decode(msg.headFrame)
        
        -- 添加新用户
        local posState = g_gameGlobal:getTablePlayerPosWithTablePos(msg.tablePos)
        if posState and (posState >= 1 and posState <= 4) then
            local simplePlayer = {}
            simplePlayer.playerID = msg.playerID
            simplePlayer.playerName = msg.playerName
            simplePlayer.headImg = msg.headImg
            simplePlayer.headImgUrl = msg.targetPlayerName
            simplePlayer.sex = msg.sex
            simplePlayer.playerIndex = msg.playerIndex
            simplePlayer.gold = msg.gold
            simplePlayer.tablePos = msg.tablePos
            simplePlayer.canFriend = msg.canFriend
            simplePlayer.inTable = 1
            simplePlayer.zhuangCount = 0
            simplePlayer.winCount = 0
            simplePlayer.dianpaoCount = 0
            simplePlayer.hitHorseCount = 0
            simplePlayer.gangCount = 0
            simplePlayer.ip = msg.ip
            simplePlayer.gameState = msg.gameState
            simplePlayer.headFrameFx = headFrameInfo and headFrameInfo[tostring(msg.tablePos)]
            self.tablePlayerInfoTable[posState] = simplePlayer
            if type(self.tablePlayerHeadImgTable[posState]) == "userdata" then
                self.tablePlayerHeadImgTable[posState]:updateTablePlayerInfo(simplePlayer)
                if self.tableID then
                    if not self.isClub then
                        self.tablePlayerHeadImgTable[posState]:fangzhuVisible(simplePlayer.playerID == self.createPlayerID)
                    end                    
                end
            end

            if not tolua.isnull(self.tablePlayerTable[posState]) then
                self:updatePlayerInfo(simplePlayer)
            end
            self:loadGpsHead(self.tablePlayerInfoTable[posState],posState)

            if g_gameGlobal:getVipTableID() and g_gameGlobal:getVipTableID() > 0 then
                if not self.isGameStart then 
                    self:getGpsLayer(true)
                end 
               
            end 
        end
        
        self:onPlayerJoin()
        GlobalEventManager:onEvent(eventType.GAME_PLAYER_JOIN_ROOM, {
            playerInfo = self.tablePlayerInfoTable,
        })
        eventMgr:dispatch(eventType.GAME_PLAYER_JOIN_ROOM, {
            playerInfo = self.tablePlayerInfoTable,
        })
        
        -----
        -- 入场动画
        self:addEnterRoomFx(msg.enterRoomFlash, posState)
        
        
    elseif msg.opertaionID==g_gameConstant.GAME_OPERTAION_ROOM_DISMISS then 
        ShowConfirmBox("房主已经离开，房间自动解散。", handler(g_gameGlobal, g_gameGlobal.backToLobby), true)
    elseif msg.opertaionID==g_gameConstant.MAHJONG_OPERTAION_WAITING_OR_CLOSE_VIP then 
        CloseAllPopMsgView()
        
        -- 解散房间同意框
        if not tolua.isnull(self.jiesanView) then
            self.jiesanView:removeSelf()
        end
        self.jiesanView = require("newgold.MatchGames.GamePublic.JieSanView"):create()
        g_gameGlobal:getGameScene():addChild(self.jiesanView, g_gameConstant.JIESANROOMVIEW_ZORDER)

        self.jiesanView:updateJieSanInfo(msg, self.tablePlayerInfoTable)
    elseif msg.opertaionID == g_gameConstant.GAME_OPERTAION_BUY_ITEM then
        
    end
end


function PokerGameBase:getHeadPosByLocalPos(localPos)
    local headConfig = g_gameGlobal:getHeadPosConfig()
    return headConfig[localPos].head
end

-- 玩家非法消息
function PokerGameBase:playerOperationEx(msg)
    -- body
    
    -- 房主变更了
    if msg.operationList[1] == g_gameConstant.GAME_OPERATION_NOTIFY_CHANGE_CREATOR then
        local tablePos = msg.player_table_pos
        local posState = g_gameGlobal:getTablePlayerPosWithTablePos(tablePos)
        
        self.isFangzhu = posState == 1
        
        if self.tablePlayerInfoTable[posState] ~= 0 then
            self.createPlayerID = self.tablePlayerInfoTable[posState].playerID
        end
        
        if self.setFangzhuPlayerIndex and self.tablePlayerInfoTable[posState] ~= 0 then
            self:setFangzhuPlayerIndex(self.tablePlayerInfoTable[posState].playerIndex)
        end
    end
end

-- 续卡
function PokerGameBase:extendRoom(event)
    if event.name == "ended" then
        local playerTableOperationMsg = {}
        playerTableOperationMsg.opertaion = g_gameConstant.MAHJONG_OPERTAION_EXTEND_CARD_REMIND
        g_longConnect:sendMsg(g_msgDefinitions.MSG_GAME_PLAYER_TABLE_OPERATION, playerTableOperationMsg)
    end
end
-- 不续卡
function PokerGameBase:noExtendRoom(event)
    if event.name == "ended" then
        local playerTableOperationMsg = {}
        playerTableOperationMsg.opertaion = g_gameConstant.MAHJONG_OPERTAION_EXTEND_CARD_REMIND
        playerTableOperationMsg.opValue = 1
        g_longConnect:sendMsg(g_msgDefinitions.MSG_GAME_PLAYER_TABLE_OPERATION, playerTableOperationMsg)
    end
end


function PokerGameBase:getCurrentPlayerNum()
    local ret = 0;
    for k,v in pairs(self.tablePlayerInfoTable) do
        if v ~= 0 then
            ret = ret + 1
        end
    end

    return ret
end

--==============================--
--gps
--==============================---
function PokerGameBase:initGPS( msgAck )
    if msgAck and not (msgAck.currentHand > 0) then
        local gpsLayer = self:getGpsLayer(true)
        if gpsLayer then
            for k , v in ipairs(msgAck.players) do 
                local posState = g_gameGlobal:getTablePlayerPosWithTablePos(v.tablePos)
                self:loadGpsHead(v,posState)
            end 
        end   
    end
end

function PokerGameBase:getGpsLayer(isShow,pos)

end

function PokerGameBase:loadGpsHead( playerinfo,postate )
    if g_gameGlobal:getGameScene() ~= nil and g_gameGlobal:getVipTableID() and g_gameGlobal:getVipTableID() > 0 then
        local gpsLayer = self:getGpsLayer() --g_gameGlobal:getGameScene():getChildByName("fullview_gpsLayer")
        if  gpsLayer then
            gpsLayer:loadPlayerHead(playerinfo,postate)
        end
    end
end

function PokerGameBase:refreshGpsLayer(needCreate)
    
end

function PokerGameBase:refreshTooNearMark()
    
end

-- 场景切换完成
function PokerGameBase:onEnterTransitionFinish()
    
    performWithDelay(self, function ()
        -- 
        self.isSceneReady2PlayEnterFx = true
        
        -- check enterRoomFx 记录的动画逐个播放
        for k = #self.enterRoomFxCache, 1, -1 do
            local itemFx = self.enterRoomFxCache[k]
                self:addEnterRoomFx(itemFx.roomFlashID, itemFx.posState)
            
            table.remove(self.enterRoomFxCache, k)
        end
    end, g_gameConstant.ENTER_ROOM_FX_DELAY or 0.5)
end

function PokerGameBase:onEnter(  )
    local playerGameOpertaionMsg = {}
    playerGameOpertaionMsg.opertaionID= g_gameConstant.GAME_OPERTAION_QUERY_TABLE_DISMISS    --是否有人解散桌子
    g_longConnect:sendMsg(g_msgDefinitions.MSG_GAME_GAME_OPERTAION, playerGameOpertaionMsg)
    
    self:onUpdate(handler(self,self.update))

    self:refreshPrice()
    -- 请求转运道具
end

function PokerGameBase:onExit()
    g_gameGlobal:setGameStart(false)
end


function PokerGameBase:onNotifyOfflineTime(info)
    if not info then
        return
    end
    
    for k, v in pairs(info) do
        if v ~= -1 then
            local svrPos = k - 1
            local cltPos = g_gameGlobal:getTablePlayerPosWithTablePos(svrPos)
            if self.tablePlayerHeadImgTable[cltPos] ~= 0 then
                -- 重置离线秒数
                self.tablePlayerHeadImgTable[cltPos]:visibleOffline(true, v)
            end
        end
    end
end

function PokerGameBase:getInGame()
    return self.isGameStart
end

-- 有玩家加入
function PokerGameBase:onPlayerJoin()
    
end

-- 有玩家退出
function PokerGameBase:onPlayerExit()
    
end

-- 获取牌桌坐下的人数
function PokerGameBase:getTablePlayerCount()
    if not self.tablePlayerInfoTable then
        return 0
    end
    
    local playerCount = 0
    for k, v in ipairs(self.tablePlayerInfoTable) do
        if v ~= 0 then
            playerCount = playerCount + 1
        end
    end
    
    return playerCount
end


function PokerGameBase:initWatchWarUI()
    if self.isWatchWar then
        self.Image_watchWarFlag:retain()
        self.Image_watchWarFlag:removeFromParent()
        -- 比规则高一层
        self.Image_watchWarFlag:addTo(g_gameGlobal:getGameScene(), g_gameConstant.JIESANROOMVIEW_ZORDER - 5)
        self.Image_watchWarFlag:release()
        
        self.chatBtn:setVisible(false)
        self.realTimeVoiceBtn:setVisible(false)
        
        self.voiceBtn:setVisible(false)
        self.leaveWatchWarBtn:setVisible(true)
        self.Image_watchWarFlag:setVisible(true)
        
        self.setBtn:setVisible(false)
        
    else
        if self.leaveWatchWarBtn then 
            self.leaveWatchWarBtn:setVisible(false)
        end
        if self.Image_watchWarFlag then 
            self.Image_watchWarFlag:setVisible(false)
        end
    end
end

function PokerGameBase:leaveWatchWar()
    ShowConfirmCancelBox("确定要退出观战？",  function ( ... )
        -- body
        if self.delegate then
            self.delegate:doExitGameLogic()
        end
        g_gameGlobal:setIsInPaiZhuo(false)
        g_gameGlobal:backToLobby()
    end)
end


function PokerGameBase:ruleBtnFunc(sender)
    local gameRequestAck = g_msgCache:getMsgByCmd(g_msgDefinitions.MSG_GAME_START_GAME_REQUEST_ACK)
    local desc = g_gameGlobal:parseWanfaList(gameRequestAck.MainGamePlayRule, gameRequestAck.MinorGamePlayRuleList, " ", false, false, false, nil, true, true, true, true)
    local gameRuleObj = self.bgPanel:getChildByName("btn_RuleDesc_match")
    if gameRuleObj and not gameRuleObj:isVisible() then
        gameRuleObj:getChildByName("text_Rule"):setString(desc)
        gameRuleObj:setVisible(true)
        gameRuleObj:setLocalZOrder(999)
        if gameRuleObj:isVisible() then
            NG.SysTool.performDelayOnce(function()
                if self and not tolua.isnull(self) and gameRuleObj then
                    gameRuleObj:setVisible(false)
                end
            end, 3)
        end
    end
end

function PokerGameBase:isPlayerIndexVisible()
    return self.playerIndexVisible
end

function PokerGameBase:getEnterFlashCfg(posState)
    local paramCfg = require("newgold.MatchGames.GamePublic.Config_enterRoom")
    local m_cfg = paramCfg[self.mainRuler] or paramCfg.default_poker
--    dump(m_cfg)
    return m_cfg[posState]
end

function PokerGameBase:addEnterRoomFx(roomFlashID, posState)
    
    if self.isWatchWar then
        return
    end
    
    -- 场景未切换完成先缓存
    if not self.isSceneReady2PlayEnterFx then
        table.insert(self.enterRoomFxCache, {
            roomFlashID = roomFlashID,
            posState = posState,
        })
        return
    end
    
    
    roomFlashID = roomFlashID or (self.roomFlashCache and self.roomFlashCache[posState])
    if not roomFlashID or roomFlashID == 0 then
        return
    end
    
    -----
    -- 入场动画
    local headInst = self.tablePlayerHeadImgTable[posState]
    if headInst == 0 or tolua.isnull(headInst) then
        return
    end
    
    -- 缓存，用于其他玩家断线重连的时候
    self.roomFlashCache = self.roomFlashCache or {}
    self.roomFlashCache[posState] = roomFlashID
    
    -----
    -- pos
    local headConfig = g_gameGlobal:getHeadPosConfig()
    local posHead = headConfig[posState].head
    local fxNode = self
end

--设置幸运表情界面可见性
function PokerGameBase:setLuckViewVisible(visible)
    if visible then
        g_gameGlobal:getClickCountInstance():nodeClick(g_gameConstant.BTN_COUNT_VALUE + 268)
    end
    if self.luckBtn and not tolua.isnull(self.luckBtn) then
        if visible then
            local m_LuckView = cc.CSLoader:createNode("LuckView.csb")
            --m_LuckView:setPosition(self.luckBtn:getPositionX() + self.luckBtn:getContentSize().width / 2, self.luckBtn:getPositionY())
            m_LuckView:setName("luck_view")
            --self.luckBtn:getParent():addChild(m_LuckView)
            local p = cc.p(self.luckBtn:getPositionX() + self.luckBtn:getContentSize().width / 2, self.luckBtn:getPositionY())
            p = self.luckBtn:getParent():convertToWorldSpace(p)
            m_LuckView:setPosition(p)
            g_gameGlobal:getGameScene():addChild(m_LuckView, 201)

            self:updateLuckView()
            self.showLuckView = true
        else
            if not self.showLuckView then return end
            local m_LuckView = g_gameGlobal:getGameScene():getChildByName("luck_view")
            if m_LuckView and not tolua.isnull(m_LuckView) then
                m_LuckView:removeFromParent()
            end
            self.showLuckView = false
        end
    end
end

local luckItemIcons = {
    [7001] = "luck/yun_caishen.png",
    [7002] = "luck/yun_cuoshou.png",
    [7003] = "luck/yun_zhaocm.png",
}

--刷新幸运表情界面
function PokerGameBase:updateLuckView()
    if self.luckBtn and not tolua.isnull(self.luckBtn) then
        
    end
end

--播放幸运表情动画
--播放幸运表情动画
function PokerGameBase:playLuckAnimation(type, isCache)
    if self.luckStatus ~= 0 then
        --有动画在播放，先缓存
        table.insert(self.luckAnimationCache, type)
    end
    if self.luckStatus and self.luckStatus == 0 and g_gameGlobal:getGameScene() then
        if isCache then
            --是缓存动画就删除一个
            table.remove(self.luckAnimationCache, 1)
        end
        self.luckStatus = 1
        local node = cc.Node:create()
        node:setPosition(display.cx + luckOffset[type].x, display.cy + luckOffset[type].y)
        node:setName("luck_animation")
        g_gameGlobal:getGameScene():addChild(node, 202)

        local fileName = luckAnimationName[type]

        local m_Animation = g_gameGlobal:createSpine("spine/luck/", fileName, true)
        --m_Animation:setPosition(shuffleAnimationPos[direction])
        local function playEnd(event)
            if event.type == "complete" then
                m_Animation:setVisible(false) --先隐藏，直接删除会报错，下一帧在update中删除
                self.luckStatus = 2
            end
        end
        m_Animation:registerSpineEventHandler(playEnd,sp.EventType.ANIMATION_COMPLETE)
        m_Animation:setAnimation(0, "animation", false)
        node:addChild(m_Animation)

        local soundFile = "sound/luck/" .. luckAnimationName[type] .. ".mp3"
        NG.soundManager:playMatchEffect(soundFile)

        if self.luckBtn and not tolua.isnull(self.luckBtn) then
            local m_ColdDown = self.luckBtn:getChildByName("cd")
            m_ColdDown:stopAllActions()
            m_ColdDown:setPercentage(100)
            local m_Action = cc.Sequence:create(cc.ProgressTo:create(luckTime[type], 0))
            m_Action:setTag(1)
            m_ColdDown:runAction(m_Action)
        end
        if self.chatBtn and not tolua.isnull(self.chatBtn) then
            self.chatBtn:setTouchEnabled(false)
        end

        for k, v in pairs(self.tablePlayerHeadImgTable) do
            if v and v ~= 0 then
                v:setHudongEnable(false)
            end
        end
    end
end

--连续输了之后，幸运表情按钮动画开始播放
function PokerGameBase:playLuckButtonAnimation(freeData, status)
    if self.luckBtn and not tolua.isnull(self.luckBtn) then
        --status是否是连输后的免费使用提示
        if luckData then
            for k, v in pairs(freeData) do
                if not luckData[k] then
                    luckData[k] = {}
                end
                luckData[k]["freeTimes"] = v
            end
        end
        self:updateLuckView()
        if status ~= 1 then
            return
        end
        self:updateLuckView()
        if not self.luckBtn:getChildByName("luck_action_tip") then
            local m_LuckBtnAnimation = g_gameGlobal:createSpine("spine/luck/", "zhuanyun", true)
            m_LuckBtnAnimation:setPosition(self.luckBtn:getContentSize().width / 2, self.luckBtn:getContentSize().height / 2)
            m_LuckBtnAnimation:setAnimation(0, "animation", true)
            m_LuckBtnAnimation:setName("luck_action_tip")
            self.luckBtn:addChild(m_LuckBtnAnimation)
        end
    end
end

--设置幸运表情按钮可见性
function PokerGameBase:setLuckBtnVisible(visible)
    if self.luckBtn and not tolua.isnull(self.luckBtn) then
        local realVisible = (visible and (not self.isWatchWar))
        self.luckBtn:setVisible(false)
    end
end

function PokerGameBase:adjustLuckBtnPos()
    if not self.luckBtn then return end
    if self.tablePlayerHeadImgTable[1] and self.tablePlayerHeadImgTable[1] ~= 0 then
        local posX = self:convertToNodeSpace(cc.p(self.tablePlayerHeadImgTable[1].headFrame:getParent():convertToWorldSpace(cc.p(self.tablePlayerHeadImgTable[1].headFrame:getPositionX(), 0)).x, 0)).x
        self.luckBtn:setPositionX(posX + 45)
    end
    if self.tablePlayerHeadImgTable[2] and self.tablePlayerHeadImgTable[2] ~= 0 then
        local midPosY = (self.tablePlayerHeadImgTable[1].headFrame:getPositionY() + self.tablePlayerHeadImgTable[2].headFrame:getPositionY()) / 2
        midPosY = self:convertToNodeSpace(self.tablePlayerHeadImgTable[1].headFrame:getParent():convertToWorldSpace(cc.p(0, midPosY))).y
        midPosY = midPosY + 5
        self.luckBtn:setPositionY(midPosY)
    end
end

function PokerGameBase:refreshPrice()
    local RefreshItemBaseMsg = {}
    RefreshItemBaseMsg.account = g_gameGlobal:getMyselfInfo().account
    g_longConnect:sendMsg(g_msgDefinitions.MSG_GAME_REFRESH_ITEM_BASE, RefreshItemBaseMsg)
end

return PokerGameBase  ��  