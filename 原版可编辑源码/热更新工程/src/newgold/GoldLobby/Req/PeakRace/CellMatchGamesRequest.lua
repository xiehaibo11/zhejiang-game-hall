local CellMatchGamesRequest = class("CellMatchGamesRequest", NG.GoldProtoBufReq)
local GoldPlayerData = require("newgold.GoldCommon.Data.GoldPlayerData")
function CellMatchGamesRequest:ctor()
    CellMatchGamesRequest.super.ctor(self)
    self._protobuf = {
        --
        protobufFile = "nyx_client",
        packageName = "Zeus.nyx.v1",
        reqName = "GetMatchGamesRequest",
        resqName = "GetMatchGamesReply",
        reqxyid = 1679,
        respxyid = 1680,
        processid = 116
    }
end

function CellMatchGamesRequest:start(timeoutTime)
    if CellMatchGamesRequest.super.start(self, timeoutTime) == false then
        return
    end

    self.ask_id = os.time()
    local protocol = {
        ask_id = self.ask_id,
    }

    local data = self:luaDataToProtobufData(protocol)
    self:sendProtobuf(self:mergeData(data), handler(self, self.onMsgReceive), 0)
end

function CellMatchGamesRequest:onMsgReceive(msgData)
    local data = self:protobufDataToLuaData(msgData)
    if data and data.resp and data.resp.err_code == 0 then
        self:success(data)
    else
        self:fail(data)
    end
end

return CellMatchGamesRequest