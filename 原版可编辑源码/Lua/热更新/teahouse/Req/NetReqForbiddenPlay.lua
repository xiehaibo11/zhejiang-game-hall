---@class NetReqForbiddenPlay : NetReq
local NetReqForbiddenPlay = class("NetReqForbiddenPlay", TeaHouse.NetReq)

function NetReqForbiddenPlay:ctor()
    NetReqForbiddenPlay.super.ctor(self)

    self._nAskId = 0
    self._areaID = 0
    self._numID = 0
    self._canPlay = false
end

function NetReqForbiddenPlay:start(areaID, numID, teaNumber, canPlay, timeoutTime)
    if not NetReqForbiddenPlay.super.start(self, timeoutTime) then
        return
    end

    local reqForbiddenPlay = TeaHouse.TeaHouseProtocol.ReqForbiddenPlay:new()
    self._nAskId = os.time()
    self._areaID = areaID
    self._numID = numID
    self._canPlay = canPlay
    reqForbiddenPlay.nAskId = self._nAskId
    reqForbiddenPlay.nTeaId = teaNumber
    reqForbiddenPlay.nForbiddenAreaId = areaID
    reqForbiddenPlay.nForbiddenNumId = numID
    reqForbiddenPlay.bCanPlay = canPlay
    self:sendPacket(reqForbiddenPlay, TeaHouse.TeaHouseProtocol.RespForbiddenPlay, self.onRespForbiddenPlay)
end

function NetReqForbiddenPlay:onRespForbiddenPlay(msgData)
    if msgData.nAskId == self._nAskId then
        if msgData.ucFlag == TeaHouse.TeaHouseProtocol.RespForbiddenPlay.FLAG.SUCCESS then
            self:success({
                areaID = self._areaID,
                numID = self._numID,
                canPlay = self._canPlay,
            })
        else
            self:setMessage("FORBIDDEN_PLAYER_FAIL")
            self:fail()
        end
    end
end

return NetReqForbiddenPlay