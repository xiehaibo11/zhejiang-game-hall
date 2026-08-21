local NewTypeActRuleView = class("NewTypeActRuleView", XH.ViewBase)
local GameNewTypeConfiger = require("app.Config.Parse.GameNewTypeConfiger")

function NewTypeActRuleView:getCSBPath()
    return "cocosStudio/hall/CSB/Activity/NewPlayType/NewPlayTypeActRule.csb"
end

local KW_RULE_TYPE = {
    [1] = "ToC",
    [2] = "ToB",
    [3] = "ToBNew"
}

function NewTypeActRuleView:ctor(param)
    NewTypeActRuleView.super.ctor(self, param)

    self._index = param
    self:initUI()
end

function NewTypeActRuleView:getBindingInfo()
    return {
        ["_KW_BTN_CLOSE"] = { varName = "_btnClose", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventClose" },
        ["_KW_TXT_RULE"] = { varName = "_txtRule" },
    }
end

function NewTypeActRuleView:initUI()
    if not self._index or not KW_RULE_TYPE[self._index] then
        return
    end
    local ruleTable
    if KW_RULE_TYPE[self._index] == "ToC" then
        ruleTable = GameNewTypeConfiger:getToCActRuleByLobbyID(XH.areaData:getLobbyID())
    elseif KW_RULE_TYPE[self._index] == "ToB" then
        ruleTable = GameNewTypeConfiger:getToBActRuleByLobbyID(XH.areaData:getLobbyID())
    else
        ruleTable = GameNewTypeConfiger:getToBActRuleNewByLobbyID(XH.areaData:getLobbyID())
    end
    if not ruleTable then
        return
    end
    local str = ""
    for i = 1, #ruleTable do
        str = str .. ruleTable[i]
        if i ~= #ruleTable then
            str = str .. "\n"
        end
    end
    self._txtRule:setString(str)
end

function NewTypeActRuleView:onTouchEventClose(send, eventType)
    self:close()
end

return NewTypeActRuleView