local LuckyTaskPromoteModule = class("LuckyTaskPromoteModule", XH.ModuleBase)
local LuckyMissionConfig = require("lobby.Modules.LuckyMission.Config")

-- 领队推广任务页签：用于自动拉任务并弹 LuckyTaskPromotePopView
local PAGE_LEADER_PROMOTE = "act2_task_leader"
-- 幸运任务推广弹窗每日最多弹出次数
local LEADER_PROMOTE_POP_DAILY_LIMIT = 3

-- 曝光业务来源：LuckyMission / LuckyTask 互斥，只会命中一个
local PROMOTE_SOURCE = {
    NONE = 0,
    MISSION = 1,
    LUCKY_TASK = 2,
}

function LuckyTaskPromoteModule:ctor()
    LuckyTaskPromoteModule.super.ctor(self)
    self._pageLeaderPromote = PAGE_LEADER_PROMOTE
    self._autoPopCnts = LEADER_PROMOTE_POP_DAILY_LIMIT
    self._hasLeaderPromote = false
    self._promoteTaskData = nil
    self._promoteSource = PROMOTE_SOURCE.NONE
    self._luckyTaskPromoteInfo = nil
end

function LuckyTaskPromoteModule:getReqConfig()
    return {
        -- LuckyMission 页签内容
        GetPromoteTaskInfo = { reqPath = "lobby.Req.LuckyMission.GetTaskV2Request", callBack = self.respPromoteTaskInfo },
        -- LuckyTask（旧幸运任务）内容
        GetPromoteLuckyTaskContent = { reqPath = "lobby.Req.LuckTask.ReqLuckTaskGetContent", callBack = self.respPromoteLuckyTaskContent },
    }
end

function LuckyTaskPromoteModule:_refreshPromoteConfig()
    self._pageLeaderPromote = XH.lobby:getModule("Configuration"):getAllConfigData("LuckyTaskPromotePageName") or PAGE_LEADER_PROMOTE
    self._autoPopCnts = XH.lobby:getModule("Configuration"):getAllConfigData("LuckyTaskPromoteAutoPopCnt") or LEADER_PROMOTE_POP_DAILY_LIMIT
end

-- LuckyMission 基础页签回包后通知（登录检测弹窗入口）
function LuckyTaskPromoteModule:onLuckyMissionBase(req, baseActInfo)
    -- 已由 LuckyTask 场景认领，不再走 Mission
    if self._promoteSource == PROMOTE_SOURCE.LUCKY_TASK then
        return
    end
    self:_refreshPromoteConfig()
    self._hasLeaderPromote = self:_hasPageByName(baseActInfo and baseActInfo.pageList, self._pageLeaderPromote)
    if not self._hasLeaderPromote then
        return
    end
    self._promoteSource = PROMOTE_SOURCE.MISSION
    if req.isNeedCheckPop and self:canShowLuckyTaskPromotePop() then
        self:requestLeaderPromoteTaskInfo()
    end
end

-- LuckyTask GetPage 回包后通知（与 Mission 互斥的另一曝光入口）
function LuckyTaskPromoteModule:onLuckyTaskPage(req, pageData)
    -- 已由 LuckyMission 场景认领，不再走 LuckyTask
    if self._promoteSource == PROMOTE_SOURCE.MISSION then
        return
    end
    self:_refreshPromoteConfig()
    self._luckyTaskPromoteInfo = self:_findLuckyTaskPromoteInfo(pageData, self._pageLeaderPromote)
    self._hasLeaderPromote = self._luckyTaskPromoteInfo ~= nil
    if not self._hasLeaderPromote then
        return
    end
    self._promoteSource = PROMOTE_SOURCE.LUCKY_TASK
    if req.isNeedCheckPop and self:canShowLuckyTaskPromotePop() then
        self:requestLuckyTaskPromoteContent()
    end
end

function LuckyTaskPromoteModule:requestLeaderPromoteTaskInfo()
    self:startReq("GetPromoteTaskInfo", LuckyMissionConfig.REQ_TYPE.CONTENT, self._pageLeaderPromote, XH.KW_CONFIG_LOGIC_TIME_OUT)
end

function LuckyTaskPromoteModule:respPromoteTaskInfo(req, type, data)
    if type == XH.Req.TYPE.SUCCESS then
        self._promoteTaskData = data
        self:tryOpenLuckyTaskPromotePop(self._promoteTaskData)
    end
end

-- LuckyTask 路径：按活动 id 拉内容
function LuckyTaskPromoteModule:requestLuckyTaskPromoteContent()
    if not self._luckyTaskPromoteInfo or not self._luckyTaskPromoteInfo.id then
        return
    end
    local include = 0
    self:startReq("GetPromoteLuckyTaskContent", self._luckyTaskPromoteInfo.id, include, 10)
end

function LuckyTaskPromoteModule:respPromoteLuckyTaskContent(req, type, data)
    if type ~= XH.Req.TYPE.SUCCESS then
        return
    end
    if not data or not data.box or not data.box[1] then
        return
    end
    -- 统一成 tryOpen 使用的 boxList 结构
    self._promoteTaskData = { boxList = data.box }
    self:tryOpenLuckyTaskPromotePop(self._promoteTaskData)
end

-- 曝光检测：登录 / 进入比赛场等场景调用（受每日上限控制）
function LuckyTaskPromoteModule:checkLuckyTaskPromotePop()
    if not self:canShowLuckyTaskPromotePop() then
        return
    end
    if XH.viewManager:isViewExist("LuckyTaskPromotePopView") then
        return
    end
    if not self._hasLeaderPromote then
        return
    end
    self:tryOpenLuckyTaskPromotePop(self._promoteTaskData)
end

function LuckyTaskPromoteModule:_hasPageByName(pageList, pageName)
    if not pageList then
        return false
    end
    for i = 1, #pageList do
        if pageList[i].name == pageName then
            return true
        end
    end
    return false
end

-- LuckyTask pages.info 中按 name 匹配推广任务
function LuckyTaskPromoteModule:_findLuckyTaskPromoteInfo(pageData, pageName)
    if not pageData or not pageData.info then
        return nil
    end
    if pageData.name == pageName and pageData.info[1] then
        return pageData.info[1]
    end
    for i = 1, #pageData.info do
        if pageData.info[i].name == pageName then
            return pageData.info[i]
        end
    end
    return nil
end

function LuckyTaskPromoteModule:canShowLuckyTaskPromotePop()
    local todayPopTimes = XH.userDefault:getValue(XH.userDefault.KEY_ID.KW_LUCKY_TASK_PROMOTE_POP, 0) or 0
    return todayPopTimes < self._autoPopCnts
end

function LuckyTaskPromoteModule:recordLuckyTaskPromotePop()
    local todayPopTimes = XH.userDefault:getValue(XH.userDefault.KEY_ID.KW_LUCKY_TASK_PROMOTE_POP, 0) or 0
    XH.userDefault:setValue(XH.userDefault.KEY_ID.KW_LUCKY_TASK_PROMOTE_POP, todayPopTimes + 1)
end

function LuckyTaskPromoteModule:tryOpenLuckyTaskPromotePop(taskData)
    if not taskData or not taskData.boxList or not taskData.boxList[1] then
        return
    end
    if not self:canShowLuckyTaskPromotePop() then
        return
    end
    if XH.viewManager:isViewExist("LuckyTaskPromotePopView") then
        return
    end
    local task = taskData.boxList[1]
    for i,v in ipairs(taskData.boxList) do
        if v.Sort == 2 then
            task = v
        end
    end
    local content = task.content and task.content[1]
    if not content then
        return
    end
    local curTwoPlayer = tonumber(content.maxPlayerCnt) or 0
    local targetTwoPlayer = tonumber(content.target) or 0
    local rewardInfo = content.rewards and content.rewards[1]
    self:recordLuckyTaskPromotePop()
    XH.viewManager:openView("LuckyTaskPromotePopView", nil, {
        curTwoPlayer = curTwoPlayer,
        targetTwoPlayer = targetTwoPlayer,
        needUp = math.max(0, targetTwoPlayer - curTwoPlayer),
        rewardCard = self:getPropCntByInfo(rewardInfo),
        promoteSource = self._promoteSource == PROMOTE_SOURCE.LUCKY_TASK and "luckyTask" or "mission",
    })
end

function LuckyTaskPromoteModule:getPropCntByInfo(data)
    if not data then
        return 0
    end
    if data.id == XH.areaData:getPropLimitedTimeRoomCardID() then
        if XH.areaData:getPropLimitedTimeRoomCardRatio() then
            return math.floor(data.count / XH.areaData:getPropLimitedTimeRoomCardRatio())
        end
    end
    return data.count
end

return LuckyTaskPromoteModule
�