local targetPlatform = cc.Application:getInstance():getTargetPlatform()
local platformPath = "10001"
if cc.PLATFORM_OS_IPAD == targetPlatform or cc.PLATFORM_OS_IPHONE == targetPlatform  then       
    platformPath = "20001"
end

--cc.PLATFORM_OS_ANDROID

local Lobby = {
    HotUpdateLoaderPath = "app.hotupdate.lobby.LobbyHotUpdateLoader",        --热更新模块完成后数据处理模块路径
    HotUpdateScenePath  = "app.hotupdate.lobby.LobbyHotUpdateScene",         --热更新模块显示UI模块路径
    HotUpdateList = {               --本热更新模块需要更新的资源包列表
		Lobby = "Lobby/project_" .. platformPath ..  ".manifest",
    }
}

local function isSupportASTC()
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

if isSupportASTC() then
    Lobby.HotUpdateList.Lobby = "Lobby/project_" .. platformPath .. "_astc.manifest"
end

return Lobby�