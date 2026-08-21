local PromoteIntroduceNewView = class("PromoteIntroduceNewView", XH.ViewBase)
local PromoteDefine = require("lobby.Modules.Promote.Define")
local FguiControllerHelper = require("app.Tool.FguiControllerHelper")

function PromoteIntroduceNewView:ctor(type, taskType)
    PromoteIntroduceNewView.super.ctor(self)
    self._type = type or 0
    self._taskType = taskType or PromoteDefine.TASK_TYPE.USER

    self._ctrlHelper = FguiControllerHelper.new(self)
    self:initUI()
end

function PromoteIntroduceNewView:getCSBPath()
    return "cocosStudio/hall/CSB/PromoteTeaNewUI/PromoteIntroduceUI.csb"
end

function PromoteIntroduceNewView:getBindingRegex()
    return "//.+"
end

function PromoteIntroduceNewView:getBindingInfo()
    return {
        ["KW_UI_BTN_CLOSE"] = {varName = "KW_UI_BTN_CLOSE", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onClickClose"},
        ["LABEL_CONTENT"] = {varName = "LABEL_CONTENT"},
    }
end

function PromoteIntroduceNewView:initUI()
    self._ctrlHelper:setPage("typeCtrl", tostring(self._type))

    local module = XH.lobby:getModule("Promote2")
    local config = module:getGlobalConfig()
    local baseInfo = module:getBaseInfo()
    if not config or not baseInfo then
        return
    end

    local actTime = module:getActTime()
    local startStr = os.date("%m.%d", actTime.start or 0)
    local endStr = os.date("%m.%d", actTime["end"] or 0)
    local timeStr = startStr .. "-" .. endStr

    local content = ""
    if self._type == 0 then
        content = config.gameIntroduction or ""
    else
        if self._taskType == PromoteDefine.TASK_TYPE.USER then
            content = config.user_actIntroduction or ""
        else
            content = config.owner_actIntroduction or ""
        end
        content = string.gsub(content, "timeReplace", timeStr)
    end

    self.LABEL_CONTENT:setString(content)
    -- 设置行距（数值越大行距越大，可按需调整）
    if self.LABEL_CONTENT.getVirtualRenderer then
        local renderer = self.LABEL_CONTENT:getVirtualRenderer()
        if renderer and renderer.setLineSpacing then
            renderer:setLineSpacing(5)
        end
    end
end

function PromoteIntroduceNewView:onClickClose()
    self:close()
end

return PromoteIntroduceNewView
