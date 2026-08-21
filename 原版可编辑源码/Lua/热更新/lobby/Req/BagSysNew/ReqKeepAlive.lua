local ReqKeepAlive = class("ReqKeepAlive", XH.ReqProtocol)

function ReqKeepAlive:start(appid, timeoutTime)
    if ReqKeepAlive.super.start(self, timeoutTime) == false then
        return
    end
    local srsGroupID = XH.areaData:getSrsGroupID()
    local reqKeep = XH.BagSysProtocol.ReqKeepAlive:new()
    
    local askid = math.floor(socket.gettime())
    self._askid = askid

    appid = appid or 0
    reqKeep.askid = askid

    XH.netEngine:addProtocolScriptFuncByObj(self, self.onReceiveKeepAlive, reqKeep.processid, srsGroupID)
    XH.netEngine:sendProtocol(reqKeep, reqKeep.processid, appid, srsGroupID)
end

function ReqKeepAlive:onReceiveKeepAlive(XYID, buff, len, processid)
    if XYID ~= XH.BagSysProtocol.RespKeepAlive.XY_ID then
        return
    end
    if processid ~= XH.BagSysProtocol.processid then
        return
    end
    local respKeep = XH.BagSysProtocol.RespKeepAlive:new()
    respKeep:bistream(buff, len)

    if self._askid ~= respKeep.askid then
        return
    end

    local errorcode = respKeep.ec
    if errorcode == XH.BagSysProtocol.ERRORCODE.SUCCESS then
        self:success(respKeep)
    else
        self:fail({errorcode = errorcode})
    end
end

return ReqKeepAlive