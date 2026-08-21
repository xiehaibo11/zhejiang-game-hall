
local NetReqDelForbidPlayInSameTable = class("NetReqDelForbidPlayInSameTable", TeaHouse.NetReq)

function NetReqDelForbidPlayInSameTable:ctor()
    NetReqDelForbidPlayInSameTable.super.ctor(self)
    self._nTeaid = 0
end

function NetReqDelForbidPlayInSameTable:start(nTeaId, ruleId, timeoutTime)
    if not NetReqDelForbidPlayInSameTable.super.start(self, timeoutTime) then
        return
    end
    local reqDelForbidPlayInSameTable = TeaHouse.TeaHouseProtocol.ReqDelForbidPlayInSameTable:new()
    self._nAskid = os.time()
    reqDelForbidPlayInSameTable.nAskId = self._nAskid
    reqDelForbidPlayInSameTable.nTeaId = nTeaId
    reqDelForbidPlayInSameTable.nRuleId = ruleId
    self:sendPacket(reqDelForbidPlayInSameTable, TeaHouse.TeaHouseProtocol.RespDelForbidPlayInSameTable, self.onRespDelForbidPlayInSameTable)
end

function NetReqDelForbidPlayInSameTable:onRespDelForbidPlayInSameTable(msgData)
    if msgData.nAskId == self._nAskid then
        if msgData.nErrorCode == TeaHouse.TeaHouseProtocol.RespForbidPlayInSameTable.RETVAL.OK then
            self:success(msgData)
            return
        elseif msgData.nErrorCode == TeaHouse.TeaHouseProtocol.RespForbidPlayInSameTable.RETVAL.PARAM_ERROR then
            self:setMessage("删除互斥名单失败：参数错误")
        elseif msgData.nErrorCode == TeaHouse.TeaHouseProtocol.RespForbidPlayInSameTable.RETVAL.NO_RIGHT then
            self:setMessage("删除互斥名单失败：没有权限")
        elseif msgData.nErrorCode == TeaHouse.TeaHouseProtocol.RespForbidPlayInSameTable.RETVAL.NOT_FOUND then
            self:setMessage("删除失败：该互斥名单不存在")
        end
        self:fail()
    end
end

return NetReqDelForbidPlayInSameTable