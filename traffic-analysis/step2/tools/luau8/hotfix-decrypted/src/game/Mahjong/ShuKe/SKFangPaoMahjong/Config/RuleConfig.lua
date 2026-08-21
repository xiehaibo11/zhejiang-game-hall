local RuleConfig = class("RuleConfig")

RuleConfig.KW_RULE_NAME = {
    ["HuType"] = {
        ["0"] = "点炮胡",
        ["1"] = "自摸胡",
    },
    ["XianZhuangSuanFen"] = {
        ["0"] = "",
        ["1"] = "庄闲算分",
    },
    ["HuQiDui"] = {
        ["0"] = "",
        ["1"] = "可胡七对",
    },
    ["IsHaveJoker"] = {
        ["0"] = "",
        ["1"] = "红中赖子",
    },
    ["DelColor"] = {
        ["0"] = "",
        ["1"] = "缺一色",
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

return RuleConfig@