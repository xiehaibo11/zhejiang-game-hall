
----------------------------------------
--@class NetReqInvitePlayer : NetReq
--@author zhanghaichuan
--@desc 发送邀请
--@date 2023-6-20
----------------------------------------
local NetReqInvitePlayer = class("NetReqInvitePlayer", TeaHouse.NetReq)

function NetReqInvitePlayer:ctor()
    NetReqInvitePlayer.super.ctor(self)
    self._infoList = {}
end

function NetReqInvitePlayer:start(nTeaId, nInviteAreaId,nInviteNumId,nChannel,nTime, timeout)
    if not NetReqInvitePlayer.super.start(self,timeout) then
        return
    end
    local exceptnumids = exceptnumidTab or {}
    local tReq = TeaHouse.TeaHouseProtocol.ReqInvitePlayer:new()
    self._nAskId = os.time()
    tReq.nAskId = self._nAskId
    tReq.nTeaId = nTeaId
    tReq.nInviteAreaId = nInviteAreaId
    tReq.nInviteNumId = nInviteNumId
    tReq.nChannel = nChannel or 0
    tReq.nTime = nTime or 0
    self:sendPacket(tReq, TeaHouse.TeaHouseProtocol.RespInvitePlayer, self.onRespInvitePlayer)
end

function NetReqInvitePlayer:onRespInvitePlayer(msgData)
    if self._nAskId ~= msgData.nAskId then
        return
    end
    if msgData then
        self:success(msgData)
    else
        self:fail()
    end
end

return NetReqInvitePlayer