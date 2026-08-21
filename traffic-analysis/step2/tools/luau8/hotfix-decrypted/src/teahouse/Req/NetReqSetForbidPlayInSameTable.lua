
local NetReqSetForbidPlayInSameTable =  class("NetReqSetForbidPlayInSameTable", TeaHouse.NetReq)

function NetReqSetForbidPlayInSameTable:ctor()
    NetReqSetForbidPlayInSameTable.super.ctor(self)
    self._nTeaid = 0
end

function NetReqSetForbidPlayInSameTable:start(nTeaId, anNumId, timeoutTime)
    if not NetReqSetForbidPlayInSameTable.super.start(self, timeoutTime) then
        return
    end
    local reqForbidPlayInSameTable = TeaHouse.TeaHouseProtocol.ReqSetForbidPlayInSameTable:new()
    self._nAskid = os.time()
    reqForbidPlayInSameTable.nAskId = self._nAskid
    reqForbidPlayInSameTable.nTeaId = nTeaId
    reqForbidPlayInSameTable.nSize = #anNumId
    reqForbidPlayInSameTable.anNumId = anNumId

    self:sendPacket(reqForbidPlayInSameTable, TeaHouse.TeaHouseProtocol.RespSetForbidPlayInSameTable, self.onRespSetForbidPlayInSameTable)
end

function NetReqSetForbidPlayInSameTable:onRespSetForbidPlayInSameTable(msgData)
    if msgData.nAskId == self._nAskid then
        if msgData.ucFlag == TeaHouse.TeaHouseProtocol.RespSetForbidPlayInSameTable.RETVAL.OK then
            self:success(msgData)
            return 
        elseif msgData.ucFlag == TeaHouse.TeaHouseProtocol.RespSetForbidPlayInSameTable.RETVAL.PARAM_ERROR then
            self:setMessage("设置互斥名单失败：参数错误")
        elseif msgData.ucFlag == TeaHouse.TeaHouseProtocol.RespSetForbidPlayInSameTable.RETVAL.NO_RIGHT then
            self:setMessage("设置互斥名单失败：没有权限")
        elseif msgData.ucFlag == TeaHouse.TeaHouseProtocol.RespSetForbidPlayInSameTable.RETVAL.ERROR then
            self:setMessage("设置互斥名单失败:errorcode=" .. msgData.nErrorCode)
        elseif msgData.ucFlag == TeaHouse.TeaHouseProtocol.RespSetForbidPlayInSameTable.RETVAL.REPEATED then
            self:setMessage("设置互斥名单失败：重复设置")
        elseif msgData.ucFlag == TeaHouse.TeaHouseProtocol.RespSetForbidPlayInSameTable.RETVAL.MAX_SIZE then
            self:setMessage("设置互斥名单失败：超过上限")
        else
            self:setMessage("设置互斥名单失败")
        end
        self:fail()
    end    
end

return NetReqSetForbidPlayInSameTable�