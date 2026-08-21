local ReqCurTime = class("ReqCurTime", XH.ReqProtocol)

function ReqCurTime:start(timeoutTime)
    if ReqCurTime.super.start(self, timeoutTime) == false then
        return
    end
    local srsGroupID = XH.areaData:getSrsGroupID()
    local tReq = XH.ActiveProtocol.ReqCurTime:new()
    tReq.nAskid = self._askID
    XH.netEngine:addProtocolScriptFuncByObj(self, self.onRespCurTime, tReq.processid, srsGroupID)
    XH.netEngine:sendProtocol(tReq, tReq.processid, 0, srsGroupID)
end

function ReqCurTime:onRespCurTime(XYID, buff, len, processid)
    if XYID ~= XH.ActiveProtocol.RespCurTime.XY_ID then
        return
    end
    if processid ~= XH.ActiveProtocol.processid then
        return
    end
	local RespCurTime = XH.ActiveProtocol.RespCurTime:new()
    RespCurTime:bistream(buff, len)

    self:success(RespCurTime)
end

return ReqCurTimel