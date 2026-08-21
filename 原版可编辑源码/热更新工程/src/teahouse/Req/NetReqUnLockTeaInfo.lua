---@class NetReqUnLockTeaInfo : NetReq
local NetReqUnLockTeaInfo = class("NetReqUnLockTeaInfo", TeaHouse.NetReq)

--玩家领队共用
function NetReqUnLockTeaInfo:ctor()
    NetReqUnLockTeaInfo.super.ctor(self)
    self._nAskid = 0
end

function NetReqUnLockTeaInfo:start(nUnlockType,nTeaId,timeoutTime)
    if not NetReqUnLockTeaInfo.super.start(self, timeoutTime) then
        return
    end

    local reqUnLockTeaInfo = TeaHouse.TeaHouseProtocol.ReqUnLockTeaInfo:new()
    self._nAskid = os.time()
    reqUnLockTeaInfo.nAskid = self._nAskid
    reqUnLockTeaInfo.nTeaId = nTeaId or 0
    reqUnLockTeaInfo.nUnlockType = nUnlockType
    self:sendPacket(reqUnLockTeaInfo, TeaHouse.TeaHouseProtocol.RespUnLockTeaInfo, self.onRespUnLockTeaInfo)
end

function NetReqUnLockTeaInfo:onRespUnLockTeaInfo(msgData)
    if msgData.nAskid ~= self._nAskid then
        return
    end
    if msgData.nFlag == TeaHouse.TeaHouseProtocol.RespUnLockTeaInfo.FLAG.SUCCESS then
        self:success(msgData)
    elseif msgData.nFlag ==  TeaHouse.TeaHouseProtocol.RespUnLockTeaInfo.FLAG.MAX_COUNT then
        self:setMessage("UNLOCK_TEAHOUSE_MAX_COUNT")
        self:fail()
    else
        self:setMessage("UNLOCK_TEAHOUSE_FAIL")
        self:fail()
    end
end


return NetReqUnLockTeaInfo