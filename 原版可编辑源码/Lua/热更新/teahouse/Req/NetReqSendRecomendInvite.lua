
----------------------------------------
--@class NetReqSendRecomendInvite : NetReq
--@author qiuzhong
--@desc 批量发送邀请
--@date 2021-12-29
----------------------------------------
local NetReqSendRecomendInvite = class("NetReqSendRecomendInvite", TeaHouse.NetReq)

function NetReqSendRecomendInvite:ctor()
    NetReqSendRecomendInvite.super.ctor(self)
    self._infoList = {}
end

function NetReqSendRecomendInvite:start(nTeaId, exceptnumidTab, timeout,dealtype)
    if not NetReqSendRecomendInvite.super.start(self,timeout) then
        return
    end
    local exceptnumids = exceptnumidTab or {}
    local tReq = TeaHouse.TeaHouseProtocol.ReqSendRecomendInvite:new()
    self._nAskId = os.time()
    tReq.nAskId = self._nAskId
    tReq.teaid = nTeaId
    tReq.exceptsize = #exceptnumids
    tReq.exceptnumid = exceptnumidTab --排除的numid
    tReq.dealtype = dealtype --未勾选：0  已勾选：1
    self:sendPacket(tReq, TeaHouse.TeaHouseProtocol.RespSendRecomendInvite, self.onRespSendRecomendInvite)
end

function NetReqSendRecomendInvite:onRespSendRecomendInvite(msgData)
    if self._nAskId ~= msgData.nAskId then
        return
    end
    if msgData then
        self:success(msgData)
    else
        self:fail()
    end
end

return NetReqSendRecomendInvite