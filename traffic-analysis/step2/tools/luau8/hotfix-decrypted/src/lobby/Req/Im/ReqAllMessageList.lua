local ReqAllMessageList = class("ReqAllMessageList", XH.ReqProtocol)

function ReqAllMessageList:start(appid, curPage, timeoutTime)
    if ReqAllMessageList.super.start(self, timeoutTime) == false then
        return
    end
    appid = appid or 0
    curPage = curPage or 0
    local srsGroupID = XH.areaData:getSrsGroupID()
    local req = XH.IMProtocol.ReqAllMessageList:new()
    
    req.askid = 0
    req.cur_package = curPage

    XH.netEngine:addProtocolScriptFuncByObj(self, self.onReceiveAllMessageList, req.processid, srsGroupID)
    XH.netEngine:sendProtocol(req, req.processid, appid, srsGroupID)
end

function ReqAllMessageList:onReceiveAllMessageList(XYID, buff, len, processid)
    if XYID ~= XH.IMProtocol.RespAllMessageList.XY_ID then
        return
    end
    if processid ~= XH.IMProtocol.processid then
        return
    end
    local resp = XH.IMProtocol.RespAllMessageList:new()
    resp:bistream(buff, len)

    local errorcode = resp.ec
    if errorcode == XH.IMProtocol.ERRORCODE.SUCCESS then
        self:success(resp)
    else
        local msg = self:getErrInfoMsg(errorcode)
        print("error "..msg)
        self:fail({errorcode = errorcode, msg = msg})
    end
end

function ReqAllMessageList:getErrInfoMsg(flag)
    if flag then
         for _,v in pairs(XH.IMProtocol.ERRORCODE) do
            if flag == v then
                print(v)
                return XH.IMProtocol.ERRORSTR[flag] or ("请求消息失败" .. flag)
            end
         end
    end
    return "请求消息失败"
end

return ReqAllMessageListJ