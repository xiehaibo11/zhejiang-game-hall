local ReqGetPropsCount = class("ReqGetPropsCount", XH.ReqProtobuf)

function ReqGetPropsCount:ctor()
    ReqGetPropsCount.super.ctor(self)
    self._protobuf = require("app.Protobuf.TeaHouseProtobuf")
    self._reqProtobuf = self._protobuf.GetPropsCountRequest
    self._ask_id = -1
    self._userID = 0
end

function ReqGetPropsCount:start(userID, teaID, propIDs, timeoutTime)
    if ReqGetPropsCount.super.start(self, timeoutTime) == false then
        return
    end
    self._ask_id = XH.HttpDefine.askid
    self._reqProtobuf.data.tenant_id = XH.areaData:getTenantid()
    self._reqProtobuf.data.area_id = XH.areaData:getAreaID()
    self._reqProtobuf.data.user_id = userID
    self._reqProtobuf.data.tea_id = teaID
    self._reqProtobuf.data.ask_id = self._ask_id
    self._reqProtobuf.data.props = {}
    for k, propID in pairs(propIDs) do
        self._reqProtobuf.data.props[k] = self:createProp(propID)
    end
    self._userID = userID
    XH.HttpDefine.askid = XH.HttpDefine.askid + 1
    self:sendProtobufMsg()
end

function ReqGetPropsCount:createProp(propID)
    return {prop_id = propID.id,
    count = 0,
    burse_type = propID.burse_type or 1,
    time = 0,
    count_big = 0,
    zero_time = 0,
    expire = 0,
    freeze_type = 0,
    balance = 0,
    old_count = 0,}
end

function ReqGetPropsCount:onMsgReceive(msgData)
    if not msgData or not msgData.nXYData or not msgData.nXYData.resp then
        return
    end
    if msgData.nXYData.resp.ask_id ~= self._ask_id then
        return
    end
    if msgData.nXYData.resp.err_code == 0 then
        msgData.nXYData.userID = self._userID
        self:success(msgData)
    else 
        self:fail(msgData)
    end
end

return ReqGetPropsCount�