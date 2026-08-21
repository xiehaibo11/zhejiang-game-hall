local RoomInfoView = CF.gameClass("RoomInfoModule", "game.Mahjong.BasicMahjong.Modules.RoomInfo.View")

function RoomInfoView:onPlayCountChanged(event)
    if event.msg.maxPlayCount >= 99 then
        self:setOneInfoNodeValue("playCount", event.msg.playCount .. "/--")
    else
        self:setOneInfoNodeValue("playCount", event.msg.playCount .. "/" .. event.msg.maxPlayCount)
    end
end

return RoomInfoView�