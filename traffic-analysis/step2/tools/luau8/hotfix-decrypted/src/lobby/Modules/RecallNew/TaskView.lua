-- 回归任务
local RecallNewTaskView = class("RecallNewTaskView", XH.ViewBase)
local RecallNewConfig = require("lobby.Modules.RecallNew.Config")

local PROGRESS_POSITION = {
    cc.p(917, 770),
    cc.p(1155, 770),
    cc.p(1396, 770),
    cc.p(1636, 770),
}

function RecallNewTaskView:getCSBPath()
    return "cocosStudio/hall/CSB/RecallNew/RecallNewTask.csb"
end

function RecallNewTaskView:getBindingInfo()
    return {
        ["_KW_ACTIVE_TODAY"] = { varName = "_KW_ACTIVE_TODAY" },
        ["_KW_PANEL_PROGRESS"] = { varName = "_KW_PANEL_PROGRESS" },
        ["_KW_TASKS"] = { varName = "_KW_TASKS" },
        ["_KW_DAYS"] = { varName = "_KW_DAYS" },
        ["_KW_PANEL_PROGRESS_ITEM"] = { varName = "_KW_PANEL_PROGRESS_ITEM" },
        ["_KW_PANEL_TASK_ITEM"] = { varName = "_KW_PANEL_TASK_ITEM" },
        ["_KW_PANEL_DAY_ITEM"] = { varName = "_KW_PANEL_DAY_ITEM" },
        ["_KW_STAGE_PER"] = { varName = "_KW_STAGE_PER" },
        ["_KW_ANI_ACTIVE"] = { varName = "_KW_ANI_ACTIVE" },
        ["_KW_ANI_PRO"] = { varName = "_KW_ANI_PRO" },
        ["_KW_ANI_ICONZ"] = { varName = "_KW_ANI_ICONZ" },
        ["_KW_STAGE_PER_1"] = { varName = "_KW_STAGE_PER_1" },
        ["_KW_STAGE_PER_2"] = { varName = "_KW_STAGE_PER_2" },
        ["_KW_STAGE_PER_3"] = { varName = "_KW_STAGE_PER_3" },
        ["_KW_STAGE_PER_4"] = { varName = "_KW_STAGE_PER_4" },
        ["_KW_TEXT_PER_1"] = { varName = "_KW_TEXT_PER_1" },
        ["_KW_TEXT_PER_2"] = { varName = "_KW_TEXT_PER_2" },
        ["_KW_TEXT_PER_3"] = { varName = "_KW_TEXT_PER_3" },
        ["_KW_TEXT_PER_4"] = { varName = "_KW_TEXT_PER_4" },
    }
end

function RecallNewTaskView:getProxyEvents()
    return {
        { module = XH.lobby:getModule("RecallNew"), eventKeyName = "EVENT_FLUSH_ACT_TASK", callBack = "flushActInfo" },
    }
end

function RecallNewTaskView:flushActInfo()
    self:flushUI()
end

function RecallNewTaskView:showDays(info)
    self._KW_DAYS:removeAllChildren()
    for i = info.startDay, info.endDay do
        local dayItem = self._KW_PANEL_DAY_ITEM:clone()
        dayItem:setVisible(true)
        dayItem:setName(i)
        dayItem:getChildByName("KW_DAY"):setString("第" .. i .. "天")
        dayItem:setPosition(cc.p(dayItem:getContentSize().width * (i - info.startDay + 0.5) - i + info.startDay, self._KW_DAYS:getContentSize().height / 2))
        dayItem:addTouchEventListener(handler(self, self.onTouchDayItem))
        local xzNode = dayItem:getChildByName("KW_XZ")
        if i == info.startDay then
            xzNode:loadTexture("hghl_btn_xz.png", ccui.TextureResType.plistType)
        elseif i == info.endDay then
            xzNode:loadTexture("hghl_btn_xz2.png", ccui.TextureResType.plistType)
        else
            xzNode:loadTexture("hghl_btn_xz3.png", ccui.TextureResType.plistType)
        end
        xzNode:setVisible(i == info.curDay)
        local wxzNode = dayItem:getChildByName("KW_WXZ")
        wxzNode:setVisible(i ~= info.curDay and i ~= info.endDay)
        local dayNode = dayItem:getChildByName("KW_DAY")
        dayNode:setTextColor(i == info.curDay and cc.c3b(60, 55, 71) or cc.c3b(203, 203, 203))
        dayNode:setFontSize(i == info.curDay and 34 or 32)
        self._KW_DAYS:addChild(dayItem)
    end
end

function RecallNewTaskView:showAwards(info)
    self._KW_PANEL_PROGRESS:removeAllChildren()
    for i = 1, #info.stageInfos do
        if self["_KW_TEXT_PER_" .. i] then
            self["_KW_TEXT_PER_" .. i]:setString(info.stageInfos[i].targetValue)
        end
        if self["_KW_STAGE_PER_" .. i] then
            self["_KW_STAGE_PER_" .. i]:setVisible(info.stageInfos[i].status ~= RecallNewConfig.ReBackStatus.ReStatus_None)
        end
        local progressItem = self._KW_PANEL_PROGRESS_ITEM:clone()
        progressItem:setVisible(true)
        if info.stageInfos[i].props and info.stageInfos[i].props[1] then
            XH.lobby:getModule("RecallNew"):setImgUrl(progressItem:getChildByName("KW_PROPS"), info.stageInfos[i].props[1].icon)
            progressItem:getChildByName("KW_TEXT_NAME"):setString(XH.lobby:getModule("RecallNew"):getPropCntByInfo(info.stageInfos[i].props[1], true, "x"))
        end
        progressItem:getChildByName("KW_CAN_GET"):setVisible(info.stageInfos[i].status ~= RecallNewConfig.ReBackStatus.ReStatus_None)
        progressItem:getChildByName("KW_IMG_BLACK_2"):setVisible(info.stageInfos[i].status == RecallNewConfig.ReBackStatus.ReStatus_Rewarded)
        progressItem:getChildByName("KW_IMG_BLACK"):setVisible(info.stageInfos[i].status == RecallNewConfig.ReBackStatus.ReStatus_Rewarded)
        progressItem:setName(info.stageInfos[i].index)
        progressItem:setPosition(PROGRESS_POSITION[i])
        progressItem:addTouchEventListener(handler(self, self.onTouchProgressItem))
        local aniNode = progressItem:getChildByName("KW_ANI")
        if aniNode:getChildrenCount() == 0 then
            XH.SpineManager:playAni(aniNode, "res/animation/Lobby/Base/zzb_jbdt_gxhd/", "zzb_ty_xxgx", "animation", true)
        end
        aniNode:setVisible(info.stageInfos[i].status == RecallNewConfig.ReBackStatus.ReStatus_Can_Reward)
        self._KW_PANEL_PROGRESS:addChild(progressItem)
    end
    -- 进度条算法修改，每段单独计算
    local showUIPer = { 22.6, 48.6, 75, 100 }
    local showPer = 0
    local curPer = info.todayActive
    local per1 = info.stageInfos[1].targetValue
    local per2 = info.stageInfos[2].targetValue
    local per3 = info.stageInfos[3].targetValue
    local per4 = info.stageInfos[4].targetValue
    if curPer >= per3 then
        showPer = showUIPer[3] + (curPer - per3) / (per4 - per3) * (showUIPer[4] - showUIPer[3])
    elseif curPer >= per2 then
        showPer = showUIPer[2] + (curPer - per2) / (per3 - per2) * (showUIPer[3] - showUIPer[2])
    elseif curPer >= per1 then
        showPer = showUIPer[1] + (curPer - per1) / (per2 - per1) * (showUIPer[2] - showUIPer[1])
    else
        showPer = curPer / per1 * showUIPer[1]
    end
    if showPer > 100 then
        showPer = 100
    end
    self._KW_STAGE_PER:setPercent(showPer)
    if self._KW_ANI_PRO:getChildrenCount() == 0 then
        XH.SpineManager:playAni(self._KW_ANI_PRO, "animation/Lobby/Base/zzb_ty_jdtgd/", "zzb_ty_jdtgd", "animation", true)
    end
    self._KW_ANI_PRO:setPositionX(self._KW_STAGE_PER:getContentSize().width * showPer / 100)
end

function RecallNewTaskView:showTasks(info)
    self._KW_TASKS:setScrollBarOpacity(0)
    local showTasks = info.taskInfos
    local maxHeight = math.floor(self._KW_TASKS:getContentSize().height / self._KW_PANEL_TASK_ITEM:getContentSize().height)
    if #showTasks > maxHeight then
        maxHeight = #showTasks
    end
    self._KW_TASKS:removeAllChildren()
    local innerHeight = self._KW_PANEL_TASK_ITEM:getContentSize().height * maxHeight
    self._KW_TASKS:setInnerContainerSize(cc.size(self._KW_TASKS:getContentSize().width, innerHeight))
    for i = 1, #showTasks do
        local taskItem = self._KW_PANEL_TASK_ITEM:clone()
        taskItem:getChildByName("KW_BG"):loadTexture(showTasks[i].status == RecallNewConfig.ReBackStatus.ReStatus_None and "hghl_Img_rw1.png" or "hghl_Img_rw2.png", ccui.TextureResType.plistType)
        taskItem:setName(showTasks[i].taskId)
        local textNode = taskItem:getChildByName("KW_BTN_GO"):getChildByName("KW_TEXT")
        local bgNode = taskItem:getChildByName("KW_BTN_GO"):getChildByName("KW_IMG")
        local aniBtnNode = taskItem:getChildByName("KW_BTN_GO"):getChildByName("KW_ANI")
        if aniBtnNode:getChildrenCount() == 0 then
            XH.SpineManager:playAni(aniBtnNode, "res/animation/Common/", "zzb_ty_ansg", "animation", true)
        end
        aniBtnNode:setVisible(showTasks[i].status == RecallNewConfig.ReBackStatus.ReStatus_Can_Reward)
        if showTasks[i].status == RecallNewConfig.ReBackStatus.ReStatus_None then
            textNode:setString("去完成")
            textNode:setTextColor(cc.c3b(35, 102, 159))
            bgNode:loadTexture("hghl_btn_lans.png", ccui.TextureResType.plistType)
        elseif showTasks[i].status == RecallNewConfig.ReBackStatus.ReStatus_Can_Reward then
            textNode:setString("立即领取")
            textNode:setTextColor(cc.c3b(166, 74, 0))
            bgNode:loadTexture("hghl_btn_huang.png", ccui.TextureResType.plistType)
        else
            textNode:setString("已领取")
            textNode:setTextColor(cc.c3b(93, 93, 93))
            bgNode:loadTexture("hghl_btn_hui.png", ccui.TextureResType.plistType)
        end
        taskItem:getChildByName("KW_PER"):setPercent(showTasks[i].currentValue * 100 / showTasks[i].targetValue)
        local textNode1 = taskItem:getChildByName("KW_TASK_NAME")
        local textNode2 = taskItem:getChildByName("KW_TASK_NAME_PER")
        local textNode3 = taskItem:getChildByName("KW_TASK_NAME_R")
        textNode1:setString(self:getStringByTask(showTasks[i]) .. "（")
        textNode2:setString(showTasks[i].currentValue)
        textNode3:setString("/" .. showTasks[i].targetValue .. "）")
        textNode2:setPositionX(textNode1:getContentSize().width + 33)
        textNode3:setPositionX(textNode2:getPositionX() + textNode2:getContentSize().width)
        taskItem:getChildByName("KW_ACTIVE"):setString("x" .. showTasks[i].activeValue)
        if showTasks[i].props and #showTasks[i].props > 0 then
            taskItem:getChildByName("KW_PROP_EX"):setVisible(true)
            taskItem:getChildByName("KW_PROP_EX"):getChildByName("KW_PROP_EX_COUNT"):setString(XH.lobby:getModule("RecallNew"):getPropCntByInfo(showTasks[i].props[1], true, "x"))
            XH.lobby:getModule("RecallNew"):setImgUrl(taskItem:getChildByName("KW_PROP_EX"):getChildByName("KW_PROP_EX_IMG"), showTasks[i].props[1].icon)
        end
        if showTasks[i].status ~= RecallNewConfig.ReBackStatus.ReStatus_Rewarded then
            taskItem:getChildByName("KW_BTN_GO"):addTouchEventListener(handler(self, self.onTouchTaskItem))
        end
        taskItem:setVisible(true)
        taskItem:setPosition(cc.p(self._KW_TASKS:getContentSize().width / 2, innerHeight - taskItem:getContentSize().height * (i - 1)))
        local aniIconNode = taskItem:getChildByName("KW_ANI_ICONZ")
        if aniIconNode:getChildrenCount() == 0 then
            XH.SpineManager:playAni(aniIconNode, "res/animation/Lobby/Base/zzb_ty_jlliuguang/", "zzb_ty_jlliuguang", "animation", true)
        end
        self._KW_TASKS:addChild(taskItem)
    end
    self._KW_TASKS:scrollToTop(0, false)
end

function RecallNewTaskView:flushUI()
    local info = XH.lobby:getModule("RecallNew"):getTaskInfo()
    if info.todayActive then
        if not self._isReport then
            XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.oh25080606, { page_item_id = "回归任务", page = XH.lobby:getModule("RecallNew"):getCurScene() }, { count = XH.lobby:getModule("RecallNew"):getBackDay(), count1 = info.todayActive, count2 = XH.lobby:getModule("RecallNew"):getTaskStage() })
            self._isReport = true
        end
        self._KW_ACTIVE_TODAY:setString(info.todayActive)
        -- 活跃
        self:showAwards(info)
        -- 天数
        self:showDays(info)
        -- 任务
        self:showTasks(info)
    end
end

function RecallNewTaskView:getStringByTask(task)
    local showTask = ""
    local taskID = task.taskType
    local targetValue = task.targetValue
    if taskID == RecallNewConfig.ReBackTaskType.Rtt_Login then
        showTask = "每日登录"
    elseif taskID == RecallNewConfig.ReBackTaskType.Rtt_InviteFriend then
        showTask = "房间中邀请" .. targetValue .. "次好友"
    elseif taskID == RecallNewConfig.ReBackTaskType.Rtt_ShareGame then
        showTask = "进行" .. targetValue .. "次分享"
    elseif taskID == RecallNewConfig.ReBackTaskType.Rtt_UseEmoji then
        showTask = "使用" .. targetValue .. "次互动表情"
    elseif taskID == RecallNewConfig.ReBackTaskType.Rtt_RecallFriend then
        showTask = "召回" .. targetValue .. "名曾经的牌友"
    elseif taskID == RecallNewConfig.ReBackTaskType.Rtt_InviteNew then
        showTask = "邀请" .. targetValue .. "名新的牌友"
    elseif taskID == RecallNewConfig.ReBackTaskType.Rtt_GameAll then
        showTask = "参与" .. targetValue .. "局任意游戏"
    elseif taskID == RecallNewConfig.ReBackTaskType.Rtt_GameBox then
        showTask = "参与" .. targetValue .. "场包厢对局"
    elseif taskID == RecallNewConfig.ReBackTaskType.Rtt_GameTea then
        showTask = "参与" .. targetValue .. "场比赛场对局"
    elseif taskID == RecallNewConfig.ReBackTaskType.Rtt_GameGold then
        showTask = "参与" .. targetValue .. "局金币游戏"
    elseif taskID == RecallNewConfig.ReBackTaskType.Rtt_Sign then
        showTask = "完成每日签到"
    elseif taskID == RecallNewConfig.ReBackTaskType.Rtt_CreateRoom then
        showTask = "创建" .. targetValue .. "个包厢并完成对局"
    elseif taskID == RecallNewConfig.ReBackTaskType.Rtt_BrowseShop then
        showTask = "打开并浏览" .. targetValue .. "次商城"
    elseif taskID == RecallNewConfig.ReBackTaskType.Rtt_BiessedProp then
        showTask = "使用" .. targetValue .. "次洗牌或祈福道具"
    elseif taskID == RecallNewConfig.ReBackTaskType.Rtt_Recharge then
        showTask = "完成" .. targetValue .. "次任意金额充值"
    elseif taskID == RecallNewConfig.ReBackTaskType.Rtt_BuyGift then
        showTask = "购买任意礼包" .. targetValue .. "次"
    elseif taskID == RecallNewConfig.ReBackTaskType.Rtt_YueJu then
        showTask = "参与" .. targetValue .. "场包厢/比赛场对局"
    end
    return showTask
end

function RecallNewTaskView:onTouchDayItem(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    local index = tonumber(send:getName())
    local info = XH.lobby:getModule("RecallNew"):getTaskInfo()
    if info.curDay and index > info.curDay then
        XH.TipTool.showToast("未到开启日期")
    end
end

function RecallNewTaskView:onTouchProgressItem(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    local index = tonumber(send:getName())
    local info = XH.lobby:getModule("RecallNew"):getTaskInfo()
    if info.stageInfos then
        for i = 1, #info.stageInfos do
            if info.stageInfos[i].index == index and info.stageInfos[i].status == RecallNewConfig.ReBackStatus.ReStatus_Can_Reward then
                XH.lobby:getModule("RecallNew"):rewardReBackTaskStageRequest(index)
                XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.oh25080607, { item_id = index, block_label = "阶段奖励", block_item_id = 0, page_item_id = "回归任务", page = XH.lobby:getModule("RecallNew"):getCurScene() }, { count = XH.lobby:getModule("RecallNew"):getBackDay(), count1 = info.todayActive, count2 = XH.lobby:getModule("RecallNew"):getTaskStage() })
            end
        end
    end
end

function RecallNewTaskView:onTouchTaskItem(send, eventType)
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
    local info = XH.lobby:getModule("RecallNew"):getTaskInfo()
    if info.taskInfos then
        for i = 1, #info.taskInfos do
            if info.taskInfos[i].taskId == index then
                if info.taskInfos[i].status == RecallNewConfig.ReBackStatus.ReStatus_None then
                    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.oh25080607, { item_id = index, block_label = "去完成", block_item_id = 0, page_item_id = "回归任务", page = XH.lobby:getModule("RecallNew"):getCurScene() }, { count = XH.lobby:getModule("RecallNew"):getBackDay(), count1 = info.todayActive, count2 = XH.lobby:getModule("RecallNew"):getTaskStage() })
                    local isGo = XH.lobby:getModule("RecallNew"):goTaskTarget(info.taskInfos[i].taskType)
                    if isGo then
                        XH.viewManager:closeView("RecallNewView")
                    end
                elseif info.taskInfos[i].status == RecallNewConfig.ReBackStatus.ReStatus_Can_Reward then
                    XH.lobby:getModule("RecallNew"):rewardReBackTaskRequest(index)
                    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.oh25080607, { item_id = index, block_label = "领奖", block_item_id = 0, page_item_id = "回归任务", page = XH.lobby:getModule("RecallNew"):getCurScene() }, { count = XH.lobby:getModule("RecallNew"):getBackDay(), count1 = info.todayActive, count2 = XH.lobby:getModule("RecallNew"):getTaskStage() })
                end
            end
        end
    end
end

function RecallNewTaskView:sortTasks(realTasks)
    local showTasks = {}
    for i = 1, #realTasks do
        if realTasks[i].status == RecallNewConfig.ReBackStatus.ReStatus_Can_Reward then
            showTasks[#showTasks + 1] = realTasks[i]
        end
    end
    for i = 1, #realTasks do
        if realTasks[i].status == RecallNewConfig.ReBackStatus.ReStatus_None then
            showTasks[#showTasks + 1] = realTasks[i]
        end
    end
    for i = 1, #realTasks do
        if realTasks[i].status == RecallNewConfig.ReBackStatus.ReStatus_Rewarded then
            showTasks[#showTasks + 1] = realTasks[i]
        end
    end
    return showTasks
end

function RecallNewTaskView:initUI()
    XH.lobby:getModule("RecallNew"):getReBackTaskInfoRequest()
end

function RecallNewTaskView:refreshData()
    self._isReport = false
    self:initUI()
end

function RecallNewTaskView:ctor()
    RecallNewTaskView.super.ctor(self)
    XH.SpineManager:playAni(self._KW_ANI_ACTIVE, "animation/Common/", "zzb_ty_xingguang", "animation", true)
    XH.SpineManager:playAni(self._KW_ANI_ICONZ, "res/animation/Lobby/Base/zzb_ty_jlliuguang/", "zzb_ty_jlliuguang", "animation", true)
    self:initUI()
end

function RecallNewTaskView:onDestroy()
    RecallNewTaskView.super.onDestroy(self)
end

function RecallNewTaskView:isFullScreen()
    return false
end

return RecallNewTaskViewI