local ReqUnbindUser = class("ReqUnbindUser", XH.ReqProtocol)

function ReqUnbindUser:start(srsGroupID, timeout)
    if ReqUnbindUser.super.start(self, timeout, srsGroupID) == false then
        return
    end

    local reqChangePlayerInfo = XH.ToolProtocol.ReqChangePlayerInfo:new()
    self._askid = os.time()
    reqChangePlayerInfo.askid = self._askid
    reqChangePlayerInfo.flag = XH.ToolProtocol.ReqChangePlayerInfo.CHANGETYPE.CGT_UNBIND
    self:sendMsg(reqChangePlayerInfo, XH.ToolProtocol.RespChangePlayerInfo, srsGroupID, 0)
end

function ReqUnbindUser:onMsgReceive(msgData)
    if self._askid ~= msgData.askid then
        return
    end
    if msgData.flag == XH.ToolProtocol.RespChangePlayerInfo.FLAG.SUCCESS then
        self:success()
    else
        self:setMessage("")
        self:fail()
    end
end

return ReqUnbindUser