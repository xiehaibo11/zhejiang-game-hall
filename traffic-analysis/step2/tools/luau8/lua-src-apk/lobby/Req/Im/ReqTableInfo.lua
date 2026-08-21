local ReqTableInfo = class("ReqTableInfo", XH.ReqProtocol)

function ReqTableInfo:start(appid, timeoutTime)
    if ReqTableInfo.super.start(self, timeoutTime) == false then
        return
    end
    appid = appid or 0
    local srsGroupID = XH.areaData:getSrsGroupID()
    local req = XH.IMProtocol.ReqTableInfo:new()
    
    req.askid = 0

    XH.netEngine:addProtocolScriptFuncByObj(self, self.onReceiveTableInfo, req.processid, srsGroupID)
    XH.netEngine:sendProtocol(req, req.processid, appid, srsGroupID)
end

function ReqTableInfo:onReceiveTableInfo(XYID, buff, len, processid)
    if XYID ~= XH.IMProtocol.RespTableInfo.XY_ID then
        return
    end
    if processid ~= XH.IMProtocol.processid then
        return
    end
    local resp = XH.IMProtocol.RespTableInfo:new()
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

function ReqTableInfo:getErrInfoMsg(flag)
    if flag then
         for _,v in pairs(XH.IMProtocol.ERRORCODE) do
            if flag == v then
                print(v)
                return XH.IMProtocol.ERRORSTR[flag] or ("获取桌子信息失败" .. flag)
            end
         end
    end
    return "获取桌子信息失败"
end

return ReqTableInfo�