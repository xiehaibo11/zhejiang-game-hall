local RoomInfoModule = CF.gameClass("GameModule", "game.Mahjong.BasicMahjong.Modules.RoomInfo.Module")

function RoomInfoModule:onMsgGameRule(msgData)
    RoomInfoModule.super.onMsgGameRule(self, msgData)
    local msgGameRule = msgData
    local strGameRule = CF.game:getModule("GameLayer"):decodeConfig(msgGameRule.strGameRule)
    CF.roomData:setGameRule(strGameRule)

    local ruleTable = CF.StringTool.getLuaValueList(msgGameRule.strGameRule)
    local autoReady = ruleTable["autoReady"]
    if tonumber(autoReady) and tonumber(autoReady) == 1 then
        CF.game:getModule("CenterBtns"):onStartGameEvent()
    end
end

return RoomInfoModule