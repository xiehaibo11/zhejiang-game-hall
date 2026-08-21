local ReqHistoryFriends = class("ReqHistoryFriends", XH.ReqProtocol)

function ReqHistoryFriends:start(appid, timeoutTime)
    if ReqHistoryFriends.super.start(self, timeoutTime) == false then
        return
    end
    appid = appid or 0
    local srsGroupID = XH.areaData:getSrsGroupID()
    local req = XH.IMProtocol.ReqHistoryFriends:new()
    
    req.askid = self._askID

    self:sendMsg(req, XH.IMProtocol.ReqHistoryFriends, srsGroupID, appid)
end

function ReqHistoryFriends:onMsgReceive(data)
    if self._askID ~= data.askid then
        return
    end

    local errorcode = data.ec

    if errorcode == XH.IMProtocol.ERRORCODE.SUCCESS then
        self:success(data)
    else
        local msg = self:getErrInfoMsg(errorcode)
        print("error "..msg)
        self:fail({errorcode = errorcode, msg = msg})
    end
end

function ReqHistoryFriends:getErrInfoMsg(flag)
    if flag then
        for _,v in pairs(XH.IMProtocol.ERRORCODE) do
            if flag == v then
                print(v)
                return XH.IMProtocol.ERRORSTR[flag] or ("查找历史牌友信息失败" .. flag)
            end
        end
    end
    return "查找历史牌友信息失败"
end

return ReqHistoryFriends�