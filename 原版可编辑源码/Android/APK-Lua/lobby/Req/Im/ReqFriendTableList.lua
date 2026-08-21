local ReqFriendTableList = class("ReqFriendTableList", XH.ReqProtocol)

function ReqFriendTableList:start(appid, curPage, timeoutTime)
    if ReqFriendTableList.super.start(self, timeoutTime) == false then
        return
    end
    appid = appid or 0
    curPage = curPage or 0
    local srsGroupID = XH.areaData:getSrsGroupID()
    local req = XH.IMProtocol.ReqFriendTableList:new()
    
    req.askid = self._askID
    req.cur_package = curPage

    self:sendMsg(req, XH.IMProtocol.RespFriendTableList, srsGroupID, appid)
end

function ReqFriendTableList:onMsgReceive(data)
    if self._askID ~= data.askid then
        return
    end

    local errorcode = data.ec
    if errorcode == XH.IMProtocol.ERRORCODE.SUCCESS then
        self:success(data)
    elseif errorcode == XH.IMProtocol.ERRORCODE.EC_PLEASE_PROCESS_BASE_PROTOCOL_FIRSTLY then
        self:fail({errorcode = errorcode})
    end
end

return ReqFriendTableList