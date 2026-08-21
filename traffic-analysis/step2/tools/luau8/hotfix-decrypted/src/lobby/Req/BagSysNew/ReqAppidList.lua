local ReqAppidList = class("ReqAppidList", XH.ReqProtocol)

function ReqAppidList:start(timeoutTime)
    if ReqAppidList.super.start(self, timeoutTime) == false then
        return
    end
    local srsGroupID = XH.areaData:getSrsGroupID()
    local reqAppid = XH.BagSysProtocol.ReqAppidList:new()
    
    local askid = math.floor(socket.gettime())
    self._askid = askid

    reqAppid.askid = askid

    XH.netEngine:addProtocolScriptFuncByObj(self, self.onReceiveAppidList, reqAppid.processid, srsGroupID)
    XH.netEngine:sendProtocol(reqAppid, reqAppid.processid, 0, srsGroupID)
end

function ReqAppidList:onReceiveAppidList(XYID, buff, len, processid)
    if XYID ~= XH.BagSysProtocol.RespAppidList.XY_ID then
        return
    end
    if processid ~= XH.BagSysProtocol.processid then
        return
    end
    local respAppid = XH.BagSysProtocol.RespAppidList:new()
    respAppid:bistream(buff, len)

    if self._askid ~= respAppid.askid then
        return
    end

    local errorcode = respAppid.ec
    if errorcode == XH.BagSysProtocol.ERRORCODE.SUCCESS then
        self:success(respAppid)
    else
        self:fail({errorcode = errorcode})
    end
end

return ReqAppidList�