local ReqReplyReserveGame = class("ReqReplyReserveGame", XH.ReqProtocol)

function ReqReplyReserveGame:start(appid, areaid, numid, replyType, timeoutTime)
    if ReqReplyReserveGame.super.start(self, timeoutTime) == false then
        return
    end
    appid = appid or 0
    local srsGroupID = XH.areaData:getSrsGroupID()
    local req = XH.IMProtocol.ReqReplyReserveGame:new()
    
    req.askid = 0
    req.areaid = areaid
    req.numid = numid
    req.flag = replyType

    XH.netEngine:addProtocolScriptFuncByObj(self, self.onReceiveReplyReserveGame, req.processid, srsGroupID)
    XH.netEngine:sendProtocol(req, req.processid, appid, srsGroupID)
end

function ReqReplyReserveGame:onReceiveReplyReserveGame(XYID, buff, len, processid)
    if XYID ~= XH.IMProtocol.RespReplyReserveGame.XY_ID then
        return
    end
    if processid ~= XH.IMProtocol.processid then
        return
    end
    local resp = XH.IMProtocol.RespReplyReserveGame:new()
    resp:bistream(buff, len)

    local errorcode = resp.ec
    if errorcode == XH.IMProtocol.ERRORCODE.SUCCESS or errorcode == XH.IMProtocol.ERRORCODE.EC_ROOM_OWNER then
        self:success(resp)
    else
        local msg = self:getErrInfoMsg(errorcode)
        print("error "..msg)
        self:fail({errorcode = errorcode, msg = msg})
    end
end

function ReqReplyReserveGame:getErrInfoMsg(flag)
    if flag then
         for _,v in pairs(XH.IMProtocol.ERRORCODE) do
            if flag == v then
                print(v)
                return XH.IMProtocol.ERRORSTR[flag] or ("回复预约失败" .. flag)
            end
         end
    end
    return "回复预约失败"
end

return ReqReplyReserveGame�