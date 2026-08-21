----------------------------------------
--@class NetReqPlayModeInfo : NetReq
--@author hejiafeng
--@date 2019-09-10
----------------------------------------
local NetReqPlayModeInfo = class("NetReqPlayModeInfo", TeaHouse.NetReq)

--玩家用
function NetReqPlayModeInfo:ctor()
    NetReqPlayModeInfo.super.ctor(self)
end

function NetReqPlayModeInfo:start(teaNumber, timeout)
    if not NetReqPlayModeInfo.super.start(self, timeout) then
        return
    end

    self._teaNumber = teaNumber
    self._nAskid = os.time() + teaNumber

    local tReq = TeaHouse.TeaHouseProtocol.ReqPlayModeInfo:new()
    tReq.nTeaid = teaNumber
    tReq.nAskid = self._nAskid
    self:sendPacket(tReq, TeaHouse.TeaHouseProtocol.RespPlayModeInfo, self.onRespPlayModeInfo)
end

function NetReqPlayModeInfo:onRespPlayModeInfo(msgData)
    if self._nAskid == msgData.nAskid then
        self:success(msgData)
    end
end

return NetReqPlayModeInfo�