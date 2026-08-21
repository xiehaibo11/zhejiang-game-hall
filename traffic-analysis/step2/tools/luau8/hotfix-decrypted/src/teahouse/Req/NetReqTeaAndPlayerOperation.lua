---@class NetReqTeaAndPlayerOperation : NetReq
local NetReqTeaAndPlayerOperation = class("NetReqTeaAndPlayerOperation", TeaHouse.NetReq)

function NetReqTeaAndPlayerOperation:ctor()
    NetReqTeaAndPlayerOperation.super.ctor(self)

    self._recordData = {}
end

function NetReqTeaAndPlayerOperation:start(teaNumber,nStart,nCount,timeoutTime, nDayLimit)
    if not NetReqTeaAndPlayerOperation.super.start(self, timeoutTime) then
        return
    end

    local reqTeaAndPlayerOperation = TeaHouse.TeaHouseProtocol.ReqTeaAndPlayerOperation:new()
    reqTeaAndPlayerOperation.nAskId = self._askID
    reqTeaAndPlayerOperation.nTeaId = teaNumber
    reqTeaAndPlayerOperation.nStart = nStart
    reqTeaAndPlayerOperation.nCount = nCount
    reqTeaAndPlayerOperation.nDayLimit = nDayLimit or 0
    self:sendPacket(reqTeaAndPlayerOperation, TeaHouse.TeaHouseProtocol.RespTeaAndPlayerOperation, self.onRespTeaAndPlayerOperation)
end

function NetReqTeaAndPlayerOperation:onRespTeaAndPlayerOperation(msgData)
    if msgData.nAskId == self._askID then
        if msgData.ucFlag == TeaHouse.TeaHouseProtocol.RespTeaAndPlayerOperation.RETVAL.OK then
            if msgData.nTotal ~= 0 then
                self._recordData[#self._recordData + 1] = msgData.tRecord
            end
            if msgData.nTotal == 0 or msgData.nTotal == msgData.index + 1 then
                self:success(self._recordData)
            end
        elseif msgData.ucFlag == TeaHouse.TeaHouseProtocol.RespTeaAndPlayerOperation.RETVAL.NO_RIGHT then
            self:setMessage("没权限")
            self:fail()
        elseif msgData.ucFlag == TeaHouse.TeaHouseProtocol.RespTeaAndPlayerOperation.RETVAL.PARAM_ERROR then
            self:setMessage("参数错误")
            self:fail()
        else
            self:setMessage("未知错误" .. msgData.ucFlag)
            self:fail()
        end
    end
end

return NetReqTeaAndPlayerOperation�