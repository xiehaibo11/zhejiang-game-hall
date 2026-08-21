local RunLogin = class("RunLogin", XH.Req)

function RunLogin:ctor()
    RunLogin.super.ctor(self)
    self._userType = 0
    self._userName = ""
    self._userPassword = ""
    self._srsGroupID = ""
    self._sdkType = nil
end

function RunLogin:start(userType, userName, userPassword, areaID, lobbyID, gameID, sdkType, srsGroupID, timeout)
    if RunLogin.super.start(self, timeout, srsGroupID) == false then
        return
    end
    XH.userDefault:setValue(XH.userDefault.KEY_ID.KW_DATA_LAST_LOGIN_TYPE_TMP, userType)
    if sdkType then
        XH.userDefault:setValue(XH.userDefault.KEY_ID.KW_DATA_LAST_SDK_LOGIN_TYPE, sdkType)
    end
    self._userType = userType
    self._userName = userName
    self._userPassword = userPassword
    self._srsGroupID = srsGroupID
    self._sdkType = sdkType
    if XH.areaData:isSupportAutoPhoneBind() and sdkType == XH.SDK_LOGIN_TYPE.SDK_WX then
        local ReqLogin = require("login.Req.ReqLoginBindPhone")
        local reqLogin = ReqLogin:new()
        reqLogin:addReqCallBack(self, self.onReqLoginCallBack)
        reqLogin:start(userType, userName, userPassword, areaID, lobbyID, gameID, srsGroupID, timeout)
    else
        local ReqLogin = require("login.Req.ReqLogin")
        local reqLogin = ReqLogin:new()
        reqLogin:addReqCallBack(self, self.onReqLoginCallBack)
        reqLogin:start(userType, userName, userPassword, areaID, lobbyID, gameID, srsGroupID, timeout)
    end
end

function RunLogin:onReqLoginCallBack(reqLogin, type, data)
    if type == XH.Req.TYPE.SUCCESS then
        data.sdkType = self._sdkType
        data.srsGroupID = self._srsGroupID
        self:success(data)
        if self._userType ~= XH.SRSProtocol.PlayerConnect.USERTYPE.SESSION  then
            XH.userDefault:setValue(XH.userDefault.KEY_ID.KW_DATA_LAST_LOGIN_TYPE, self._userType)
            XH.userDefault:setValue(XH.userDefault.KEY_ID.KW_DATA_LAST_LOGIN_USERID, self._userName)
            XH.userDefault:setValue(XH.userDefault.KEY_ID.KW_DATA_LAST_LOGIN_PASSWORD, (self._userPassword))
            XH.userDefault:setValue(XH.userDefault.KEY_ID.KW_DATA_LAST_LOGIN_NUMBERID, data.playerData.numid)
            if self._sdkType then
                XH.userDefault:setValue(XH.userDefault.KEY_ID.KW_DATA_LAST_SDK_LOGIN_TYPE, self._sdkType)
            end
        end
    elseif type == XH.Req.TYPE.FAIL then
        if self._sdkType then
            XH.userDefault:setValue(XH.userDefault.KEY_ID.KW_DATA_LAST_SDK_LOGIN_TYPE, self._sdkType)
        end
        --登录失败
        self:setMessage(reqLogin:getMessage())
        self:fail(data)
        XH.NewThrowDataManager:reportCommonMonitor({
            Monitoring_source = "APP",
            Monitoring_type = "客户端监控登录失败",
            Monitoring_content = {
                info_des = reqLogin:getMessage() or "登录失败",
                code = (data and data.getErrcode) or -1,
                info = ""
            }
        })
    elseif type == XH.Req.TYPE.TIMEOUT then
        if self._sdkType then
            XH.userDefault:setValue(XH.userDefault.KEY_ID.KW_DATA_LAST_SDK_LOGIN_TYPE, self._sdkType)
        end
        --超时
        self:timeout(data)
        XH.NewThrowDataManager:reportCommonMonitor({
            Monitoring_source = "APP",
            Monitoring_type = "客户端监控登录失败",
            Monitoring_content = {
                info_des = "登录超时",
                code = -1,
                info = ""
            }
        })
    end
end

return RunLogin 