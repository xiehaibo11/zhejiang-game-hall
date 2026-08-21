---@class NetReqSetRanklistVisible : NetReq
local NetReqSetRanklistVisible = class("NetReqSetRanklistVisible", TeaHouse.NetReq)

function NetReqSetRanklistVisible:ctor()
    NetReqSetRanklistVisible.super.ctor(self)

    self._nAskId = 0
end

function NetReqSetRanklistVisible:start(nTeaId, nNumId, nSetType, nVisibleRankBit, timeoutTime)
    if not NetReqSetRanklistVisible.super.start(self, timeoutTime) then
        return
    end

    local reqSetRanklistVisible = TeaHouse.TeaHouseProtocol.ReqSetRanklistVisible:new()
    self._nAskId = os.time()
    reqSetRanklistVisible.nAskId = self._nAskId
    reqSetRanklistVisible.nTeaId = nTeaId
    reqSetRanklistVisible.nNumId = nNumId
    reqSetRanklistVisible.nSetType = nSetType
    reqSetRanklistVisible.nVisibleRankBit = nVisibleRankBit
    self:sendPacket(reqSetRanklistVisible, TeaHouse.TeaHouseProtocol.RespSetRanklistVisible, self.onRespSetRanklistVisible)
end

function NetReqSetRanklistVisible:onRespSetRanklistVisible(msgData)
    if msgData.nAskId ~= self._nAskId then
        return
    end
    if msgData.ucFlag == TeaHouse.TeaHouseProtocol.RespSetRanklistVisible.RETVAL.OK then
        self:success(msgData)
        return
    elseif msgData.ucFlag == TeaHouse.TeaHouseProtocol.RespSetRanklistVisible.RETVAL.PARAM_ERROR then
        self:setMessage("请求参数错误！")
    elseif msgData.ucFlag == TeaHouse.TeaHouseProtocol.RespSetRanklistVisible.RETVAL.NO_RIGHT then
        self:setMessage("没有权限！")
    elseif msgData.ucFlag == TeaHouse.TeaHouseProtocol.RespSetRanklistVisible.RETVAL.NOT_TEAPLAYER then
        self:setMessage("不是比赛场成员！")
    else
        self:setMessage("其他错误！")
    end
    self:fail()
end

return NetReqSetRanklistVisible