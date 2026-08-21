local ActBaoJiRankRuleView = class("ActBaoJiRankRuleView", XH.Bridge.ViewBase)
local LocalConfig = import("...Configs.LocalConfig")

function ActBaoJiRankRuleView:ctor(param)
    self._module = XH.Bridge:getModule(LocalConfig.MP.ActBJRank)
    ActBaoJiRankRuleView.super.ctor(self, param)
end

function ActBaoJiRankRuleView:getCSBPath()
    return XH.Bridge:getCCSResPath("Act/BaoJiRankRule.csb")
end

function ActBaoJiRankRuleView:getBindingInfo()
    local info = {["_btnClose"] = {varName = "_btnClose", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventClose"}}
    local names = {"_txtDate", "_list"}
    for i, v in ipairs(names) do
        info[v] = {varName = v}
    end
    return info
end

function ActBaoJiRankRuleView:getProxyEvents()
    return {}
end

function ActBaoJiRankRuleView:onEnter()
    self._list:setScrollBarEnabled(false)
    local actInfo = self._module:getActInfo()
    self._txtDate:setString(string.format("活动开启时间为%s-%s。每周为一个周赛季，共计%d周。",
                                          os.date("%m月%d日", actInfo.listInfo.start), os.date("%m月%d日", actInfo.listInfo["end"]), actInfo.weekNum))
end

function ActBaoJiRankRuleView:onTouchEventClose(send, event)
    self:close()
end

return ActBaoJiRankRuleView
*