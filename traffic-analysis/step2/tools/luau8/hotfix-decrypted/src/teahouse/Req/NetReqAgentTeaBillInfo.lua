---@class NetReqAgentTeaBillInfo : NetReq
local NetReqAgentTeaBillInfo = class("NetReqAgentTeaBillInfo", TeaHouse.NetReq)

function NetReqAgentTeaBillInfo:ctor()
    NetReqAgentTeaBillInfo.super.ctor(self)

    self._nAskId = 0
    self._maxBillCnt = -1
    self._curBillCnt = 0
    self._teaBillData = {}
    self._nDay = 0
    self._nOrdinalIndex = nil
    self._nAllTotalCnt = -1
end

function NetReqAgentTeaBillInfo:start(nTeaID, nDay, nStartIndex, nBillCnt, nOrdinalIndex, timeoutTime,nOrderType)
    if NetReqAgentTeaBillInfo.super.start(self, timeoutTime) == false then
        return
    end

    self._nDay = nDay
    local tReq = TeaHouse.ActiveProtocol.ReqTeaBillInfo:new()
    self._nAskId = os.time()
    self._nOrdinalIndex = nOrdinalIndex
    tReq.nAskid = self._nAskId
    tReq.nTeaid = nTeaID
    tReq.nDay = nDay
    tReq.nStartIndex = nStartIndex  -- 0表示从第1个开始
    tReq.nBillCnt = nBillCnt        -- 请求数量
    tReq.nOrderType = nOrderType or 0
    self:sendPacket(tReq, TeaHouse.ActiveProtocol.RespTeaBillInfo, self.onRespAgentTeaBillInfo)
end

function NetReqAgentTeaBillInfo:onRespAgentTeaBillInfo(msgData)
    if msgData.nAskid ~= self._nAskId then
        return
    end
    if self._maxBillCnt == -1 then
        self._maxBillCnt = msgData.nTotalCnt
    end
    if self._nAllTotalCnt == -1 then
        if msgData.nAllTotalCnt > 0 then
            self._nAllTotalCnt = msgData.nAllTotalCnt
        else
            self._nAllTotalCnt = -1
        end
    end
    if self._maxBillCnt > 0 then
        self._teaBillData[#self._teaBillData + 1] = clone(msgData)
        self._curBillCnt = self._curBillCnt + 1
    end
    if self._curBillCnt == self._maxBillCnt then
        self:success()
    end
end

return NetReqAgentTeaBillInfo&