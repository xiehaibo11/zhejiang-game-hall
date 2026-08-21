local RoomInfoModule = CF.gameClass("RoomInfoModule", "game.Mahjong.BasicMahjong.Modules.RoomInfo.Module")

--玩法介绍
function RoomInfoModule:onMsgGameRule(msgData)
	RoomInfoModule.super.onMsgGameRule(self, msgData)
    local strGameRule = CF.roomData:getGameRule()
	local gameData = CF.game:getModule("GameLayer"):getGameData()
    local reduceMahWallCount = 0
    if string.find(strGameRule, "虫草花") or string.find(strGameRule, "上下花") then
        reduceMahWallCount = reduceMahWallCount - 8
    end
    CF.roomData:setGameRule(strGameRule)
end

return RoomInfoModule