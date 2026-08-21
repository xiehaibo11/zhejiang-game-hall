local LobbyBattlePassView = class("LobbyBattlePassView", XH.ViewBase)

local RewardContentView = require("lobby.Modules.BattlePass.Lobby.RewardContentView")
local TaskContentView = require("lobby.Modules.BattlePass.Lobby.TaskContentView")
local BattlePassConfig = require("lobby.Modules.BattlePass.Config")
local ActionUtils = require("lobby.Modules.GoldNew.Tool.ActionUtils")
-- 界面类型定义
LobbyBattlePassView.ViewType = {
    NODE = 0,
    REWARD = 1,
    TASK = 2
}

local commonAniPath = "res/animation/Common/"

-- UI名字定义
function LobbyBattlePassView:getCSBPath()
    return "hall/CSB/BattlePass/Lobby/View.csb"
end

--- 获得节点的绑定信息
function LobbyBattlePassView:getBindingInfo()
    return {
        ["_KW_BTN_CLOSE"] = {varName = "_btnClose", type = XH.UI_TYPE.IMAGE_TOBUTTON, onTouchEnded = "onTouchEventClose"},
        ["_KW_BTN_HELP"] = {varName = "_btnHelp", type = XH.UI_TYPE.IMAGE_TOBUTTON, onTouchEnded = "onTouchEventHelp"},
        ["_KW_BTN_REWARD_PREVIEW"] = {varName = "_btnRewardPreview", type = XH.UI_TYPE.IMAGE_TOBUTTON, onTouchEnded = "onTouchEventRewardPreview"},
        ["_KW_TAB_REWARD"] = {varName = "_btnTabReward", type = XH.UI_TYPE.IMAGE_TOBUTTON, onTouchEnded = "onTouchEventTabReward"},
        ["_KW_TAB_TASK"] = {varName = "_btnTabTask", type = XH.UI_TYPE.IMAGE_TOBUTTON, onTouchEnded = "onTouchEventTabTask"},
        ["_KW_ACT_TIME"] = {varName = "_timeLabel"},
        ["_KW_PANEL_REWARD"] = {varName = "_panelReward"},
        ["_KW_PANEL_TASK"] = {varName = "_panelTask"},
        ["_KW_BTN_LUCK_PASS"] = {varName = "_btnLuckPass", type = XH.UI_TYPE.IMAGE_TOBUTTON, onTouchEnded = "onTouchEventLuckPass"},
        ["_KW_BTN_ONE_KEY_REWARD"] = {varName = "_btnOneKeyReward", type = XH.UI_TYPE.IMAGE_TOBUTTON, onTouchEnded = "onTouchEventOneKeyReward"},
        ["_KW_TITLE_TXT"] = {varName = "_titleLabel"},
        ["_KW_REWARD_REDPOINT"] = {varName = "_rewardRedPoint"},
        ["_KW_TASK_REDPOINT"] = {varName = "_taskRedPoint"},
        ["_KW_ONE_KEY_REDPOINT"] = {varName = "_oneKeyRedPoint"},
        ["_KW_LIGHT_ANI"] = {varName = "_aniLight"},
        ["_KW_FENGYE_ANI"] = {varName = "_aniFengYe"},
        ["_KW_BTN_LUCK_PASS_ANI"] = {varName = "_aniBtnBuy"},
        ["_KW_ANI_REN_LIGHT"] = {varName = "_aniRenLight"},
        ["_KW_TOP_NODE"] = {varName = "_panelTop"},
        ["_KW_IMG_REN"] = {varName = "_imgRen"},
        ["_KW_RIGHT_BOTTOM"] = {varName = "_panelRightBottom"},
        ["_KW_MAIN_NODE"] = {varName = "_panelMain"},
        ["_KW_ROOT_LAYER_ANI"] = {varName = "_panelAni"},
        ["_KW_ROOT_BG"] = {varName = "_panelBg"},
        ["_KW_ACT_DETAIL"] =  {varName = "_actDetail"},
    }
end

function LobbyBattlePassView:getProxyEvents()
    return {
        { module = XH.lobby:getModule("BattlePass.Lobby"), eventKeyName = "EVENT_BATTLE_PASS_RESP", callBack = "onEventBattlePassResp" },
        { module = XH.lobby:getModule("BattlePass.Lobby"), eventKeyName = "EVENT_UPDATE_BATTLE_PASS_REDPOINT", callBack = "onEventUpdateBattlePassRedPoint" },
    }
end

function LobbyBattlePassView:ctor(areaId)
    LobbyBattlePassView.super.ctor(self)
    self._tabIndex = LobbyBattlePassView.ViewType.REWARD --1 奖励 2 任务
    self.lobbyBattlePassData = XH.lobby:getModule("BattlePass.Lobby"):getBattlePassInfo() 
    if self.lobbyBattlePassData then
        self:initUI()
    end
    -- 打开时再请求数据
    XH.lobby:getModule("BattlePass.Lobby"):reqActivityInfo()
    -- XH.lobby:getModule("DarkShuangKouChallenge"):reqGameRoundChallengeInfo()
    -- XH.lobby:getModule("DarkShuangKouChallenge"):reqDailyQuizChallengeInfo()
    -- XH.lobby:getModule("DarkShuangKouChallenge"):reqCardSkillChallengeInfo()
    -- local prop_type = BattlePassConfig:getBattlePassShopId()
    -- XH.lobby:getModule("BattlePass"):reqExchangeProductsInfo(prop_type, true)
    local lobbytype = XH.lobby:getModule("Lobby"):getLobbyType()
    local page = lobbytype == XH.LOBBY_TYPE.XIUXIAN and "金币大厅" or "大厅"
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.zjq25042703, {page = page})
    XH.lobby:getModule("BattlePass.Lobby"):setPageType(BattlePassConfig.LobbyPageType.REWAED)
end

function LobbyBattlePassView:initUI()
    XH.SpineManager:playAni(self._aniLight, commonAniPath, "zzb_ty_taiyangguang2", "animation", true)
    XH.SpineManager:playAni(self._aniFengYe, commonAniPath, "zzb_ty_fengye", "animation", true)
    XH.SpineManager:playAni(self._aniBtnBuy, commonAniPath, "zzb_ty_ansg", "animation", true)
    XH.SpineManager:playAni(self._aniRenLight, commonAniPath, "zzb_ty_kuosanguang", "animation", true)
    self:initContentView()
    self:flushTitle()
    self:flushTabRedPoint()
    self:updateOneKeyBtnStatus()
    self:flushActTime()
    self:showContentView()
    self:startHide()
    self:startShow()
end

function LobbyBattlePassView:flushTitle()
    local lobbyBattlePassConf = XH.lobby:getModule("BattlePass.Lobby"):getBattlePassConf() 
    local title = lobbyBattlePassConf.name or ""
    self._titleLabel:setString(title)

    -- apdate 
    local apdateX = self._titleLabel:getPositionX() + self._titleLabel:getContentSize().width + 32
    self._actDetail:setPositionX(apdateX)
end

function LobbyBattlePassView:flushActTime()
    local endTime = XH.lobby:getModule("BattlePass.Lobby"):getActEndTime() 
    local showTimeDesc = "活动时间：%d月%d日结束"
    local date = os.date("*t", endTime)
    self._timeLabel:setString(string.format(showTimeDesc, date.month, date.day))
end

function LobbyBattlePassView:flushTabRedPoint()
    local hasAwardReward = XH.lobby:getModule("BattlePass.Lobby"):checkAwardReward()
    self._rewardRedPoint:setVisible(hasAwardReward)
    local hasTaskReward = XH.lobby:getModule("BattlePass.Lobby"):checkTaskReward()
    self._taskRedPoint:setVisible(hasTaskReward)
end

function LobbyBattlePassView:onTouchEventHelp(send, event)
    local endTime = XH.lobby:getModule("BattlePass.Lobby"):getActEndTime() 
    local data = {
        endTime = endTime,
        content = "活动说明："..
        "\n   ★每期活动，免费版默认解锁，通过完成任务积累经验提升\n       等级，即可领取奖励。还可通过解锁雀神令，获得更丰富\n       更高价值的奖励。"..
        "\n   ★每日任务将在每日凌晨刷新。"..
        "\n   ★经验达到上限后，通过任务获得经验将无法提升雀神令等\n       级。"
    }
    XH.viewManager:openView("BattlePassRuleView", nil, data)
    XH.lobby:getModule("BattlePass.Lobby"):throwBtnClickData("规则")
end

function LobbyBattlePassView:onTouchEventClose(send, event)
    XH.lobby:getModule("BattlePass.Lobby"):throwBtnClickData("关闭")
    self:close()
    XH.lobby:getModule("GoldNew"):closeFullView("LobbyBattlePassView", true)
end

function LobbyBattlePassView:onTouchEventRewardPreview(send, event)
    XH.viewManager:openView("LobbyBattlePassRewardPreView")
    XH.lobby:getModule("BattlePass.Lobby"):throwBtnClickData("预览奖励")
end

function LobbyBattlePassView:onTouchEventTabReward(send, event)
    if self._tabIndex == LobbyBattlePassView.ViewType.REWARD then
        return
    end
    self._tabIndex = LobbyBattlePassView.ViewType.REWARD
    self:showContentView()
    self:updateOneKeyBtnStatus()
    XH.lobby:getModule("BattlePass.Lobby"):setPageType(BattlePassConfig.LobbyPageType.REWAED)
end

function LobbyBattlePassView:onTouchEventTabTask(send, event)
    if self._tabIndex == LobbyBattlePassView.ViewType.TASK then
        return
    end
    self._tabIndex = LobbyBattlePassView.ViewType.TASK
    self:showContentView()
    self:updateOneKeyBtnStatus()
    -- 埋点
    local pageType = BattlePassConfig.LobbyPageType.EVERYDAYTASK
    if self.taskView and self.taskView.getCurTabIndex then
        pageType = self.taskView:getCurTabIndex() == BattlePassConfig.TaskType.CHALLENGE and BattlePassConfig.LobbyPageType.CHALLENGETASK or BattlePassConfig.LobbyPageType.EVERYDAYTASK
    end
    XH.lobby:getModule("BattlePass.Lobby"):setPageType(pageType)
end

function LobbyBattlePassView:initContentView()
   if not self.rewardView then
        local rewardView = RewardContentView.new()
        self._panelReward:addChild(rewardView)
        self.rewardView = rewardView
   end
   if not self.taskView then
       local taskView = TaskContentView.new(self)
       self._panelTask:addChild(taskView)
       self.taskView = taskView
   end
end

function LobbyBattlePassView:showContentView()
    if not self._panelReward or not self._panelTask or not self._tabIndex then
        return
    end
    self._panelReward:setVisible(LobbyBattlePassView.ViewType.REWARD == self._tabIndex)
    self._panelTask:setVisible(LobbyBattlePassView.ViewType.TASK == self._tabIndex)
    self._btnTabReward:setOpacity(LobbyBattlePassView.ViewType.REWARD == self._tabIndex and 255 or 0)
    self._btnTabTask:setOpacity(LobbyBattlePassView.ViewType.TASK == self._tabIndex and 255 or 0)
end

function LobbyBattlePassView:updateOneKeyBtnStatus()
    -- 更新领取按钮状态
    if self._tabIndex == LobbyBattlePassView.ViewType.REWARD then
        local hasAwardReward = XH.lobby:getModule("BattlePass.Lobby"):checkAwardReward()
        self._btnOneKeyReward:setVisible(hasAwardReward)
    elseif self._tabIndex == LobbyBattlePassView.ViewType.TASK then
        if not self.taskView then
            return
        end
        local taskType = self.taskView._tabIndex
        local hasTaskReward = XH.lobby:getModule("BattlePass.Lobby"):checkTaskRewardByTaskType(nil, taskType)
        self._btnOneKeyReward:setVisible(hasTaskReward)
    end
end

function LobbyBattlePassView:onEventBattlePassResp(event)
    self:flushTitle()
    self:flushTabRedPoint()
    self:updateOneKeyBtnStatus()
    self:flushActTime()
    self:showContentView()
end

function LobbyBattlePassView:onTouchEventLuckPass(send, event)
   XH.viewManager:openView("LobbyBattlePassUnlockView", nil, {entrance = BattlePassConfig.LobbyUnLockEntrance.MAIN})
   XH.lobby:getModule("BattlePass.Lobby"):throwBtnClickData("解锁雀神令")
end

function LobbyBattlePassView:onTouchEventOneKeyReward(send, event)
    if self._tabIndex == LobbyBattlePassView.ViewType.REWARD then
        XH.lobby:getModule("BattlePass.Lobby"):reqAllReward()
    elseif self._tabIndex == LobbyBattlePassView.ViewType.TASK then
        XH.lobby:getModule("BattlePass.Lobby"):reqAllTaskReward(nil, self.taskView._tabIndex)
    end
    XH.lobby:getModule("BattlePass.Lobby"):throwBtnClickData("一键领取")
end

function LobbyBattlePassView:onEventUpdateBattlePassRedPoint(event)
    if not event or not event.data then
        return
    end
   self:flushTabRedPoint()
   self:updateOneKeyBtnStatus()
end

-----------转场动效-----------
function LobbyBattlePassView:startShow()
    ActionUtils:runScale(self._panelBg, true, false, 2/30)
    ActionUtils:runTopFadeIn(self._panelTop, true, false, 6/30)
    ActionUtils:runTopFadeIn(self._panelAni, true, 6/30)
    ActionUtils:runRightMoveIn(self._panelRightBottom, true, false, 6/30)
    ActionUtils:runRightMoveIn(self._panelMain, true, false, 6/30)
end

function LobbyBattlePassView:startHide()
    ActionUtils:runRightMoveOut(self._panelRightBottom, false, false, 0)
    ActionUtils:runRightMoveOut(self._panelMain, false, false, 0)
end

return LobbyBattlePassView
L-  