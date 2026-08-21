local PromoteTeaNewView = class("PromoteTeaNewView", XH.ViewBase)
local PromoteDefine = require("lobby.Modules.Promote.Define")
local FguiControllerHelper = require("app.Tool.FguiControllerHelper")
local Utils = require("lobby.Modules.GoldNew.Tool.Utils")

function PromoteTeaNewView:ctor(params)
    PromoteTeaNewView.super.ctor(self)
    params = params or {}
    self._isAdmin = params.isAdmin
    self._isOwner = params.isOwner
    self._teaNumber = params.teaNumber
    self._ownerNumid = params.owner_numid
    self._worldPos = params.worldPos
    self._isUpload = false
    self._clickTimes = {}
    self._globalConfig = nil

    self._ctrlHelper = FguiControllerHelper.new(self)

    self:initUI()
end

function PromoteTeaNewView:getCSBPath()
    return "cocosStudio/hall/CSB/PromoteTeaNewUI/PromoteTeaNewUI.csb"
end

function PromoteTeaNewView:getBindingRegex()
    return "//.+"
end

function PromoteTeaNewView:getBindingInfo()
    return {
        ["LABLE_ACT_TIME"] = {varName = "LABLE_ACT_TIME"},
        ["LABLE_ACT_TIP"] = {varName = "LABLE_ACT_TIP"},
        ["KW_UI_BTN_CLOSE"] = {varName = "KW_UI_BTN_CLOSE", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onClickClose"},
        ["KW_BTN_ACT_RULE"] = {varName = "KW_BTN_ACT_RULE", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onClickActRule"},
        ["KW_BTN_REWARD_LOG"] = {varName = "KW_BTN_REWARD_LOG", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onClickRewardLog"},
        -- user panel
        ["KW_PROCESS_USER_PERIOD_BG"] = {varName = "KW_PROCESS_USER_PERIOD_BG"},
        ["KW_PROCESS_USER_PERIOD"] = {varName = "KW_PROCESS_USER_PERIOD"},
        ["KW_PROCESS_USER_DUIJU"] = {varName = "KW_PROCESS_USER_DUIJU"},
        ["KW_DAY1"] = {varName = "KW_DAY1"},
        ["KW_DAY2"] = {varName = "KW_DAY2"},
        ["KW_DAY3"] = {varName = "KW_DAY3"},
        ["KW_DAY4"] = {varName = "KW_DAY4"},
        ["KW_DAY5"] = {varName = "KW_DAY5"},
        ["KW_DAY6"] = {varName = "KW_DAY6"},
        ["KW_DAY7"] = {varName = "KW_DAY7"},

        ["LABLE_PERCENT_Name"] = {varName = "LABLE_PERCENT_Name"},
        ["LABLE_USER_LEFT_TITLE"] = {varName = "LABLE_USER_LEFT_TITLE"},
        ["KW_IMG_USER_ICON_1"] = {varName = "KW_IMG_USER_ICON_1"},
        ["LABLE_USER_TITLE_1"] = {varName = "LABLE_USER_TITLE_1"},
        ["LABLE_USER_TITLE_2"] = {varName = "LABLE_USER_TITLE_2"},
        ["KW_IMG_USER_REWARD_1"] = {varName = "KW_IMG_USER_REWARD_1"},
        ["LABLE_REWARD_NUM_1"] = {varName = "LABLE_REWARD_NUM_1"},
        ["KW_IMG_USER_REWARD_2"] = {varName = "KW_IMG_USER_REWARD_2"},
        ["LABLE_REWARD_NUM_2"] = {varName = "LABLE_REWARD_NUM_2"},
        ["KW_IMG_USER_REWARD_3"] = {varName = "KW_IMG_USER_REWARD_3"},
        ["LABLE_PERCENT_REWARD_NUM"] = {varName = "LABLE_PERCENT_REWARD_NUM"},
        ["LABLE_USER_CUR_1"] = {varName = "LABLE_USER_CUR_1"},
        ["LABLE_USER_CUR_2"] = {varName = "LABLE_USER_CUR_2"},
        ["LABLE_PERCENT_Cur"] = {varName = "LABLE_PERCENT_Cur"},
        ["LABLE_PERCENT_MAX"] = {varName = "LABLE_PERCENT_MAX"},
        ["KW_BTN_USER_DO_1"] = {varName = "KW_BTN_USER_DO_1", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onClickUserDo1"},
        ["KW_BTN_USER_DO_2"] = {varName = "KW_BTN_USER_DO_2", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onClickUserDo2"},
        ["KW_BTN_USER_REWARD_1"] = {varName = "KW_BTN_USER_REWARD_1", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onClickUserRewardFirst"},
        ["KW_BTN_USER_REWARD_2"] = {varName = "KW_BTN_USER_REWARD_2", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onClickUserRewardSecond"},
        ["KW_BTN_USER_REWARD_3"] = {varName = "KW_BTN_USER_REWARD_3", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onClickUserRewardPeriod"},
        ["IMG_FINGER_USER_REWARD_3"] = {varName = "IMG_FINGER_USER_REWARD_3"},
        ["IMG_USER_REWARD_1"] = {varName = "IMG_USER_REWARD_1"},
        ["IMG_USER_REWARD_2"] = {varName = "IMG_USER_REWARD_2"},
        ["IMG_USER_REWARD_3"] = {varName = "IMG_USER_REWARD_3"},
        ["IMG_USER_END_1"] = {varName = "IMG_USER_END_1"},
        ["IMG_USER_END_2"] = {varName = "IMG_USER_END_2"},
        -- owner left panel
        ["LABLE_OWNER_LEFT_TITLE"] = {varName = "LABLE_OWNER_LEFT_TITLE"},
        ["LABLE_OWNER_LEFT_NUM"] = {varName = "LABLE_OWNER_LEFT_NUM"},
        ["KW_IMG_OWNER_LEFT_REWARD_ICON"] = {varName = "KW_IMG_OWNER_LEFT_REWARD_ICON"},
        ["KW_OWNER_LEFT_PRO1"] = {varName = "KW_OWNER_LEFT_PRO1"},
        ["KW_OWNER_LEFT_PRO2"] = {varName = "KW_OWNER_LEFT_PRO2"},
        ["LABLE_OWNER_LEFT_PRO"] = {varName = "LABLE_OWNER_LEFT_PRO"},
        ["LABLE_OWNER_LEFT_PRO2"] = {varName = "LABLE_OWNER_LEFT_PRO2"},
        ["KW_OWNER_LEFT_PROGRESS"] = {varName = "KW_OWNER_LEFT_PROGRESS"},
        ["KW_OWNER_LEFT_PROGRESS2"] = {varName = "KW_OWNER_LEFT_PROGRESS2"},
        ["KW_OWNER_LEFT_COMP"] = {varName = "KW_OWNER_LEFT_COMP"},
        ["KW_OWNER_LEFT_COMP2"] = {varName = "KW_OWNER_LEFT_COMP2"},
        ["IMG_OWNER_LEFT_REWARD"] = {varName = "IMG_OWNER_LEFT_REWARD"},
        ["IMG_OWNER_LEFT_END"] = {varName = "IMG_OWNER_LEFT_END"},
        ["KW_BTN_OWNER_LEFT_CREATE"] = {varName = "KW_BTN_OWNER_LEFT_CREATE", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onClickOwnerCreate"},
        ["KW_BTN_OWNER_LEFT_REWARD"] = {varName = "KW_BTN_OWNER_LEFT_REWARD", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onClickOwnerLeftReward"},
        -- owner right panel
        ["LABEL_OWNER_RIGHT_DES"] = {varName = "LABEL_OWNER_RIGHT_DES"},
        ["LABEL_OWNER_RIGHT_TITLE"] = {varName = "LABEL_OWNER_RIGHT_TITLE"},
        ["LABLE_OWNER_RIGHT_A_1"] = {varName = "LABLE_OWNER_RIGHT_A_1"},
        ["LABLE_OWNER_RIGHT_A_2"] = {varName = "LABLE_OWNER_RIGHT_A_2"},
        ["LABLE_OWNER_RIGHT_A_3"] = {varName = "LABLE_OWNER_RIGHT_A_3"},
        ["IMG_OWNER_RIGHT_REWARD"] = {varName = "IMG_OWNER_RIGHT_REWARD"},
        ["IMG_OWNER_RIGHT_END"] = {varName = "IMG_OWNER_RIGHT_END"},
        ["KW_BTN_OWNER_RIGHT_REWARD"] = {varName = "KW_BTN_OWNER_RIGHT_REWARD", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onClickOwnerRightReward"},
    }
end

function PromoteTeaNewView:getProxyEvents()
    return {
        {module = XH.lobby:getModule("Promote2"), eventKeyName = "EVENT_NEW_PROMOTE_TASK", callBack = "updateView"},
        {module = XH.lobby:getModule("Promote2"), eventKeyName = "EVENT_UPDATE_SETUP", callBack = "updateSetup"},
    }
end

-- ============================================================
--  initUI / updateView
-- ============================================================

function PromoteTeaNewView:initUI()
    local module = XH.lobby:getModule("Promote2")
    local baseInfo = module:getBaseInfo() --服务静态配置
    local globalConfig = module:getGlobalConfig()
    local areaConfig = module:getAreaConfig() or {}
    local taskInfo = module:getTaskInfo()
    if not baseInfo or not globalConfig then
        self:close()
        return
    end

    self._globalConfig = clone(areaConfig)

    for i,v in pairs(globalConfig) do
        if self._globalConfig[i] == nil then
            self._globalConfig[i] = v
        end
    end

    -- self._globalConfig = globalConfig

    module:reqNewSpreadAwardList(self._teaNumber)

    local promote2Module = XH.lobby:getModule("Promote2")
    local actTime = promote2Module and promote2Module:getActTime()
    if actTime then
        local startStr = os.date("%m.%d", actTime.start or 0)
        local endStr = os.date("%m.%d", actTime["end"] or 0)
        self.LABLE_ACT_TIME:setString("活动时间  " .. startStr .. "-" .. endStr)
    end

    self:initTextByConfig(self._globalConfig.teaViewText_actTip, self.LABLE_ACT_TIP, true)

    if taskInfo then
        self:updateView()
    end

    -- 活动_圈主/玩家_2/3人_icon点击（从比赛场打开 2/3人 推广弹窗时上报）
    if self._isOwner then
        XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.wftgqz032001, {})
    else
        XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.wftgwj032006, {})
    end
end

function PromoteTeaNewView:updateView()
    local module = XH.lobby:getModule("Promote2")
    local baseInfo = module:getBaseInfo()
    if not baseInfo then return end
    local taskType = baseInfo.taskType
    local ctrlIndex = "0"
    if taskType ~= PromoteDefine.TASK_TYPE.USER then
        ctrlIndex = "8"
    end
    self._ctrlHelper:setPage("idenCtrl", ctrlIndex)

    if not self._isUpload then
        self._isUpload = true
        -- 2/3人场推广 弹窗曝光埋点（活动_圈主/玩家_2/3人_弹窗_曝光）
        if taskType == PromoteDefine.TASK_TYPE.USER then
            XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.wftgwj032006, {})
        else
            XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.wftgqz032001, {})
        end
    end

    if ctrlIndex == "0" then
        self:setUserTaskInfo()
        return
    end

    local leaderFirstType = baseInfo.leaderFirstType
    if leaderFirstType == PromoteDefine.TASK_TYPE.A then
        self:setOwnerLeftA()
    elseif leaderFirstType == PromoteDefine.TASK_TYPE.B then
        self:setOwnerLeftB()
    elseif leaderFirstType == PromoteDefine.TASK_TYPE.C then
        self:setOwnerLeftC()
    end

    local leaderTaskType = baseInfo.leaderTaskType
    if leaderTaskType == PromoteDefine.TASK_TYPE.A then
        self:setOwnerRightA()
    elseif leaderTaskType == PromoteDefine.TASK_TYPE.B then
        self:setOwnerRightB()
    elseif leaderTaskType == PromoteDefine.TASK_TYPE.C then
        self:setOwnerRightC()
    end

    if not self._isOwner then
        self.KW_BTN_REWARD_LOG:setVisible(false)
    end
end

-- ============================================================
--  user panel
-- ============================================================

function PromoteTeaNewView:setUserTaskInfo()
    local module = XH.lobby:getModule("Promote2")
    local isOpenAct = module:isOpenAct()
    local baseInfo = module:getBaseInfo()
    local taskInfo = module:getTaskInfo()
    local globalConfig = self._globalConfig

    local periodTimes = baseInfo.playerPeriodTaskTimes or 1
    local process = math.min(1, (taskInfo.curPlayerCnt or 0) / periodTimes)
    self.KW_PROCESS_USER_PERIOD:setContentSize(150 * periodTimes, self.KW_PROCESS_USER_PERIOD:getContentSize().height)
    self.KW_PROCESS_USER_PERIOD_BG:setContentSize(150 * periodTimes, self.KW_PROCESS_USER_PERIOD_BG:getContentSize().height)
    if self.KW_PROCESS_USER_PERIOD and self.KW_PROCESS_USER_PERIOD.setPercent then
        self.KW_PROCESS_USER_PERIOD:setPercent(process * 100)
    end
    local stages = {self.KW_DAY1, self.KW_DAY2, self.KW_DAY3, self.KW_DAY4, self.KW_DAY5, self.KW_DAY6, self.KW_DAY7}
    for i,v in ipairs(stages) do
        v:setVisible(i <= periodTimes)
        local imgOn = v:getChildByName('KW_ON')
        local imgOff = v:getChildByName('KW_OFF')
        imgOn:setVisible(i <= taskInfo.curPlayerCnt)
        imgOff:setVisible(i > taskInfo.curPlayerCnt)
    end

    self:initTextByConfig(self:convertNumbersToChinese(periodTimes .. "日好礼"), self.LABLE_PERCENT_Name)
    -- 配置占位符: gameName，如 teaViewText_userLeftTitle = "gameName，对局刺激更尽兴"
    local userLeftTitle = globalConfig.teaViewText_userLeftTitle or ""
    userLeftTitle = string.gsub(userLeftTitle, "gameName", tostring(globalConfig.gameName or ""))
    self:initTextByConfig(userLeftTitle, self.LABLE_USER_LEFT_TITLE, true)
    self:initImageUIByConfig(baseInfo.ext, self.KW_IMG_USER_ICON_1, false)

    -- 配置占位符: roundCount, gameName，如 "每天玩roundCount场<font color='#afff6e'>gameName</font>模式"
    local gameName = globalConfig.gameName or ""
    local title1 = globalConfig.teaViewText_userTitle1 or ""
    title1 = string.gsub(title1, "roundCount", tostring(baseInfo.playerFirstTaskRound or 0))
    title1 = string.gsub(title1, "gameName", tostring(gameName))
    self:initTextByConfig(title1, self.LABLE_USER_TITLE_1, true, cc.p(0, 0.5))

    local title2 = globalConfig.teaViewText_userTitle2 or ""
    title2 = string.gsub(title2, "roundCount", tostring(baseInfo.playerSecondTaskRound or 0))
    title2 = string.gsub(title2, "gameName", tostring(gameName))
    self:initTextByConfig(title2, self.LABLE_USER_TITLE_2, true, cc.p(0, 0.5))

    self:setPlayerAwardPool(baseInfo.playerFirstPool, self.KW_IMG_USER_REWARD_1, self.LABLE_REWARD_NUM_1)
    self:setPlayerAwardPool(baseInfo.playerSecondPool, self.KW_IMG_USER_REWARD_2, self.LABLE_REWARD_NUM_2)
    self:setPlayerAwardPool(baseInfo.playerThirdPool, self.KW_IMG_USER_REWARD_3, self.LABLE_PERCENT_REWARD_NUM)

    local userRound = taskInfo.curRound or 0
    local userPeriodRound = math.min(taskInfo.curPlayerCnt or 0, periodTimes)

    local isUserFirstComplete = userRound >= (baseInfo.playerFirstTaskRound or 0)
    local isUserSecondComplete = userRound >= (baseInfo.playerSecondTaskRound or 0)
    local isUserPeriodComplete = (taskInfo.curPlayerCnt or 0) >= periodTimes

    self._ctrlHelper:setPage("userRewardCtrl", isUserPeriodComplete and "1" or "0")

    local isUserFirstReward = (taskInfo.awardFirst or 0) == 1
    local isUserSecondReward = (taskInfo.awardSecond or 0) == 1
    local isUserPeriodAward = (taskInfo.awardPeriod or 0) == 1

    self.LABLE_USER_CUR_1:setString(math.min(userRound, baseInfo.playerFirstTaskRound or 0) .. "/" .. (baseInfo.playerFirstTaskRound or 0))
    self.LABLE_USER_CUR_2:setString(math.min(userRound, baseInfo.playerSecondTaskRound or 0) .. "/" .. (baseInfo.playerSecondTaskRound or 0))
    self.KW_PROCESS_USER_DUIJU:setPercent(math.min(userRound, baseInfo.playerSecondTaskRound or 0)/(baseInfo.playerSecondTaskRound or 1) * 100)

    local periodCurStr = tostring(userPeriodRound)
    self.LABLE_PERCENT_Cur:setString(periodCurStr)

    local periodMaxStr = "/" .. periodTimes
    self.LABLE_PERCENT_MAX:setString(periodMaxStr)

    self.KW_BTN_USER_DO_1:setVisible(isOpenAct and not isUserFirstComplete)
    self.KW_BTN_USER_DO_2:setVisible(isOpenAct and not isUserSecondComplete)

    local showReward1 = isOpenAct and not isUserFirstReward and isUserFirstComplete
    self.KW_BTN_USER_REWARD_1:setVisible(showReward1)
    self:setRedDot(self.KW_BTN_USER_REWARD_1, showReward1)

    local showReward2 = isOpenAct and not isUserSecondReward and isUserSecondComplete
    self.KW_BTN_USER_REWARD_2:setVisible(showReward2)
    self:setRedDot(self.KW_BTN_USER_REWARD_2, showReward2)

    self.IMG_USER_REWARD_1:setVisible(isOpenAct and isUserFirstReward)
    self.IMG_USER_REWARD_2:setVisible(isOpenAct and isUserSecondReward)
    self.IMG_USER_END_1:setVisible(not isOpenAct)
    self.IMG_USER_END_2:setVisible(not isOpenAct)

    local showReward3 = not isUserPeriodAward and isUserPeriodComplete
    self.KW_BTN_USER_REWARD_3:setVisible(showReward3)
    self:setRedDot(self.KW_BTN_USER_REWARD_3, showReward3)
    self.IMG_USER_REWARD_3:setVisible(isUserPeriodAward)
    self:refreshUserReward3FingerAnim()
end

--- 七日好礼可领时，领取按钮上的手指点击引导
function PromoteTeaNewView:refreshUserReward3FingerAnim()
    local finger = self.IMG_FINGER_USER_REWARD_3
    local btn = self.KW_BTN_USER_REWARD_3
    finger:stopAllActions()
    if not btn:isVisible() then
        finger:setVisible(false)
        return
    end
    finger:setVisible(true)
    finger:setPosition(btn:getPositionX() + btn:getContentSize().width * 0.22, btn:getPositionY() - btn:getContentSize().height * 0.08)
    local aniFinger = cc.Sequence:create(
        cc.MoveBy:create(0.4, cc.p(20, -40)),
        cc.MoveBy:create(0.4, cc.p(-20, 40))
    )
    finger:runAction(cc.RepeatForever:create(aniFinger))
end

-- ============================================================
--  owner left panel: A / B / C
-- ============================================================

function PromoteTeaNewView:setOwnerLeftA()
    local module = XH.lobby:getModule("Promote2")
    local propId = module:getBaseInfo().propId
    local hasMode = module:hasActPlayModes()
    local isOpenAct = module:isOpenAct()
    local baseInfo = module:getBaseInfo()
    local taskInfo = module:getTaskInfo()
    local globalConfig = self._globalConfig

    -- 配置占位符: gameName, roundCount
    local gameName = baseInfo.leaderFirstGameName or globalConfig.gameName or ""
    local roundCount = baseInfo.leaderFirstTaskTimes or 0
    local title = globalConfig.teaView_ownerLeftTitle_A or ""
    title = string.gsub(title, "gameName", tostring(gameName))
    title = string.gsub(title, "roundCount", tostring(roundCount))
    self:initTextByConfig(title, self.LABLE_OWNER_LEFT_TITLE, true, cc.p(0.5, 1))
    self:initTextByConfig((baseInfo.leaderFirstPropName or "") .. "x" .. module:getUserAwardCount(propId, baseInfo.leaderFirstAward or 0), self.LABLE_OWNER_LEFT_NUM)
    self:initImageUIByConfig(baseInfo.leaderFirstImg, self.KW_IMG_OWNER_LEFT_REWARD_ICON)

    local proStr = math.min(taskInfo.totalRound or 0, baseInfo.leaderFirstTaskTimes or 0) .. "/" .. (baseInfo.leaderFirstTaskTimes or 0) .. "场"
    self:initTextByConfig(proStr, self.LABLE_OWNER_LEFT_PRO)
    local progress = math.min(taskInfo.totalRound or 0, baseInfo.leaderFirstTaskTimes or 0) / (baseInfo.leaderFirstTaskTimes or 1) 
    self.KW_OWNER_LEFT_PROGRESS:setPercent(progress * 100)
    self.KW_OWNER_LEFT_COMP:setVisible(progress >= 1)

    local isComplete = (taskInfo.totalRound or 0) >= (baseInfo.leaderFirstTaskTimes or 0)
    local isReward = (taskInfo.awardFirst or 0) == 1

    if isOpenAct then
        self.IMG_OWNER_LEFT_REWARD:setVisible(isReward)
        self.IMG_OWNER_LEFT_END:setVisible(false)
        self.KW_BTN_OWNER_LEFT_CREATE:setVisible(not isReward and not isComplete and not hasMode)
        self.KW_BTN_OWNER_LEFT_REWARD:setVisible(not isReward and isComplete)
        self:setRedDot(self.KW_BTN_OWNER_LEFT_REWARD, not isReward and isComplete)
        self:setButtonEnabled(self.KW_BTN_OWNER_LEFT_REWARD, not isReward and isComplete)
    else
        self.IMG_OWNER_LEFT_REWARD:setVisible(isReward)
        self.IMG_OWNER_LEFT_END:setVisible(not isReward and not isComplete)
        self.KW_BTN_OWNER_LEFT_CREATE:setVisible(false)
        self.KW_BTN_OWNER_LEFT_REWARD:setVisible(not isReward and isComplete)
        self:setRedDot(self.KW_BTN_OWNER_LEFT_REWARD, not isReward and isComplete)
        self:setButtonEnabled(self.KW_BTN_OWNER_LEFT_REWARD, true)
    end

    if not self._isOwner then
        self.IMG_OWNER_LEFT_END:setVisible(false)
    end
end

function PromoteTeaNewView:setButtonEnabled(btn, enabled)
    if enabled then
        XH.UITool.resetGray(btn)
        btn:setTouchEnabled(true)
    else
        XH.UITool.gray(btn, true)
        btn:setTouchEnabled(false)
    end
end

function PromoteTeaNewView:setOwnerLeftB()
    local module = XH.lobby:getModule("Promote2")
    local propId = module:getBaseInfo().propId
    local hasMode = module:hasActPlayModes()
    local isOpenAct = module:isOpenAct()
    local baseInfo = module:getBaseInfo()
    local taskInfo = module:getTaskInfo()
    local globalConfig = self._globalConfig

    -- 配置占位符: gameName, playerCount
    local gameName = baseInfo.leaderFirstGameName or globalConfig.gameName or ""
    local playerCount = baseInfo.leaderFirstPlayerCnt or 0
    local title = globalConfig.teaView_ownerLeftTitle_B or ""
    title = string.gsub(title, "gameName", tostring(gameName))
    title = string.gsub(title, "playerCount", tostring(playerCount))
    self:initTextByConfig(title, self.LABLE_OWNER_LEFT_TITLE, true, cc.p(0.5, 1))
    self:initTextByConfig((baseInfo.leaderFirstPropName or "") .. "x" .. module:getUserAwardCount(propId, baseInfo.leaderFirstAward or 0), self.LABLE_OWNER_LEFT_NUM)
    self:initImageUIByConfig(baseInfo.leaderFirstImg, self.KW_IMG_OWNER_LEFT_REWARD_ICON)

    local proStr = math.min(taskInfo.curPlayerCnt or 0, baseInfo.leaderFirstPlayerCnt or 0) .. "/" .. (baseInfo.leaderFirstPlayerCnt or 0) .. "人"
    self:initTextByConfig(proStr, self.LABLE_OWNER_LEFT_PRO)
    local progress = math.min(taskInfo.curPlayerCnt or 0, baseInfo.leaderFirstPlayerCnt or 0) / (baseInfo.leaderFirstPlayerCnt or 1) 
    self.KW_OWNER_LEFT_PROGRESS:setPercent(progress * 100)
    self.KW_OWNER_LEFT_COMP:setVisible(progress >= 1)

    local isComplete = (taskInfo.curPlayerCnt or 0) >= (baseInfo.leaderFirstPlayerCnt or 0)
    local isReward = (taskInfo.awardFirst or 0) == 1

    if isOpenAct then
        self.KW_BTN_OWNER_LEFT_CREATE:setVisible(not isReward and not hasMode and not isComplete)
        self.IMG_OWNER_LEFT_REWARD:setVisible(isReward)
        self.IMG_OWNER_LEFT_END:setVisible(false)
        self.KW_BTN_OWNER_LEFT_REWARD:setVisible(not isReward and isComplete)
        self:setRedDot(self.KW_BTN_OWNER_LEFT_REWARD, not isReward and isComplete)
        self:setButtonEnabled(self.KW_BTN_OWNER_LEFT_REWARD, not isReward and isComplete)
    else
        self.KW_BTN_OWNER_LEFT_CREATE:setVisible(false)
        self.IMG_OWNER_LEFT_REWARD:setVisible(isReward)
        self.IMG_OWNER_LEFT_END:setVisible(not isReward)
        self.KW_BTN_OWNER_LEFT_REWARD:setVisible(false)
    end

    if not self._isOwner then
        self.IMG_OWNER_LEFT_END:setVisible(false)
    end
end

function PromoteTeaNewView:setOwnerLeftC()
    local module = XH.lobby:getModule("Promote2")
    local propId = module:getBaseInfo().propId
    local hasMode = module:hasActPlayModes()
    local isOpenAct = module:isOpenAct()
    local baseInfo = module:getBaseInfo()
    local taskInfo = module:getTaskInfo()
    local globalConfig = self._globalConfig

    -- 配置占位符: gameName, playerCount, roundCount
    local gameName = baseInfo.leaderFirstGameName or globalConfig.gameName or ""
    local playerCount = baseInfo.leaderFirstPlayerCnt or 0
    local roundCount = baseInfo.leaderFirstTaskTimes or 0
    local title = globalConfig.teaView_ownerLeftTitle_C or ""
    title = string.gsub(title, "gameName", tostring(gameName))
    title = string.gsub(title, "playerCount", tostring(playerCount))
    title = string.gsub(title, "roundCount", tostring(roundCount))
    self:initTextByConfig(title, self.LABLE_OWNER_LEFT_TITLE, true, cc.p(0.5, 1))
    self:initTextByConfig((baseInfo.leaderFirstPropName or "") .. "x" .. module:getUserAwardCount(propId, baseInfo.leaderFirstAward or 0), self.LABLE_OWNER_LEFT_NUM)
    self:initImageUIByConfig(baseInfo.leaderFirstImg, self.KW_IMG_OWNER_LEFT_REWARD_ICON)

    local playerCnt = math.min(taskInfo.curPlayerCnt or 0, baseInfo.leaderFirstPlayerCnt or 0)
    local roundCnt = math.min(taskInfo.totalRound or 0, baseInfo.leaderFirstTaskTimes or 0)
    self:initTextByConfig(playerCnt .. "/" .. (baseInfo.leaderFirstPlayerCnt or 0) .. "人", self.LABLE_OWNER_LEFT_PRO)
    self:initTextByConfig(roundCnt .. "/" .. (baseInfo.leaderFirstTaskTimes or 0) .. "场", self.LABLE_OWNER_LEFT_PRO2)
    local progress = playerCnt / (baseInfo.leaderFirstPlayerCnt or 1) 
    self.KW_OWNER_LEFT_PROGRESS:setPercent(progress * 100)
    local progress2 = roundCnt / (baseInfo.leaderFirstTaskTimes or 1) 
    self.KW_OWNER_LEFT_PROGRESS2:setPercent(progress2 * 100)
    self.KW_OWNER_LEFT_PRO1:setPositionY(27)
    self.KW_OWNER_LEFT_PRO2:setVisible(true)
    self.KW_OWNER_LEFT_COMP:setVisible(progress >= 1)
    self.KW_OWNER_LEFT_COMP2:setVisible(progress2 >= 1)

    local isComplete = (taskInfo.curPlayerCnt or 0) >= (baseInfo.leaderFirstPlayerCnt or 0) and (taskInfo.totalRound or 0) >= (baseInfo.leaderFirstTaskTimes or 0)
    local isReward = (taskInfo.awardFirst or 0) == 1

    if isOpenAct then
        self.IMG_OWNER_LEFT_REWARD:setVisible(isReward)
        self.IMG_OWNER_LEFT_END:setVisible(false)
        self.KW_BTN_OWNER_LEFT_CREATE:setVisible(not isReward and not hasMode and not isComplete)
        self.KW_BTN_OWNER_LEFT_REWARD:setVisible(not isReward and isComplete)
        self:setRedDot(self.KW_BTN_OWNER_LEFT_REWARD, not isReward and isComplete)
        self:setButtonEnabled(self.KW_BTN_OWNER_LEFT_REWARD, not isReward and isComplete)
    else
        self.IMG_OWNER_LEFT_REWARD:setVisible(isReward)
        self.IMG_OWNER_LEFT_END:setVisible(not isReward and not isComplete)
        self.KW_BTN_OWNER_LEFT_CREATE:setVisible(false)
        self.KW_BTN_OWNER_LEFT_REWARD:setVisible(not isReward and isComplete)
        self:setRedDot(self.KW_BTN_OWNER_LEFT_REWARD, not isReward and isComplete)
        self:setButtonEnabled(self.KW_BTN_OWNER_LEFT_REWARD, true)
    end

    if not self._isOwner then
        self.IMG_OWNER_LEFT_END:setVisible(false)
    end
end

-- ============================================================
--  owner right panel: A / B / C
-- ============================================================

function PromoteTeaNewView:setOwnerRightA()
    local module = XH.lobby:getModule("Promote2")
    local propId = module:getBaseInfo().propId
    local isOpenAct = module:isOpenAct()
    local baseInfo = module:getBaseInfo()
    local taskInfo = module:getTaskInfo()
    local globalConfig = self._globalConfig

    self.LABEL_OWNER_RIGHT_DES:setString("今日场次（场）")

    -- 配置: 比赛场玩家每参与 gameName 模式1场，即可获得 reward 房卡奖励
    if globalConfig.teaView_ownerRightTitle_A and globalConfig.teaView_ownerRightTitle_A ~= "" then
        local gameName = baseInfo.leaderFirstGameName or globalConfig.gameName or ""
        local strHint = globalConfig.teaView_ownerRightTitle_A
        strHint = string.gsub(strHint, "gameName", tostring(gameName))
        strHint = string.gsub(strHint, "reward", tostring(module:getUserAwardCount(propId, baseInfo.leaderTaskAward or 0)))
        self:initTextByConfig(strHint, self.LABEL_OWNER_RIGHT_TITLE, true, cc.p(0.5, 1))
    end

    local roundCount = math.min(taskInfo.curRound or 0, baseInfo.leaderTaskTarget or 0)
    local taskAward = roundCount * (baseInfo.leaderTaskAward or 0)
    self:initTextByConfig(tostring(taskInfo.curRound or 0), self.LABLE_OWNER_RIGHT_A_1)
    self:initTextByConfig(tostring(module:getUserAwardCount(propId, taskAward)), self.LABLE_OWNER_RIGHT_A_2)
    self:initTextByConfig(tostring(module:getUserAwardCount(propId, taskInfo.awardLeft or 0)), self.LABLE_OWNER_RIGHT_A_3)

    local canReward = (taskInfo.awardLeft or 0) > 0
    if isOpenAct then
        self.IMG_OWNER_RIGHT_REWARD:setVisible(false)
        self.IMG_OWNER_RIGHT_END:setVisible(false)
        self.KW_BTN_OWNER_RIGHT_REWARD:setVisible(true)
        self:setRedDot(self.KW_BTN_OWNER_RIGHT_REWARD, canReward)
        if not canReward then
            XH.UITool.gray(self.KW_BTN_OWNER_RIGHT_REWARD, true)
            self.KW_BTN_OWNER_RIGHT_REWARD:setTouchEnabled(false)
        end
    else
        self.IMG_OWNER_RIGHT_REWARD:setVisible(false)
        self.IMG_OWNER_RIGHT_END:setVisible(not canReward)
        self.KW_BTN_OWNER_RIGHT_REWARD:setVisible(canReward)
        self:setRedDot(self.KW_BTN_OWNER_RIGHT_REWARD, canReward)
        XH.UITool.resetGray(self.KW_BTN_OWNER_RIGHT_REWARD)
        self.KW_BTN_OWNER_RIGHT_REWARD:setTouchEnabled(true)
    end

    if not self._isOwner then
        self:setRedDot(self.KW_BTN_OWNER_RIGHT_REWARD, false)
    end
end

function PromoteTeaNewView:setOwnerRightB()
    local module = XH.lobby:getModule("Promote2")
    local baseInfo = module:getBaseInfo()
    local globalConfig = self._globalConfig
    if globalConfig.teaView_ownerRightTitle_B and globalConfig.teaView_ownerRightTitle_B ~= "" then
        local gameName = baseInfo.leaderFirstGameName or globalConfig.gameName or ""
        local strHint = string.gsub(globalConfig.teaView_ownerRightTitle_B, "gameName", tostring(gameName))
        self:initTextByConfig(strHint, self.LABEL_OWNER_RIGHT_TITLE, true, cc.p(0.5, 1))
    end
end

function PromoteTeaNewView:setOwnerRightC()
    local module = XH.lobby:getModule("Promote2")
    local propId = module:getBaseInfo().propId
    local isOpenAct = module:isOpenAct()
    local baseInfo = module:getBaseInfo()
    local taskInfo = module:getTaskInfo()
    local globalConfig = self._globalConfig

    self.LABEL_OWNER_RIGHT_DES:setString("对局人数（人）")

    -- 配置占位符: gameName, playerCount1, reward1, playerCount2, reward2
    if globalConfig.teaView_ownerRightTitle_C and globalConfig.teaView_ownerRightTitle_C ~= "" then
        local gameName = baseInfo.leaderFirstGameName or globalConfig.gameName or ""
        local replaceStr = globalConfig.teaView_ownerRightTitle_C
        replaceStr = string.gsub(replaceStr, "gameName", tostring(gameName))
        replaceStr = string.gsub(replaceStr, "playerCount1", tostring(baseInfo.leaderTaskTarget or 0))
        replaceStr = string.gsub(replaceStr, "reward1", tostring(module:getUserAwardCount(propId, baseInfo.leaderTaskAward or 0)))
        replaceStr = string.gsub(replaceStr, "playerCount2", tostring(baseInfo.leaderTaskTarget2 or 0))
        replaceStr = string.gsub(replaceStr, "reward2", tostring(module:getUserAwardCount(propId, baseInfo.leaderTaskAward2 or 0)))
        self:initTextByConfig(replaceStr, self.LABEL_OWNER_RIGHT_TITLE, true, cc.p(0.5, 1))
    end

    self:initTextByConfig(tostring(taskInfo.curRound or 0), self.LABLE_OWNER_RIGHT_A_1)

    local rewardCount = 0
    if (taskInfo.curRound or 0) >= (baseInfo.leaderTaskTarget2 or 0) then
        rewardCount = baseInfo.leaderTaskAward2 or 0
    elseif (taskInfo.curRound or 0) >= (baseInfo.leaderTaskTarget or 0) then
        rewardCount = baseInfo.leaderTaskAward or 0
    end
    self:initTextByConfig(tostring(module:getUserAwardCount(propId, rewardCount)), self.LABLE_OWNER_RIGHT_A_2)
    self:initTextByConfig(tostring(module:getUserAwardCount(propId, taskInfo.awardLeft or 0)), self.LABLE_OWNER_RIGHT_A_3)

    local canReward = (taskInfo.awardLeft or 0) > 0
    if isOpenAct then
        self.IMG_OWNER_RIGHT_REWARD:setVisible(false)
        self.IMG_OWNER_RIGHT_END:setVisible(false)
        self.KW_BTN_OWNER_RIGHT_REWARD:setVisible(true)
        self:setRedDot(self.KW_BTN_OWNER_RIGHT_REWARD, canReward)
        self:setButtonEnabled(self.KW_BTN_OWNER_RIGHT_REWARD, canReward)
    else
        self.IMG_OWNER_RIGHT_REWARD:setVisible(false)
        self.IMG_OWNER_RIGHT_END:setVisible(not canReward)
        self.KW_BTN_OWNER_RIGHT_REWARD:setVisible(canReward)
        self:setRedDot(self.KW_BTN_OWNER_RIGHT_REWARD, canReward)
        self:setButtonEnabled(self.KW_BTN_OWNER_RIGHT_REWARD, true)
    end

    if not self._isOwner then
        self:setRedDot(self.KW_BTN_OWNER_RIGHT_REWARD, false)
    end
end

-- ============================================================
--  click handlers
-- ============================================================

function PromoteTeaNewView:onClickClose()
    self:close()
end

function PromoteTeaNewView:onClickActRule()
    local taskType = PromoteDefine.TASK_TYPE.USER
    local taskInfo = XH.lobby:getModule("Promote2"):getTaskInfo()
    if taskInfo then
        taskType = taskInfo.taskType or PromoteDefine.TASK_TYPE.USER
    end
    XH.viewManager:openView("PromoteIntroduceNewView", nil, 1, taskType)
end

function PromoteTeaNewView:onClickRewardLog()
    XH.viewManager:openView("PromoteRewardLogNewView")
end

function PromoteTeaNewView:onClickUserDo1()
    self:onClickUserDo(1)
end

function PromoteTeaNewView:onClickUserDo2()
    self:onClickUserDo(2)
end

function PromoteTeaNewView:onClickUserDo(doType)
    if not self:checkClickTime("CLICK_USER_DO") then
        return
    end

    local module = XH.lobby:getModule("Promote2")
    if not module:isOpenAct() then
        XH.TipTool.showToast("活动已结束")
        return
    end

    if self:joinModeRoom() then
        self:close()
        return
    end
    self:noticeCreateTable()
    self:close()

    -- 活动_玩家_2/3人_弹窗_去完成_点击
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.wftgwj032008, {})
end

function PromoteTeaNewView:onClickUserRewardFirst()
    -- 活动_玩家_2/3人_弹窗_每日领取奖励_点击
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.wftgwj032009, {})
    local nowDate = XH.lobby:getModule("Promote2"):getTodayZeroTime()
    XH.lobby:getModule("Promote2"):reqNewSpreadAwardClaim(self._teaNumber, PromoteDefine.NewGameSpreadAwardType.PlayerFirst, {nowDate})
end

function PromoteTeaNewView:onClickUserRewardSecond()
    -- 活动_玩家_2/3人_弹窗_累计领取奖励_点击
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.wftgwj032009, {})
    local nowDate = XH.lobby:getModule("Promote2"):getTodayZeroTime()
    XH.lobby:getModule("Promote2"):reqNewSpreadAwardClaim(self._teaNumber, PromoteDefine.NewGameSpreadAwardType.PlayerSecond, {nowDate})
end

function PromoteTeaNewView:onClickUserRewardPeriod()
    -- 活动_玩家_2/3人_弹窗_累计领取奖励_点击
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.wftgwj032010, {})
    local nowDate = XH.lobby:getModule("Promote2"):getTodayZeroTime()
    XH.lobby:getModule("Promote2"):reqNewSpreadAwardClaim(self._teaNumber, PromoteDefine.NewGameSpreadAwardType.PlayerPeriod, {nowDate})
end

function PromoteTeaNewView:onClickOwnerCreate()
    if not self:checkClickTime("CLICK_OWNER_CREATE", 2000) then
        return
    end

    local module = XH.lobby:getModule("Promote2")
    if not module:isOpenAct() then
        XH.TipTool.showToast("活动已结束")
        return
    end

    if module:hasActPlayModes() then
        XH.TipTool.showToast("已有空桌")
        return
    end

    local quickCreate = self._globalConfig.quickCreate or 0
    if quickCreate == 1 then
        module:quickCreatePlayMode()
    else
        module:normalCreatePlayMode()
    end

    -- 活动_圈主_2/3人_弹窗_快速创桌_点击
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.wftgqz032003, {})
end

function PromoteTeaNewView:onClickOwnerLeftReward()
    if not self._isOwner then
        XH.TipTool.showToast("该奖励仅限比赛场领队领取!")
        return
    end
    local nowDate = XH.lobby:getModule("Promote2"):getTodayZeroTime()
    local taskType = PromoteDefine.NewGameSpreadAwardType.LeaderFirst
    local leaderFirstType = XH.lobby:getModule("Promote2"):getBaseInfo().leaderFirstType
    if leaderFirstType == PromoteDefine.TASK_TYPE.A then
        taskType = PromoteDefine.NewGameSpreadAwardType.LeaderFirst
    elseif leaderFirstType == PromoteDefine.TASK_TYPE.B then
        taskType = PromoteDefine.NewGameSpreadAwardType.LeaderFirstB
    elseif leaderFirstType == PromoteDefine.TASK_TYPE.C then
        taskType = PromoteDefine.NewGameSpreadAwardType.LeaderFirstC
    end
    XH.lobby:getModule("Promote2"):reqNewSpreadAwardClaim(self._teaNumber, taskType, {nowDate})
end

function PromoteTeaNewView:onClickOwnerRightReward()
    if not self._isOwner then
        XH.TipTool.showToast("该奖励仅限比赛场领队领取!")
        return
    end

    local module = XH.lobby:getModule("Promote2")
    local baseInfo = module:getBaseInfo()
    local taskInfo = module:getTaskInfo()
    local canReward = false
    local nowDate = module:getTodayZeroTime()
    local nowDataList = {}
    local taskType = PromoteDefine.NewGameSpreadAwardType.LeaderPeriod

    if baseInfo.leaderTaskType == PromoteDefine.TASK_TYPE.A and (taskInfo.awardLeft or 0) > 0 then
        local logCanReward = module:getNewLogCanReward()
        if logCanReward and logCanReward.days then
            for _, day in ipairs(logCanReward.days) do
                nowDataList[#nowDataList + 1] = day
            end
        end
        canReward = true
        taskType = PromoteDefine.NewGameSpreadAwardType.LeaderPeriod
    elseif baseInfo.leaderTaskType == PromoteDefine.TASK_TYPE.B then
        nowDataList[#nowDataList + 1] = nowDate
        canReward = true
        taskType = PromoteDefine.NewGameSpreadAwardType.LeaderPeriodB
    elseif baseInfo.leaderTaskType == PromoteDefine.TASK_TYPE.C and (taskInfo.awardLeft or 0) > 0 then
        local logCanReward = module:getNewLogCanReward()
        if logCanReward and logCanReward.days then
            for _, day in ipairs(logCanReward.days) do
                nowDataList[#nowDataList + 1] = day
            end
        end
        canReward = true
        taskType = PromoteDefine.NewGameSpreadAwardType.LeaderPeriodC
    end

    if canReward then
        module:reqNewSpreadAwardClaim(self._teaNumber, taskType, nowDataList)
    else
        if baseInfo.leaderTaskType == PromoteDefine.TASK_TYPE.A then
            XH.TipTool.showToast("无奖励可领取！")
        else
            XH.TipTool.showToast("任务未完成！")
        end
    end
end

-- ============================================================
--  game logic helpers
-- ============================================================

function PromoteTeaNewView:joinModeRoom()
    local teahouseData = XH.teaHouseManager:getTeaHouseData()
    if teahouseData == nil then
        return false
    end
    if TeaHouse and TeaHouse.manager and TeaHouse.manager.teahouseGeneral and TeaHouse.manager.teahouseGeneral:checkIsInGame() then
        XH.TipTool.showToast("您目前为游戏暂离状态")
        return true
    end
    local module = XH.lobby:getModule("Promote2")
    return module.joinOrCreateModeRoom and module:joinOrCreateModeRoom() or module:joinModeRoom(self._teaNumber) or false
end

function PromoteTeaNewView:noticeCreateTable()
    local config = self._globalConfig
    if config == nil then return end
    local module = XH.lobby:getModule("Promote2")
    if module:hasActPlayModes() then
        XH.TipTool.showToast("桌子已创建！")
        return
    end
    local baseInfo = XH.lobby:getModule("Promote2"):getBaseInfo()
    if baseInfo then
        XH.TipTool.showToast(self._globalConfig.gameName .. "还为没有创建牌桌，请通知领队/副领队创建牌桌")
    end
end

-- ============================================================
--  utility
-- ============================================================

-- 富文本默认字体与 LABLE_ACT_TIP 的 CSB 配置一致（fangzhengcuyuan.TTF, 38, #FBF9C3）
local RICH_TEXT_DEFAULT_FONT_FACE = "cocosStudio/Common/Font/fangzhengcuyuan.TTF"
local RICH_TEXT_DEFAULT_FONT_SIZE = 38
local RICH_TEXT_DEFAULT_COLOR = "#FFFFFF"

-- 辅助函数：将 0-255 的数字转换为两位十六进制字符串
local function toHexStr(num)
    -- string.format("%02x", num) 会自动处理补零，例如 15 -> "0f", 255 -> "ff"
    return string.format("%02x", num)
end

-- 主函数：转换 cc.c4b 为 #RRGGBB
local function c4bToHex(color)
    -- 检查输入是否为 table 且包含 r,g,b 字段
    if type(color) ~= "table" or not color.r then
        return "#000000" -- 或者返回 nil
    end

    local hex = "#" .. toHexStr(color.r) .. toHexStr(color.g) .. toHexStr(color.b)
    return hex
end

function PromoteTeaNewView:initTextByConfig(str, node, useRichText, anPoint)
    if str == nil or node == nil then return end
    anPoint = anPoint or cc.p(0.5, 0.5)
    local strVal = tostring(str)
    if useRichText and strVal ~= "" then
        -- 富文本显示，参考 MessageBoxView.lua；用默认字号包裹避免引擎默认小字
        local fontSize = RICH_TEXT_DEFAULT_FONT_SIZE
        local fontColor = RICH_TEXT_DEFAULT_COLOR
        if node.getFontSize and type(node.getFontSize) == "function" then
            local fs = node:getFontSize()
            if fs and fs > 0 then fontSize = fs end
        end
        if node.getTextColor and type(node.getTextColor) == "function" then
            local fc = node:getTextColor()
            if fc and fc ~= "" then fontColor = c4bToHex(fc) end
        end
        strVal = string.format("<font face='%s' size='%s' color='%s'>%s</font>",
            RICH_TEXT_DEFAULT_FONT_FACE, fontSize, fontColor, strVal)
        node:removeAllChildren()

        print(strVal)
        local ok, richText = pcall(function()
            return ccui.RichText:createWithXML(strVal, {})
        end)
        if ok and richText then
            richText:setAnchorPoint(anPoint)
            richText:ignoreContentAdaptWithSize(false)
            if anPoint.y == 0.5 then
                richText:setHorizontalAlignment(cc.TEXT_ALIGNMENT_CENTER)
            end
            local contentSize = node:getContentSize()
            richText:setContentSize(contentSize)
            richText:setPosition(cc.p(contentSize.width * anPoint.x, contentSize.height * anPoint.y))
            node:addChild(richText)
            node:setString("")
        else
            node:setString(strVal)
        end
    else
        node:setString(strVal)
    end
end

function PromoteTeaNewView:initImageUIByConfig(imgStr, node, bcbl)
    if node == nil then return end
    if imgStr == nil then return end
    if imgStr == "" then
        node:setVisible(false)
    else
        node:setVisible(true)
        Utils:setImgUrl(node, imgStr, bcbl == nil and true or bcbl)
    end
end

function PromoteTeaNewView:setPlayerAwardPool(awardList, imgNode, textNode)
    if not awardList or #awardList == 0 then return end
    local award = awardList[1]
    if award then
        local module = XH.lobby:getModule("Promote2")
        self:initImageUIByConfig(award.img, imgNode)
        self:initTextByConfig("x" .. module:getUserAwardCount(award.propId, award.count), textNode)
    end
end

function PromoteTeaNewView:setRedDot(parentNode, visible)
    if parentNode == nil then return end
    local red = parentNode:getChildByName("_red")
    if red then
        red:setVisible(visible)
    end
end

local chineseNumbers = {"零", "一", "二", "三", "四", "五", "六", "七", "八", "九"}
function PromoteTeaNewView:convertNumbersToChinese(text)
    return string.gsub(tostring(text), "%d", function(d)
        return chineseNumbers[tonumber(d) + 1]
    end)
end

function PromoteTeaNewView:checkClickTime(key, interval)
    interval = (interval or 500) / 1000
    local nowTime = os.time()
    local lastTime = self._clickTimes[key] or 0
    self._clickTimes[key] = nowTime
    return (nowTime - lastTime) >= interval
end

function PromoteTeaNewView:updateSetup()
    self:runAction(cc.Sequence:create(
        cc.DelayTime:create(0.2),
        cc.CallFunc:create(function()
            self:updateView()
        end)
    ))
end

return PromoteTeaNewView
   u�  