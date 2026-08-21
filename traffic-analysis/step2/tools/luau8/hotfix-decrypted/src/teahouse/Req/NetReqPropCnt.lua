---@class NetReqPropCnt : NetReq
local NetReqPropCnt = class("NetReqPropCnt", TeaHouse.NetReq)

function NetReqPropCnt:ctor()
    NetReqPropCnt.super.ctor(self)

    self._nAskid = 0
end

function NetReqPropCnt:start(nTeaid, timeoutTime)
    if not NetReqPropCnt.super.start(self, timeoutTime) then
        return
    end

    local reqPropCnt = TeaHouse.TeaHouseProtocol.ReqPropCnt:new()
    self._nAskid = os.time()
    reqPropCnt.nAskid = self._nAskid
    reqPropCnt.nTeaid = nTeaid or 0 --瑞安副领队，其他版本传不传无所谓，服务端做了兼容
    self:sendPacket(reqPropCnt, TeaHouse.TeaHouseProtocol.RespPropCnt, self.onRespPropCnt)
end

function NetReqPropCnt:onRespPropCnt(msgData)
    if msgData.nAskid == self._nAskid then
        if msgData.ucFlag == TeaHouse.TeaHouseProtocol.RespPropCnt.FLAG.SUCCESS then
            self:success(msgData)
        elseif msgData.ucFlag == TeaHouse.TeaHouseProtocol.RespPropCnt.FLAG.NO_OWNER then
            self:setMessage("NORIGHT_TOGET_ROOMCARDSNUM")
            self:fail(msgData)
        else
            self:setMessage("未知错误，获取房卡总数失败 -- " .. msgData.ucFlag)
            self:fail()
        end
    end
end

return NetReqPropCnt�