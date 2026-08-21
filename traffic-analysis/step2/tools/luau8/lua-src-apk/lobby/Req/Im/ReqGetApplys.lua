local ReqGetApplys = class("ReqGetApplys", XH.ReqProtocol)

function ReqGetApplys:start(appid, maxtime, timeoutTime)
    if ReqGetApplys.super.start(self, timeoutTime) == false then
        return
    end
    appid = appid or 0
    local srsGroupID = XH.areaData:getSrsGroupID()
    local req = XH.IMProtocol.ReqGetApplys:new()
    
    req.askid = self._askID
    req.maxtime = maxtime

    XH.netEngine:addProtocolScriptFuncByObj(self, self.onReceiveApplys, req.processid, srsGroupID)
    XH.netEngine:sendProtocol(req, req.processid, appid, srsGroupID)
end

function ReqGetApplys:onReceiveApplys(XYID, buff, len, processid)
    if XYID ~= XH.IMProtocol.RespGetApplys.XY_ID then
        return
    end
    if processid ~= XH.IMProtocol.processid then
        return
    end
    local respGetApplys = XH.IMProtocol.RespGetApplys:new()
    respGetApplys:bistream(buff, len)

    self:success(respGetApplys)
end

return ReqGetApplys�