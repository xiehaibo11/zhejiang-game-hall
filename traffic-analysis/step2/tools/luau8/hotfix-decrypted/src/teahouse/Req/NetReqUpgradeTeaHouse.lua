---@class NetReqUpgradeTeaHouse : NetReq
local NetReqUpgradeTeaHouse = class("NetReqUpgradeTeaHouse", TeaHouse.NetReq)

--玩家共用
function NetReqUpgradeTeaHouse:ctor()
    NetReqUpgradeTeaHouse.super.ctor(self)
    self._nAskid = 0
end

function NetReqUpgradeTeaHouse:start(nTeaId,timeoutTime)
    if not NetReqUpgradeTeaHouse.super.start(self, timeoutTime) then
        return
    end

    local reqUpgradeTeaHouse = TeaHouse.TeaHouseProtocol.ReqUpgradeTeaHouse:new()
    self._nAskid = os.time()
    reqUpgradeTeaHouse.nAskid = self._nAskid
    reqUpgradeTeaHouse.nTeaId = nTeaId
    self:sendPacket(reqUpgradeTeaHouse, TeaHouse.TeaHouseProtocol.RespUpgradeTeaHouse, self.onRespUpgradeTeaHouse)
end

function NetReqUpgradeTeaHouse:onRespUpgradeTeaHouse(msgData)
    if msgData.nAskid ~= self._nAskid then
        return
    end
    if msgData.nFlag == TeaHouse.TeaHouseProtocol.RespUpgradeTeaHouse.FLAG.SUCCESS then
        self:success(msgData)
    elseif msgData.nFlag == TeaHouse.TeaHouseProtocol.RespUpgradeTeaHouse.FLAG.NO_ENOUGH_ACTIVEVALUE then
        self:setMessage("UPGRADE_TEAHOUSE_NO_ENOUGH_ACTIVEVALUE")
        self:fail()
    elseif msgData.nFlag == TeaHouse.TeaHouseProtocol.RespUpgradeTeaHouse.FLAG.MAX_TEACOUNT then  
        self:setMessage("UPGRADE_TEAHOUSE_MAX_TEACOUNT")
        self:fail()
    else
        self:setMessage("UPGRADE_TEAHOUSE_FAIL")
        self:fail()
    end
end


return NetReqUpgradeTeaHouse�