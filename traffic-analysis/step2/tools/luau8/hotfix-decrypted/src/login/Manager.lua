local LoginManager = class("LoginManager", XH.ManagerBase)

function LoginManager:ctor()
    LoginManager.super.ctor(self, XH.SCENE_TAG.LOGIN)
end

function LoginManager:enter(isShowYouKe,isUserChangeArea)
    LoginManager.super.enter(self)

    XH.sdkManager:setInitSDKConfig()
    XH.sdkManager:checkInstalledWechat()

    local loginScene = XH.SceneManager:getInstance():getSceneByTag(XH.SCENE_TAG.LOGIN)
    if loginScene then
        loginScene:init(isShowYouKe,isUserChangeArea)
    end

    if not XH.login:getModule("Login"):checkLoginNormal() then
        XH.login:getModule("Login"):sessionLogin()
     end
end

local ModulePathStr = "login.Modules.%s.Module"
function LoginManager:getModulePath(moduleName)
    assert(moduleName ~= nil and moduleName ~= "", "LoginManager:getModulePath moduleName is nil")
    return string.format(ModulePathStr, moduleName)
end

function LoginManager:getPermanentModules()
    return require("login.ModulesConfig").PermanentModules
end

return LoginManager	