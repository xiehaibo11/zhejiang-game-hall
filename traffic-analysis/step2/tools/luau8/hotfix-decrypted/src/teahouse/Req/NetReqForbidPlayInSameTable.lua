
local NetReqForbidPlayInSameTable = class("NetReqForbidPlayInSameTable", TeaHouse.NetReq)

function NetReqForbidPlayInSameTable:ctor()
    NetReqForbidPlayInSameTable.super.ctor(self)
    self._modeInfo = {}
end

function NetReqForbidPlayInSameTable:start(nTeaId, timeoutTime)
    if not NetReqForbidPlayInSameTable.super.start(self, timeoutTime) then
        return
    end
    local reqForbidPlayInSameTable = TeaHouse.TeaHouseProtocol.ReqForbidPlayInSameTable:new()
    self._nAskid = os.time()
    reqForbidPlayInSameTable.nAskId = self._nAskid
    reqForbidPlayInSameTable.nTeaId = nTeaId

    self:sendPacket(reqForbidPlayInSameTable, TeaHouse.TeaHouseProtocol.RespForbidPlayInSameTable, self.onRespForbidPlayInSameTable)
end

function NetReqForbidPlayInSameTable:onRespForbidPlayInSameTable(msgData)
    if msgData.nAskId == self._nAskid then
        if msgData.nErrorCode == TeaHouse.TeaHouseProtocol.RespForbidPlayInSameTable.RETVAL.OK then
            if msgData.nTotalPkgNum and msgData.nTotalPkgNum > 0 then
                for key, var in ipairs(msgData.ruleTable) do
                    table.insert(self._modeInfo, var)  
                end
                if msgData.nCurPkgIndex == msgData.nTotalPkgNum-1 then
                    msgData.ruleTable = self._modeInfo
                    msgData.nRuleSize = msgData.nTotalSize
                    self:success(msgData)
                end
            else
                self:success(msgData)
            end
            return
        elseif msgData.nErrorCode == TeaHouse.TeaHouseProtocol.RespForbidPlayInSameTable.RETVAL.PARAM_ERROR then
            self:setMessage("获取互斥名单失败：参数错误")
        elseif msgData.nErrorCode == TeaHouse.TeaHouseProtocol.RespForbidPlayInSameTable.RETVAL.NO_RIGHT then
            self:setMessage("获取互斥名单失败：没有权限")
        end
        self:fail()
    end    
end

return NetReqForbidPlayInSameTable�