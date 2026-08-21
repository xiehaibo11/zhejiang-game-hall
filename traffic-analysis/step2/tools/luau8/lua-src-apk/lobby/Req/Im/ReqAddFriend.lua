local ReqAddFriend = class("ReqAddFriend", XH.ReqProtocol)

function ReqAddFriend:start(appid, numid, timeoutTime)
    if ReqAddFriend.super.start(self, timeoutTime) == false then
        return
    end
    appid = appid or 0
    local srsGroupID = XH.areaData:getSrsGroupID()
    local req = XH.IMProtocol.ReqAddFriend:new()
    
    req.askid = self._askID
    req.numid = numid

    XH.netEngine:addProtocolScriptFuncByObj(self, self.onReceiveAddFriend, req.processid, srsGroupID)
    XH.netEngine:sendProtocol(req, req.processid, appid, srsGroupID)
end

function ReqAddFriend:onReceiveAddFriend(XYID, buff, len, processid)

    if XYID ~= XH.IMProtocol.RespAddFriend.XY_ID then
        return
    end
    if processid ~= XH.IMProtocol.processid then
        return
    end
    local respAddFriend = XH.IMProtocol.RespAddFriend:new()
    respAddFriend:bistream(buff, len)

    self:success(respAddFriend)
end

return ReqAddFriend�