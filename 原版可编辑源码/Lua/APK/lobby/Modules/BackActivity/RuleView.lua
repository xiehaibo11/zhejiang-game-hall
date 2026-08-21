local RuleView = class("RuleView", XH.ViewBase)

function RuleView:getCSBPath()
    return "cocosStudio/hall/CSB/Activity/BackActivity/BackActivityRule.csb"
end

function RuleView:getBindingInfo()
    return {
        ["_KW_TEXT_RULE"] = { varName = "_ruleText" },
        ["_KW_BTN_CLOSE"] = { varName = "KW_BTN_CLOSE", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventClose" },
        -- ["_KW_ROOT_LAYER"] = { varName = "KW_ROOT_LAYER", type = XH.UI_TYPE.LAYOUT,onTouchEnded = "onTouchEventClose" },
    }
end

function RuleView:ctor(param)
    self._canTouchBackGround = false
    param = param or { }
    RuleView.super.ctor(self, param)
    self:init(param.data, param.award)
end

------------------------------------------------- init ---------------------------------------------
function RuleView:init()
    local actInfo = XH.lobby:getModule("BackActivity"):getActInfo()
    local awardInfo = XH.lobby:getModule("BackActivity"):getActAwardInfo()

    local text = "1、玩家任意完成两个任务即可领取奖励。\n" ..
                 "2、约局游戏奖励房卡x" .. awardInfo.boxAward.play["0"].cnt .. "。\n" ..
                 "3、金币游戏奖励金币x" .. awardInfo.goldAward.play["0"].cnt .. "。\n" ..
                 "4、活动倒计时结束后，还可在回归限时礼剩余的时间内领取奖励。\n" ..
                 "5、有问题请联系客服微信：" .. actInfo.kefu .. "。\n" ..
                 "6、最终解释权归浙江游戏大厅所有。\n"         
    self._ruleText:setText(text)
end

function RuleView:onTouchEventClose(send, eventType)
    self:close()
end

return RuleView