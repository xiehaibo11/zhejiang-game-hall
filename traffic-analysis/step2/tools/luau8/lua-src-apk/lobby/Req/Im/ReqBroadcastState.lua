local ReqBroadcastState = class("ReqBroadcastState", XH.ReqProtocol)

function ReqBroadcastState:ctor()
    ReqBroadcastState.super.ctor(self)
    self._xyID = 0
end

function ReqBroadcastState:start(appid, bopen, timeoutTime)
    if ReqBroadcastState.super.start(self, timeoutTime) == false then
        return
    end
    appid = appid or 0
    local srsGroupID = XH.areaData:getSrsGroupID()
    local req = XH.IMProtocol.ReqCloseFriendList:new()
    self._xyID = XH.IMProtocol.RespCloseFriendList.XY_ID
    if bopen then
        req = XH.IMProtocol.ReqOpenFriendList:new()
        self._xyID = XH.IMProtocol.RespOpenFriendList.XY_ID
    end

    XH.netEngine:addProtocolScriptFuncByObj(self, self.onReceiveCallback, req.processid, srsGroupID)
    XH.netEngine:sendProtocol(req, req.processid, appid, srsGroupID)
end

function ReqBroadcastState:onReceiveCallback(XYID, buff, len, processid)
    if XYID ~= self._xyID then
        return
    end
    if processid ~= XH.IMProtocol.processid then
        return
    end
    self:success()
end

return ReqBroadcastStateM