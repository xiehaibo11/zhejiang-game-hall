local RoomInfoModule = CF.gameClass("RoomInfoModule", "game.Mahjong.TaiZhou.BasicTaiZhouMahjong.Modules.RoomInfo.Module")

function RoomInfoModule:onMsgGameRule(msgData)
    local ruleTable = CF.StringTool.getTableByString(msgData.strGameRule,";","=")
    local orderRuleTable = {"hasJoker", "huType", "forceGPS", "maiMaCount", "sanTanChengBao"}
    local gameRuleStrTable = {
        ["hasJoker"] = {[0] = "无财神"},
        ["huType"] = {[1] = "有财神/随意胡", [2] = "有财神/自摸胡"},
        ["forceGPS"] = {[1] = "强制定位"},
        ["PayType"] = {[0] = "房主付", [1] = "平摊付"},
        ["maiMaCount"] = {[0] = "不买马", [1] = "买一马", [2] = "买二马"},
        ["sanTanChengBao"] = {[1] = "三摊承包"},
    }
    local strGameRule = ""
    for _, var in ipairs(orderRuleTable) do
        if ruleTable[var] then
            local strRuleValue = string.gsub(ruleTable[var], "'", "")
            local value = tonumber(strRuleValue)
            if gameRuleStrTable[var][value] then
                strGameRule = strGameRule .. gameRuleStrTable[var][value]
                strGameRule = strGameRule .. "/"
            end
        end
    end
    if not CF.teaHouseManager:isInTeaHouse() then
        if ruleTable["PayType"] then
            local strRuleValue = string.gsub(ruleTable["PayType"], "'", "")
            local payType = tonumber(strRuleValue)
            if gameRuleStrTable["PayType"] and gameRuleStrTable["PayType"][payType] then
                strGameRule = strGameRule .. gameRuleStrTable["PayType"][payType] .. "/"
            end
        end
    end
    strGameRule = strGameRule .. CF.roomData:getChairs() .. "人"
    if ruleTable["basescore"] then
        local basescore = string.gsub(ruleTable["basescore"], "'", "")
        strGameRule = strGameRule .. "/底分" .. basescore
    end
    if ruleTable["playCount"] then
        local playCount = string.gsub(ruleTable["playCount"], "'", "")
        strGameRule = strGameRule .. "/" .. playCount .. "局"
    end
    CF.roomData:setGameRule(strGameRule)

    --自动准备
    if ruleTable["autoReady"] and tonumber(string.gsub(ruleTable["autoReady"], "'", "")) == 1 then
        CF.msgManager:sendGameStart()
    end
    return strGameRule
end

return RoomInfoModule