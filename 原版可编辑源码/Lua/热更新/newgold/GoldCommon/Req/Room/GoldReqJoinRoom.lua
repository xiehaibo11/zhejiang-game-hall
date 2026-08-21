local GoldReqJoinRoom = class("GoldReqJoinRoom", NG.GoldProtoBufReq)

function GoldReqJoinRoom:ctor()
    GoldReqJoinRoom.super.ctor(self)
    self._protobuf = {
        --
        protobufFile = "game_cli",
        packageName = "game_cli",
        reqName = "ReqJoinRoom",
        resqName = "RespJoinRoom",
        reqxyid = 11007,
        respxyid = 11008,
        processid = 140
    }
end

function GoldReqJoinRoom:start(reconnect, roomid, appid, timeoutTime)
    if GoldReqJoinRoom.super.start(self, timeoutTime) == false then
        return
    end

    local _reqProtobuf = {}
    _reqProtobuf.room_id = roomid
    _reqProtobuf.client_type = 2
    _reqProtobuf.hardware_flag = 264
    _reqProtobuf.ver = 20090420
    _reqProtobuf.data_size = 0
    _reqProtobuf.data = ""
    _reqProtobuf.channel_id = 0
    _reqProtobuf.type = 0
    _reqProtobuf.os_ver = 0
    _reqProtobuf.identify = NG.SysTool:GetDevid()
    _reqProtobuf.reconnect = reconnect
    self._appid = appid
    local data = self:luaDataToProtobufData(_reqProtobuf)
    self:sendProtobuf(self:mergeData(data), handler(self, self.onMsgReceive), appid)
end

function GoldReqJoinRoom:onMsgReceive(msgData)
    local data = self:protobufDataToLuaData(msgData)
    if data.appid == 0 then
        data.appid = self._appid
    end
    -- 找下appid和roomid是否匹配，不匹配appid为基准
    local roomid = NG.RoomTool.getRoomIdByAppId(data.appid)
    if roomid ~= nil and roomid ~= data.room_id then
        data.room_id = roomid
    end
    data.needJoinAppid = self._appid
    self:success(data)
end

return GoldReqJoinRoom
