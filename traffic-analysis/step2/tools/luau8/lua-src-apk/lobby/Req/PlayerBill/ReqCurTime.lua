local CellReqCurTime = class("CellReqCurTime", XH.ReqProtocol)

--领队/用户，玩家共用
function CellReqCurTime:ctor()
    CellReqCurTime.super.ctor(self)
    self._curTime = 0
end

function CellReqCurTime:start(timeoutTime)
    if CellReqCurTime.super.start(self, timeoutTime) == false then
        return
    end

    local reqCurTime = XH.ActiveProtocol.ReqCurTime:new()
    reqCurTime.nAskid = 0
    self:sendMsg(reqCurTime, XH.ActiveProtocol.RespCurTime, XH.areaData:getSrsGroupID(), 0)
end

function CellReqCurTime:onMsgReceive(msgData)
    self._curTime = msgData.nTime
    self:success()
end

return CellReqCurTime
�