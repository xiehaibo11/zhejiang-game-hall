local RoomInfoModule = CF.gameClass("RoomInfoModule", "game.Mahjong.BasicMahjong.Modules.RoomInfo.Module")

RoomInfoModule.EVENT_GAME_RULE_CHANGED = "EVENT_GAME_RULE_CHANGED"

function RoomInfoModule:onMsgGameRule(msgData)
    self:dispatchEvent({name = self.EVENT_GAME_RULE_CHANGED, msg = {data = msgData.strGameRule}})
end

return RoomInfoModule