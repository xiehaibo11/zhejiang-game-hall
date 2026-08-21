local ReqPlayerConnect = class("ReqPlayerConnect", XH.ReqProtocol)

function ReqPlayerConnect:start(appid, timeoutTime)
    if ReqPlayerConnect.super.start(self, timeoutTime) == false then
        return
    end
    local srsGroupID = XH.areaData:getSrsGroupID()
    local reqConnect = XH.BagSysProtocol.ReqPlayerConnect:new()
    
    local askid = math.floor(socket.gettime())
    self._askid = askid

    appid = appid or 0
    reqConnect.askid = askid

    XH.netEngine:addProtocolScriptFuncByObj(self, self.onReceivePlayerConnect, reqConnect.processid, srsGroupID)
    XH.netEngine:sendProtocol(reqConnect, reqConnect.processid, appid, srsGroupID)
end

function ReqPlayerConnect:onReceivePlayerConnect(XYID, buff, len, processid)
    if XYID ~= XH.BagSysProtocol.RespPlayerConnect.XY_ID then
        return
    end
    if processid ~= XH.BagSysProtocol.processid then
        return
    end
    local respConnect = XH.BagSysProtocol.RespPlayerConnect:new()
    respConnect:bistream(buff, len)

    if self._askid ~= respConnect.askid then
        return
    end

    self:success(respConnect)
end

return ReqPlayerConnect�