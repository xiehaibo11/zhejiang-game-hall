---@class NetReqSetPlayerDailyProps : NetReq
local NetReqSetPlayerDailyProps = class("NetReqSetPlayerDailyProps", TeaHouse.NetReq)

function NetReqSetPlayerDailyProps:ctor()
    NetReqSetPlayerDailyProps.super.ctor(self)

    self._nAskid = 0
    self._areaID = 0
    self._numID = 0
    self._propCount = 0
end

function NetReqSetPlayerDailyProps:start(areaID, numID, propCount, teaNumber, timeoutTime)
    if not NetReqSetPlayerDailyProps.super.start(self, timeoutTime) then
        return
    end

    local reqSetPlayerDailyProps = TeaHouse.TeaHouseProtocol.ReqSetPlayerDailyProps:new()
    self._nAskid = os.time()
    self._areaID = areaID
    self._numID = numID
    self._propCount = propCount
    reqSetPlayerDailyProps.nAskid = self._nAskid
    reqSetPlayerDailyProps.nTeaid = teaNumber
    reqSetPlayerDailyProps.nAreaid = areaID
    reqSetPlayerDailyProps.nNumid = numID
    reqSetPlayerDailyProps.nPropCnt = propCount
    self:sendPacket(reqSetPlayerDailyProps, TeaHouse.TeaHouseProtocol.RespSetPlayerDailyProps, self.onRespSetPlayerDailyProps)
end

function NetReqSetPlayerDailyProps:onRespSetPlayerDailyProps(msgData)
    if msgData.nAskid == self._nAskid then
        if msgData.ucFlag == TeaHouse.TeaHouseProtocol.RespSetPlayerDailyProps.FLAG.SUCCESS then
            self:success({
                areaID = self._areaID,
                numID = self._numID,
                propCount = self._propCount,
            })
        else
            self:fail(msgData.ucFlag)
        end
    end
end

return NetReqSetPlayerDailyProps4