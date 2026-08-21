local ReqDealFriendApply = class("ReqDealFriendApply", XH.ReqProtocol)

function ReqDealFriendApply:start(appid, numid , bAccept,timeoutTime)
    if ReqDealFriendApply.super.start(self, timeoutTime) == false then
        return
    end
    appid = appid or 0
    local srsGroupID = XH.areaData:getSrsGroupID()
    local req = XH.IMProtocol.ReqDealFriendApply:new()
    
    req.askid = self._askID
    req.numid = numid
    req.accept = bAccept

    XH.netEngine:addProtocolScriptFuncByObj(self, self.onReceiveDealFriendApply, req.processid, srsGroupID)
    XH.netEngine:sendProtocol(req, req.processid, appid, srsGroupID)
end

function ReqDealFriendApply:onReceiveDealFriendApply(XYID, buff, len, processid)
    if XYID ~= XH.IMProtocol.RespDealFriendApply.XY_ID then
        return
    end
    if processid ~= XH.IMProtocol.processid then
        return
    end
    local respAddFriendState = XH.IMProtocol.RespDealFriendApply:new()
    respAddFriendState:bistream(buff, len)

    self:success(respAddFriendState)
end

return ReqDealFriendApply5