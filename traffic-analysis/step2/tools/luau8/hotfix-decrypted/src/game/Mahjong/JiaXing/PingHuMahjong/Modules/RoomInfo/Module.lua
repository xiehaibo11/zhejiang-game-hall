local RoomInfoModule = CF.gameClass("RoomInfoModule", "game.Mahjong.JiaXing.BaseMahjong.Modules.RoomInfo.Module")

function RoomInfoModule:getLimitXYIDs()
    local xyIDs = RoomInfoModule.super.getLimitXYIDs()
    table.insert(xyIDs, 1041)
    return xyIDs
end

function RoomInfoModule:analyseGameRuleStr(strGameRule)
    local ruleTable = CF.StringTool.getTableByString(strGameRule,";","=")
    local winLostLmt = "0"
    if ruleTable["winLostLmt"] then
        winLostLmt = string.gsub(ruleTable["winLostLmt"], "'", "")
    end
    local orderRuleTable = {"yaojiubaida", "shuangSeZi", "openSanTan", "winLostLmt", "nFangKa", "DelColor"}
    local gameRuleStrTable = {
        ["yaojiubaida"] = {[1] = "19百搭"},
        ["shuangSeZi"] = {[1] = "双色字"},
        ["openSanTan"] = {[1] = "包三摊"},
        ["winLostLmt"] = {[0] = "无限制", [1] = "" .. winLostLmt .. "粒"},
        ["nFangKa"] = {[0] = "房主支付", [1] = "平摊支付"},
        ["DelColor"] = {[0] = "不缺色", [1] = "缺一色", [2] = "缺二色"},
    }

    local finalRuleStr = ""
    for _, var in ipairs(orderRuleTable) do
        if ruleTable[var] then
            local strRuleValue = string.gsub(ruleTable[var], "'", "")
            local value = tonumber(strRuleValue)
            if var == "winLostLmt" and value then
                local tmpValue = value > 0 and 1 or 0
                finalRuleStr = finalRuleStr .. gameRuleStrTable[var][tmpValue]
                finalRuleStr = finalRuleStr .. "/"
            else
                if gameRuleStrTable[var][value] then
                    finalRuleStr = finalRuleStr .. gameRuleStrTable[var][value]
                    finalRuleStr = finalRuleStr .. "/"
                end
            end
        end
    end

    finalRuleStr = finalRuleStr .. CF.roomData:getChairs() .. "人"
    if ruleTable["base"] then
        local basescore = string.gsub(ruleTable["base"], "'", "")
        finalRuleStr = finalRuleStr .. "/底分" .. basescore
    end

    --自动准备
    if ruleTable["autoReady"] and tonumber(string.gsub(ruleTable["autoReady"], "'", "")) == 1 then
        CF.msgManager:sendGameStart()
    end
    return finalRuleStr
end

function RoomInfoModule:onMsgGameRule(msgData)
    local strGameRule = self:analyseGameRuleStr(msgData.strGameRule)
    CF.roomData:setGameRule(strGameRule)
    if CF.roomData:getIsOpenHuangFan() then
        CF.game:getModule("GameLayer"):showHuangFanJiaXing()
    end
end

return RoomInfoModule�	