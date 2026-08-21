---@class ReqRecomendInvitation
local ReqRecomendInvitation = class("ReqRecomendInvitation", XH.ReqProtocol)

function ReqRecomendInvitation:start(timeoutTime)
    if ReqRecomendInvitation.super.start(self, timeoutTime) == false then
        return
    end
    local recomendInvitation = XH.TeaHouseProtocol.ReqRecomendInvitation:new()
    recomendInvitation.nAskid = self._askID
    self:sendMsg(recomendInvitation, XH.TeaHouseProtocol.RespRecomendInvitation, XH.areaData:getSrsGroupID(), 0)
end

function ReqRecomendInvitation:onMsgReceive(msgData)
	if self._askID ~= msgData.nAskid then
        return
    end
    if msgData then
        self:success(msgData)
    else
        self:fail()
    end
end

return ReqRecomendInvitation�