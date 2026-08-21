local GoldPlayAwardModule = class("GoldPlayAwardModule", NG.ModuleBase)
local GoldNewDefine = require("src.newgold.GoldLobby.Modules.Gold.Define")
local GoldPlayerData = require("newgold.GoldCommon.Data.GoldPlayerData")
local GoldRoomsDefine = require("newgold.GoldCommon.Define.GoldRoomsDefine")

GoldPlayAwardModule.EVENT_CHCW_INFO_SUCCESS = "EVENT_CHCW_INFO_SUCCESS"

-- 超值畅玩
function GoldPlayAwardModule:ctor()
    GoldPlayAwardModule.super.ctor(self)
    self._info = {}
    self._reqAward = false -- 是否是请求领奖
    self._isCanBuyFree = false --是否首次免费
    self._isFreeLevel = false --是否为免费档位
end

function GoldPlayAwardModule:getReqConfig()
    return {
        --
        ReqLuckTaskGetReward = { reqPath = "newgold.GoldLobby.Req.Act.GoldReqLuckTaskGetReward", callBack = self.respGetReward },
        ReqLuckTaskGetPage = { reqPath = "newgold.GoldLobby.Req.Act.GoldReqLuckTaskGetPage", callBack = self.respGetPage },
        ReqActDetail = { reqPath = "newgold.GoldLobby.Req.Act.GoldReqActDetail", callBack = self.respActDetail },
        ReqActGameStatus = { reqPath = "newgold.GoldLobby.Req.Act.GoldReqGameStatus", callBack = self.respActGameStatus },
        ReqActGameRewards = { reqPath = "newgold.GoldLobby.Req.Act.GoldReqGameRewards", callBack = self.respActGameRewards },
        ReqActFreeRewards = { reqPath = "newgold.GoldLobby.Req.Act.GoldReqGameRewards", callBack = self.respActFreeRewards }
    }
end

-- 领取免费奖励
function GoldPlayAwardModule:reqGetFreeAward()
    if self._reqAwardB then
        return
    end
    NG.TipTool.showLoading()
    self._reqAwardB = true
    self:startReq("ReqActFreeRewards", self:getActivityId(), GoldNewDefine.ACTLIST.GOLD_FIRST_FREE, {}, 10)
end

-- 显示领奖UI
function GoldPlayAwardModule:showAwardInfo()
    local awardInfo = {}
    awardInfo.prize_names = {}
    awardInfo.image_urls = {}
    awardInfo.prize_names[#awardInfo.prize_names + 1] = "x30000"
    awardInfo.image_urls[#awardInfo.image_urls + 1] = "https://palmastatic.wenzhoushuke.com//materials/images/20230522/11354115106.png"
    NG.viewManager:openView("NewGold_AwardView", nil, nil, awardInfo)
end

function GoldPlayAwardModule:respActFreeRewards(req, type, data)
    NG.TipTool.hideLoading()
    self._reqAwardB = false
    if type == NG.Req.TYPE.SUCCESS then
        self:showAwardInfo()
        NG.goldLobby:getModule("GoldCommon"):flushPlayerProp()
        self:reqActGameStatus()
    else
        NG.TipTool.showToast("请求领奖异常!")
    end
end

-- 是否可以免费领取
function GoldPlayAwardModule:isCanGetFree()
    -- local isBroken = NG.userDefault:getValue(NG.userDefault.KEY_ID.KW_ACT_IS_BROKEN, false)
    -- return isBroken and self._isCanBuyFree
    return self._isCanBuyFree
end

-- 设置免费领取
function GoldPlayAwardModule:setGetFree(isShow)
    self._isCanBuyFree = isShow
end

-- 是否可以免费领取
function GoldPlayAwardModule:isFreeLevel()
    return self._isFreeLevel
end

-- 设置免费领取
function GoldPlayAwardModule:setFreeLevel(isShow)
    self._isFreeLevel = isShow
end

-- 最低触发领奖
function GoldPlayAwardModule:isCanGetAward()
    return GoldPlayerData.JoyBean < 3000 and self:isBuyed() and self:getLeftCnt() > 0 and self:getLeftTime() > 0
end

-- 请求领奖
function GoldPlayAwardModule:reqActGameRewards(joinroom, isconnect, roomId, appId)
    if self._reqAward then
        return
    end
    NG.TipTool.showLoading()
    self._reqAward = true
    local callFuncs = { needJoinroom = joinroom, isconnect = isconnect, roomId = roomId, appId = appId }
    self:startReq("ReqActGameRewards", self:getActivityId(), GoldNewDefine.ACTLIST.RECHARGE, callFuncs, 10)
end

function GoldPlayAwardModule:respActGameRewards(req, type, data)
    NG.TipTool.hideLoading()
    self._reqAward = false
    if type == NG.Req.TYPE.SUCCESS then
        if data.res == nil or data.res.gold == 0 then
            NG.TipTool.showToast("请求领奖失败，请重试!")
            return
        end
        local msg = {
            type = GoldNewDefine.AWARDTYPE.AWARD_RECHARGE,
            gold = data.res.gold - GoldPlayerData.JoyBean,
            save = self:getLeftCnt() - 1,
            inGame = true
        }
        if data.callFuncs ~= nil and data.callFuncs.needJoinroom then
            msg.info = {
                roomId = data.callFuncs.roomId,
                appId = data.callFuncs.appId,
            }
            msg.inGame = false
        end
        self:showAniAwardView(msg)
        GoldPlayerData.JoyBean = data.res.gold
        NG.goldLobby:getModule("GoldCommon"):flushProps()
        self:reqActGameStatus()
    else
        NG.TipTool.showToast("请求领奖异常!")
    end
end

-- 获取玩家详情
function GoldPlayAwardModule:reqActGameStatus()
    self:startReq("ReqActGameStatus", 10)
end

function GoldPlayAwardModule:respActGameStatus(req, type, data)
    if type == NG.Req.TYPE.SUCCESS then
        if data.res ~= nil then
            self._info.data = data.res.packageInfo
            self:setGetFree(data.res.firstFree == 0)
            self:setFreeLevel(false)
            if #data.res.packageInfo > 0 then
                self:setFreeLevel(data.res.packageInfo[1].free == 1)
            end
            self:dispatchEvent({ name = self.EVENT_CHCW_INFO_SUCCESS })
        end
    else
        NG.TipTool.showToast("请求玩家信息异常")
    end
end

function GoldPlayAwardModule:getActivityId()
    if self._actInfo == nil then
        return 0
    end
    return self._actInfo[1].id[1]
end

-- 获取详细任务
function GoldPlayAwardModule:reqActDetail(actid)
    if self._actInfo == nil then
        return
    end
    if self._info.info ~= nil then
        self:reqActGameStatus()
        return
    end
    self:startReq("ReqActDetail", self:getActivityId(), 10)
end

function GoldPlayAwardModule:respActDetail(req, type, data)
    if type == NG.Req.TYPE.SUCCESS then
        self._info.info = data.res
        self:reqActGameStatus()
    else
        NG.TipTool.showToast("请求活动信息异常")
    end
end

-- 获取任务id
function GoldPlayAwardModule:reqTaskList()
    self:startReq("ReqLuckTaskGetPage", GoldNewDefine.ACTLIST.RECHARGE, 10)
end

function GoldPlayAwardModule:respGetPage(req, type, data)
    if type == NG.Req.TYPE.SUCCESS then
        if data.pages == nil then
            return
        end
        if #data.pages > 0 and #data.pages[1].info > 0 then
            self._actInfo = data.pages[1].info
            self:reqActDetail()
        end
    else
        NG.TipTool.showToast("请求超时畅玩异常")
    end
end

function GoldPlayAwardModule:getActInfo()
    return self._info
end

function GoldPlayAwardModule:reqActInfo()
    self:reqTaskList()
end

-- 展示动画
function GoldPlayAwardModule:showAniAwardView(callFuncs)
    NG.viewManager:openView("NewGold_GoldBankTipView", nil, { data = callFuncs })
end

-- 判断当日是否购买过，且剩余次数为0
function GoldPlayAwardModule:isBuyedAndTimesOut()
    return self:isBuyed() and self:getLeftCnt() == 0
end

-- 判断当日是否购买过
function GoldPlayAwardModule:isBuyed()
    return self:getBuyLog() ~= nil
end

-- 获取剩余次数
function GoldPlayAwardModule:getLeftCnt()
    if self:getBuyLog() == nil then
        return 0
    end
    return self:getBuyLog().save
end

-- 获取剩余时间
function GoldPlayAwardModule:getLeftTime()
    if self:getBuyLog() == nil then
        return 0
    end
    return 86400 - (os.time() - tonumber(self:getBuyLog().buyTime))
end

-- 获取玩家购买信息
function GoldPlayAwardModule:getBuyLog()
    if self._info.data == nil then
        return nil
    end
    if #self._info.data == 0 then
        return nil
    end
    return self._info.data[1]
end

-- 小结算接口调用，判断是否需要弹出
function GoldPlayAwardModule:openPlayAwardInResult(isSkipBank)
    if not isSkipBank then
        if (self:isBuyedAndTimesOut() or not self:isBuyed()) and GoldPlayerData.JoyBean < GoldRoomsDefine.GOLD_MIN_JOIN then
            NG.goldLobby:getModule("GoldBankTip"):reqBankTipAward(true)
            return
        end
    end
    -- 买过没次数
    if self:isBuyedAndTimesOut() then
        if self:isCanGetFree() then
            self:canShowPlayAwardView()
        end
        return
    end
    -- 买过并且可以领奖
    if self:isBuyed() and self:isCanGetAward() then
        self:reqActGameRewards()
        return
    end
    if self:isBuyed() then
        return
    end
    self:canShowPlayAwardView()
end

function GoldPlayAwardModule:canShowPlayAwardView()
    local coin = GoldPlayerData.JoyBean
    local info = NG.RoomTool.getRoomInfoByAppId(GoldPlayerData.AppId)
    if info then
        if info.level > 2 then
            return
        end
        if coin >= info.minscore then
            return
        end
    end
    NG.viewManager:openView("NewGold_PlayAwardView")
end

return GoldPlayAwardModule  *$  