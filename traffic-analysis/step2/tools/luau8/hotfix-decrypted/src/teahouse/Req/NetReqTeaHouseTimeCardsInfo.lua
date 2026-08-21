----------------------------------------
--@class NetReqTeaHouseTimeCardsInfo : NetReq
--@author hejiafeng
--@date 2019-09-10
----------------------------------------
local NetReqTeaHouseTimeCardsInfo = class("NetReqTeaHouseTimeCardsInfo", XH.ReqProtocol)


function NetReqTeaHouseTimeCardsInfo:ctor()
    NetReqTeaHouseTimeCardsInfo.super.ctor(self)
end

function NetReqTeaHouseTimeCardsInfo:start(teaNumber, timeoutTime)
    if NetReqTeaHouseTimeCardsInfo.super.start(self, timeoutTime) == false then
        return
    end

    local srsGroupID = XH.areaData:getSrsGroupID()
    local req = TeaHouse.TeaHouseProtocol.ReqTeaTimeCardsInfo:new()
    req.nAskId = self._askID
    req.nTeaId = teaNumber
    req.nTimePropsId = XH.areaData:getPropList().limitedTimeRoomCardID
    req.nExporeDay = 7
    self:sendMsg(req, TeaHouse.TeaHouseProtocol.RespTeaTimeCardsInfo, srsGroupID, XH.areaData:getTeaHouseAppID())
end

function NetReqTeaHouseTimeCardsInfo:onMsgReceive(msgData)
    if msgData.nAskid ~= self._nAskid then
        return
    end
    dump(msgData, "RespTeaTimeCardsInfo")
    if msgData.ucFlag ~= 0 then
        local errMsg = {'服务错误', '权限不足'}
        self:setMessage(errMsg[msgData.ucFlag])
        self:fail(msgData.ucFlag)
        return
    end
    self:success(msgData)
end

return NetReqTeaHouseTimeCardsInfod