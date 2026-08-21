-- todo暂不处理

local CellMatchPosition = class("CellMatchPosition", NG.GoldProtoBufReq)
local GoldPlayerData = require("newgold.GoldCommon.Data.GoldPlayerData")
function CellMatchPosition:ctor()
    CellMatchPosition.super.ctor(self)
    self._protobuf = {
        --
        protobufFile = "nyx_client",
        packageName = "Zeus.nyx.v1",
        reqName = "PeakMatchInfoRequest",
        resqName = "PeakMatchInfoReply",
        reqxyid = 1681,
        respxyid = 1682,
        processid = 116
    }
end

function CellMatchPosition:start(base, timeoutTime)
    if CellMatchPosition.super.start(self, timeoutTime) == false then
        return
    end

    self.ask_id = os.time()
    local protocol = {
        ask_id = self.ask_id,
        base = base,
    }

    local data = self:luaDataToProtobufData(protocol)
    self:sendProtobuf(self:mergeData(data), handler(self, self.onMsgReceive), 0)
end

function CellMatchPosition:onMsgReceive(msgData)
    local data = self:protobufDataToLuaData(msgData)
    if data and data.resp and data.resp.err_code == 0 then
        self:success(data)
    else
        self:fail(data)
    end
end

return CellMatchPosition