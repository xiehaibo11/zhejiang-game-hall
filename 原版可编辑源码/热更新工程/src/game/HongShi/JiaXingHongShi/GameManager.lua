local GameManager = CF.gameClass("JiaXingHongShiManager", "game.HongShi.BaseHongShi.GameManager")

--比赛场圈主强制解散
function GameManager:onRespLeaveRoom(event)
    GameManager.super.onRespLeaveRoom(self,event)
    local respLeaveRoom = CF.GameMProtocol.RespLeaveRoom:new()
    respLeaveRoom:bistream(event.msg.buff, event.msg.len)
    if CF.roomData:getPlayCount() == 0 
        and CF.roomData:getRoomMode() == CF.ROOM_MODE.BOXROOM 
        and respLeaveRoom.type == CF.GameMProtocol.RespLeaveRoom.LEAVEROOMTYPE.NORMAL then
        self:leaveGame()
    end
end

return GameManager