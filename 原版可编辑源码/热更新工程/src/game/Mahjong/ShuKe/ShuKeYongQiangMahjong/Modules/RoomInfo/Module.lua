local RoomInfoModule = CF.gameClass("RoomInfoModule", "game.Mahjong.BasicMahjong.Modules.RoomInfo.Module")
local RuleConfig = CF.gameRequire("Config.RuleConfig")


--玩法介绍
function RoomInfoModule:onMsgGameRule(msgData)
    local strGameRule = CF.SysTool.GB_18030_2000_TO_UTF8(msgData.strGameRule)
    if strGameRule == "" or strGameRule == nil then
        strGameRule = msgData.strGameRule
    end
    local ruleTable = CF.StringTool.getLuaValueList(strGameRule)
    local tempStrGameRule  = RuleConfig.getGameRuleStr(strGameRule)
    CF.roomData:setGameRule(tempStrGameRule)
    CF.roomData:setPayType(tonumber(ruleTable["PayType"]))
    CF.roomData:setRoomFee(tonumber(ruleTable["RoomFee"]))
end

return RoomInfoModule