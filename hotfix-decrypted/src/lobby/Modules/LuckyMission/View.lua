-- 主界面
local LuckyMissionView = class("LuckyMissionView", XH.ViewBase)
local LuckyMissionConfig = require("lobby.Modules.LuckyMission.Config")
local ViewAniConfig = require("app.Base.ViewAniConfig")

function LuckyMissionView:getCSBPath()
    return "cocosStudio/hall/CSB/LuckyMission/LuckyMissionView.csb"
end

function LuckyMissionView:getBindingInfo()
    return {
        ["_KW_BTN_CLOSE"] = { varName = "_KW_BTN_CLOSE", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onClickClose" },
        ["_KW_PANEL_LIST_TABS"] = { varName = "_KW_PANEL_LIST_TABS" },
        ["_KW_PANEL_LIST_TASKS_A"] = { varName = "_KW_PANEL_LIST_TASKS_A" },
        ["_KW_SCROLL_LIST_TASK_A"] = { varName = "_KW_SCROLL_LIST_TASK_A" },
        ["_KW_PANEL_LIST_TASKS_B"] = { varName = "_KW_PANEL_LIST_TASKS_B" },
        ["_KW_SCROLL_LIST_TASK_B"] = { varName = "_KW_SCROLL_LIST_TASK_B" },
        ["_KW_PANEL_ITEM_TAB_1"] = { varName = "_KW_PANEL_ITEM_TAB_1", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onClickTab" },
        ["_KW_PANEL_ITEM_TAB_2"] = { varName = "_KW_PANEL_ITEM_TAB_2", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onClickTab" },
        ["_KW_PANEL_ITEM_TAB_3"] = { varName = "_KW_PANEL_ITEM_TAB_3", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onClickTab" },
        ["_KW_PANEL_ITEM_TAB_4"] = { varName = "_KW_PANEL_ITEM_TAB_4", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onClickTab" },
        ["_KW_PANEL_ITEM_TAB_5"] = { varName = "_KW_PANEL_ITEM_TAB_5", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onClickTab" },
        ["_KW_PANEL_ITEM_AWARD"] = { varName = "_KW_PANEL_ITEM_AWARD" },
        ["_KW_PANEL_ITEM_TASK"] = { varName = "_KW_PANEL_ITEM_TASK" },
        ["_KW_NAME"] = { varName = "_KW_NAME" },
        ["_KW_PANEL_PERCENT"] = { varName = "_KW_PANEL_PERCENT" },
        ["_KW_ITEMS_PERCENT"] = { varName = "_KW_ITEMS_PERCENT" },
        ["_KW_LEFT"] = { varName = "_KW_LEFT" },
        ["_KW_PANEL_ITEM_TASK_AWARD"] = { varName = "_KW_PANEL_ITEM_TASK_AWARD" },
        ["_KW_PROGRESS"] = { varName = "_KW_PROGRESS" },
        ["_KW_CUR_PER"] = { varName = "_KW_CUR_PER" },
        ["_KW_PROGRESS_BG"] = { varName = "_KW_PROGRESS_BG" },
        ["_KW_BG"] = { varName = "_KW_BG" },
        ["_KW_ANI_ICONPANEL"] = { varName = "_KW_ANI_ICONPANEL" },
        ["_KW_ANI_ICON"] = { varName = "_KW_ANI_ICON" },
        ["_KW_ANI_PRO"] = { varName = "_KW_ANI_PRO" },
        ["_KW_ANI_BGTOP"] = { varName = "_KW_ANI_BGTOP" },
        ["_KW_PANEL_TOP"] = { varName = "_KW_PANEL_TOP" },
        ["_KW_IMG_NAME"] = { varName = "_KW_IMG_NAME" },
        ["_KW_NO_MISSION_TIP_A"] = { varName = "_KW_NO_MISSION_TIP_A" },
        ["_KW_NO_MISSION_TIP_B"] = { varName = "_KW_NO_MISSION_TIP_B" },
        ["_KW_BG_1"] = { varName = "_KW_BG_1" },
        ["_KW_BG_2"] = { varName = "_KW_BG_2" },
    }
end

function LuckyMissionView:getAniConfig()
    return { aniType = ViewAniConfig.AniName.NORMAL, rootNode = nil, popNode = self._KW_PANEL_TOP, btnList = {} }
end

function LuckyMissionView:getProxyEvents()
    return {
        { module = XH.lobby:getModule("LuckyMission"), eventKeyName = "EVENT_FLUSH_ACT_INFO", callBack = "onEventFlushAct" },
        { module = XH.lobby:getModule("LuckyMission"), eventKeyName = "EVENT_FLUSH_TASK_INFO", callBack = "onEventFlushTask" },
        { module = XH.lobby:getModule("LuckyMission"), eventKeyName = "EVENT_FLUSH_STAGE_INFO", callBack = "onEventFlushStage" },
    }
end

-- 惊喜任务>幸运任务>每日任务>每周任务
function LuckyMissionView:ctor(defaultTag, scene)
    LuckyMissionView.super.ctor(self)
    XH.lobby:getModule("LuckyMission"):setCurScene(scene)
    XH.lobby:getModule("LuckyMission"):setCurTab("")
    XH.SpineManager:playAni(self._KW_ANI_BGTOP, "animation/Lobby/Base/zzb_ty_shanguang/", "zzb_ty_shanguang", "animation", true)
    XH.SpineManager:playAni(self._KW_ANI_ICONPANEL, "animation/Common/", "zzb_ty_xingguang", "animation", true)
    XH.SpineManager:playAni(self._KW_ANI_ICON, "animation/Lobby/Base/zzb_ty_jlliuguang/", "zzb_ty_jlliuguang", "animation", true)
    self:initUI()
end

function LuckyMissionView:reqTabInfo()
    local reqTab = ""
    if XH.lobby:getModule("LuckyMission"):getCurTab() ~= "" then
        reqTab = XH.lobby:getModule("LuckyMission"):getCurTab():getName()
    end
    XH.lobby:getModule("LuckyMission"):luckyMissionInfoReq(reqTab)
end

function LuckyMissionView:initTabs()
    local taskInfo = XH.lobby:getModule("LuckyMission"):getTaskInfo()
    local tabs = taskInfo.pageList or {}
    for i = 1, 5 do
        self["_KW_PANEL_ITEM_TAB_" .. i]:setVisible(tabs[i] ~= nil)
        if tabs[i] then
            self["_KW_PANEL_ITEM_TAB_" .. i]:setName(tabs[i].name or "")
            self["_KW_PANEL_ITEM_TAB_" .. i]:getChildByName("KW_CLICK_ITTEM"):getChildByName("KW_TEXT_TAB"):setString(tabs[i].pageDesc or "")
            self["_KW_PANEL_ITEM_TAB_" .. i]:getChildByName("KW_CLICK_TAB"):getChildByName("KW_TEXT_TAB"):setString(tabs[i].pageDesc or "")
        end
    end
    if XH.lobby:getModule("LuckyMission"):getCurTab() == "" then
        XH.lobby:getModule("LuckyMission"):setCurTab(self._KW_PANEL_ITEM_TAB_1)
    end
    self:flushTabsState(true)
    local activeStages = ""
    local activeValues = ""
    if taskInfo.actPointInfo and taskInfo.actPointInfo.actPoint and #taskInfo.actPointInfo.actPoint > 0 then
        activeStages = taskInfo.actPointInfo.point
        for i = 1, #taskInfo.actPointInfo.actPoint do
            activeValues = activeValues .. taskInfo.actPointInfo.actPoint[i].pointTarget .. ","
        end
    end
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.oh25092203, { page = XH.lobby:getModule("LuckyMission"):getCurScene(), item_id = activeValues, page_item_id = activeStages, block_label = XH.lobby:getModule("LuckyMission"):getCurTab():getName() })
end

function LuckyMissionView:onClickTab(send, eventType)
    local clickName = send:getName()
    XH.lobby:getModule("LuckyMission"):setCurTab(send)
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.oh25092206, { page = XH.lobby:getModule("LuckyMission"):getCurScene(), block_label = send:getName() })
    self:flushTabsState()
end

function LuckyMissionView:flushTabsState(unReq)
    local tabs = XH.lobby:getModule("LuckyMission"):getTaskInfo()
    for i = 1, 5 do
        self["_KW_PANEL_ITEM_TAB_" .. i]:getChildByName("KW_CLICK_TAB"):setVisible(XH.lobby:getModule("LuckyMission"):getCurTab() == self["_KW_PANEL_ITEM_TAB_" .. i])
        self["_KW_PANEL_ITEM_TAB_" .. i]:setTouchEnabled(XH.lobby:getModule("LuckyMission"):getCurTab() ~= self["_KW_PANEL_ITEM_TAB_" .. i])
    end
    if not unReq then
        self:reqTabInfo()
    end
end

function LuckyMissionView:initUI()
    XH.lobby:getModule("LuckyMission"):luckyMissionInfoReq()
end

function LuckyMissionView:onClickClose()
    self:close()
end

-- 刷新红点
function LuckyMissionView:onEventFlushAct()
    for i = 1, 5 do
        self["_KW_PANEL_ITEM_TAB_" .. i]:getChildByName("KW_REDPOINT"):setVisible(XH.lobby:getModule("LuckyMission"):isShowRedPointByTabID(i)) -- todo
    end
end

-- 刷新任务
function LuckyMissionView:onEventFlushTask()
    self:initTabs()
    self:onEventFlushAct()
    local info = XH.lobby:getModule("LuckyMission"):getTaskInfo()
    local showStageInfo = info.actPointInfo or {}
    local isShowStage = showStageInfo.actPoint and #showStageInfo.actPoint > 0-- 是否展示阶段任务
    self._KW_PANEL_LIST_TASKS_A:setVisible(isShowStage)
    self._KW_PANEL_LIST_TASKS_B:setVisible(not isShowStage)
    if isShowStage then
        self:flushTaskWithStage()
    else
        self:flushTask()
    end
    local tabs = XH.lobby:getModule("LuckyMission"):getTaskInfo()
    local showConfig, showTask = self:getCurTabConfig()
    if showConfig and showTask then
        self._KW_IMG_NAME:setVisible(showTask.titleImage ~= "")
        self._KW_NAME:setVisible(showTask.titleImage == "")
        if showTask.titleImage ~= "" then
            XH.lobby:getModule("LuckyMission"):setImgUrl(self._KW_IMG_NAME, showTask.titleImage)
        end
        if showTask.TAB_NAME == "" then
            self._KW_NAME:setVisible(false)
        end
        self._KW_NAME:loadTexture(showConfig.TITLE_IMG, ccui.TextureResType.plistType)
        self._KW_BG_1:loadTexture(showConfig.BG_IMG_TASK, ccui.TextureResType.plistType)
        self._KW_BG_2:loadTexture(showConfig.BG_IMG_TASK, ccui.TextureResType.plistType)
        self._KW_BG:loadTexture(showConfig.BG_IMG, ccui.TextureResType.localType)
        self._KW_BG:setVisible(true)
    end
    self:flushLeft()
end

function LuckyMissionView:onEventFlushStage()
    self:onEventFlushAct()
    self:flushTaskWithStage()
end

function LuckyMissionView:getCurTabConfig()
    local tabConfig = LuckyMissionConfig.TAB_INFO[LuckyMissionConfig.TAB_LIST.CUSTOM]
    local showTask = nil
    local taskInfo = XH.lobby:getModule("LuckyMission"):getTaskInfo()
    local tabs = taskInfo.pageList or {}
    for i = 1, 5 do
        if XH.lobby:getModule("LuckyMission"):getCurTab() == self["_KW_PANEL_ITEM_TAB_" .. i] then
            showTask = tabs[i]
            local curTab = tabs[i]
            for j = 1, #LuckyMissionConfig.TAB_INFO do
                if LuckyMissionConfig.TAB_INFO[j].TAB_NAME == curTab.pageDesc then
                    tabConfig = LuckyMissionConfig.TAB_INFO[j]
                    break
                end
            end
        end
    end
    return tabConfig, showTask
end

function LuckyMissionView:flushTaskWithStage()
    self:showTaskLists(self._KW_SCROLL_LIST_TASK_A)
    local info = XH.lobby:getModule("LuckyMission"):getTaskInfo()
    local showStageInfo = info.actPointInfo or {}
    self._KW_ITEMS_PERCENT:removeAllChildren()
    local stageInfos = {}
    local curPer = showStageInfo.point
    self._KW_CUR_PER:setString(curPer)
    local stageLen = #showStageInfo.actPoint
    for i = 1, stageLen do
        stageInfos[#stageInfos + 1] = {
            imgUrl = showStageInfo.actPoint[i].rewards[1].icon,
            propCnt = XH.lobby:getModule("LuckyMission"):getPropCntByInfo(showStageInfo.actPoint[i].rewards[1]),
            targetValue = showStageInfo.actPoint[i].pointTarget,
            isGet = showStageInfo.actPoint[i].isGet,
        }
    end
    for i = 1, stageLen do
        local item = self._KW_PANEL_ITEM_AWARD:clone()
        local isFullStage = curPer >= stageInfos[i].targetValue
        local showConfig = self:getCurTabConfig()
        if showConfig then
            item:getChildByName("KW_UN_STAGE"):setColor(showConfig.PROGRESS_CLOLOR)
            self._KW_PROGRESS_BG:setColor(showConfig.PROGRESS_CLOLOR)
        end
        item:setName(i)
        item:setVisible(true)
        item:getChildByName("KW_IS_GET"):setVisible(stageInfos[i].isGet == 1)
        item:getChildByName("KW_IMG_AWARD"):setVisible(isFullStage)
        item:getChildByName("KW_IMG_STAGE"):setVisible(isFullStage)
        item:getChildByName("KW_CNT"):setString("x" .. stageInfos[i].propCnt)
        item:getChildByName("KW_STAGE"):setString(stageInfos[i].targetValue)
        item:addTouchEventListener(handler(self, self.onTouchStageItem))
        local aniNode = item:getChildByName("KW_ANI")
        if aniNode:getChildrenCount() == 0 then
            XH.SpineManager:playAni(aniNode, "res/animation/Lobby/Base/zzb_jbdt_gxhd/", "zzb_ty_xxgx", "animation", true)
        end
        aniNode:setVisible(stageInfos[i].isGet == 0 and curPer >= stageInfos[i].targetValue)
        XH.lobby:getModule("LuckyMission"):setImgUrl(item:getChildByName("KW_PROP"), stageInfos[i].imgUrl)
        item:setPosition(self._KW_ITEMS_PERCENT:getContentSize().width / stageLen * i, self._KW_ITEMS_PERCENT:getContentSize().height / 2)
        self._KW_ITEMS_PERCENT:addChild(item)
    end
    local showPer
    for i = 1, stageLen do
        local showUIPer = 100 / stageLen
        local index = stageLen - i
        if index == 0 then
            showPer = curPer / stageInfos[index + 1].targetValue * showUIPer
            break
        elseif curPer >= stageInfos[index].targetValue then
            showPer = showUIPer * index + (curPer - stageInfos[index].targetValue) / (stageInfos[index + 1].targetValue - stageInfos[index].targetValue) * showUIPer
            if showPer > 100 then
                showPer = 100
            end
            break
        end
    end
    self._KW_PROGRESS:setPercent(showPer)
    if self._KW_ANI_PRO:getChildrenCount() == 0 then
        XH.SpineManager:playAni(self._KW_ANI_PRO, "animation/Lobby/Base/zzb_ty_jdtgd/", "zzb_ty_jdtgd", "animation", true)
    end
    self._KW_ANI_PRO:setPositionX(self._KW_PROGRESS:getContentSize().width * showPer / 100)
end

function LuckyMissionView:onTouchStageItem(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    local index = tonumber(send:getName())
    local info = XH.lobby:getModule("LuckyMission"):getTaskInfo()
    local showStageInfo = info.actPointInfo or {}
    local stageInfos = showStageInfo.actPoint
    local curPer = showStageInfo.point
    if stageInfos[index].isGet == 0 and curPer >= stageInfos[index].pointTarget then
        XH.lobby:getModule("LuckyMission"):luckyMissionStageAwardReq(XH.lobby:getModule("LuckyMission"):getCurTab():getName(), stageInfos[index].pointTarget)
        XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.oh25092205, { page = XH.lobby:getModule("LuckyMission"):getCurScene(), item_id = index, page_item_id = stageInfos[index].pointTarget })
    end
end

function LuckyMissionView:flushTask()
    self:showTaskLists(self._KW_SCROLL_LIST_TASK_B)
end

function LuckyMissionView:getShowTaskInfo()
    local endTaskInfos = {}
    local unEndTaskInfos = {}
    self._curTaskInfos = {}
    local serverTime = XH.lobby:getModule("Shop"):getServerTime()
    local info = XH.lobby:getModule("LuckyMission"):getTaskInfo()
    local curTaskInfo = info.boxList or {}
    for i = 1, #curTaskInfo do
        if tonumber(curTaskInfo[i].endTime) >= tonumber(serverTime) then
            if curTaskInfo[i].content[1].draw == 0 and curTaskInfo[i].progress >= curTaskInfo[i].content[1].target then
                self._curTaskInfos[#self._curTaskInfos + 1] = curTaskInfo[i]
            elseif curTaskInfo[i].content[1].draw == 1 then
                endTaskInfos[#endTaskInfos + 1] = curTaskInfo[i]
            else
                unEndTaskInfos[#unEndTaskInfos + 1] = curTaskInfo[i]
            end
        end
    end
    for i = 1, #unEndTaskInfos do
        self._curTaskInfos[#self._curTaskInfos + 1] = unEndTaskInfos[i]
    end
    for i = 1, #endTaskInfos do
        self._curTaskInfos[#self._curTaskInfos + 1] = endTaskInfos[i]
    end
    return self._curTaskInfos
end

function LuckyMissionView:showTaskLists(node)
    self._KW_SCROLL_LIST_TASK_B:setVisible(self._KW_SCROLL_LIST_TASK_B == node)
    self._KW_SCROLL_LIST_TASK_A:setVisible(self._KW_SCROLL_LIST_TASK_A == node)
    node:removeAllChildren()
    node:setScrollBarOpacity(0)
    local showTaskInfo = self:getShowTaskInfo()
    local taskLen = #showTaskInfo
    self._KW_NO_MISSION_TIP_A:setVisible(taskLen == 0)
    self._KW_NO_MISSION_TIP_B:setVisible(taskLen == 0)
    local innerheight = self._KW_PANEL_ITEM_TASK:getContentSize().height * taskLen
    if innerheight < node:getContentSize().height then
        innerheight = node:getContentSize().height
    end
    node:setInnerContainerSize(cc.size(node:getContentSize().width, innerheight))
    for i = 1, taskLen do
        local canReward = showTaskInfo[i].content[1].draw == 0 and showTaskInfo[i].progress >= showTaskInfo[i].content[1].target
        local isReward = showTaskInfo[i].content[1].draw == 1
        local item = self._KW_PANEL_ITEM_TASK:clone()
        item:setVisible(true)
        item:setName(i)
        local awardList = item:getChildByName("KW_PANEL_ITEMS")
        awardList:removeAllChildren()
        awardList:setScrollBarOpacity(0)
        local showAwardLen = #showTaskInfo[i].content[1].rewards
        local showActPoint = showTaskInfo[i].content[1].actPoint
        if showActPoint ~= 0 then
            showAwardLen = showAwardLen + 1
        end
        local innerWidth = self._KW_PANEL_ITEM_TASK_AWARD:getContentSize().width * showAwardLen
        if innerWidth < awardList:getContentSize().width then
            innerWidth = awardList:getContentSize().width
        end
        awardList:setInnerContainerSize(cc.size(innerWidth, awardList:getContentSize().height))
        if showActPoint ~= 0 then
            local awardItem = self._KW_PANEL_ITEM_TASK_AWARD:clone()
            awardItem:setVisible(true)
            awardItem:getChildByName("KW_CNT"):setString("x" .. showActPoint)
            awardItem:getChildByName("KW_IMG_ACT"):setVisible(true)
            awardItem:getChildByName("KW_PROP"):setVisible(false)
            awardItem:setPosition(awardItem:getContentSize().width * 0.5, awardList:getContentSize().height / 2)
            awardList:addChild(awardItem)
        end
        local startAwardIndex = showActPoint ~= 0 and 1 or 0
        for j = 1, #showTaskInfo[i].content[1].rewards do
            local awardInfo = showTaskInfo[i].content[1].rewards[j]
            local awardItem = self._KW_PANEL_ITEM_TASK_AWARD:clone()
            awardItem:getChildByName("KW_IMG_ACT"):setVisible(false)
            awardItem:getChildByName("KW_PROP"):setVisible(true)
            awardItem:setVisible(true)
            awardItem:getChildByName("KW_CNT"):setString("x" .. XH.lobby:getModule("LuckyMission"):getPropCntByInfo(awardInfo))
            XH.lobby:getModule("LuckyMission"):setImgUrl(awardItem:getChildByName("KW_PROP"), awardInfo.icon)
            awardItem:setPosition(awardItem:getContentSize().width * (j + startAwardIndex - 0.5), awardList:getContentSize().height / 2)
            awardList:addChild(awardItem)
        end
        item:getChildByName("KW_UNFINISH"):setVisible(showTaskInfo[i].progress < showTaskInfo[i].content[1].target) -- 是否是进行中任务
        local showTaskPer = showTaskInfo[i].progress / showTaskInfo[i].content[1].target * 100
        if showTaskPer > 100 then
            showTaskPer = 100
        end
        -- 充值任务以分展示
        local ratio = (showTaskInfo[i].actType == 'lyrecharge' or showTaskInfo[i].actType == "chongzhifen") and 100 or 1
        item:getChildByName("KW_PROGRESS"):setPercent(showTaskPer)
        item:getChildByName("KW_LEFT"):setString("剩余:" .. self:calcShowLeft(showTaskInfo[i].endTime))  -- 限时任务
        item:getChildByName("KW_LEFT"):setVisible(tonumber(self:getCurTabLeftTime()) ~= tonumber(showTaskInfo[i].endTime))
        item:getChildByName("KW_LEFT_TIME"):setVisible(tonumber(self:getCurTabLeftTime()) ~= tonumber(showTaskInfo[i].endTime))
        item:getChildByName("KW_TASK_NAME"):setString(showTaskInfo[i].intro)
        XH.UITool.adaptTextToWidth(item:getChildByName("KW_TASK_NAME"), 530, 40, 5)
        item:getChildByName("KW_TASK_TARGET"):setString("/" .. showTaskInfo[i].content[1].target / ratio)
        item:getChildByName("KW_TASK_CUR"):setString(showTaskInfo[i].progress / ratio)
        item:getChildByName("KW_TASK_CUR"):setPositionX(item:getChildByName("KW_TASK_TARGET"):getPositionX() - item:getChildByName("KW_TASK_TARGET"):getContentSize().width)
        item:getChildByName("KW_BTN_GET"):setVisible(canReward) -- 待领取
        if item:getChildByName("KW_BTN_GET"):getChildByName("KW_ANI"):getChildrenCount() == 0 then
            XH.SpineManager:playAni(item:getChildByName("KW_BTN_GET"):getChildByName("KW_ANI"), "res/animation/Common/", "zzb_ty_ansg", "animation", true)
        end
        item:getChildByName("KW_BTN_GO"):setVisible(not canReward and not isReward)  -- 去完成
        item:getChildByName("KW_BTN_FINISH"):setVisible(isReward)  -- 已完成
        item:getChildByName("KW_BTN_GET"):addTouchEventListener(handler(self, self.onTouchTaskAwardItem))
        item:getChildByName("KW_BTN_GO"):addTouchEventListener(handler(self, self.onTouchTaskGoItem))
        item:setPosition(node:getContentSize().width / 2, innerheight - self._KW_PANEL_ITEM_TASK:getContentSize().height * (i - 0.5))
        node:addChild(item)
    end
end

-- 领奖
function LuckyMissionView:onTouchTaskAwardItem(send, eventType)
    if eventType == ccui.TouchEventType.began then
        send:setScale(0.9)
        send:setColor(cc.c3b(160, 160, 160))
    elseif eventType == ccui.TouchEventType.ended or eventType == ccui.TouchEventType.canceled then
        send:setScale(1)
        send:setColor(cc.c3b(255, 255, 255))
    end
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    local index = tonumber(send:getParent():getName())
    if self._curTaskInfos == nil or self._curTaskInfos[index] == nil then
        return
    end
    XH.lobby:getModule("LuckyMission"):luckyMissionAwardReq(self._curTaskInfos[index])
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.oh25092204, { page = XH.lobby:getModule("LuckyMission"):getCurScene(), item_id = index, page_item_id = self._curTaskInfos[index].activityId, block_item_id = "领取" })
end

-- 跳转
function LuckyMissionView:onTouchTaskGoItem(send, eventType)
    if eventType == ccui.TouchEventType.began then
        send:setScale(0.9)
        send:setColor(cc.c3b(160, 160, 160))
    elseif eventType == ccui.TouchEventType.ended or eventType == ccui.TouchEventType.canceled then
        send:setScale(1)
        send:setColor(cc.c3b(255, 255, 255))
    end
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    local index = tonumber(send:getParent():getName())
    if self._curTaskInfos == nil or self._curTaskInfos[index] == nil then
        return
    end
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.oh25092204, { page = XH.lobby:getModule("LuckyMission"):getCurScene(), item_id = index, page_item_id = self._curTaskInfos[index].activityId, block_item_id = "去完成" })
    if CF and CF.isInGameScene() then
        XH.TipTool.showToast("亲，请根据任务要求去特定场景完成呦~")
        return
    end
    local jumpType = self._curTaskInfos[index].jump.jump
    local gameid = self._curTaskInfos[index].jump.gameId
    if self._curTaskInfos[index].actType == "denglu" and self._curTaskInfos[index].jump.jump == "AC_JUMPTYPE_NULL" then
        jumpType = "AC_JUMPTYPE_LOGIN"
    end
    if LuckyMissionConfig.JumpType[jumpType] == LuckyMissionConfig.JumpType.AC_JUMPTYPE_SHARE then
        XH.lobby:getModule("LuckyTask"):setShareTask(self._curTaskInfos[index])
    end
    XH.lobby:getModule("LuckyMission"):notifyLuckyTaskJoin(jumpType, gameid)
    if self and not tolua.isnull(self) and type(self.close) == "function" then
        self:close()
    end
end

function LuckyMissionView:flushLeft()
    self:removeLeftSchedule()
    self:showLeftSchedule()
    self._listener = cc.Director:getInstance():getScheduler():scheduleScriptFunc(function()
        if not self or tolua.isnull(self) then
            return
        end
        self:showLeftSchedule()
    end, 1, false)
end

function LuckyMissionView:onCleanup()
    XH.lobby:getModule("LuckyMission"):setCurTab("")
    self:removeLeftSchedule()
    LuckyMissionView.super.onCleanup(self)
end

function LuckyMissionView:removeLeftSchedule()
    if self._listener then
        cc.Director:getInstance():getScheduler():unscheduleScriptEntry(self._listener)
    end
    self._listener = nil
end

function LuckyMissionView:getCurTabLeftTime()
    local info = XH.lobby:getModule("LuckyMission"):getTaskInfo()
    for i = 1, #info.pageList do
        if XH.lobby:getModule("LuckyMission"):getCurTab() ~= "" and info.pageList[i].name == XH.lobby:getModule("LuckyMission"):getCurTab():getName() then
            return info.pageList[i].endTime
        end
    end
    return 0
end

-- 倒计时展示
function LuckyMissionView:showLeftSchedule()
    local leftTime = self:getCurTabLeftTime()
    local serverTime = XH.lobby:getModule("Shop"):getServerTime()
    local info = XH.lobby:getModule("LuckyMission"):getTaskInfo()
    local isFlushShow = false
    -- 各个子任务倒计时计算
    local calList = self._KW_SCROLL_LIST_TASK_B:isVisible() and self._KW_SCROLL_LIST_TASK_B or self._KW_SCROLL_LIST_TASK_A
    for i = 1, #calList:getChildren() do
        local taskItem = self._curTaskInfos[i]
        local calcTime = taskItem.endTime
        if tonumber(taskItem.endTime) < tonumber(serverTime) then
            if taskItem.content[1].draw == 0 and taskItem.progress >= taskItem.content[1].target and taskItem.drawDeadline and tonumber(taskItem.drawDeadline) >= tonumber(serverTime) and tonumber(taskItem.endTime) < tonumber(serverTime) then
                calcTime = taskItem.drawDeadline
            else
                isFlushShow = true
            end
        end
        calList:getChildren()[i]:getChildByName("KW_LEFT"):setString("剩余:" .. self:calcShowLeft(taskItem.endTime))
        if tonumber(taskItem.startTime) >= tonumber(serverTime) then
            calList:getChildren()[i]:getChildByName("KW_LEFT"):setString("距离开始:" .. self:calcShowLeft(taskItem.startTime))
        end
    end
    if tonumber(leftTime) <= tonumber(serverTime) then
        if not self._flushReq then
            XH.lobby:getModule("LuckyMission"):luckyMissionBaseReq()
            self._flushReq = true
        end
        self._KW_LEFT:setString("活动剩余:00:00:00")
        return
    end
    self._KW_LEFT:setString("活动剩余:" .. self:calcShowLeft(leftTime))
    if isFlushShow then
        self:onEventFlushTask()
    end
end

function LuckyMissionView:calcShowLeft(endTime)
    local serverTime = XH.lobby:getModule("Shop"):getServerTime()
    local left = tonumber(endTime) - serverTime
    if left < 0 then
        return "00:00:00"
    end
    -- 判断是否为长期任务
    local showTime = ""
    local leftDay = math.floor(left / 86400)
    local leftHour = math.floor((left % 86400) / 3600)
    local leftMin = math.floor((left % 3600) / 60)
    local leftSec = left % 60
    if leftDay > 0 then
        showTime = leftDay .. "天"
    end
    showTime = showTime .. string.format("%02d:%02d:%02d", leftHour, leftMin, leftSec)
    return showTime
end

function LuckyMissionView:onEnter()
    LuckyMissionView.super.onEnter(self)
    self._startTime = socket.gettime()
end

function LuckyMissionView:onExit()
    -- XH.lobby:getModule("NewYear2026"):addShowTime(socket.gettime() - self._startTime)
    LuckyMissionView.super.onExit(self)
end
return LuckyMissionView�i  