local RoomInfoModule = CF.gameClass("RoomInfoModule", "game.DoubleKou.BaseDoubleKou.Modules.RoomInfo.Module")

--玩法介绍
function RoomInfoModule:onMsgGameRule(msgData)    
    CF.roomData:setGameRule(msgData.strGameRule)
    local lmtMarker = string.find(msgData.strGameRule,"禁用记牌器")
    lmtMarker = lmtMarker or false
    CF.game:getModule("Marker"):setLmtMarker(lmtMarker)
end

return RoomInfoModule