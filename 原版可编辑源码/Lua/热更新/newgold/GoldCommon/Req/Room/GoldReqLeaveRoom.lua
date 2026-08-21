local GoldReqLeaveRoom = class("GoldReqLeaveRoom", NG.GoldProtoBufReq)
local GoldAreaConfig = require("newgold.GoldCommon.Config.GoldAreaConfig")

function GoldReqLeaveRoom:ctor()
    GoldReqLeaveRoom.super.ctor(self)
    self._protobuf = {
        --
        protobufFile = "game_cli",
        packageName = "game_cli",
        reqName = "ReqLeaveRoom",
        resqName = "RespLeaveRoom",
        reqxyid = 11073,
        respxyid = 11074,
        processid = 140
    }
end

function GoldReqLeaveRoom:start(appid, rejoinAppid, timeoutTime)
    if GoldReqLeaveRoom.super.start(self, timeoutTime) == false then
        return
    end

    local _reqProtobuf = {}
    self._cAppId = rejoinAppid
    local data = self:luaDataToProtobufData(_reqProtobuf)
    self:sendProtobuf(self:mergeData(data), handler(self, self.onMsgReceive), appid, GoldAreaConfig.GroupID)
end

function GoldReqLeaveRoom:onMsgReceive(msgData)
    local data = self:protobufDataToLuaData(msgData)
    data.cAppId = self._cAppId
    self:success(data)
end

return GoldReqLeaveRoom
