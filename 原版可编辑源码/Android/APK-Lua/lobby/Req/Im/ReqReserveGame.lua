local ReqReserveGame = class("ReqReserveGame", XH.ReqProtocol)

function ReqReserveGame:start(appid, areaid, numid, timeoutTime)
    if ReqReserveGame.super.start(self, timeoutTime) == false then
        return
    end
    appid = appid or 0
    local srsGroupID = XH.areaData:getSrsGroupID()
    local req = XH.IMProtocol.ReqReserveGame:new()
    
    req.askid = 0
    req.areaid = areaid
    req.numid = numid

    XH.netEngine:addProtocolScriptFuncByObj(self, self.onReceiveReserveGame, req.processid, srsGroupID)
    XH.netEngine:sendProtocol(req, req.processid, appid, srsGroupID)
end

function ReqReserveGame:onReceiveReserveGame(XYID, buff, len, processid)
    if XYID ~= XH.IMProtocol.RespReserveGame.XY_ID then
        return
    end
    if processid ~= XH.IMProtocol.processid then
        return
    end
    local resp = XH.IMProtocol.RespReserveGame:new()
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

function ReqReserveGame:getErrInfoMsg(flag)
    if flag then
         for _,v in pairs(XH.IMProtocol.ERRORCODE) do
            if flag == v then
                print(v)
                return XH.IMProtocol.ERRORSTR[flag] or ("预约失败" .. flag)
            end
         end
    end
    return "预约失败"
end

return ReqReserveGame