---@class NetReqGetPlayerCustomInfo : NetReq
local NetReqGetPlayerCustomInfo = class("NetReqGetPlayerCustomInfo", TeaHouse.NetReq)

function NetReqGetPlayerCustomInfo:ctor()
    NetReqGetPlayerCustomInfo.super.ctor(self)

    self._nAskid = 0
end

function NetReqGetPlayerCustomInfo:start(teaHouseID, numID, timeoutTime)
    if not NetReqGetPlayerCustomInfo.super.start(self, timeoutTime) then
        return
    end

    local reqGetPlayerCustomInfo = TeaHouse.TeaHouseProtocol.ReqGetPlayerCustomInfo:new()
    self._nAskid = os.time()
    reqGetPlayerCustomInfo.nAskId = self._nAskid
    reqGetPlayerCustomInfo.nTeaId = teaHouseID
    reqGetPlayerCustomInfo.nNumId = numID
    self:sendPacket(reqGetPlayerCustomInfo, TeaHouse.TeaHouseProtocol.RespGetPlayerCustomInfo, self.onRespGetPlayerCustomInfo)
end

function NetReqGetPlayerCustomInfo:onRespGetPlayerCustomInfo(msgData)
    if msgData.nAskId == self._nAskid then
        if msgData.ucFlag == TeaHouse.TeaHouseProtocol.RespGetPlayerCustomInfo.RETVAL.OK then
            self:success(msgData.acInfo)
            return
        elseif msgData.ucFlag == TeaHouse.TeaHouseProtocol.RespGetPlayerCustomInfo.RETVAL.PARAM_ERROR then
            self:setMessage("获取成员备注失败：参数错误")
        elseif msgData.ucFlag == TeaHouse.TeaHouseProtocol.RespGetPlayerCustomInfo.RETVAL.NO_RIGHT then
            self:setMessage("获取成员备注失败：没有权限")
        elseif msgData.ucFlag == TeaHouse.TeaHouseProtocol.RespGetPlayerCustomInfo.RETVAL.NO_PLAYER then
            self:setMessage("获取成员备注失败:没有该玩家")
        end
        self:fail()
    end
end

return NetReqGetPlayerCustomInfo