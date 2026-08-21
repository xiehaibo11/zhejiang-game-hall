local GameScene = CF.gameClass("GameScene", CF.SceneBase)

local minTeaHouseID = 1000

function GameScene:ctor()
    GameScene.super.ctor(self)
    self._viewList = {}
    self._gameManagerProxy = nil
	XH.netEngine:setDelayMsg(true)
end

function GameScene:start()
    self:initUI()
    self:initEvents()
    XH.gameManager:enterGame2()
    XH.netEngine:setDelayMsg(false)
end

function GameScene:getViewsConfig()
    return {
        RoomCenterInfoView = {path = "Modules.RoomInfo.CenterView", zOrder = 10},
        DragonPhoenixAniView = {path = "Modules.CaiYunAni.DragonPhoenixAniView", zOrder = 14},
        RoomInfoView = {path = "Modules.RoomInfo.View", zOrder = 20},
        CenterBtnsView = {path = "Modules.CenterBtns.View", zOrder = 30},
        PlayerView = {path = "Modules.Player.View", zOrder = 40},
        ResHotfixView = {path = "Modules.ResHotfix.View", zOrder = 41},
        WatchGameView = {path = "Modules.WatchGame.View", zOrder = 45},
        AddMultipleView = {path = "Modules.AddMultiple.View", zOrder = 46},
        RightBtnsView = {path = "Modules.RightBtns.View", zOrder = 50},
        CaiYunAniView = {path = "Modules.CaiYunAni.View", zOrder = 55},
        RecallNewIconView = {path = "Modules.RecallNewIcon.View", zOrder = 55},
        ChangeCardView = {path = "Modules.ChangeCard.View", zOrder = 55},
        ShuffleIconView = {path = "Modules.Shuffle4.ShuffleIconView", zOrder = 55},
        GamePropView = {path = "Modules.Guide.GamePropView", zOrder = 46}, -- 拜财神
        XGSJView = {path = "Modules.EnterAni.XGSJView", zOrder = 55},
        LuckyMissionView = {path = "Modules.LuckyMission.IconView", zOrder = 55},
        -- 请神 Icon 在大厅模块，与 IMListLayer 一样用完整 lobby 路径（CF.gameRequire 可回落 require）
        QingShenIconView = {path = "lobby.Modules.QingShen.IconView", zOrder = 55},
        JuBaoPenIconView = {path = "Modules.JuBaoPen.JuBaoPenIconView", zOrder = 55},
        JuBaoPenItemIconView = {path = "Modules.JuBaoPen.JuBaoPenItemIconView", zOrder = 56},
        GameTaskView = {path = "Modules.GameTask.View", zOrder = 58},
        VoiceView = {path = "Modules.Voice.View", zOrder = 60},
        ShuffleView = {path = "Modules.Shuffle.View", zOrder = 70},
        ShuffleTipView = {path = "Modules.Shuffle4.View", zOrder = 71},
        PropAniLayer = {path = "Modules.PropAni.View", zOrder = 72},
        IMListLayer = {path = CF.IMListLayerPath, zOrder = 80},
        NewIMFriendLayer = {path = CF.NewIMFriendLayerPath, zOrder = 81},
        NewIMGroupLayer = {path = CF.NewIMGroupLayerPath, zOrder = 82},
        TeaHouseOnlineLayer = {path = CF.TeaHouseOnlineLayerPath, zOrder = 83},
        PlayBackView = {path = "Modules.PlayBack.View", zOrder = 90},
        EnterAniLayer = {path = "Modules.EnterAni.View", zOrder = 9},
        SxvipRecordView = {path = "Modules.SxvipRecord.View", zOrder = 55},
    }
end

function GameScene:initUI()
    self:addView("RoomCenterInfoView")
    self:addView("RoomInfoView")
    self:addView("GameTaskView")
    self:addView("PlayerView")
    self:addView("PropAniLayer")
    if CF.roomData:getIsSeer() then
        if CF.areaData:isSupportFriendsV2() then
            self:addView("NewIMFriendLayer")
        else
            self:addView("IMListLayer")
        end
        self:addView("CenterBtnsView")
        self:addView("ResHotfixView")
        self:addView("RightBtnsView")
        self:addView("WatchGameView")
        return
    end
    if CF.areaData:isSupportFriendList() and not CF.roomData:isGoldRoom() and not CF.teaHouseManager:isInTeaHouse() then
        if CF.areaData:isSupportFriendsV2() then
            local teaNumber = CF.selfPlayerData:getEnterTeaHouseID()
            if teaNumber > minTeaHouseID then
                self:addView("NewIMGroupLayer")
            else
                self:addView("NewIMFriendLayer")
            end
        else
            self:addView("IMListLayer")
        end
    end
    if CF.teaHouseManager and CF.teaHouseManager:isInTeaHouse() and CF.teaHouseManager:isShowTeaHouseOnlineListInGame() then
        self:addView("TeaHouseOnlineLayer")
    end
    self:addView("CenterBtnsView")
    self:addView("ResHotfixView")
    self:addView("AddMultipleView")
    if CF.roomData:isPlayBack() then
        self:addView("PlayBackView")
    else
        self:addView("RightBtnsView")
        self:addView("VoiceView")
        if not XH.isEmbeddedApp() then
            self:addView("CaiYunAniView")
        end
        self:addView("LuckyMissionView")
        self:addView("DragonPhoenixAniView")
        self:addView("ShuffleTipView")
        if CF.roomData:isBoxRoom() then
            self:addView("SxvipRecordView")
            self:addView("ChangeCardView")
            self:addView("JuBaoPenIconView")
            self:addView("JuBaoPenItemIconView")
        end
        if not XH.isEmbeddedApp() then
            -- self:addView("XGSJView")
        end
        self:addView("ShuffleIconView")
        -- self:addView("RecallNewIconView")
        -- 请神与拜财神互斥：isSupport 才挂请神；未展示请神时再挂拜财神
        local propPush = XH.lobby and XH.lobby:getModule("PropPush")
        if propPush and propPush:isSupport() then
            self:showQingShenIcon()
        end
        if not self._viewList["QingShenIconView"] then
            self:showCaiShenIcon()
        end
    end
end

function GameScene:showQingShenIcon()
    -- 回放 / 观战不展示
    if CF.roomData:isPlayBack() or CF.roomData:getIsSeer() then
        return false
    end
    if XH.isEmbeddedApp() then
        return false
    end
    -- 金币场不展示
    if CF.roomData:isGoldRoom() or CF.roomData:isNewGoldRoom() then
        return false
    end
    local propPush = XH.lobby and XH.lobby:getModule("PropPush")
    if not propPush or not propPush:isSupport() then
        return false
    end
    if self._viewList["QingShenIconView"] then
        return true
    end
    if XH.lobby then
        local qingShen = XH.lobby:getModule("QingShen")
        -- 大厅可能已提前创建 Module；进桌后 RoomData 就绪，重新走 getProxyEvents 绑定
        if qingShen and qingShen.initProxyEvents then
            qingShen:initProxyEvents()
        end
        if propPush and propPush.initProxyEvents then
            propPush:initProxyEvents()
        end
        -- 对齐宝宝 GameFrameView:setGameFrameUISink：用 PlayerView 取头像节点
        local playerView = self:getViewByName("PlayerView")
        if playerView and qingShen and qingShen.setTableGetPlayerFaceNodeFunc then
            qingShen:setTableGetPlayerFaceNodeFunc(playerView, playerView.getPlayerHeadNodeByChairId)
        end
    end
    self:addView("QingShenIconView")
    return self._viewList["QingShenIconView"] ~= nil
end

function GameScene:showCaiShenIcon()
    if CF.roomData:isPlayBack() or CF.roomData:getIsSeer() then
        return
    end
    -- 修复线上玩家反馈建议ID1079218
    local gameID = CF.roomData and CF.roomData:getGameID()
    if gameID and gameID == 30159 then
        return
    end
    if XH.isEmbeddedApp() then
        return
    end
    if CF.roomData and CF.roomData:isNewUI() then
        return
    end
    self:addView("GamePropView")
end

function GameScene:getProxyEvents()
    return {
        {module = CF.game:getModule("EnterAni"), eventKeyName = "EVENT_ENTER_ANI_FINISH", callBack = "start"}
    }
end

function GameScene:initEvents()
    self._gameManagerProxy = cc.EventProxy.new(CF.game, self):addEventListener(CF.game.EVENT_START_LEAVE_GAME, handler(self, self.onStartLeaveGame))
    self._gameIMListLayerProxy = cc.EventProxy.new(CF.roomData, self):addEventListener(CF.roomData.EVENT_GAME_UPDATE_SEER, handler(self, self.onUpdateIMListLayer))
end

-- 将移除界面的逻辑提前
function GameScene:onStartLeaveGame()
    --在popscene之前移除监听，防止出现一些野指针导致的报错
    --由于引擎底层代码在处理点击事件时对摄像机的处理存在漏洞，在点击时直接移除界面会崩溃，所以先将界面的回调监听移除
    self:removeAllViewsAllCallback()
    -- self:removeAllViews()
end

function GameScene:onUpdateIMListLayer()
    if CF.areaData:isSupportFriendsV2() then
        self:addView("NewIMFriendLayer")
        self:removeView("NewIMGroupLayer")
    else
        self:addView("IMListLayer")
    end
    -- 旁观玩家移除view
    self:removeView("TeaHouseOnlineLayer")
    self:removeView("MarkerView")
    self:removeView("VoiceView")
    self:removeView("CaiYunAniView")
    self:removeView("DragonPhoenixAniView")
    self:removeView("ShuffleTipView")
    self:removeView("LuckyMissionView")
    self:removeView("QingShenIconView")
end

function GameScene:removeAllViewsAllCallback()
    for _, view in pairs(self._viewList) do
        -- 添加保护，防止发生一些异常时无法正常退出游戏场景
        if view and not tolua.isnull(view) and view.removeAllCallback then
            view:removeAllCallback()
        end
    end
end

function GameScene:addView(viewName, zOrder, ...)
    if self._viewList[viewName] then
        return
    end
    local viewsConf = self:getViewsConfig()
    local viewConf = viewsConf[viewName]
    if not viewConf then
        return
    end
    local view = CF.gameRequire(viewConf.path).new(...)
    zOrder = zOrder or viewConf.zOrder
    self:addChild(view, zOrder)
    self._viewList[viewName] = view
end

function GameScene:removeView(viewName)
    if not self._viewList[viewName] then
        return
    end
    self._viewList[viewName]:close()
    self._viewList[viewName] = nil
end

function GameScene:removeAllViews()
    for _, view in pairs(self._viewList) do
        view:close()
    end
    self._viewList = {}
end

function GameScene:onEnter()
    GameScene.super.onEnter(self)
    cc.Director:getInstance():setAnimationInterval(1 / 45)
    self:addView("EnterAniLayer")
end

function GameScene:onExit()
    GameScene.super.onExit(self)
    cc.Director:getInstance():setAnimationInterval(1 / 30)
    display.removeUnusedSpriteFrames()
end

function GameScene:onCleanup()
    if self._gameManagerProxy then
        self._gameManagerProxy:removeAllEventListeners()
        self._gameManagerProxy = nil
    end
    if self._gameIMListLayerProxy then
        self._gameIMListLayerProxy:removeAllEventListeners()
        self._gameIMListLayerProxy = nil
    end
    self:removeAllViews()
    GameScene.super.onCleanup(self)
end

function GameScene:onEnterTransitionFinish()
    GameScene.super.onEnterTransitionFinish(self)
    if CF.roomData then
        CF.hotupdateGameSound(CF.roomData:getGameID())
        local configer = require("app.Config.Parse.GameSubConfiger").new()
        local key = configer:getGameTypePathByGameId(tonumber(CF.roomData:getGameID()))
        if key ~= "" then
            CF.hotupdateGameAni(key .. "Ani")
        end
    end
end

function GameScene:getViewByName(viewName)
    if not self._viewList[viewName] then
        return nil
    end
    return self._viewList[viewName]
end

return GameScene�,