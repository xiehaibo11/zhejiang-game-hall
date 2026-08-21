local ReqTable50 = class("ReqTable50", NG.GoldProtoBufReq)
local GoldPlayerData = require("newgold.GoldCommon.Data.GoldPlayerData")
function ReqTable50:ctor()
    ReqTable50.super.ctor(self)
    self._protobuf = {
        --
        protobufFile = "srs_client",
        packageName = "Zeus.srs.v1",
        reqName = "PlayTableMsg",
        resqName = "",
        reqxyid = 50003,
        respxyid = 2,
        processid = 2022
    }
end

function ReqTable50:start(cmdid, msg, timeoutTime)
    if ReqTable50.super.start(self, timeoutTime) == false then
        return
    end

    local protocol = {
        cmdid = cmdid,
        message = msg,
    }

    local data = self:luaDataToProtobufData(protocol)
    self:sendProtobuf(self:mergeData(data), handler(self, self.onMsgReceive), 0)
end

function ReqTable50:onMsgReceive(msgData)
    local data = self:protobufDataToLuaData(msgData)
    self:success(data)
end

return ReqTable50
