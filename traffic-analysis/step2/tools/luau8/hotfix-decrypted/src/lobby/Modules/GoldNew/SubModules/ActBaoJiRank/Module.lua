local ActBaoJiRankModule = class("ActBaoJiRankModule", XH.ModuleBase)
local RedPointManager = import("...Manager.RedPointManager")
local Utils = import("...Tool.Utils")
local Config = import(".Config")
local BaoJiRankTitle = import(".BaoJiRankTitle")
local LOCAL_LASTGAME_MORE_KEY = "ActBaoJiRankInfo"
ActBaoJiRankModule.ActName = "crit_hall_of_frame" -- "TeHuiLiBaoMrfl" --
ActBaoJiRankModule.EVENT_ACT_VAILD = "EVENT_ACT_VAILD"
ActBaoJiRankModule.EVENT_BASE_ACT_INFO = "EVENT_BASE_ACT_INFO"
ActBaoJiRankModule.EVENT_USER_ACT_INFO = "EVENT_USER_ACT_INFO"
ActBaoJiRankModule.EVENT_RANK_INFO = "EVENT_RANK_INFO"
ActBaoJiRankModule.EVENT_SELF_RANK_INFO = "EVENT_SELF_RANK_INFO"
local PAGE_SIZE = 50

function ActBaoJiRankModule:ctor()
    ActBaoJiRankModule.super.ctor(self)
    self:initRedPoint()
    self._autoRefreshActCount = 0
    self._rankInfo = {}
    -- self._reqState = {}
    -- self._reqState[0] = true
    self._curPage = 1
    self._totalPage = 0
    self._isGetDetail = false
    self._isGetBaseInfo = false
    self._isGetUserInfo = false

    self._actInfo = {
        seasonIdx = -1,
        weekIdx = 0,
        seasonStatus = Config.CritSeasonStatus.Default,
        dingwei = {total = 0, played = 0},
        weekNum = 4,
        weekRoomScore = {0, 0, 0, 0, 0},
        totalScore = 1000,
        weekEndTime = 0,
        weekGiftState = {Config.CritAwardStatus.Un_active, Config.CritAwardStatus.Un_active, Config.CritAwardStatus.Un_active},
        weekGiftNeed = {2000, 3000, 5000},
        weekGiftInfo = {},
        weekTotalBJ = 0, -- 周当前总暴击累加
        myRanking = 0,
        myRankScore = 0,
        myLastSeasonRanking = 0
    } -- 基础活动信息
    self._aid = 0

    self._cache = {aid = 0, seasonUserRank = {}}
    self._titleNodes = {}
    self._isUnload = cc.UserDefault:getInstance():getBoolForKey(LOCAL_LASTGAME_MORE_KEY .. XH.playerData:getNumberID(), false)
    self:onPropChangedBag()
    self:onActs({info = XH.Bridge:getModule("GoldNew"):getActs()})
end

function ActBaoJiRankModule:getReqConfig()
    return {
        reqActDetail = {reqPath = XH.Bridge:getReqPath("ReqActDetail"), callBack = self.onActDetailResp},
        reqBaseActInfo = {reqPath = XH.Bridge:getReqPath("ReqCritHofBaseInfoRequest"), callBack = self.onBaseActInfoResp},
        reqUserActInfo = {reqPath = XH.Bridge:getReqPath("ReqCritHofUserInfoRequest"), callBack = self.onUserActInfoResp},
        reqGetAward = {reqPath = XH.Bridge:getReqPath("ReqCritHofGetCritAwardRequest"), callBack = self.onGetAwardResp},
        -- 获取玩家排名
        reqGetUserWeekRanking = {reqPath = XH.Bridge:getReqPath("ReqCritHofGetUserRankInfoRequest"), callBack = self.onGetUserWeekRankResp},
        -- 获取排行榜数据
        reqGetRankData = {reqPath = XH.Bridge:getReqPath("ReqCritHofRankListRequest"), callBack = self.respRankInfo}
    }
end

function ActBaoJiRankModule:getProxyEvents()
    return {
        {module = XH.Bridge:getModule("GoldNew"), eventKeyName = "EVENT_ACT_LIST", callBack = "onActs"},
        {module = XH.Bridge:getModule("GoldNew"), eventKeyName = "EVENT_TIME", callBack = "onTime"},
        {module = XH.Bridge:getModule("BagSysNew"), eventKeyName = "EVENT_OPERATE_PROPS", callBack = "onOperateProps"},
        {module = XH.Bridge:getModule("BagSysNew"), eventKeyName = "EVENT_SELF_BACK_PACK_DATA", callBack = "onPropChangedBag"},
        {module = XH.Bridge:getModule("BagSysNew"), eventKeyName = "EVENT_PLAYER_BAG_DATA", callBack = "onPlayerBagData"}
    }
end

function ActBaoJiRankModule:onActs(event)
    local acts = event.info or {}
    dump(acts)
    for _, info in pairs(acts) do
        local act = info
        local start = tonumber(act.online)
        local endTime = tonumber(act.offline)
        local now = self:getServerTime()
        if info.type == ActBaoJiRankModule.ActName and now > start and now < endTime then
            self:setActivityId(info.aid)
            self._actInfo.listInfo = info
            return
        end
    end
    self:setActivityId(0)
end

-- 活动倒计时结束后请求刷新
function ActBaoJiRankModule:onTime()
    local info = self:getActInfo()
    if self:isSeasonEnd() then
        return
    end
    self._autoRefreshActCount = self._autoRefreshActCount - 1
    local leftTime = info.weekEndTime - self:getServerTime()
    if leftTime <= -2 and self._autoRefreshActCount < 0 then -- 延时2秒刷新
        self._autoRefreshActCount = 30 -- 防止无限请求加30秒延时
        self:reqBaseActInfo()
        self:reqUserActInfo()
    end
end

function ActBaoJiRankModule:isTitleProp(propid)
    return propid == Config.PROP_SEASON_TITLE_ID or propid == Config.PROP_WEEK_TITLE_ID
end

function ActBaoJiRankModule:onOperateProps(event)
    local opeInfo = event.info
    if opeInfo and opeInfo.operate_props == XH.BagSysProtocol.OPERATE_PROPS.OP_UNEQUIP and self:isTitleProp(opeInfo.propsid) then
        self._isUnload = true
        cc.UserDefault:getInstance():setBoolForKey(LOCAL_LASTGAME_MORE_KEY .. XH.playerData:getNumberID(), true)
    end
end

function ActBaoJiRankModule:onPropChangedBag(event)
    if self._isUnload then
        return
    end
    local selfBagData = XH.Bridge:getModule("BagSysNew"):getBagData():getSelfBagData()
    local timeprops = selfBagData.time_prop_info
    local seasonInfo = Utils:find(timeprops, function(v)
        return v.propsid == Config.PROP_SEASON_TITLE_ID and v.endtime > self:getServerTime()
    end)
    if seasonInfo and seasonInfo.props_state == XH.BagSysProtocol.PROPS_STATE.PS_IN_BODY then
        return
    end
    local weekInfo = Utils:find(timeprops, function(v)
        return v.propsid == Config.PROP_WEEK_TITLE_ID and v.endtime > self:getServerTime()
    end)
    if weekInfo and weekInfo.props_state == XH.BagSysProtocol.PROPS_STATE.PS_IN_BODY then
        return
    end

    local bagsysModule = XH.Bridge:getModule("BagSysNew")
    if seasonInfo then
        bagsysModule:reqOperateProps(XH.BagSysProtocol.OPERATE_PROPS.OP_EQUIP, Config.PROP_SEASON_TITLE_ID, true)
        return
    end
    if weekInfo then
        bagsysModule:reqOperateProps(XH.BagSysProtocol.OPERATE_PROPS.OP_EQUIP, Config.PROP_WEEK_TITLE_ID, true)
        return
    end
end

function ActBaoJiRankModule:isSeasonEnd()
    local info = self:getActInfo()
    return info.seasonStatus == Config.CritSeasonStatus.Settled and info.weekIdx == info.weekNum
end

function ActBaoJiRankModule:isValid()
    return self._aid > 0
end

function ActBaoJiRankModule:setActivityId(id)
    self._aid = id
    self._actInfo.seasonStatus = Config.CritSeasonStatus.Default
    self._actInfo.seasonIdx = -1

    if self._aid > 0 then
        self._isGetDetail = false
        self._isGetBaseInfo = false
        self._isGetUserInfo = false
        self:reqActDetail()
        self:reqBaseActInfo()
        self:reqUserActInfo()
    end
    self:dispatchEvent({name = self.EVENT_ACT_VAILD, info = self._aid > 0})
end

function ActBaoJiRankModule:initRedPoint()
end

function ActBaoJiRankModule:updateRedPointState()
end

function ActBaoJiRankModule:getActInfo()
    return self._actInfo
end

function ActBaoJiRankModule:updateSaveInfo(k, v)
end

function ActBaoJiRankModule:getSaveInfo(k)
    return self._saveInfo[k]
end

function ActBaoJiRankModule:getActivityId()
    return self._aid
end

function ActBaoJiRankModule:getServerTime()
    return XH.Bridge:getModule("GoldNew"):getServerTime()
end

function ActBaoJiRankModule:reqBaseActInfo()
    if not self:checkSeasonState("reqBaseActInfo") then
        return
    end
    self:startReq("reqBaseActInfo", self._aid)
end

function ActBaoJiRankModule:reqUserActInfo(bForce)
    if not bForce then
        if self._lastReqInfoTime and os.time() - self._lastReqInfoTime <= 1 then
            return
        end
    end
    if not self:checkSeasonState("reqUserActInfo") then
        return
    end
    self:startReq("reqUserActInfo", self._aid)
    self._lastReqInfoTime = os.time()
end

function ActBaoJiRankModule:onBaseActInfoResp(cell, type, data)
    if type == XH.Req.TYPE.SUCCESS then
        for i, v in pairs(data) do
            self._actInfo[i] = v
        end
        self._actInfo.weekEndTime = data.remainTime + self:getServerTime()
        self._actInfo.weekIdx = data.weekNum
        self._actInfo.seasonStatus = data.seasonStatus
        self._actInfo.weekGiftState = {}
        self._actInfo.weekGiftNeed = {}
        self._actInfo.weekGiftInfo = {}
        for i, v in ipairs(data.critAwardInfos) do
            self._actInfo.weekGiftState[i] = v.awardStatus
            self._actInfo.weekGiftNeed[i] = v.awardCfgScore
            self._actInfo.weekGiftInfo[i] = v.awardPropInfos
        end
        self._isGetBaseInfo = true
        if self._isGetDetail then
            self:dispatchEvent({name = self.EVENT_BASE_ACT_INFO, info = self:getActInfo()})
        end
    end
end

function ActBaoJiRankModule:onUserActInfoResp(cell, type, data)
    if type == XH.Req.TYPE.SUCCESS then
        self._actInfo.weekTotalBJ = data.weekCritNum
        self._actInfo.dingwei.played = data.locateMatchNum
        self._actInfo.weekRoomScore = data.sessionInfos
        self._isGetUserInfo = true
        if self._isGetDetail then
            self:dispatchEvent({name = self.EVENT_USER_ACT_INFO, info = self:getActInfo()})
        end
    end
end

function ActBaoJiRankModule:reqGetWeekGift(idx)
    if not self:checkSeasonState("reqGetAward") then
        return
    end
    self:startReq("reqGetAward", {aid = self._aid, score = self._actInfo.weekGiftNeed[idx]})
    XH.TipTool.showLoading()
    -- self:onGetAwardResp(idx, day) -- test
end

function ActBaoJiRankModule:onGetAwardResp(cell, type, data)
    XH.TipTool.hideLoading()
    if type == XH.Req.TYPE.SUCCESS then
        self:showGetAward(data.propInfos)
        self:reqBaseActInfo()
    end
end

function ActBaoJiRankModule:reqActDetail()
    if self._aid > 0 then
        self:startReq("reqActDetail", self._aid)
    end
end

function ActBaoJiRankModule:onActDetailResp(cell, flag, data)
    if flag == XH.Req.TYPE.SUCCESS then
        local success, info = pcall(function()
            local jsonInfo = json.decode(data.res.special or '{}')
            return jsonInfo.total_season
        end)
        if not success then
            print("Failed to parse special string:")
            return
        end
        self._actInfo.seasonIdx = info.season_index or -1
        self._actInfo.weekGiftNeed = info.crit_award_nums
        self._actInfo.dingwei.total = info.locate_match_num
        self._actInfo.weekNum = info.week_num
        self._actInfo.detail = info
        self._isGetDetail = true
        if self._isGetBaseInfo then
            self:dispatchEvent({name = self.EVENT_BASE_ACT_INFO, info = self:getActInfo()})
        end
        if self._isGetUserInfo then
            self:dispatchEvent({name = self.EVENT_USER_ACT_INFO, info = self:getActInfo()})
        end
    elseif flag == XH.Req.TYPE.TIMEOUT then
        XH.TipTool.showToast("请求活动详细超时" .. self._aid)
    else
        XH.TipTool.showToast(cell:getMessage())
    end
end

function ActBaoJiRankModule:showGetAward(propInfos)
    local awardInfo = {prize_names = {}, prize_pic = {}, propid = {}, count = {}, image_urls = {}}
    for i, e in pairs(propInfos) do
        awardInfo.prize_names[i] = e.propName
        awardInfo.image_urls[i] = e.imgUrl
        awardInfo.propid[i] = e.prop_id
        awardInfo.count[i] = e.prop_count
    end
    awardInfo.text = " "
    if #awardInfo.prize_names == 0 then
        return
    end
    XH.Bridge.viewManager:openView("BackActivityAwardView", nil, {
        closeFunc = function()
            -- self:reqBaseActInfo()
            -- self._actInfo[1].status = 1
            -- self:onActInfoResp()
        end
    }, awardInfo)
end

function ActBaoJiRankModule:onPlayerBagData(event)
    local info = event.data
    for _, timeProp in pairs(info.data.time_prop_info) do
        if timeProp.propsid == Config.PROP_SEASON_TITLE_ID and timeProp.props_state == 1 then
            self:reqGetUserWeekRanking(info.numid, -1, 0)
            return
        end
        if timeProp.propsid == Config.PROP_WEEK_TITLE_ID and timeProp.props_state == 1 then
            if self:isValid() and self._actInfo.seasonIdx >= 0 then
                self:reqGetUserWeekRanking(info.numid, self._actInfo.seasonIdx, self._actInfo.weekIdx)
            end
            return
        end
    end
    -- 没有装扮
    -- if self:isValid() and self._actInfo.seasonIdx >= 0 then
    --     self:reqGetUserWeekRanking(info.numid, self._actInfo.seasonIdx, self._actInfo.weekIdx)
    -- end
end

function ActBaoJiRankModule:reqRankInfo()
    self._rankInfo = {}
    -- self._reqState = {}
    self._curPage = 1
    self._totalPage = 0
    -- self._reqState[0] = true
    self:startReq("reqGetRankData", {aid = self._aid, pageIdx = self._curPage, pageSize = PAGE_SIZE})
    -- local test = {}
    -- for i = 1, 10 do
    --     test[i] = {
    --         rankNum = i,
    --         userId = i,
    --         headUrl = string.format("https://palmstatic.imeete.com/Download/avatar/newgold/%d.png", i),
    --         userNick = "name" .. i,
    --         rankScore = 1000 - i
    --     }
    -- end
    -- self:respRankInfo({}, XH.Req.TYPE.SUCCESS, {currPageIdx = self._curPage, totalPageNum = 10, rankInfos = test})
end

function ActBaoJiRankModule:reqNextRankInfo()
    -- if self._curPage == self._totalPage or (self._reqState[self._curPage + 1]) then
    --     return
    -- end
    -- self._reqState[self._curPage + 1] = true
    self:startReq("reqGetRankData", {aid = self._aid, pageIdx = self._curPage + 1, pageSize = PAGE_SIZE})
    -- local test = {}
    -- for i = 1, 10 do
    --     test[i] = {
    --         rankNum = i,
    --         userId = i,
    --         headUrl = string.format("https://palmstatic.imeete.com/Download/avatar/newgold/%d.png", i),
    --         userNick = "name" .. i,
    --         rankScore = 1000 - i
    --     }
    -- end
    -- self:respRankInfo({}, XH.Req.TYPE.SUCCESS, {currPageIdx = self._curPage + 1, totalPageNum = 10, rankInfos = test})
end

function ActBaoJiRankModule:respRankInfo(cell, type, data)
    if type == XH.Req.TYPE.SUCCESS then
        for _, v in ipairs(data.rankInfos) do
            table.insert(self._rankInfo, v)
            if v.userId == XH.playerData:getNumberID() then -- 自己排行刷新
                self._actInfo.myRanking = v.rankNum
                self._actInfo.myRankScore = v.rankScore
                self:dispatchEvent({name = self.EVENT_SELF_RANK_INFO, info = v})
            end
        end
        self._curPage = data.currPageIdx
        self._totalPage = data.totalPageNum
        self:dispatchEvent({name = self.EVENT_RANK_INFO, info = self._rankInfo, isGetAll = self._curPage == self._totalPage, addNum = #data.rankInfos})
    end
end

function ActBaoJiRankModule:reqGetMyWeekRanking()
    self:reqGetUserWeekRanking(XH.playerData:getNumberID(), self._actInfo.seasonIdx, self._actInfo.weekIdx)
end

function ActBaoJiRankModule:reqGetUserWeekRanking(numid, seasonIdx, weekIdx)
    if not self:checkSeasonState("reqGetUserWeekRanking") then
        return
    end
    -- if CF and CF.roomData then
    --     CF.roomData:setUserTitleData(numid, {
    --         propid = seasonIdx == self._actInfo.seasonIdx and Config.PROP_SEASON_TITLE_ID or Config.PROP_WEEK_TITLE_ID,
    --         rank = 1
    --     })
    -- end
    self:startReq("reqGetUserWeekRanking", numid, self._aid, seasonIdx, weekIdx)
end

function ActBaoJiRankModule:onGetUserWeekRankResp(cell, type, data)
    if type == XH.Req.TYPE.SUCCESS then
        if data.reqData.user_id == XH.playerData:getNumberID() then
            if data.reqData.total_season_num == self._actInfo.seasonIdx then
                self._actInfo.myRanking = data.rankNum
                self._actInfo.myRankScore = data.rankScore
            else
                self._actInfo.myLastSeasonRanking = data.rankNum
            end
            self:updateSelfRankInfo()
            self:dispatchEvent({name = self.EVENT_SELF_RANK_INFO, info = data})
        end
        if CF and CF.roomData then
            CF.roomData:setUserTitleData(data.reqData.user_id, {
                propid = data.reqData.total_season_num == self._actInfo.seasonIdx and Config.PROP_WEEK_TITLE_ID or Config.PROP_SEASON_TITLE_ID,
                rank = data.rankNum
            })
        end
    end
end

function ActBaoJiRankModule:checkSeasonState(reqFunc)
    if self._aid == 0 then
        return false
    end
    local reqCfg = self:getReqConfig()[reqFunc]
    if not reqCfg or not reqCfg.seasonStatus then
        return true
    end
    if table.indexof(reqCfg.seasonStatus, self._actInfo.seasonStatus) then
        return true
    end
    -- if self._actInfo.seasonStatus == Config.CritSeasonStatus.Running then
    --     return true
    -- end
    return false
end

function ActBaoJiRankModule:getLeftTimeStr(leftTime)
    if not leftTime or leftTime < 0 then
        if self._actInfo.weekIdx == self._actInfo.weekNum then
            return "已结束"
        end
        return "0时0分"
    end
    local dayTime = math.floor(leftTime / 86400)
    local hourTime = math.floor((leftTime - dayTime * 86400) / 3600)
    local minuteTime = math.floor((leftTime % 3600) / 60)
    if hourTime < 0 then
        hourTime = 0
    end
    if minuteTime < 0 then
        minuteTime = 0
    end
    local showStr
    if dayTime == 0 then
        showStr = hourTime .. "时" .. minuteTime .. "分"
    else
        showStr = dayTime .. "天" .. hourTime .. "时"
    end
    return showStr
end

function ActBaoJiRankModule:isNeedReq()
    return false
end

function ActBaoJiRankModule:isHaveAward()
    return false
end

function ActBaoJiRankModule:isOpening()
    return XH.Bridge.viewManager:isViewExist("GoldHallPeGPView")
end

function ActBaoJiRankModule:openView(fromScene)
    XH.Bridge.viewManager:openView("GoldHallPeGPView", nil, fromScene)
end

function ActBaoJiRankModule:createTitleNode(param)
    return BaoJiRankTitle.new(param)
end

function ActBaoJiRankModule:updateSelfRankInfo()
    local temp = {}
    for i, v in ipairs(self._titleNodes) do
        if not tolua.isnull(v.titleNode) then
            table.insert(temp, v)
            local isWeekRank = v.propid == Config.PROP_WEEK_TITLE_ID
            v.titleNode:updateUI({rank = isWeekRank and self._actInfo.myRanking or self._actInfo.myLastSeasonRanking, propid = v.propid})
        end
    end
    self._titleNodes = temp
end

function ActBaoJiRankModule:addUpdateSelfRankInfo(titleNode, propid)
    if propid == Config.PROP_SEASON_TITLE_ID then
        titleNode:updateUI({rank = self._actInfo.myLastSeasonRanking, propid = propid})
        self:reqGetUserWeekRanking(XH.playerData:getNumberID(), -1, 0)
    else
        titleNode:updateUI({rank = self._actInfo.myRanking, propid = propid})
        self:reqGetMyWeekRanking()
    end
    table.insert(self._titleNodes, {titleNode = titleNode, propid = propid})
end

return ActBaoJiRankModule
�L