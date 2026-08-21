local NewYear2026Module = class("NewYear2026Module", XH.ModuleBase)
local Bridge = import(".Bridge")
NewYear2026Module.EVENT_FLUSH_ACTIVITY_INFO = "EVENT_FLUSH_ACTIVITY_INFO"

local NEED_SHOW_TIME = 10
local ACT_NAME = "share_award"
local ACT_SUB_NAME = "new_year_award_1"
function NewYear2026Module:ctor()
    NewYear2026Module.super.ctor(self)
    self._showTime = {}
    self._acts = {}
end

function NewYear2026Module:getReqConfig()
    return {
        reqInfo = {reqPath = "lobby.Req.Act.NewYear.ReqShareMultipleDetail", callBack = self.onActInfoResp},
        reqGetAward = {reqPath = "lobby.Req.Act.NewYear.ReqShareMultipleReceive", callBack = self.onGetAwardResp},
        -- ReqLuckTaskGetContent = { reqPath = "lobby.Req.ReqLuckTaskGetContent", callBack = self.respGetContent },
    }
end

function NewYear2026Module:getProxyEvents()
    return {
        {module = XH.lobby:getModule("InviteActivity"), eventKeyName = "EVENT_FLUSH_ACT_INFO", callBack = "flushActInfo"},
        {module = XH.lobby:getModule("GoldNew"), eventKeyName = "EVENT_DAY_CHANGE", callBack = "onDayChange"},
    }
end

local ATCIN_TAG = 3000
function NewYear2026Module:flushActInfo(event, delay)
    local action = cc.Sequence:create(cc.DelayTime:create(delay or 1), cc.CallFunc:create(function() 
        self:dispatchEvent({name = self.EVENT_FLUSH_ACTIVITY_INFO})
    end))
    action:setTag(ATCIN_TAG)
    display.getRunningScene():stopActionByTag(ATCIN_TAG)
    display.getRunningScene():runAction(action)
end

-- 判断活动是否在线
function NewYear2026Module:isInActTimeAllTime(info)
    if not info then
        return false
    end
    local time = XH.lobby:getModule("Shop"):getServerTime()
    if time < tonumber(info.offline) and time > tonumber(info.online) then
        return true
    end
    return false
end

function NewYear2026Module:flushAids(data)
    self._acts = {}
    for _, info in pairs(data.act) do
        if info.type == ACT_NAME and info.subType == ACT_SUB_NAME and self:isInActTimeAllTime(info) then
            table.insert(self._acts, info)
        end
    end
    self:reqInfo()
end

function NewYear2026Module:getCurrentActInfo(data)
    local time = XH.lobby:getModule("Shop"):getServerTime()
    for i, info in ipairs(self._acts) do
        if time < tonumber(info["end"]) and time >= tonumber(info.start) then
            return info
        end
    end
    return nil
end

function NewYear2026Module:onDayChange()
    self:reqInfo()
end

function NewYear2026Module:isHaveAward(expectDailyGift)
    local data = self:getItemInfo()
    for i,v in ipairs(data) do
        if v.canGetAward then
            if not expectDailyGift or (v.type ~= "DailyGift" and v.type ~= "LuckyTask") then
                return true
            end
        end
    end
    return false
end

function NewYear2026Module:isValid()
    return self._curActInfo ~= nil and self._curActInfo.aid > 0
end

function NewYear2026Module:addShowTime(addTime)
    local todayStr = os.date("%Y%m%d", XH.lobby:getModule("Shop"):getServerTime())
    -- self._showTime[todayStr] = self._showTime[todayStr] or 0
    if self._showTime[todayStr] == nil and addTime >= NEED_SHOW_TIME then
        self._showTime[todayStr] = addTime
        cc.UserDefault:getInstance():setBoolForKey("NewYear2026Module"..todayStr .. XH.playerData:getNumberID(), true)
        self:dispatchEvent({name = self.EVENT_FLUSH_ACTIVITY_INFO})
        return
    end 
end

function NewYear2026Module:getTodayShowTime()
    local todayStr = os.date("%Y%m%d", XH.lobby:getModule("Shop"):getServerTime())
    local isShowed = cc.UserDefault:getInstance():getBoolForKey("NewYear2026Module"..todayStr .. XH.playerData:getNumberID(), false)
    if isShowed then
        self._showTime[todayStr] = NEED_SHOW_TIME
        return NEED_SHOW_TIME
    end
    return (self._showTime[todayStr] or 0)
end

function NewYear2026Module:isTodayCanGetAward()
    if self._actInfo == nil or self._actInfo.avalible == 0 then
        return false
    end
    return self:getTodayShowTime() >= NEED_SHOW_TIME
end

function NewYear2026Module:isGot()
    return self._actInfo and self._actInfo.avalible == 0
end

function NewYear2026Module:getItemInfo()
    local dailyAwards = (self._actInfo and self._actInfo.rewards) or {}
    local info = {
        {type="DailyGift",title="每日领取",sort=1,canGetAward=self:isTodayCanGetAward(),url="",award1=dailyAwards[1],award2=dailyAwards[2], view="", show=true, isGot=self:isGot()},
        {type="InviteAct",title="邀请有礼",sort=4,canGetAward=XH.lobby:getModule("InviteActivity"):isHaveAward(),url="", view="InviteAct", show=true},
        -- {type="LuckyTask",title="对局有礼",canGetAward=XH.lobby:getModule("LuckyTask"):isHaveAward(),url="", view="", show=XH.lobby:getModule("LuckyTask"):hasUnCompleteTask()},
        -- {id=4,title="回归有礼",canGetAward=false,url="",award1={name="xxx", url=""}, view=""},
    }
    local luckyTaskInfo = Bridge.getLuckyTaskInfo()
    if luckyTaskInfo then
        table.insert(info, luckyTaskInfo)
    end
    local recallNewInfo = Bridge.getRecallInfo()
    if recallNewInfo then
        table.insert(info, recallNewInfo)
    end
    for i,v in ipairs(info) do
        if v.show == false then
            v.sort = v.sort + 100
        end
    end
    table.sort(info, function(a,b) return a.sort < b.sort end)
    return info
end

function NewYear2026Module:checkShowInviteView()
    if XH.viewManager:isViewExist("NewYear2026") or not self:isValid() then
        return
    end
    local info = cc.UserDefault:getInstance():getStringForKey("NewYear2026ModuleShowTime" .. XH.playerData:getNumberID(), "0_0")
    local dayShowCnt = XH.lobby:getModule("Configuration"):getAllConfigData("NewYear") or {dayShowCnt = 1}
    local lasttimeArr = string.split(info, "_")
    lasttimeArr[2] = tonumber(lasttimeArr[2]) or 0
    local todayStr = os.date("%Y%m%d", os.time())
    if todayStr ~= lasttimeArr[1] then
        lasttimeArr[2] = 0
    end
    if lasttimeArr[2] < dayShowCnt.dayShowCnt then
        cc.UserDefault:getInstance():setStringForKey("NewYear2026ModuleShowTime" .. XH.playerData:getNumberID(), todayStr .. "_" .. (lasttimeArr[2] + 1))
        XH.viewManager:openView("NewYear2026", nil ,{source = "auto1"})
    end
end
function NewYear2026Module:checkShowInviteViewWithAward()
    -- if XH.viewManager:isViewExist("NewYear2026") or not self:isValid() then
    --     return
    -- end
    -- local info = cc.UserDefault:getInstance():getStringForKey("NewYear2026ModuleShowTimeAward" .. XH.playerData:getNumberID(), "0_0")
    -- local dayShowCnt = XH.lobby:getModule("Configuration"):getAllConfigData("NewYear") or {dayShowAwardCnt = 2}
    -- local lasttimeArr = string.split(info, "_")
    -- lasttimeArr[2] = tonumber(lasttimeArr[2]) or 0
    -- local todayStr = os.date("%Y%m%d", os.time())
    -- if todayStr ~= lasttimeArr[1] then
    --     lasttimeArr[2] = 0
    -- end
    -- if lasttimeArr[2] < dayShowCnt.dayShowAwardCnt then
    --     cc.UserDefault:getInstance():setStringForKey("NewYear2026ModuleShowTimeAward" .. XH.playerData:getNumberID(), todayStr .. "_" .. (lasttimeArr[2] + 1))
    --     XH.viewManager:openView("NewYear2026", nil ,{source = "auto2"})
    -- end
end

function NewYear2026Module:reqInfo(opt, isAuto)
    self._curActInfo = self:getCurrentActInfo()
    if self._curActInfo == nil then
        self._actInfo = nil
        self:flushActInfo()
        return
    end
    self:startReq("reqInfo", {
        act_id = self._curActInfo.aid,
        task_id = 0,
        opt = opt
    }, XH.KW_CONFIG_LOGIC_TIME_OUT)
end

function NewYear2026Module:onActInfoResp(req, type, data)
    if type == XH.Req.TYPE.SUCCESS then
        self._actInfo = data.infos[1]
        for i,v in ipairs(self._actInfo.rewards) do
            Bridge.changePropCnt(v, "id", "count")
        end
        -- self:checkShowInviteView()
        self:dispatchEvent({name = self.EVENT_FLUSH_ACTIVITY_INFO})
        -- xn.Utils.sendDispatchEvent(ENotifySubject.kNotifySubject_Activity, en_kNotifySubject_Activity.EN_NOTIFY_ACTIVITY_JUAWARD)
    end
end

function NewYear2026Module:reqGetAward(info)
    -- self._curActInfo = self:getCurrentActInfo()
    if self._curActInfo == nil then
        XH.TipTool.showToast("活动已结束")
        return
    end
    XH.TipTool.showLoading()
    self:startReq("reqGetAward", {
        act_id = self._curActInfo.aid,
        share_id = self._actInfo.id,
    }, XH.KW_CONFIG_LOGIC_TIME_OUT)
end

function NewYear2026Module:onGetAwardResp(req, type, data)
    XH.TipTool.hideLoading()
    if type == XH.Req.TYPE.SUCCESS then
        for j,reward in ipairs(data.curRewards) do
            Bridge.changePropCnt(reward, "id", "count")
        end
        self:showAwardView(data.curRewards)
        self:reqInfo()
        Bridge.updateProps()
        -- xn.Utils.sendDispatchEvent(ENotifySubject.kNotifySubject_Activity, en_kNotifySubject_Activity.EN_NOTIFY_ACTIVITY_JUAWARD)
    elseif type == XH.Req.TYPE.FAIL then
        if data and data.resp and data.resp.errCode == 16004 then
            XH.TipTool.showTip({type = XH.TIP_LAYER_TYPE.OK}, "奖励已领取")
            return
        end
        XH.TipTool.showTip({type = XH.TIP_LAYER_TYPE.OK}, "领取失败" .. ((data and data.resp and data.resp.errCode) or -1))
    elseif type == XH.Req.TYPE.TIMEOUT then
        XH.TipTool.showTip({type = XH.TIP_LAYER_TYPE.OK}, "领取超时")
    end
end

function NewYear2026Module:showAwardView(rewards)
    local awardInfo = {}
    awardInfo.prize_names = {}
    awardInfo.image_urls = {}
    awardInfo.prize_count = {}
    for i, award in ipairs(rewards or {}) do
        awardInfo.prize_names[i] = (award.name or "") .. "x"..(award.count or 0)
        awardInfo.prize_count[i] = (award.count or 0)
        awardInfo.image_urls[i] = award.icon
    end
    awardInfo.text = " "
    if #awardInfo.prize_names == 0 then
        return
    end
    XH.viewManager:openView("BackActivityAwardView", nil, nil, awardInfo)
end

-- 请求任务内容、配置
-- function NewYear2026Module:reqGetContent(activityId)
--     if xn.Http50Utils.token() == "" then
--         return
--     end
--     self:startReq("ReqLuckTaskGetContent", activityId, 0)
-- end

-- function NewYear2026Module:respGetContent(req, type, cbData)
--     if type == XH.Req.TYPE.SUCCESS then
--         cbData.box = checktable(cbData.box)
--         if cbData.box and cbData.box[1] then
--             local boxData = cbData.box[1]
--             if boxData.actType == "denglu" and boxData.jump.jump == "AC_JUMPTYPE_NULL" then
--                 boxData.jump.jump = "AC_JUMPTYPE_LOGIN"
--             end
--             for k, v in pairs(self.taskInfo) do
--                 if v.activityId == boxData.activityId then
--                     table.remove(self.taskInfo, k)
--                     break
--                 end
--             end
--             -- if string.match(boxData.actType, "clubhaoka") then
--             --     -- 如果是消耗类型，数值要除以100
--             --     local maxProgress = boxData.content[#boxData.content].target / 100
--             --     local progress = boxData.progress / 100
--             --     boxData.content[#boxData.content].target = maxProgress
--             --     boxData.progress = progress
--             -- end
--             table.insert(self.taskInfo, boxData)
--             self.curActivityId = boxData.activityId
--             self:updateCurContentId()
--             xn.Utils.sendDispatchEvent(ENotifySubject.kNotifySubject_LuckyTask, en_kNotifySubject_Plaza.kPlaza_LUCKY_CONTENT, nil, true)
--         end
--     end
-- end
return NewYear2026Module
 �.  