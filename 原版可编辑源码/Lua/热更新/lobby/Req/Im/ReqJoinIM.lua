local ReqJoinIM = class("ReqJoinIM", XH.ReqProtocol)

function ReqJoinIM:start(appid, timeoutTime)
    if ReqJoinIM.super.start(self, timeoutTime) == false then
        return
    end
    appid = appid or 0
    local srsGroupID = XH.areaData:getSrsGroupID()
    local req = XH.IMProtocol.ReqJoinIM:new()
    
    req.askid = 0
    req.channelid = XH.SysTool:getChannelID()
    req.nickname = XH.playerData:getNickName()
    req.headurl = XH.playerData:getWeChatURL()

    XH.netEngine:addProtocolScriptFuncByObj(self, self.onReceiveJoinIM, req.processid, srsGroupID)
    XH.netEngine:sendProtocol(req, req.processid, appid, srsGroupID)
end

function ReqJoinIM:onReceiveJoinIM(XYID, buff, len, processid)
    if XYID ~= XH.IMProtocol.RespJoinIM.XY_ID then
        return
    end
    if processid ~= XH.IMProtocol.processid then
        return
    end
    local resp = XH.IMProtocol.RespJoinIM:new()
    resp:bistream(buff, len)

    local errorcode = resp.ec
    if errorcode == XH.IMProtocol.ERRORCODE.SUCCESS then
        self:success(resp)
    elseif errorcode == XH.IMProtocol.ERRORCODE.EC_PLEASE_PROCESS_BASE_PROTOCOL_FIRSTLY then
        self:fail({errorcode = errorcode})
    end
end

return ReqJoinIM