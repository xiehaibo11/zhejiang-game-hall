---@class ReqDealRecomendInvitation
local ReqDealRecomendInvitation = class("ReqDealRecomendInvitation", XH.ReqProtocol)

function ReqDealRecomendInvitation:start(appid,acceptInvite,numid,teaid,timeoutTime)
    if ReqDealRecomendInvitation.super.start(self, timeoutTime) == false then
        return
    end
    local dealRecomendInvitation = XH.TeaHouseProtocol.ReqDealRecomendInvitation:new()
    dealRecomendInvitation.nAskid = self._askID
    dealRecomendInvitation.acceptInvite = acceptInvite
    dealRecomendInvitation.numid = numid --领队numid
    dealRecomendInvitation.teaid = teaid
    self:sendMsg(dealRecomendInvitation, XH.TeaHouseProtocol.RespRecomendInvitation, XH.areaData:getSrsGroupID(), appid)
end

function ReqDealRecomendInvitation:onMsgReceive(msgData)
	if self._askID ~= msgData.nAskid then
        return
    end
    self:success(msgData)
end

return ReqDealRecomendInvitation