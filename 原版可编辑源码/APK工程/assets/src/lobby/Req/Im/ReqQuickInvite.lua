local ReqQuickInvite = class("ReqQuickInvite", XH.ReqProtocol)

function ReqQuickInvite:start(appid, timeoutTime)
    if ReqQuickInvite.super.start(self, timeoutTime) == false then
        return
    end
    appid = appid or 0
    local srsGroupID = XH.areaData:getSrsGroupID()
    local req = XH.IMProtocol.ReqQuickInvite:new()
    
    req.askid = 0

    XH.netEngine:addProtocolScriptFuncByObj(self, self.onReceiveQuickInvite, req.processid, srsGroupID)
    XH.netEngine:sendProtocol(req, req.processid, appid, srsGroupID)
end

function ReqQuickInvite:onReceiveQuickInvite(XYID, buff, len, processid)
    if XYID ~= XH.IMProtocol.RespQuickInvite.XY_ID then
        return
    end
    if processid ~= XH.IMProtocol.processid then
        return
    end
    local resp = XH.IMProtocol.RespQuickInvite:new()
    resp:bistream(buff, len)

    local errorcode = resp.ec
    if errorcode == XH.IMProtocol.ERRORCODE.SUCCESS then
        self:success(resp)
    else
        local msg = self:getErrInfoMsg(errorcode)
        print("error "..msg)
        self:fail({errorcode = errorcode, msg = msg})
    end
end

function ReqQuickInvite:getErrInfoMsg(flag)
    if flag then
         for _,v in pairs(XH.IMProtocol.ERRORCODE) do
            if flag == v then
                print(v)
                return XH.IMProtocol.ERRORSTR[flag] or ("一键邀请失败" .. flag)
            end
         end
    end
    return "一键邀请失败"
end

return ReqQuickInvite