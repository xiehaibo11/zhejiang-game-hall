local ReqInviteGame = class("ReqInviteGame", XH.ReqProtocol)

function ReqInviteGame:start(appid, inviteAreaId, invitePlayer, beInvitedAreaId, beInvitedPlayer, roomid, timeoutTime)
    if ReqInviteGame.super.start(self, timeoutTime) == false then
        return
    end
    appid = appid or 0
    local srsGroupID = XH.areaData:getSrsGroupID()
    local req = XH.IMProtocol.ReqInviteGame:new()
    
    req.askid = 0
    req.inviteAreaid = inviteAreaId
    req.invitePlayer = invitePlayer
    req.beInviteAreaid = beInvitedAreaId
    req.beInvitePlayer = beInvitedPlayer
    req.roomid = roomid

    XH.netEngine:addProtocolScriptFuncByObj(self, self.onReceiveInviteGame, req.processid, srsGroupID)
    XH.netEngine:sendProtocol(req, req.processid, appid, srsGroupID)
end

function ReqInviteGame:onReceiveInviteGame(XYID, buff, len, processid)
    if XYID ~= XH.IMProtocol.RespInviteGame.XY_ID then
        return
    end
    if processid ~= XH.IMProtocol.processid then
        return
    end
    local resp = XH.IMProtocol.RespInviteGame:new()
    resp:bistream(buff, len)

    local errorcode = resp.ec
    print("ReqInviteGame_ec: "..errorcode)
    if errorcode == XH.IMProtocol.ERRORCODE.SUCCESS then
        self:success(resp)
    elseif errorcode == XH.IMProtocol.ERRORCODE.EC_PLAYER_BAN then
        local msg = "该用户已被封禁，邀请失败"
        self:fail({errorcode = errorcode, msg = msg})
    else
        local msg = self:getErrInfoMsg(errorcode)
        print("error "..msg)
        self:fail({errorcode = errorcode, msg = msg})
    end
end

function ReqInviteGame:getErrInfoMsg(flag)
    if flag then
         for _,v in pairs(XH.IMProtocol.ERRORCODE) do
            if flag == v then
                print(v)
                return XH.IMProtocol.ERRORSTR[flag] or ("邀请失败" .. flag)
            end
         end
    end
    return "邀请失败"
end

return ReqInviteGame�