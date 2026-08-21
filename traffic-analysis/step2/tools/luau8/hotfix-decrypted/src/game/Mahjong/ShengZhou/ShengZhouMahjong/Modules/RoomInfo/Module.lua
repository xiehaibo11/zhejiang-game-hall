local RoomInfoModule = CF.gameClass("RoomInfoModule", "game.Mahjong.BasicMahjong.Modules.RoomInfo.Module")

-- 规则信息
function RoomInfoModule:onMsgGameRule(msgData)
    RoomInfoModule.super.onMsgGameRule(self,msgData)
    local msgGameRule = msgData
    local strGameRule = CF.game:getModule("GameLayer"):decodeConfig(msgGameRule.strGameRule)
    CF.roomData:setGameRule(strGameRule)
end

return RoomInfoModule�