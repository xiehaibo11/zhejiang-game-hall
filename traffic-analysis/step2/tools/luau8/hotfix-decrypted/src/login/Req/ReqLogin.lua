local ReqLogin = class("ReqLogin", XH.ReqProtocol)
local KW_SPECIAL_CODE = 123698741
function ReqLogin:ctor()
    ReqLogin.super.ctor(self)
    self._userType = 0
    self._data = {}

    self._playerConnect = nil
    self._srsGroupID = 0
    self._gameid = 0
end

function ReqLogin:start(userType, strName, strPassword, areaid, lobbyid, gameid, srsGroupID, timeout)
    if ReqLogin.super.start(self, timeout, srsGroupID) == false then
        return
    end
    self._userType = userType

    local playerConnect = XH.SRSProtocol.PlayerConnect:new()
    playerConnect.areaid = areaid
    playerConnect.usertype = userType
    playerConnect.userid = strName
    if XH.isEmbeddedApp() and userType == XH.SRSProtocol.PlayerConnect.USERTYPE.JWT_LOGIN then
        playerConnect.userid = "peakMatch"
    end
    playerConnect.pwd = strPassword
    playerConnect.identify = XH.SysTool:GetDevid()
    if tonumber(strName) == KW_SPECIAL_CODE then
        playerConnect.userid = ""
        playerConnect.identify = tostring(KW_SPECIAL_CODE)
    end
    playerConnect.osver = XH.SysTool:GetOsVersion()
    playerConnect.clienttype = XH.SRSProtocol.PlayerConnect.CLIENTTYPE.MOBILE
    playerConnect.channelid = XH.SysTool:getChannelID()
    playerConnect.nGameID = lobbyid
    playerConnect.isNew = XH.areaData:getIsNewLoginProtocol()
    self._gameid = gameid

    self._srsGroupID = srsGroupID
    self:sendMsg(playerConnect, XH.SRSProtocol.PlayerData, self._srsGroupID, 0)
end

function ReqLogin:onMsgReceive(msgData)
    if msgData.flag == XH.SRSProtocol.PlayerData.ERRORCODE.SUCCESS then
        self._data.playerData = msgData
        if self._srsGroupID == 10033 or self._srsGroupID == 10031 or self._srsGroupID == 11806 or self._srsGroupID == 10026 then --都是边茶的SRS
            self:success(self._data)
            return
        end
        local reqPlayerPlusData = XH.SRSProtocol.ReqPlayerPlusData:new()
        XH.netEngine:addProtocolScriptFuncByObj(self, self.onReceivePlayerPlusData, XH.SRSProtocol.ReqPlayerPlusData.processid, self._srsGroupID)
        XH.netEngine:sendProtocol(reqPlayerPlusData, XH.SRSProtocol.ReqPlayerPlusData.processid, 0, self._srsGroupID)
    elseif self._srsGroupID == XH.areaData:getGoldSrsGroupID() and msgData.flag == XH.SRSProtocol.PlayerData.ERRORCODE.INVALID_SESSIONID then
        XH.login:getModule("Login"):changeUser()
        -- 埋点
        XH.TipTool.hideLoading()
        XH.TipTool.showTip({
            type = XH.TIP_LAYER_TYPE.OK,
            funcOK = function()
                if XH.isEmbeddedApp() then
                    XH.PluginModule.exitActivity()
                end
            end,
            funcClose = function()
                if XH.isEmbeddedApp() then
                    XH.PluginModule.exitActivity()
                end
            end
        }, "登陆失败，请重新登录")
        XH.throwDataManager:throwDataClick(XH.ThrowDataDefine.LOGIN_FAIL)
    else
        local msg = self:getErrInfoMsg(msgData.flag)
        self:setMessage(msg)
        local data = {}
        data.getErrcode =  msgData.flag
        data.flag = XH.LOGIN_FAIL_TYPE.PLAYERDATA_FAIL
        data.numid = msgData.numid
        data.sessionid = msgData.sessionid
        self:fail(data)
    end
end

function ReqLogin:onReceivePlayerPlusData(XYID, buff, len)
    if XYID ~= XH.SRSProtocol.RespPlayerPlusData.XY_ID then
        return
    end

    local respPlayerPlusData = XH.SRSProtocol.RespPlayerPlusData:new()
    respPlayerPlusData:bistream(buff, len)
    self._data.ppd = respPlayerPlusData

    if XH.isEmbeddedApp() then
        self:success(self._data)
        return
    end

    local reqPlayerSimpleInfo = XH.ToolProtocol.ReqPlayerSimpleInfo:new()
    reqPlayerSimpleInfo.askid = 0
    reqPlayerSimpleInfo.areaid = self._data.playerData.areaid
    reqPlayerSimpleInfo.numid = self._data.playerData.numid
    reqPlayerSimpleInfo.gameid = self._gameid
    XH.netEngine:addProtocolScriptFuncByObj(self, self.onReceiveRespPlayerSimpleInfo, XH.ToolProtocol.ReqPlayerSimpleInfo.processid, self._srsGroupID)
    XH.netEngine:sendProtocol(reqPlayerSimpleInfo, XH.ToolProtocol.ReqPlayerSimpleInfo.processid, 0, self._srsGroupID)
end

function ReqLogin:onReceiveRespPlayerSimpleInfo(XYID, buff, len)
    if XYID ~= XH.ToolProtocol.RespPlayerSimpleInfo.XY_ID then
        return
    end

    local respPlayerSimpleInfo = XH.ToolProtocol.RespPlayerSimpleInfo:new()
    respPlayerSimpleInfo:bistream(buff, len)

    self._data.simpleInfo = respPlayerSimpleInfo

    self:success(self._data)
end

function ReqLogin:getErrInfoMsg(flag)
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

return ReqLogint