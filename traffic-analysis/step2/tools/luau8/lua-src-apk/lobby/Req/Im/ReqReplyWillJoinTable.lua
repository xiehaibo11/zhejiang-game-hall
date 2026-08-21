local ReqReplyWillJoinTable = class("ReqReplyWillJoinTable", XH.ReqProtocol)

function ReqReplyWillJoinTable:start(appid, areaid, numid, replyType, timeoutTime)
    if ReqReplyWillJoinTable.super.start(self, timeoutTime) == false then
        return
    end
    appid = appid or 0
    local srsGroupID = XH.areaData:getSrsGroupID()
    local req = XH.IMProtocol.ReqReplyFollow:new()
    
    req.askid = 0
    req.areaid = areaid
    req.numid = numid
    req.reply_follow_type = replyType

    XH.netEngine:addProtocolScriptFuncByObj(self, self.onReceiveReqReplyFollow, req.processid, srsGroupID)
    XH.netEngine:sendProtocol(req, req.processid, appid, srsGroupID)
end

function ReqReplyWillJoinTable:onReceiveReqReplyFollow(XYID, buff, len, processid)
    if XYID ~= XH.IMProtocol.RespReplyFollow.XY_ID then
        return
    end
    if processid ~= XH.IMProtocol.processid then
        return
    end
    local resp = XH.IMProtocol.RespReplyFollow:new()
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

function ReqReplyWillJoinTable:getErrInfoMsg(flag)
    if flag then
         for _,v in pairs(XH.IMProtocol.ERRORCODE) do
            if flag == v then
                print(v)
                return XH.IMProtocol.ERRORSTR[flag] or ("操作失败" .. flag)
            end
         end
    end
    return "操作失败"
end

return ReqReplyWillJoinTable~