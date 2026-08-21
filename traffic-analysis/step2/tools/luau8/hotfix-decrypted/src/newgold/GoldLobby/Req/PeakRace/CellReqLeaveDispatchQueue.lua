local CellReqLeaveDispatchQueue = class("CellReqLeaveDispatchQueue", NG.GoldProtoBufReq)
local GoldPlayerData = require("newgold.GoldCommon.Data.GoldPlayerData")
function CellReqLeaveDispatchQueue:ctor()
    CellReqLeaveDispatchQueue.super.ctor(self)
    self._protobuf = {
        --
        protobufFile = "pyrrla",
        packageName = "Zeus.pyrrla.v1",
        reqName = "LeaveDispatchQueueRequest",
        resqName = "LeaveDispatchQueueReply",
        reqxyid = 3,
        respxyid = 4,
        processid = 1147
    }
end

function CellReqLeaveDispatchQueue:start(data, timeoutTime)
    if CellReqLeaveDispatchQueue.super.start(self, timeoutTime) == false then
        return
    end

    self.ask_id = os.time()
    local protocol = {
        tenant_id = 5,
        area_id = XH.areaData:getAreaID(),
        game_id = data.gameid,
        session_id = data.roomid,
        user_id = XH.playerData:getNumberID(),
    }
    local data = self:luaDataToProtobufData(protocol)
    self:sendProtobuf(self:mergeData(data), handler(self, self.onMsgReceive), 0)
end

function CellReqLeaveDispatchQueue:onMsgReceive(msgData)
    local data = self:protobufDataToLuaData(msgData)
    if data then
        self:success(data)
    else
        self:fail(data)
    end
end

return CellReqLeaveDispatchQueue=