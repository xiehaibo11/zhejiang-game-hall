local CellTeamListRequest = class("CellTeamListRequest", NG.GoldProtoBufReq)
local GoldPlayerData = require("newgold.GoldCommon.Data.GoldPlayerData")
function CellTeamListRequest:ctor()
    CellTeamListRequest.super.ctor(self)
    self._protobuf = {
        --
        protobufFile = "nyx_client",
        packageName = "Zeus.nyx.v1",
        reqName = "TeamListRequest",
        resqName = "TeamListReply",
        reqxyid = 1675,
        respxyid = 1676,
        processid = 116
    }
end

function CellTeamListRequest:start(isShow, season, timeoutTime)
    if CellTeamListRequest.super.start(self, timeoutTime) == false then
        return
    end

    self.ask_id = os.time()
    local protocol = {
        ask_id = self.ask_id,
        season = season,
    }
    self._isShow = isShow
    local data = self:luaDataToProtobufData(protocol)
    self:sendProtobuf(self:mergeData(data), handler(self, self.onMsgReceive), 0)
end

function CellTeamListRequest:onMsgReceive(msgData)
    local data = self:protobufDataToLuaData(msgData)
    data.isShow = self._isShow
    if data and data.resp and data.resp.err_code == 0 then
        self:success(data)
    else
        self:fail(data)
    end
end

return CellTeamListRequest