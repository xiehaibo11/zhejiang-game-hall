local RoomInfoView = CF.gameClass("RoomInfoView", "game.Mahjong.WenZhou.WenZhouMahjong.Modules.RoomInfo.View")


function RoomInfoView:onPlayCountChanged(event)
    self:setOneInfoNodeValue("playCount", event.msg.playCount .. "/" .. event.msg.maxPlayCount)
    
    if CF.roomData:getGameRoomMode() == CF.roomData.GAME_MODE.GAME_MODE_QUAN or event.msg.maxPlayCount >= 1000 then
        local keyStr = "圈    数"
        self:setOneInfoNodeValue("playCount", event.msg.playCount .. "/" .. event.msg.maxPlayCount/1000)
        self:setOneInfoNodeKeyStr("playCount", keyStr)
    end
    
end







return RoomInfoView}