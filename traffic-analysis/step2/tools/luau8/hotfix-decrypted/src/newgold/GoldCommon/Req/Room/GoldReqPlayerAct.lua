local GoldReqPlayerAct = class("GoldReqPlayerAct", NG.GoldProtoBufReq)
local GoldAreaConfig = require("newgold.GoldCommon.Config.GoldAreaConfig")

function GoldReqPlayerAct:ctor()
    GoldReqPlayerAct.super.ctor(self)
    self._protobuf = {
        --
        protobufFile = "game_cli",
        packageName = "game_cli",
        reqName = "ReqPlayerAct",
        resqName = "RespPlayerAct",
        reqxyid = 11016,
        respxyid = 11017,
        processid = 140
    }
end

function GoldReqPlayerAct:start(action, appid, tableid, srsGroupID, timeoutTime)
    if GoldReqPlayerAct.super.start(self, timeoutTime, srsGroupID) == false then
        return
    end

    local _reqProtobuf = {}
    _reqProtobuf.action = action
    _reqProtobuf.table_id = tableid
    _reqProtobuf.sit_order = -1
    srsGroupID = srsGroupID or GoldAreaConfig.GroupID
    local data = self:luaDataToProtobufData(_reqProtobuf)
    self:sendProtobuf(self:mergeData(data), handler(self, self.onMsgReceive), appid, srsGroupID)
end

function GoldReqPlayerAct:onMsgReceive(msgData)
    local data = self:protobufDataToLuaData(msgData)
    self:success(data)
end

return GoldReqPlayerAct
�