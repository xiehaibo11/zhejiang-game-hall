local NewPlayTypeAwardHistory = class("NewPlayTypeAwardHistory", XH.ViewBase)

local KW_AWARD_NAME = {
    [1] = "活动1-对局奖励",
    [2] = "活动2-对局奖励",
    [3] = "创建固定玩法奖励"
}

function NewPlayTypeAwardHistory:getCSBPath()
    return "cocosStudio/hall/CSB/Activity/NewPlayType/NewPlayTypeBActAwardHistory.csb"
end

function NewPlayTypeAwardHistory:getBindingInfo()
    return {
        ["_KW_BTN_CLOSE"] = { varName = "_btnClose", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventClose" },
        ["_KW_LIST_VIEW"] = { varName = "_listView" },
        ["_KW_HISTORY_ITEM"] = { varName = "_item" }
    }
end

function NewPlayTypeAwardHistory:getProxyEvents()
    return {
        { module = XH.lobby:getModule("NewPlayType"), eventKeyName = "EVENT_AWARD_HISTORY", callBack = "onEventHistoryInfo" },
    }
end

function NewPlayTypeAwardHistory:ctor(param)
    param = param or {}
    NewPlayTypeAwardHistory.super.ctor(self, param)

    XH.lobby:getModule("NewPlayType"):reqNewPlayTypeAwardHistory()
end

function NewPlayTypeAwardHistory:onTouchEventClose(send, eventType)
    self:close()
end

function NewPlayTypeAwardHistory:onEventHistoryInfo(event)
    if not event or not event.info then
        return
    end
    if not self._item or not self._listView then
        return
    end
    local info = event.info
    self._listView:setInnerContainerSize(cc.size(self._listView:getContentSize().width, (self._item:getContentSize().height) * (#info + 1)))
    for _, v in pairs(info) do
        local item = self._item:clone()
        local awardName = KW_AWARD_NAME[v.prize_type] or ""
        if v.prize_type == 2 and v.play_date then
            awardName = awardName .. v.play_date
        end
        XH.UITool.setText(item, "_KW_TXT_FROM", awardName)
        XH.UITool.setText(item, "_KW_TXT_AWARD", v.value .. "房卡")
        XH.UITool.setText(item, "_KW_TXT_TIME", v.created_at)
        self._listView:addChild(item)
        item:setVisible(true)
    end
end

return NewPlayTypeAwardHistory4