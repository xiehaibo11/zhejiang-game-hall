---@class NetReqOperationHistory : NetReq
local NetReqOperationHistory = class("NetReqOperationHistory", TeaHouse.NetReq)

function NetReqOperationHistory:ctor()
    NetReqOperationHistory.super.ctor(self)

    self._nAskid = 0
    self._recordData = {}
end

function NetReqOperationHistory:start(teaNumber, nAskType, nStartIndex, nCount, timeoutTime, nReqHisBit)
    if not NetReqOperationHistory.super.start(self, timeoutTime) then
        return
    end

    local reqOperationHistory = TeaHouse.TeaHouseProtocol.ReqOperationHistory:new()
    reqOperationHistory.nAskId = self._askID
    reqOperationHistory.nTeaId = teaNumber
    reqOperationHistory.nAskType = nAskType
    reqOperationHistory.nStartIndex = nStartIndex
    reqOperationHistory.nCount = nCount
    reqOperationHistory.nReqHisBit = nReqHisBit or 0
    self:sendPacket(reqOperationHistory, TeaHouse.TeaHouseProtocol.RespOperationHistory, self.onRespOperationHistory)
end

function NetReqOperationHistory:onRespOperationHistory(msgData)
    if msgData.nAskId == self._askID then
        if msgData.ucFlag == TeaHouse.TeaHouseProtocol.RespOperationHistory.RETVAL.OK then
            self._recordData[#self._recordData + 1] = msgData.stHis
            if msgData.nTotal == 0 or msgData.nTotal == msgData.nCurIndex + 1 then
                self:success(self._recordData)
            end
        elseif msgData.ucFlag == TeaHouse.TeaHouseProtocol.RespOperationHistory.RETVAL.NO_RIGHT then
            self:setMessage("没权限")
            self:fail()
        elseif msgData.ucFlag == TeaHouse.TeaHouseProtocol.RespOperationHistory.RETVAL.NO_DATA then
            self:setMessage("没有数据")
            self:fail()
        elseif msgData.ucFlag == TeaHouse.TeaHouseProtocol.RespOperationHistory.RETVAL.PARAM_ERR then
            self:setMessage("参数错误")
            self:fail()
        else
            self:setMessage("未知错误" .. msgData.ucFlag)
            self:fail()
        end
    end
end

return NetReqOperationHistory