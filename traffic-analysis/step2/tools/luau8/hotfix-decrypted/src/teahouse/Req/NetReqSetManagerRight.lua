---@class NetReqSetManagerRight : NetReq
local NetReqSetManagerRight = class("NetReqSetManagerRight", TeaHouse.NetReq)

function NetReqSetManagerRight:ctor()
    NetReqSetManagerRight.super.ctor(self)

    self._nAskid = 0
    self._areaID = nil
    self._numID = nil
end

function NetReqSetManagerRight:start(areaID, numID, right, teaNumber, timeoutTime)
    if not NetReqSetManagerRight.super.start(self, timeoutTime) then
        return
    end

    local reqSetManagerRight = TeaHouse.TeaHouseProtocol.ReqSetManagerRight:new()
    self._nAskid = os.time()
    reqSetManagerRight.nAskid = self._nAskid
    reqSetManagerRight.nTeaId = teaNumber
    reqSetManagerRight.nManagerNumId = numID
    reqSetManagerRight.nManagerAreaId = areaID
    reqSetManagerRight.nManagerRight = right
    self._areaID = areaID
    self._numID = numID
    self:sendPacket(reqSetManagerRight, TeaHouse.TeaHouseProtocol.RespSetManagerRight, self.onRespSetManagerRight)
end

function NetReqSetManagerRight:onRespSetManagerRight(msgData)
    if msgData.nAskid == self._nAskid then
        if msgData.ucFlag == TeaHouse.TeaHouseProtocol.RespSetManagerRight.FLAG.SUCCESS then
            self:setMessage("设置成功！")
            msgData.areaID = self._areaID
            msgData.numID = self._numID
            self:success(msgData)
            return
        elseif msgData.ucFlag == TeaHouse.TeaHouseProtocol.RespSetManagerRight.FLAG.NO_RIGHT then
            self:setMessage("您不是领队，没有操作权限。")
        elseif msgData.ucFlag == TeaHouse.TeaHouseProtocol.RespSetManagerRight.FLAG.NOT_MANAGER then
            self:setMessage("玩家不是副领队。")
        else
            self:setMessage(string.format("服务端操作异常，请稍候再试(%d)。", msgData.ucFlag))
        end
        self:fail(msgData)
    end
end

return NetReqSetManagerRightx