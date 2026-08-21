local ReqToken50 = class("ReqToken50", XH.ReqProtobuf)

function ReqToken50:ctor()
    ReqToken50.super.ctor(self)
    self._protobuf = require("app.Protobuf.TeaHouseProtobuf")
    self._reqProtobuf = self._protobuf.TokenRequest
    self._ask_id = -1
end

function ReqToken50:start(timeoutTime)
    if ReqToken50.super.start(self, timeoutTime) == false then
        return
    end
    self._ask_id = os.time()
    self._reqProtobuf.data.tenant_id = XH.areaData:getTenantid()
    self._reqProtobuf.data.area_id = XH.areaData:getAreaID()
    self._reqProtobuf.data.user_id = XH.playerData:getNumberID()
    self._reqProtobuf.data.ask_id = self._ask_id
    self:sendProtobufMsg()
end

function ReqToken50:onMsgReceive(msgData)
    if not msgData or not msgData.nXYData or not msgData.nXYData.cr then
        return
    end
    if msgData.nXYData.cr.ask_id ~= self._ask_id then
        return
    end
    if msgData.nXYData.cr.err_code == 0 then
        self:success(msgData)
    else 
        self:fail(msgData)
    end
end

return ReqToken50