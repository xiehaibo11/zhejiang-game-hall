local ReqAddFriendState = class("ReqAddFriendState", XH.ReqProtocol)

function ReqAddFriendState:start(appid, numid, timeoutTime)
    if ReqAddFriendState.super.start(self, timeoutTime) == false then
        return
    end
    appid = appid or 0
    local srsGroupID = XH.areaData:getSrsGroupID()
    local req = XH.IMProtocol.ReqAddFriendState:new()
    
    req.askid = self._askID
    req.numid = numid

    XH.netEngine:addProtocolScriptFuncByObj(self, self.onReceiveAddFriendState, req.processid, srsGroupID)
    XH.netEngine:sendProtocol(req, req.processid, appid, srsGroupID)
end

function ReqAddFriendState:onReceiveAddFriendState(XYID, buff, len, processid)
    if XYID ~= XH.IMProtocol.RespAddFriendState.XY_ID then
        return
    end
    if processid ~= XH.IMProtocol.processid then
        return
    end
    local respAddFriendState = XH.IMProtocol.RespAddFriendState:new()
    respAddFriendState:bistream(buff, len)

    self:success(respAddFriendState)
end

return ReqAddFriendState