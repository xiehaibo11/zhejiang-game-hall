local RuleConfig = class("RuleConfig")

RuleConfig.KW_RULE_NAME = {
    ["gametype"] = {
        ["1"] = "百变",
        ["3"] = "千变",
        ["10"] = "全炸",
    },
    ["gamezhang"] = {
        ["3"] = "3张分",
        ["4"] = "4张分",
        ["6"] = "6张分",
        ["9"] = "9张分",
    },
    ["HaveMingPai"] = {
        ["0"] = "不明",
        ["1"] = "双明",
    },
    ["ChaoDi"] = {
        ["0"] = "不抄底",
        ["1"] = "抄底",
    },
    ["HaveZanDan"] = {
        ["1"] = "炸弹未打有贡献",
    },
    ["HaveCaiXiang"] = {
        ["1"] = "拆线补分",
    },
    ["HaveOpenCard"] = {
        ["0"] = "固定座位",
        ["1"] = "亮牌换位",
        ["2"] = "双扣换位",
    },
}

function RuleConfig.getGameRuleStr(strGameRule)
    if strGameRule ~= "" and  CF.StringTool.getLuaValueList then
        local ruleTable =CF.StringTool.getLuaValueList(strGameRule)
        local tempStr = ""
        local idx = 0
        if RuleConfig.KW_RULE_NAME ~= nil then
            for key,v in pairs(RuleConfig.KW_RULE_NAME) do
                if ruleTable and ruleTable[key] then
                    local matchPair = v
                    if matchPair[ruleTable[key]] and matchPair[ruleTable[key]] ~= ""then
                        tempStr = tempStr .. matchPair[ruleTable[key]] .."/"
                        idx = idx +1
                    end
                end
            end
        end
        tempStr = string.sub(tempStr,1,-2)
        return tempStr
    end
    return ""
end

return RuleConfigM