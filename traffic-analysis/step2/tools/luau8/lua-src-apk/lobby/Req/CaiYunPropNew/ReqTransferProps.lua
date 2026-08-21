local ReqTransferProps = class("ReqTransferProps", XH.ReqProtobuf)

function ReqTransferProps:ctor()
    ReqTransferProps.super.ctor(self)
    self._protobuf = require("app.Protobuf.TeaHouseProtobuf")
    self._reqProtobuf = self._protobuf.TransferPropsRequest
    self._ask_id = -1
    self._userID = 0
end

function ReqTransferProps:start(userID, params, priceConfig, targetPropId, timeoutTime)
    if ReqTransferProps.super.start(self, timeoutTime) == false then
        return
    end
    self._ask_id = os.time() + tonumber(userID)%10000
    self._reqProtobuf.data.req.costs = {}
    self._reqProtobuf.data.req.targets = {}
    self._reqProtobuf.data.req.tenant_id = XH.areaData:getTenantid()
    self._reqProtobuf.data.req.area_id = XH.areaData:getAreaID()
    self._reqProtobuf.data.ask_id = self._ask_id
    local costs = ReqTransferProps:createCosts(priceConfig)
    self._reqProtobuf.data.req.costs = costs
    self._reqProtobuf.data.req.params = params
    if targetPropId then
        local targets = ReqTransferProps:createCosts(targetPropId, true)
        self._reqProtobuf.data.req.targets = targets
    end
    self._userID = userID
    self:sendProtobufMsg()
end

function ReqTransferProps:createCosts(param, isTarget)
    local costs = {}
    costs[1] = {}
    costs[1].props = {}
    costs[1].props[1] = {}
    costs[1].owner_id = XH.playerData:getNumberID()
    costs[1].props[1].burse_type = 1
    costs[1].props[1].count = isTarget and 1 or -1*param.price
    costs[1].props[1].prop_id = isTarget and param or param.propID
    return costs
end

function ReqTransferProps:onMsgReceive(msgData)
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

return ReqTransferProps�