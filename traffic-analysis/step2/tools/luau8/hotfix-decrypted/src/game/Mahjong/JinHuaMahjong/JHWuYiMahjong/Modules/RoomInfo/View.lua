local RoomInfoView = CF.gameClass("RoomInfoView", "game.Mahjong.BasicMahjong.Modules.RoomInfo.View")

--更新局数...信息
function RoomInfoView:onPlayCountChanged(event)
    if CF.roomData:isBoxRoom() then
        if event.msg and event.msg.maxPlayCount then
            local maxPlayCount = event.msg.maxPlayCount
            if maxPlayCount > 900 then
			    self:setOneInfoNodeValue("playCount", event.msg.playCount)
            else
			    self:setOneInfoNodeValue("playCount", event.msg.playCount .. "/" .. event.msg.maxPlayCount)
            end
        end
    end
end

return RoomInfoViewh