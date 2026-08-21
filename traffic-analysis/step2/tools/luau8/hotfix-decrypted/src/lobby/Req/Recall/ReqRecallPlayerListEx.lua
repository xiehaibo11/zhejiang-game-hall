local ReqRecallPlayerListEx = class("ReqRecallPlayerListEx", XH.ReqProtobuf)

function ReqRecallPlayerListEx:ctor()
    ReqRecallPlayerListEx.super.ctor(self)
    self._page_no = 0
    self._protobuf = require("app.Protobuf.TeaHouseProtobuf")
    self._reqProtobuf = self._protobuf.PageRecallPlayerExRequest
    self._ask_id = -1
end

function ReqRecallPlayerListEx:start(timeoutTime, page_no, page_size, club_id)
    if ReqRecallPlayerListEx.super.start(self, timeoutTime) == false then
        return
    end
    self._page_no = page_no
    self._reqProtobuf.data.tenant_id = XH.areaData:getTenantid()
    self._reqProtobuf.data.area_id = XH.areaData:getAreaID()
    self._reqProtobuf.data.club_id = club_id or 0
    self._reqProtobuf.data.page_no = page_no
    self._reqProtobuf.data.page_size = page_size
    self._reqProtobuf.data.user_type = 3
    self._reqProtobuf.data.user_id = 0
    self._reqProtobuf.data.device_type = 0
    if device.platform == "android" then
        self._reqProtobuf.data.device_type = 2
    elseif device.platform == "ios" then
        self._reqProtobuf.data.device_type = 1
    end
    self._reqProtobuf.data.ask_id = XH.askIDManager:getAskID()
    self._ask_id = self._reqProtobuf.data.ask_id
    self:sendProtobufMsg()
end

function ReqRecallPlayerListEx:onMsgReceive(msgData)
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

function ReqRecallPlayerListEx:getReqPage()
    return self._page_no
end

return ReqRecallPlayerListEx�