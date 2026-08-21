local ReqKeepAlive = class("ReqKeepAlive", XH.ReqProtocol)

function ReqKeepAlive:start(appid, timeoutTime)
    if ReqKeepAlive.super.start(self, timeoutTime) == false then
        return
    end
    local srsGroupID = XH.areaData:getSrsGroupID()
    local reqKeep = XH.IMProtocol.ReqKeepAlive:new()
    
    appid = appid or 0
    reqKeep.askid = 0

    XH.netEngine:addProtocolScriptFuncByObj(self, self.onReceiveKeepAlive, reqKeep.processid, srsGroupID)
    XH.netEngine:sendProtocol(reqKeep, reqKeep.processid, appid, srsGroupID)
end

function ReqKeepAlive:onReceiveKeepAlive(XYID, buff, len, processid)
    if XYID ~= XH.IMProtocol.RespKeepAlive.XY_ID then
        return
    end
    if processid ~= XH.IMProtocol.processid then
        return
    end
    local respKeep = XH.IMProtocol.RespKeepAlive:new()
    respKeep:bistream(buff, len)

    local errorcode = respKeep.ec
    if errorcode == XH.IMProtocol.ERRORCODE.SUCCESS then
        self:success(respKeep)
    elseif errorcode == XH.IMProtocol.ERRORCODE.EC_PLEASE_PROCESS_BASE_PROTOCOL_FIRSTLY then
        self:fail({errorcode = errorcode})
    end
end

return ReqKeepAlive