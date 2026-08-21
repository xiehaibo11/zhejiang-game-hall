local LuckyTaskLogView = class("LuckyTaskLogView", XH.ViewBase)

function LuckyTaskLogView:ctor()
    LuckyTaskLogView.super.ctor(self)
    XH.lobby:getModule("LuckyTask"):reqGetDrawLogs()
end

function LuckyTaskLogView:getProxyEvents()
    return {{module = XH.lobby:getModule("LuckyTask"), eventKeyName = "EVENT_NotifyLuckyTaskAwardRecord", callBack = "flushLogs"}}
end

function LuckyTaskLogView:getCSBPath()
    return "cocosStudio/hall/CSB/Activity/LuckyTask/LuckyTaskAwardLayer.csb"
end

function LuckyTaskLogView:getBindingInfo()
    return {
        --
        ["_KW_UI_AWARD_ITEM"] = {varName = "KW_UI_AWARD_ITEM"},
        ["_KW_UI_TASK_NAME"] = {varName = "KW_UI_TASK_NAME"},
        ["_KW_UI_AWARD_TIME"] = {varName = "KW_UI_AWARD_TIME"},
        ["_KW_UI_AWARD_CONTENT"] = {varName = "KW_UI_AWARD_CONTENT"},
        ["_KW_UI_AWARD_FLAG"] = {varName = "KW_UI_AWARD_FLAG"},
        ["_KW_UI_AWARD_LIST"] = {varName = "KW_UI_AWARD_LIST"},
        ["_KW_UI_BTN_CLOSE"] = {varName = "KW_UI_BTN_CLOSE", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onClickClose"},
        ["_KW_PANEL_BG3"] = {varName = "KW_PANEL_BG"}
    }
end

function LuckyTaskLogView:initUI()

end

function LuckyTaskLogView:flushLogs(event)
    if event.data == nil then
        return
    end
    self.recordInfo = event.data
    self.KW_UI_AWARD_LIST:removeAllChildren()
    local num = #self.recordInfo
    for i = 1, num do
        local info = self.recordInfo[i]
        local node = self.KW_UI_AWARD_ITEM:clone()
        node:getChildByName("_KW_UI_TASK_NAME"):setString(XH.StringTool.getTrimName(info.activityName, 12))
        node:getChildByName("_KW_UI_AWARD_TIME"):setString(os.date("%Y-%m-%d %H:%M:%S", info.drawTime))
        node:getChildByName("_KW_UI_AWARD_CONTENT"):setString(self:getAwardString(info))
        node:setVisible(true)
        self.KW_UI_AWARD_LIST:addChild(node)
    end
    self.KW_UI_AWARD_LIST:setInnerContainerSize(cc.size(self.KW_UI_AWARD_ITEM:getContentSize().width, self.KW_UI_AWARD_ITEM:getContentSize().height * num))
end

function LuckyTaskLogView:getAwardString(info)
    local str = ""
    for i = 1, #info.rewards do
        local award = info.rewards[i]
        local count = award.count
        if award.id == XH.areaData:getPropSmallRoomCardID() or award.id == XH.areaData:getPropBindRoomCardID() then
            if XH.areaData:getPropSmallRoomCardRatio() then
                count = count / XH.areaData:getPropSmallRoomCardRatio()
            end
        end
        str = str .. award.name .. "x" .. count .. "  "
    end
    return str
end

function LuckyTaskLogView:onClickClose()
    self:close()
end

return LuckyTaskLogView
