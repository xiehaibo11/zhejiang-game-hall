local GoldLoginModule = class("GoldLoginModule", NG.ModuleBase)
local GoldAreaConfig = require("newgold.GoldCommon.Config.GoldAreaConfig")
local GoldPlayerData = require("newgold.GoldCommon.Data.GoldPlayerData")
local IsGoldBoxTest = require("app.Config.GlobalConfig").IsGoldBoxTest

GoldLoginModule.EVENT_LOGIN_SUCCESS_GOLD_NEW = "EVENT_LOGIN_SUCCESS_GOLD_NEW"
GoldLoginModule.EVENT_CLOSE_PEAKRACE_VIEW = "EVENT_CLOSE_PEAKRACE_VIEW"

function GoldLoginModule:ctor()
    GoldLoginModule.super.ctor(self)
    self._maxTimeOutTimes = 5 -- 最大重连次数
    self._tryCnt = 5
    self:resetCallFunc()
end

function GoldLoginModule:getReqConfig()
    return {
        --
        ReqLogin = { reqPath = "newgold.GoldLobby.Req.Srs.GoldReqLogin", callBack = self.respLogin }
    }
end

function GoldLoginModule:getProxyEvents()
    return {
        --
        { module = XH.login:getModule("Login"), eventKeyName = "EVENT_RELINK_SUCCESS", callBack = "lobbyRelinkSuccess" },
        { module = XH.netEngine, eventKeyName = "EVENT_NET_ENGINE_LINKSTATUS_CHANGED", callBack = "onLinkStatusChanged" },
    }
end

function GoldLoginModule:resetCallFunc()
    self._callFunc = nil
    self._param = nil
end

-- 外部重连成功
function GoldLoginModule:lobbyRelinkSuccess()
    local SRS = NG.netEngine:getSRSBySRSGroupID(GoldAreaConfig.GroupID)
    if SRS then
        local linkstate = SRS:getLinkState()
        if linkstate ~= NG.SRS_LINK_STATE.LINK_STATE_SUCCESS then
            self:changeGroupSessionLogin()
        end
    end
end

-- 登陆新区
function GoldLoginModule:changeGroupSessionLogin(callFunc, param)
    self._callFunc = callFunc
    self._param = param
    local userType = NG.SRSProtocol.PlayerConnect.USERTYPE.NEWGOLD
    local loginName = GoldPlayerData.BridgeNumID
    local loginPasswd = XH.WebToken:getWebToken()
    self:reqPlayerChangeGroupSessionLogin(userType, loginName, loginPasswd)
end

function GoldLoginModule:reqPlayerChangeGroupSessionLogin(userType, loginName, loginPasswd)
    self:removeGroupSession()
    NG.SysTool.performDelayOnce(function()
        self:reqChangeGroupSessionLoginIn(userType, loginName, loginPasswd, GoldAreaConfig.GroupID)
    end, 0.001)
end

function GoldLoginModule:reqChangeGroupSessionLoginIn(userType, loginName, loginPasswd, srsGroupID)
    if NG.goldLobby:getModule("GoldCommon"):isPeakRace() and self._maxTimeOutTimes <= 0 then
        return
    end
    self._maxTimeOutTimes = self._maxTimeOutTimes - 1
    if IsGoldBoxTest then
        return
    end
    if NG == nil then
        return
    end
    NG.TipTool.showLoading()
    if NG.goldLobby:getModule("GoldCommon"):isPeakRace() then
        userType = NG.SRSProtocol.PlayerConnect.USERTYPE.JWT_LOGIN
        self:startReq("ReqLogin", userType, loginName, loginPasswd, XH.areaData:getAreaID(), XH.areaData:getLobbyID(), XH.areaData:getConfigGameID(), srsGroupID, 3, "peakMatch")
        return
    end
    self:startReq("ReqLogin", userType, loginName, loginPasswd, GoldAreaConfig.AreaID, GoldAreaConfig.LZDDZ, GoldAreaConfig.LZDDZ, srsGroupID, 3)
end

function GoldLoginModule:sendAct()
    local checkAct = XH.SRSProtocol.CheckAct:new()
    XH.netEngine:sendProtocol(checkAct, 0, 0, GoldAreaConfig.GroupID)
end

function GoldLoginModule:startSchedule()
    self:removeSchedule()
    self._listener = cc.Director:getInstance():getScheduler():scheduleScriptFunc(function()
        self:sendAct()
    end, 5, false)
end

function GoldLoginModule:removeSchedule()
    if self._listener ~= nil then
        cc.Director:getInstance():getScheduler():unscheduleScriptEntry(self._listener)
    end
    self._listener = nil
end

function GoldLoginModule:onDestroy()
    self:removeSchedule()
    GoldLoginModule.super.onDestroy(self)
end

function GoldLoginModule:respLogin(transmit, type, data)
    NG.TipTool.hideLoading()
    if type == NG.Req.TYPE.SUCCESS then
        self._maxTimeOutTimes = 5
        self._tryCnt = 5
        self:startSchedule()
        if NG.goldLobby:getModule("GoldCommon"):isPeakRace() then
            if self._callFunc ~= nil then
                self._param = self._param or {}
                self._callFunc(nil, self._param)
            end
            self:resetCallFunc()
            NG.goldLobby:getModule("PeakRaceDispatch"):reqPlayerPositionEx()
            return
        end
        self:setPlayerDataInfo(data)
        if self._callFunc ~= nil then
            self._param = self._param or {}
            if data.playerData and (data.playerData.useridentity == 1 or data.playerData.useridentity == 2) then
                self._param.autoJoinGame = true
            end
            self._callFunc(nil, self._param)
        end
        self:resetCallFunc()
        self:dispatchEvent({ name = GoldLoginModule.EVENT_LOGIN_SUCCESS_GOLD_NEW })
    elseif type == NG.Req.TYPE.TIMEOUT then
        self._tryCnt = self._tryCnt - 1
        NG.TipTool.showToast("登陆超时，请重试")
        self:removeGroupSession()
        if self._tryCnt <= 0 then
            self._maxTimeOutTimes = 5
            self._tryCnt = 5
            self:leavePeakRaceAll()
        end
    else
        self._maxTimeOutTimes = 5
        self._tryCnt = 5
        NG.TipTool.showToast("登陆失败，请重试")
        self:removeGroupSession()
    end
end

function GoldLoginModule:leavePeakRaceAll()
    if self._isLeave then
        return
    end
    self._isLeave = true
    if NG.goldLobby:getModule("GoldCommon"):isPeakRace() then
        if NG.goldLobby:getModule("PeakRaceDispatch"):isInGame() then
            g_gameGlobal:switchLobbyScene(false)
        end
        XH.TipTool.resetLoading()
        NG.SysTool.performDelayOnce(function()
            self:dispatchEvent({ name = GoldLoginModule.EVENT_CLOSE_PEAKRACE_VIEW })
        end, 1)
    end
end

function GoldLoginModule:removeGroupSession()
    NG.netEngine:removeSRS(GoldAreaConfig.GroupID)
end

-- 设置玩家数据
function GoldLoginModule:setPlayerDataInfo(data)
    GoldPlayerData.NumId = data.playerData.numid
    GoldPlayerData.NickName = data.ppd.nickname2
    GoldPlayerData.Head = data.ppd.notify
    GoldPlayerData.UserId = data.ppd.userid
    GoldPlayerData.SessionId = data.playerData.sessionid
    GoldPlayerData.AreaId = data.playerData.areaid
    GoldPlayerData.Sex = data.ppd.sex
    NG.userDefault:setValue(NG.userDefault.KEY_ID.KW_LOCAL_GOLD_USER_ID, GoldPlayerData.NumId)
end

function GoldLoginModule:onLinkStatusChanged()
    self:lobbyRelinkSuccess()
end

return GoldLoginModule"