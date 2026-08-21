local ReqFriendList = class("ReqFriendList", XH.ReqProtocol)

function ReqFriendList:start(appid, curPage, timeoutTime, askid)
    if ReqFriendList.super.start(self, timeoutTime) == false then
        return
    end
    appid = appid or 0
    curPage = curPage or 0
    local srsGroupID = XH.areaData:getSrsGroupID()
    local reqList = XH.IMProtocol.ReqFriendList:new()
    
    reqList.askid = askid or 0
    reqList.cur_package = curPage

    self._askid = reqList.askid

    print("spideman_ReqFriendList: " .. curPage)
    XH.netEngine:addProtocolScriptFuncByObj(self, self.onReceiveFriendList, reqList.processid, srsGroupID)
    XH.netEngine:sendProtocol(reqList, reqList.processid, appid, srsGroupID)
end

function ReqFriendList:onReceiveFriendList(XYID, buff, len, processid)
    if XYID ~= XH.IMProtocol.RespFriendList.XY_ID then
        return
    end
    if processid ~= XH.IMProtocol.processid then
        return
    end
    local respList = XH.IMProtocol.RespFriendList:new()
    respList:bistream(buff, len)

    if self._askid ~= respList.askid then
        return
    end

    local errorcode = respList.ec
    if errorcode == XH.IMProtocol.ERRORCODE.SUCCESS then
        self:success(respList)
    elseif errorcode == XH.IMProtocol.ERRORCODE.EC_PLEASE_PROCESS_BASE_PROTOCOL_FIRSTLY then
        self:fail({errorcode = errorcode})
    end
end

return ReqFriendList�