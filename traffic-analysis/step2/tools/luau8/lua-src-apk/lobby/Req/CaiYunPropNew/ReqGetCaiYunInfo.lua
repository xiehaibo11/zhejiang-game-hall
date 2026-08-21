local ReqGetCaiYunInfo = class("ReqGetCaiYunInfo", XH.ReqProtobuf)

function ReqGetCaiYunInfo:ctor()
    ReqGetCaiYunInfo.super.ctor(self)
    self._protobuf = require("app.Protobuf.TeaHouseProtobuf")
    self._reqProtobuf = self._protobuf.CaiYunInfoRequest
    self._ask_id = -1
    self._userID = 0
end

function ReqGetCaiYunInfo:start(userID, timeoutTime)
    if ReqGetCaiYunInfo.super.start(self, timeoutTime) == false then
        return
    end
    self._ask_id = os.time() + tonumber(userID)%10000
    self._reqProtobuf.data.tenant_id = XH.areaData:getTenantid()
    self._reqProtobuf.data.area_id = XH.areaData:getAreaID()
    self._reqProtobuf.data.user_id = userID
    self._reqProtobuf.data.ask_id = self._ask_id
    self._userID = userID
    self:sendProtobufMsg()
end

function ReqGetCaiYunInfo:onMsgReceive(msgData)
    if not msgData or not msgData.nXYData or not msgData.nXYData.conf_list or not msgData.nXYData.cr then
        return
    end
    if msgData.nXYData.cr.ask_id ~= self._ask_id then
        return
    end
    if msgData.nXYData.cr.err_code == 0 then
        msgData.nXYData.userID = self._userID
        self:success(msgData)
    else 
        self:fail(msgData)
    end
end

return ReqGetCaiYunInfo�