local PromoteLogView = class("PromoteLogView", XH.ViewBase)
local PromoteDefine = require("lobby.Modules.Promote.Define")

function PromoteLogView:ctor(teaNumber)
    PromoteLogView.super.ctor(self)
    self._teaNumber = teaNumber
    XH.lobby:getModule("Promote"):reqSpreadAwardList(teaNumber, PromoteDefine.DRAW_TYPE.PERIOD)
end

function PromoteLogView:getCSBPath()
    return "cocosStudio/hall/CSB/Activity/Promote/PromoteLogLayer.csb"
end

function PromoteLogView:getBindingInfo()
    return {
        -- rule
        ["_KW_BTN_GET"] = {varName = "KW_BTN_GET", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onClickAward"},
        ["_KW_BTN_CLOSE"] = {varName = "KW_BTN_CLOSE", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onClickClose"},
        ["_KW_PANEL_PRIZE"] = {varName = "KW_PANEL_PRIZE"},
        ["_KW_SCROLLVIEW"] = {varName = "KW_SCROLLVIEW"},
        ["_KW_TEXT_TIP_NO"] = {varName = "KW_TEXT_TIP_NO"}
    }
end

function PromoteLogView:getProxyEvents()
    return {{module = XH.lobby:getModule("Promote"), eventKeyName = "EVENT_FULSH_PROMOTE_LOG", callBack = "initUI"}}
end

function PromoteLogView:addItem(idx, reward, nY)
    -- 间距
    local startX = 100
    local startY = 160 + 331 * (nY - 1)
    local defaultWidth = 260 -- 100
    local defaultHeight = 331 -- 500

    idx = idx - 1
    local lineX = idx % 5
    local lineY = math.floor(idx / 5)

    local temp = self.KW_PANEL_PRIZE:clone()
    local timeStr = os.date("%m", reward.date) .. "月" .. os.date("%d", reward.date) .. "日"
    local cardStr = "无房卡"
    if reward.award > 0 then
        cardStr = "房卡x" .. reward.award
    end
    local canReward = reward.award > 0 and reward.deliver == 0
    temp:getChildByName("_IMG_BG_1"):setVisible(not canReward)
    temp:getChildByName("_IMG_BG_2"):setVisible(canReward)
    temp:getChildByName("_IMG_REWARD"):setVisible(reward.deliver == 1)
    temp:getChildByName("_IMG_CARD"):setVisible(not (reward.award <= 0))
    temp:getChildByName("_IMG_CARD_GRAY"):setVisible(reward.award <= 0)
    temp:getChildByName("_LABEL_TIME"):setString(timeStr)
    temp:getChildByName("_LABEL_CARD"):setString(cardStr)
    temp:getChildByName("_LABEL_COUNT"):setString("")
    temp:setVisible(true)
    self.KW_SCROLLVIEW:addChild(temp)
    temp:setPosition(cc.p(startX + lineX * defaultWidth, startY - defaultHeight * lineY))
end

function PromoteLogView:initUI()
    local taskInfo = XH.lobby:getModule("Promote"):getTaskInfo()
    local rewardList = XH.lobby:getModule("Promote"):getRewardLog()
    local nowDate = XH.lobby:getModule("Promote"):getTodayZeroTime()
    if taskInfo == nil or rewardList == nil then
        return
    end
    self.KW_SCROLLVIEW:removeAllChildren()
    self._rewardList = {}
    self._rewardDay = {}
    if taskInfo.task_type == PromoteDefine.TASK_TYPE.A then
        for idx, reward in pairs(rewardList) do
            if reward.date < nowDate then
                self._rewardList[#self._rewardList + 1] = reward
            end
        end

        self.KW_TEXT_TIP_NO:setVisible(#self._rewardList == 0)
        self.KW_BTN_GET:setVisible(false)
    end
    if taskInfo.task_type == PromoteDefine.TASK_TYPE.C then
        for idx, reward in pairs(rewardList) do
            if reward.date <= nowDate then
                self._rewardList[#self._rewardList + 1] = reward
                if reward.award > 0 and reward.deliver == 0 then
                    self._rewardDay[#self._rewardDay + 1] = reward.date
                end
            end
        end
        self.KW_TEXT_TIP_NO:setVisible(false)
        self.KW_BTN_GET:setVisible(true)
        self.KW_BTN_GET:setEnabled(#self._rewardDay > 0)
    end
    local lineY = math.floor(#self._rewardList / 5)
    if math.floor(#self._rewardList / 5) ~= (#self._rewardList / 5) then
        lineY = lineY + 1
    end
    if lineY == 1 then
        lineY = 2
    end
    self.KW_SCROLLVIEW:setInnerContainerSize(cc.size(1243, 331 * lineY))
    for idx, reward in pairs(self._rewardList) do
        self:addItem(idx, reward, lineY)
    end
    self.KW_SCROLLVIEW:setVisible(not (#self._rewardList == 0))
end

function PromoteLogView:onClickAward()
    XH.throwDataManager:throwData(XH.ThrowDataDefine.PROMOTE_ACT_CLICK6, {userid = XH.playerData:getNumberID()})
    if self._rewardDay ~= nil and #self._rewardDay > 0 then
        XH.lobby:getModule("Promote"):reqSpreadAward(self._teaNumber, self._rewardDay, PromoteDefine.DRAW_TYPE.PERIOD)
    end
end

function PromoteLogView:onClickClose()
    self:close()
end

return PromoteLogView
