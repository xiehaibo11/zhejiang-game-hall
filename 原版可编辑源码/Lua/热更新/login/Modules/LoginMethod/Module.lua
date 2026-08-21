local LoginMethodModule = class("LoginMethodModule", XH.ModuleBase)

local LoginMethonConfg = require("login.Modules.LoginMethod.Config")

function LoginMethodModule:ctor()
    LoginMethodModule.super.ctor(self)

    -- SDK_UNKNOWN = 0,    -- 未知
    -- SDK_WX = 1,         --微信登录
    -- SDK_GY = 2,         --个验登录
    -- SDK_APPLE = 3,      --苹果登录
    -- SDK_PHONE = 4,      --手机登录
    self._lastLoginType = cc.UserDefault:getInstance():getIntegerForKey("LAST_LOGIN_TYPE_"..XH.areaData:getLobbyID(), 0)
end

-- 是否显示登录方式
-- @return bool
function LoginMethodModule:checkShowNewLoginStyle()
    local lobbyid = XH.areaData:getLobbyID()
    local ABTest = LoginMethonConfg.ABTest and LoginMethonConfg.ABTest[lobbyid] or 0
    return ABTest == 1
end

function LoginMethodModule:getLastLoginType()
    return self._lastLoginType or 0
end

function LoginMethodModule:setLastLoginType(loginType)
    if not loginType or loginType == 0 then
        return
    end
    self._lastLoginType = loginType
    cc.UserDefault:getInstance():setIntegerForKey("LAST_LOGIN_TYPE_"..XH.areaData:getLobbyID(), loginType)
end

return LoginMethodModule