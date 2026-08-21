local LianYunModule = class("LianYunModule", XH.ModuleBase)

LianYunModule.EVENT_UPDATE_PROGRESS = "EVENT_UPDATE_PROGRESS"

local LianYunLoaingName = "LianYunLoading"

local LobbyConfig = require("lobby.Modules.Lobby.Config")

function LianYunModule:ctor()
    LianYunModule.super.ctor(self)
    self:initEvents()
    self.downLoading = false
    self._alreadyEnter = false
end

function LianYunModule:getReqConfig()
    return {

    }
end

function LianYunModule:getProxyEvents()
    return {
        { module = XH.sdkManager, eventKeyName = "EVENT_IAP_CALLBACK", callBack = "respBuyProp" },
    }
end

function LianYunModule:initEvents()
    self._allCustomEventListeners = {}
    local eventDispatcher = cc.Director:getInstance():getEventDispatcher()
    local eventList = self:getCustomEventListenerConfig()
    for _, conf in pairs(eventList) do
        local listener = cc.EventListenerCustom:create(conf.eventName,conf.callBack)
        eventDispatcher:addEventListenerWithFixedPriority(listener, 1)
        table.insert(self._allCustomEventListeners, listener)
    end
end

function LianYunModule:getCustomEventListenerConfig()
    return {
        {eventName = "hotupdate.LianYunUpate.ProgressChanged", callBack = handler(self, self.onProgressPercent)},
        {eventName = "hotupdate.LianYunUpate.startUpdate", callBack = handler(self, self.onStartUpdate)},
        {eventName = "hotupdate.LianYunUpate.updateSuccess", callBack = handler(self, self.onUpdateSuccess)},
        {eventName = "hotupdate.LianYunUpate.updateFailed", callBack = handler(self, self.onUpdateFailed)},
    }
end

function LianYunModule:onDestroy()
    LianYunModule.super.onDestroy(self)
    self:removeAllEventListeners()
end

function LianYunModule:removeAllEventListeners()
    local eventDispatcher = cc.Director:getInstance():getEventDispatcher()
    for _, listener in pairs(self._allCustomEventListeners) do
        eventDispatcher:removeEventListener(listener)
    end
end

function LianYunModule:init()
    print("LianYunModule:init")
end

function LianYunModule:isSupportASTC()
    if device.platform == "android" then
        local luaj = require("cocos.cocos2d.luaj")
        local ok, retVal = luaj.callStaticMethod("org/cocos2dx/lib/Cocos2dxRenderer", "getSupportAstc", {}, "()Ljava/lang/String;")
        if ok and retVal == "1" then
            return true
        end
    end
    if device.platform == "ios" then
        local luaoc = require("cocos.cocos2d.luaoc")
        local ok, retVal = luaoc.callStaticMethod("AppController", "isSupportASTC", {})
        if ok and retVal == "1" then
            return true
        end
    end
    return false
end

function LianYunModule:isSupport()
    return cc.Director:getInstance().enterCocosCreator2 ~= nil
end

function LianYunModule:isDownloading()
    return self.downLoading or false 
end

function LianYunModule:getHostId()
    return 5
end

function LianYunModule:onProgressPercent(event)
    if not event.msg or not event.msg.percent then
        return
    end
    local percent = math.floor(event.msg.percent)
    print("LianYunModule:onProgressPercent:"..percent)
    local event = {}
    event.percent = percent
    self:dispatchEvent({name = self.EVENT_UPDATE_PROGRESS, data = event })
end

function LianYunModule:onStartUpdate(event)
    print("LianYunModule:onStartUpdate")
end

function LianYunModule:onUpdateSuccess(event)
    print("LianYunModule:onUpdateSuccess")
    self.downLoading = false
    self:hideLoading()

    if CF and CF.isInGameScene and CF.isInGameScene() then
        print("LianYunModule:isInGameScene")
        return
    end
    if Creator2Interface.lianYunMode == Creator2Interface.LianYunMode.CARD13 then
        cc.Director:getInstance():setAnimationInterval(1 / 60)
    end
    if cc.Director:getInstance():enterCocosCreator2("D76E842930B0B153") then
        print("LianYunModule:onUpdateSuccess enter success")
    else
        print("LianYunModule:onUpdateSuccess enter failed")
    end
end

function LianYunModule:showLoading()

    self._alreadyEnter = true
    -- 创建半透明黑色遮罩层
    local maskLayer = cc.LayerColor:create(cc.c4b(255, 255, 255, 0))
    maskLayer:setContentSize(display.width, display.height)
    maskLayer:setPosition(cc.p(0, 0))

    -- 添加触摸事件监听器，吞噬所有触摸
    local listener = cc.EventListenerTouchOneByOne:create()
    listener:setSwallowTouches(true)
    listener:registerScriptHandler(function(touch, event)
        return true  -- 返回true表示处理了该触摸，阻止向下传递
    end, cc.Handler.EVENT_TOUCH_BEGAN)

    -- 注册触摸事件
    local eventDispatcher = maskLayer:getEventDispatcher()
    eventDispatcher:addEventListenerWithSceneGraphPriority(listener, maskLayer)

    local scene = XH.SceneManager:getInstance():getTopScene()
    if scene and not tolua.isnull(scene) then
        scene:addChild(maskLayer, XH.ZORDER.LOADING)
        maskLayer:setName(LianYunLoaingName)
    end
end

function LianYunModule:hideLoading()
    self._alreadyEnter = false
    local scene = XH.SceneManager:getInstance():getTopScene()
    if scene and not tolua.isnull(scene) then
        local loadingLayer = scene:getChildByName(LianYunLoaingName)
        if loadingLayer and not tolua.isnull(loadingLayer) then
            loadingLayer:removeFromParent()
        end
    end
end

function LianYunModule:onUpdateFailed(event)
    print("LianYunModule:onUpdateFailed")
    self.downLoading = false
    self:hideProgress()
    self:hideLoading()
end

function LianYunModule:hideProgress()
    local event = {}
    event.percent = -1
    self:dispatchEvent({name = self.EVENT_UPDATE_PROGRESS, data = event })
end

function LianYunModule:getEnterGameID()
    return self._enterGameID or LobbyConfig.CARD13_GAMEID
end

function LianYunModule:enter(params)
    params = params or {}
    local gameID = params.gameID
    local checkPosition = params.checkPosition
    if gameID then
        self._enterGameID = gameID
    end
    if device.platform == "android" then
        if gameID == LobbyConfig.CARD13_GAMEID  and checkPosition then
            XH.lobby:getModule("Gold"):reqJoinGoldRoom(2038)
            return
        elseif gameID == LobbyConfig.GAME_ID_APGDY and checkPosition then
            XH.lobby:getModule("Gold"):reqJoinGoldRoom(2039)
            return
        end
        self:_doEnterGame(gameID)
        return
    end

    if not self:isSupport() then  
        if device.platform == "android" then
            XH.lobby:getModule("Set"):updateNewVersion()
        end
        XH.TipTool.showToast("当前版本过低，需要先更新客户端后进行游戏")
        return
    end

    if not self:isSupportASTC() and device.platform ~= "windows" then
        XH.TipTool.showToast("当前设备不支持所需的图形格式，无法启动游戏")
        return
    end

    if self:isDownloading() then
        print("LianYunModule:isDownloading")
        return
    end

    if self._alreadyEnter then
        print("LianYunModule alreadyEnter")
        return
    end

    -- 十三张联运：进入前请求玩家位置，在位置上则弹框提示+返场，不在才进入
    if gameID == LobbyConfig.CARD13_GAMEID  and checkPosition then
        XH.lobby:getModule("Gold"):reqJoinGoldRoom(2038)
        return
    elseif gameID == LobbyConfig.GAME_ID_APGDY and checkPosition then
        XH.lobby:getModule("Gold"):reqJoinGoldRoom(2039)
        return
    end

    self:_doEnterGame(gameID)
end

function LianYunModule:_doEnterGame(gameID)
    gameID = gameID or LobbyConfig.CARD13_GAMEID
    XH.Creator2Interface.joinGameID = LobbyConfig.GameInfoLianYun[gameID]
    if gameID == LobbyConfig.CARD13_GAMEID or gameID == LobbyConfig.GAME_ID_APGDY then
        Creator2Interface.lianYunMode = Creator2Interface.LianYunMode.CARD13
    else
        Creator2Interface.lianYunMode = Creator2Interface.LianYunMode.QIXINGBAOPAI
    end
    if not Creator2Interface.shopItems then
        XH.lobby:getModule("Shop"):reqDiamondProductsInfo()
    end
    if device.platform == "windows" then
        self:showLoading()
        XH.SysTool.performDelayOnce(function()
            self:hideLoading()
        end, 2)
        self:onUpdateSuccess()
    else
        if device.platform == "android" then
            if XH.lobby:getModule("RRBuYu"):isDownloading() then 
                XH.TipTool.showToast("请等待捕鱼/十三张/七星宝牌下载完成...", 3)
                return
            end
            XH.TipTool.showToast("正在加载中，请稍等...", 2)
            XH.lobby:getModule("RRBuYu"):openCardB()
            return
        end
        self:showLoading()
        XH.SysTool.performDelayOnce(function()
            self:hideLoading()
        end, 2)
        self.downLoading = true
        package.loaded["app.hotupdate.universe.hotfix.HotFixProcessor"] = nil
        require("app.hotupdate.universe.hotfix.HotFixProcessor")
        local LianYunResChecker = require("app.hotupdate.lianyun.LianYunResChecker")
        LianYunResChecker._startHotFix(gameID, "lianyun", 1)
    end
end

return LianYunModule