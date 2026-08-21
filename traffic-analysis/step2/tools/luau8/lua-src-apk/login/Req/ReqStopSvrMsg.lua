local ReqStopSvrMsg = class("ReqStopSvrMsg", XH.ReqProtocol)

function ReqStopSvrMsg:ctor()
    ReqStopSvrMsg.super.ctor(self)
end

function ReqStopSvrMsg:start(srsGroupID, timeout)
    if ReqStopSvrMsg.super.start(self, timeout, srsGroupID) == false then
        return
    end
    local reqStopSvrMsg = XH.MatchLinkProtocol.ReqStopSvrMsg:new()
    self._srsGroupID = srsGroupID
    reqStopSvrMsg.nAskid = self._askID
    self:sendMsg(reqStopSvrMsg, XH.MatchLinkProtocol.RespStopSvrMsg, self._srsGroupID, 0)
end

function ReqStopSvrMsg:onMsgReceive(msgData)
    if self._askID ~= msgData.nAskid then
        return
    end
    if msgData.ucflag == XH.MatchLinkProtocol.RespStopSvrMsg.UCFLAG.STOPED then
        self:success(msgData)
    else
        self:fail()
    end
end

return ReqStopSvrMsg7