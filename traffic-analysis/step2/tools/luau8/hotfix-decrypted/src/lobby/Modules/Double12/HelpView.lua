--转盘活动界面
local ActHelpView = class("ActHelpView", XH.ViewBase)

local KW_ACT_RULE_ID = 20210301

function ActHelpView:getCSBPath()
    return "cocosStudio/hall/CSB/Activity/Double12_2025/Double12HelpLayer.csb"
end

function ActHelpView:getBindingInfo()
    return {
        ["_KWA_BTND_CLOSE"] = { varName = "_btnClose", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventClose" },
        ["_KWA_BTND_OK"] = { varName = "_btnOK", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventClose" },
        ["_KW_PANEL_GAME_RULE"] = {varName="_panelGameRule"},
        ["_KW_PANEL_LOADING"] = {varName="_panelLoading"},
        ["_KW_CONTENT"] = {varName="_txtContent"},
    }
end

function ActHelpView:ctor(param)
    param = param or {}
	ActHelpView.super.ctor(self, param)
    self:initView()
end

function ActHelpView:initView()
    local cfg = XH.lobby:getModule("Configuration"):getLobbyConfig("Double12") or {}
    self._txtContent:setString(cfg.notice or [[活动时间：2025.12.12 00:00 - 2025.12.19 23:59
奖池限量，抽完即止，先到先得。
中奖概率：锦鲤卡 2%，会员 3%，洗牌券 5%，房卡 45%，金币 45%。
奖品实时自动到账，可在「领奖中心」查看；如有疑问，请联系官方客服。
本活动由平台独立策划与执行，与其他公司无关。]])
end

function ActHelpView:onTouchEventClose(send, eventType)
    self:close()
end



return ActHelpView�