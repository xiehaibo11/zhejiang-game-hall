
local WebToken = class("WebToken")

local DEBUG = require("app.Config.GlobalConfig").IsDebug -- 灰度
local strOnline = DEBUG and "gray" or "online"
local ReqToken = require("app.Req.ReqToken50")


local kTime = 3600 * 4;

function WebToken:ctor()
	self._webTokenString = ""
    self._webTokenInfo = nil
    self._completeState = false
end

function WebToken:getWebTokenKey(userId)
    local strAreaId = tostring(XH.areaData:getAreaID())
    local strUserId = tostring(userId)
    return "_webtoken"..strOnline..strAreaId..strUserId
end

function WebToken:reqWebToken()
    if self._isReq then
        return
    end
    self._isReq = true

    local reqToken = ReqToken:new()
    reqToken:addReqCallBack(self, self.onReqTokenCallBack)
    reqToken:start(10)
end

function WebToken:onReqTokenCallBack(cell, nTtype, data)
    self._isReq = false
    if nTtype == XH.Req.TYPE.SUCCESS then
        if data and data.nXYData and data.nXYData.token then
            local tokenStr = data.nXYData.token
            local userid = XH.playerData:getNumberID()
            local key = self:getWebTokenKey(userid)
            cc.UserDefault:getInstance():setStringForKey(key, tokenStr)
            self._webTokenInfo = self:parseToken(tokenStr)
            self._webTokenString = tokenStr
            self:initTokenComplete()
            return
        end
    end
    print("reqWebToken error", data)
end

function WebToken:getWebTokenInfo()
    return self._webTokenInfo
end

function WebToken:getWebToken()
    if XH.isEmbeddedApp() then
        local param = XH.PluginModule.getStartParams()
        return param.jwtToken
    end
	if self._webTokenInfo == nil then
        self:reqWebToken()
        return ""
    end
    local now = XH.lobby:getModule("Shop"):getServerTime()
    if self._webTokenInfo.exp - now >= kTime then
        return self._webTokenString
    end
    if self._webTokenInfo.exp - now > 0 then
        self:reqWebToken()
        return self._webTokenString
    end
    self:reqWebToken()
    return ""
end

function WebToken:parseToken(token)
	local tokenArr = string.split(token, ".")
    if #tokenArr >= 2 then
        local exDataStr = XH.SysTool:base64_decode(tokenArr[2])
        local tempExData = cjson.decode(exDataStr)
        return tempExData
    end
    return nil
end


function WebToken:init()
    self._webTokenString = ""
    self._webTokenInfo = nil
    self._completeState = false
    local userid = XH.playerData:getNumberID()
    local key = self:getWebTokenKey(userid)
    local token = cc.UserDefault:getInstance():getStringForKey(key, "")
    if token ~= "" then
        self._webTokenString = token
        self._webTokenInfo = self:parseToken(token)
    end
    if self:getWebToken() ~= "" then
        self:initTokenComplete()
    end
end

function WebToken:initTokenComplete()
    if self._completeState then
        return
    end
    XH.httpManager50:initTokenComplete()
    self._completeState = true
end

XH.WebToken = WebToken.new()

