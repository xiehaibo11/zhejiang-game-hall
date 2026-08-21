local LuckyTaskView = class("LuckyTaskView", XH.ViewBase)
local LuckyTaskDefine = require("lobby.Modules.LuckyTask.Define")
local ViewAniConfig = require("app.Base.ViewAniConfig")

function LuckyTaskView:ctor(from, isAutoShow, iconPos)
    LuckyTaskView.super.ctor(self)
    self._tabIndex = 0 -- 当前选择的tab
    self._taskTime = 0
    self._systemTime = 0
    self._luckyInfos = {}
    self._curTask = nil
    self._curRewards = {}
    self._curTaskStage = 0
    self._progressBtns = {}
    self._arawdItems = {}
    self._isAutoShow = isAutoShow
    self._isInTea = from == LuckyTaskDefine.POP_FROM.MATCH
    self._throwDataSceneName = self:getFromName(from)
    self._iconPos = iconPos

    XH.lobby:getModule("LuckyTask"):reportData("popShow", self._throwDataSceneName)
    XH.lobby:getModule("LuckyTask"):RequestSysTime()
end

function LuckyTaskView:getFromName(from)
    if not from then
        return "大厅"
    end
    local fromName = {"大厅", "比赛场", "金币场大厅", "大厅统一活动", "桌面开局前", "桌面游戏中", "包厢战绩", "比赛场战绩"}
    return fromName[from] or "大厅"
end

function LuckyTaskView:getProxyEvents()
    return {
        --
        {module = XH.lobby:getModule("LuckyTask"), eventKeyName = "EVENT_NotifyLuckyTaskSYSTEMTIME", callBack = "onNotifyUnixTime"},
        {module = XH.lobby:getModule("LuckyTask"), eventKeyName = "EVENT_NotifyLuckyTask", callBack = "onNotifyLuckyTask"},
        {module = XH.lobby:getModule("LuckyTask"), eventKeyName = "EVENT_NotifyLuckyTaskPage", callBack = "onNotifyLuckyTaskPage"},
        {module = XH.lobby:getModule("LuckyTask"), eventKeyName = "EVENT_NotifyPageStatus", callBack = "onNotifyPageStatus"},
        {module = XH.lobby:getModule("LuckyTask"), eventKeyName = "EVENT_NotifyLuckyClose", callBack = "onNotifyLuckyClose"}
    }
end

function LuckyTaskView:getCSBPath()
    return "cocosStudio/hall/CSB/Activity/LuckyTask/LuckyTaskMainLayer.csb"
end

function LuckyTaskView:getAniConfig()
    return {aniType = ViewAniConfig.AniName.NORMAL, popNode = self._rootLayer}
end

function LuckyTaskView:getBindingInfo()
    return {
        --
        ["_KW_ROOT_LAYER"] = {varName = "_rootLayer"},
        ["_KW_PANEL_BG"] = {varName = "_blackbg"},
        ["_KW_TAB_ITEM"] = {varName = "KW_TAB_ITEM"},
        ["_KW_TAB_ITEM_IMG"] = {varName = "KW_TAB_ITEM_IMG"},
        ["_KW_TAB_ITEM_TEXT"] = {varName = "KW_TAB_ITEM_TEXT"},
        ["_KW_AWARD_ITEM"] = {varName = "KW_AWARD_ITEM"},
        ["_KW_UI_PROP_IMG"] = {varName = "KW_UI_PROP_IMG"},
        ["_KW_UI_PROP_CNT"] = {varName = "KW_UI_PROP_CNT"},
        -- ["_KW_PANEL_CLOSE_ACT"] = {varName = "KW_PANEL_CLOSE_ACT"},
        -- ["_KW_UI_BTN_OK"] = {varName = "KW_UI_BTN_OK", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onClickClose"},
        ["_KW_TEXT_ACTIVITY_TIME"] = {varName = "KW_TEXT_ACTIVITY_TIME"},
        ["_KW_UI_TIME_DESC"] = {varName = "KW_UI_TIME_DESC"},
        ["_KW_UI_BTN_HELP"] = {varName = "KW_UI_BTN_HELP", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onClickRule"},
        ["_KW_UI_BTN_HISTORY"] = {varName = "KW_UI_BTN_HISTORY", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onClickHistory"},
        ["_KW_UI_BTN_CLOSE"] = {varName = "KW_UI_BTN_CLOSE", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onClickClose"},
        ["_KW_CHOOSE_TASK_TAB"] = {varName = "KW_CHOOSE_TASK_TAB"},
        ["_KW_UI_NOTICE_IMG"] = {varName = "KW_UI_NOTICE_IMG", onTouchEnded = "clickNoticeImg"},
        ["_KW_UI_BTN_GO"] = {varName = "KW_UI_BTN_GO", type = XH.UI_TYPE.BUTTON, onTouchEnded = "clickGo"},
        ["_KW_UI_BTN_AWARD"] = {varName = "KW_UI_BTN_AWARD", type = XH.UI_TYPE.BUTTON, onTouchEnded = "clickAward"},
        ["_KW_UI_BTN_DONE"] = {varName = "KW_UI_BTN_DONE"},
        ["_KW_UI_HELP"] = {varName = "KW_UI_HELP"},
        ["_KW_TEXT_HELP"] = {varName = "KW_TEXT_HELP"},
        ["_KW_UI_AWARD_LIST"] = {varName = "KW_UI_AWARD_LIST"},
        ["_KW_UI_TASK_PROGRESS"] = {varName = "KW_UI_TASK_PROGRESS"},
        ["_KW_PROCENT"] = {varName = "KW_PROCENT"},
        ["_KW_TEXT_DESC_SCOROLLVIEW"] = {varName = "KW_TEXT_DESC_SCOROLLVIEW"},
        ["_KW_UI_TEXT_DESC"] = {varName = "KW_UI_TEXT_DESC"},
        -- ["_KW_TASKTYPE"] = {varName = "KW_TASKTYPE"},
        ["_KW_TOUCH"] = {varName = "KW_TOUCH", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchBg"},
        ["_KW_UI_FULL_SCREEN"] = {varName = "KW_UI_FULL_SCREEN", type = XH.UI_TYPE.BUTTON, onTouchEnded = "clickFullImg"},
        ["_KW_UI_FULL_IMG"] = {varName = "KW_UI_FULL_IMG", type = XH.UI_TYPE.BUTTON, onTouchEnded = "clickFullImg"},
        ["_KW_PROGRESS_ITEM"] = {varName = "KW_PROGRESS_ITEM"},
        ["_KW_UI_STEP_VALUE"] = {varName = "KW_UI_STEP_VALUE"},
        ["_KW_UI_STEP_TEXT"] = {varName = "KW_UI_STEP_TEXT"},
        ["_KW_UI_PROGRESS_PANEL"] = {varName = "KW_UI_PROGRESS_PANEL"},

        ["_KW_TEXT_PROCESS"] = {varName = "_processText"},
        ["_KW_IMG_AWARD_LIST_BG"] = {varName = "_awardListBg"},
        ["_KW_PANEL_AWARD_MORE"] = {varName = "_awardListBgMore"},
    }
end

function LuckyTaskView:initUI()
    self.KW_TEXT_DESC_SCOROLLVIEW:setScrollBarEnabled(false)
    self:initTabList()
end

function LuckyTaskView:onEnter()
    self._awardListBg:setVisible(false)
    self.KW_AWARD_ITEM:setVisible(false)
    self.KW_TAB_ITEM:setVisible(false)
    self.KW_PROGRESS_ITEM:setVisible(false)

    if self._isAutoShow and CF and CF.isInGameScene() then
        if not XH.lobby:getModule("LuckyTask"):isHaveAward() then
            self:runAction(cc.Sequence:create(cc.DelayTime:create(2), cc.CallFunc:create(function() 
                self:close()
            end)))
        end
    end
end

function LuckyTaskView:onHideHelp()
    self.KW_UI_HELP:setVisible(false)
end

function LuckyTaskView:isProp(_propId)
    return true
end

function LuckyTaskView:initTabList()
    -- 清空数据
    self.KW_CHOOSE_TASK_TAB:removeAllChildren()
    self.KW_UI_AWARD_LIST:removeAllChildren()
end

-- 增加标签节点
function LuckyTaskView:flushTabItems()
    self.KW_CHOOSE_TASK_TAB:removeAllChildren()
    for i = 1, #self._luckyInfos do
        local tempNode = self.KW_TAB_ITEM:clone()
        local info = self._luckyInfos[i]
        local str = info.name
        local len = XH.StringTool.simpleGetStrWidth(str)
        if len > 8 and len <= 12 then
            str = XH.StringTool.simpleSubStrUtilWidth(str, 12)
            tempNode:getChildByName("_KW_TAB_ITEM_TEXT"):setFontSize(40)
        elseif len > 12 then
            str = XH.StringTool.simpleSubStrUtilWidth(str, 16)
            tempNode:getChildByName("_KW_TAB_ITEM_TEXT"):setFontSize(30)
        end
        tempNode:getChildByName("_KW_TAB_ITEM_TEXT"):setString(str)
        for i = 1, 5 do
            local node = tempNode:getChildByName("_KW_TAB_ITEM_IMG_" .. i)
            if node ~= nil and LuckyTaskDefine.ContentStatus[info.status] then
                node:setVisible(LuckyTaskDefine.ContentStatus[info.status] == i)
            end
        end
        tempNode:setName(i)
        tempNode:setVisible(true)
        tempNode:addTouchEventListener(handler(self, self.onClickItem))
        self.KW_CHOOSE_TASK_TAB:addChild(tempNode)
    end
    self.KW_CHOOSE_TASK_TAB:setScrollBarOpacity(0)
    self.KW_CHOOSE_TASK_TAB:setInnerContainerSize(cc.size(self.KW_CHOOSE_TASK_TAB:getContentSize().width, self.KW_TAB_ITEM:getContentSize().height * #self._luckyInfos))
end

function LuckyTaskView:flushAwardItemsNew(content, idx)
    local curRewards = content.rewards
    local awardListBg = self._awardListBg:clone()
    awardListBg:setVisible(true)
    -- 可领奖气泡
    XH.UITool.setVisible(awardListBg, "KW_IMG_QIPAO", content.draw == 0 and self._curTask.progress >= content.target)
    -- 选中光圈
    XH.UITool.setVisible(awardListBg, "_KW_IMG_CANGET", self._curTaskStage == idx)
    -- 查看更多奖励
    XH.UITool.setVisible(awardListBg, "_KW_BTN_AWARD_MORE", #curRewards > 1)

    awardListBg:addTouchEventListener(function()
        self:onTouchBg()
        self:flushAwardItems(idx)
        self:refreshAwardBtn(idx)
        self:refreshprogressBtnSelectedState()
    end)
    for k,v in pairs(curRewards) do
        -- 只显示1个,剩余的点击查看更多时显示
        if k > 1 then
            break
        end
        local count = v.count
        if v.id == XH.areaData:getPropSmallRoomCardID() or v.id == XH.areaData:getPropBindRoomCardID() then
            if XH.areaData:getPropSmallRoomCardRatio() then
                count = v.count / XH.areaData:getPropSmallRoomCardRatio()
            end
        elseif v.id == XH.areaData:getPropLimitedTimeRoomCardID() then
            if XH.areaData:getPropLimitedTimeRoomCardRatio() then
                count = v.count / XH.areaData:getPropLimitedTimeRoomCardRatio()
            end
        end
        local addNode = awardListBg:getChildByName("_KW_UI_PROP_IMG")
        local headImage = XH.RemoteImage.new():setAnchorPoint(cc.p(0.5, 0.5)):setPosition(addNode:getContentSize().width * 0.5, addNode:getContentSize().height * 0.5):ignoreContentAdaptWithSize(false):setContentSize(addNode:getContentSize().width, addNode:getContentSize().height):addTo(addNode)
        headImage:setMaxContentSize(cc.size(addNode:getContentSize().width, addNode:getContentSize().height))
        headImage:setUrl(v.icon or "")
        awardListBg:getChildByName("_KW_UI_PROP_CNT"):setString("x" .. count)
        awardListBg:getChildByName("_KW_UI_PROP_NAME"):setString(v.name)
    end

    local parentNode = self._progressBtns[idx]
    if not parentNode then
        return
    end
    local posX = parentNode:getContentSize().width/2
    -- if idx == #self._progressBtns then
    --     posX = parentNode:getContentSize().width/2 - 10
    -- end
    awardListBg:setPosition(cc.p(posX, -180))
    awardListBg:addTo(parentNode)
    return awardListBg
end

-- 增加奖励节点
function LuckyTaskView:flushAwardItems(idx)
    local curRewards = self._curTask.content[idx].rewards
    if #curRewards <= 1 then
        return
    end
    local nowBgSize = self._awardListBgMore:getContentSize()
    local witdh = 150 * #curRewards
    self._awardListBgMore:setContentSize(cc.size(witdh + 40, nowBgSize.height))
    XH.UITool.setContentSize(self._awardListBgMore, "KW_IMG_AWARD_BG", witdh + 40, nowBgSize.height)
    XH.UITool.setPositionX(self._awardListBgMore, "KW_IMG_AWARD_BG", self._awardListBgMore:getContentSize().width/2)

    local awardListMore = self._awardListBgMore:getChildByName("KW_LISTVIEW_AWARD_MORE")
    awardListMore:setContentSize(cc.size(witdh, nowBgSize.height))
    awardListMore:setPositionX(self._awardListBgMore:getContentSize().width/2)
    self._awardListBgMore:setVisible(true)

    awardListMore:setScrollBarOpacity(0)
    awardListMore:removeAllChildren()
    
    for i = 1, #curRewards do
        local tempNode = self.KW_AWARD_ITEM:clone()
        local count = curRewards[i].count
        if curRewards[i].id == XH.areaData:getPropSmallRoomCardID() or curRewards[i].id == XH.areaData:getPropBindRoomCardID() then
            if XH.areaData:getPropSmallRoomCardRatio() then
                count = curRewards[i].count / XH.areaData:getPropSmallRoomCardRatio()
            end
        end
        if curRewards[i].id == XH.areaData:getPropLimitedTimeRoomCardID() then
            if XH.areaData:getPropLimitedTimeRoomCardRatio() then
                count = curRewards[i].count / XH.areaData:getPropLimitedTimeRoomCardRatio()
            end
        end
        local addNode = tempNode:getChildByName("_KW_UI_PROP_IMG")
        local headImage = XH.RemoteImage.new():setAnchorPoint(cc.p(0.5, 0.5)):setPosition(addNode:getContentSize().width * 0.5, addNode:getContentSize().height * 0.5):ignoreContentAdaptWithSize(false):setContentSize(addNode:getContentSize().width, addNode:getContentSize().height):addTo(addNode)
        headImage:setMaxContentSize(cc.size(addNode:getContentSize().width, addNode:getContentSize().height))
        headImage:setUrl(curRewards[i].icon or "")
        tempNode:getChildByName("_KW_UI_PROP_CNT"):setString("x" .. count)
        tempNode:getChildByName("_KW_UI_PROP_NAME"):setString(curRewards[i].name)
        tempNode:setVisible(true)
        awardListMore:addChild(tempNode)
    end
    for i = 1, #self._progressBtns do
        if i == idx then
            XH.UITool.setVisible(self._progressBtns[i], "KW_IMG_AWARDMORE_ARR", true)
        else
            XH.UITool.setVisible(self._progressBtns[i], "KW_IMG_AWARDMORE_ARR", false)
        end
    end
    if self._progressBtns[idx] then
        local btnPosX = self._progressBtns[idx]:getPositionX()
        local nowBgSize = self._awardListBgMore:getContentSize()
        local maxPosX = 1050 - nowBgSize.width/2
        local minPosX = 0
        local posX = btnPosX
        if btnPosX > maxPosX then
            posX = maxPosX
        elseif btnPosX < minPosX then
            posX = minPosX
        end
        self._awardListBgMore:setPositionX(posX)
    end
end

function LuckyTaskView:onClickItem(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    local idx = send:getName()
    local tempTask = self._luckyInfos[tonumber(idx)]
    local isInGame = CF and CF.isInGameScene()
    XH.lobby:getModule("LuckyTask"):reqGetContent(tempTask, not isInGame)
    self.KW_UI_BTN_GO:setEnabled(tempTask.status ~= LuckyTaskDefine.ContentStatus.AC_BEFORE)
    self:clickTabEnd(tonumber(idx))
    self:onHideHelp()
    local data = {
        page_label = tempTask.name,
        block_label = self._throwDataSceneName,
        item_id = tempTask.id[1]
    }
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.LUCKY_TASK_NAME_CLICK, data)
end

function LuckyTaskView:onClickHistory()
    self:onTouchBg()
    XH.viewManager:openView("LuckyTaskLogView")
end

function LuckyTaskView:onClickClose()
    self:closeView()
end

function LuckyTaskView:onClickRule()
    self.KW_UI_HELP:setVisible(not self.KW_UI_HELP:isVisible())
    self.KW_UI_HELP:setLocalZOrder(5)
end

function LuckyTaskView:clickGo()
    self:onTouchBg()
    if self._isInTea or (CF and CF.isInGameScene()) then
        XH.TipTool.showToast("亲，请根据任务要求去特定场景完成呦~")
        return
    end
    if self._curTask == nil then
        return
    end
    local type = self._curTask.jump.jump
    local gameid = self._curTask.jump.gameId
    if self._curTask.actType == "denglu" and self._curTask.jump.jump == "AC_JUMPTYPE_NULL" then
        type = "AC_JUMPTYPE_LOGIN"
    end
    if LuckyTaskDefine.JumpType[type] == LuckyTaskDefine.JumpType.AC_JUMPTYPE_SHARE then
        XH.lobby:getModule("LuckyTask"):setShareTask(self._curTask)
    end
    XH.lobby:getModule("LuckyTask"):notifyLuckyTaskJoin(type, gameid)
    local data = {
        item_id = self._curTask.activityId,
        block_label = self._throwDataSceneName,
    }
    for i = 1,#self._luckyInfos do 
        if self._luckyInfos[i].id[1] == self._curTask.activityId then 
            data.page_label = self._luckyInfos[i].name
            break
        end
    end
    XH.lobby:getModule("TabsActivity"):onDoTask()
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.LUCKY_TASK_GO_CLICK, data)
    self:closeView()
end

function LuckyTaskView:clickAward()
    if self._curTask == nil then
        return
    end
    self:onHideHelp()
    local activity_id = self._curTask.activityId
    local content_id = self._curTask.content[self._curTaskStage].id
    XH.lobby:getModule("LuckyTask"):reqGetRewards(activity_id, content_id)
end

function LuckyTaskView:closeView()
    XH.lobby:getModule("LuckyTask"):clearLuckyTask()
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.LUCKY_TASK_CLOSE_CLICK, nil, {click_source = 1, area_id = XH.areaData:getAreaID()})
    self:close()
end

function LuckyTaskView:onCleanup()
    if self._refreshTime then
        cc.Director:getInstance():getScheduler():unscheduleScriptEntry(self._refreshTime)
    end
    self._refreshTime = nil
    LuckyTaskView.super.onCleanup(self)
end

function LuckyTaskView:startSchedule()
    if self._refreshTime ~= nil then
        local showStr = self:formatTime(self._taskTime)
        self.KW_UI_TIME_DESC:setString(showStr)
        return
    end
    if self._refreshTime then
        cc.Director:getInstance():getScheduler():unscheduleScriptEntry(self._refreshTime)
    end
    self._refreshTime = nil
    self:refreshTime()
    self._refreshTime = cc.Director:getInstance():getScheduler():scheduleScriptFunc(function()
        self:refreshTime()
    end, 1, false)
end

function LuckyTaskView:refreshTime()
    local showStr = self:formatTime(self._taskTime)
    self.KW_UI_TIME_DESC:setString(showStr)
    -- 看客户的不做是否进入下一阶段处理
    self._taskTime = self._taskTime - 1
    self._systemTime = self._systemTime + 1
end

function LuckyTaskView:formatTime(leftTime)
    if leftTime <= 0 then
        return "0天00时00分00秒"
    end
    local KW_DAY_SECOND_TIME = 86400
    local KW_MIN_SECOND_TIME = 3600
    local KW_SECOND_TIME = 60
    local dayTime = math.floor(leftTime / KW_DAY_SECOND_TIME)
    local hourTime = math.floor((leftTime - dayTime * KW_DAY_SECOND_TIME) / KW_MIN_SECOND_TIME)
    local minuteTime = math.floor((leftTime - dayTime * KW_DAY_SECOND_TIME - hourTime * KW_MIN_SECOND_TIME) / KW_SECOND_TIME)
    local secondTime = math.floor(leftTime - dayTime * KW_DAY_SECOND_TIME - hourTime * KW_MIN_SECOND_TIME - minuteTime * KW_SECOND_TIME)
    local hStr = string.format("%02d", hourTime)
    local mStr = string.format("%02d", minuteTime)
    local sStr = string.format("%02d", secondTime)
    return dayTime .. "天" .. hStr .. "时" .. mStr .. "分" .. sStr .. "秒"
end

function LuckyTaskView:clickNoticeImg()
    self.KW_UI_FULL_SCREEN:setVisible(true)
end

function LuckyTaskView:clickFullImg()
    self.KW_UI_FULL_SCREEN:setVisible(false)
    self:onHideHelp()
end

function LuckyTaskView:initNoticeImg(url)
    self.KW_UI_NOTICE_IMG:removeAllChildren()
    local headImage = XH.RemoteImage.new():setPosition(self.KW_UI_NOTICE_IMG:getContentSize().width / 2, self.KW_UI_NOTICE_IMG:getContentSize().height / 2)
    :ignoreContentAdaptWithSize(false)
    :setContentSize(self.KW_UI_NOTICE_IMG:getContentSize().width, self.KW_UI_NOTICE_IMG:getContentSize().height)
    :addTo(self.KW_UI_NOTICE_IMG)
    headImage:setUrl(url or "")
    self.KW_UI_FULL_IMG:removeAllChildren()
    local headImage = XH.RemoteImage.new():setPosition(self.KW_UI_FULL_IMG:getContentSize().width / 2, self.KW_UI_FULL_IMG:getContentSize().height / 2)
    :ignoreContentAdaptWithSize(false)
    :setContentSize(self.KW_UI_FULL_IMG:getContentSize().width, self.KW_UI_FULL_IMG:getContentSize().height)
    :addTo(self.KW_UI_FULL_IMG)
    headImage:setUrl(url or "")
end

function LuckyTaskView:onNotifyLuckyTask(event)
    if not event.data then
        return
    end
    self:refreshMainUI(event.data)
end

-- 可领奖阶段
function LuckyTaskView:getDrawTastInfo()
    if self._curTask == nil or self._curTask.content == nil then
        return {haveDraw = false, idx = 1}
    end
    for i = 1, #self._curTask.content do
        if self._curTask.progress >= self._curTask.content[i].target and self._curTask.content[i].draw == 0 then
            return {haveDraw = true, idx = i}
        end
    end
    return {haveDraw = false, idx = 1}
end

-- 下一阶段
function LuckyTaskView:getNextStageIdx()
    local idx = 1
    if self._curTask == nil or self._curTask.content == nil then
        return idx
    end
    for i = 1, #self._curTask.content do
        if self._curTask.progress < self._curTask.content[i].target then
            idx = i
            break
        end
    end
    return idx
end

function LuckyTaskView:refreshDesc(intro)
    self.KW_UI_TEXT_DESC:setString(intro)
    self.KW_UI_TEXT_DESC:setVisible(true)
    local topSpace = 15 -- 文本与滚动容器上下间距
    local leftSpace = 30 -- 文本与滚动容器左右间距
    local scrollSize = self.KW_TEXT_DESC_SCOROLLVIEW:getContentSize()
    self.KW_UI_TEXT_DESC:setTextAreaSize(cc.size(scrollSize.width - leftSpace*2, 0))
    if self.KW_UI_TEXT_DESC:getContentSize().height > scrollSize.height then
        scrollSize.height = self.KW_UI_TEXT_DESC:getContentSize().height + topSpace*2
    end
    self.KW_UI_TEXT_DESC:setContentSize(scrollSize.width, scrollSize.height)
    self.KW_TEXT_DESC_SCOROLLVIEW:setInnerContainerSize(cc.size(scrollSize.width, scrollSize.height))
    self.KW_UI_TEXT_DESC:setPosition(cc.p(leftSpace, scrollSize.height - topSpace))
end

function LuckyTaskView:refreshMainUI(luckyTask)
    self._curTask = luckyTask
    local taskType = LuckyTaskDefine.ENUM_LUCKY_TASK_TYPE.SINGLE
    if #luckyTask.content > 1 then
        taskType = LuckyTaskDefine.ENUM_LUCKY_TASK_TYPE.MULTI
    end
    -- self.KW_TASKTYPE:setVisible(taskType == LuckyTaskDefine.ENUM_LUCKY_TASK_TYPE.MULTI)
    self:refreshDesc(luckyTask.intro)
    local multiple = 1
    local str = luckyTask.progress / multiple .. "/" .. luckyTask.content[#luckyTask.content].target / multiple
    if self._curTask.jump.jump == "AC_JUMPTYPE_BY" and self._curTask.actType == "byyx" then
        multiple = 60
        str = math.ceil(luckyTask.progress / multiple).. "/" .. math.ceil(luckyTask.content[#luckyTask.content].target / multiple)
    end
    self.KW_PROCENT:setPercent(100 * luckyTask.progress / luckyTask.content[#luckyTask.content].target)
    self._processText:setString(str)
    local idx = self:getNextStageIdx()
    local drawInfo = self:getDrawTastInfo()
    if drawInfo.haveDraw then
        idx = drawInfo.idx
    end
    self:refreshUnixTime()
    self:refreshAwardBtn(idx)
    self:initNoticeImg(luckyTask.background)
    self:initProgressBtn()
    self:refreshAwardItems()
    self:refreshprogressBtnSelectedState()
    self:startSchedule()
end

function LuckyTaskView:onNotifyLuckyTaskPage(event)
    if not event.data then
        return
    end
    self._luckyInfos = event.data.info
    self:flushTabItems()
    -- self.KW_ARROW_LEFT:setVisible(#self._luckyInfos > 3)
    -- self.KW_ARROW_RIGHT:setVisible(#self._luckyInfos > 3)
    local rule = event.data.intro
    local splitData = string.split(event.data.intro, "\\n")
    if #splitData > 0 then
        rule = ""
        for i = 1, #splitData do
            rule = rule .. splitData[i]
            if i ~= #splitData then
                rule = rule .. "\n"
            end
        end
    end
    -- 规则写死，原来是服务端写死下发给客户端的
    -- self.KW_TEXT_HELP:setString(rule)
    local idx = XH.lobby:getModule("LuckyTask"):getTabIndex()
    self:clickTabEnd(idx)
    local isInGame = CF and CF.isInGameScene()
    XH.lobby:getModule("LuckyTask"):reqDefabltContent(not isInGame)
    self:onNotifyLuckyClose({close = 0})
end

function LuckyTaskView:clickTabEnd(idx)
    if self._tabIndex ~= idx then
        local tempTask = self._luckyInfos[tonumber(idx)]
        local data = {
            page_label = tempTask.name,
            block_label = self._throwDataSceneName,
            item_id = tempTask.id[1]
        }
        XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.LUCKY_TASK_SHOW, data)
    end
    self._tabIndex = idx
    for i, v in pairs(self.KW_CHOOSE_TASK_TAB:getChildren()) do
        local nameIdx = tonumber(v:getName())
        v:getChildByName("_KW_TAB_ITEM_CLICK"):setVisible(nameIdx == idx)
        local color = v:getChildByName("_KW_TAB_ITEM_TEXT"):getColor()
        if nameIdx == idx then
            v:getChildByName("_KW_TAB_ITEM_TEXT"):setColor(cc.c3b(133, 55, 25))
        else
            v:getChildByName("_KW_TAB_ITEM_TEXT"):setColor(cc.c3b(254, 237, 199))
        end
    end
    
end

function LuckyTaskView:refreshUnixTime()
    if self._curTask == nil then
        return
    end
    local start_time = tonumber(self._curTask.startTime)
    local draw_deadline = tonumber(self._curTask.drawDeadline)
    local end_time = tonumber(self._curTask.endTime)
    local selectedIndex = LuckyTaskDefine.ENUM_LUCKY_TIME_TYPE.START
    local task_condition = self._curTask.content[#self._curTask.content].target
    -- 任务是否全部达成
    local is_condition = false
    if self._curTask.progress == task_condition then
        is_condition = true
    end
    if self._systemTime < start_time then
        -- 开始倒计时
        self._taskTime = start_time - self._systemTime
    elseif self._systemTime >= start_time and self._systemTime < end_time and is_condition == false then
        -- 结束倒计时
        self._taskTime = end_time - self._systemTime
        selectedIndex = LuckyTaskDefine.ENUM_LUCKY_TIME_TYPE.END
    elseif (self._systemTime >= end_time or is_condition == true) and self._systemTime < draw_deadline then
        -- 领奖倒计时
        self._taskTime = draw_deadline - self._systemTime
        selectedIndex = LuckyTaskDefine.ENUM_LUCKY_TIME_TYPE.DRAW
    else
        self._taskTime = 0
    end
    local strTimeDesc = ""
    if selectedIndex == LuckyTaskDefine.ENUM_LUCKY_TIME_TYPE.START then
        strTimeDesc = "任务开始时间"
    elseif selectedIndex == LuckyTaskDefine.ENUM_LUCKY_TIME_TYPE.END then
        strTimeDesc = "任务剩余时间"
    elseif selectedIndex == LuckyTaskDefine.ENUM_LUCKY_TIME_TYPE.DRAW then
        strTimeDesc = "领奖剩余时间"
    end
    self.KW_TEXT_ACTIVITY_TIME:setString(strTimeDesc)
end

function LuckyTaskView:onNotifyUnixTime(event)
    self._systemTime = event.data
    XH.lobby:getModule("LuckyTask"):reqTaskList()
end

function LuckyTaskView:initProgressBtn()
    if self._curTask == nil then
        return
    end
    local totalCnt = #self._curTask.content
    local curTotalProgress = self._curTask.progress
    local task_condition = self._curTask.content[totalCnt].target
    self.KW_UI_PROGRESS_PANEL:removeAllChildren()
    self._progressBtns = {}
    -- if totalCnt <= 1 then
    --     self.KW_PROCENT:setPercent(100 * curTotalProgress / task_condition)
    --     return
    -- end

    local tmpProgress = 0
    for i = 1, totalCnt do
        local progressBtn = self.KW_PROGRESS_ITEM:clone()
        if progressBtn ~= nil then
            self.KW_UI_PROGRESS_PANEL:addChild(progressBtn)
            local curLvProgress = self._curTask.content[i].target
            local ratio = i / totalCnt
            local width = self.KW_UI_PROGRESS_PANEL:getContentSize().width
            local beforeProgress = 0
            if i > 1 then
                beforeProgress = self._curTask.content[i - 1].target
            end
            local selectedIndex = 0
            if self._curTask.content[i].draw == 0 then
                if curTotalProgress < curLvProgress then
                    if i > self._curTaskStage then
                        selectedIndex = LuckyTaskDefine.ENUM_LUCKY_TASK_STATE.GO
                    else
                        selectedIndex = LuckyTaskDefine.ENUM_LUCKY_TASK_STATE.UNDERWAY
                    end
                else
                    selectedIndex = LuckyTaskDefine.ENUM_LUCKY_TASK_STATE.AVAILABLE
                end
            else
                selectedIndex = LuckyTaskDefine.ENUM_LUCKY_TASK_STATE.RECEIVED
            end
            local isFinished = false
            if selectedIndex == LuckyTaskDefine.ENUM_LUCKY_TASK_STATE.AVAILABLE or selectedIndex == LuckyTaskDefine.ENUM_LUCKY_TASK_STATE.RECEIVED then
                -- 当前已经完成了
                tmpProgress = tmpProgress + 1 / totalCnt
                isFinished = true
            elseif curTotalProgress > beforeProgress then
                tmpProgress = tmpProgress + ((curTotalProgress - beforeProgress) / (curLvProgress - beforeProgress)) / totalCnt
            end
            local multiple = 1
            local unit = ""
            local str = curLvProgress / multiple .. unit
            if self._curTask.jump.jump == "AC_JUMPTYPE_BY" and self._curTask.actType == "byyx" then
                multiple = 60
                unit = "分钟"
                str = math.ceil(curLvProgress / multiple) .. unit
            end
            if selectedIndex ~= LuckyTaskDefine.ENUM_LUCKY_TASK_STATE.RECEIVED then
                progressBtn:getChildByName("_KW_UI_STEP_TEXT"):setString(str)
            else
                progressBtn:getChildByName("_KW_UI_STEP_TEXT"):setString("已领")
            end
            XH.UITool.enableOutline(progressBtn, "_KW_UI_STEP_TEXT", isFinished and cc.c3b(234, 75, 59) or cc.c3b(177, 128, 92))
            for j = 0, 3 do
                local node = progressBtn:getChildByName("_KW_UI_STEP_IMG_" .. j)
                if node then
                    node:setVisible(j == selectedIndex)
                end
                -- local node = progressBtn:getChildByName("_KW_UI_STEP_IMG_STATE_" .. j)
                -- if node then
                --     node:setVisible(j == selectedIndex)
                -- end
            end
            progressBtn:setPosition(ratio * width, 15)
            progressBtn:setName(i)
            progressBtn:addTouchEventListener(handler(self, self.onClickProgress))
            progressBtn:setVisible(true)
            self._progressBtns[i] = progressBtn
        end
    end
    self.KW_PROCENT:setPercent(100 * tmpProgress)
end

function LuckyTaskView:onClickProgress(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    local idx = send:getName()
    self:refreshAwardBtn(tonumber(idx))
    self:refreshprogressBtnSelectedState()
    self:onTouchBg()
end

function LuckyTaskView:refreshprogressBtnSelectedState()
    for i, btn in pairs(self._progressBtns) do
        -- btn:getChildByName("KW_IMG_STEP_ARR"):setVisible(i == self._curTaskStage)
        for j = 0, 3 do
            local node = btn:getChildByName("_KW_UI_STEP_IMG_" .. j)
            if node then
                node:setScale(i == self._curTaskStage and 1.2 or 1)
            end
        end
    end
    for k,v in pairs(self._arawdItems) do
        -- 选中光圈
        XH.UITool.setVisible(v, "_KW_IMG_CANGET", self._curTaskStage == k)
    end

    -- if self._progressBtns[self._curTaskStage] then
    --     local btnPosX = self._progressBtns[self._curTaskStage]:getPositionX()
    --     local nowBgSize = self._awardListBg:getContentSize()
    --     local maxPosX = 950 - nowBgSize.width/2
    --     local minPosX = 0
    --     local posX = btnPosX
    --     if btnPosX > maxPosX then
    --         posX = maxPosX
    --     elseif btnPosX < minPosX then
    --         posX = minPosX
    --     end
    --     self._awardListBg:setPositionX(posX)
    -- end
end

function LuckyTaskView:refreshAwardItems()
    self._arawdItems = {}
    for k,v in pairs(self._curTask.content) do
        local awardListItem = self:flushAwardItemsNew(v, k)
        table.insert(self._arawdItems, awardListItem)
    end
    self._awardListBgMore:setVisible(false)
end

function LuckyTaskView:refreshAwardBtn(idx)
    self._curTaskStage = idx
    self._curRewards = self._curTask.content[idx].rewards
    local selectedIndex = 0
    if self._curTask.content[idx].draw == 0 then
        if self._curTask.progress < self._curTask.content[idx].target then
            selectedIndex = LuckyTaskDefine.ENUM_LUCKY_TASK_STATE.UNDERWAY
        else
            selectedIndex = LuckyTaskDefine.ENUM_LUCKY_TASK_STATE.AVAILABLE
        end
    else
        selectedIndex = LuckyTaskDefine.ENUM_LUCKY_TASK_STATE.RECEIVED
    end
    self.KW_UI_BTN_GO:setEnabled(self._curTask.content[idx].status ~= LuckyTaskDefine.ContentStatus.AC_BEFORE)
    self.KW_UI_BTN_GO:setVisible(selectedIndex == LuckyTaskDefine.ENUM_LUCKY_TASK_STATE.UNDERWAY)
    self.KW_UI_BTN_AWARD:setVisible(selectedIndex == LuckyTaskDefine.ENUM_LUCKY_TASK_STATE.AVAILABLE)
    self.KW_UI_BTN_DONE:setVisible(selectedIndex == LuckyTaskDefine.ENUM_LUCKY_TASK_STATE.RECEIVED)
end

function LuckyTaskView:onNotifyPageStatus(event)
    for idx, v in pairs(self.KW_CHOOSE_TASK_TAB:getChildren()) do
        if self._luckyInfos[idx].id[1] == event.data.activity_id then
            for i = 1, 5 do
                local node = v:getChildByName("_KW_TAB_ITEM_IMG_" .. i)
                if node ~= nil and LuckyTaskDefine.ContentStatus[event.data.status] then
                    node:setVisible(LuckyTaskDefine.ContentStatus[event.data.status] == i)
                end
            end
        end
    end
end

function LuckyTaskView:onNotifyLuckyClose(event)
    -- self.KW_PANEL_CLOSE_ACT:setVisible(event.data == 1)
    if event.data == 1 then
        self:close()
    end
end

function LuckyTaskView:onTouchBg()
    self:onHideHelp()
    self._awardListBgMore:setVisible(false)
    for i, btn in pairs(self._progressBtns) do
        XH.UITool.setVisible(btn, "KW_IMG_AWARDMORE_ARR", false)
    end
end

function LuckyTaskView:close()
    if self._iconPos then
        local worldSize = cc.Director:getInstance():getWinSize()
        local perX = self._iconPos.x / worldSize.width
        local perY = self._iconPos.y / worldSize.height
        self._blackbg:setVisible(false)
        self._rootLayer:setAnchorPoint(cc.p(perX, perY))
        self._rootLayer:setPosition(cc.p(self._rootLayer:getContentSize().width * perX, self._rootLayer:getContentSize().height * perY))
        self._rootLayer:runAction(cc.Sequence:create(cc.EaseSineOut:create(cc.ScaleTo:create(0.5, 0)), cc.CallFunc:create(function()
            LuckyTaskView.super.close(self)
        end)))
    else
        LuckyTaskView.super.close(self)
    end
end
return LuckyTaskView
