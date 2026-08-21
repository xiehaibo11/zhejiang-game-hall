local ReqFolloweddList = class("ReqFolloweddList", XH.ReqProtocol)

function ReqFolloweddList:start(appid, timeoutTime)
    if ReqFolloweddList.super.start(self, timeoutTime) == false then
        return
    end
    appid = appid or 0
    local srsGroupID = XH.areaData:getSrsGroupID()
    local req = XH.IMProtocol.ReqFolloweddList:new()
    
    req.askid = 0

    XH.netEngine:addProtocolScriptFuncByObj(self, self.onReqFollowddList, req.processid, srsGroupID)
    XH.netEngine:sendProtocol(req, req.processid, appid, srsGroupID)
end

function ReqFolloweddList:onReqFollowddList(XYID, buff, len, processid)
    if XYID ~= XH.IMProtocol.RespFolloweddList.XY_ID then
        return
    end
    if processid ~= XH.IMProtocol.processid then
        return
    end
    local resp = XH.IMProtocol.RespFolloweddList:new()
    resp:bistream(buff, len)

    local errorcode = resp.ec
    if errorcode == XH.IMProtocol.ERRORCODE.SUCCESS then
        self:success(resp)
    elseif errorcode == XH.IMProtocol.ERRORCODE.EC_PLEASE_PROCESS_BASE_PROTOCOL_FIRSTLY then
        self:fail({errorcode = errorcode})
    end
end

return ReqFolloweddList�