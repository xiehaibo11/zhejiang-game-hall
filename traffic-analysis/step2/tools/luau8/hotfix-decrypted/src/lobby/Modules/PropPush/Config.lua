local PropPushConfig = {}
local Define = require("lobby.Modules.PropPush.Define")
local QingShenDefine = require("lobby.Modules.QingShen.Define")

--[[
浙江包精简版：仅注册请神 PushType。
求财运/拜财神/洗牌/礼包（PropPushGP）未移植，不进入 PUSH_PROP_PURCHASE。
]]

local function propIdListFromDefine(propTable)
    local list = {}
    for _, id in pairs(propTable) do
        list[#list + 1] = id
    end
    return list
end

PropPushConfig.PUSH_PROP_PURCHASE = {
    [Define.PushType.QingShen] = propIdListFromDefine(QingShenDefine.QingShenPropId),
}

return PropPushConfig
w