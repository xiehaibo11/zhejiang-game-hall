---@class NetReqTeaHouseInfoDis : NetReq
local NetReqTeaHouseInfoDis = class("NetReqTeaHouseInfoDis", TeaHouse.NetReq)

function NetReqTeaHouseInfoDis:ctor()
    NetReqTeaHouseInfoDis.super.ctor(self)

    self._nAskid = 0
    self._teaNumber = nil
end

function NetReqTeaHouseInfoDis:start(teaNumber, timeoutTime)
    if not NetReqTeaHouseInfoDis.super.start(self, timeoutTime) then
        return
    end

    local reqTeaHouseInfo = TeaHouse.TeaHouseProtocol.ReqTeaHouseInfo:new()
    self._nAskid = os.time()
    reqTeaHouseInfo.nAskid = self._nAskid
    reqTeaHouseInfo.nTeaNumber = teaNumber
    self._teaNumber = teaNumber
    self:sendPacket(reqTeaHouseInfo, TeaHouse.TeaHouseProtocol.RespTeaHouseInfo, self.onRespTeaHouseInfo)
end

function NetReqTeaHouseInfoDis:onRespTeaHouseInfo(msgData)
    -- local utfIndex = TeaHouse.StringTool.checkUTF8String(msgData.teaName)
    -- if utfIndex > 0 then
    --     msgData.teaName = string.sub(msgData.teaName, 1, utfIndex - 1)
    -- end
    -- msgData:splitTeaName(msgData.teaName)
    -- dump(object,"object")
    dump(msgData,"msgData")
    -- if msgData.askid == self._nAskid then
        if msgData.teaNumber == self._teaNumber then
            self:success(msgData)
        else
            self:fail(msgData)
        end
    -- end
end

return NetReqTeaHouseInfoDisT