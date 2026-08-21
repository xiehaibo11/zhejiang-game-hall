local ReqPlayerConnect = class("ReqPlayerConnect", XH.ReqProtocol)

function ReqPlayerConnect:start(appid, timeoutTime)
    if ReqPlayerConnect.super.start(self, timeoutTime) == false then
        return
    end
    local srsGroupID = XH.areaData:getSrsGroupID()
    local reqConnect = XH.IMProtocol.ReqPlayerConnect:new()
    
    appid = appid or 0
    reqConnect.askid = 0

    XH.netEngine:addProtocolScriptFuncByObj(self, self.onReceivePlayerConnect, reqConnect.processid, srsGroupID)
    XH.netEngine:sendProtocol(reqConnect, reqConnect.processid, appid, srsGroupID)
end

function ReqPlayerConnect:onReceivePlayerConnect(XYID, buff, len, processid)
    if XYID ~= XH.IMProtocol.RespPlayerConnect.XY_ID then
        return
    end
    if processid ~= XH.IMProtocol.processid then
        return
    end
    local respConnect = XH.IMProtocol.RespPlayerConnect:new()
    respConnect:bistream(buff, len)

    self:success(respConnect)
end

return ReqPlayerConnect�