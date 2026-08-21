---@class NetReqGetTeaTableCard : NetReq
local NetReqGetTeaTableCard = class("NetReqGetTeaTableCard", TeaHouse.NetReq)

function NetReqGetTeaTableCard:ctor()
    NetReqGetTeaTableCard.super.ctor(self)

    self._nAskId = 0
end

function NetReqGetTeaTableCard:start(nTeaId,  timeoutTime)
    if not NetReqGetTeaTableCard.super.start(self, timeoutTime) then
        return
    end

    local reqGetTeaTableCard = TeaHouse.TeaHouseProtocol.ReqGetTeaTableCard:new()
    self._nAskId = os.time()
    reqGetTeaTableCard.nAskId = self._nAskId
    reqGetTeaTableCard.nTeaId = nTeaId
    self:sendPacket(reqGetTeaTableCard, TeaHouse.TeaHouseProtocol.RespGetTeaTableCard, self.onRespGetTeaTableCard)
end

function NetReqGetTeaTableCard:onRespGetTeaTableCard(msgData)
    if msgData.nAskId ~= self._nAskId then
        return
    end
    if msgData.ucFlag == TeaHouse.TeaHouseProtocol.RespGetTeaTableCard.RETVAL.OK then
        self:success(msgData)
        return
    else
        self:setMessage("请求桌卡信息失败("..msgData.ucFlag..")")
    end
    self:fail()
end

return NetReqGetTeaTableCard