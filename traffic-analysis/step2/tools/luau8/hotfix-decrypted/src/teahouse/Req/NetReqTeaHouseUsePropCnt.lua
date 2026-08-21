---@class NetReqTeaHouseUsePropCnt : NetReq
local NetReqTeaHouseUsePropCnt = class("NetReqTeaHouseUsePropCnt", TeaHouse.NetReq)

function NetReqTeaHouseUsePropCnt:ctor()
    NetReqTeaHouseUsePropCnt.super.ctor(self)

    self._nDailyUseProp = 0
    self._nNewerUseProp = 0
    self._nTeaProp = 0
    self._nReqCnt = 1
end

function NetReqTeaHouseUsePropCnt:start(nTeaid, nAskType, timeoutTime)
    if not NetReqTeaHouseUsePropCnt.super.start(self, timeoutTime) then
        return
    end

    local reqTeaHouseUsePropCnt = TeaHouse.TeaHouseProtocol.ReqTeaHouseUsePropCnt:new()
    if nAskType == TeaHouse.TeaHouseProtocol.RespTeaHouseUsePropCnt.ASK_TYPE.AT_ALL then
        self._nReqCnt = 3
    end
    reqTeaHouseUsePropCnt.nAskid = os.time()
    reqTeaHouseUsePropCnt.nTeaid = nTeaid
    reqTeaHouseUsePropCnt.nAskType = nAskType
    self:sendPacket(reqTeaHouseUsePropCnt, TeaHouse.TeaHouseProtocol.RespTeaHouseUsePropCnt, self.onRespTeaHouseUsePropCnt)
end

function NetReqTeaHouseUsePropCnt:onRespTeaHouseUsePropCnt(msgData)
    if msgData.nAskType == TeaHouse.TeaHouseProtocol.RespTeaHouseUsePropCnt.ASK_TYPE.AT_DAILY then
        self._nDailyUseProp = msgData.nCount
    elseif msgData.nAskType == TeaHouse.TeaHouseProtocol.RespTeaHouseUsePropCnt.ASK_TYPE.AT_DEFULT then
        self._nNewerUseProp = msgData.nCount
    elseif msgData.nAskType == TeaHouse.TeaHouseProtocol.RespTeaHouseUsePropCnt.ASK_TYPE.AT_TEAPROP then
        self._nTeaProp = msgData.nCount
    end
    self._nReqCnt = self._nReqCnt - 1
    if self._nReqCnt == 0 then
        self:success({
            DailyUseProp = self._nDailyUseProp,
            NewerUseProp = self._nNewerUseProp,
            TeaProp = self._nTeaProp,
        })
    end
end

return NetReqTeaHouseUsePropCnt