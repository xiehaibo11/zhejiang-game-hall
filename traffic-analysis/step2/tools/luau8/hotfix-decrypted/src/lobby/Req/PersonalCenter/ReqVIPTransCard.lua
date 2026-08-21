local ReqVIPTransCard = class("ReqVIPTransCard", XH.ReqProtobuf)

function ReqVIPTransCard:ctor()
    ReqVIPTransCard.super.ctor(self)
    self._protobuf = require("app.Protobuf.TeaHouseProtobuf")
    self._reqProtobuf = self._protobuf.VIPTransCardRequest
end

function ReqVIPTransCard:start(timeoutTime, userID, count, passwd)
    if ReqVIPTransCard.super.start(self, timeoutTime) == false then
        return
    end
    self._reqProtobuf.data.to_tenant_id = 4
    self._reqProtobuf.data.to_area_id = XH.areaData:getAreaID()
    self._reqProtobuf.data.to_user_id = userID
    self._reqProtobuf.data.prop_id = XH.areaData:getPropList().roomCardID
    self._reqProtobuf.data.count = count
    self._reqProtobuf.data.passwd = passwd or ""
    self:sendProtobufMsg()
end

function ReqVIPTransCard:onMsgReceive(msgData)
    if msgData and msgData.nXYData and msgData.nXYData.resp and msgData.nXYData.resp.err_code == 0 then
        self:success(msgData)
    else
        self:fail(msgData)
    end
end

return ReqVIPTransCard