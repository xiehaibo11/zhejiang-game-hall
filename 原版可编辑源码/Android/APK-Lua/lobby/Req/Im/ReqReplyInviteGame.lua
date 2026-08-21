local ReqReplyInviteGame = class("ReqReplyInviteGame", XH.ReqProtocol)

function ReqReplyInviteGame:start(appid, inviteId, replyType, timeoutTime)
    if ReqReplyInviteGame.super.start(self, timeoutTime) == false then
        return
    end
    appid = appid or 0
    local srsGroupID = XH.areaData:getSrsGroupID()
    local req = XH.IMProtocol.ReqReplyInviteGame:new()
    
    req.askid = 0
    req.invite_id = inviteId
    req.reply_type = replyType

    XH.netEngine:addProtocolScriptFuncByObj(self, self.onReceiveReplyInviteGame, req.processid, srsGroupID)
    XH.netEngine:sendProtocol(req, req.processid, appid, srsGroupID)
end

function ReqReplyInviteGame:onReceiveReplyInviteGame(XYID, buff, len, processid)
    if XYID ~= XH.IMProtocol.RespReplyInviteGame.XY_ID then
        return
    end
    if processid ~= XH.IMProtocol.processid then
        return
    end
    local resp = XH.IMProtocol.RespReplyInviteGame:new()
    resp:bistream(buff, len)

    local errorcode = resp.ec
    if errorcode == XH.IMProtocol.ERRORCODE.SUCCESS or errorcode == XH.IMProtocol.ERRORCODE.EC_ROOM_OWNER_CANT_AGREE_INVITE then
        self:success(resp)
    else
        local msg = self:getErrInfoMsg(errorcode)
        print("error "..msg)
        self:fail({errorcode = errorcode, msg = msg})
    end
end

function ReqReplyInviteGame:getErrInfoMsg(flag)
    if flag then
         for _,v in pairs(XH.IMProtocol.ERRORCODE) do
            if flag == v then
                print(v)
                return XH.IMProtocol.ERRORSTR[flag] or ("加入失败" .. flag)
            end
         end
    end
    return "加入失败"
end

return ReqReplyInviteGame