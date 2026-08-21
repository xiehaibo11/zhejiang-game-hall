-- ReqUsePropsByProtobuf，srs已经连接到50，直接请求50协议使用道具。
local ReqUsePropsByProtobuf = class("ReqUsePropsByProtobuf", XH.ReqProtobuf50)
function ReqUsePropsByProtobuf:ctor()
    ReqUsePropsByProtobuf.super.ctor(self)
end

function ReqUsePropsByProtobuf:start(param, timeoutTime)
    if ReqUsePropsByProtobuf.super.start(self, timeoutTime) == false then
        return
    end

    self.ask_id = os.time()
    self._propId = param.props.prop_id
    local protocol = {
        ask_id = os.time(),
        tenant_id = XH.areaData:getTenantid(),
        area_id = XH.areaData:getAreaID(),
        user_id = XH.playerData:getNumberID(),
        props = param.props,
    }
    if param.custom then
        protocol.custom = param.custom
    end
    self:sendProtobuf(protocol,XH.RheaProtobuf.UsePropsRequest,XH.RheaProtobuf.UsePropsReply)
end

function ReqUsePropsByProtobuf:onMsgReceive(msgData)
    if msgData and msgData.resp.err_code == 0 then
        msgData.prop_id = self._propId
        self:success(msgData)
    else
        self:fail(msgData)
    end
end


return ReqUsePropsByProtobuf