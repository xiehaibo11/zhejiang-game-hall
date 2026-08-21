-- 游戏中心 - 体验有礼任务页

local TASK_TAG_DEF = {
    {targetType = 1, name = "登录任务", key = 'lylogin'},
    {targetType = 2, name = "体验任务", key = 'lytimes'},
    {targetType = 3, name = "充值任务", key = 'lyrecharge'}
}

local GameCenterTaskView = class("GameCenterTaskView", XH.ViewBase)

function GameCenterTaskView:getCSBPath()
    return "cocosStudio/hall/CSB/GameCenter/TaskView.csb"
end

function GameCenterTaskView:getBindingInfo()
    return {
        ["_KW_PANEL_BG"] = {varName = "_panelBg"},
        ["_KW_BTN_CLOSE"] = {varName = "_closeBtn", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchClose"},
        ["_KW_LIST_TAGS"] = {varName = "_listTags"},
        ["_KW_LIST_TASK"] = {varName = "_listTask"},
        ["_KW_ITEM_TASK"] = {varName = "_itemTask"},
        ["_KW_ITEM_TAGS"] = {varName = "_itemTags"},
        ["_KW_BTN_DAILY_AWARD"] = {varName = "_btnDailyAward", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchDailyAward"},
        ["_KW_BTN_DAILY_AWARD_RED"] = {varName = "_btnDailyAwardRed"},
    }
end

function GameCenterTaskView:getProxyEvents()
    return {
        {module = XH.lobby:getModule("GameCenter"), eventKeyName = "EVENT_DAILY_AWARD_CHANGED", callBack = "updateDailyAward"},
        {module = XH.lobby:getModule("GameCenter"), eventKeyName = "EVENT_TASKLIST_UPDATED", callBack = "initUI"},
    }
end

function GameCenterTaskView:ctor()
    GameCenterTaskView.super.ctor(self)
    self._curTagIndex = 1
    self._tagList = {}
    XH.lobby:getModule("GameCenter"):luckyMissionInfoReq()
    self:initUI()
end

function GameCenterTaskView:initUI()
    self._itemTask:setVisible(false)
    self._itemTags:setVisible(false)

    self._listTask:setItemModel(self._itemTask)
    self:initTagList()
    self:refreshTaskList()
    self:updateDailyAward()
end

function GameCenterTaskView:_buildTagList()
    local tagList = {}
    local module = XH.lobby:getModule("GameCenter")
    for _, def in ipairs(TASK_TAG_DEF) do
        local tasks = module:getTaskList(def.key)
        if tasks and #tasks > 0 then
            table.insert(tagList, {targetType = def.targetType, name = def.name, key = def.key})
        end
    end
    return tagList
end

function GameCenterTaskView:initTagList()
    self._tagList = self:_buildTagList()
    if #self._tagList == 0 then
        return
    end
    self._listTags:removeAllChildren()
    for i, tag in ipairs(self._tagList) do
        local item = self._itemTags:clone()
        item:setVisible(true)
        local nameNode = item:getChildByName("name")
        if nameNode then
            nameNode:setString(tag.name or "")
            nameNode:setTextColor(cc.c3b(243, 246, 255))
        end
        XH.UITool.setVisible(item, "select", false)
        item:setTouchEnabled(true)
        item:addTouchEventListener(
            function(sender, eventType)
                if eventType == ccui.TouchEventType.ended then
                    self:_onTagClick(i, sender)
                end
            end
        )
        self._listTags:pushBackCustomItem(item)
    end
    self:_onTagClick(1, self._listTags:getChildren()[1])
end

function GameCenterTaskView:_onTagClick(index, send)
    for _, btn in ipairs(self._listTags:getChildren()) do
        XH.UITool.setVisible(btn, "select", false)
        XH.UITool.setTextColor(btn, "name", cc.c3b(243, 246, 255))
    end
    XH.UITool.setTextColor(send, "name", cc.c3b(53, 53, 83))
    XH.UITool.setVisible(send, "select", true)
    self._curTagIndex = index
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.cy26031008, {page_item_id = TASK_TAG_DEF[self._curTagIndex].name})
    self:refreshTaskList()
end

function GameCenterTaskView:refreshTaskList()
    local tag = self._tagList and self._tagList[self._curTagIndex]
    if not tag then
        return
    end
    local taskList = XH.lobby:getModule("GameCenter"):getTaskList(tag.key)
    self._listTask:removeAllItems()
    if not taskList or #taskList == 0 then
        return
    end
    for _, task in ipairs(taskList) do
        self._listTask:pushBackDefaultItem()
    end
    local items = self._listTask:getItems()
    for i, task in ipairs(taskList) do
        if items[i] then
            self:_updateTaskItem(items[i], task)
        end
    end
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.cy26031006, {page_item_id = TASK_TAG_DEF[self._curTagIndex].name})
end

function GameCenterTaskView:_updateTaskItem(item, task)
    if not item or not task then
        return
    end
    item:setVisible(true)

    local nameNode = item:getChildByName("name")
    if nameNode and task.content and #task.content > 0 then
        local target = task.content[#task.content].target
        local progress = task.progress
        if task.actType == 'lyrecharge' or task.actType == "chongzhifen" then
            progress = task.progress / 100
            target = task.content[#task.content].target / 100
        end
        local richText = string.format("<font size='40' color='#474E69'>%s(" .. "<font color='#df501f'>%s</font>/%s" .. ")</font>", task.intro or "", progress, target)
        local richLabel = ccui.RichText:createWithXML(richText, {})
        richLabel:setAnchorPoint(0, 0.5)
        richLabel:setPosition(cc.p(0, nameNode:getContentSize().height * 0.5))
        nameNode:addChild(richLabel)
        -- nameNode:setString(task.intro or "")
    end
    local progressNode = item:getChildByName("progress")
    if progressNode and task.content and #task.content > 0 then
        progressNode:setPercent(100 * task.progress / task.content[#task.content].target)
    end
    local awardIcon = XH.UITool.seekNodeByName(item, "award_icon")
    local rewards = task.content[#task.content].rewards
    local awardCnt = XH.UITool.seekNodeByName(item, "award_cnt")
    if rewards and #rewards > 0 then
        if awardIcon then
            local awardImg = XH.RemoteImage.new()
            awardImg:setAnchorPoint(cc.p(0.5, 0.5))
            awardImg:setPosition(awardIcon:getContentSize().width * 0.5, awardIcon:getContentSize().height * 0.5)
            awardImg:ignoreContentAdaptWithSize(false)
            awardImg:setContentSize(awardIcon:getContentSize().width, awardIcon:getContentSize().height)
            awardImg:setUrl(rewards[1].icon)
            awardIcon:addChild(awardImg)
        end
        if awardCnt then
            awardCnt:setString('x' .. rewards[1].count)
        end
    end

    local btnGet = item:getChildByName("btn_get")
    local btnGo = item:getChildByName("btn_go")
    local btnFinish = item:getChildByName("btn_finish")
    if btnGet then
        btnGet:setVisible(false)
        btnGet:addClickEventListener(
            function()
                self:_onTaskGetReward(task)
                XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.cy26031009, {page_item_id = "领取", block_item_id = task.activityId})
            end
        )
    end
    if btnGo then
        btnGo:setVisible(false)
        btnGo:addClickEventListener(
            function()
                self:_onTaskGo(task)
                XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.cy26031009, {page_item_id = "立即前往", block_item_id = task.activityId})
            end
        )
    end
    if btnFinish then
        btnFinish:setVisible(false)
    end

    local status = task.Status or ""
    if status == "AC_NEW" then
        if btnGo then
            btnGo:setVisible(true)
        end
    elseif status == "AC_CAN_DRAW" then
        if btnGet then
            btnGet:setVisible(true)
        end
    else
        if btnFinish then
            btnFinish:setVisible(true)
        end
    end
end

function GameCenterTaskView:_onTaskGo(task)
    if not task or not task.jump then
        return
    end
    local type = task.jump.jump
    local gameid = task.jump.gameId

    XH.lobby:getModule("LuckyMission"):notifyLuckyTaskJoin(type, gameid)
    self:close()
end

function GameCenterTaskView:_onTaskGetReward(task)
    XH.lobby:getModule("GameCenter"):reqTaskReward(task, handler(self, self.refreshTaskList))
end

function GameCenterTaskView:updateDailyAward()
    local dailyAward = XH.lobby:getModule("GameCenter"):getDailyAward()
    if dailyAward then
        self._btnDailyAward:setVisible(true)
        XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.cy26031006, {page_item_id = "每日领币"})
        local redPointStatus = XH.lobby:getModule("GameCenter"):getDailyAwardRedPointStatus()
        XH.UITool.setText(self._btnDailyAward, "title", redPointStatus and "每日领币" or "明日再来")
        if not redPointStatus then
            XH.UITool.gray(self._btnDailyAward, true)
            self._btnDailyAward:setTouchEnabled(false)
            XH.UITool.setTextColor(self._btnDailyAward, "title", cc.c3b(118, 124, 142))
        end
        self._btnDailyAwardRed:setVisible(redPointStatus)
    else
        self._btnDailyAward:setVisible(false)
        self._btnDailyAwardRed:setVisible(false)
    end
end

function GameCenterTaskView:onTouchDailyAward(send, eventType)
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.cy26031007)
    if XH.lobby:getModule("GameCenter"):getDailyAwardRedPointStatus() then
        XH.lobby:getModule("GameCenter"):reqDailyAward()
    else
        XH.TipTool.showToast("没有奖励可以领取")
    end
end

function GameCenterTaskView:onTouchClose(send, eventType)
    self:close()
end

return GameCenterTaskView
   �%  