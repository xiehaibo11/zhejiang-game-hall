local GameManager = class("GameManager", CF.ManagerBase)
local SxVipConfig = require('lobby.Modules.Sxvip.Config')
CF.EventReceive.extend(GameManager)

GameManager.EVENT_START_SIGNAL_SEND = "EVENT_START_SIGNAL_SEND"
GameManager.EVENT_RLINK_SUCCESS = "EVENT_RLINK_SUCCESS"
GameManager.EVENT_START_LEAVE_GAME = "EVENT_START_LEAVE_GAME"
GameManager.EVENT_MATCH_CONTINUE_CLOCK = "EVENT_MATCH_CONTINUE_CLOCK"   -- 续桌时钟

function GameManager:ctor(param)
    CF.game = self
    CF.requireManager:setGameID(param.roomData.gameID)
    CF.gameSub:setGameID(param.roomData.gameID)
    self:initDefine()
    self:initProtocols()
    self:initProxyEvents()
    self:initData(param.roomData)
    self:initManagers()
    self:initCommonData()
    GameManager.super.ctor(self, CF.SCENE_TAG.GAME)
end

function GameManager:onDestroy()
    GameManager.super.onDestroy(self)
    self:onClearProxyEvents()
    self:destroyManager()
    self:destroyData()
    self:destroyProtocols()
    self:destroyDefine()
    CF.popLayerManager:onDestroy()
    CF.game = nil
end

function GameManager:getModuleClass(moduleName)
    return CF.gameRequire(string.format("Modules.%s.Module", moduleName))
end

function GameManager:getProxyEvents()
    return {
        {module = CF.netEngine, eventName = CF.GameMProtocol.TableInfo.event_key, callBack = "onTableInfo"},
        {module = CF.netEngine, eventName = CF.SRSProtocol.PlayerData.event_key, callBack = "onReconnect"},
        {module = CF.netEngine, eventName = CF.GameMProtocol.RespPlayerConnect2.event_key, callBack = "onRespPlayerConnect2"},
        {module = CF.netEngine, eventName = CF.GameMProtocol.RespLeaveRoom.event_key, callBack = "onRespLeaveRoom"},
        {module = CF.netEngine, eventName = CF.GameMProtocol.RespVipKickUser.event_key, callBack = "onRespVipKickUser"},
        {module = CF.netEngine, eventName = CF.PyrrlaProtobuf.PlayerMatchNotify.event_key, callBack = "onPlayerMatchNotify"},
        {module = CF.netEngine, eventName = CF.PyrrlaProtobuf.PlayerLeaveNotify.event_key, callBack = "onPlayerLeaveNotify"},
        {module = CF.netEngine, eventName = CF.PyrrlaProtobuf.GameNotify.event_key, callBack = "onGameNotify"},
        {module = CF.netEngine, eventName = CF.PyrrlaProtobuf.DismissNotify.event_key, callBack = "onDismissNotify"},
        {module = CF.netEngine, eventName = CF.PyrrlaProtobuf.CostNotify.event_key, callBack = "onCostNotify"},
        {module = CF.netEngine, eventName = CF.PyrrlaProtobuf.PlayerKickReply.event_key, callBack = "onPlayerKickReply"},
        {module = CF.sdkManager, eventKeyName = "EVENT_AMAP_CALLBACK", callBack = "onAmapGetLocationCallBack"},
        {module = CF.sdkManager, eventKeyName = "EVENT_TOPONSDK_CLOSE_GOLD", callBack = "onToponAdsShowCallBack"},
        {module = CF.netEngine, eventName = CF.GameMProtocol.NotifyPromt.event_key, callBack = "onMsgNotifyPromt"},
        {module = CF.netEngine, eventName = CF.PyrrlaProtobuf.ClockNotify.event_key, callBack = "onClockNotify"},   -- 续桌时钟
    }
end

function GameManager:initDefine()
    CF.GameDefine = CF.gameRequire("Define.GameDefine")
end

function GameManager:destroyDefine()
    CF.GameDefine = nil
end

function GameManager:initProtocols()
    CF.GameProtocol = CF.gameRequire("Protocols.GameProtocol")
end

function GameManager:destroyProtocols()
    CF.GameProtocol = nil
end

function GameManager:getPermanentModules()
    return {
        "CenterBtns",
        "RightBtns",
        "RoomInfo",
        "Player",
        "PlayerInfo",
        "Dismiss",
        "GameBag",
        "Guide",
        "Trust",
        "Match",
        "PropUse",
        "Chat",
        "Voice",
        "Continue",
        "ResHotfix",
        "BigWinLost",
        "Kick",
        "ToponAct",
        "Ahead",
        "SxVipGuide",
        "BoxConversionRate",
    }
end

function GameManager:initData(roomData)
    self._leaveFunc = nil
    self:initConfigData()
    self:initRoomData(roomData)
    self:initSettingData()
    self:pushGameData(roomData)
    self:saveLastGameInfo(roomData)
end

function GameManager:destroyData()
    CF.roomData:onDestroy()
    CF.roomData = nil
    CF.settingData:onDestroy()
    CF.settingData = nil
    CF.configData:onDestroy()
    CF.configData = nil
end

function GameManager:initRoomData(roomData)
    CF.roomData = CF.gameRequire("Data.RoomData").new()
    CF.roomData:initRoomData(roomData)
    
    
end

function GameManager:initSettingData()
    CF.settingData = CF.gameRequire("Data.SettingData").new()
end

function GameManager:initConfigData()
    CF.configData = CF.gameRequire("Data.ConfigData").new()
end

function GameManager:initManagers()
    self:initSoundManager()
    self:initMsgManager()
    self:initGoldManager()
    self:initShareManager()
end

function GameManager:destroyManager()
    CF.msgManager:onDestroy()
    CF.msgManager = nil
    CF.soundManager = nil
    CF.goldManager:onDestroy()
    CF.goldManager = nil
    CF.shareManager = nil
end

function GameManager:initMsgManager()
    CF.msgManager = CF.gameRequire("Manager.MsgManager").new(CF.roomData:getAppID())
end

function GameManager:initSoundManager()
    CF.soundManager = CF.gameRequire("Manager.SoundManager").new()
end

function GameManager:initGoldManager()
    CF.goldManager = CF.gameRequire("Manager.GoldManager").new()
end

function GameManager:initShareManager()
    CF.shareManager = CF.gameRequire("Manager.ShareManager").new()
end

-- 设置一些common中需要用到的数据，不需要common直接来调用对应变量
function GameManager:initCommonData()
    self:initCommonThrowDataManager()
end

function GameManager:initCommonThrowDataManager()
    if CF.roomData:isGoldRoom() or CF.roomData:isNewGoldRoom() then
        CF.throwDataManager:setRoomType(CF.throwDataManager.ROOM_TYPE.GOLD)
    elseif CF.roomData:isBoxRoom() and CF.teaHouseManager:isInTeaHouse() then
        CF.throwDataManager:setRoomType(CF.throwDataManager.ROOM_TYPE.TEA_BOX)
    elseif CF.roomData:isBoxRoom() then
        CF.throwDataManager:setRoomType(CF.throwDataManager.ROOM_TYPE.BOX)
    else
        CF.throwDataManager:setRoomType(CF.throwDataManager.ROOM_TYPE.NONE)
    end
end

function GameManager:setLeaveGameFunc(leaveFunc)
    self._leaveFunc = leaveFunc
end

-- 将协议监听列表清除
function GameManager:clearAllModulesSubXYDealList()
    for _, tempModule in pairs(self._modules) do
        tempModule:clearSubXYDealList()
    end
end

-- unwatched：是否需要在这里调用unwatch接口
function GameManager:leaveGame(canBack, unwatched)
    CF.sdkManager:addToponAds(CF.ThirdDefine.TOPONSDK_AD_TYPE.BANNER ,"close")
    CF.getLobbyModule("H5GameWidget"):close5GameWidget("all")
    -- 如果离开房间，清除玩家预洗牌状态
    if not canBack then
        self:getModule("PropUse"):reqPreShuffle(CF.GameDefine.PRE_SHUFFLE_OPT.OPTS_TYPE_REM)
    end
    -- 请求断开旁观连接
    if CF.roomData:getIsSeer() then
        if not unwatched then
            CF.reqUnwatchRealtimeGameRecord(CF.roomData:getRoomID())
        end
        local WatchModule = self:getModule("WatchGame")
        if WatchModule then
            WatchModule:resetGameMsgList()
            WatchModule:stopPlayback()
        end
        CF.getLobbyModule("Watch"):resetMsgList()
        CF.roomData:setIsSeer(false)
        CF.getLobbyModule("Im"):getIMData():setIsSeer(false)
        CF.getLobbyModule("Im"):getIMData():setWatchRoomId(0)
    end
    CF.msgManager:sendWireBreakSignal()
    self:dispatchEvent({name = self.EVENT_START_LEAVE_GAME})
    self:clearAllModulesSubXYDealList() --清除所有module协议监听，不再处理游戏内协议
    CF.popGameScene()
    
    self:clearResCache()
    local leaveData = {}
    leaveData.srsGroupID = CF.roomData:getSRSGroupID()
    leaveData.appID = CF.roomData:getAppID()
    if CF.goldManager.ENUM_CHANGE_TYPE.SIMPLE == CF.goldManager:getChangeType() then 
        leaveData.changeLevel = {}
        leaveData.changeLevel.confID = CF.userDefault:getValue(CF.userDefault.KEY_ID.LAST_JOIN_GOLD_INDEX)
        leaveData.changeLevel.level = CF.goldManager:getChangeLevel()
    end
    if self._leaveFunc then
        self._leaveFunc(canBack,leaveData)
    end
end

function GameManager:clearResCache()
    
end

function GameManager:enterGame()
    local gameScene = CF.gameRequire("GameScene").new()
    CF.pushGameScene(gameScene)
end

function GameManager:enterGame2()
    if CF.roomData:isPlayBack() then
        self:playBackStart()
    elseif CF.roomData:getIsSeer() then
        -- 延迟1帧处理旁观数据，不然1帧处理旁观数据和UI会有问题
        if self._delayFuncListener ~= nil then
            cc.Director:getInstance():getScheduler():unscheduleScriptEntry(self._delayFuncListener)
        end
        self._delayFuncListener = cc.Director:getInstance():getScheduler():scheduleScriptFunc(function()
            cc.Director:getInstance():getScheduler():unscheduleScriptEntry(self._delayFuncListener)
            CF.getLobbyModule("Im"):getIMData():setIsSeer(CF.roomData:getIsSeer())
            self:WatchStart()
        end, 0.1, false)
    else
        self:JudgeConnet()
    end
    -- self._aaa = cc.Director:getInstance():getScheduler():scheduleScriptFunc(function()
    --     cc.Director:getInstance():getScheduler():unscheduleScriptEntry(self._aaa)
    --     self:onPlayerLeaveNotify()
    -- end, 2, false)
    CF.msgManager:sendRequestPlayerProps()
    CF.msgManager:sendReqPlayerGold()
    self:sendReqEmojiPropFreeTimes()
    CF.game:getModule("IconAnimationManager"):updateViewPosition()
    if CF.roomData:isGoldRoom() then
        self:doH5GameWidget()
        self:getModule("GameTask"):reqGameTask(CF.roomData:getGameID(),CF.roomData:getRoomLevel(),CF.roomData:getChairs())
        if CF.roomData:is50Match() then
            CF.SysTool.performDelayOnce(function ()
                CF.roomData:update50GameRule()
            end, 0.2)
        end
    end
end

function GameManager:doH5GameWidget()
    CF.getLobbyModule("H5GameWidget"):setGameData(CF.roomData:getRoomID(), CF.gameSub:getGameNameByGameId(CF.roomData:getGameID()),"匹配","BMC003")
    CF.getLobbyModule("H5GameWidget"):addH5GameWidget("game_wait",CF.roomData._gameID)
end

function GameManager:isPlayBack()
    return CF.roomData:isPlayBack()
end

function GameManager:isGameStart()
    return CF.roomData:getPlayCount() > 0
end

function GameManager:isNumberFull()
    return CF.roomData:getChairs() > CF.roomData:getCurPlayerCount()
end 

function GameManager:JudgeConnet()    
    -- 金币场模式200的需要收到startgame才发connect 金币场200模式 NewGoldRoom    
    if (CF.roomData:getRoomMode2() == CF.ROOM_TYPE.NEW_GOLD_ROOM or CF.roomData:getRoomMode2() == CF.ROOM_TYPE.DISPATCH_QUEUE) and (not CF.roomData:is50() )
    and not CF.roomData:isReconnect() then        
        CF.goldManager:sendPlayerConnectGP()        
    else        
        CF.msgManager:sendPlayerConnect()    
    end

    if (CF.roomData:getRoomMode2() == CF.ROOM_TYPE.NEW_GOLD_ROOM or CF.roomData:getRoomMode2() == CF.ROOM_TYPE.DISPATCH_QUEUE) 
    and not CF.roomData:isReconnect() then  
        CF.goldManager:dispatchEvent({name = CF.goldManager.EVENT_MATCH_STATUS_CHANGE, msg = {show = true, rematch = false}})
    end 
end

function GameManager:playBackStart()
    if not CF.roomData:isPlayBack() then
        return
    end
    self:getModule("PlayBack"):startPlayback()
end

function GameManager:WatchStart()
    if not CF.roomData:getIsSeer() then
        return
    end
    local WatchModule = self:getModule("WatchGame")
    if WatchModule and WatchModule.startPlayback then
        WatchModule:startPlayback()
    end
end

function GameManager:onTableInfo(event)
    local tableInfoMsg = CF.GameMProtocol.TableInfo:new()
    tableInfoMsg:bistream(event.msg.buff, event.msg.len)

    CF.roomData:initTableData(tableInfoMsg)
end

function GameManager:onReconnect(event)
    local msgData = CF.SRSProtocol.PlayerData:new()
    msgData:bistream(event.msg.buff, event.msg.len)

    if msgData.flag == CF.SRSProtocol.PlayerData.ERRORCODE.SUCCESS then
        --登录成功,执行断线重连操作
        -- CF.TipTool.hideLoading()
        if CF.roomData:isPlayBack() then
            -- 继续回放
            self:getModule("PlayBack"):play()
        else
            self:doRelink(event.msg)
        end
    end
end

function GameManager:doRelink(msg)
    CF.roomData:clearAllPlayerData()
    self:dispatchEvent({name = self.EVENT_RLINK_SUCCESS})
    if CF.roomData:getIsSeer() then
        -- 旁观玩家断线重连
        if CF.roomData:isDelayWatch() then
            self:getModule("WatchGame"):play()
        else
            self:getModule("WatchGame"):doRelink(msg)
        end
    else
        self:onRelink(msg)
    end
end

function GameManager:onRespPlayerConnect2(event)
    local respData = CF.GameMProtocol.RespPlayerConnect2:new()
    respData:bistream(event.msg.buff, event.msg.len)
    local flag = respData.flag
    if flag == CF.GameMProtocol.RespPlayerConnect2.FLAG.SUCCEED then
        self:dispatchEvent({name = self.EVENT_START_SIGNAL_SEND})
    elseif flag == CF.GameMProtocol.RespPlayerConnect2.FLAG.ERR_JOINING then
        local tipLayer = CF.TipTool.showPopLayer("TipLayer")
        tipLayer:setText("正在进入房间中...")
    elseif flag == CF.GameMProtocol.RespPlayerConnect2.FLAG.ERR_TABLE_DISMISS then
        local tipLayer = CF.TipTool.showPopLayer("TipLayer", {CF.TipLayer.ENUM_TIP_TYPE.OK})
        tipLayer:setTouchBackGround(false)
        tipLayer:setText("房间已经解散！")
        tipLayer:setButtonMoreEvent(
            tipLayer.ENUM_BUTTON_TYPE.OK,
            function()
                self:leaveGame()
            end
        )
        tipLayer:setButtonMoreEvent(
            tipLayer.ENUM_BUTTON_TYPE.CLOSE,
            function()
                self:leaveGame()
            end
        )
    end
end

--断线重连
function GameManager:onRelink(msg)
    CF.msgManager:sendPlayerConnect()
    if msg and msg.srsGroupID == CF.roomData:getSRSGroupID() and CF.roomData:is50() and CF.roomData:getRoomMode2() == CF.ROOM_TYPE.DISPATCH_QUEUE then 
        if CF.roomData:isMatching() then 
            CF.game:getModule("CenterBtns"):reqJoin50MatchList(false,true)
        else
            CF.reqPlayerPlace(self, self.onReqPlayerPlace)
        end
    end 
end

function GameManager:onReqPlayerPlace(reqJoin, type, data)
    if type == CF.REQ_TYPE_SUCCESS  then
        if CF.roomData:is50Match() then 
            CF.TipTool.showTip({
                type = CF.TIP_LAYER_TYPE.OK,
                funcOK = function()
                    CF.game:getModule("CenterBtns"):onStartGameEvent()
                end}, "游戏已结束，是否为您重新匹配队友？")
        else 
            CF.TipTool.showTip({
                type = CF.TIP_LAYER_TYPE.OK,
                funcOK = function()
                    self:leaveGame()
                end}, "房间已经解散！")
        end 
    elseif type == CF.REQ_TYPE_TIMEOUT then
        CF.TipTool.showTip({
                type = CF.TIP_LAYER_TYPE.OK,
                funcOK = function()
                    self:leaveGame()
                end}, "请求位置信息超时，请离开房间后重新尝试！")
    end
end

function GameManager:onRespVipKickUser(event)
    local respVipKickUser = CF.GameMProtocol.RespVipKickUser:new()
    respVipKickUser:bistream(event.msg.buff, event.msg.len)
    if respVipKickUser.numid == XH.playerData:getNumberID() then
        local gameId = CF.roomData:getGameID()
        self:leaveGame()
        local formatStr = "<font face='cocosStudio/Common/Font/fangzhengcuyuan.TTF' size='44' color='%s'>%s</font>"
        local Text = string.format(formatStr..formatStr..formatStr..formatStr, "#CD8551", "您已被会员玩家踢出房间\n开通会员可", "#17A199", "免费踢人", "#CD8551", "\n并且会员可以", "#17A199", "防止被踢出")
        local msgBoxView = XH.TipTool.showTip({
            type = XH.TIP_LAYER_TYPE.OK_CANCEL,
            funcOK = function()
                XH.viewManager:openView("SxvipPrivilegeView", nil, SxVipConfig.ThrowData.source.tickGuide)
                local m = XH.lobby:getModule("Sxvip.ThrowData")
                m:throwData(XH.NewThrowDataDefine.hy24090626, {game_id = string.format("%d_%d", XH.areaData:getAreaID(), gameId)})     
            end,
            richText = true,
            bCrossScene = true
        }, Text)
        msgBoxView:updateButtonOK2Image("Btn_game_vip_kthy.png")

        local m = XH.lobby:getModule("Sxvip.ThrowData")
        m:throwData(XH.NewThrowDataDefine.hy24090625, {game_id = string.format("%d_%d", XH.areaData:getAreaID(), gameId)})     
    else
        local errorMsg = {
            [0] = "踢出成功，该玩家已被移出桌子",
            [1] = "您目前不是会员或您的会员已经失效，请确认您的会员状态",
            [2] = "您尚未加入任何桌子，请先坐下再进行踢出",
            [3] = "踢出失败，该玩家并不在同一桌",
            [4] = "游戏已开始，现在无法执行踢出",
            [5] = "踢出失败，对方也是会员",
            [6] = "您不能对自己执行踢出",
            [7] = "踢出失败，原因未知，请稍后再试或联系客服",
            [8] = "踢出太频繁，请稍后再尝试此操作",
        }
        XH.TipTool.showToast(errorMsg[respVipKickUser.flag])

        local m = XH.lobby:getModule("Sxvip.ThrowData")
        m:throwData(XH.NewThrowDataDefine.hy24090622, {block_item_id = m:getBeforeGameStartStr(), game_id = string.format("%d_%d", XH.areaData:getAreaID(), CF.roomData:getGameID()), state = (respVipKickUser.flag == 0) and "成功" or "失败"})
        if respVipKickUser.flag == 0 then
            CF.game:getModule("Kick"):notifyKickSuccess()
        end
    end
end

--比赛场领队强制解散
function GameManager:onRespLeaveRoom(event)
    local respLeaveRoom = CF.GameMProtocol.RespLeaveRoom:new()
    respLeaveRoom:bistream(event.msg.buff, event.msg.len)

    --当前游戏局数，如果已经开始游戏，不做领队强制站起提示
    if CF.roomData:getPlayCount() == 0 then
        if CF.teaHouseManager:isInTeaHouse() then
            if respLeaveRoom.type == CF.GameMProtocol.RespLeaveRoom.LEAVEROOMTYPE.KICK then
                local tipLayer = CF.TipTool.showPopLayer("TipLayer")
                tipLayer:setTouchBackGround(false)
                tipLayer:setText("被领队强制站起或超时解散")
                tipLayer:setButtonMoreEvent(
                    tipLayer.ENUM_BUTTON_TYPE.OK,
                    function()
                        self:leaveGame()
                    end
                )
                tipLayer:setButtonMoreEvent(
                    tipLayer.ENUM_BUTTON_TYPE.CLOSE,
                    function()
                        self:leaveGame()
                    end
                )
            end
        elseif CF.roomData:getRoomMode() == CF.ROOM_MODE.BOXROOM then
            if respLeaveRoom.type == CF.GameMProtocol.RespLeaveRoom.LEAVEROOMTYPE.KICK then
                if CF.popLayerManager:getLayer("TipLayer") then
                    return
                end
                local tipLayer = CF.TipTool.showPopLayer("TipLayer")
                tipLayer:setTouchBackGround(false)
                tipLayer:setText('您已被房主请出房间')
                tipLayer:setButtonMoreEvent(
                    tipLayer.ENUM_BUTTON_TYPE.OK,
                    function()
                        self:leaveGame()
                    end
                )
                tipLayer:setButtonMoreEvent(tipLayer.ENUM_BUTTON_TYPE.CLOSE, function() 
                    self:leaveGame()
                end)
            end
        else
            self:leaveGame()
        end
    end
end

function GameManager:onGameNotify(event)
    local msgData = CF.Protobuf.protobufToMsg(CF.PyrrlaProtobuf.GameNotify,event.msg.buff)
    CF.goldManager:dispatchEvent({name = CF.goldManager.EVENT_MATCH_STATUS_CHANGE, msg = {show = false, rematch = false}})
    if msgData.code == "GOLD_SUCCESS" then 
        local roomData = {}
        roomData.appID = msgData.game_app_id
        roomData.gameID = msgData.game_id
        roomData.roomID = msgData.room_id
        roomData.srsGroupID = CF.areaData:getGoldSrsGroupID()
        roomData.roomMode = 2
        roomData.roomflag = msgData.session_id
        roomData.chaircnt = msgData.chair_cnt
        roomData.sRoomMode = CF.ROOM_TYPE.DISPATCH_QUEUE 
        CF.roomData:setRoomData(roomData)
        local lobbyId = CF.areaData:getLobbyID()
        cc.UserDefault:getInstance():setIntegerForKey("_KW_DATA_LAST_JOIN_GOLD_LEVEL_" .. lobbyId, roomData.roomflag)
    elseif msgData.code == "GOLD_MATCH_TIMEOUT" then 
        CF.TipTool.showTip({
                type = CF.TIP_LAYER_TYPE.OK,
                funcOK = function()
                    CF.game:getModule("CenterBtns"):reqJoin50MatchList(false,false)
                end, 
                funcClose = function()
                    CF.game:leaveGame()
                end}, "匹配超时，请重新寻找牌友！")
    else
        CF.TipTool.showToast("加入游戏失败，请退出后重试！")
        CF.game:leaveGame()
    end
end


function GameManager:onPlayerMatchNotify(event)
    local msgPlayerMatchNotify = CF.Protobuf.protobufToMsg(CF.PyrrlaProtobuf.PlayerMatchNotify,event.msg.buff)
    CF.roomData:clearTable()
    CF.roomData:clearAllPlayerData(true)
    CF.goldManager:dispatchEvent({name = CF.goldManager.EVENT_MATCH_STATUS_CHANGE, msg = {show = true, rematch = false}})
end

function GameManager:onPlayerLeaveNotify(event)
    local msgPlayerLeaveNotify = CF.Protobuf.protobufToMsg(CF.PyrrlaProtobuf.PlayerLeaveNotify,event.msg.buff)
    -- local msgPlayerLeaveNotify = {--测试代码
    --     leave_way = "PLAYER_KICK",
    -- }
    if msgPlayerLeaveNotify.leave_way == "PLAYER_KICK" then 
        if msgPlayerLeaveNotify.user_id == CF.selfPlayerData:getNumberID() and CF.areaData:getAreaID() == msgPlayerLeaveNotify.area_id then 
            local gameId = CF.roomData:getGameID()
            local formatStr = "<font face='cocosStudio/Common/Font/fangzhengcuyuan.TTF' size='44' color='%s'>%s</font>"
            local Text = string.format(formatStr..formatStr..formatStr..formatStr, "#CD8551", "您已被会员玩家踢出房间\n开通会员可", "#17A199", "免费踢人", "#CD8551", "\n并且会员可以", "#17A199", "防止被踢出")
            local msgBoxView = XH.TipTool.showTip({
                type = XH.TIP_LAYER_TYPE.OK_CANCEL,
                funcCancel = function ()
                    XH.viewManager:openView("SxvipPrivilegeView", nil, SxVipConfig.ThrowData.source.tickGuide)
                    local m = XH.lobby:getModule("Sxvip.ThrowData")
                    m:throwData(XH.NewThrowDataDefine.hy24090626, {game_id = string.format("%d_%d", CF.areaData:getAreaID(), gameId)})    
                end,
                funcOK = function()
                    CF.game:getModule("CenterBtns"):onStartGameEvent()
                end,
                richText = true,
            }, Text)
            msgBoxView:updateButtonCancelImage("Btn_game_vip_kthy.png")
            msgBoxView:updateButtonOK2Image("Btn_goon.png")
            local m = XH.lobby:getModule("Sxvip.ThrowData")
            m:throwData(XH.NewThrowDataDefine.hy24090625, {game_id = string.format("%d_%d", CF.areaData:getAreaID(), gameId)})  
        end
    elseif msgPlayerLeaveNotify.leave_way == "SYSTEM_KICK" then 
        if msgPlayerLeaveNotify.user_id == CF.selfPlayerData:getNumberID() and CF.areaData:getAreaID() == msgPlayerLeaveNotify.area_id then 
            CF.TipTool.showTip({
                    type = CF.TIP_LAYER_TYPE.OK,
                    funcOK = function()
                        self:leaveGame()
                    end}, "系统维护，请稍后重试！")
        end
    end
end 

function GameManager:onCostNotify(event)
    local msgData = CF.Protobuf.protobufToMsg(CF.PyrrlaProtobuf.CostNotify,event.msg.buff)
    local gameData = CF.game:getModule("GameLayer"):getGameData()
    gameData:setServicePay(msgData.cost)
end

function GameManager:onPlayerKickReply(event)
    local msgData = CF.Protobuf.protobufToMsg(CF.PyrrlaProtobuf.PlayerKickReply,event.msg.buff)
    local errorMsg = {
        ["GOLD_SUCCESS"] = "踢出成功，该玩家已被移出桌子",
        ["GOLD_KICK_NOT_VIP"] = "您目前不是会员或您的会员已经失效，请确认您的会员状态",
        ["GOLD_KICK_NOT_IN_ROOM "] = "您尚未加入任何桌子，请先坐下再进行踢出",
        ["GOLD_KICK_TARGET_NOT_IN_GAME"] = "踢出失败，该玩家并不在同一桌",
        ["GOLD_KICK_ROOM_ALREADY_GAMING"] = "游戏已开始，现在无法执行踢出",
        ["GOLD_KICK_TARGET_IS_VIP"] = "踢出失败，对方也是会员",
        ["GOLD_KICK_SELF"] = "您不能对自己执行踢出",
        ["GOLD_KICK_ERROR"] = "踢出失败，原因未知，请稍后再试或联系客服",
        ["GOLD_KICK_LIMITED"] = "踢出太频繁，请稍后再尝试此操作",
    }
    XH.TipTool.showToast(errorMsg[msgData.code])
    local isSuccess = msgData.code == "GOLD_SUCCESS"
    local m = XH.lobby:getModule("Sxvip.ThrowData")
    m:throwData(XH.NewThrowDataDefine.hy24090622, {block_item_id = m:getBeforeGameStartStr(), game_id = string.format("%d_%d", CF.areaData:getAreaID(), CF.roomData:getGameID()), state = isSuccess and "成功" or "失败"})
    if isSuccess then
        CF.game:getModule("Kick"):notifyKickSuccess()
    end
end


function GameManager:onAmapGetLocationCallBack(event)
    local code = event.data.code
    local msg = event.data.msg
    local gpsInfo = "get position failed"
    if code == CF.ThirdDefine.AMAP_CALLBACK_CODE.AMAP_SUCCESS then
        local tData = msg
        if true or device.platform == "ios" then
            local ok, errMsg = pcall(function()
                tData = cjson.decode(msg)
                end
            )

            if not ok then
                print("cjson failed: " .. errMsg)
                return
            end
        end
        gpsInfo = self:getGpsInfo(tData)
    end
    CF.msgManager:sendAMapMsg(gpsInfo)
    return gpsInfo
end

function GameManager:getGpsInfo(tData)
    --315敏感信息
    local str = tData.street or ""
    if string.len(str) > 3 then
        str = string.sub(str, 1, 3) .. "***"
    end
    local sStreet = ""--str
    local sCountry = tData["country"] or ""
    local sProvince = tData["province"] or ""
    local sCity = tData["city"] or ""
    local sDistrict = tData["district"] or ""
    
    local fLongitude = tData["longitude"]
    local fLatitude = tData["latitude"]
    return "longitude=" .. fLongitude .. ";latitude=" .. fLatitude .. ";address=" .. sCountry .. sProvince .. sCity .. sDistrict .. sStreet
end

-- 兼任原逻辑，保留外部接口
function GameManager:sendRequestDismiss()
    CF.msgManager:sendSoRequestDismiss()
end

--执行断开操作(和原逻辑保持接口一致，外部需统一调用)
function GameManager.onLoginFail()
    if CF.roomData:isPlayBack() then
        -- 暂停回放
        CF.game:getModule("PlayBack"):pause()
    end
end

--请求互动道具免费次数
function GameManager:sendReqEmojiPropFreeTimes()
    self:getModule("PlayerInfo"):reqEmojiPropFreeTimes(CF.roomData:isGoldRoom())
end

function GameManager:isBoxRoom()
    return CF.roomData:isBoxRoom()
end

function GameManager:onToponAdsShowCallBack(event)
    self:leaveGame()
end

function GameManager:getGameInfoData()
    return CF.roomData
end

function GameManager:onMsgNotifyPromt(event)
    local Notify_PROMOT_XY_TYPE = {
        XY_TOAST = 0, --提示弹出
        XY_RULE = 1, --规则消息
    }
    local notifyPromt = CF.GameMProtocol.NotifyPromt:new()
    notifyPromt:bistream(event.msg.buff, event.msg.len)
    if notifyPromt.type == Notify_PROMOT_XY_TYPE.XY_TOAST then
        XH.TipTool.showToast("随机换座已完成！")
    elseif notifyPromt.type == Notify_PROMOT_XY_TYPE.XY_RULE then
        CF.roomData:setServerGameRule(notifyPromt.content)
    end
end

function GameManager:onClockNotify(event)
    local msgData = CF.Protobuf.protobufToMsg(CF.PyrrlaProtobuf.ClockNotify,event.msg.buff)
    self:dispatchEvent({name = self.EVENT_MATCH_CONTINUE_CLOCK, msgData = msgData})
end

function GameManager:pushGameData(gameData)
    if not gameData and not gameData.gameID or not gameData.roomMode then
        return
    end
    if CF.getLobbyModule("UserPath") then
        local eventData = {
            game_id = gameData.gameID,
            room_mode = gameData.roomMode,
            room_level = self:roomType()
        }
        CF.getLobbyModule("UserPath"):throwDataOnce(XH.NewThrowDataDefine.xyh24081412, eventData, true)
    end
end

function GameManager:roomType()
    if CF.roomData:isGoldRoom() or CF.roomData:isNewGoldRoom() then
        return '金币场'
    elseif CF.roomData:isBoxRoom() and CF.teaHouseManager and CF.teaHouseManager:isInTeaHouse() then
        return '比赛场'
    end
    return '包厢'
end

function GameManager:saveLastGameInfo(roomData)
    if not roomData then
        return
    end
    local teaId = CF.teaHouseManager and CF.teaHouseManager:isInTeaHouse() and CF.teaHouseManager:getTeaHouseData() and CF.teaHouseManager:getTeaHouseData():getTeaHousePwd() or 0
    XH.userDefault:setValue(XH.userDefault.KEY_ID.KW_LAST_GAME_INFO, {isGold = CF.roomData:isGoldRoom(), gameId=roomData.gameID, teaId = teaId})
end
return GameManager
  �v  