local ReqAppidList = class("ReqAppidList", XH.ReqProtocol)

function ReqAppidList:start(timeoutTime)
    if ReqAppidList.super.start(self, timeoutTime) == false then
        return
    end
    local srsGroupID = XH.areaData:getSrsGroupID()
    local reqAppid = XH.IMProtocol.ReqAppidList:new()
    
    reqAppid.askid = 0

    XH.netEngine:addProtocolScriptFuncByObj(self, self.onReceiveAppidList, reqAppid.processid, srsGroupID)
    XH.netEngine:sendProtocol(reqAppid, reqAppid.processid, 0, srsGroupID)
end

function ReqAppidList:onReceiveAppidList(XYID, buff, len, processid)
    if XYID ~= XH.IMProtocol.RespAppidList.XY_ID then
        return
    end
    if processid ~= XH.IMProtocol.processid then
        return
    end
    local respAppid = XH.IMProtocol.RespAppidList:new()
    respAppid:bistream(buff, len)

    local errorcode = respAppid.ec
    if errorcode == XH.IMProtocol.ERRORCODE.SUCCESS then
        self:success(respAppid)
    elseif errorcode == XH.IMProtocol.ERRORCODE.EC_PLEASE_PROCESS_BASE_PROTOCOL_FIRSTLY then
        self:fail({errorcode = errorcode})
    end
end

return ReqAppidList