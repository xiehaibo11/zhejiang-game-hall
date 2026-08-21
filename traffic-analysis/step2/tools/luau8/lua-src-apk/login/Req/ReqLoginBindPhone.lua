local ReqLoginBindPhone = class("ReqLoginBindPhone", XH.ReqProtocol)

function ReqLoginBindPhone:ctor()
    ReqLoginBindPhone.super.ctor(self)
    self._userType = 0
    self._data = {}

    self._playerConnect = nil
    self._srsGroupID = 0
    self._gameid = 0
end

function ReqLoginBindPhone:start(userType, strName, strPassword, areaid, lobbyid, gameid, srsGroupID, timeout)
    if ReqLoginBindPhone.super.start(self, timeout, srsGroupID) == false then
        return
    end
    self._userType = userType

    local playerConnect = XH.SRSProtocol.PlayerConnect:new()
    playerConnect.areaid = areaid
    playerConnect.usertype = userType
    playerConnect.userid = strName
    playerConnect.pwd = strPassword
    playerConnect.identify = XH.SysTool:GetDevid()
    playerConnect.osver = XH.SysTool:GetOsVersion()
    playerConnect.clienttype = XH.SRSProtocol.PlayerConnect.CLIENTTYPE.MOBILE
    playerConnect.channelid = XH.SysTool:getChannelID()
    playerConnect.nGameID = lobbyid
    playerConnect.isNew = XH.areaData:getIsNewLoginProtocol()
    self._gameid = gameid

    self._srsGroupID = srsGroupID

    self:sendMsg(playerConnect, XH.SRSProtocol.PlayerData, self._srsGroupID, 0)
end

function ReqLoginBindPhone:onMsgReceive(msgData)
    if msgData.flag == XH.SRSProtocol.PlayerData.ERRORCODE.SUCCESS then
        self._data.playerData = msgData

        local reqPlayerPlusData = XH.SRSProtocol.ReqPlayerPlusData:new()
        XH.netEngine:addProtocolScriptFuncByObj(self, self.onReceivePlayerPlusData, XH.SRSProtocol.ReqPlayerPlusData.processid, self._srsGroupID)
        XH.netEngine:sendProtocol(reqPlayerPlusData, XH.SRSProtocol.ReqPlayerPlusData.processid, 0, self._srsGroupID)
    else
        local msg = self:getErrInfoMsg(msgData.flag)
        self:setMessage(msg)
        local data = {}
        data.flag = XH.LOGIN_FAIL_TYPE.PLAYERDATA_FAIL
        data.getErrcode =  msgData.flag
        data.numid = msgData.numid
        data.sessionid = msgData.sessionid
        self:fail(data)
    end
end

function ReqLoginBindPhone:onReceivePlayerPlusData(XYID, buff, len)
    if XYID ~= XH.SRSProtocol.RespPlayerPlusData.XY_ID then
        return
    end

    local respPlayerPlusData = XH.SRSProtocol.RespPlayerPlusData:new()
    respPlayerPlusData:bistream(buff, len)
    self._data.ppd = respPlayerPlusData

    local reqPlayerSimpleInfo = XH.ToolProtocol.ReqPlayerSimpleInfo:new()
    reqPlayerSimpleInfo.askid = 0
    reqPlayerSimpleInfo.areaid = self._data.playerData.areaid
    reqPlayerSimpleInfo.numid = self._data.playerData.numid
    reqPlayerSimpleInfo.gameid = self._gameid
    XH.netEngine:addProtocolScriptFuncByObj(self, self.onReceiveRespPlayerSimpleInfo, XH.ToolProtocol.ReqPlayerSimpleInfo.processid, self._srsGroupID)
    XH.netEngine:sendProtocol(reqPlayerSimpleInfo, XH.ToolProtocol.ReqPlayerSimpleInfo.processid, 0, self._srsGroupID)
end

function ReqLoginBindPhone:onReceiveRespPlayerSimpleInfo(XYID, buff, len)
    if XYID ~= XH.ToolProtocol.RespPlayerSimpleInfo.XY_ID then
        return
    end

    local respPlayerSimpleInfo = XH.ToolProtocol.RespPlayerSimpleInfo:new()
    respPlayerSimpleInfo:bistream(buff, len)

    self._data.simpleInfo = respPlayerSimpleInfo

    local reqCheckBindUser = XH.ToolProtocol.ReqCheckBindUser:new()
    self._reqCheckBindUserAskID = os.time()
    reqCheckBindUser.askid = self._reqCheckBindUserAskID
    XH.netEngine:addProtocolScriptFuncByObj(self, self.onRespCheckBindUser, XH.ToolProtocol.ReqCheckBindUser.processid, self._srsGroupID)
    XH.netEngine:sendProtocol(reqCheckBindUser, XH.ToolProtocol.ReqCheckBindUser.processid, 0, self._srsGroupID)
end

function ReqLoginBindPhone:onRespCheckBindUser(XYID, buff, len)
    if XYID ~= XH.ToolProtocol.RespCheckBindUser.XY_ID then
        return
    end

    local respCheckBindUser = XH.ToolProtocol.RespCheckBindUser:new()
    respCheckBindUser:bistream(buff, len)
    if self._reqCheckBindUserAskID ~= respCheckBindUser.askid then
        return
    end

    self._data.isBindPhone = (respCheckBindUser.flag ~= XH.ToolProtocol.RespCheckBindUser.FLAG.NOBIND)

    self:success(self._data)
end

function ReqLoginBindPhone:getErrInfoMsg(flag)
    if not flag then
        return ""
    end
    for i, v in pairs(XH.SRSProtocol.PlayerData.ERRORCODE) do
        if flag == v then
            print(v)
            return XH.ConstString.getStr(i)
        end
    end
    return ""
end

return ReqLoginBindPhone�