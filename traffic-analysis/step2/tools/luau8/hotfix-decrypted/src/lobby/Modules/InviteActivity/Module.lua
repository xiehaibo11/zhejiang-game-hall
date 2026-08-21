local InviteActivityModule = class("InviteActivityModule", XH.ModuleBase)
local Config = import(".Config")
InviteActivityModule.EVENT_INVITE_ACT = "EVENT_INVITE_ACT"
InviteActivityModule.EVENT_BASE_INFO = "EVENT_BASE_INFO"
InviteActivityModule.EVENT_INVITE_RECORD = "EVENT_INVITE_RECORD"
InviteActivityModule.EVENT_INVITE_REWARD_RECORD = "EVENT_INVITE_REWARD_RECORD"
InviteActivityModule.EVENT_FLUSH_ACT_INFO = "EVENT_FLUSH_ACT_INFO"
InviteActivityModule.EVENT_FLUSH_INVITE_LOG_REDPOINT = "EVENT_FLUSH_INVITE_LOG_REDPOINT"
InviteActivityModule.EVENT_GET_PRIZE = "EVENT_GET_PRIZE"
local MAX_INVITE_USER = 50
local REQ_SHARE_URL = 'zqinvite/invites?invite_numid=%d&aid=%d&lobbyid=%d'
local ENUM_INVITE_ACTIVITY_STATE = {
    UNDERWAY = 0, -- 进行中
    AVAILABLE = 1, -- 可领取
    RECEIVED = 2 -- 已领取
}
local ACTIDS = Config.ACTIDS

function InviteActivityModule:ctor()
    InviteActivityModule.super.ctor(self)
    self._actId = 0
    self._inviteStatusInfo = {}
    self:resetInviteAwardRecord()
    self:resetInviteRecord()
    self:updateMaxId()
end

function InviteActivityModule:getReqConfig()
    return {
        ReqInviteLogin = {reqPath = "lobby.Req.Act.Invite.ReqInviteLogin", callBack = self.onRespInviteLogin},
        ReqInviteActivityInfo = {reqPath = "lobby.Req.Act.Invite.ReqInviteLogin", callBack = self.onRespInviteActivityInfo},
        ReqInviteGetPrize = {reqPath = "lobby.Req.Act.Invite.ReqInviteLogin", callBack = self.onRespInviteGetPrize},
        ReqInviteGetStagePrize = {reqPath = "lobby.Req.Act.Invite.ReqInviteLogin", callBack = self.onRespInviteGetStagePrize},
        ReqInviteLog = {reqPath = "lobby.Req.Act.Invite.ReqInviteLogin", callBack = self.onRespInviteLog},
        ReqInvitePrizeLog = {reqPath = "lobby.Req.Act.Invite.ReqInviteLogin", callBack = self.onRespInvitePrizeLog},
        ReqCheckFareLimit = {reqPath = "lobby.Req.Act.Invite.ReqInviteLogin", callBack = self.onRespCheckFareLimit},
    }
end

function InviteActivityModule:getProxyEvents()
    return {}
end

function InviteActivityModule:getRemoteCfg(default)
    local cfg = XH.lobby:getModule("Configuration"):getAllConfigData("InviteAct")
    local areaId = "_" .. XH.areaData:getAreaID()
    if cfg and cfg[areaId] then
        return cfg[areaId]
    end
    return cfg or default
end
function InviteActivityModule:getActId()
    local cfg = self:getRemoteCfg({})
    return cfg.aid or ACTIDS[XH.areaData:getAreaID() .. ""] or 0
end

function InviteActivityModule:reqInviteActivityInfo()
    self:reqCommon("ReqInviteActivityInfo", "zqinvite/info")
end

function InviteActivityModule:reqInviteGetPrize()
    self:reqCommon("ReqInviteGetPrize", "zqinvite/getPrize")
end

function InviteActivityModule:reqInviteGetStagePrize(taskid, phoneNum, trans_fk)
    self:reqCommon("ReqInviteGetStagePrize", "zqinvite/getStagePrize", {taskid = taskid, phone = phoneNum, trans_fk = trans_fk and 1 or 0})
end

function InviteActivityModule:reqInviteLogin()
    self:reqCommon("ReqInviteLogin", "zqinvite/login")
end

function InviteActivityModule:reqCheckFareLimit(taskid, charge_fare, callback)
    self:reqCommon("ReqCheckFareLimit", "zqinvite/checkFareLimit", {taskid = taskid, charge_fare = charge_fare})
end

function InviteActivityModule:reqInviteRecord(ex)
    -- self.curRecordPage = ex.page
    if self._isReqPageInfo then
        return
    end
    self._isReqPageInfo = true
    self:reqCommon("ReqInviteLog", "zqinvite/inviteLog", ex)
    -- self:onRespInviteLog({reqData = ex}, XH.Req.TYPE.SUCCESS, {
    --     data = {
    --         totalPage = 10,
    --         logs = {
    --             {
    --                 id = ex.page * 10 + 1,
    --                 ivt_numid = ex.page .. "1",
    --                 created_at = os.time() - 3600,
    --                 nickname = "1xxxxd大的打掉等等",
    --                 obj_num = 3,
    --                 complete_num = 1,
    --                 img = ""
    --             }, {
    --                 id = ex.page * 10 + 2,
    --                 ivt_numid = ex.page .. "2",
    --                 created_at = os.time() - 3600,
    --                 nickname = "2xxxxd大的打掉等等",
    --                 obj_num = 3,
    --                 complete_num = 2,
    --                 img = ""
    --             }, {
    --                 id = ex.page * 10 + 3,
    --                 ivt_numid = ex.page .. "3",
    --                 created_at = os.time() - 3600,
    --                 nickname = "3xxxxd大的打掉等等",
    --                 obj_num = 3,
    --                 complete_num = 3,
    --                 img = ""
    --             }, {
    --                 id = ex.page * 10 + 4,
    --                 ivt_numid = ex.page .. "3",
    --                 created_at = os.time() - 3600,
    --                 nickname = "3xxxxd大的打掉等等",
    --                 obj_num = 3,
    --                 complete_num = 3,
    --                 img = ""
    --             }, {
    --                 id = ex.page * 10 + 5,
    --                 ivt_numid = ex.page .. "3",
    --                 created_at = os.time() - 3600,
    --                 nickname = "3xxxxd大的打掉等等",
    --                 obj_num = 3,
    --                 complete_num = 3,
    --                 img = ""
    --             }
    --         }
    --     }
    -- })
end

function InviteActivityModule:reqInviteAwardRecord(ex)
    if self._isReqPageInfo then
        return
    end
    self._isReqPageInfo = true
    self:reqCommon("ReqInvitePrizeLog", "zqinvite/prizeLog", ex)
    -- self:onRespInvitePrizeLog({reqData = ex}, XH.Req.TYPE.SUCCESS, {
    --     data = {
    --         totalPage = 10,
    --         logs = {
    --             {id = ex.page * 10 + 1, ivt_numid = ex.page .. "1", created_at = os.time() - 3600, prize_name = "1xxxxd大的打掉等等"},
    --             {id = ex.page * 10 + 2, ivt_numid = ex.page .. "2", created_at = os.time() - 3600, prize_name = "2xxxxd大的打掉等等"},
    --             {id = ex.page * 10 + 3, ivt_numid = ex.page .. "3", created_at = os.time() - 3600, prize_name = "3xxxxd大的打掉等等"},
    --             {id = ex.page * 10 + 4, ivt_numid = ex.page .. "3", created_at = os.time() - 3600, prize_name = "3xxxxd大的打掉等等"},
    --             {id = ex.page * 10 + 5, ivt_numid = ex.page .. "3", created_at = os.time() - 3600, prize_name = "3xxxxd大的打掉等等"}
    --         }
    --     }
    -- })
end

function InviteActivityModule:reqCommon(cellName, method, ex)
    local aid = self:getActId()
    if aid and aid > 0 then
        self:startReq(cellName, {method = method, aid = aid, ex = ex}, 5)
    end
end

function InviteActivityModule:isShowIcon()
    if self._isShowIcon == nil then
        return false
    end
    return self._isShowIcon
end

function InviteActivityModule:onRespInviteLogin(cell, type, data)
    if type == XH.Req.TYPE.SUCCESS then
        -- XH.viewManager:openView("InviteAct")
        self._inviteStatusInfo = data.data
        for i, v in ipairs(data.data.stageAwards) do
            self:changePropCnt(v, "propid", "prizeNum")
            for i2,v2 in ipairs(v.prizeList) do
                self:changePropCnt(v2, "propid", "prizeNum")
            end
        end
        self._isShowIcon = true
        self:dispatchEvent({name = self.EVENT_INVITE_ACT, data = {bShow = true}})
        self:checkShowInviteView()
        self:checkFirstRedPoint()
        self:checkAward()

    else
        self._isShowIcon = false
        self:dispatchEvent({name = self.EVENT_INVITE_ACT, data = {bShow = false}})
    end
end
function InviteActivityModule:onRespInviteActivityInfo(cell, type, data)
    if type == XH.Req.TYPE.SUCCESS then
        self._inviteBasicInfo = data.data
        -- self._inviteBasicInfo.stageAwards[1].prizeList ={self._inviteBasicInfo.stageAwards[1],self._inviteBasicInfo.stageAwards[1]}
        self._shareDomain = data.data.shareDomain
        for i, v in ipairs(data.data.singleAwards) do
            self:changePropCnt(v, "propid", "num")
        end
        for i, v in ipairs(data.data.stageAwards) do
            self:changePropCnt(v, "propid", "prizeNum")
            for i2,v2 in ipairs(v.prizeList) do
                self:changePropCnt(v2, "propid", "prizeNum")
            end
        end
        self:dispatchEvent({name = self.EVENT_BASE_INFO, data = data.data})
    else
        self._isShowIcon = false
        self:dispatchEvent({name = self.EVENT_INVITE_ACT, data = {bShow = false}})
        print("onRespInviteActivityInfo " .. type, data)
    end
end
function InviteActivityModule:onRespInviteLog(cell, type, data)
    self._isReqPageInfo = false
    if type == XH.Req.TYPE.SUCCESS then
        self.curRecordPage = cell.reqData.page
        self.totalRecordPage = data.data.totalPage
        local addNum = #data.data.logs
        for i, v in ipairs(data.data.logs) do
            table.insert(self._inviteRecords, v)
        end
        self:dispatchEvent({
            name = self.EVENT_INVITE_RECORD,
            data = {list = self._inviteRecords, maxid = self._inviteMaxID, isGetAll = self.curRecordPage >= self.totalRecordPage, addNum = addNum}
        })
        self:updateMaxId()
        -- if cell.reqData.isFirstCheck then
        --     for i, v in ipairs(data.data.logs) do
        --         if v.complete_num < v.obj_num then
        --             self._isShowWarning = true
        --             self._isShowInviteRedPoint = true
        --             self:dispatchEvent({
        --                 name = self.EVENT_FLUSH_INVITE_LOG_REDPOINT,
        --                 data = {bShow = true}
        --             })
        --             break
        --         end
        --     end
        --     self._isShowWarning = true
        --     self._isShowInviteRedPoint = true
        -- end
    elseif type == XH.Req.TYPE.FAIL then
        if data and data.message then
            XH.TipTool.showToast(data.message)
        end
    else
        print("onRespInviteLog TIMEOUT")
    end
end

function InviteActivityModule:onRespInviteGetPrize(cell, type, data)
    if type == XH.Req.TYPE.SUCCESS then
        self._inviteBasicInfo.singleReadyGet = 0
        self._inviteStatusInfo.singleReadyGet = 0
        self:showInviteAwardView(data.data.getCount)
        self:dispatchEvent({name = self.EVENT_GET_PRIZE})
        self:checkAward()
        XH.playerData:flushPlayerDrop()
    elseif type == XH.Req.TYPE.FAIL then
        if data then
            XH.TipTool.showToast(data.message or data.info or "领取失败")
        end
    else
        print("onRespInviteGetPrize TIMEOUT")
    end
end

function InviteActivityModule:test(taskid)
    if self._inviteBasicInfo then
        -- self:showStagePrizeView(taskid)
        -- self:updateStageAwards(taskid)
        -- self:updateStatusStageAwards(taskid)
        -- self:checkAward()
        -- self:showInviteAwardView(2)
    end
end
function InviteActivityModule:onRespInviteGetStagePrize(cell, type, data)
    if type == XH.Req.TYPE.SUCCESS then
        self:showStagePrizeView(data.data.taskid, cell.reqData.trans_fk == 1, data.data.awardMsg)
        self:updateStageAwards(data.data.taskid)
        self:updateStatusStageAwards(data.data.taskid)
        self:checkAward()
        XH.playerData:flushPlayerDrop()
    elseif type == XH.Req.TYPE.FAIL then
        if data then
            XH.TipTool.showToast(data.message or data.info or "领取失败")
        end
    else
        print("onRespInviteGetStagePrize TIMEOUT")
    end
end

function InviteActivityModule:onRespInvitePrizeLog(cell, type, data)
    self._isReqPageInfo = false
    if type == XH.Req.TYPE.SUCCESS then
        self.curAwardPage = cell.reqData.page
        self.totalAwardPage = data.data.totalPage
        local addNum = #data.data.logs
        for i, v in ipairs(data.data.logs) do
            table.insert(self._rewardRecords, v)
        end
        self:dispatchEvent({
            name = self.EVENT_INVITE_REWARD_RECORD,
            data = {list = self._rewardRecords, isGetAll = self.curAwardPage >= self.totalAwardPage, addNum = addNum}
        })
    elseif type == XH.Req.TYPE.FAIL then
        if data and data.message then
            XH.TipTool.showToast(data.message)
        end
    else
        print("onRespInvitePrizeLog TIMEOUT")
    end
end

function InviteActivityModule:onRespCheckFareLimit(cell, type, data)
    XH.TipTool.hideLoading()
    if self._checkFareLimitCallback == nil then
        return
    end
    if type == XH.Req.TYPE.SUCCESS then
        self._checkFareLimitCallback(true)
    elseif type == XH.Req.TYPE.FAIL then
        if data and data.message then
            XH.TipTool.showToast(data.message)
        end
        self._checkFareLimitCallback(false)
    else
        print("onRespInvitePrizeLog TIMEOUT")
    end
    self._checkFareLimitCallback = nil
end

function InviteActivityModule:showInviteAwardView(count)
    local awardInfo = {}
    awardInfo.prize_names = {}
    awardInfo.image_urls = {}
    awardInfo.prize_count = {}
    for i, award in ipairs(self._inviteBasicInfo.singleAwards or {}) do
        awardInfo.prize_names[i] = award.name or ""
        awardInfo.prize_count[i] = (award.num or 0) * count
        awardInfo.image_urls[i] = award.url or ""
    end
    awardInfo.text = " "
    if #awardInfo.prize_names == 0 then
        return
    end
    XH.viewManager:openView("BackActivityAwardView", nil, nil, awardInfo)
end

function InviteActivityModule:showStagePrizeView(taskid, trans_fk, msg)
    if not self._inviteBasicInfo then
        return
    end
    local awardInfo = {}
    awardInfo.prize_names = {}
    awardInfo.image_urls = {}
    awardInfo.prize_count = {}
    local idx = 1
    for i, award in ipairs(self._inviteBasicInfo.stageAwards or {}) do
        if taskid == award.id then
            if string.find(award.prizeName, "话费") then
                if trans_fk then
                    XH.TipTool.showToast(msg)
                else
                    XH.TipTool.showToast("话费发放中，请注意查收！")
                end
                return    
            end
            for i2,v in ipairs(award.prizeList) do
                awardInfo.prize_names[idx] = v.prizeName or ""
                awardInfo.prize_count[idx] = v.prizeNum
                awardInfo.image_urls[idx] = v.prizeImage or ""
                idx = idx + 1
            end
        end
    end
    awardInfo.text = " "
    if #awardInfo.prize_names == 0 then
        return
    end
    XH.viewManager:openView("BackActivityAwardView", nil, nil, awardInfo)
end

local KW_SHARE_TEXT = {
    {title = "限时领取！速领海量房卡奖励", text = "活动不等人，奖励先到先得！赶紧拉上朋友一起抢占奖励名额～"},
    {title = "亲测有效！冲就对了", text = "试过了试过了！奖励真的能拿到手～ 福利超实在，错过血亏！"},
    {title = "零门槛！邀请好友 = 海量房卡", text = "不用费力气，邀请好友就能领取！操作超简单，小白也能轻松拿捏～"},
    {title = "速领！点我即得N多房卡！", text = "独乐乐不如众乐乐，好友越多，福利越多，赶紧召唤小伙伴一起冲！"},
    {title = "就现在！抢海量房卡奖励！", text = "邀请好友参与，有机会领取房卡奖励，再不来就来不及了！"},
    {title = "不花一分钱！免费房卡即到手", text = "邀请好友，福利直接拿，已经有小伙伴领取到了！赶紧去看看"},
    {title = "手慢无！海量房卡等你领", text = "先到先得！邀请好友即可参与，轻轻一点，福利马上拿"},
    {title = "别划走！免费房卡来了", text = "有个好事告诉你，错过等明年！我们一起拿海量房卡奖励！"},
    {title = "嘘~有个领海量房卡的小秘密", text = "无聊时刻的最佳选择！邀请好友一下，海量房卡奖励可能就是你的"},
    {title = "有好事叫你！快来拿！", text = "好朋友，有福同享！邀请好友，超多房卡一起拿！"},
}
function InviteActivityModule:shareWX(bCopy)
    math.randomseed(tonumber(tostring(os.time()):reverse():sub(1, 6)))
    local rand = math.random(#KW_SHARE_TEXT)
    local shareText = KW_SHARE_TEXT[rand] or KW_SHARE_TEXT[1]
    local url = self:getShareUrl()
    if bCopy then
        XH.SysTool.copyString("【重要】邀请流程：①复制下载链接②粘贴到微信内发给好友\n【浙江游戏大厅】组队开黑随时call我！通过我这个专属链接成功注册我就能拿到终极房卡奖励了~\n【下载链接】" .. url)
        XH.TipTool.showToast("分享文案已复制到剪贴板")
        return
    end
    XH.sdkManager:startShare({
        textTitle = shareText.title or "浙江游戏大厅", -- 分享标题
        url = url, -- 微信网页模式分享的链接
        type = "url", -- word是文字分享，url网页模式分享，pic分享图片
        scene = "0", -- 0是分享到好友会话，1是分享到朋友圈
        imageUrl = "com.xm.zjgamecenter", -- 分享图片地址（分享网页模式，需要传安卓包名）
        text = shareText.text or "年度精品推荐，百万浙江玩家下载！" -- 分享内容 
    }, self.shareWXCallback, self)
end
function InviteActivityModule:shareWXCallback(data)

end

function InviteActivityModule:getShareUrl()
    return (self._shareDomain or "") .. string.format(REQ_SHARE_URL, XH.playerData:getNumberID(), self:getActId(), XH.areaData:getLobbyID())
end

function InviteActivityModule:resetInviteAwardRecord()
    self.curAwardPage = 0
    self.totalAwardPage = 0
    self._rewardRecords = {}
    self._isReqPageInfo = false
end
function InviteActivityModule:resetInviteRecord()
    self.curRecordPage = 0
    self.totalRecordPage = 0
    self._inviteRecords = {}
    self._isReqPageInfo = false
end

function InviteActivityModule:updateStageAwards(taskid)
    if not self._inviteBasicInfo then
        return
    end
    for i = 1, #self._inviteBasicInfo.stageAwards do
        if (taskid == self._inviteBasicInfo.stageAwards[i].id) then
            self._inviteBasicInfo.stageAwards[i].status = ENUM_INVITE_ACTIVITY_STATE.RECEIVED;
        end
    end
    self:dispatchEvent({name = self.EVENT_BASE_INFO, data = self._inviteBasicInfo})
end

function InviteActivityModule:updateStatusStageAwards(taskid)
    if not self._inviteStatusInfo then
        return
    end
    for i = 1, #self._inviteStatusInfo.stageAwards do
        if (taskid == self._inviteStatusInfo.stageAwards[i].id) then
            self._inviteStatusInfo.stageAwards[i].status = ENUM_INVITE_ACTIVITY_STATE.RECEIVED;
        end
    end
end

function InviteActivityModule:updateMaxId()
    local maxID = cc.UserDefault:getInstance():getIntegerForKey("InviteActivityModuleMaxId" .. XH.playerData:getNumberID(), 0)
    for i, v in ipairs(self._inviteRecords) do
        if v.id > maxID then
            maxID = v.id
        end
    end
    self._inviteMaxID = maxID
    cc.UserDefault:getInstance():setIntegerForKey("InviteActivityModuleMaxId" .. XH.playerData:getNumberID(), maxID)
end

function InviteActivityModule:checkAward()
    local bShow = self:isHaveAward()
    local bWarning = self._isShowWarning
    self:dispatchEvent({name = self.EVENT_FLUSH_ACT_INFO, data = {bShow = bShow or bWarning}})
end

function InviteActivityModule:isHaveAward()
    if not self._inviteStatusInfo or self._inviteStatusInfo.singleReadyGet == nil then
        return false
    end
    if (self._inviteStatusInfo.singleReadyGet > 0) then
        return true
    end
    for i = 1, #self._inviteStatusInfo.stageAwards do
        if (self._inviteStatusInfo.stageAwards[i].status == ENUM_INVITE_ACTIVITY_STATE.AVAILABLE) then
            return true
        end
    end
    return false
end

function InviteActivityModule:changePropCnt(reward, keyPropId, keyCount)
    if reward[keyPropId] == XH.areaData:getPropLimitedTimeRoomCardID() then
        if XH.areaData:getPropLimitedTimeRoomCardRatio() then
            reward[keyCount] = reward[keyCount] / XH.areaData:getPropLimitedTimeRoomCardRatio()
        end
    end
end

function InviteActivityModule:checkShowInviteView()
    if self._inviteStatusInfo.inviteTotal >= MAX_INVITE_USER then
        return false
    end
    local info = cc.UserDefault:getInstance():getStringForKey("InviteActivityModuleShowTime" .. XH.playerData:getNumberID(), "0_0")
    local dayShowCnt = self:getRemoteCfg({dayShowCnt = 1})
    local lasttimeArr = string.split(info, "_")
    lasttimeArr[2] = tonumber(lasttimeArr[2]) or 0
    local todayStr = os.date("%Y%m%d", os.time())
    if todayStr ~= lasttimeArr[1] then
        lasttimeArr[2] = 0
    end
    if lasttimeArr[2] < dayShowCnt.dayShowCnt then
        cc.UserDefault:getInstance():setStringForKey("InviteActivityModuleShowTime" .. XH.playerData:getNumberID(),
                                                     todayStr .. "_" .. (lasttimeArr[2] + 1))
        XH.viewManager:openView("InviteAct", nil, {source="auto"})
    end
end

function InviteActivityModule:checkFirstRedPoint()
    local key = "InviteActivityModuleCheckFirstRedPoint"
    local info = cc.UserDefault:getInstance():getStringForKey(key .. XH.playerData:getNumberID(), "0_0")
    local dayCheckCnt = 1
    local lasttimeArr = string.split(info, "_")
    lasttimeArr[2] = tonumber(lasttimeArr[2]) or 0
    local todayStr = os.date("%Y%m%d", os.time())
    if todayStr ~= lasttimeArr[1] then
        lasttimeArr[2] = 0
    end
    if lasttimeArr[2] < dayCheckCnt then
        cc.UserDefault:getInstance():setStringForKey(key .. XH.playerData:getNumberID(), todayStr .. "_" .. (lasttimeArr[2] + 1))
        self._isShowWarning = true
    end
end

function InviteActivityModule:setShowWarning(bShow)
    self._isShowWarning = bShow
    self:checkAward()
end

function InviteActivityModule:isHaveHuaFei()
    if not self._inviteStatusInfo then
        return false
    end
    for i, award in ipairs(self._inviteStatusInfo.stageAwards or {}) do
        if string.find(award.prizeName, "话费") then
            return true
        end
    end
    return false
end

function InviteActivityModule:checkShowTip(info, showRuleFunc)
    XH.TipTool.showLoading()
    self:reqCheckFareLimit(info.id, info.prizeNum)
    self._checkFareLimitCallback = function(isCanGetHuaFei) 
        if isCanGetHuaFei then
            XH.viewManager:openView("InvitePhoneNumView", nil, info)
        else
            XH.viewManager:openView("InviteGetPhoneCardTip", nil, {info=info, total=self._inviteBasicInfo.inviteTotal, showRuleFunc=showRuleFunc, getAwardFunc=function() self:reqInviteGetStagePrize(info.id, "", true) end})
        end
    end
end

function InviteActivityModule:isNeedReq()
    return false
end

function InviteActivityModule:isValid()
    return self._inviteStatusInfo and self._inviteStatusInfo.stageAwards ~= nil
end

function InviteActivityModule:isOpening()
    return XH.viewManager:isViewExist("InviteAct")
end

function InviteActivityModule:openView(scenefrom, isInGame, pos, changeSceneName)
    XH.viewManager:openView("InviteAct")
end
return InviteActivityModule
�\