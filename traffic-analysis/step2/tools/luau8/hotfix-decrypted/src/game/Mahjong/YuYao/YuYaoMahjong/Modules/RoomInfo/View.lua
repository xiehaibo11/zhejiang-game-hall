local RoomInfoView = CF.gameClass("RoomInfoView", "game.Mahjong.BasicMahjong.Modules.RoomInfo.View")

--更新局数...信息
function RoomInfoView:onPlayCountChanged(event)
    if CF.roomData:isBoxRoom() then
        if event.msg and event.msg.maxPlayCount then
            local maxPlayCount = event.msg.maxPlayCount
            local strFormat = string.format(" %d/%d", event.msg.playCount, event.msg.maxPlayCount)
            if maxPlayCount >= 99 then
                strFormat = string.format("100点")
			    self:setOneInfoNodeValue("playCount", strFormat)
                self:getInfoNodeByName("playCount")._keyText:setString("冲    击")
            else
			    self:setOneInfoNodeValue("playCount", strFormat)
            end
        end
    end
end

return RoomInfoView"