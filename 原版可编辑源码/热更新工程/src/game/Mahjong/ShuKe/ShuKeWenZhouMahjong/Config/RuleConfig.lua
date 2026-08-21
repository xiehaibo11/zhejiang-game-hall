local RuleConfig = class("RuleConfig")

RuleConfig.KW_RULE_NAME = {
    ["HaveMDDi"] = {
        ["0"] = "",
        ["1"] = "买顶加倍",
    },
    ["HaveGangSuanFen"] = {
        ["0"] = "",
        ["1"] = "杠算分",
    },
    ["HaveGangShangHua"] = {
        ["0"] = "",
        ["1"] = "杠上开花",
    },
    ["NotHaveZhongFa"] = {
        ["0"] = "",
        ["1"] = "无中发",
    },
    ["HaveThreeBack"] = {
        ["0"] = "",
        ["1"] = "三背",
    },
    ["BanQing"] = {
        ["0"] = "",
        ["1"] = "半清",
    },
    ["QingYiSe"] = {
        ["0"] = "",
        ["1"] = "清一色",
    },
    ["HaveFollowMah"] = {
        ["0"] = "",
        ["1"] = "跟风计算",
    },
    ["DelColor"] = {
        ["0"] = "",
        ["1"] = "缺一色",
        ["2"] = "缺二色",
    },
    ["RandBanker"] = {
        ["0"] = "",
        ["1"] = "随机庄(首局随机)",
    },
    ["GuoHuBuHu"] = {
        ["0"] = "",
        ["1"] = "过胡不胡",
    },
    ["XianChiZhangDa"] = {
        ["0"] = "",
        ["1"] = "限吃张打张",
    },
    ["WuFengPai"] = {
        ["0"] = "",
        ["1"] = "无风牌",
    },
    ["SiLianBaoTing"] = {
        ["0"] = "",
        ["1"] = "庄家四连报听",
    },
    ["FengDing"] = {
        ["0"] = "不封顶",
        ["12"] = "12封顶",
        ["16"] = "16封顶",
        ["20"] = "20封顶",
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

function RuleConfig.getGameQuickRuleChange(strGameRule)
    if strGameRule ~= "" and  CF.StringTool.getLuaValueList then
        local ruleTable =CF.StringTool.getLuaValueList(strGameRule)
        local addRuleString = ""
        local deleteRuleString = ""
        for key,v in pairs(RuleConfig.KW_RULE_NAME) do
            if ruleTable and ruleTable[key] then
                local matchPair = v["1"]
                if ruleTable[key] == "0" then
                    deleteRuleString = deleteRuleString .. matchPair ..";"
                elseif ruleTable[key] == "1" then
                    addRuleString = addRuleString .. matchPair ..";"
                end
            end
        end
        if addRuleString ~= "" then
            addRuleString = "增加规则："..addRuleString
        end
        if deleteRuleString ~= "" then
            deleteRuleString = "取消规则："..deleteRuleString
        end
        return addRuleString .. deleteRuleString
    end
    return ""
end

return RuleConfig