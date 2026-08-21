local PromoteRewardLogNewView = class("PromoteRewardLogNewView", XH.ViewBase)
local PromoteDefine = require("lobby.Modules.Promote.Define")

function PromoteRewardLogNewView:ctor()
    PromoteRewardLogNewView.super.ctor(self)
    self._rewardList = {}
    self._rewardDays = {}
    self._currentAwardType = PromoteDefine.NewGameSpreadAwardType.LeaderPeriod

    local module = XH.lobby:getModule("Promote2")
    local baseInfo = module:getBaseInfo()
    if baseInfo then
        local lt = baseInfo.leaderTaskType
        if lt == PromoteDefine.TASK_TYPE.A then
            self._currentAwardType = PromoteDefine.NewGameSpreadAwardType.LeaderPeriod
        elseif lt == PromoteDefine.TASK_TYPE.B then
            self._currentAwardType = PromoteDefine.NewGameSpreadAwardType.LeaderPeriodB
        elseif lt == PromoteDefine.TASK_TYPE.C then
            self._currentAwardType = PromoteDefine.NewGameSpreadAwardType.LeaderPeriodC
        end
    end

    module:reqNewSpreadAwardList()
    self:initStaticUI()
end

function PromoteRewardLogNewView:getCSBPath()
    return "cocosStudio/hall/CSB/PromoteTeaNewUI/PromoteRewardLogUI.csb"
end

function PromoteRewardLogNewView:getBindingRegex()
    return "//.+"
end

function PromoteRewardLogNewView:getBindingInfo()
    return {
        ["KW_UI_BTN_CLOSE"] = {varName = "KW_UI_BTN_CLOSE", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onClickClose"},
        ["KW_BTN_REWARD"] = {varName = "KW_BTN_REWARD", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onClickReward"},
        ["LABEL_NO_TIP"] = {varName = "LABEL_NO_TIP"},
        ["list"] = {varName = "_listPanel", type = XH.UI_TYPE.PACKAGEVIEW},
        ["_KW_PANEL_ITEM"] = {varName = "_listTemplate"},
    }
end

function PromoteRewardLogNewView:getProxyEvents()
    return {
        {module = XH.lobby:getModule("Promote2"), eventKeyName = "EVENT_NEW_PROMOTE_REWARD", callBack = "updateView"},
    }
end

function PromoteRewardLogNewView:initStaticUI()

    self._listPanel:setDirection(cc.SCROLLVIEW_DIRECTION_VERTICAL)
    self._listPanel:setPreciseClick(true)
    self._listPanel:setItemModel(self._listTemplate)
    self._listPanel:setItemUpdateEvent(handler(self, self.showItem))
    self._listPanel:setItemClickEvent(handler(self, self.clickItem))

    self:updateView()

    self.KW_BTN_REWARD:setVisible(false)
    self.LABEL_NO_TIP:setVisible(false)
    if self._listPanel then
        self._listPanel:setVisible(false)
    end
end


function PromoteRewardLogNewView:showItem(item, datas, index)

    local data = datas[index]
    local module = XH.lobby:getModule("Promote2")
    local baseInfo = module:getBaseInfo()
    local propId = baseInfo.propId
    local displayCount = module:getUserAwardCount(propId, data.award)

    local rewardDate = tonumber(data.date) or 0
    local timeStr = os.date("%m月%d日", rewardDate)
    local cardStr = tostring(displayCount)
    local canReward = (data.award or 0) > 0 and (data.deliver or 0) == 0

    local function setChild(name, fn)
        local child = item:getChildByName(name)
        if child then fn(child) end
    end

    setChild("LABEL_TIME", function(n) n:setString(timeStr) end)
    setChild("LABEL_CARD", function(n) n:setString(cardStr) end)
    setChild("LABEL_COUNT", function(n) n:setString("") end)
    setChild("IMG_CARD", function(n)
        if (data.award or 0) <= 0 then
            n:setColor(cc.c3b(128, 128, 128))
        else
            n:setColor(cc.c3b(255, 255, 255))
        end
    end)
    setChild("IMG_REWARD", function(n) n:setVisible((data.deliver or 0) == 1) end)
    setChild("IMG_BG_1", function(n) n:setVisible(not canReward) end)
    setChild("IMG_BG_2", function(n) n:setVisible(canReward) end)
end

function PromoteRewardLogNewView:clickItem(item, datas, index)
    print(index)
end

function PromoteRewardLogNewView:updateView()
    local module = XH.lobby:getModule("Promote2")
    local rewardLog = module:getNewRewardLog() or {}
    local nowDate = module:getTodayZeroTime()

    self._rewardList = {}
    self._rewardDays = {}

    for _, reward in ipairs(rewardLog) do
        local rewardDate = tonumber(reward.date) or 0
        if rewardDate < nowDate then
            self._rewardList[#self._rewardList + 1] = reward
            if (reward.award or 0) > 0 and (reward.deliver or 0) == 0 then
                self._rewardDays[#self._rewardDays + 1] = rewardDate
            end
        end
    end

    local hasItems = #self._rewardList > 0
    self.LABEL_NO_TIP:setVisible(not hasItems)
    self.KW_BTN_REWARD:setVisible(hasItems)
    if #self._rewardDays > 0 then
        XH.UITool.resetGray(self.KW_BTN_REWARD)
        self.KW_BTN_REWARD:setTouchEnabled(true)
    else
        XH.UITool.gray(self.KW_BTN_REWARD, true)
        self.KW_BTN_REWARD:setTouchEnabled(false)
    end
    if self._listPanel then
        self._listPanel:setVisible(hasItems)
    end

    self._listPanel:setData(self._rewardList)
end

function PromoteRewardLogNewView:onClickReward()
    if #self._rewardDays > 0 then
        local module = XH.lobby:getModule("Promote2")
        module:reqNewSpreadAwardClaim(nil, self._currentAwardType, self._rewardDays)
    end
    -- 活动_圈主_2/3人_弹窗_一键领取_点击
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.wftgqz032004, {})
end

function PromoteRewardLogNewView:onClickClose()
    self:close()
end

return PromoteRewardLogNewView
�