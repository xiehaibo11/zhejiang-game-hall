local ReqCheckBindUser = class("ReqCheckBindUser", XH.ReqProtocol)

function ReqCheckBindUser:start(srsGroupID, timeout)
    if ReqCheckBindUser.super.start(self, timeout, srsGroupID) == false then
        return
    end

    local reqCheckBindUser = XH.ToolProtocol.ReqCheckBindUser:new()
    self._askid = os.time()
    reqCheckBindUser.askid = self._askid
    self:sendMsg(reqCheckBindUser, XH.ToolProtocol.RespCheckBindUser, srsGroupID, 0)
end

function ReqCheckBindUser:onMsgReceive(msgData)
    if self._askid ~= msgData.askid then
        return
    end

    self:success(msgData)
end

return ReqCheckBindUser