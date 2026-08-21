---@class NetReqSetPlayerCustomInfo : NetReq
local NetReqSetPlayerCustomInfo = class("NetReqSetPlayerCustomInfo", TeaHouse.NetReq)

function NetReqSetPlayerCustomInfo:ctor()
    NetReqSetPlayerCustomInfo.super.ctor(self)

    self._nAskid = 0
end

function NetReqSetPlayerCustomInfo:start(teaHouseID, numID, data, timeoutTime)
    if not NetReqSetPlayerCustomInfo.super.start(self, timeoutTime) then
        return
    end

    local reqSetPlayerCustomInfo = TeaHouse.TeaHouseProtocol.ReqSetPlayerCustomInfo:new()
    self._nAskid = os.time()
    reqSetPlayerCustomInfo.nAskId = self._nAskid
    reqSetPlayerCustomInfo.nTeaId = teaHouseID
    reqSetPlayerCustomInfo.nNumId = numID
    reqSetPlayerCustomInfo.acInfo = data
    self:sendPacket(reqSetPlayerCustomInfo, TeaHouse.TeaHouseProtocol.RespSetPlayerCustomInfo, self.onRespSetPlayerCustomInfo)
end

function NetReqSetPlayerCustomInfo:onRespSetPlayerCustomInfo(msgData)
    if msgData.nAskId == self._nAskid then
        if msgData.ucFlag == TeaHouse.TeaHouseProtocol.RespSetPlayerCustomInfo.RETVAL.OK then
            self:success()
            return
        elseif msgData.ucFlag == TeaHouse.TeaHouseProtocol.RespSetPlayerCustomInfo.RETVAL.PARAM_ERROR then
            self:setMessage("保存备注失败：参数错误")
        elseif msgData.ucFlag == TeaHouse.TeaHouseProtocol.RespSetPlayerCustomInfo.RETVAL.NO_RIGHT then
            self:setMessage("保存备注失败：没有权限")
        elseif msgData.ucFlag == TeaHouse.TeaHouseProtocol.RespSetPlayerCustomInfo.RETVAL.NO_PLAYER then
            self:setMessage("保存备注失败:没有该玩家")
        elseif msgData.ucFlag == TeaHouse.TeaHouseProtocol.RespSetPlayerCustomInfo.RETVAL.SENSITIVE then
            self:setMessage("保存备注失败:有敏感词")
        end
        self:fail()
    end
end

return NetReqSetPlayerCustomInfoq