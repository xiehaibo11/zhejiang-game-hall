local GoldHourLoginAwardModule = class("GoldHourLoginAwardModule", NG.ModuleBase)
local GoldNewDefine = require("src.newgold.GoldLobby.Modules.Gold.Define")
local GoldPlayerData = require("newgold.GoldCommon.Data.GoldPlayerData")
local GoldHourLoginAwardDefine = require("newgold.GoldLobby.Modules.GoldHourLoginAward.Define")

GoldHourLoginAwardModule.EVENT_ZDFL_INFO_SUCCESS = "EVENT_ZDFL_INFO_SUCCESS"

-- 整点福利
function GoldHourLoginAwardModule:ctor()
    GoldHourLoginAwardModule.super.ctor(self)
    self._info = {}
    self._reqAward = false -- 是否是请求领奖
end

function GoldHourLoginAwardModule:getReqConfig()
    return {
        --
        ReqActGameRewards = { reqPath = "newgold.GoldLobby.Req.Act.GoldReqGameRewards", callBack = self.respActGameRewards },
        ReqLuckTaskGetPage = { reqPath = "newgold.GoldLobby.Req.Act.GoldReqLuckTaskGetPage", callBack = self.respGetPage },
        ReqActDetail = { reqPath = "newgold.GoldLobby.Req.Act.GoldReqActDetail", callBack = self.respActDetail },
        ReqActGameStatus = { reqPath = "newgold.GoldLobby.Req.Act.GoldReqGameStatus", callBack = self.respActGameStatus }
    }
end

-- 获取玩家详情
function GoldHourLoginAwardModule:reqActGameStatus()
    self:startReq("ReqActGameStatus", 10)
end

function GoldHourLoginAwardModule:respActGameStatus(req, type, data)
    if type == NG.Req.TYPE.SUCCESS then
        if data.res ~= nil then
            self._info.data = data.res.hourStatus
            self:dispatchEvent({ name = self.EVENT_ZDFL_INFO_SUCCESS })
        end
    else
        NG.TipTool.showToast("整点-请求玩家信息异常")
    end
end

-- 获取详细任务
function GoldHourLoginAwardModule:reqActDetail()
    if self._actInfo == nil then
        return
    end
    if self._info.info ~= nil then
        self:reqActGameStatus()
        return
    end
    self:startReq("ReqActDetail", self:getActivityId(), 10)
end

function GoldHourLoginAwardModule:respActDetail(req, type, data)
    if type == NG.Req.TYPE.SUCCESS then
        self._info.info = data.res
        self:reqActGameStatus()
    else
        NG.TipTool.showToast("整点-请求活动信息异常")
    end
end

-- 获取任务id
function GoldHourLoginAwardModule:reqTaskList()
    self:startReq("ReqLuckTaskGetPage", GoldNewDefine.ACTLIST.INTERGRAL, 10)
end

function GoldHourLoginAwardModule:respGetPage(req, type, data)
    if type == NG.Req.TYPE.SUCCESS then
        if data.pages == nil then
            return
        end
        if #data.pages > 0 and #data.pages[1].info > 0 then
            self._actInfo = data.pages[1].info
            self:reqActDetail()
        end
    else
        print('GoldHourLoginAwardModule Failed')
    end
end

function GoldHourLoginAwardModule:getActInfo()
    return self._info
end

-- 请求领奖
function GoldHourLoginAwardModule:reqActGameRewards(goodId)
    if self._reqAward then
        return
    end
    NG.TipTool.showLoading()
    self._reqAward = true
    self:startReq("ReqActGameRewards", self:getActivityId(), GoldNewDefine.ACTLIST.INTERGRAL, nil, 10, goodId)
end

function GoldHourLoginAwardModule:respActGameRewards(req, type, data)
    NG.TipTool.hideLoading()
    self._reqAward = false
    if type == NG.Req.TYPE.SUCCESS then
        self:showAwardInfo()
        self:reqActInfo()
        NG.goldLobby:getModule("GoldCommon"):flushPlayerProp()
    else
        NG.TipTool.showToast("整点-请求领奖异常!")
    end
end

-- 显示领奖UI
function GoldHourLoginAwardModule:showAwardInfo()
    local awardInfo = {}
    awardInfo.prize_names = {}
    awardInfo.image_urls = {}
    awardInfo.prize_names[#awardInfo.prize_names + 1] = "x5000"
    awardInfo.image_urls[#awardInfo.image_urls + 1] = "https://palmastatic.wenzhoushuke.com//materials/images/20230522/11354115106.png"
    NG.viewManager:openView("NewGold_AwardView", nil, nil, awardInfo)
end

function GoldHourLoginAwardModule:reqActInfo()
    self:reqTaskList()
end

function GoldHourLoginAwardModule:getActivityId()
    if self._actInfo == nil then
        return 0
    end
    return self._actInfo[1].id[1]
end

-- 获取当日下次领奖时间 11:00
function GoldHourLoginAwardModule:getAwardTimeToDay()
    if self._info.info == nil then
        return nil
    end
    local goods = json.decode(self._info.info.ext).goods
    for i = 1, 2 do
        local info = goods[i]
        local state = self:getAwardState(info.id)
        if state == GoldHourLoginAwardDefine.STATE.UNOPEN then
            return info.start
        end
    end
    return nil
end

-- 当前是否可以领奖
function GoldHourLoginAwardModule:isCanGetAward()
    if self._info.info == nil then
        return false
    end
    local goods = json.decode(self._info.info.ext).goods
    for i = 1, 2 do
        local info = goods[i]
        local state = self:getAwardState(info.id)
        if state == GoldHourLoginAwardDefine.STATE.CANAWARD then
            return true
        end
    end
    return false
end

-- 通过时间参数判断状态
function GoldHourLoginAwardModule:getAwardState(idx)
    local nowTime = os.date("%H", os.time()) .. ":" .. os.date("%M", os.time())
    local goods = json.decode(self._info.info.ext).goods
    local info = goods[idx]
    local state = 0
    if #self._info.data > 0 then
        for i = 1, #self._info.data do
            if self._info.data[i] == idx then
                state = 1
            end
        end
    end
    if info == nil or state == nil then
        return GoldHourLoginAwardDefine.STATE.UNOPEN
    end
    local starttime = info.start
    local endtime = info["end"]
    if state == 1 then
        return GoldHourLoginAwardDefine.STATE.HADAWARD -- 已领取 
    end

    if self:isTimeMore(nowTime, endtime) then
        return GoldHourLoginAwardDefine.STATE.TIMEOUT -- 已过期
    end
    if self:isTimeMore(starttime, nowTime) then
        return GoldHourLoginAwardDefine.STATE.UNOPEN -- 未开启
    end
    return GoldHourLoginAwardDefine.STATE.CANAWARD -- 可领取
end

-- 比对时间
function GoldHourLoginAwardModule:isTimeMore(time1, time2)
    local timeEx1 = string.split(time1, ":")
    local timeEx2 = string.split(time2, ":")
    if tonumber(timeEx1[1]) > tonumber(timeEx2[1]) then
        return true
    end
    if tonumber(timeEx1[1]) == tonumber(timeEx2[1]) and tonumber(timeEx1[2]) > tonumber(timeEx2[2]) then
        return true
    end
    return false
end

return GoldHourLoginAwardModule�