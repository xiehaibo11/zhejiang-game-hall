local ReqTargetFriend = class("ReqTargetFriend", XH.ReqProtocol)

function ReqTargetFriend:start(appid, numid, timeoutTime)
    if ReqTargetFriend.super.start(self, timeoutTime) == false then
        return
    end
    appid = appid or 0
    local srsGroupID = XH.areaData:getSrsGroupID()
    local req = XH.IMProtocol.ReqFriendInfo:new()
    
    req.askid = self._askID
    req.numid = numid

    self:sendMsg(req, XH.IMProtocol.RespFriendInfo, srsGroupID, appid)
end

function ReqTargetFriend:onMsgReceive(data)
    if self._askID ~= data.askid then
        return
    end

    self:success(data)
end

return ReqTargetFriend