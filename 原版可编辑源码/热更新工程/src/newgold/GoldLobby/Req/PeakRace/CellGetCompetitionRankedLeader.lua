local CellGetCompetitionRankedLeader = class("CellGetCompetitionRankedLeader", NG.GoldProtoBufReq)
local GoldPlayerData = require("newgold.GoldCommon.Data.GoldPlayerData")
function CellGetCompetitionRankedLeader:ctor()
    CellGetCompetitionRankedLeader.super.ctor(self)
    self._protobuf = {
        --
        protobufFile = "nyx_client",
        packageName = "Zeus.nyx.v1",
        reqName = "GetCompetitionRankedLeaderRequest",
        resqName = "GetCompetitionRankedLeaderReply",
        reqxyid = 1695,
        respxyid = 1696,
        processid = 116
    }
end

function CellGetCompetitionRankedLeader:start(timeoutTime)
    if CellGetCompetitionRankedLeader.super.start(self, timeoutTime) == false then
        return
    end

    self.ask_id = os.time()
    local protocol = {
        ask_id = self.ask_id,
        rank_limit = 10,
    }

    local data = self:luaDataToProtobufData(protocol)
    self:sendProtobuf(self:mergeData(data), handler(self, self.onMsgReceive), 0)
end

function CellGetCompetitionRankedLeader:onMsgReceive(msgData)
    local data = self:protobufDataToLuaData(msgData)
    if data and data.resp and data.resp.err_code == 0 then
        self:success(data)
    else
        self:fail(data)
    end
end

return CellGetCompetitionRankedLeader