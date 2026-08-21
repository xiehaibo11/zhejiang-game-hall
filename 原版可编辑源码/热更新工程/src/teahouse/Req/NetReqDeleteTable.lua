---@class NetReqDeleteTable : NetReq
local NetReqDeleteTable = class("NetReqDeleteTable", TeaHouse.NetReq)

function NetReqDeleteTable:ctor()
    NetReqDeleteTable.super.ctor(self)

    self._nAskid = 0
    self._tableID = nil
end

function NetReqDeleteTable:start(tableID, teaHouseID, timeoutTime, force)
    if not NetReqDeleteTable.super.start(self, timeoutTime) then
        return
    end

    local reqDeleteTable = TeaHouse.TeaHouseProtocol.ReqDeleteTable:new()
    self._nAskid = os.time() 
    self._tableID = tableID or 0
    reqDeleteTable.askid = self._nAskid
    reqDeleteTable.tableid = self._tableID
    reqDeleteTable.teaid = teaHouseID
    reqDeleteTable.force = force or 0
    self:sendPacket(reqDeleteTable, TeaHouse.TeaHouseProtocol.RespDeleteTable, self.onRespDeleteTable)
end

function NetReqDeleteTable:onRespDeleteTable(msgData)
    if msgData.askid == self._nAskid then
        if msgData.flag == TeaHouse.TeaHouseProtocol.RespDeleteTable.FLAG.SUCCESS then
            self:success(self._tableID)
        else
            if msgData.flag == TeaHouse.TeaHouseProtocol.RespDeleteTable.FLAG.NORIGHT then
                self:setMessage("YOUARE_NOT_ADMINISTRATOR")
            end
            if msgData.flag == TeaHouse.TeaHouseProtocol.RespDeleteTable.FLAG.NOT_FENGXIN_RIGHT then
                self:setMessage("ADMINISTRATOR_HASBEEN_CLOSE")
            end
            self:fail(msgData.flag)
        end
    end
end

return NetReqDeleteTable