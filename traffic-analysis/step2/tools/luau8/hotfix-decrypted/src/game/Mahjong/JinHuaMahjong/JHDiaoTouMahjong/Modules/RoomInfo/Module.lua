local RoomInfoModule = CF.gameClass("RoomInfoModule", "game.Mahjong.JinHuaMahjong.JHBaseMahjong.Modules.RoomInfo.Module")

function RoomInfoModule:onMsgGameRule(msgData)
    local strGameRule = RoomInfoModule.super.onMsgGameRule(self, msgData)
    local ruleTable = string.split(strGameRule, "/")
    if ruleTable[1] and string.find(ruleTable[1], "吊头麻将") then
        ruleTable[1] = "永康麻将"
    end
    strGameRule = ""
    for i = 1, #ruleTable do
        strGameRule = strGameRule .. ruleTable[i]
        if i < #ruleTable then
            strGameRule = strGameRule .. "/"
        end
    end
    CF.roomData:setGameRule(strGameRule)
    return strGameRule
end

return RoomInfoModule�