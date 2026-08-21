local NetReqSetupTeaHouse = class("NetReqSetupTeaHouse", TeaHouse.NetReq)

--领队/用户用
function NetReqSetupTeaHouse:ctor()
    NetReqSetupTeaHouse.super.ctor(self)
    self._nTeaid = 0
end

function NetReqSetupTeaHouse:start(nTeaid, data, timeoutTime)
    if not NetReqSetupTeaHouse.super.start(self, timeoutTime) then
        return
    end
    self._nTeaid = nTeaid

    local tReq = TeaHouse.TeaHouseProtocol.SetupTeaHouse:new()

    tReq.nAskid = os.time()
    tReq.nTeaID = self._nTeaid
    tReq.szData = data.sRemarks
    tReq.nDefaultProps = data.nNewerUseProp
    tReq.nTeaDailyMaxPropCnt = data.nDailyUseProp
    if data.bOthersHiden ~= nil then
    	tReq.bOthersHiden = data.bOthersHiden
    end
    if data.nEnableAutoTransferCard ~= nil then
        tReq.nEnableAutoTransferCard = data.nEnableAutoTransferCard
        tReq.nLowCardNum = data.nLowCardNum
        tReq.nTransferCardNum = data.nTransferCardNum
        tReq.nRemindLowCardNum = data.nRemindLowCardNum
    end
    self:sendPacket(tReq, TeaHouse.TeaHouseProtocol.SetupTeaHouse, self.onRespSetupTeaHouse)
end

function NetReqSetupTeaHouse:onRespSetupTeaHouse(msgData)
    if self._nTeaid == msgData.nTeaID then
        self:success(self._nTeaid)
    end
end

return NetReqSetupTeaHouse