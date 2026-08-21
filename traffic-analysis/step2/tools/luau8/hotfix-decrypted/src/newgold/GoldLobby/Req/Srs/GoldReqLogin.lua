local GoldReqLogin = class("GoldReqLogin", NG.GoldProtocolReq)
function GoldReqLogin:ctor()
    GoldReqLogin.super.ctor(self)
    self._userType = 0
    self._data = {}

    self._playerConnect = nil
    self._srsGroupID = 0
    self._gameid = 0
end

function GoldReqLogin:start(userType, strName, strPassword, areaid, lobbyid, gameid, srsGroupID, timeout, userId)
    if GoldReqLogin.super.start(self, timeout, srsGroupID) == false then
        return
    end
    self._userType = userType

    local playerConnect = NG.SRSProtocol.PlayerConnect:new()
    playerConnect.areaid = areaid
    playerConnect.usertype = userType
    local goldUserId = NG.userDefault:getValue(NG.userDefault.KEY_ID.KW_LOCAL_GOLD_USER_ID, 0)
    playerConnect.userid = tostring(goldUserId)--strName
    if userId then
        playerConnect.userid = userId
    end
    playerConnect.pwd = strPassword
    playerConnect.identify = NG.SysTool:GetDevid()
    playerConnect.osver = NG.SysTool:GetOsVersion()
    playerConnect.clienttype = NG.SRSProtocol.PlayerConnect.CLIENTTYPE.MOBILE
    playerConnect.channelid = NG.SysTool:getChannelID()
    playerConnect.nGameID = lobbyid
    playerConnect.isNew = true
    playerConnect.groupID = srsGroupID
    self._gameid = gameid

    self._srsGroupID = srsGroupID
    self:sendMsg(playerConnect, NG.SRSProtocol.PlayerData, self._srsGroupID, 0)
end

function GoldReqLogin:onMsgReceive(msgData)
    if msgData.flag == NG.SRSProtocol.PlayerData.ERRORCODE.SUCCESS then
        self._data.playerData = msgData
        if self._userType == NG.SRSProtocol.PlayerConnect.USERTYPE.JWT_LOGIN then
            self:success()
            return
        end
        local reqPlayerPlusData = NG.SRSProtocol.ReqPlayerPlusData:new()
        NG.netEngine:addProtocolScriptFuncByObj(self, self.onReceivePlayerPlusData, NG.SRSProtocol.ReqPlayerPlusData.processid, self._srsGroupID)
        NG.netEngine:sendProtocol(reqPlayerPlusData, NG.SRSProtocol.ReqPlayerPlusData.processid, 0, self._srsGroupID)
    else
        local msg = self:getErrInfoMsg(msgData.flag)
        self:setMessage(msg)
        local data = {}
        data.getErrcode = msgData.flag
        data.flag = 1
        data.numid = msgData.numid
        data.sessionid = msgData.sessionid
        self:fail(data)
    end
end

function GoldReqLogin:onReceivePlayerPlusData(XYID, buff, len)
    if XYID ~= NG.SRSProtocol.RespPlayerPlusData.XY_ID then
        return
    end

    local respPlayerPlusData = NG.SRSProtocol.RespPlayerPlusData:new()
    respPlayerPlusData:bistream(buff, len)
    self._data.ppd = respPlayerPlusData

    self:success(self._data)
end

function GoldReqLogin:getErrInfoMsg(flag)
    if not flag then
        return ""
    end
    for i, v in pairs(NG.SRSProtocol.PlayerData.ERRORCODE) do
        if flag == v then
            return XH.ConstString.getStr(i)
        end
    end
    return ""
end

return GoldReqLogin�