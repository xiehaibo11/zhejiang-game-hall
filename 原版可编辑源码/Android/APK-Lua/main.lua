local writablePath = cc.FileUtils:getInstance():getWritablePath()
cc.FileUtils:getInstance():addSearchPath(writablePath .. "hotfix/src/")
cc.FileUtils:getInstance():addSearchPath(writablePath .. "hotfix/res/")
cc.FileUtils:getInstance():addSearchPath(writablePath .. "hotfix/res/cocosStudio")
cc.FileUtils:getInstance():addSearchPath(writablePath .. "hotfix/res/cocosStudio/hall")
cc.FileUtils:getInstance():addSearchPath(writablePath .. "hotfix/res/cocosStudio/Common")
cc.FileUtils:getInstance():addSearchPath(writablePath .. "hotfix/res/cocosStudio/Lobby32")
cc.FileUtils:getInstance():addSearchPath(writablePath .. "hotfix/res/cocosStudio/TeaHouse")

cc.FileUtils:getInstance():addSearchPath("src/")
cc.FileUtils:getInstance():addSearchPath("res/")
cc.FileUtils:getInstance():addSearchPath("res/cocosStudio")
cc.FileUtils:getInstance():addSearchPath("res/cocosStudio/hall")
cc.FileUtils:getInstance():addSearchPath("res/cocosStudio/Common")
cc.FileUtils:getInstance():addSearchPath("res/cocosStudio/Lobby32")
cc.FileUtils:getInstance():addSearchPath("res/cocosStudio/TeaHouse")

require "config"
require "cocos.init"
if device.platform ~= "windows" then
    print = release_print
end

pcall(function()
    require("local.entry")
end)

local function main()
    if cc.Application:getInstance():getTargetPlatform() == cc.PLATFORM_OS_ANDROID and cc.Application:getInstance():getVersion() >= "1.0.3" then
        local luaj = require("cocos.cocos2d.luaj") 
        luaj.callStaticMethod("org/cocos2dx/lua/AppActivity", "hideSplash", { }, "()V")
    end

    if cc.Application:getInstance():getVersion() >= "1.4.5" then
        cc.UserDefault:getInstance():setIntegerForKey("KW_YSCL_YSQX", 1)
        require("app.Launcher"):getInstance():start()
    else
        -- 隐私权限弹窗特殊处理（需在热更新前弹出）
        if cc.UserDefault:getInstance():getIntegerForKey("KW_YSCL_YSQX", 0) ~= 1 then
            require("app.init")
            local scene = cc.Scene:create()
            scene:addChild(require("app.YSCLView").new())
            if cc.Director:getInstance():getRunningScene() then
                cc.Director:getInstance():replaceScene(scene)
            else
                cc.Director:getInstance():runWithScene(scene)
            end
        else
            require("app.Launcher"):getInstance():start()
        end
    end
end

if cc.Application:getInstance():getTargetPlatform() == cc.PLATFORM_OS_WINDOWS then
    G_NEED_POP_LUA_ERR = true
end

function __G__TRACKBACK__(msg)
    local traceback = debug.traceback()
    print(msg, traceback)
    if cc.Application:getInstance():getTargetPlatform() ~= cc.PLATFORM_OS_WINDOWS then
        --单引号会引起json解析错误,造成底层异常
        local fliter = function(str) return string.gsub(str, "'", " ") end
        local info = debug.getinfo(2, "S")
        local title = info and info.short_src or "LUA_EXCEPTION"
        XH.bugly.reportException(fliter(msg), fliter(traceback), fliter(title))
        XH.AnalyseTool:reportLuaError(msg .. traceback)
    end

    if G_NEED_POP_LUA_ERR then
        if XH and XH.TipTool then
        --     XH.TipTool.showTip({
		-- 	type = XH.TIP_LAYER_TYPE.OK,
        -- }, "[lua error]"..msg)
            XH.TipTool.showDebugTip(msg)
        end
    end
end

--客户端多开使用
if device.platform == "windows" and (not G_MAC_ADD or not G_UDID) then
    G_MAC_ADD = "FD3333379assssF092010"
    G_UDID = "41f14saf900030699000000032010"
end

local status, msg = xpcall(main, __G__TRACKBACK__)
