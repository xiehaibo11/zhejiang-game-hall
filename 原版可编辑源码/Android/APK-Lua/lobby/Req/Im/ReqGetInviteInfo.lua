local ReqGetInviteInfo = class("ReqGetInviteInfo", XH.ReqProtocol)

function ReqGetInviteInfo:start(appid, curPage, timeoutTime)
    if ReqGetInviteInfo.super.start(self, timeoutTime) == false then
        return
    end
    appid = appid or 0
    curPage = curPage or 0
    local srsGroupID = XH.areaData:getSrsGroupID()
    local req = XH.IMProtocol.ReqGetInviteInfo:new()
    
    req.askid = 0
    req.cur_package = curPage

    XH.netEngine:addProtocolScriptFuncByObj(self, self.onReceiveInviteInfo, req.processid, srsGroupID)
    XH.netEngine:sendProtocol(req, req.processid, appid, srsGroupID)
end

function ReqGetInviteInfo:onReceiveInviteInfo(XYID, buff, len, processid)
    if XYID ~= XH.IMProtocol.RespGetInviteInfo.XY_ID then
        return
    end
    if processid ~= XH.IMProtocol.processid then
        return
    end
    local resp = XH.IMProtocol.RespGetInviteInfo:new()
    resp:bistream(buff, len)

    local errorcode = resp.ec
    if errorcode == XH.IMProtocol.ERRORCODE.SUCCESS then
        self:success(resp)
    elseif errorcode == XH.IMProtocol.ERRORCODE.EC_PLEASE_PROCESS_BASE_PROTOCOL_FIRSTLY then
        self:fail({errorcode = errorcode})
    end
end

return ReqGetInviteInfo