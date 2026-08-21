local ReqRealNameAuth = class("ReqRealNameAuth", XH.ReqProtocol)

function ReqRealNameAuth:start(timeoutTime)
    if ReqRealNameAuth.super.start(self, timeoutTime) == false then
        return
    end
    local reqRealNameAuth = XH.BoxDataProtocol.ReqRealNameAuth:new()
    reqRealNameAuth.nAskId = 0
    reqRealNameAuth.nChannel = XH.SysTool:getChannelID()
    local SRSGroupID = XH.areaData:getSrsGroupID()
    self:sendMsg(reqRealNameAuth, XH.BoxDataProtocol.RespRealNameAuth, SRSGroupID, 0)
end

function ReqRealNameAuth:onMsgReceive(msgData)
    if msgData then
        self:success(msgData)
    else
        self:fail()
    end
end


return ReqRealNameAuth