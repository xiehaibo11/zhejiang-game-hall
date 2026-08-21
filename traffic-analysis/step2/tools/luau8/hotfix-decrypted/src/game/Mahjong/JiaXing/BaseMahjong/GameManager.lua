local GameManager = CF.gameClass("GameManager", "game.Mahjong.BasicMahjong.GameManager")

function GameManager:onAmapGetLocationCallBack(event)
    local gpsInfo = GameManager.super.onAmapGetLocationCallBack(self, event)
    if gpsInfo then
        CF.msgManager:sendGPSMsg(gpsInfo)
    end
end

--游戏未开始的时候房主主动解散 或者 被踢
function GameManager:onRespLeaveRoom(event)
    GameManager.super.onRespLeaveRoom(self, event)
    local respLeaveRoom = CF.GameMProtocol.RespLeaveRoom:new()
    respLeaveRoom:bistream(event.msg.buff, event.msg.len)
   --当前游戏局数，如果已经开始游戏，不做领队强制站起提示
   if CF.roomData:getPlayCount() == 0 then
       if not CF.teaHouseManager:isInTeaHouse() then
           if respLeaveRoom.type == CF.GameMProtocol.RespLeaveRoom.LEAVEROOMTYPE.KICK then
               local tipLayer = CF.TipTool.showPopLayer('TipLayer')
               tipLayer:setText('房主不想与您同桌游戏')
               tipLayer:setButtonMoreEvent(
                   tipLayer.ENUM_BUTTON_TYPE.OK,
                   function()
                       self:leaveGame()
                   end
               )
               tipLayer:setButtonMoreEvent(tipLayer.ENUM_BUTTON_TYPE.CLOSE, function() 
                self:leaveGame()
               end)
            else
                self:leaveGame()    
            end
       end
   end
end

return GameManager�