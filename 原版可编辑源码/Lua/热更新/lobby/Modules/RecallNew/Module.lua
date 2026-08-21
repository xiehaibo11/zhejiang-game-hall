local RecallNewModule = class("RecallNewModule", XH.ModuleBase)
local RecallNewConfig = require("lobby.Modules.RecallNew.Config")
local GuideNewConfig = require("lobby.Modules.GuideNew.Config")
local ConfigurationDefine = require("lobby.Modules.Configuration.Define")
local ShopConfig = require("lobby.Modules.GoldNew.SubModules.Shop.Config")
local Utils = require("lobby.Modules.GoldNew.Tool.Utils")

RecallNewModule.EVENT_FLUSH_ACT_INFO = "EVENT_FLUSH_ACT_INFO"
RecallNewModule.EVENT_FLUSH_CHOSE_TAB = "EVENT_FLUSH_CHOSE_TAB"
RecallNewModule.EVENT_DO_QUICK_START_GOLD = "EVENT_DO_QUICK_START_GOLD"

RecallNewModule.EVENT_FLUSH_ACT_SIGN = "EVENT_FLUSH_ACT_SIGN"
RecallNewModule.EVENT_FLUSH_ACT_AWARD = "EVENT_FLUSH_ACT_AWARD"
RecallNewModule.EVENT_FLUSH_ACT_TASK = "EVENT_FLUSH_ACT_TASK"
RecallNewModule.EVENT_FLUSH_ACT_GIFT = "EVENT_FLUSH_ACT_GIFT"
RecallNewModule.EVENT_FLUSH_SHOP_ITEMS = "EVENT_FLUSH_SHOP_ITEMS"
RecallNewModule.EVENT_FLUSH_FEE_INFO = "EVENT_FLUSH_FEE_INFO"
RecallNewModule.EVENT_SHOW_FEE_BIND = "EVENT_SHOW_FEE_BIND"
RecallNewModule.EVENT_SHOW_MOVE_ANI = "EVENT_SHOW_MOVE_ANI"

function RecallNewModule:ctor()
    RecallNewModule.super.ctor(self)
    self._baseInfo = {} -- 基础信息
    self._giftInfo = {} -- 回归豪礼信息
    self._signInfo = {} -- 签到有礼信息
    self._awardInfo = {} -- 助力基金信息
    self._taskInfo = {} -- 活跃任务信息
    self._feeInfo = {} -- 话费福利信息
    self._actId = 0
    self._lastReqUser = 0
    self._lastReqTime = 0
    self._giftData = nil
end

function RecallNewModule:getReqConfig()
    return {
        ClickReBackRequest = { reqPath = "lobby.Req.RecallNew.ClickReBackRequest", callBack = self.respClickReBack },
        GetReBackBaseInfoRequest = { reqPath = "lobby.Req.RecallNew.GetReBackBaseInfoRequest", callBack = self.respGetReBackBaseInfo },
        GetReBackRedPointRequest = { reqPath = "lobby.Req.RecallNew.GetReBackRedPointRequest", callBack = self.respGetReBackRedPoint },
        GetReBackSignInfoRequest = { reqPath = "lobby.Req.RecallNew.GetReBackSignInfoRequest", callBack = self.respGetReBackSignInfo },
        GetReBackSupportInfoRequest = { reqPath = "lobby.Req.RecallNew.GetReBackSupportInfoRequest", callBack = self.respGetReBackSupportInfo },
        GetReBackTaskInfoRequest = { reqPath = "lobby.Req.RecallNew.GetReBackTaskInfoRequest", callBack = self.respGetReBackTaskInfo },
        NotifyReBackTaskRequest = { reqPath = "lobby.Req.RecallNew.NotifyReBackTaskRequest", callBack = self.respNotifyReBackTask },
        ReBackSignRequest = { reqPath = "lobby.Req.RecallNew.ReBackSignRequest", callBack = self.respReBackSign },
        RewardReBackGiftRequest = { reqPath = "lobby.Req.RecallNew.RewardReBackGiftRequest", callBack = self.respRewardReBackGift },
        RewardReBackSupportRequest = { reqPath = "lobby.Req.RecallNew.RewardReBackSupportRequest", callBack = self.respRewardReBackSupport },
        RewardReBackTaskRequest = { reqPath = "lobby.Req.RecallNew.RewardReBackTaskRequest", callBack = self.respRewardReBackTask },
        RewardReBackTaskStageRequest = { reqPath = "lobby.Req.RecallNew.RewardReBackTaskStageRequest", callBack = self.respRewardReBackTaskStage },
        ReqShopGoodsListRequest = { reqPath = "lobby.Modules.GoldNew.Req.ReqShopGoodsListRequest", callBack = self.respShopGoodsList },
        GetReBackFeeInfoRequest = { reqPath = "lobby.Req.RecallNew.GetReBackFeeInfoRequest", callBack = self.respFeeInfo },
        GetReBackFeeRechargeRequest = { reqPath = "lobby.Req.RecallNew.GetReBackFeeRechargeRequest", callBack = self.respRecharge },
    }
end

function RecallNewModule:getBaseInfo()
    return self._baseInfo
end

function RecallNewModule:getGiftInfo()
    return self._giftInfo
end

function RecallNewModule:getSignInfo()
    return self._signInfo
end

function RecallNewModule:getAwardInfo()
    return self._awardInfo
end

function RecallNewModule:getTaskInfo()
    return self._taskInfo
end

function RecallNewModule:onDestroy()
    RecallNewModule.super.onDestroy(self)
end

function RecallNewModule:getActId()
    return self._actId
end

function RecallNewModule:setActId(aid)
    self._actId = aid
end

-- 获取玩家最后游戏，如果没有直接取热门游戏
function RecallNewModule:getLastGameID()
    if self._baseInfo.reGoldGameId == 0 then
        local gameIDstr = self:getHotGameID()
        local params = string.split(gameIDstr, "|")
        return tonumber(params[1])
    end
    return self._baseInfo.reGoldGameId
end

-- 获取玩家类型
function RecallNewModule:getPlayerType()
    return self._baseInfo.playerTag or RecallNewConfig.ReBackPlayTag.ReTag_None
end

-- 获取最多游戏房间类型
function RecallNewModule:getPlayMode()
    return RecallNewConfig.RoomMode[self._baseInfo.maxRoomMode] or 10
end

-- 是否免费开房间
function RecallNewModule:isFreeRoom()
    return false --self._baseInfo.isGameFree
end

-- 是否免费丢道具
function RecallNewModule:nFreePropTimes()
    return 0
    -- if not self:isExistPrivilege(RecallNewConfig.PrivilegeList.PROP) then
    --     return 0
    -- end
    -- -- 判断是否已经跨天了 跨天刷新下数据
    -- if self._baseInfo.todayPropFree == nil or self._baseInfo.todayPropFree == 0 then
    --     local now = XH.lobby:getModule("Shop"):getServerTime()
    --     self._lastReqTime = XH.lobby:getModule("Shop"):getServerTime()
    --     if os.date("%Y%m%d", now) ~= os.date("%Y%m%d", self._lastReqTime) then
    --         self:getReBackRedPointRequest()
    --     end
    -- end
    -- return self._baseInfo.todayPropFree or 0
end

-- 减少免费丢道具次数
function RecallNewModule:nReFreeProp(times)
    if self._baseInfo.todayPropFree then
        self._baseInfo.todayPropFree = self._baseInfo.todayPropFree - times
        if self._baseInfo.todayPropFree < 0 then
            self._baseInfo.todayPropFree = 0
        end
    end
end

-- 是否拥有某个特权
function RecallNewModule:isExistPrivilege(privilegeID)
    if not self:isInAct() then
        return false
    end
    local privilegeLists = RecallNewConfig.PlayerPrivilege[self:getPlayerType()]
    if privilegeLists == nil then
        privilegeLists = RecallNewConfig.PlayerPrivilege[RecallNewConfig.ReBackPlayTag.ReTag_Default]
    end
    if privilegeLists then
        for i = 1, #privilegeLists do
            if privilegeLists[i] == privilegeID then
                return true
            end
        end
    end
    return false
end

-- 显示红点的列表
function RecallNewModule:isShowRedPointList()
    return self._baseInfo.rebackGift or self._baseInfo.rebackSign or self._baseInfo.rebackTask or self._baseInfo.huaFeiGet
end

-- 是否在活动内，且满足条件
function RecallNewModule:isInAct()
    if not self._baseInfo.isReback then
        return false
    end
    local time = XH.lobby:getModule("Shop"):getServerTime()
    local lastTime = tonumber(self._baseInfo.rebackEndTime) or 0
    return time < lastTime
end

function RecallNewModule:showMoveAni(x, y)
    self:dispatchEvent({ name = self.EVENT_SHOW_MOVE_ANI, data = { x = x, y = y } })
end

function RecallNewModule:showAwardActivity(data, param)
    local exParam = {
        closeFunc = function()
            local posX = 0
            local posY = 0
            local view = XH.viewManager:getView(XH.SceneManager:getInstance():getTopSceneTag(), "BackActivityAwardView")
            if view then
                local list = view._awardListView
                for i = 1, #list:getChildren() do
                    local item = list:getChildren()[i]
                    if item then
                        local txt = XH.UITool.seekNodeByName(item, "_KW_TEXT_NAME")
                        local pic = XH.UITool.seekNodeByName(item, "_KW_PIC_AWARD")
                        if txt and pic and string.match(txt:getString(), "话费") then
                            local world = pic:convertToWorldSpace(cc.p(pic:getPosition()))
                            posX = world.x
                            posY = world.y
                            break
                        end
                    end
                end
            end
            if posX ~= 0 then
                XH.lobby:getModule("RecallNew"):showMoveAni(posX, posY)
            end
            if param then
                param()
            end
        end
    }
    local awardInfo = {}
    awardInfo.prize_names = {}
    awardInfo.image_urls = {}
    awardInfo.prize_count = {}
    awardInfo.prize_pic = {}
    awardInfo.isPromote = true
    for key, award in pairs(data.props) do
        awardInfo.prize_names[#awardInfo.prize_names + 1] = award.name
        awardInfo.image_urls[#awardInfo.image_urls + 1] = award.icon or ""
        awardInfo.prize_pic[key] = award.prize_pic
        if string.find(award.name, "话费") then
            awardInfo.prize_count[#awardInfo.prize_count + 1] = award.count / 100 .. '元'
        else
            awardInfo.prize_count[#awardInfo.prize_count + 1] = self:getPropCntByInfo(award)
        end
    end
    XH.viewManager:openView("BackActivityAwardView", nil, exParam, awardInfo)
end

-- 获取回归基本信息
function RecallNewModule:getReBackBaseInfoRequest()
    if self:getActId() == 0 then
        return
    end
    self:startReq("GetReBackBaseInfoRequest", self:getActId(), XH.KW_CONFIG_LOGIC_TIME_OUT)
end

function RecallNewModule:respGetReBackBaseInfo(req, type, data)
    if type == XH.Req.TYPE.SUCCESS then
        self._giftInfo = data
        self:calcRedpointGift()
        self:dispatchEvent({ name = self.EVENT_FLUSH_ACT_GIFT })
    else
        print("GetReBackBaseInfoRequest 请求失败")
    end
end

-- 领取回归礼包
function RecallNewModule:rewardReBackGiftRequest()
    if self:getActId() == 0 then
        return
    end
    XH.TipTool.showLoading()
    self:startReq("RewardReBackGiftRequest", self:getActId(), XH.KW_CONFIG_LOGIC_TIME_OUT)
end

function RecallNewModule:showFeeBindView()
    self:dispatchEvent({ name = self.EVENT_SHOW_FEE_BIND })
end

function RecallNewModule:respRewardReBackGift(req, type, data)
    XH.TipTool.hideLoading()
    if type == XH.Req.TYPE.SUCCESS then
        local param = function()
            XH.lobby:getModule("RecallNew"):showFeeBindView()
        end
        self:showAwardActivity(data, param)
        self._giftInfo.isRewardGift = true
        self:calcRedpointGift()
        self:dispatchEvent({ name = self.EVENT_FLUSH_ACT_GIFT })
    else
        XH.TipTool.showToast("回归礼包领取失败，请刷新页面重试")
    end
end

-- 获取回归签到
function RecallNewModule:getReBackSignInfoRequest(isHideLoading)
    if self:getActId() == 0 then
        return
    end
    if not isHideLoading then
        XH.TipTool.showLoading()
    end
    self:startReq("GetReBackSignInfoRequest", self:getActId(), XH.KW_CONFIG_LOGIC_TIME_OUT)
end

function RecallNewModule:respGetReBackSignInfo(req, type, data)
    XH.TipTool.hideLoading()
    if type == XH.Req.TYPE.SUCCESS then
        self._signInfo = data
        self:calcRedpointSign()
        self:dispatchEvent({ name = self.EVENT_FLUSH_ACT_SIGN })
    else
        XH.TipTool.showToast("签到数据获取异常，请刷新页面重试")
    end
end

-- 回归签到
function RecallNewModule:reBackSignRequest(index)
    if self:getActId() == 0 then
        return
    end
    XH.TipTool.showLoading()
    self:startReq("ReBackSignRequest", self:getActId(), index, XH.KW_CONFIG_LOGIC_TIME_OUT)
end

function RecallNewModule:respReBackSign(req, type, data)
    XH.TipTool.hideLoading()
    if type == XH.Req.TYPE.SUCCESS then
        self:showAwardActivity(data)
        for i = 1, #self._signInfo.signInfos do
            if i == data.signIndex then
                self._signInfo.signInfos[i].isReward = true
                break
            end
        end
        self:calcRedpointSign()
        -- 助力基金>活跃任务
        if not self._baseInfo.rebackSign then
            if self._baseInfo.rebackTask then
                self:dispatchEvent({ name = self.EVENT_FLUSH_CHOSE_TAB, msg = RecallNewConfig.Tab.TASK })
            end
        end
        XH.SysTool.performDelayOnce(function()
            -- 延时刷新背包数据，到账有延时
            XH.lobby:getModule("BagSysNew"):reqSelfBagData()
        end, 1)
        self:dispatchEvent({ name = self.EVENT_FLUSH_ACT_SIGN })
    else
        XH.TipTool.showToast("签到失败，请刷新页面重试")
    end
end

-- 获取回归任务信息
function RecallNewModule:getReBackTaskInfoRequest(isHideLoading)
    if self:getActId() == 0 then
        return
    end
    if not isHideLoading then
        XH.TipTool.showLoading()
    end
    self:startReq("GetReBackTaskInfoRequest", self:getActId(), XH.KW_CONFIG_LOGIC_TIME_OUT)
end

function RecallNewModule:respGetReBackTaskInfo(req, type, data)
    XH.TipTool.hideLoading()
    if type == XH.Req.TYPE.SUCCESS then
        self._taskInfo = data
        self:calcRedpointTask()
        self:dispatchEvent({ name = self.EVENT_FLUSH_ACT_TASK })
    else
        XH.TipTool.showToast("获取回归任务异常，请刷新页面重试")
    end
end

-- 部分回归任务完成通知 0.3秒内只触发一次
function RecallNewModule:notifyReBackTaskRequest(task_type)
    if self._baseInfo.isReback == false then
        return
    end
    if self:getActId() == 0 then
        return
    end
    if self._isRebackClick then
        return
    end
    self._isRebackClick = true
    XH.SysTool.performDelayOnce(function()
        self._isRebackClick = false
    end, 0.3)
    self:startReq("NotifyReBackTaskRequest", self:getActId(), task_type, XH.KW_CONFIG_LOGIC_TIME_OUT)
end

function RecallNewModule:respNotifyReBackTask(req, type, data)
    if type == XH.Req.TYPE.SUCCESS then
        self:getReBackTaskInfoRequest(true)
    else
        print("NotifyReBackTaskRequest 请求失败")
    end
end

-- 领取回归任务活跃
function RecallNewModule:rewardReBackTaskRequest(task_id)
    if self:getActId() == 0 then
        return
    end
    XH.TipTool.showLoading()
    self:startReq("RewardReBackTaskRequest", self:getActId(), task_id, XH.KW_CONFIG_LOGIC_TIME_OUT)
end

function RecallNewModule:respRewardReBackTask(req, type, data)
    XH.TipTool.hideLoading()
    if type == XH.Req.TYPE.SUCCESS then
        local info = XH.lobby:getModule("RecallNew"):getTaskInfo()
        for i = 1, #info.taskInfos do
            if info.taskInfos[i].taskId == data.ctask_id then
                data.props = data.props or {}
                data.props[#data.props + 1] = {
                    name = "活跃值",
                    prize_pic = "hghl_Icon_1.png",
                    count = info.taskInfos[i].activeValue,
                }
                break
            end
        end
        self:showAwardActivity(data)
        self:getReBackTaskInfoRequest()
    else
        XH.TipTool.showToast("活跃值领取异常，请刷新页面重试")
    end
end

-- 领取回归阶段奖励
function RecallNewModule:rewardReBackTaskStageRequest(index)
    if self:getActId() == 0 then
        return
    end
    XH.TipTool.showLoading()
    self:startReq("RewardReBackTaskStageRequest", self:getActId(), index, XH.KW_CONFIG_LOGIC_TIME_OUT)
end

function RecallNewModule:respRewardReBackTaskStage(req, type, data)
    XH.TipTool.hideLoading()
    if type == XH.Req.TYPE.SUCCESS then
        if self._taskInfo.stageInfos then
            for i = 1, #self._taskInfo.stageInfos do
                if self._taskInfo.stageInfos[i].index == data.clientIndex then
                    self._taskInfo.stageInfos[i].status = RecallNewConfig.ReBackStatus.ReStatus_Rewarded
                    break
                end
            end
        end
        self:showAwardActivity(data)
        self:calcRedpointTask()
        self:dispatchEvent({ name = self.EVENT_FLUSH_ACT_TASK })
    else
        XH.TipTool.showToast("阶段任务领取异常，请刷新页面重试")
    end
end

-- 获取回归助力基金信息
function RecallNewModule:getReBackSupportInfo()
    if self:getActId() == 0 then
        return
    end
    XH.TipTool.showLoading()
    self:startReq("GetReBackSupportInfoRequest", self:getActId(), XH.KW_CONFIG_LOGIC_TIME_OUT)
end

function RecallNewModule:respGetReBackSupportInfo(req, type, data)
    XH.TipTool.hideLoading()
    if type == XH.Req.TYPE.SUCCESS then
        self._awardInfo = data
        self:calcRedpointSupport()
        self:dispatchEvent({ name = self.EVENT_FLUSH_ACT_AWARD })
    else
        XH.TipTool.showToast("助力基金请求异常，请刷新页面重试")
    end
end

-- 领取回归助力基金
function RecallNewModule:rewardReBackSupportRequest()
    if self:getActId() == 0 then
        return
    end
    XH.TipTool.showLoading()
    self:startReq("RewardReBackSupportRequest", self:getActId(), XH.KW_CONFIG_LOGIC_TIME_OUT)
end

function RecallNewModule:respRewardReBackSupport(req, type, data)
    XH.TipTool.hideLoading()
    if type == XH.Req.TYPE.SUCCESS then
        XH.TipTool.showToast("奖励已发放至邮件，快去领取吧~")
        self:getReBackSupportInfo()
    else
        XH.TipTool.showToast("助力基金领取异常，请刷新页面重试")
    end
end

function RecallNewModule:resetData()
    self._baseInfo = {}
    self._giftInfo = {}
    self._signInfo = {}
    self._awardInfo = {}
    self._taskInfo = {}
    self._feeInfo = {}
    self._giftData = nil
end

function RecallNewModule:getShopGiftData()
    if not self:isInAct() then
        return {}
    end
    return self._giftData or {}
end

-- 回流红点 作为第一个请求处理
function RecallNewModule:getReBackRedPointRequest()
    -- 切账号了
    if self:getActId() == 0 then
        self:resetData()
        return
    end
    if self._lastReqUser ~= XH.playerData:getNumberID() then
        self:resetData()
        XH.lobby:getModule("TeaHouseList"):reqTeaHouseList()
    end
    -- 已经请求了且不是回流了不需要再请求红点
    if self._baseInfo.isReback == false then
        return
    end
    self:startReq("GetReBackRedPointRequest", self:getActId(), XH.KW_CONFIG_LOGIC_TIME_OUT)
end

function RecallNewModule:respGetReBackRedPoint(req, type, data)
    if type == XH.Req.TYPE.SUCCESS then
        self._lastReqUser = XH.playerData:getNumberID()
        self._lastReqTime = XH.lobby:getModule("Shop"):getServerTime()
        self._baseInfo = data
        if not self:isInAct() then
            self._giftData = {}
            return
        end
        if self._giftData == nil then
            self:reqActGoodList()
        end
        if data.click == false then
            XH.viewManager:openView("RecallNewEmailView", nil, nil, "大厅")
        else
            -- 每日首次强弹
            local cfg = XH.lobby:getModule("Configuration"):getAllConfigData("RecallNew") or {showTimes=1}
            local todayCooldownTimes = XH.userDefault:getValue(XH.userDefault.KEY_ID.KW_RECALL_NEW_CLICK_LIMIT, 0)
            if todayCooldownTimes < (cfg.showTimes or 0) then
                XH.viewManager:openView("RecallNewView", nil, nil, "每日首次强弹", true)
            end
            XH.userDefault:setValue(XH.userDefault.KEY_ID.KW_RECALL_NEW_CLICK_LIMIT, todayCooldownTimes + 1)
        end
        self:notifyIconRedPoint()
    else
        print("GetReBackRedPointRequest 请求失败")
    end
end

-- 埋点标识
function RecallNewModule:setCurScene(scene)
    self._scene = scene
end

function RecallNewModule:getCurScene()
    return self._scene
end

-- 回归任务阶段
function RecallNewModule:getTaskStage()
    if self._taskInfo.todayActive == nil then
        return 0
    end
    for i = 1, #self._taskInfo.stageInfos do
        if self._taskInfo.stageInfos[i].status == RecallNewConfig.ReBackStatus.ReStatus_None then
            return i - 1
        end
    end
    return #self._taskInfo.stageInfos
end

-- 回归第几天
function RecallNewModule:getBackDay()
    return self._baseInfo.curDay or 0
end

-- 是否签到所有任务均完成
function RecallNewModule:isSignTaskFinish()
    if self:getActId() == 0 then
        return true
    end
    if not self._baseInfo.isReback then
        return true
    end
    return self._baseInfo.isAllSign
end

-- 计算刷新红点-豪礼
function RecallNewModule:calcRedpointGift()
    if self._giftInfo.isRewardGift ~= nil then
        self._baseInfo.rebackGift = not self._giftInfo.isRewardGift
        self:notifyIconRedPoint()
    end
end

-- 计算刷新红点-签到
function RecallNewModule:calcRedpointSign()
    if self._signInfo.currentIndex == nil then
        return
    end
    local isHasAwawrd = false
    for i = 1, self._signInfo.currentIndex do
        if self._signInfo.signInfos[i] and self._signInfo.signInfos[i].isReward == false then
            isHasAwawrd = true
            break
        end
    end
    self._baseInfo.rebackSign = isHasAwawrd
    local isHasFinish = true
    for i = 1, #self._signInfo.signInfos do
        if self._signInfo.signInfos[i] and self._signInfo.signInfos[i].isReward == false then
            isHasFinish = false
            break
        end
    end
    self._baseInfo.isAllSign = isHasFinish
    self:notifyIconRedPoint()
end

-- 计算刷新红点-任务
function RecallNewModule:calcRedpointTask()
    if self._taskInfo.todayActive == nil then
        return
    end
    local isHasAwawrd = false
    -- 是否有阶段奖励
    for i = 1, #self._taskInfo.taskInfos do
        if self._taskInfo.taskInfos[i].status == RecallNewConfig.ReBackStatus.ReStatus_Can_Reward then
            isHasAwawrd = true
            break
        end
    end
    -- 是否有活跃值待领取
    if isHasAwawrd == false then
        for i = 1, #self._taskInfo.stageInfos do
            if self._taskInfo.stageInfos[i].status == RecallNewConfig.ReBackStatus.ReStatus_Can_Reward then
                isHasAwawrd = true
                break
            end
        end
    end
    self._baseInfo.rebackTask = isHasAwawrd
    self:notifyIconRedPoint()
end

-- 计算刷新红点-助力
function RecallNewModule:calcRedpointSupport()
    if self._awardInfo.isReward == nil then
        return
    end
    self._baseInfo.rebackSupport = self._awardInfo.isReward
    self:notifyIconRedPoint()
end

function RecallNewModule:notifyIconRedPoint()
    self:dispatchEvent({ name = self.EVENT_FLUSH_ACT_INFO })
    XH.lobby:getModule("NewYear2026"):flushActInfo()
    if TeaHouse and TeaHouse.manager and TeaHouse.manager.teahouseMain then
        TeaHouse.manager.teahouseMain:flushRecallNewState()
    end
end

-- 客户端点击信标识
function RecallNewModule:reqClickReBack()
    if self:getActId() == 0 then
        return
    end
    self:startReq("ClickReBackRequest", self:getActId(), XH.KW_CONFIG_LOGIC_TIME_OUT)
end

function RecallNewModule:respClickReBack(req, type, data)
    if type == XH.Req.TYPE.SUCCESS then
        self._baseInfo.click = true
    else
        print("ClickReBackRequest 请求失败")
    end
end

-- 获取引导配置
function RecallNewModule:getGuideInfoByType()
    local configJsonData = XH.lobby:getModule("Configuration"):getConfigJsonData(ConfigurationDefine.Config.ALL, "AllConfig")
    if configJsonData and configJsonData.RecallGuideUserConfig then
        return configJsonData.RecallGuideUserConfig
    end
    return RecallNewConfig.GuideUserConfig
end

function RecallNewModule:getHotGameID()
    local configJsonData = XH.lobby:getModule("Configuration"):getConfigJsonData(ConfigurationDefine.Config.ALL, "AllConfig")
    if configJsonData and configJsonData.RecallGuideGameIDConfig and configJsonData.RecallGuideGameIDConfig[tostring(XH.areaData:getLobbyID())] then
        return configJsonData.RecallGuideGameIDConfig[tostring(XH.areaData:getLobbyID())]
    end
    return RecallNewConfig.GuideConfig[XH.areaData:getLobbyID()] or RecallNewConfig.GuideConfig[0]
end

-- 各个点击类跳转
-- 特权跳转
function RecallNewModule:goPrivilegeTarget(privilegeID)
    if CF and CF.isInGameScene and CF.isInGameScene() then
        if privilegeID == RecallNewConfig.PrivilegeList.STORE then
            self:goStoreDiamond()
        elseif privilegeID == RecallNewConfig.PrivilegeList.GIFT then
            self:goStoreCommond()
        end
        return true
    end
    local isGo = true
    if privilegeID == RecallNewConfig.PrivilegeList.STORE then
        self:goStoreDiamond()
    elseif privilegeID == RecallNewConfig.PrivilegeList.GIFT then
        self:goStoreCommond()
    elseif privilegeID == RecallNewConfig.PrivilegeList.BANKRUPT then
        self:goGoldScene()
    elseif privilegeID == RecallNewConfig.PrivilegeList.PROP then
        --  不用处理
        isGo = false
    elseif privilegeID == RecallNewConfig.PrivilegeList.GAME then
        if self:getPlayMode() == XH.ROOM_TYPE.BOX_ROOM then
            self:goBoxCreate()
        elseif self:getPlayMode() == XH.ROOM_TYPE.TeaHouseRoom then
            self:goMatchList()
        end
    end
    return isGo
end

-- 活跃任务跳转
function RecallNewModule:goTaskTarget(taskID)
    if CF and CF.isInGameScene and CF.isInGameScene() then
        if taskID == RecallNewConfig.ReBackTaskType.Rtt_BrowseShop then
            self:goStore()
        elseif taskID == RecallNewConfig.ReBackTaskType.Rtt_Recharge then
            self:goStore()
        elseif taskID == RecallNewConfig.ReBackTaskType.Rtt_BuyGift then
            self:goStoreCommond()
        end
        return true
    end
    local isGo = true
    if taskID == RecallNewConfig.ReBackTaskType.Rtt_Login then
        -- 不处理
        isGo = false
    elseif taskID == RecallNewConfig.ReBackTaskType.Rtt_InviteFriend then
        local teahouseLists = XH.lobby:getModule("TeaHouseList"):getTeaHousePendingList()
        if teahouseLists and #teahouseLists > 0 then
            self:goMatchList()
        else
            self:goBoxCreate()
        end
    elseif taskID == RecallNewConfig.ReBackTaskType.Rtt_ShareGame then
        XH.lobby:getModule("LuckyTask"):notifyLuckyTaskJoin("AC_JUMPTYPE_SHARE")
    elseif taskID == RecallNewConfig.ReBackTaskType.Rtt_UseEmoji then
        self:goGoldScene()
    elseif taskID == RecallNewConfig.ReBackTaskType.Rtt_RecallFriend then
        self:goShareRecall()
    elseif taskID == RecallNewConfig.ReBackTaskType.Rtt_InviteNew then
        self:goShareNewPlayer()
    elseif taskID == RecallNewConfig.ReBackTaskType.Rtt_GameAll then
        self:goBoxCreate()
    elseif taskID == RecallNewConfig.ReBackTaskType.Rtt_GameBox then
        self:goBoxCreate()
    elseif taskID == RecallNewConfig.ReBackTaskType.Rtt_GameTea then
        self:goMatchList()
    elseif taskID == RecallNewConfig.ReBackTaskType.Rtt_GameGold then
        self:goGoldScene()
    elseif taskID == RecallNewConfig.ReBackTaskType.Rtt_Sign then
        if self._baseInfo.isAllSign then
            XH.viewManager:openView("TabsActivityView", nil, { tab = "DAILYSIGN" })
        else
            self:dispatchEvent({ name = self.EVENT_FLUSH_CHOSE_TAB, msg = RecallNewConfig.Tab.SIGN })
            isGo = false
        end
    elseif taskID == RecallNewConfig.ReBackTaskType.Rtt_CreateRoom then
        self:goBoxCreate()
    elseif taskID == RecallNewConfig.ReBackTaskType.Rtt_BrowseShop then
        self:goStore()
    elseif taskID == RecallNewConfig.ReBackTaskType.Rtt_BiessedProp then
        self:goBoxCreate()
    elseif taskID == RecallNewConfig.ReBackTaskType.Rtt_Recharge then
        self:goStore()
    elseif taskID == RecallNewConfig.ReBackTaskType.Rtt_BuyGift then
        self:goStoreCommond()
    elseif taskID == RecallNewConfig.ReBackTaskType.Rtt_YueJu then
        local teahouseLists = XH.lobby:getModule("TeaHouseList"):getTeaHousePendingList()
        if teahouseLists and #teahouseLists > 0 then
            self:goMatchList()
        else
            self:goBoxCreate()
        end
    end
    return isGo
end

-- 助力基金跳转
function RecallNewModule:goAwardTarget()
    if CF and CF.isInGameScene and CF.isInGameScene() then
        return
    end
    local lastRoomMode = RecallNewConfig.RoomMode[self._awardInfo.yesterdayRoomMode]
    if lastRoomMode == XH.ROOM_TYPE.TeaHouseRoom then
        self:goMatchList()
    elseif lastRoomMode == XH.ROOM_TYPE.GOLD_ROOM or lastRoomMode == XH.ROOM_TYPE.NEW_GOLD_ROOM or lastRoomMode == XH.ROOM_TYPE.DISPATCH_QUEUE then
        self:goGoldScene(true)
    else
        self:goBoxCreate()
    end
end

-- 游戏推荐跳转
function RecallNewModule:goGuideTarget(type)
    if CF and CF.isInGameScene and CF.isInGameScene() then
        return
    end
    if type == RecallNewConfig.GuideType.BOX then
        self:goBoxCreate()
    elseif type == RecallNewConfig.GuideType.FISH then
        self:goRRBY()
    elseif type == RecallNewConfig.GuideType.HOTGAME then
        local gameIDstr = self:getHotGameID()
        local params = string.split(gameIDstr, "|")
        self:goQuickGoldGame(params)
    elseif type == RecallNewConfig.GuideType.LASTGAME then
        local lastGameID = self:getLastGameID()
        for i = 4, 2, -1 do
            local confID = XH.goldConfigManager:getConfIDByGameID(lastGameID, i)
            if confID ~= nil then
                self:goQuickGoldGame({ lastGameID, i })
                return
            end
        end
        -- 没有就跳转金币场
        self:goGoldScene()
    elseif type == RecallNewConfig.GuideType.MATCH then
        self:goMatchList()
    end
end

-- 跳转商城
function RecallNewModule:goStore()
    XH.viewManager:openView("GoldHallShopView", nil, { openType = "Lobby" })
end

-- 跳转商城-钻石
function RecallNewModule:goStoreDiamond()
    XH.viewManager:openView("GoldHallShopView", nil, { openType = "Lobby", productType = ShopConfig.SpecialTag.DIAMOND })
end

-- 跳转商城-超值推荐
function RecallNewModule:goStoreCommond()
    XH.viewManager:openView("GoldHallShopView", nil, { openType = "Lobby", productType = ShopConfig.SpecialTag.REC })
end

-- 进入新金币大厅，并是否快速开始
function RecallNewModule:goGoldScene(isQuickStart)
    local scheDuleTime = 1
    if XH.lobby:getModule("Lobby"):isOpenGoldView() then
        scheDuleTime = 0
    elseif XH.teaHouseManager:isInTeaHouse() then
        scheDuleTime = 1.5
        TeaHouse.manager.teahouseGeneral:levealTeaHouse()
        XH.SysTool.performDelayOnce(function()
            TeaHouse.manager.teahouseMain:closeTeaHouseList()
            XH.lobby:getModule("Lobby"):showXiuXianGame()
        end, 0.1)
    else
        XH.lobby:getModule("Lobby"):showXiuXianGame()
    end
    if isQuickStart then
        XH.SysTool.performDelayOnce(function()
            if self then
                self:dispatchEvent({ name = self.EVENT_DO_QUICK_START_GOLD })
            end
        end, scheDuleTime)
    end
end

-- 邀新分享
function RecallNewModule:goShareNewPlayer()
    local param = "&act_id=" .. self:getActId()
    XH.lobby:getModule("Recall"):shareWX(param)
end

-- 大厅分享
function RecallNewModule:goShareLobby()
    XH.lobby:getModule("Share"):setShareScene("大厅", "分享朋友")
    XH.lobby:getModule("Lobby"):onTouchShareLobby()
end

-- 召回分享
function RecallNewModule:goShareRecall()
    XH.lobby:getModule("Recall"):shareWX()
end

-- 包厢创建界面
function RecallNewModule:goBoxCreate()
    GuideNewConfig.JOIN_ROOM()
end

-- 比赛场列表，有的话进入默认第一个
function RecallNewModule:goMatchList()
    if XH.teaHouseManager:isInTeaHouse() then
        return
    end
    local teahouseLists = XH.lobby:getModule("TeaHouseList"):getTeaHousePendingList()
    if teahouseLists == nil then
        teahouseLists = {}
    end
    local teahouseData = XH.teaHouseManager:getTeaHouseData()
    if teahouseData ~= nil then
        local reNewInfos = teahouseData:getTeaHouseList()
        for teaid, info in pairs(reNewInfos) do
            teahouseLists[#teahouseLists + 1] = info
        end
    end
    if #teahouseLists > 0 then
        local teaid = XH.userDefault:getValue(XH.userDefault.KEY_ID.KW_PROMOTE_LAST_TEAID, 0)
        local nTeaNumber = 0
        local joinTeaid = 0
        for i = 1, #teahouseLists do
            if teahouseLists[i].nPasswd == teaid then
                joinTeaid = teaid
                nTeaNumber = teahouseLists[i].nTeaNumber
                break
            end
        end
        if joinTeaid == 0 then
            joinTeaid = teahouseLists[1].nPasswd
            nTeaNumber = teahouseLists[1].nTeaNumber
        end
        XH.teaHouseManager:joinTeaHouse(joinTeaid)
    else
        XH.teaHouseManager:openTeaHouseList()
    end
end

-- 新金币大厅-快速游戏
function RecallNewModule:goQuickGoldGame(params)
    GuideNewConfig.GUIDE_DEFINE[GuideNewConfig.GUIDE_TYPE.GOLD_ROOM_JOIN].func(params)
end

-- 联运游戏
function RecallNewModule:goRRBY()
    if XH.lobby:getModule("RRBuYu"):isDownloading() then
        XH.TipTool.showToast("正在加载中，请稍等...", 3)
        return
    end
    XH.TipTool.showLoading(2)
    if device.platform == "android" then
        XH.lobby:getModule("RRBuYu"):isDownloadCompleted(true)
        XH.lobby:getModule("Replugin"):postToSepperllitaPlugin(1)
    elseif device.platform == "ios" then
        XH.lobby:getModule("RRBuYu"):joinInRRBuyu()
    end
end

function RecallNewModule:reqActGoodList()
    self:startReq("ReqShopGoodsListRequest", { business = RecallNewConfig.RecallGiftShopTag }, 8)
end

function RecallNewModule:respShopGoodsList(req, flag, data)
    self._giftData = {}
    if flag == XH.Req.TYPE.SUCCESS then
        table.sort(data.list, function(v1, v2)
            return tonumber(v1.price) < tonumber(v2.price)
        end)
        self._giftData = data.list
    end
    self:dispatchEvent({ name = self.EVENT_FLUSH_SHOP_ITEMS })
end

function RecallNewModule:isPayWithGift(msg)
    if not msg then
        return false
    end
    if self._giftData == nil then
        return false
    end
    local data = msg.productInfo
    if data and data.productId then
        for i = 1, #self._giftData do
            if data.productId == self._giftData[i].productId then
                XH.SysTool.performDelayOnce(function()
                    if self._giftData[i].act and self._giftData[i].act.rebate then
                        local showAwardInfo = {}
                        showAwardInfo.prize_names = {}
                        showAwardInfo.prize_pic = {}
                        showAwardInfo.image_urls = {}
                        showAwardInfo.prize_count = {}
                        showAwardInfo.isPromote = true
                        for j = 1, #self._giftData[i].act.rebate do
                            local awardInfo = self._giftData[i].act.rebate[j]
                            local baseInfo = Utils:getBasePropInfo(awardInfo.propId)
                            showAwardInfo.prize_names[#showAwardInfo.prize_names + 1] = awardInfo.propName
                            if baseInfo.imageUrl then
                                showAwardInfo.image_urls[#showAwardInfo.image_urls + 1] = baseInfo.imageUrl
                                showAwardInfo.prize_pic[#showAwardInfo.prize_pic + 1] = nil
                            else
                                showAwardInfo.image_urls[#showAwardInfo.image_urls + 1] = ""
                                showAwardInfo.prize_pic[#showAwardInfo.prize_pic + 1] = baseInfo.imageName
                            end
                            showAwardInfo.prize_count[#showAwardInfo.prize_count + 1] = awardInfo.award
                        end
                        XH.viewManager:openView("BackActivityAwardView", nil, nil, showAwardInfo)
                    end
                    self:reqActGoodList()
                    XH.playerData:flushGoldCoin()
                    XH.playerData:flushPlayerDrop()
                end, 0.5)
                return true
            end
        end
    end
    return false
end

function RecallNewModule:setImgUrl(node, url, ignore)
    node:removeAllChildren()
    local ignoreSize = true
    if ignore ~= nil then
        ignoreSize = ignore
    end
    local size = node:getContentSize()
    local headImage = XH.RemoteImage.new():setPosition(node:getContentSize().width / 2, node:getContentSize().height / 2):ignoreContentAdaptWithSize(ignoreSize):setMaxContentSize({ width = size.width, height = size.height }):setContentSize(size.width, size.height):addTo(node)
    headImage:setUrl(url or "")
end

function RecallNewModule:isHaveAward()
    return false
end

function RecallNewModule:isValid()
    return self:isInAct()
end

function RecallNewModule:isNeedReq()
    return false
end

function RecallNewModule:isOpening()
    return XH.viewManager:isViewExist("RecallNewView")
end

function RecallNewModule:openView()
    XH.viewManager:openView("RecallNewView", nil, nil, "AUTOPOP")
end

function RecallNewModule:getFeeInfo()
    return self._feeInfo
end

function RecallNewModule:calcRedpointFee()
    self._baseInfo.huaFeiGet = self._feeInfo.status == RecallNewConfig.FeeState.CAN_GET
    self:notifyIconRedPoint()
end

-- 获取话费信息
function RecallNewModule:reqFeeInfo()
    if self:getActId() == 0 then
        return
    end
    XH.TipTool.showLoading()
    self:startReq("GetReBackFeeInfoRequest", self:getActId(), XH.KW_CONFIG_LOGIC_TIME_OUT)
end

function RecallNewModule:respFeeInfo(req, type, data)
    XH.TipTool.hideLoading()
    if type == XH.Req.TYPE.SUCCESS then
        self._feeInfo = data
        self:calcRedpointFee()
        self:dispatchEvent({ name = self.EVENT_FLUSH_FEE_INFO })
    else
        XH.TipTool.showToast("请求话费信息失败，请刷新页面重试")
    end
end

-- 请求充值
function RecallNewModule:reqRecharge(phone)
    if self:getActId() == 0 then
        return
    end
    XH.TipTool.showLoading()
    self:startReq("GetReBackFeeRechargeRequest", self:getActId(), phone, XH.KW_CONFIG_LOGIC_TIME_OUT)
end

function RecallNewModule:respRecharge(req, type, data)
    XH.TipTool.hideLoading()
    if type == XH.Req.TYPE.SUCCESS then
        self:reqFeeInfo()
        XH.TipTool.showToast("已发起充值，24小时内到账，如有疑问请联系客服")
    else
        XH.TipTool.showToast("话费奖励领取失败，请刷新页面重试")
    end
end

function RecallNewModule:flushTab(tab)
    self:dispatchEvent({ name = self.EVENT_FLUSH_CHOSE_TAB, msg = tab })
end

function RecallNewModule:isHideFeeTab()
    if self._baseInfo.huaFeiShow ~= nil then
        return not self._baseInfo.huaFeiShow
    end
    return true
end

function RecallNewModule:getPropCntByInfo(data, isHideFee, ext)
    if isHideFee then
        if string.match(data.name, "话费") then
            return ""
        end
    end
    ext = ext or ""
    if data.id == 101528 then
        return ext .. math.floor(data.count / 100)
    end
    return ext .. data.count
end

return RecallNewModule