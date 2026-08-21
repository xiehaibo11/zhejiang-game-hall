local GameMainView = class("GameMainView", cc.load("mvc").ViewBase)
local ExternalFunc = import("newgold.GoldLobby.Modules.PeakRaceGame.XZDD.ExternalFunc")
local eventType = import("newgold.GoldLobby.Modules.PeakRaceGame.XZDD.EventType")
local netObj,eventObj = unpack(require("newgold.GoldLobby.Modules.PeakRaceGame.XZDD.msg_obj"))

function GameMainView:ctor(mainRuler, clubId, curPlayerCount)
    self.mainRuler = mainRuler
    self.clubId = clubId
    self.curPlayerCount = curPlayerCount
    self.csbPath = self.csbPath or "GameMainView.csb"
    GameMainView.super.ctor(self)
end

function GameMainView:initDispatch()
    self.panelDispath = g_gameGlobal:findChildWithName(self.resourceNode_, "Panel_Dispatch")
    self.btnLeaveDispatch = g_gameGlobal:findChildWithName(self.resourceNode_, "Btn_leaveDispatch")
    self.btnLeaveDispatch:onTouch(handler(self, self.leaveDisptch))
    self:flushDispatchPanel(true)
end

function GameMainView:leaveDisptch(send)
    if send.name ~= "ended" then
        return
    end
    NG.goldLobby:getModule("PeakRaceDispatch"):reqLeaveDispatchQueue()
end

function GameMainView:flushDispatchPanel(isShow)
    NG.goldLobby:getModule("PeakRace"):reqPeakCount(g_gameGlobal:findChildWithName(self.resourceNode_, "Text_Cnt"), self.resourceNode_)
    g_gameGlobal:findChildWithName(self.resourceNode_, "Text_Cnt"):setVisible(not isShow)
    self.panelDispath:setVisible(isShow)
end

function GameMainView:onCreate()
    self.backToLobbyStr = "是否返回大厅？"
    self.state = g_gameConstant.VIP_GAME_MODEL
    cc.SpriteFrameCache:getInstance():addSpriteFrames("common/common0.plist")

    self:createResoueceNode(self.csbPath)
    self:setContentSize(self.resourceNode_:getContentSize())
    self:initDispatch()
    self.panelInGame = g_gameGlobal:findChildWithName(self.resourceNode_, "Panel_InGame")
    self.panelInPreparatory = g_gameGlobal:findChildWithName(self.resourceNode_, "Panel_InPreparatory")
    -- 打开右上角设置和返回大厅按钮
    self.openPopbar = self.panelInGame:getChildByName("openPopbar")
    self.openPopbar:onTouch(handler(self, self.btnEventFunc))

    -- 吃碰杠操作横panel
    self.Panel_HengOp = self.panelInGame:getChildByName("Panel_HengOp")
    self.Panel_HengOp:setVisible(false)

   -- 吃碰杠操作竖panel
   self.Panel_ShuOp = self.panelInGame:getChildByName("Panel_ShuOp")
   self.Panel_ShuOp:setVisible(false)

    -- 手指
    self.Image_shouzhi = self.panelInGame:getChildByName("Image_shouzhi")
    self.Image_shouzhi:setVisible(false)
   
    -- 关闭右上角设置和返回大厅按钮
    self.closePopbar = self.panelInGame:getChildByName("closePopbar")
    self.closePopbar:setVisible(false)
    self.closePopbar:onTouch(handler(self, self.btnEventFunc))

    self.popbarBg = self.panelInGame:getChildByName("popbarBg")
    self.popbarBg:setVisible(false)

    -- 托管按钮
    self.tuoguanBtn = g_gameGlobal:findChildWithName(self.resourceNode_, "tuoguanBtn")
    self.tuoguanBtn:onTouch(handler(self, self.btnEventFunc))
    self:setSupportTuoguan(true)
    -- 返回大厅按钮
    self.backLobbyBtn = self.popbarBg:getChildByName("backLobbyBtn")
    self.backLobbyBtn:onTouch(handler(self, self.btnEventFunc))
    -- 解散按钮
    self.jiesanBtn = self.popbarBg:getChildByName("jiesanBtn")
    self.jiesanBtn:onTouch(handler(self, self.btnEventFunc))
    
    -- 准备按钮
    self.readyBtn = self.panelInPreparatory:getChildByName("readyBtn")
    self.readyBtn:onTouch(handler(self, self.btnEventFunc))
    self.readyBtn:setVisible(false)
    if self.readyBtn then
        self.readyBtn:ignoreContentAdaptWithSize(true)
    end
    
    
    self.changeRoomBtn = self.panelInPreparatory:getChildByName("changeRoomBtn")
    self.changeRoomBtn:onTouch(handler(self, self.btnEventFunc))
    self:checkChangeRoomEnabled()

    -----------------------------------------------
    -- 播放战绩时使用
    self.slowBtn = self.panelInGame:getChildByName("slowBtn") 
    :setVisible(false)
    :onClick(handler(self, self.logBtnEvent))

    self.playBtn = self.panelInGame:getChildByName("playBtn") 
    :setVisible(false)
    :onClick(handler(self, self.logBtnEvent))
    :setVisible(false)

    self.pauseBtn = self.panelInGame:getChildByName("pauseBtn") 
    :setVisible(false)
    :onClick(handler(self, self.logBtnEvent))

    self.fastBtn = self.panelInGame:getChildByName("fastBtn") 
    :setVisible(false)
    :onClick(handler(self, self.logBtnEvent))
    -- 下一步
    self.stepNextBtn = self.panelInGame:getChildByName("stepNextBtn") 
    if not tolua.isnull(self.stepNextBtn) then
        self.stepNextBtn:setVisible(false)
        :onClick(handler(self, self.logBtnEvent))
    end
    
    self.stepBackBtn = self.panelInGame:getChildByName("stepBackBtn") 
    if not tolua.isnull(self.stepBackBtn) then
        self.stepBackBtn:setVisible(false)
        :onClick(handler(self, self.logBtnEvent))
    end

    self.Panel_logRet = self.panelInGame:getChildByName("Panel_logRet") 
    :setVisible(false)

    self.Text_logRet = self.Panel_logRet:getChildByName("Text_logRet") 
    self.Text_logRet:setString("")

    self.exitLogBtn = self.Panel_logRet:getChildByName("Button_exitLog") 
    self.exitLogBtn:onTouch(handler(self, self.btnEventFunc))

    --战绩回放上一局下一局当前局
    self.lastGameBtn = self.panelInGame:getChildByName("lastGameBtn") 
    :setVisible(false)
    :onClick(handler(self, self.logBtnEvent))

    self.nextGameBtn = self.panelInGame:getChildByName("nextGameBtn") 
    :setVisible(false)
    :onClick(handler(self, self.logBtnEvent))

    self.replayBtn = self.panelInGame:getChildByName("replayBtn") 
    :setVisible(false)
    :onClick(handler(self, self.logBtnEvent))
    ---------------------------------------------------------------

    -- 设置触摸事件，用于popbar
    local listener = cc.EventListenerTouchOneByOne:create()
    listener:setSwallowTouches(true)
    listener:registerScriptHandler(handler(self,self.onTouchBegan),cc.Handler.EVENT_TOUCH_BEGAN )
    local eventDispatcher = self:getEventDispatcher()
    eventDispatcher:addEventListenerWithSceneGraphPriority(listener, self)
    self._touchListener = listener
    
    ExternalFunc.addCustomEventListener(self, eventType.TUO_GUAN_BEGAIN, function() self:setTuoguanBtnTouchEnable(false) end)
    ExternalFunc.addCustomEventListener(self, eventType.TUO_GUAN_CANCEL, function() self:setTuoguanBtnTouchEnable(true) end)
    
    
    self:addChild(eventObj.new(eventType.GAME_PLAYER_JOIN_ROOM, function(evt, msg)
        self:onPlayerJoinRoom(msg)
    end))
    
    self:addChild(eventObj.new(eventType.GAME_PLAYER_EXIT_ROOM, function(evt, msg)
        self:onPlayerExitRoom(msg)
    end))
end

function GameMainView:setDelegate( d )
    -- body
    self.delegate = d;
end

function GameMainView:setInGame(value)
    self.panelInGame:setVisible(value)
    self.panelInPreparatory:setVisible(not value)

    self.tuoguanBtn:setVisible(value and self._suooprtTuoguan)
    if not tolua.isnull(self.changeTableView) then
        self.changeTableView:removeSelf()
    end
end

function GameMainView:setSupportTuoguan(value)
    value = true
    self._suooprtTuoguan = value
    if not self._suooprtTuoguan then
        self.tuoguanBtn:setVisible(false)
        self:setTuoguanBtnTouchEnable(false)
    else
        self.tuoguanBtn:setVisible(true)
        self:setTuoguanBtnTouchEnable(true)
    end
end

function GameMainView:onEnter()
end
function GameMainView:onExit()
    if self._touchListener then
        self:getEventDispatcher():removeEventListener(self._touchListener)
        self._touchListener = nil
    end
end

function GameMainView:btnEventFunc( event )
    if event.name == "ended" then
        if event.target == self.openPopbar then
            self.popbarBg:setVisible(true)
            self.closePopbar:setVisible(true)
            self.openPopbar:setVisible(false)
        elseif event.target == self.closePopbar then
            self.popbarBg:setVisible(false)
            self.closePopbar:setVisible(false)
            self.openPopbar:setVisible(true)
        elseif event.target == self.backLobbyBtn or event.target == self.exitLogBtn then

            if not event.target:isVisible() then
                return
            end
            ShowConfirmCancelBox(self.backToLobbyStr,  function ( ... )
                -- body
                if self.delegate then
                    self.delegate:doExitGameLogic()
                end
                
                g_gameGlobal:backToLobby(event.target==self.backLobbyBtn);
            end)
        elseif event.target == self.jiesanBtn then
            self.jiesanBtn:setTag(1)
            ShowConfirmCancelBox("您是否请求解散房间？",  handler(self, self.closeVipRoom))
        elseif event.target == self.readyBtn then
            g_longConnect:sendMsg(g_msgDefinitions.MSG_GAME_PLAYER_TABLE_OPERATION, {
                operation = g_gameConstant.GAME_OPERTAION_PLAYER_CLICK_READY,
            })
            self.readyBtn:setVisible(false)
        elseif event.target == self.tuoguanBtn then
            if self._suooprtTuoguan then
                local playerGameOpertaionMsg = {}      
                playerGameOpertaionMsg.opertaionID = g_gameConstant.GAME_OPERTAION_SET_TUOGUAN
                playerGameOpertaionMsg.opValue = 1
                g_longConnect:sendMsg(g_msgDefinitions.MSG_GAME_GAME_OPERTAION, playerGameOpertaionMsg)
                self.tuoguanBtn:setTouchEnabled(false)
                performWithDelay(self.tuoguanBtn, function() self.tuoguanBtn:setTouchEnabled(true) end, 0.2)
            end
        
        -- 换桌
        elseif event.target == self.changeRoomBtn then
            local changeTableLyrName = "LayerChangeRoom"
            local curScene = g_gameGlobal:getGameScene() or display.getRunningScene()
            local view = curScene and curScene:getChildByName(changeTableLyrName)
            if not view then
                local initData = {
                    clubId = self.clubId,
                }
                view = require("app.hnclub.ChangeRoomLayer"):create(initData)
                view:setName(changeTableLyrName)
                curScene:addChild(view, g_gameConstant.GAMEMAINVIEW_ZORDER)
                self.changeTableView = view
            end
            NFrame.Commons.UploadPointFuncs:uploadCustomData(NFrame.Defines.UploadPointDefines.CUSTOM_ID_GAME_HUAN_ZHUO)
        end
    end
end

function GameMainView:setTuoguanBtnTouchEnable(value)
    self.tuoguanBtn:setEnabled(value and self._suooprtTuoguan)
end
-- true ready, false not-ready
function GameMainView:setSelfIsReady(value)
    self.readyBtn:setVisible(false)
end

function GameMainView:closeVipRoom()
    CloseAllPopMsgView()
    local playerTableOperationMsg = {}
    playerTableOperationMsg.operation = g_gameConstant.MAHJONG_OPERTAION_WAITING_OR_CLOSE_VIP
    playerTableOperationMsg.opValue = 1     --1是请求解散，2是同意解散，3不同意
    g_longConnect:sendMsg(g_msgDefinitions.MSG_GAME_PLAYER_TABLE_OPERATION, playerTableOperationMsg)
end

function GameMainView:modifyGameState(state)
    self.state = state
    if state == g_gameConstant.GOLD_GAME_MODEL then   --金币场,战绩回放
        self.backToLobbyStr = "返回大厅将进入游戏托管\n你确定要返回吗？"
        self.jiesanBtn:setVisible(false)
        self:setSupportTuoguan(true)
        self.tuoguanBtn:setVisible(true)
        self.popbarBg:setContentSize(self.popbarBg:getContentSize().width * 2 / 3, self.popbarBg:getContentSize().height)
        self.backLobbyBtn:move(self.popbarBg:getContentSize().width/4, self.popbarBg:getContentSize().height/2)
    elseif state == g_gameConstant.VIP_GAME_MODEL then --vip场
        self.backToLobbyStr = "返回大厅将会暂停游戏\n确定要暂时返回大厅？"
        self.tuoguanBtn:setVisible(true and self._suooprtTuoguan)
        self.jiesanBtn:setVisible(true)
    elseif state == g_gameConstant.PLAY_LOG_MODEL then --战绩回放
        self.backToLobbyStr = "是否返回大厅？"
        self:setSupportTuoguan(false)
        self.tuoguanBtn:setVisible(false)
        self.jiesanBtn:setVisible(false)
        self.popbarBg:setContentSize(self.popbarBg:getContentSize().width * 2 / 3, self.popbarBg:getContentSize().height)
        self.backLobbyBtn:move(self.popbarBg:getContentSize().width/4, self.popbarBg:getContentSize().height/2)

        local canStepBy = true
        self.slowBtn:setVisible(not canStepBy)
        self.playBtn:setVisible(false)
        self.pauseBtn:setVisible(true)
        self.replayBtn:setVisible(false)
        self.fastBtn:setVisible(not canStepBy)
        self.lastGameBtn:setVisible(true)
        self.nextGameBtn:setVisible(true)
        
        if not tolua.isnull(self.stepBackBtn) then
            self.stepBackBtn:setVisible(canStepBy)
            self.stepNextBtn:setVisible(canStepBy)
        end
    end
end

function GameMainView:onTouchBegan(touch, event)
    if not self.popbarBg:isVisible() then
        return false
    end

    local location = touch:getLocation()
    if cc.rectContainsPoint(self.popbarBg:getBoundingBox(), location) then
        return true
    else
        self.popbarBg:setVisible(false)
        self.closePopbar:setVisible(false)
        self.openPopbar:setVisible(true)
        return false
    end
end

function GameMainView:showTableTips(text)

    display.loadSpriteFrames("common/common0.plist", "common/common0.png")
    local msgBg = display.newSprite(display.newSpriteFrame("common/show_msg_bg.png"))
    local textLabel = ccui.Text:create(text, "fonts/fzzhunyuanjianti.ttf", 32)

    if msgBg and textLabel then
        msgBg:move(display.cx - 50, g_gameGlobal:getDisplayHeight()/3)
        self:add(msgBg, 10)

        textLabel:move(msgBg:getContentSize().width/2, msgBg:getContentSize().height/2)
            :addTo(msgBg)
        transition.fadeOut(msgBg, {time=2, removeSelf = 1})
    end
end

function GameMainView:showLastCardTip(showType)
    -- local csbPath = nil
    -- local aniName = nil
    
    -- if showType == g_gameConstant.MAHJONG_LAST_TYPE_3 then
    --     csbPath = "Match/animation/lastCard.csb"
    --     aniName = "animation0"
    -- elseif showType == g_gameConstant.MAHJONG_LAST_TYPE_4 then
    --     csbPath = "Match/animation/lastCard.csb"
    --     aniName = "animation1"
    -- elseif showType == g_gameConstant.MAHJONG_LAST_TYPE_5 then
    --     csbPath = "Match/animation/lastCard.csb"
    --     aniName = "animation2"
    -- end
    -- if csbPath and aniName then
    --     local node = cc.CSLoader:createNode(csbPath)
    --     local roleAction = cc.CSLoader:createTimeline(csbPath)
    --     node:runAction(roleAction)
    --     roleAction:play(aniName, false) 

    --     node:move(display.cx , g_gameGlobal:getDisplayHeight()*0.45)
    --     self:add(node, 10)
    --     transition.execute(node, nil, {delay = 2.5, removeSelf = true})
    -- end
end

function GameMainView:logBtnEvent(target)
    
    if not tolua.isnull(target) and (target == self.nextGameBtn or target == self.lastGameBtn or target == self.replayBtn) then
        target:setTouchEnabled(false)
        
        performWithDelay(self, function ()
            if not tolua.isnull(target) then
                target:setTouchEnabled(true)
            end
        end, 8)
    end
    
    local dataTable = {}
    if target == self.slowBtn then
        dataTable.slow = 1
        
    elseif target == self.playBtn then
        dataTable.play = 1
        target:setVisible(false)
        self.pauseBtn:setVisible(true)
    elseif target == self.pauseBtn then
        dataTable.pause = 1
        target:setVisible(false)
        self.playBtn:setVisible(true)
    elseif target == self.fastBtn then
        dataTable.fast = 1
        
    elseif target == self.stepBackBtn then
        -- 上一步
        dataTable.last = 1
        
    elseif target == self.stepNextBtn then
        -- 下一步
        dataTable.next = 1
        
    elseif target == self.lastGameBtn then
        local getPlayerGameLogMsg = {}
        getPlayerGameLogMsg.handIndex = self.recordMsg.handIndex - 1
--        getPlayerGameLogMsg.shareId = self.recordMsg.shareId
        
        local logTimeStr = g_gameGlobal:getSelectedRecordDate(self.recordMsg.handIndex - 1) or self.recordMsg.date
        local spaceIndex = string.find(logTimeStr, " ")
        local timeStr = string.sub(logTimeStr, 1, spaceIndex-1)
        timeStr = timeStr.gsub(timeStr, "-", "")
        if string.len(timeStr) < 6 then
            local year = os.date("%Y", os.time())
            timeStr = year..timeStr
        end
        getPlayerGameLogMsg.gameTableID = self.recordMsg.gameTableID
        getPlayerGameLogMsg.date = timeStr
        
        g_longConnect:sendMsg(g_msgDefinitions.MSG_GET_PLAYER_GAME_LOG, getPlayerGameLogMsg)
        return
    elseif target == self.nextGameBtn then   
        local getPlayerGameLogMsg = {}
        getPlayerGameLogMsg.handIndex = self.recordMsg.handIndex + 1
--        getPlayerGameLogMsg.shareId = self.recordMsg.shareId
        
        local logTimeStr = g_gameGlobal:getSelectedRecordDate(self.recordMsg.handIndex + 1) or self.recordMsg.date
        local spaceIndex = string.find(logTimeStr, " ")
        local timeStr = string.sub(logTimeStr, 1, spaceIndex-1)
        timeStr = timeStr.gsub(timeStr, "-", "")
        if string.len(timeStr) < 6 then
            local year = os.date("%Y", os.time())
            timeStr = year..timeStr
        end
        getPlayerGameLogMsg.gameTableID = self.recordMsg.gameTableID
        getPlayerGameLogMsg.date = timeStr
        
        g_longConnect:sendMsg(g_msgDefinitions.MSG_GET_PLAYER_GAME_LOG, getPlayerGameLogMsg)
        return  
    elseif target == self.replayBtn then   
        local getPlayerGameLogMsg = {}
        getPlayerGameLogMsg.handIndex = self.recordMsg.handIndex
--        getPlayerGameLogMsg.shareId = self.recordMsg.shareId
        
        local logTimeStr = self.recordMsg.date
        local spaceIndex = string.find(logTimeStr, " ")
        local timeStr = string.sub(logTimeStr, 1, spaceIndex-1)
        timeStr = timeStr.gsub(timeStr, "-", "")
        if string.len(timeStr) < 6 then
            local year = os.date("%Y", os.time())
            timeStr = year..timeStr
        end
        getPlayerGameLogMsg.gameTableID = self.recordMsg.gameTableID
        getPlayerGameLogMsg.date = timeStr
        
        g_longConnect:sendMsg(g_msgDefinitions.MSG_GET_PLAYER_GAME_LOG, getPlayerGameLogMsg)
        return  
    end
    
    if g_gameGlobal:getIsPlayingGameLog() then
        local gameLog = display.getRunningScene():getChildByName("gameLog")
        if gameLog then
            gameLog:setLogState(dataTable)
        end
    end
end

function GameMainView:showCanOps(panelIndex,op,pos)
    if not panelIndex or not op or not pos then
        return
    end
    self.panelList = {
        [1] = self.Panel_HengOp,
        [2] = self.Panel_ShuOp,
    }
    self.curPanel = self.panelList[panelIndex]
    self.panelIndex = panelIndex
    self.curPanel:setVisible(true)
    self.curPanel:setPosition(pos)
    self.opBtnList = {
        [g_gameConstant.MAHJONG_OPERTAION_PLAYER_HU_CONFIRMED] = self.curPanel:getChildByName("Button_hu"),
        [g_gameConstant.MAHJONG_OPERTAION_CHI] = self.curPanel:getChildByName("Button_chi"),
        [g_gameConstant.MAHJONG_OPERTAION_PENG] = self.curPanel:getChildByName("Button_peng"),
        [g_gameConstant.MAHJONG_OPERTAION_MING_GANG] = self.curPanel:getChildByName("Button_gang"),
        -- [g_gameConstant.MAHJONG_OPERTAION_BU_HUA] = self.curPanel:getChildByName("Button_bu"),
        [g_gameConstant.MAHJONG_OPERTAION_HU] = self.curPanel:getChildByName("Button_hu"),
        [g_gameConstant.MAHJONG_OPERTAION_CANCEL] = self.curPanel:getChildByName("Button_guo"),
        [g_gameConstant.MAHJONG_OPERTAION_AN_GANG] = self.curPanel:getChildByName("Button_gang"),
        [g_gameConstant.MAHJONG_OPERTAION_BU_GANG] = self.curPanel:getChildByName("Button_gang"),
    }

    local opValue = op.opValue1
    local isGang = false
    local isHu = false
    for k,v in pairs(self.opBtnList) do
        v:setBright(true)
        if k == bit._and(k,opValue) then
            v:setBright(false)
            if k == g_gameConstant.MAHJONG_OPERTAION_MING_GANG or 
                k == g_gameConstant.MAHJONG_OPERTAION_AN_GANG or k == g_gameConstant.MAHJONG_OPERTAION_BU_GANG then
                isGang = true
            end
            if k == g_gameConstant.MAHJONG_OPERTAION_HU or k == g_gameConstant.MAHJONG_OPERTAION_PLAYER_HU_CONFIRMED then
                isHu = true
            end
        end
    end
    self.opBtnList[g_gameConstant.MAHJONG_OPERTAION_CANCEL]:setBright(false)

    self.opBtnList[g_gameConstant.MAHJONG_OPERTAION_AN_GANG]:setBright(not isGang)
    self.opBtnList[g_gameConstant.MAHJONG_OPERTAION_HU]:setBright(not isHu)
end

function GameMainView:moveShouzhi(op)
    if not self.panelIndex then
        return
    end

    local opCode = op.opCode
    for k,v in pairs(self.opBtnList) do
        if opCode == bit._and(k,opCode) then
            local pos = v:getParent():convertToWorldSpace(cc.p(v:getPosition()))
            self.Image_shouzhi:setPosition(cc.p(pos.x + 20,pos.y - 50))
            self.Image_shouzhi:setVisible(true)
            break
        end
    end
    self.panelIndex = nil
end

function GameMainView:hideOps()
    if self.curPanel then
        self.curPanel:setVisible(false)
    end

    if self.Image_shouzhi then
        self.Image_shouzhi:setVisible(false)
    end
end

function GameMainView:setRecordInfo(recordMsg)
    self.recordMsg = {}
    if not recordMsg then
        return
    end
    self.recordMsg = recordMsg

    if self.recordMsg.handIndex and self.recordMsg.handIndex == 1 then
        self.lastGameBtn:setEnabled(false)
    else
        self.lastGameBtn:setEnabled(true)
    end

    local roomRoundDatesInfo = g_gameGlobal:getSelectedRecordDate()
    
    if self.recordMsg.handIndex and roomRoundDatesInfo and roomRoundDatesInfo[self.recordMsg.handIndex + 1] then
        self.nextGameBtn:setEnabled(true)
    else
        self.nextGameBtn:setEnabled(false)
    end
end


function GameMainView:checkChangeRoomEnabled()
    local changeRoomVisible = false
    self.changeRoomBtn:setVisible(changeRoomVisible)
    
    if not self.clubId or self.clubId == 0 then
        self.readyBtn:setPositionY(self.changeRoomBtn:getPositionY())
    end
end

-----
function GameMainView:onPlayerJoinRoom(msg)
    local playersInfo = msg and msg.playerInfo or {}
    
    local playerCount = 0
    for k, v in ipairs(playersInfo) do
        if v ~= 0 then
            playerCount = playerCount + 1
        end
    end
    
    self.curPlayerCount = playerCount
    if playerCount == g_gameGlobal:getMaxPlayerNum() then
        self.changeRoomBtn:setVisible(false)
        if not tolua.isnull(self.changeTableView) then
            self.changeTableView:removeSelf()
        end
    end
end

function GameMainView:onPlayerExitRoom(msg)
    self.curPlayerCount = self.curPlayerCount - 1
    self:checkChangeRoomEnabled()
end

return GameMainView