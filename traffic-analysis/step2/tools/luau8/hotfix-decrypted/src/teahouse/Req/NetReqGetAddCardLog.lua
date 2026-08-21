---@class NetReqGetAddCardLog : NetReq
local NetReqGetAddCardLog = class("NetReqGetAddCardLog", TeaHouse.NetReq)

function NetReqGetAddCardLog:ctor()
    NetReqGetAddCardLog.super.ctor(self)

    self._nAskid = 0
    self._recordData = {}
end

function NetReqGetAddCardLog:start(teaNumber, nDay, timeoutTime)
    if not NetReqGetAddCardLog.super.start(self, timeoutTime) then
        return
    end

    local reqGetAddCardLog = TeaHouse.TeaHouseProtocol.ReqGetAddCardLog:new()
    self._nAskid = os.time()
    reqGetAddCardLog.nAskId = self._nAskid
    reqGetAddCardLog.nTeaId = teaNumber
    reqGetAddCardLog.nDay = nDay
    self:sendPacket(reqGetAddCardLog, TeaHouse.TeaHouseProtocol.RespGetAddCardLog, self.onRespGetAddCardLog)
end

function NetReqGetAddCardLog:onRespGetAddCardLog(msgData)
    if msgData.nAskId == self._nAskid then
        if msgData.ucFlag == TeaHouse.TeaHouseProtocol.RespGetAddCardLog.FLAG.OK then
            if msgData.nPropCount ~= 0 then
                self._recordData[#self._recordData + 1] = msgData
            end
            if msgData.nTotal == 0 or msgData.nTotal == msgData.nCurIndex + 1 then
                self:success(self._recordData)
            end
        elseif msgData.ucFlag == TeaHouse.TeaHouseProtocol.onRespGetAddCardLog.FLAG.NO_RIGHT then
            self:setMessage("没权限")
            self:fail()
        elseif msgData.ucFlag == TeaHouse.TeaHouseProtocol.onRespGetAddCardLog.FLAG.PARAM_ERROR then
            self:setMessage("参数错误")
            self:fail()
        else
            self:setMessage("未知错误" .. msgData.ucFlag)
            self:fail()
        end
    end
end

return NetReqGetAddCardLog�