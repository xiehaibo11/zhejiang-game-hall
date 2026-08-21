local RoomCenterInfoView = CF.gameClass("RoomCenterInfoView", "game.Mahjong.BasicMahjong.Modules.RoomInfo.CenterView")

function RoomCenterInfoView:updateRoomIdImg()
    local playCount = CF.roomData:getPlayCount()
    if CF.roomData:isGoldRoom() then
        self._centerRoomIdImg:setVisible(false)
    else
        self._centerRoomIdImg:setVisible(playCount == 0)
    end
end

return RoomCenterInfoView