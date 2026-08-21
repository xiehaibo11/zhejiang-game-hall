local LuckyMissionModule = class("LuckyMissionModule", XH.ModuleBase)
local LuckyMissionConfig = require("lobby.Modules.LuckyMission.Config")
local ShopConfig = require("lobby.Modules.GoldNew.SubModules.Shop.Config")

LuckyMissionModule.EVENT_FLUSH_ACT_INFO = "EVENT_FLUSH_ACT_INFO"
LuckyMissionModule.EVENT_FLUSH_TASK_INFO = "EVENT_FLUSH_TASK_INFO"
LuckyMissionModule.EVENT_FLUSH_STAGE_INFO = "EVENT_FLUSH_STAGE_INFO"

-- 不在任务中心界面展示的页签（与 _baseActInfo.pageList 共用表引用，只应在任务数据就绪时处理一次）
local PAGE_LIST_EXCLUDE_FROM_UI = "act2_task_game_day"

function LuckyMissionModule:ctor()
    LuckyMissionModule.super.ctor(self)
    self._baseActInfo = {}
    self._taskInfo = {}
    self._curTab = nil
    self._curScene = ""
end

function LuckyMissionModule:getReqConfig()
    return {
        GetTaskV2Request = { reqPath = "lobby.Req.LuckyMission.GetTaskV2Request", callBack = self.respLuckyMissionBase },
        GetTaskV2InfoRequest = { reqPath = "lobby.Req.LuckyMission.GetTaskV2Request", callBack = self.respLuckyMissionInfo },
        ActPointRewardRequest = { reqPath = "lobby.Req.LuckyMission.ActPointRewardRequest", callBack = self.respLuckyMissionStageAward },
        ReqLuckTaskGetReward = { reqPath = "lobby.Req.LuckyMission.TaskV2RewardRequest", callBack = self.respLuckyMissionAward },
        ReqParticipate = { reqPath = "lobby.Req.LuckTask.ReqParticipate", callBack = self.respParticipate },
        GetTaskV2FinishRequest = { reqPath = "lobby.Req.LuckyMission.GetTaskV2FinishRequest", callBack = self.respTaskV2FinishRequest },
    }
end

function LuckyMissionModule:reqTaskV2Finish(task, num)
    self:startReq("GetTaskV2FinishRequest", task, num, 10)
end

function LuckyMissionModule:respTaskV2FinishRequest(req, type, data)
    if type == XH.Req.TYPE.SUCCESS then
    end
end

function LuckyMissionModule:shareSuccess()
    if self._shareTask == nil then
        return
    end
    self:reqParticipate(self._shareTask.activityId)
end

function LuckyMissionModule:reqParticipate(activity_id)
    self:startReq("ReqParticipate", activity_id, 10)
end

function LuckyMissionModule:onRespParticipate(req, type, data)
    if type == XH.Req.TYPE.SUCCESS then
    end
end

function LuckyMissionModule:notifyLuckyTaskJoin(type, gameid)
    local type = LuckyMissionConfig.JumpType[type]
    local gameid = gameid
    if type == nil then
        return
    end
    if type == LuckyMissionConfig.JumpType.AC_JUMPTYPE_NULL then
        return
    elseif type == LuckyMissionConfig.JumpType.AC_JUMPTYPE_LOGIN then
        XH.TipTool.showToast("今天已登录，明天再来吧")
    elseif type == LuckyMissionConfig.JumpType.AC_JUMPTYPE_TEA then
        -- 比赛场
        XH.lobby:getModule("RecallNew"):goMatchList()
    elseif type == LuckyMissionConfig.JumpType.AC_JUMPTYPE_TANL then
        -- 包厢加比赛场
        XH.lobby:getModule("RecallNew"):goMatchList()
    elseif type == LuckyMissionConfig.JumpType.AC_JUMPTYPE_CHARGE then
        -- 充值
        XH.Bridge.viewManager:openView("GoldHallShopView", nil, { openType = "Lobby", productType = ShopConfig.SpecialTag.DIAMOND })
    elseif type == LuckyMissionConfig.JumpType.AC_JUMPTYPE_SHARE then
        -- 分享
        XH.lobby:getModule("LuckyTask"):notifyLuckyTaskJoin("AC_JUMPTYPE_SHARE")
    elseif type == LuckyMissionConfig.JumpType.AC_JUMPTYPE_OTHER then
        -- 联运
    elseif type == LuckyMissionConfig.JumpType.AC_JUMPTYPE_COIN then
        -- 金币场
        XH.lobby:getModule("RecallNew"):goGoldScene()
    elseif type == LuckyMissionConfig.JumpType.AC_JUMPTYPE_BY then
        -- 捕鱼
        XH.lobby:getModule("RecallNew"):goRRBY()
    elseif type == LuckyMissionConfig.JumpType.AC_JUMPTYPE_LY then
        -- 联运
        XH.lobby:getModule("GameCenter"):startGame(gameid)
    elseif type == LuckyMissionConfig.JumpType.AC_JUMPTYPE_GAME then
        local lastGameID = gameid
        for i = 4, 2, -1 do
            local confID = XH.goldConfigManager:getConfIDByGameID(lastGameID, i)
            if confID ~= nil then
                XH.lobby:getModule("RecallNew"):goQuickGoldGame({ lastGameID, i })
                return
            end
        end
        -- 没有就跳转金币场
        XH.lobby:getModule("RecallNew"):goGoldScene()
    else
        XH.lobby:getModule("RecallNew"):goBoxCreate()
    end
end

function LuckyMissionModule:getTaskInfo()
    return self._taskInfo
end

-- 从 pageList 中移除不在 UI 展示的页签（原地修改，与 _taskInfo.pageList / _baseActInfo.pageList 共享引用时两边一致）
function LuckyMissionModule:_stripNonDisplayPagesFromPageList(pageList)
    if not pageList then
        return
    end
    for i = #pageList, 1, -1 do
        if pageList[i].name == PAGE_LIST_EXCLUDE_FROM_UI then
            table.remove(pageList, i)
        end
    end
end

function LuckyMissionModule:dispatchEventAct()
    self:dispatchEvent({ name = self.EVENT_FLUSH_ACT_INFO })
    XH.lobby:getModule("NewYear2026"):flushActInfo()
    if TeaHouse and TeaHouse.manager and TeaHouse.manager.teahouseMain then
        TeaHouse.manager.teahouseMain:flushLuckyMissionState()
    end
end

function LuckyMissionModule:luckyMissionBaseReq(isNeedCheckPop)
    self:startReq("GetTaskV2Request", LuckyMissionConfig.REQ_TYPE.REDPOINT, "act2_task", XH.KW_CONFIG_LOGIC_TIME_OUT, isNeedCheckPop)
end

function LuckyMissionModule:respLuckyMissionBase(req, type, data)
    if type == XH.Req.TYPE.SUCCESS then
        self._baseActInfo = data
        -- 推广弹窗逻辑在 strip 前通知，避免页签被过滤后丢失判断依据
        XH.lobby:getModule("LuckyTaskPromote"):onLuckyMissionBase(req, self._baseActInfo)
        self:_stripNonDisplayPagesFromPageList(self._baseActInfo.pageList)
        self:dispatchEventAct()
        if req.isNeedCheckPop and self:isHavePopTaskType() then
            XH.lobby:getModule("AutoPop"):onActResp("LuckyMission")
        end
    else
        print("luckyMissionBaseReq 请求失败")
    end
end

-- isSilent：后台拉取时不展示 loading
function LuckyMissionModule:luckyMissionInfoReq(page_name, isSilent)
    if not isSilent then
        XH.TipTool.showLoading()
    end
    if page_name == nil and self._baseActInfo and self._baseActInfo.pageList and self._baseActInfo.pageList[1] then
        page_name = self._baseActInfo.pageList[1].name
    end
    self:startReq("GetTaskV2InfoRequest", LuckyMissionConfig.REQ_TYPE.CONTENT, page_name, XH.KW_CONFIG_LOGIC_TIME_OUT)
end

function LuckyMissionModule:respLuckyMissionInfo(req, type, data)
    XH.TipTool.hideLoading()
    if type == XH.Req.TYPE.SUCCESS then
        self._taskInfo = data
        self._taskInfo.pageList = self._baseActInfo.pageList
        -- 如果任务已完成，但是活动已结束，用领奖剩余时间
        local serverTime = XH.lobby:getModule("Shop"):getServerTime()
        for i = 1, #self._taskInfo.boxList do
            local curTaskInfo = self._taskInfo.boxList[i]
            if curTaskInfo.content[1].draw == 0 and curTaskInfo.progress >= curTaskInfo.content[1].target and curTaskInfo.drawDeadline and tonumber(curTaskInfo.drawDeadline) >= tonumber(serverTime) and tonumber(curTaskInfo.endTime) < tonumber(serverTime) then
                self._taskInfo.boxList[i].endTime = curTaskInfo.drawDeadline
            end
        end
        self:calcRedPointState()
        self:dispatchEvent({ name = self.EVENT_FLUSH_TASK_INFO })
    else
        self._taskInfo = {
            boxList = {}
        }
        self._taskInfo.pageList = self._baseActInfo.pageList
        XH.TipTool.showToast("任务列表获取失败，请重新打开界面重试...")
        self:luckyMissionBaseReq()
        self:calcRedPointState()
        self:dispatchEvent({ name = self.EVENT_FLUSH_TASK_INFO })
    end
end

-- 任务奖励
function LuckyMissionModule:luckyMissionAwardReq(info)
    XH.TipTool.showLoading()
    self:startReq("ReqLuckTaskGetReward", info, info.activityId, info.content[1].id, XH.KW_CONFIG_LOGIC_TIME_OUT)
end

function LuckyMissionModule:respLuckyMissionAward(req, type, data)
    XH.TipTool.hideLoading()
    if type == XH.Req.TYPE.SUCCESS then
        local awardInfo = {}
        awardInfo.prize_names = {}
        awardInfo.image_urls = {}
        awardInfo.prize_count = {}
        awardInfo.prize_pic = {}
        awardInfo.isPromote = true
        if data.ccurTask then
            local showActPoint = data.ccurTask.content[1].actPoint
            if showActPoint ~= 0 then
                awardInfo.prize_names[#awardInfo.prize_names + 1] = "活跃值"
                awardInfo.image_urls[#awardInfo.image_urls + 1] = ""
                awardInfo.prize_count[#awardInfo.prize_count + 1] = showActPoint
                awardInfo.prize_pic[#awardInfo.prize_pic + 1] = "hghl_Icon_1.png"
            end
        end
        for _, award in pairs(data.rewards) do
            awardInfo.prize_names[#awardInfo.prize_names + 1] = award.name
            awardInfo.image_urls[#awardInfo.image_urls + 1] = award.icon or ""
            awardInfo.prize_count[#awardInfo.prize_count + 1] = self:getPropCntByInfo(award)
            awardInfo.prize_pic[#awardInfo.prize_pic + 1] = nil
        end
        XH.viewManager:openView("BackActivityAwardView", nil, nil, awardInfo)
        if self._curTab then
            self:luckyMissionInfoReq(self._curTab:getName())
        else
            self:luckyMissionInfoReq()
        end
    else
        XH.TipTool.showToast("领取任务奖励失败，请重新打开界面重试...")
    end
end

-- 活跃度阶段奖励
function LuckyMissionModule:luckyMissionStageAwardReq(page_name, point_target)
    XH.TipTool.showLoading()
    self:startReq("ActPointRewardRequest", page_name, point_target, XH.KW_CONFIG_LOGIC_TIME_OUT)
end

function LuckyMissionModule:respLuckyMissionStageAward(req, type, data)
    XH.TipTool.hideLoading()
    if type == XH.Req.TYPE.SUCCESS then
        local awardInfo = {}
        awardInfo.prize_names = {}
        awardInfo.image_urls = {}
        awardInfo.prize_count = {}
        awardInfo.isPromote = true
        for _, award in pairs(data.rewards) do
            awardInfo.prize_names[#awardInfo.prize_names + 1] = award.name
            awardInfo.image_urls[#awardInfo.image_urls + 1] = award.icon or ""
            awardInfo.prize_count[#awardInfo.prize_count + 1] = self:getPropCntByInfo(award)
        end
        XH.viewManager:openView("BackActivityAwardView", nil, nil, awardInfo)
        for i = 1, #self._taskInfo.actPointInfo.actPoint do
            if self._taskInfo.actPointInfo.actPoint[i].pointTarget <= self._taskInfo.actPointInfo.point then
                self._taskInfo.actPointInfo.actPoint[i].isGet = 1
            end
        end
        self:calcRedPointState()
        self:dispatchEvent({ name = self.EVENT_FLUSH_STAGE_INFO })
    else
        XH.TipTool.showToast("领取阶段奖励失败，请重新打开界面重试...")
    end
end

function LuckyMissionModule:setCurScene(scene)
    self._curScene = scene
end

function LuckyMissionModule:getCurScene()
    return self._curScene
end

function LuckyMissionModule:setCurTab(curTab)
    self._curTab = curTab
end

function LuckyMissionModule:getCurTab()
    return self._curTab
end

function LuckyMissionModule:calcRedPointState()
    if not self._taskInfo.pageList then
        return
    end
    local curTabRedState = 0
    local serverTime = XH.lobby:getModule("Shop"):getServerTime()
    for i = 1, #self._taskInfo.boxList do
        if tonumber(self._taskInfo.boxList[i].endTime) >= tonumber(serverTime) then
            if self._taskInfo.boxList[i].content[1].draw == 0 and self._taskInfo.boxList[i].progress >= self._taskInfo.boxList[i].content[1].target then
                curTabRedState = 1
                break
            end
        end
    end
    if self._curTab == "" then
        if self._taskInfo.pageList and self._taskInfo.pageList[1] then
            self._taskInfo.pageList[1].redPoint = curTabRedState
        end
        if self._baseActInfo.pageList and self._baseActInfo.pageList[1] then
            self._baseActInfo.pageList[1].redPoint = curTabRedState
        end
        self:dispatchEventAct()
    else
        for i = 1, #self._taskInfo.pageList do
            if self._curTab ~= "" and not tolua.isnull(self._curTab) then
                if self._taskInfo.pageList[i].name == self._curTab:getName() then
                    self._taskInfo.pageList[i].redPoint = curTabRedState
                    self._baseActInfo.pageList[i].redPoint = curTabRedState
                    self:dispatchEventAct()
                    break
                end
            end
        end
    end
end

function LuckyMissionModule:isInAct()
    if self._baseActInfo.pageList and self._baseActInfo.pageList[1] and self._baseActInfo.pageList[1].name ~= "" then
        return true
    end
    return false
end

function LuckyMissionModule:isShowRedPointList()
    if self._baseActInfo and self._baseActInfo.pageList then
        for i = 1, #self._baseActInfo.pageList do
            if self._baseActInfo.pageList[i].name ~= "act2_task_game_day" and self._baseActInfo.pageList[i].redPoint == 1 then
                return true
            end
        end
    end
    return false
end

function LuckyMissionModule:isShowRedPointByTabID(tabID)
    if self._taskInfo and self._taskInfo.pageList and self._taskInfo.pageList[tabID] then
        return self._taskInfo.pageList[tabID].redPoint == 1
    end
    return false
end

function LuckyMissionModule:setImgUrl(node, url)
    node:removeAllChildren()
    local ignoreSize = true
    local size = node:getContentSize()
    local headImage = XH.RemoteImage.new():setPosition(node:getContentSize().width / 2, node:getContentSize().height / 2):ignoreContentAdaptWithSize(ignoreSize):setMaxContentSize({ width = size.width, height = size.height }):setContentSize(size.width, size.height):addTo(node)
    headImage:setUrl(url or "")
end

function LuckyMissionModule:isHaveAward()
    return false
end

function LuckyMissionModule:isValid()
    return self:isInAct()
end

function LuckyMissionModule:isNeedReq()
    return false
end

function LuckyMissionModule:isOpening()
    return XH.viewManager:isViewExist("LuckyMissionView")
end

function LuckyMissionModule:openView()
    XH.viewManager:openView("LuckyMissionView", nil, nil, "AUTOPOP")
end

function LuckyMissionModule:getPropCntByInfo(data, ext)
    ext = ext or ""
    if data.id == 101528 then
        return ext .. math.floor(data.count / 100)
    end
    return ext .. data.count
end

function LuckyMissionModule:isHavePopTaskType()
    if self._baseActInfo and self._baseActInfo.pageList then
        for i = 1, #self._baseActInfo.pageList do
            if self._baseActInfo.pageList[i].name == 'act2_task_surprise' or self._baseActInfo.pageList[i].name == 'act2_task_lucky' then
                return true
            end
        end
    end
    return false
end

return LuckyMissionModule