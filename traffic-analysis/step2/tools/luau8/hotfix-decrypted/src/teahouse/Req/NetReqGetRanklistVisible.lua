---@class NetReqGetRanklistVisible : NetReq
local NetReqGetRanklistVisible = class("NetReqGetRanklistVisible", TeaHouse.NetReq)

function NetReqGetRanklistVisible:ctor()
    NetReqGetRanklistVisible.super.ctor(self)

    self._nAskId = 0
end

function NetReqGetRanklistVisible:start(nTeaId, nNumId, nReqType, timeoutTime)
    if not NetReqGetRanklistVisible.super.start(self, timeoutTime) then
        return
    end

    local reqSetRanklistVisible = TeaHouse.TeaHouseProtocol.ReqGetRanklistVisible:new()
    self._nAskId = os.time()
    reqSetRanklistVisible.nAskId = self._nAskId
    reqSetRanklistVisible.nTeaId = nTeaId
    reqSetRanklistVisible.nNumId = nNumId
    reqSetRanklistVisible.nReqType = nReqType
    self:sendPacket(reqSetRanklistVisible, TeaHouse.TeaHouseProtocol.RespGetRanklistVisible, self.onRespGetRanklistVisible)
end

function NetReqGetRanklistVisible:onRespGetRanklistVisible(msgData)
    if msgData.nAskId ~= self._nAskId then
        return
    end
    if msgData.ucFlag == TeaHouse.TeaHouseProtocol.RespGetRanklistVisible.RETVAL.OK then
        self:success(msgData)
        return
    elseif msgData.ucFlag == TeaHouse.TeaHouseProtocol.RespGetRanklistVisible.RETVAL.PARAM_ERROR then
        self:setMessage("请求参数错误！")
    else
        self:setMessage("其他错误！")
    end
    self:fail()
end

return NetReqGetRanklistVisible�