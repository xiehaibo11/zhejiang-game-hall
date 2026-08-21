
----------------------------------------
--@class NetReqPlayModeInfoEx : NetReq
--@author hejiafeng
--@date 2019-09-10
----------------------------------------
local NetReqPlayModeInfoEx = class("NetReqPlayModeInfoEx", TeaHouse.NetReq)

function NetReqPlayModeInfoEx:ctor()
    NetReqPlayModeInfoEx.super.ctor(self)
    self._modeInfo = {}
end

function NetReqPlayModeInfoEx:start(teaID, timeout)
    if not NetReqPlayModeInfoEx.super.start(self,timeout) then
        return
    end

    self._teaID = teaID
    self._nAskId = os.time() + teaID

    local tReq = TeaHouse.TeaHouseProtocol.ReqPlayModeInfoEx:new()
    tReq.nTeaId = teaID
    tReq.nAskId = self._nAskId
    self:sendPacket(tReq, TeaHouse.TeaHouseProtocol.RespPlayModeInfoEx, self.onRespPlayModeInfoEx)
end

function NetReqPlayModeInfoEx:onRespPlayModeInfoEx(msgData)
    if self._nAskId == msgData.nAskId then
        if msgData.nTotalPkgNum and msgData.nTotalPkgNum > 0 then
            for key, var in ipairs(msgData.astMode) do
                table.insert(self._modeInfo, var)  
            end
            if msgData.nCurPkgIndex == msgData.nTotalPkgNum-1 then
                local modeInfos = {}
                modeInfos.astMode = self._modeInfo
                modeInfos.nSize = msgData.nTotalSize
                self:success(modeInfos)
            end
        else
            self:success(msgData)
        end
    end
end

return NetReqPlayModeInfoEx