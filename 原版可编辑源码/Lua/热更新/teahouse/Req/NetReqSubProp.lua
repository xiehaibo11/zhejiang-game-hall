local NetReqSubProp = class("NetReqSubProp", TeaHouse.NetReq)

function NetReqSubProp:ctor()
    NetReqSubProp.super.ctor(self)

    self._nPropCnt = 0
end

function NetReqSubProp:start(teaNumber, nProp, timeoutTime)
    if not NetReqSubProp.super.start(self, timeoutTime) then
        return
    end

    self._nAskid = os.time()

    local tReq = TeaHouse.TeaHouseProtocol.ReqSubProp:new()
    tReq.nAskid = self._nAskid
    tReq.nTeaid = teaNumber
    tReq.nPropCnt = nProp
    self._nPropCnt = nProp
    if tReq.nTeaid == 0 then
        TeaHouse.TipTool.showToast("服务异常，请重试")
    else
        self:sendPacket(tReq, TeaHouse.TeaHouseProtocol.RespSubProp, self.onRespSubProp)
    end
end

function NetReqSubProp:onRespSubProp(msgData)
    if self._nAskid == msgData.nAskid then
        if msgData.ucFlag == TeaHouse.TeaHouseProtocol.RespSubProp.FLAG.SUCCESS then
            self:success(msgData)
        elseif msgData.ucFlag == TeaHouse.TeaHouseProtocol.RespSubProp.FLAG.NO_OWNER then
            self:setMessage("NOOWNOE_TO_SUBPROP")
            self:fail()
        elseif msgData.ucFlag == TeaHouse.TeaHouseProtocol.RespSubProp.FLAG.NO_RIGHT then
            self:setMessage("NORIGHT_TO_SUBPROP")
            self:fail()
        elseif msgData.ucFlag == TeaHouse.TeaHouseProtocol.RespSubProp.FLAG.NOT_ENOUGH then
            self:setMessage("NOTENOUGH_TO_SUBPROP")
            self:fail()
        else
            self:setMessage("未知错误，划卡失败 -- " .. msgData.ucFlag)
            self:fail()
        end
    end
end

function NetReqSubProp:timeout(data)
    self:setMessage("TIMEOUT_TO_SUBPROP")
    NetReqSubProp.super.timeout(self, data)
end

function NetReqSubProp:getPropCnt()
    return self._nPropCnt
end

return NetReqSubProp