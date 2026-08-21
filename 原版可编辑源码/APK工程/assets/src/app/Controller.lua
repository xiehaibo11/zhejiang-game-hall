local Controller = class("Controller")

local APP_ENTER_BACKGROUND_EVENT = "APP_ENTER_BACKGROUND_EVENT"
local APP_ENTER_FOREGROUND_EVENT = "APP_ENTER_FOREGROUND_EVENT"
local APP_TRACEBACK_EVENT = "G_TRACKBACK"

function Controller:getInstance()
    if Controller._instance == nil then
        Controller._instance = Controller.new()
    end
    return Controller._instance
end

function Controller:ctor()
    local eventDispatcher = cc.Director:getInstance():getEventDispatcher()
    local customListenerBg = cc.EventListenerCustom:create(APP_ENTER_BACKGROUND_EVENT,
                                handler(self, self.onEnterBackground))
    eventDispatcher:addEventListenerWithFixedPriority(customListenerBg, 1)
    local customListenerFg = cc.EventListenerCustom:create(APP_ENTER_FOREGROUND_EVENT,
                                handler(self, self.onEnterForeground))
    eventDispatcher:addEventListenerWithFixedPriority(customListenerFg, 1)

    local customListenerTraceBack = cc.EventListenerCustom:create(APP_TRACEBACK_EVENT,
        function(msg)
            __G__TRACKBACK__("")
        end
    )
    eventDispatcher:addEventListenerWithFixedPriority(customListenerTraceBack, 1)
end

function Controller:onInit()
    
end

-- 切到后台
function Controller:onEnterBackground()
    XH.bugly.buglyLog("onEnterBackground", "onEnterBackground")
end

-- 切到前台
function Controller:onEnterForeground()
    XH.bugly.buglyLog("onEnterForeground", "onEnterForeground")
    local targetPlatform = cc.Application:getInstance():getTargetPlatform()
    if cc.PLATFORM_OS_IPAD == targetPlatform or cc.PLATFORM_OS_IPHONE == targetPlatform then
        XH.sdkManager:xhCallOCFunc("XHlink", "xhlink_get_uri")
    elseif cc.PLATFORM_OS_ANDROID == targetPlatform then
        if display.getRunningScene():getTag() == XH.SCENE_TAG.LOGIN then
            -- 登录界面不请求剪切板
            return
        end
        XH.sdkManager:reqSysfunGpsSdk()
        if XH.SysTool:GetBundleVersion() > "1.0.4" then
            XH.TipTool.showClipboardTip({msg = "是否允许使用剪切板，快速加入房间"})
        end
    end
end

--- 进入登录场景
function Controller:enterLogin(isShowYouKe,isUserChangeArea)
	local currScene = XH.SceneManager:getInstance():getTopScene()
    if currScene and currScene:getTag() == XH.SCENE_TAG.LOGIN then
        return
    end
    if XH.lobby then
        XH.lobby:onDestroy(true)
    end
    if not XH.login then
        XH.login = require("login.Manager").new()
    end
    -- 重新初始化全局数据
    XH.loginData:resetData()
    XH.areaData:resetData()
    if XH.loginData:getLobbyID() ~= 0 then
        XH.areaData:setLobbyID(XH.loginData:getLobbyID())
    end
    XH.playerData:resetData()
    XH.login:enter(isShowYouKe,isUserChangeArea)
end

function Controller:_destoryModule(module)
    if not module then
        return
    end
    if module.onClearProxyEvents then
        module:onClearProxyEvents()
    end
    if module.onDestroy then
        module:onDestroy()
    end
end

function Controller:exitLogin()
    if XH.login then
        XH.login:exit()
        -- XH.login = nil
    end
end

------------------------------大厅相关------------------------------
function Controller:enterLobby()
    local currScene = XH.SceneManager:getInstance():getTopScene()
    if currScene and currScene:getTag() == XH.SCENE_TAG.LOBBY then
        return
    end
    if XH.login then
        XH.login:onDestroy(true)
    end
    if not XH.lobby then
        XH.lobby = require("lobby.Manager").new()
    end
    local lobbyID = XH.loginData:getLobbyID()
    XH.areaData:setLobbyID(lobbyID)
    XH.lobby:enter()
end

function Controller:exitLobby()
    if XH.lobby then
        XH.lobby:exit()
        -- XH.lobby = nil
    end
end

return Controller