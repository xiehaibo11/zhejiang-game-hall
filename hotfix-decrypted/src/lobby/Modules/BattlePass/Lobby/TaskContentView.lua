local TaskContentView = class("TaskContentView", XH.ViewBase)
local BattlePassConfig = require("lobby.Modules.BattlePass.Config")

-- UI名字定义
function TaskContentView:getCSBPath()
    return "hall/CSB/BattlePass/Lobby/TaskContent.csb"
end

--- 获得节点的绑定信息
function TaskContentView:getBindingInfo()
    return {
       ["_KW_ITEM"] = {varName = "_item"},
       ["_KW_LIST_VIEW"] = {varName = "_listView"},
       ["_KW_DAILY_TASK"] = {varName = "_dailyTask", type = XH.UI_TYPE.PANEL_TOBUTTON, onTouchEnded = "onTouchEventDailyTask"},
       ["_KW_CHALLEGE_TASK"] = {varName = "_challegeTask", type = XH.UI_TYPE.PANEL_TOBUTTON, onTouchEnded = "onTouchEventChallegeTask"},
       ["_KW_CHALLEGE_REDPOINT"] = {varName = "_challegeRedPoint"},
       ["_KW_DAILY_REDPOINT"] = {varName = "_dailyRedPoint"},
    }
end

function TaskContentView:getProxyEvents()
    return {
        { module = XH.lobby:getModule("BattlePass.Lobby"), eventKeyName = "EVENT_BATTLE_PASS_RESP", callBack = "onEventBattlePassResp" },
        { module = XH.goldConfigManager, eventKeyName = "GOLD_EVENT_ROOMINFO", callBack = "onRespGoldRoomInfo" },
    }
end

function TaskContentView:ctor(parentView)
    TaskContentView.super.ctor(self)
    self._parentView = parentView
    self._lobbyBattlePassModule = XH.lobby:getModule("BattlePass.Lobby")
    self._tabIndex = BattlePassConfig.TaskType.DAILY
    self._item:setVisible(false)
    self._listView:setScrollBarEnabled(false)
    self:initUI()
end

function TaskContentView:initUI()
   self:flushMainView()
end

function TaskContentView:flushMainView()
    self:flushTab()
    self:flushContent()
    self:flushTabRedPoint()
    self:flushParentRedPoint()
end

function TaskContentView:flushParentRedPoint()
    if self._parentView and self._parentView.updateOneKeyBtnStatus then
        self._parentView:updateOneKeyBtnStatus()
    end
end

function TaskContentView:flushTabRedPoint()
    local dailyShowRedPoint = self._lobbyBattlePassModule:checkTaskRewardByTaskType(nil, BattlePassConfig.TaskType.DAILY)
    local challengeShowRedPoint = self._lobbyBattlePassModule:checkTaskRewardByTaskType(nil, BattlePassConfig.TaskType.CHALLENGE)
    self._dailyRedPoint:setVisible(dailyShowRedPoint)
    self._challegeRedPoint:setVisible(challengeShowRedPoint)
end

function TaskContentView:flushTab()
    XH.UITool.setVisible(self._dailyTask, "_KW_TXT", self._tabIndex ~= BattlePassConfig.TaskType.DAILY)
    XH.UITool.setVisible(self._dailyTask, "_KW_IMG", self._tabIndex == BattlePassConfig.TaskType.DAILY)
    XH.UITool.setVisible(self._challegeTask, "_KW_TXT", self._tabIndex ~= BattlePassConfig.TaskType.CHALLENGE)
    XH.UITool.setVisible(self._challegeTask, "_KW_IMG", self._tabIndex == BattlePassConfig.TaskType.CHALLENGE)
end

function TaskContentView:flushContent()
    local taskType = self._tabIndex
    local taskList = self._lobbyBattlePassModule:getTaskList(nil, taskType) 
    self._listView:removeAllItems()
    for i = 1, #taskList do
        local task = taskList[i]
        local item = self._item:clone()
        self._listView:pushBackCustomItem(item)
        self:updateItem(item, task)
    end
end

function TaskContentView:updateItem(item,data)
    if not item or not data then
        return
    end
    item:setVisible(true)
    -- 经验值
    XH.UITool.setText(item, "_KW_EXP_TXT", data.taskExp)
    -- 任务描述
    XH.UITool.setText(item, "_KW_TASK_TXT_DESC", data.taskDesc)
    -- 进度描述
    local taskProgressTxt = item:getChildByName("_KW_TASK_TXT_PROGRESS")
    local richText = string.format("<font face='cocosStudio/Common/Font/fangzhengcuyuan.TTF' size='36' color='#974211'>" .. "(" .. "<font color='#ff7200'>%s</font>/%s" .. ")</font>", data.taskProgress, data.taskTarget)
    local richLabel = ccui.RichText:createWithXML(richText, {})
    richLabel:setAnchorPoint(0, 0.5)
    richLabel:setPosition(cc.p(taskProgressTxt:getPositionX(), taskProgressTxt:getPositionY()))
    item:addChild(richLabel)
    -- 状态更新
    local btnGo = item:getChildByName("_KW_BTN_GO")              --未完成状态,去完成状态
    local btnRewardEd = item:getChildByName("_KW_BTN_REWARDED")  --已领取状态
    local btnUnFinish = item:getChildByName("_KW_BTN_UN_FINISH") --未完成状态,无去完成状态
    local btnGet = item:getChildByName("_KW_BTN_GET")            --领取状态
    -- 注册相关点击事件
    local function onTouchEvent(send, event)
        self:touchTarget(data)
    end
    XH.UIButton.create(btnGo, nil, onTouchEvent)
    XH.UIButton.create(btnGet, nil, onTouchEvent)
    -- XH.UIButton.create(btnRewardEd, nil, onTouchEvent)
    -- XH.UIButton.create(btnUnFinish, nil, onTouchEvent)
    btnGo:setVisible(false)
    btnRewardEd:setVisible(false)
    btnUnFinish:setVisible(false)
    btnGet:setVisible(false)
    -- 状态
    local taskState = data.taskStatus
    if taskState == BattlePassConfig.TaskStatus.UNFINISH then
        -- 这里两种状态 一种显示未完成  一种显示立即前往
        local gameIds = data.taskGameIds
        if gameIds and #gameIds > 0 then
            btnGo:setVisible(true)
        else
            btnUnFinish:setVisible(true)
        end
    elseif taskState == BattlePassConfig.TaskStatus.REWARDED then
        btnRewardEd:setVisible(true)
    elseif taskState == BattlePassConfig.TaskStatus.FINISH then
        btnGet:setVisible(true)
    end
    -- 经验值加成
    local _,isBuySuper = XH.lobby:getModule("BattlePass.Lobby"):getBuyStatus()
    if isBuySuper then
        XH.UITool.setVisible(item, "_KW_TAG_IMG", true)
        XH.UITool.setVisible(item, "_KW_TAG_TEXT", true)
        XH.UITool.setText(item, "_KW_TAG_TEXT", string.format("+%d%%", XH.lobby:getModule("BattlePass.Lobby"):getSuperAddExp()*100))
    end
end

function TaskContentView:touchTarget(data)
    -- 跳转到金币场对应游戏
    if data.taskStatus == BattlePassConfig.TaskStatus.UNFINISH then
        local gameIds = data.taskGameIds
        if (not gameIds or not (#gameIds > 0)) then
            return
        end
        local gameId = gameIds[1]
        if not gameId then return end
        local confID = XH.goldConfigManager:getConfIDByGameID(gameId)
        if confID == nil then 
            return 
        end
        local goldInfo = XH.goldConfigManager:getGoldRoomInfoByIndex(confID)
        local roomInfo = goldInfo and goldInfo.roomInfo
        if not roomInfo then 
            return 
        end
        if not XH.goldConfigManager:getGoldRoomDetailInfos() then
            XH.TipTool:showLoading()
            self._lastConfID = roomInfo.LeisureID
            self._lastRoomFlag = roomInfo.roomFlag
            XH.goldConfigManager:changeGroupLogin()
            return
        end
        XH.lobby:getModule("Lobby"):reqJoinGoldRoom(roomInfo.LeisureID, roomInfo.roomFlag)
        XH.viewManager:closeView("LobbyBattlePassView")
        return
    elseif data.taskStatus == BattlePassConfig.TaskStatus.FINISH then
        if not self._lobbyBattlePassModule then
            return
        end
        self._lobbyBattlePassModule:reqAllTaskReward(nil, self._tabIndex)
        return
    end
end

function TaskContentView:onRespGoldRoomInfo(event)
    if self._lastConfID and self._lastRoomFlag then
        XH.TipTool.hideLoading()
        XH.lobby:getModule("Lobby"):reqJoinGoldRoom(self._lastConfID, self._lastRoomFlag, self._lastExt)
        self._lastConfID = nil
        self._lastRoomFlag = nil
        XH.viewManager:closeView("LobbyBattlePassView")
    end
end

function TaskContentView:isNeedHotUpdata(gameId)
    local LobbyConfig = require("lobby.Modules.Lobby.Config")
    if XH.configerManager:getIsIosTishen() then
        return false
    end
    local targetPlatform = cc.Application:getInstance():getTargetPlatform()
    local HOTUPDATE_OPEN = false
    if device.platform == "windows" and WINDOWS_HOTUPDATE_OPEN then
        HOTUPDATE_OPEN = true
    end
    if cc.PLATFORM_OS_IPAD == targetPlatform or cc.PLATFORM_OS_IPHONE == targetPlatform  or cc.PLATFORM_OS_ANDROID == targetPlatform then 
        HOTUPDATE_OPEN = true
    end

    if HOTUPDATE_OPEN then
        local configer = require("app.Config.Parse.GameSubConfiger").new()
        local gameid = tonumber(gameId)
        local key = configer:getGameTypePathByGameId(gameid)
        if key == "" then
            return false
        end

        lobby = lobby or {}
        lobby._needUpdate = lobby._needUpdate or {}
        if lobby._needUpdate[key] == nil or lobby._needUpdate[key] == true then
            local HotUpdateThree = require('app.hotupdate.games.GameResChecker')
            HotUpdateThree._startHotFix(gameid, key, 1)
            return true
        end
    end
    return false
end

function TaskContentView:onTouchEventDailyTask(send, event)
    if self._tabIndex == BattlePassConfig.TaskType.DAILY then
        return
    end
    self._tabIndex = BattlePassConfig.TaskType.DAILY
    self:flushMainView()
    self._lobbyBattlePassModule:setPageType(BattlePassConfig.LobbyPageType.EVERYDAYTASK)
end

function TaskContentView:onTouchEventChallegeTask(send, event)
    if self._tabIndex == BattlePassConfig.TaskType.CHALLENGE then
        return
    end
    self._tabIndex = BattlePassConfig.TaskType.CHALLENGE
    self:flushMainView()
    self._lobbyBattlePassModule:setPageType(BattlePassConfig.LobbyPageType.CHALLENGETASK)
end

function TaskContentView:onEventBattlePassResp(event)
    self:flushMainView()
end

function TaskContentView:getCurTabIndex()
    return self._tabIndex
end

return TaskContentView
\&  