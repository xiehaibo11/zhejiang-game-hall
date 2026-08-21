local ReqGetBanInfo = class("ReqGetBanInfo", XH.ReqProtocol)

function ReqGetBanInfo:start(timeoutTime)
    if ReqGetBanInfo.super.start(self, timeoutTime) == false then
        return
    end
    local srsGroupID = XH.areaData:getSrsGroupID()
    local req = XH.BoxDataProtocol.ReqGetBanInfo:new()    
    req.nAskId = self._askID

    XH.netEngine:addProtocolScriptFuncByObj(self, self.onRespGetBanInfo, req.processid, srsGroupID)
    XH.netEngine:sendProtocol(req, req.processid, 0, srsGroupID)
end

function ReqGetBanInfo:onRespGetBanInfo(XYID, buff, len, processid)
    if XYID ~= XH.BoxDataProtocol.RespGetBanInfo.XY_ID then
        return
    end
    if processid ~= XH.BoxDataProtocol.processid then
        return
    end
    local respGetBanInfo = XH.BoxDataProtocol.RespGetBanInfo:new()
    respGetBanInfo:bistream(buff, len)

    self:success(respGetBanInfo)
end

return ReqGetBanInfo