---@class NetReqDealPowers : NetReq
local NetReqDealPowers = class("NetReqDealPowers", TeaHouse.NetReq)

function NetReqDealPowers:ctor()
    NetReqDealPowers.super.ctor(self)

    self._nAskid = 0
    self._areaID = nil
    self._numID = nil
    self._flag = 0
    self._type = 0
end

function NetReqDealPowers:start(areaID, numID, flag, teaNumber, type, timeoutTime)
    if not NetReqDealPowers.super.start(self, timeoutTime) then
        return
    end

    self._areaID = areaID
    self._numID = numID
    self._flag = flag
    if type then
        self._type = type
    end
    local dealPowers = TeaHouse.TeaHouseProtocol.DealPowers:new()
    self._nAskid = os.time()
    dealPowers.askid = self._nAskid
    dealPowers.teaNumber = teaNumber
    dealPowers.size = 1
    dealPowers.flag = {}
    if type then
        dealPowers.eventType = type
    end
    dealPowers.areaid = areaID
    dealPowers.numid = numID
    for i = 1, #areaID do
        dealPowers.flag[i] = flag
    end
    self:sendPacket(dealPowers, TeaHouse.TeaHouseProtocol.DealPowersReturn, self.onDealPowersReturn)
end

function NetReqDealPowers:onDealPowersReturn(msgData)
    if msgData.nAskid == self._nAskid then
        self:success({
            areaID = self._areaID,
            numID = self._numID,
            flag = self._flag,
            type = self._type,
            ucflag = msgData.ucFlag,
            aucDealRet = msgData.aucDealRet,
        })
    end
end

return NetReqDealPowers