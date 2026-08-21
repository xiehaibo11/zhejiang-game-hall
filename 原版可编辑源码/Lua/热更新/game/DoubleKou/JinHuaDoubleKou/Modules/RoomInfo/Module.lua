local RoomInfoModule = CF.gameClass("RoomInfoModule", "game.DoubleKou.BaseDoubleKou.Modules.RoomInfo.Module")

--玩法介绍
function RoomInfoModule:onMsgGameRule(msgData)
    local gameRuleText = {
        gametype = {[1] = "癞子:大王", [3] = "癞子:大小王", [9] = "癞子:无"},
        gamezhang = {[1] = "1张分", [3] = "3张分", [6] = "6张分", [9] = "9张分"},
        deposit = {[1] = "超时托管"},
        LmtMarker = {[0] = "可用记牌器", [1] = "禁用记牌器"}
    }
    local serverGameRule = CF.SysTool.GB_18030_2000_TO_UTF8(msgData.strGameRule)
    local tableString = string.gsub(serverGameRule, ";", ",")
    local luaString = "return {" .. tableString .. "}"
    local rule = loadstring(luaString)
    local gameRuleTable
    if luaString then
        gameRuleTable = rule()

        local strGameRule = ""
        if gameRuleTable.gametype then
            strGameRule = gameRuleText.gametype[tonumber(gameRuleTable.gametype)]
        end

        if gameRuleTable.gamezhang then
            strGameRule = strGameRule .. "/" .. gameRuleText.gamezhang[tonumber(gameRuleTable.gamezhang)]
        end

        if gameRuleTable.deposit and tonumber(gameRuleTable.deposit) == 1 then
            strGameRule = strGameRule .. "/" .. gameRuleText.deposit[tonumber(gameRuleTable.deposit)]
            self._isChaoshiTuoguan = true
        else
            self._isChaoshiTuoguan = false
        end

        if gameRuleTable.LmtMarker and gameRuleTable.LmtMarker ~= "" then
            strGameRule = strGameRule .. "/" .. gameRuleText.LmtMarker[tonumber(gameRuleTable.LmtMarker)]
            CF.game:getModule("Marker"):setLmtMarker(tonumber(gameRuleTable.LmtMarker) == 1)
        end

        CF.roomData:setGameRule(strGameRule)
    else
        CF.roomData:setGameRule(serverGameRule)
    end
end

return RoomInfoModule
