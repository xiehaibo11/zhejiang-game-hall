local RoomInfoModule = CF.gameClass("RoomInfoModule", "game.Mahjong.JinHuaMahjong.JHBaseMahjong.Modules.RoomInfo.Module")

function RoomInfoModule:onMsgPlayCount(msgData)
    RoomInfoModule.super.onMsgPlayCount(self, msgData)
    local startdifen = msgData.startdifen or 0
    CF.roomData:setStartDifenNum(startdifen)
    self:dispatchEvent({ name = self.EVENT_UPDATE_ROOM_INFO_EX })
end

return RoomInfoModule
