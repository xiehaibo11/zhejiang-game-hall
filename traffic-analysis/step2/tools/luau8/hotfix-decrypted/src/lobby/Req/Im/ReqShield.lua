local ReqShield = class("ReqShield", XH.ReqProtocol)

function ReqShield:start(appid, numid, flag, timeoutTime)
    if ReqShield.super.start(self, timeoutTime) == false then
        return
    end
    appid = appid or 0
    local srsGroupID = XH.areaData:getSrsGroupID()
    local req = XH.IMProtocol.ReqLimitFriend:new()
    
    req.askid = self._askID
    req.numid = numid
    req.flag = flag

    self:sendMsg(req, XH.IMProtocol.RespLimitFriend, srsGroupID, appid)
end

function ReqShield:onMsgReceive(data)
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

function ReqShield:getErrInfoMsg(flag)
    if flag then
        for _,v in pairs(XH.IMProtocol.ERRORCODE) do
            if flag == v then
                print(v)
                return XH.IMProtocol.ERRORSTR[flag] or ("屏蔽牌友失败" .. flag)
            end
        end
    end
    return "屏蔽牌友失败"
end

return ReqShield�