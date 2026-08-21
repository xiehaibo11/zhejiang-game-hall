local TimeLoginActModule = class("TimeLoginActModule", XH.ModuleBase)
local TimeLoginActConfig = require("lobby.Modules.TimeLoginAct.Config")

TimeLoginActModule.FLUSH_TIMELOGIN_ACT_INFO = "FLUSH_TIMELOGIN_ACT_INFO"
TimeLoginActModule.FLUSH_TIMELOGIN_REWARD_STATUS = "FLUSH_TIMELOGIN_REWARD_STATUS"
TimeLoginActModule.FLUSH_TIMELOGIN_WHEEL_STATE = "FLUSH_TIMELOGIN_WHEEL_STATE"
TimeLoginActModule.PLAY_TIMELOGIN_WHEEL_ROLL = "PLAY_TIMELOGIN_WHEEL_ROLL"

function TimeLoginActModule:ctor()
    TimeLoginActModule.super.ctor(self)
    self._aid = 0 -- 活动id
    self._loginRewards = {}   -- 时段奖励
    self._goldOver = 50000  -- 可领金币限额，默认5万
    self._supplementCnt = 0 -- 补领次数
    self._boxReward = {}
end

function TimeLoginActModule:getReqConfig()
    return {
        -- ReqActDetail = { reqPath = "lobby.Req.LuckTask.ReqActDetail", callBack = self.respActDetail },
        ReqGetTimeLoginReward = { reqPath = "lobby.Req.TimeLoginAct.ReqGetTimeLoginReward", callBack = self.respTimeLoginReward },
        ReqClaimTimeLoginReward = { reqPath = "lobby.Req.TimeLoginAct.ReqClaimTimeLoginReward", callBack = self.respClaimTimeLoginReward },
    }
end

function TimeLoginActModule:setActivityId(aid)
    self._aid = aid
    self:reqGetTimeLoginReward()
end

function TimeLoginActModule:getActivityId()
    return self._aid
end

function TimeLoginActModule:reqGetTimeLoginReward()
    if self:getActivityId() == 0 then
        return
    end
    self:startReq("ReqGetTimeLoginReward", self:getActivityId(), 10)
end

function TimeLoginActModule:respTimeLoginReward( req, type, data )
    XH.TipTool.hideLoading()
    if type == XH.Req.TYPE.SUCCESS then
        if data.loginRewards and #data.loginRewards > 0 then
            self._loginRewards = data.loginRewards
        end
        if data.goldOver then
            self._goldOver = data.goldOver
        end
        self._supplementCnt = data.supplementCnt or 0
        if data.boxReward and #data.boxReward > 0 then
            self._boxReward = data.boxReward
        end
        if data.wheelReward and #data.wheelReward > 0 then
            self._wheelReward = data.wheelReward
        end
    end
    self:dispatchEvent({ name = self.FLUSH_TIMELOGIN_ACT_INFO })
end

function TimeLoginActModule:reqClaimTimeLoginReward(rewardId, isRoll)
    if self:getActivityId() == 0 then
        return
    end
    XH.TipTool.showLoading()
    self:startReq("ReqClaimTimeLoginReward", self:getActivityId(), rewardId, 10, isRoll)
end

function TimeLoginActModule:respClaimTimeLoginReward(req, type, data)
    XH.TipTool.hideLoading()
    if type == XH.Req.TYPE.SUCCESS then
        if data.claimFlag == TimeLoginActConfig.ClaimFlag.Success then
            local callBack = function()
                local awardInfo = {}
                awardInfo.prize_names = {}
                awardInfo.image_urls = {}
                for _, award in pairs(data.props) do
                    if award.propId == XH.areaData:getPropLimitedTimeRoomCardID() then
                        if XH.areaData:getPropLimitedTimeRoomCardRatio() then
                            award.propCnt = award.propCnt / XH.areaData:getPropLimitedTimeRoomCardRatio()
                        end
                    end
                    awardInfo.prize_names[#awardInfo.prize_names + 1] = (award.name or "") .. "x" .. award.propCnt
                    awardInfo.image_urls[#awardInfo.image_urls + 1] = award.image or ""
                end
                awardInfo.text = " "
                if #awardInfo.prize_names ~= 0 then
                    XH.viewManager:openView("BackActivityAwardView", nil, nil, awardInfo)
                end
            end
            if req.isRoll then
                local targetIndex = self:getWheelRewardIndex(data.props)
                self:dispatchEvent({ name = self.PLAY_TIMELOGIN_WHEEL_ROLL , callBack = callBack , targetIndex = targetIndex})
            else
                callBack()
            end
        elseif data.claimFlag == TimeLoginActConfig.ClaimFlag.Not_In_Time then
            XH.TipTool.showToast("当前奖励已过期")
        elseif data.claimFlag == TimeLoginActConfig.ClaimFlag.Already_Claim then
            XH.TipTool.showToast("已领取过该奖励")
        elseif data.claimFlag == TimeLoginActConfig.ClaimFlag.Gold_Over then
            XH.TipTool.showToast(string.format("携带金币超过%s不可领奖", XH.StringTool.numberToString(self._goldOver)))
        elseif data.claimFlag == TimeLoginActConfig.ClaimFlag.Box_Cnt_Lack then
            XH.TipTool.showToast("您尚未解锁包厢")
        elseif data.claimFlag == TimeLoginActConfig.ClaimFlag.Wheel_Cnt_Lack then
            XH.TipTool.showToast("转盘次数不足")
        else
            XH.TipTool.showToast("其他错误")
        end
        -- 领奖成功后，重新请求服务，刷新UI
        self:reqGetTimeLoginReward()
    end
end

function TimeLoginActModule:reqClaimWheelReward()
    if self._wheelReward and self._wheelReward[1] and self._wheelReward[1].rewardId then
        local rewardId = self._wheelReward[1].rewardId
        self:reqClaimTimeLoginReward(rewardId, true)
    else
        XH.TipTool.showToast("转盘奖励不存在")
    end
end

function TimeLoginActModule:getLoginRewards()
    return self._loginRewards
end

function TimeLoginActModule:getGoldOver()
    return self._goldOver
end

function TimeLoginActModule:getSupplementCnt()
    return self._supplementCnt
end

function TimeLoginActModule:getboxReward()
    return self._boxReward
end

function TimeLoginActModule:getWheelReward()
    return self._wheelReward
end

function TimeLoginActModule:getCurShowBoxReward()
    if self._wheelReward and self._wheelReward[1] then return nil end
    for i = 1, #self._boxReward do
        local v = self._boxReward[i]
        if v.rewardFlag == TimeLoginActConfig.STATUS.CanReward or v.rewardFlag == TimeLoginActConfig.STATUS.NotInTime then
            return v
        end
        if i == #self._boxReward then
            return v
        end
    end
    return nil
end

function TimeLoginActModule:updateLoginRewards()
    if not self._loginRewards or #self._loginRewards == 0 then
        return
    end
    local time = XH.lobby:getModule("Shop"):getServerTime()
    local utcOffset = XH.SysTool.get_timezone_offset()
    local east8Offset = 28800
    time = time + east8Offset - utcOffset
    local today = os.date("*t", time)
    local todayZeroTime = os.time{year = today.year, month = today.month, day = today.day, hour = 0, min = 0, sec = 0}
    local daySecond = time - todayZeroTime
    if daySecond > TimeLoginActConfig.TIME.EVENING then
        daySecond = daySecond - 86400
    end 
    local nowIndex = -1
    local preIndex = -1
    local tmpLoginRewards = clone(self._loginRewards)
    for i = 1, #self._loginRewards do
        local v = self._loginRewards[i]
        local realStartTime = v.startTime
        if v.startTime >= v.endTime then
            realStartTime = v.startTime - 86400
        end
        if realStartTime <= daySecond and daySecond < v.endTime then
            nowIndex = i
            if v.rewardFlag ~= TimeLoginActConfig.STATUS.Rewarded then
                v.rewardFlag =TimeLoginActConfig.STATUS.CanReward
            end
        end
        if daySecond < realStartTime then
            preIndex = i - 1
            v.rewardFlag = TimeLoginActConfig.STATUS.NotInTime
        end
        if daySecond >= v.endTime and v.rewardFlag ~= TimeLoginActConfig.STATUS.Rewarded then
            v.rewardFlag = TimeLoginActConfig.STATUS.OverTime
        end
    end
    if nowIndex == -1 and preIndex > 0 then
        nowIndex = preIndex + 1
    end

    if nowIndex > 0 then
        for i = nowIndex - 1, nowIndex - self._supplementCnt, -1 do
            if i <= 0 then
                break
            end
            if self._loginRewards[i].rewardFlag ~= TimeLoginActConfig.STATUS.Rewarded then
                self._loginRewards[i].rewardFlag = TimeLoginActConfig.STATUS.CanSupple
            end
        end
    end

    local needUpdate = false
    for i = 1, #self._loginRewards do
        if tmpLoginRewards[i] and tmpLoginRewards[i].rewardFlag ~= self._loginRewards[i].rewardFlag then
            needUpdate = true
        end
    end
    if needUpdate then
        self:dispatchEvent({ name = self.FLUSH_TIMELOGIN_REWARD_STATUS })
    end
end

function TimeLoginActModule:checkShowRedPoint(rewardId)
    local info = self._loginRewards
    local isShowRedPoint = false
    for _,v in ipairs(info) do
        if v.rewardFlag == TimeLoginActConfig.STATUS.CanReward or v.rewardFlag == TimeLoginActConfig.STATUS.CanSupple then
            isShowRedPoint = true
        end
    end
    if isShowRedPoint == false then
        local boxReward = XH.lobby:getModule("TimeLoginAct"):getCurShowBoxReward()
        if boxReward and boxReward.rewardFlag == TimeLoginActConfig.STATUS.CanReward then
            isShowRedPoint = true
        end
    end
    isShowRedPoint = isShowRedPoint or self:isCanTurnWheel()
    return isShowRedPoint
end

function TimeLoginActModule:isTimeRewardCanGet()
    local info = self._loginRewards
    local isShowRedPoint = false
    for _,v in ipairs(info) do
        if v.rewardFlag == TimeLoginActConfig.STATUS.CanReward or v.rewardFlag == TimeLoginActConfig.STATUS.CanSupple then
            isShowRedPoint = true
        end
    end
    return isShowRedPoint
end

function TimeLoginActModule:isValid()
    return self._aid ~= 0
end

function TimeLoginActModule:isCanTurnWheel()
    if self._wheelReward and self._wheelReward[1] then
        return self._wheelReward[1].curCnt >= self._wheelReward[1].wheelCnt
    end
    return false
end

function TimeLoginActModule:getWheelRewardIndex(props)
    if props and #props == 1 and self._wheelReward and self._wheelReward[1] and self._wheelReward[1].props then
        local targetInfo = props[1]
        for i = 1,8 do
            local info = self._wheelReward[1].props[i]
            if info then
                if info.propId == targetInfo.propId and info.propCnt == targetInfo.propCnt then
                    return i - 1
                end
            end
        end
    end
    return 0
end

function TimeLoginActModule:openView(scenefrom, isInGame, pos, changeSceneName)
    XH.viewManager:openView("TimeLoginActView", nil, {auto = true})
end

function TimeLoginActModule:isHaveAward()
    if not self._loginRewards or #self._loginRewards == 0 then
        return false
    end
    return true
end

function TimeLoginActModule:isNeedReq()
    return false
end

function TimeLoginActModule:isOpening()
    return XH.viewManager:isViewExist("TimeLoginActView")
end

return TimeLoginActModule