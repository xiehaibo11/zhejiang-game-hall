local GoldReqJoinRoom = class("GoldReqJoinRoom", NG.GoldProtoBufReq)
local GoldPlayerData = require("newgold.GoldCommon.Data.GoldPlayerData")
function GoldReqJoinRoom:ctor()
    GoldReqJoinRoom.super.ctor(self)
    self._protobuf = {
        --
        protobufFile = "roommatch_cli",
        packageName = "Zeus.pyrrla.v1",
        reqName = "JoinDispatchQueueRequest",
        resqName = "JoinDispatchQueueReply",
        reqxyid = 1,
        respxyid = 2,
        processid = 1147
    }
end

function GoldReqJoinRoom:start( gameid, session_id, appid, timeoutTime)
    if GoldReqJoinRoom.super.start(self, timeoutTime) == false then
        return
    end

    local protocol = {}
    protocol.tenant_id = 7-- 租户id
    protocol.area_id = 5162;
    protocol.game_id = gameid or 20801;
    protocol.session_id = session_id or 1;
    protocol.user_id = GoldPlayerData.NumId;
    protocol.robot = false;
    protocol.room_id = 0; 
    protocol.chair_cnt = 4;

    dump(protocol)
    self._appid = appid
    local data = self:luaDataToProtobufData(protocol)
    self:sendProtobuf(self:mergeData(data), handler(self, self.onMsgReceive), appid)
end

function GoldReqJoinRoom:onMsgReceive(msgData)
    local data = self:protobufDataToLuaData(msgData)
    dump(data)
    if data.appid == 0 then
        data.appid = self._appid
    end
    -- 找下appid和roomid是否匹配，不匹配appid为基准
    -- local roomid = NG.RoomTool.getRoomIdByAppId(data.appid)
    -- if roomid ~= nil and roomid ~= data.room_id then
    --     data.room_id = roomid
    -- end
    -- data.needJoinAppid = self._appid
    self:success(data)
end

return GoldReqJoinRoom
�