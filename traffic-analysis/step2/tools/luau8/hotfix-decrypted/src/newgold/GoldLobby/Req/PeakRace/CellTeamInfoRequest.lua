local CellTeamInfoRequest = class("CellTeamInfoRequest", NG.GoldProtoBufReq)
local GoldPlayerData = require("newgold.GoldCommon.Data.GoldPlayerData")
function CellTeamInfoRequest:ctor()
    CellTeamInfoRequest.super.ctor(self)
    self._protobuf = {
        --
        protobufFile = "nyx_client",
        packageName = "Zeus.nyx.v1",
        reqName = "TeamInfoRequest",
        resqName = "TeamInfoReply",
        reqxyid = 1673,
        respxyid = 1674,
        processid = 116
    }
end

function CellTeamInfoRequest:start(club_id, season, timeoutTime)
    if CellTeamInfoRequest.super.start(self, timeoutTime) == false then
        return
    end

    self.ask_id = os.time()
    local protocol = {
        ask_id = self.ask_id,
        club_id = club_id,
        season = season,
    }

    local data = self:luaDataToProtobufData(protocol)
    self:sendProtobuf(self:mergeData(data), handler(self, self.onMsgReceive), 0)
end

function CellTeamInfoRequest:onMsgReceive(msgData)
    local data = self:protobufDataToLuaData(msgData)
    if data and data.resp and data.resp.err_code == 0 then
        self:success(data)
    else
        self:fail(data)
    end
end

return CellTeamInfoRequest�