local NetReqTransferOwner = class("NetReqTransferOwner", TeaHouse.NetReq)

function NetReqTransferOwner:ctor()
    NetReqTransferOwner.super.ctor(self)
    self._nAskid = 0
end

function NetReqTransferOwner:start(numId, teaNumber, timeoutTime)
    if not NetReqTransferOwner.super.start(self, timeoutTime) then
        return
    end

    self._nAskid = os.time()

    local reqTransferTeaHouse = TeaHouse.TeaHouseProtocol.ReqTransferTeaHouse:new()
    reqTransferTeaHouse.nAskId = self._nAskid
    reqTransferTeaHouse.nTeaHouseId = teaNumber
    reqTransferTeaHouse.nToNumId = numId
    self:sendPacket(reqTransferTeaHouse, TeaHouse.TeaHouseProtocol.RespTransferTeaHouse, self.onRespTransferTeaHouse)
end

function NetReqTransferOwner:onRespTransferTeaHouse(msgData)
    if msgData.nAskId ~= self._nAskid then
        return
    end
    if msgData.ucFlag == TeaHouse.TeaHouseProtocol.RespTransferTeaHouse.RETVAL.OK then
        self:setMessage("转让成功。")
        self:success(self._teaNumber)
    else
        if msgData.ucFlag == TeaHouse.TeaHouseProtocol.RespTransferTeaHouse.RETVAL.PARAM_ERROR then
            self:setMessage("参数错误")
        elseif msgData.ucFlag == TeaHouse.TeaHouseProtocol.RespTransferTeaHouse.RETVAL.NO_RIGHT then
            self:setMessage("没有操作权限")
        elseif msgData.ucFlag == TeaHouse.TeaHouseProtocol.RespTransferTeaHouse.RETVAL.NOT_DEPUTY_LEADER then
            self:setMessage("未知错误")
        elseif msgData.ucFlag == TeaHouse.TeaHouseProtocol.RespTransferTeaHouse.RETVAL.NOT_AGENT then
            self:setMessage("对方未绑定手机，请对方先绑定手机再打开比赛场")
        end
        self:fail()
    end
end

return NetReqTransferOwner�