local ReqDelFriend = class("ReqDelFriend", XH.ReqProtocol)

function ReqDelFriend:start(appid, numid, timeoutTime)
    if ReqDelFriend.super.start(self, timeoutTime) == false then
        return
    end
    appid = appid or 0
    local srsGroupID = XH.areaData:getSrsGroupID()
    local req = XH.IMProtocol.ReqDelFriend:new()
    
    req.askid = self._askID
    req.numid = numid

    XH.netEngine:addProtocolScriptFuncByObj(self, self.onReceiveDelFriend, req.processid, srsGroupID)
    XH.netEngine:sendProtocol(req, req.processid, appid, srsGroupID)
end

function ReqDelFriend:onReceiveDelFriend(XYID, buff, len, processid)

    if XYID ~= XH.IMProtocol.RespDelFriend.XY_ID then
        return
    end
    if processid ~= XH.IMProtocol.processid then
        return
    end
    local respAddFriend = XH.IMProtocol.RespDelFriend:new()
    respAddFriend:bistream(buff, len)

    self:success(respAddFriend)
end

return ReqDelFriend�