---@class NetReqCloseTeaHouse : NetReq
local NetReqCloseTeaHouse = class("NetReqCloseTeaHouse", TeaHouse.NetReq)

function NetReqCloseTeaHouse:ctor()
    NetReqCloseTeaHouse.super.ctor(self)

    self._teaNumber = nil
end

function NetReqCloseTeaHouse:start(teaNumber, timeoutTime)
    if not NetReqCloseTeaHouse.super.start(self, timeoutTime) then
        return
    end

    self._teaNumber = teaNumber

    local reqCloseTeaHouse = TeaHouse.TeaHouseProtocol.ReqCloseTeaHouse:new()
    reqCloseTeaHouse.teaNumber = teaNumber
    self:sendPacket(reqCloseTeaHouse, TeaHouse.TeaHouseProtocol.RespCloseTeaHouse, self.onRespCloseTeaHouse)
end

function NetReqCloseTeaHouse:onRespCloseTeaHouse(msgData)
    if msgData.flag == TeaHouse.TeaHouseProtocol.RespCloseTeaHouse.FLAG.SUCCESS then
        self:setMessage("您已经解散了该比赛场。")
        self:success(self._teaNumber)
    else
        if msgData.flag == TeaHouse.TeaHouseProtocol.RespCloseTeaHouse.FLAG.NOTRIGHT then
            self:setMessage("NOTHAVE_RIGHT_TOCLOSETRAHOUSE")
        elseif msgData.flag == TeaHouse.TeaHouseProtocol.RespCloseTeaHouse.FLAG.EXISTTABLE then
            self:setMessage("TEAHOUSE_HAVE_TABLES")
        else
            self:setMessage("ERROR_TO_CLOSETEAHOUSE")
        end
        self:fail()
    end
end

return NetReqCloseTeaHouse