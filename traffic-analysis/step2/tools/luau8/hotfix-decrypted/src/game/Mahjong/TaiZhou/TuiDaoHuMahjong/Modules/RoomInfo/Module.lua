local RoomInfoModule = CF.gameClass("RoomInfoModule", "game.Mahjong.TaiZhou.BasicTaiZhouMahjong.Modules.RoomInfo.Module")

function RoomInfoModule:onMsgGameRule(msgData)
    local ruleTable = CF.StringTool.getTableByString(msgData.strGameRule,";","=")
    local orderRuleTable = {"playMod", "maiDi", "forceGPS"}
    local gameRuleStrTable = {
        ["playMod"] = {[1] = "点炮胡", [2] = "自摸胡"},
        ["forceGPS"] = {[1] = "强制定位"},
        ["PayType"] = {[0] = "房主付", [1] = "平摊付"},
        ["maiDi"] = {[1] = "不买底", [2] = "买底"},
        ["lianZhuang"] = {[0] = "不连庄", [1] = "连庄"}
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
    if ruleTable["lianZhuang"] then
        local strRuleValue = string.gsub(ruleTable["lianZhuang"], "'", "")
        if strRuleValue == "1" and CF.roomData:getChairs() ~= 2 then
            strGameRule = strGameRule .. "连庄" .. "/"
        else
            strGameRule = strGameRule .. "不连庄" .. "/"
        end
    else
        strGameRule = strGameRule .. "不连庄" .. "/"
    end
    strGameRule = strGameRule .. CF.roomData:getChairs() .. "人"
    if ruleTable["basescore"] then
        local basescore = string.gsub(ruleTable["basescore"], "'", "")
        strGameRule = strGameRule .. "/底分" .. basescore
    end
    if ruleTable["maxQuanShu"] then
        local maxQuanShu = string.gsub(ruleTable["maxQuanShu"], "'", "")
        strGameRule = strGameRule .. "/" .. maxQuanShu .. "圈"
        local gameData = CF.game:getModule("GameLayer"):getGameData()
        gameData:setPlayCircle(true)
    end
    CF.roomData:setGameRule(strGameRule)

    --自动准备
    if ruleTable["autoReady"] and tonumber(string.gsub(ruleTable["autoReady"], "'", "")) == 1 then
        CF.msgManager:sendGameStart()
    end
    return strGameRule
end

return RoomInfoModule�
