local CellReqJoinDispatchQueue = class("CellReqJoinDispatchQueue", NG.GoldProtoBufReq)
local GoldPlayerData = require("newgold.GoldCommon.Data.GoldPlayerData")
function CellReqJoinDispatchQueue:ctor()
    CellReqJoinDispatchQueue.super.ctor(self)
    self._protobuf = {
        --
        protobufFile = "pyrrla",
        packageName = "Zeus.pyrrla.v1",
        reqName = "JoinDispatchQueueRequest",
        resqName = "JoinDispatchQueueReply",
        reqxyid = 1,
        respxyid = 2,
        processid = 1147
    }
end

function CellReqJoinDispatchQueue:start(data, timeoutTime)
    if CellReqJoinDispatchQueue.super.start(self, timeoutTime) == false then
        return
    end

    self.ask_id = os.time()
    local protocol = {
        tenant_id = 5,
        area_id = XH.areaData:getAreaID(),
        game_id = data.gameid,
        session_id = data.roomid,
        robot = false,
        user_id = XH.playerData:getNumberID(),
        room_id = data.room_id,
        chair_cnt = data.chairCnt,
    }
    local data = self:luaDataToProtobufData(protocol)
    self:sendProtobuf(self:mergeData(data), handler(self, self.onMsgReceive), 0)
end

function CellReqJoinDispatchQueue:onMsgReceive(msgData)
    local data = self:protobufDataToLuaData(msgData)
    if data then
        self:success(data)
    else
        self:fail(data)
    end
end

return CellReqJoinDispatchQueue�