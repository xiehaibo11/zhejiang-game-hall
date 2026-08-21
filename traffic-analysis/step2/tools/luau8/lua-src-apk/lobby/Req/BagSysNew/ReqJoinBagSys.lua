local ReqJoinBagSys = class("ReqJoinBagSys", XH.ReqProtocol)

function ReqJoinBagSys:start(appid, timeoutTime)
    if ReqJoinBagSys.super.start(self, timeoutTime) == false then
        return
    end
    appid = appid or 0
    local srsGroupID = XH.areaData:getSrsGroupID()
    local req = XH.BagSysProtocol.ReqJoinBoxProp:new()
    
    local askid = math.floor(socket.gettime())
    self._askid = askid

    req.askid = askid
    req.channelid = XH.SysTool:getChannelID()
    req.nickname = XH.playerData:getNickName()
    req.headurl = XH.playerData:getWeChatURL()

    XH.netEngine:addProtocolScriptFuncByObj(self, self.onReceiveJoinBagSys, req.processid, srsGroupID)
    XH.netEngine:sendProtocol(req, req.processid, appid, srsGroupID)
end

function ReqJoinBagSys:onReceiveJoinBagSys(XYID, buff, len, processid)
    if XYID ~= XH.BagSysProtocol.RespJoinBoxProp.XY_ID then
        return
    end
    if processid ~= XH.BagSysProtocol.processid then
        return
    end
    local resp = XH.BagSysProtocol.RespJoinBoxProp:new()
    resp:bistream(buff, len)

    if self._askid ~= resp.askid then
        return
    end

    local errorcode = resp.ec
    if errorcode == XH.BagSysProtocol.ERRORCODE.SUCCESS then
        self:success(resp)
    else
        self:fail({errorcode = errorcode})
    end
end

return ReqJoinBagSys\