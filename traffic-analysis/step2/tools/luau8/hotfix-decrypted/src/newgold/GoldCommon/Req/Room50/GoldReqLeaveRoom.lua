local GoldReqLeaveRoom = class("GoldReqLeaveRoom", NG.GoldProtoBufReq)
local GoldPlayerData = require("newgold.GoldCommon.Data.GoldPlayerData")
local GoldAreaConfig = require("newgold.GoldCommon.Config.GoldAreaConfig")

function GoldReqLeaveRoom:ctor()
    GoldReqLeaveRoom.super.ctor(self)
    self._protobuf = {
        --
        protobufFile = "roommatch_cli",
        packageName = "Zeus.pyrrla.v1",
        reqName = "LeaveDispatchQueueRequest",
        resqName = "LeaveDispatchQueueReply",
        reqxyid = 3,
        respxyid = 4,
        processid = 1147
    }
end

function GoldReqLeaveRoom:start(appid, rejoinAppid, timeoutTime)
    if GoldReqLeaveRoom.super.start(self, timeoutTime) == false then
        return
    end

    local _reqProtobuf = {}
    _reqProtobuf.tenant_id = 7  --租户ID
    _reqProtobuf.area_id = 5162      -- 地区id
    _reqProtobuf.game_id = 20801      -- 游戏id
    _reqProtobuf.session_id = 3      -- 场次id
    _reqProtobuf.user_id = GoldPlayerData.NumId      -- 玩家id
      self._cAppId = rejoinAppid
    local data = self:luaDataToProtobufData(_reqProtobuf)
    dump(_reqProtobuf)
    self:sendProtobuf(self:mergeData(data), handler(self, self.onMsgReceive), appid, GoldAreaConfig.GroupID)
end

function GoldReqLeaveRoom:onMsgReceive(msgData)
    local data = self:protobufDataToLuaData(msgData)
    dump(data)
    data.cAppId = self._cAppId
    self:success(data)
end

return GoldReqLeaveRoom
�