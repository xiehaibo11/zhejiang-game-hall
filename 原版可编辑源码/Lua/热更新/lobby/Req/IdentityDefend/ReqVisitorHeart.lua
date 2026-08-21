local ReqVisitorHeart = class("ReqVisitorHeart", XH.ReqProtocol)

function ReqVisitorHeart:start(timeoutTime,flag)
    if ReqVisitorHeart.super.start(self, timeoutTime) == false then
        return
    end
    local reqVisitorHeart = XH.BoxDataProtocol.ReqVisitorHeart:new()
    reqVisitorHeart.nAskId = 0
    reqVisitorHeart.nident = XH.SysTool:GetDevid()
    reqVisitorHeart.flag = flag
    local SRSGroupID = XH.areaData:getSrsGroupID()
    self:sendMsg(reqVisitorHeart, XH.BoxDataProtocol.RespVisitorHeart, SRSGroupID, 0)
end

function ReqVisitorHeart:onMsgReceive(msgData)
    if msgData then
        self:success(msgData)
    else
        self:fail()
    end
end


return ReqVisitorHeart