local ReqPlayerGameSR = class("ReqPlayerGameSR", XH.ReqProtocol)

function ReqPlayerGameSR:ctor()
    ReqPlayerGameSR.super.ctor(self)
end

function ReqPlayerGameSR:start(appID, srsGroupID, timeoutTime, areaid, numid)
    if ReqPlayerGameSR.super.start(self, timeoutTime, srsGroupID) == false then
        return
    end
    local ReqSR = XH.GameProtocolGT.ReqSR:new()
    ReqSR.mode = 0
    ReqSR.areaid = areaid
    ReqSR.numid = numid
    self:sendMsg(ReqSR, XH.GameProtocolGT.RespSR, srsGroupID, appID)
end

function ReqPlayerGameSR:onMsgReceive(msgData)
    if msgData and msgData.flag == XH.GameProtocolGT.RespSR.FLAG.SUCCESS then
        self:success() 
    end
end

return ReqPlayerGameSR�