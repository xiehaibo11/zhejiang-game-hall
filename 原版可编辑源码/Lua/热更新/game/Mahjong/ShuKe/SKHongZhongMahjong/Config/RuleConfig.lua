local RuleConfig = class("RuleConfig")

RuleConfig.KW_RULE_NAME = {
    ["ZhaMaNum"] = {
        ["2"] = "2码",
        ["4"] = "4码",
        ["6"] = "6码",
        ["1"] = "一码全中",
        ["0"] = "不扎码",
    },
    ["HuQiDui"] = {
        ["0"] = "",
        ["1"] = "可胡七对",
    }
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

return RuleConfig