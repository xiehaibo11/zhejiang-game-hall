local LuckyTaskModule = class("LuckyTaskModule", XH.ModuleBase)
local LuckyTaskDefine = require("lobby.Modules.LuckyTask.Define")
local TaskDefine = require("app.Define.TaskDefine")
local LobbyConfig = require("lobby.Modules.Lobby.Config")
local YGiftBankruptcyDefine = require("lobby.Modules.YGiftBankruptcy.Define")
local ConfigurationDefine = require("lobby.Modules.Configuration.Define")
local RecallNewConfig = require("lobby.Modules.RecallNew.Config")

LuckyTaskModule.EVENT_NotifyLuckyTask = "EVENT_NotifyLuckyTask"
LuckyTaskModule.EVENT_NotifyPageStatus = "EVENT_NotifyPageStatus"
LuckyTaskModule.EVENT_NUIAddLobbyIcon = "EVENT_NUIAddLobbyIcon"
LuckyTaskModule.EVENT_NotifyLuckyClose = "EVENT_NotifyLuckyClose"
LuckyTaskModule.EVENT_NotifyLuckyTaskJoin = "EVENT_NotifyLuckyTaskJoin"
LuckyTaskModule.EVENT_NotifyLuckyTaskPage = "EVENT_NotifyLuckyTaskPage"
LuckyTaskModule.EVENT_NotifyLuckyTaskSYSTEMTIME = "EVENT_NotifyLuckyTaskSYSTEMTIME"
LuckyTaskModule.EVENT_NotifyLuckyTaskAwardRecord = "EVENT_NotifyLuckyTaskAwardRecord"
LuckyTaskModule.EVENT_NUIUpdateLobbyIconRedPoint = "EVENT_NUIUpdateLobbyIconRedPoint"
LuckyTaskModule.EVENT_NUIUPDATELOBBYICONBUBBLETIP = "EVENT_NUIUPDATELOBBYICONBUBBLETIP"
LuckyTaskModule.EVENT_NUIUpdateLobbyIconAnimation = "EVENT_NUIUpdateLobbyIconAnimation"

function LuckyTaskModule:getReqConfig()
    return {
        --
        ReqLuckTaskGetContent = {reqPath = "lobby.Req.LuckTask.ReqLuckTaskGetContent", callBack = self.respGetContent},
        ReqGetAllContent = {reqPath = "lobby.Req.LuckTask.ReqLuckTaskGetContent", callBack = self.respGetAllContent},
        ReqLuckTaskGetDrawLogs = {reqPath = "lobby.Req.LuckTask.ReqLuckTaskGetDrawLogs", callBack = self.respGetDrawLogs},
        ReqLuckTaskGetPage = {reqPath = "lobby.Req.LuckTask.ReqLuckTaskGetPage", callBack = self.respGetPage},
        ReqLuckTaskGetReward = {reqPath = "lobby.Req.LuckTask.ReqLuckTaskGetReward", callBack = self.respGetReward},
        ReqParticipate = {reqPath = "lobby.Req.LuckTask.ReqParticipate", callBack = self.respParticipate},
        ReqSystemTimes = {reqPath = "app.Req.Task.ReqTaskPercent", callBack = self.onReqTaskPercentCallBack},
        ReqActList = {reqPath = "lobby.Req.LuckTask.ReqActList", callBack = self.respActList}
    }
end

-- 获取基础任务
function LuckyTaskModule:reqActList()
    XH.lobby:getModule("LuckyMission"):luckyMissionBaseReq(true)
    XH.lobby:getModule("SxvipAct"):subjectLoginCallBack()
    XH.lobby:getModule("UnlimitGoldAct"):subjectLoginCallBack()
    self:startReq("ReqActList", 10)
end

function LuckyTaskModule:respActList(req, type, data)
    if type == XH.Req.TYPE.SUCCESS then
        XH.lobby:getModule("RecallNew"):setActId(0)
        XH.lobby:getModule("ToponAct"):setSignActId()
        XH.lobby:getModule("NewYear2026"):flushAids(data)
        XH.lobby:getModule("SxvipAct"):flushAids(data)
        XH.lobby:getModule("UnlimitGoldAct"):flushAids(data)
        XH.lobby:getModule("UnlimitBoxAct"):flushAids(data)
        XH.lobby:getModule("Share"):flushAids(data)
        -- 请神教程目标用户：活动列表 type==god_tips
        do
            local qingShenMod = XH.lobby:getModule("QingShen")
            if qingShenMod and qingShenMod.setHasGodTipsAct then
                qingShenMod:setHasGodTipsAct(false)
            end
        end
        local unlimitedGiftInfo = {}
        self._actList = data.act or {}
        XH.lobby:getModule("LuckyTurnTableAct"):setWhiteAct(false)
        for _, info in pairs(data.act) do
            if info.type == "god_tips" and self:isInActTime(info) then
                local qingShenMod = XH.lobby:getModule("QingShen")
                if qingShenMod and qingShenMod.setHasGodTipsAct then
                    qingShenMod:setHasGodTipsAct(true)
                end
            elseif info.type == "renwutuisong" then
                -- self:reqTaskList()
            elseif info.type == YGiftBankruptcyDefine.ACTLIST.Bankruptcy and self:isInActTime(info) then
                XH.lobby:getModule("Shop"):reqSystemTimes()
                XH.lobby:getModule("YGiftBankruptcy"):setActivityId(info.aid)
            elseif info.type == YGiftBankruptcyDefine.ACTLIST.BankruptcyV2 and self:isInActTime(info) then
                XH.lobby:getModule("Shop"):reqSystemTimes()
                XH.lobby:getModule("YGiftBankruptcyV2"):setActivityId(info.aid, 30579)
            elseif info.type == YGiftBankruptcyDefine.ACTLIST.BankruptcyAD and self:isInActTime(info) then
                XH.lobby:getModule("YGiftBankruptcy"):setADActivityId(info.aid)
            elseif info.type == YGiftBankruptcyDefine.ACTLIST.Defeat and self:isInActTime(info) then
                XH.lobby:getModule("YGiftDefeat"):setActivityId(info.aid)
            elseif info.type == YGiftBankruptcyDefine.ACTLIST.Enter and self:isInActTime(info) then
                XH.lobby:getModule("YGiftEnter"):setActivityId(info.aid)
            elseif info.type == YGiftBankruptcyDefine.ACTLIST.EnterV2 and self:isInActTime(info) then
                XH.lobby:getModule("YGiftEnterV2"):setActivityId(info.aid)
            elseif info.type == YGiftBankruptcyDefine.ACTLIST.SpringFestivalRecall and self:isInActTimeAllTime(info) then
                XH.lobby:getModule("SpFestAct"):setActivityId(info.aid)
            elseif info.type == YGiftBankruptcyDefine.ACTLIST.TimeLoginAct and self:isInActTime(info) then
                XH.lobby:getModule("TimeLoginAct"):setActivityId(info.aid)
            elseif info.type == "sign_activity" then
                XH.lobby:getModule("ToponAct"):setSignActId(info.aid)
                XH.lobby:getModule("ToponAct"):reqSignDetail()
            elseif info.type == "ActivityResurrectionGift" then
                XH.lobby:getModule("ReviveGift"):setActivityId(info.aid)
            elseif info.type == "ActivityTeaching" then
                XH.lobby:getModule("TeachingGift"):setActivityId(info.aid)
            elseif info.type == "JuShuTiaoZhan" then
                XH.lobby:getModule("DarkShuangKouChallenge"):setGameRoundActivityId(info.aid)
            elseif info.type == "MeiRiDaTi" then
                XH.lobby:getModule("DarkShuangKouChallenge"):setDailyQuizActivityId(info.aid)
            elseif info.type == "PaiJiTiaoZhan" then
                XH.lobby:getModule("DarkShuangKouChallenge"):setCardSkillActivityId(info.aid)
            elseif info.type == "zhanling_act" then
                if info.subType == "lobby" then
                    XH.lobby:getModule("BattlePass.Lobby"):setActivityId(info.aid, 1)
                elseif info.subType == "30579_1" then
                    XH.lobby:getModule("BattlePass.DarkShuangKou"):setActivityId(info.aid, 1)
                elseif info.subType == "30579_2" then
                    XH.lobby:getModule("BattlePass.DarkShuangKou"):setActivityId(info.aid, 2)
                elseif info.subType == "30579_3" then
                    XH.lobby:getModule("BattlePass.DarkShuangKou"):setActivityId(info.aid, 3)
                end
            elseif info.type == "WuXianJingXi" then
                table.insert(unlimitedGiftInfo,info)
            elseif info.type == "private_room_conversion" then
                XH.lobby:getModule("BoxGuide"):setBoxConversionActId(info.aid)
            elseif info.type == "private_room_free" then
                XH.lobby:getModule("BoxGuide"):setCreateFreeActId(info.aid)
            elseif info.type == RecallNewConfig.ReBackWebTag then
                XH.lobby:getModule("RecallNew"):setActId(info.aid)
                XH.lobby:getModule("RecallNew"):getReBackRedPointRequest()
            elseif info.type == "ActivityMonthlyCard" then
                XH.lobby:getModule("MonthlyCard"):setActivityId(info.aid)
            elseif info.type == "ApplyFriendClub" and self:isInActTime(info) then
                XH.lobby:getModule("FriendTea"):setActivityId(info.aid)
                XH.lobby:getModule("FriendTea"):reqListHallFriends()
            elseif info.type == "ActivityKoiFish" and self:isInActTime(info) then
                XH.lobby:getModule("Double12"):setActivityId(info.aid, info)
            elseif info.type == "gaoxiao_white" and self:isInActTime(info) then
                XH.lobby:getModule("Lobby"):setLianYunWhite(true)
            elseif info.type == "act2_task_game_day" then
                XH.lobby:getModule("GameCenter"):setActivityId(info.aid)
            elseif info.type == "NewGameSpread" then
                XH.lobby:getModule("Promote2"):setActivityInfo(info)
            elseif XH.lobby:getModule("LuckyTurnTableAct"):isWhiteActInfo(info) and self:isInActTime(info) then
                XH.lobby:getModule("LuckyTurnTableAct"):setWhiteAct(true)
                XH.lobby:getModule("LuckyTurnTableAct"):tryDailyAutoPop()
            end
        end
        if #unlimitedGiftInfo > 0 then
            table.sort(
                unlimitedGiftInfo,
                function(a, b)
                    return a.aid < b.aid
                end
            )
            XH.lobby:getModule("UnlimitedGift"):setActivityId(unlimitedGiftInfo[1])
        end
        XH.lobby:getModule("GoldNew"):onActs(data.act)
    else
        print("ReqActList TIMEOUT")
    end
end

-- 判断活动是否在线
function LuckyTaskModule:isInActTime(info)
    if not info then
        return false
    end
    local time = XH.lobby:getModule("Shop"):getServerTime()
    if time < tonumber(info["end"]) and time > tonumber(info.start) and time > tonumber(info.online) and time < tonumber(info.offline) then
        return true
    end
    return false
end

-- 判断活动是否在线
function LuckyTaskModule:isInActTimeAllTime(info)
    if not info then
        return false
    end
    local time = XH.lobby:getModule("Shop"):getServerTime()
    if time < tonumber(info["end"]) and time > tonumber(info.start) then
        return true
    end
    return false
end

function LuckyTaskModule:RequestSysTime()
    self:startReq("ReqSystemTimes", XH.playerData:getNumberID(), 0, 120, TaskDefine.KW_SYSTEM_TIME, XH.areaData:getSrsGroupID(), 10)
end

function LuckyTaskModule:onReqTaskPercentCallBack(cell, type, data)
    if type == XH.Req.TYPE.SUCCESS then
        local timestamp = json.decode(data.acData).time
        if timestamp ~= nil then
            self:dispatchEvent({name = LuckyTaskModule.EVENT_NotifyLuckyTaskSYSTEMTIME, data = timestamp})
        end
    end
end

function LuckyTaskModule:getCurTask()
    return self._curTask
end

function LuckyTaskModule:setCurTask(task)
    self._curTask = task
    self:dispatchEvent({name = LuckyTaskModule.EVENT_NotifyLuckyTask, data = self._curTask})
end

function LuckyTaskModule:getDefaultTaskInfo()
    return self._defaultTaskInfo
end

function LuckyTaskModule:clearLuckyTask()
    self._luckyTasksMap = {}
    self:reqTaskList()
end

function LuckyTaskModule:reqDefabltContent(bCheck)
    if bCheck == nil then
        bCheck = true
    end
    self:reqGetContent(self._defaultTaskInfo, bCheck)
end

function LuckyTaskModule:getSameStatusInfo(status)
    if self._luckyTaskPage == nil then
        return
    end
    for i = 1, #self._luckyTaskPage.info do
        local tempInfo = self._luckyTaskPage.info[i]
        if LuckyTaskDefine.ContentStatus[tempInfo.status] == status then
            return {same = true, info = tempInfo}
        end
    end
    return {same = false, info = self._luckyTaskPage.info[1]}
end

function LuckyTaskModule:showLobbyTip()
    local tip = ""
    local redPoint = false
    local showTip = false
    local haveAward = self:getSameStatusInfo(LuckyTaskDefine.ContentStatus.AC_CAN_DRAW)
    local haveNew = self:getSameStatusInfo(LuckyTaskDefine.ContentStatus.AC_NEW)

    if haveAward.same then
        tip = "可以领奖了!"
        redPoint = true
        showTip = true
        self._defaultTaskInfo = haveAward.info
    elseif haveNew.same then
        -- tip = '有新任务了!'
        -- showTip = true
        self._defaultTaskInfo = haveNew.info
    else
        self._defaultTaskInfo = self._luckyTaskPage.info[1]
    end
    XH.lobby:getModule("TabsActivity"):showIconRedPoint("LUCKYTASK", haveAward.same)
    self:dispatchEvent({name = LuckyTaskModule.EVENT_NUIAddLobbyIcon, data = {icon = LobbyConfig.ICON_ID.LUCKY_TASK, isShow = true}})
    self:dispatchEvent({name = LuckyTaskModule.EVENT_NUIUPDATELOBBYICONBUBBLETIP, data = {tip = tip, bShow = showTip}})
    self:flushTeaIconState(true, showTip, tip)
end

function LuckyTaskModule:getTabIndex()
    if self._luckyTaskPage == nil or self._defaultTaskInfo == nil then
        return 1
    end
    for i = 1, #self._luckyTaskPage.info do
        if self._defaultTaskInfo.id[1] == self._luckyTaskPage.info[i].id[1] then
            return i
        end
    end
    return 1
end

function LuckyTaskModule:onLuckyTaskClose()
    XH.lobby:getModule("TabsActivity"):showIconRedPoint("LUCKYTASK", false)
    self:dispatchEvent({name = LuckyTaskModule.EVENT_NotifyLuckyClose, data = 1})
    self:dispatchEvent({name = LuckyTaskModule.EVENT_NUIAddLobbyIcon, data = {icon = LobbyConfig.ICON_ID.LUCKY_TASK, isShow = false}})
    self:flushTeaIconState(false)
end

-- 获取任务id
function LuckyTaskModule:reqTaskList(isNeedCheckPop)
    self:startReq("ReqLuckTaskGetPage", 10, {isNeedCheckPop = isNeedCheckPop})
end

function LuckyTaskModule:respGetPage(req, type, data)
    if type == XH.Req.TYPE.SUCCESS then
        if data.pages == nil then
            return
        end
        if #data.pages > 0 and #data.pages[1].info > 0 then
            -- 进入默认请求第一个页签配置内容
            self._luckyTaskPage = data.pages[1]
            local taskIDs = {}
            for i = 1, #self._luckyTaskPage.info do
                table.insert(taskIDs, self._luckyTaskPage.info[i].id[1])
            end
            self._allTaskIds = taskIDs
            self:showLobbyTip()
            -- self:checkShowLuckyView()
            self:dispatchEvent({name = LuckyTaskModule.EVENT_NotifyLuckyTaskPage, data = self._luckyTaskPage})
            -- 推广弹窗：与 LuckyMission 互斥的另一曝光入口
            XH.lobby:getModule("LuckyTaskPromote"):onLuckyTaskPage(req, self._luckyTaskPage)
            if req.isNeedCheckPop then
                XH.lobby:getModule("AutoPop"):onActResp("luckytask")
            end
        else
            self._luckyTaskPage = data.pages[1]
            self:onLuckyTaskClose()
        end
    elseif type == XH.Req.TYPE.TIMEOUT then
        print("CellGetPageRequest TIMEOUT")
    else
        self:onLuckyTaskClose()
    end
end

function LuckyTaskModule:isHaveTask()
    local data = self._luckyTaskPage
    return data and data.info and #data.info > 0
end

function LuckyTaskModule:reqIsHaveDuiJuTask(callback)
    local taskClone = clone(self._allTasks) or {}
    self:reqGetAllContent(
        function(tasks)
            if callback then
                local duiJuTask = nil
                local isUpdate = false
                local progress = -1
                for i = 1, #tasks do
                    local isDuiJu = string.find(tasks[i].actTypeInfo.res, "xiaoju") or string.find(tasks[i].actTypeInfo.res, "daju")
                    if isDuiJu then
                        local p = tasks[i].progress / tasks[i].content[#tasks[i].content].target
                        if progress < p then
                            progress = p
                            duiJuTask = tasks[i]
                            for j = 1, #taskClone do
                                if taskClone[j].activityId == duiJuTask.activityId then
                                    duiJuTask[".isUpdate"] = taskClone[j].progress < tasks[i].progress
                                end
                            end
                        end
                    end
                end
                return callback(duiJuTask ~= nil, duiJuTask)
            end
        end
    )
end

function LuckyTaskModule:isHaveAward()
    local info = self:getSameStatusInfo(LuckyTaskDefine.ContentStatus.AC_CAN_DRAW) or {}
    return info.same
end

function LuckyTaskModule:setInGameShowed(bShow)
    self._isInGameShowed = bShow
end

function LuckyTaskModule:checkShowLuckyView()
    if not self:isOpenLuckyView() then
        return
    end
    XH.viewManager:openView("LuckyTaskView")
    XH.userDefault:setValue(XH.userDefault.KEY_ID.KW_LUCKY_TASK_INFO_ID, 1)
end

function LuckyTaskModule:isOpenLuckyView()
    do
        return false
    end
    local count = XH.userDefault:getValue(XH.userDefault.KEY_ID.KW_LUCKY_TASK_INFO_ID, 0)
    if count > 0 then
        return false
    end
    return true
end

function LuckyTaskModule:checkLuckyTask(activity_id)
    if self._luckyTasksMap == nil then
        return false
    end
    local taskContent = self._luckyTasksMap[activity_id]
    if taskContent ~= nil then
        self:setCurTask(taskContent)
        return true
    end
    return false
end

-- 获取任务内容
function LuckyTaskModule:reqGetContent(pages, isCheck)
    if isCheck == true and self:checkLuckyTask(pages.id[1]) then
        return
    end
    local include = 0 -- 不用修改
    local activity_id = pages.id
    self:startReq("ReqLuckTaskGetContent", activity_id, include, 10)
end

function LuckyTaskModule:respGetContent(req, type, data)
    if type == XH.Req.TYPE.SUCCESS then
        if data.box == nil then
            return
        end
        if self._luckyTasksMap == nil then
            self._luckyTasksMap = {}
        end
        self._luckyTasksMap[data.box[1].activityId] = data.box[1]
        self:setCurTask(data.box[1])
    end
end

-- 获取任务内容
function LuckyTaskModule:reqGetAllContent(callback)
    if not self._allTaskIds or #self._allTaskIds == 0 then
        return
    end
    self._reqAllContentCallback = callback
    self:startReq("ReqGetAllContent", self._allTaskIds, 0, 10, callback)
end

function LuckyTaskModule:respGetAllContent(req, type, data)
    if type == XH.Req.TYPE.SUCCESS then
        self._allTasks = data.box
        if self._reqAllContentCallback then
            self._reqAllContentCallback(data.box or {})
            self._reqAllContentCallback = nil
        end
    end
end

-- 历史记录
function LuckyTaskModule:reqGetDrawLogs()
    XH.TipTool.showLoading()
    self:startReq("ReqLuckTaskGetDrawLogs", 10)
end

function LuckyTaskModule:respGetDrawLogs(req, type, data)
    XH.TipTool.hideLoading()
    if type == XH.Req.TYPE.SUCCESS then
        self:dispatchEvent({name = LuckyTaskModule.EVENT_NotifyLuckyTaskAwardRecord, data = data.logs})
    end
end

function LuckyTaskModule:setShareTask(shareTask)
    self._shareTask = shareTask
end

-- 请求分享
function LuckyTaskModule:shareSuccess()
    if self._shareTask == nil then
        return
    end
    self:reqParticipate(self._shareTask.activityId)
end

function LuckyTaskModule:reqParticipate(activity_id)
    if self._lastTaskInfo == nil then
        self._lastTaskInfo = {}
    end
    self._lastTaskInfo.activityId = activity_id
    self:startReq("ReqParticipate", activity_id, 10)
end

function LuckyTaskModule:onRespParticipate(req, type, data)
    if type == XH.Req.TYPE.SUCCESS then
        self:reqTaskList()
    end
end

-- 领奖
function LuckyTaskModule:reqGetRewards(activity_id, content_id)
    XH.TipTool.showLoading()
    self._lastTaskInfo = {activityId = activity_id, contentId = content_id}
    self:startReq("ReqLuckTaskGetReward", activity_id, content_id, 10)
end

function LuckyTaskModule:updateAwardTask()
    if self._luckyTasksMap == nil then
        return
    end
    local temp = self._luckyTasksMap[self._lastTaskInfo.activityId]
    if temp == nil then
        return
    end

    for i = 1, #temp.content do
        if temp.content[i].id == self._lastTaskInfo.contentId then
            temp.content[i].draw = 1
        end
    end
    self:setCurTask(temp)
end

-- 领奖
function LuckyTaskModule:showAwardView(data)
    local awardInfo = {}
    awardInfo.prize_names = {}
    awardInfo.image_urls = {}
    for _, award in pairs(data.rewards) do
        local cnt = award.count
        if award.id == XH.areaData:getPropLimitedTimeRoomCardID() then
            cnt = cnt / XH.areaData:getPropLimitedTimeRoomCardRatio()
        end
        awardInfo.prize_names[#awardInfo.prize_names + 1] = "x" .. cnt
        awardInfo.image_urls[#awardInfo.image_urls + 1] = award.icon or ""
    end
    awardInfo.text = " "
    if #awardInfo.prize_names == 0 then
        return
    end
    XH.viewManager:openView("BackActivityAwardView", nil, nil, awardInfo)
end

function LuckyTaskModule:updateTaskList(activity_id, status)
    if self._luckyTaskPage == nil then
        return
    end
    for i = 1, #self._luckyTaskPage.info do
        if self._luckyTaskPage.info[i].id[1] == activity_id then
            self._luckyTaskPage.info[i].status = status
        end
    end
    self:dispatchEvent({name = LuckyTaskModule.EVENT_NotifyPageStatus, data = {activity_id = activity_id, status = status}})
    self:showLobbyTip()
end

function LuckyTaskModule:respGetReward(req, type, data)
    XH.TipTool.hideLoading()
    if type == XH.Req.TYPE.SUCCESS then
        self:showAwardView(data)
        self:updateAwardTask()
        self:updateTaskList(data.activityId, data.pageStatus)
        XH.playerData:flushPlayerDrop()
    elseif type == XH.Req.TYPE.FAIL then
        if data and data == 15 then
            self:clearLuckyTask()
            XH.TipTool.showToast("领取限制或奖池库存不足!")
        end
    end
end

function LuckyTaskModule:respParticipate(req, type, data)
    if type == XH.Req.TYPE.SUCCESS and data ~= nil and data.rewards ~= nil then
        self:showAwardView(data)
    end
end

function LuckyTaskModule:setTeaHouseMain(scene)
    self._scene = scene
end

-- 刷新比赛场数据
function LuckyTaskModule:flushTeaIconState(isShow, bShowTip, sTip)
    if self._scene == nil or self._scene._panelActListBg == nil then
        self._scene = nil
        return
    end
    if isShow then
        -- self._scene._panelActListBg:setVisible(true)
        -- self._scene._panelActList:setVisible(true)
        -- self._scene:showTeaHouseArrowRightAni(self._scene._actListAniNode, true)
        self._scene:addActivityIconToList(LobbyConfig.ICON_ID.LUCKY_TASK_STA, self._scene.showLuckyTask)
        if not self._scene._isReportLuckyTask then
            XH.lobby:getModule("LuckyTask"):reportData("iconShow", "比赛场")
            self._scene._isReportLuckyTask = true
        end
    else
        self._scene:removeActivityIconToList(LobbyConfig.ICON_ID.LUCKY_TASK_STA)
        self._scene._removeLuckTask = true
    end
    if self._scene._panelActList ~= nil and self._scene._panelActList:getChildrenCount() > 0 then
        for i = 1, self._scene._panelActList:getChildrenCount() do
            local node = self._scene._panelActList:getChildren()[i]
            if node:getTag() == LobbyConfig.ICON_ID.LUCKY_TASK_STA and node:getChildrenCount() > 0 then
                self:flushAwardState(node:getChildren()[1], bShowTip, true)
            end
        end
    end
end

-- 去完成对应操作
function LuckyTaskModule:notifyLuckyTaskJoin(type, gameid, ext)
    self:dispatchEvent({name = LuckyTaskModule.EVENT_NotifyLuckyTaskJoin, data = {type = type, gameid = gameid, ext = ext}})
end

-- 刷新icon领奖状态
function LuckyTaskModule:flushAwardState(node, bShow, isTea)
    if node == nil then
        return
    end
    if tolua.type(node) == "sp.SkeletonAnimation" then
        local aniName = "animation"
        if bShow then
            aniName = isTea and "animation2" or "animation3"
        end
        node:setAnimation(0, aniName, true)
    elseif node:getParent() and node:getParent():getTag() == LobbyConfig.ICON_ID.LUCKY_TASK_STA then
        node:loadTexture(bShow and "animation/Lobby/Base/hghl_icon/sta_rk_sta_2.png" or "animation/Lobby/Base/hghl_icon/sta_rk_sta_1.png", ccui.TextureResType.localType)
    else
        if node:getChildrenCount() == 0 then
            if bShow then
                -- 增加节点
                cc.SpriteFrameCache:getInstance():addSpriteFrames("cocosStudio/hall/Image/Activity/LuckTask/lucky_task.plist")
                local iconResName = "lucky_task_icon_2.png"
                local item = ccui.ImageView:create()
                item:loadTexture(iconResName, ccui.TextureResType.plistType)
                item:setVisible(true)
                item:setPosition(node:getContentSize().width / 2, node:getContentSize().height - 10)
                node:addChild(item)
            else
                return
            end
        elseif node:getChildrenCount() > 0 then
            node:getChildren()[1]:setVisible(bShow)
        end
    end
end

-- 是否存在该活动
function LuckyTaskModule:isExistActId()
    local allJsonData = XH.lobby:getModule("Configuration"):getConfigJsonData(ConfigurationDefine.Config.ALL, "AllConfig")
    local lobbyID = XH.areaData:getLobbyID()
    local actId
    if allJsonData and allJsonData.DoubleCardAct then
        for id, data in pairs(allJsonData.DoubleCardAct) do
            if lobbyID == tonumber(id) then
                actId = data
                break
            end
        end
    end
    if not actId then
        return false
    end
    if not self._luckyTaskPage then
        return false
    end
    for i = 1, #self._luckyTaskPage.info do
        if self._luckyTaskPage.info[i].id and #self._luckyTaskPage.info[i].id > 0 then
            for j = 1, #self._luckyTaskPage.info[i].id do
                for k = 1, #actId do
                    if actId[k] == tonumber(self._luckyTaskPage.info[i].id[j]) then
                        return true
                    end
                end
            end
        end
    end
    return false
end

-- 获取公用配置
function LuckyTaskModule:getClientCfg()
    if self._luckyTaskCfg then
        return self._luckyTaskCfg
    end
    local configModule = XH.lobby:getModule("Configuration")
    if not configModule then
        return
    end
    local configJsonData = configModule:getConfigJsonData(ConfigurationDefine.Config.ALL, "AllConfig")
    if configJsonData then
        self._luckyTaskCfg = configJsonData.luckyTask or {isGameShowIcon = false, popCfg = {}}
        return self._luckyTaskCfg
    end
end

-- 埋点上报
function LuckyTaskModule:reportData(type, from)
    local keyMap = {
        iconShow = XH.NewThrowDataDefine.rw24112601,
        iconClick = XH.NewThrowDataDefine.rw24070401,
        popShow = XH.NewThrowDataDefine.hd24120901
    }
    local key = keyMap[type]
    if key then
        local page_item_id = XH.lobby:getModule("LuckyTask"):isHaveAward() and "待领奖" or "待完成"
        XH.NewThrowDataManager:throwData(key, {block_label = from, page_item_id = page_item_id})
    end
end

function LuckyTaskModule:isValid()
    return self:isHaveTask()
end
function LuckyTaskModule:isNeedReq()
    return true
end
function LuckyTaskModule:isOpening()
    return XH.viewManager:isViewExist("LuckyTaskView")
end
function LuckyTaskModule:openView(fromScene, isInGame, iconPos)
    XH.viewManager:openView("LuckyTaskView", nil, fromScene, isInGame, isInGame and iconPos or nil)
end

function LuckyTaskModule:getActList()
    return self._actList
end

return LuckyTaskModule
Ym