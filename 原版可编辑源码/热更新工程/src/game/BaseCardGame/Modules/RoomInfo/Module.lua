
local RoomInfoModule = CF.gameClass("RoomInfoModule", "game.GameBase.Modules.RoomInfo.Module")

function RoomInfoModule:onMsgGameRule(msgData)    
    local strGameRule = RoomInfoModule.super.onMsgGameRule(self, msgData)
    local lmtMarker = string.find(strGameRule,"禁用记牌器")
    lmtMarker = lmtMarker or false
    CF.game:getModule("Marker"):setLmtMarker(lmtMarker)
    return strGameRule
end

return RoomInfoModule