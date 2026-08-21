local ReqLeaveRoomGT = class("ReqLeaveRoomGT", XH.ReqProtocol)

function ReqLeaveRoomGT:ctor()
    ReqLeaveRoomGT.super.ctor(self)
end

function ReqLeaveRoomGT:start(appID,srsGroupID,timeoutTime)
    if ReqLeaveRoomGT.super.start(self, timeoutTime, srsGroupID) == false then
        return
    end
    local reqLeaveRoomGT = XH.GameProtocolGT.ReqLeaveRoom:new()
    self:sendMsg(reqLeaveRoomGT, XH.GameProtocolGT.RespLeaveRoom, srsGroupID,appID)
end

function ReqLeaveRoomGT:onMsgReceive(msgData)
    local type = msgData.type
    if type == XH.GameProtocolGT.RespLeaveRoom.LEAVEROOMTYPE.NORMAL then
        self:success(msgData)
    elseif type == XH.GameProtocolGT.RespLeaveRoom.LEAVEROOMTYPE.KICK then
        self:success(msgData)
    else
        self:setMessage("离开房间失败，请稍后再试(".. type.. ")")
        self:fail(msgData)
    end
end

return ReqLeaveRoomGT�