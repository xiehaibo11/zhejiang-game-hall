local RoomInfoModule = CF.gameClass("RoomInfoModule", "game.Mahjong.BasicMahjong.Modules.RoomInfo.Module")

-- 规则信息
function RoomInfoModule:analyseGameRuleStr(strGameRule)
    local gameRuleStr = RoomInfoModule.super.analyseGameRuleStr(self, strGameRule)
    gameRuleStr = string.gsub(gameRuleStr, "AA支付", "平摊支付")
    if CF.teaHouseManager and CF.teaHouseManager:isInTeaHouse()  then
        gameRuleStr = string.gsub(gameRuleStr, "房主", "圈主")
    end
    return gameRuleStr
end

return RoomInfoModule