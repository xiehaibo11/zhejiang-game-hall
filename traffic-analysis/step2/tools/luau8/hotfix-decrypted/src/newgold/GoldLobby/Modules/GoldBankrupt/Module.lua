local GoldBankruptModule = class("GoldBankruptModule", NG.ModuleBase)
local GoldActDefine = require("newgold.GoldLobby.Modules.GoldBankrupt.Define")
local DAILY_SHOW_RECHARGE_TIMES = 2  --每日显示充值次数
local DAILY_CAN_RECHARGE_TIMES = 1  --每日可充值次数
local DAILY_CAN_EXCHANGE_TIMES = 3  --每日可兑换次数
GoldBankruptModule.EVNET_GOLD_ACT_DISCOUNT_INFO = "EVNET_GOLD_ACT_DISCOUNT_INFO"

-- 一把翻本
function GoldBankruptModule:ctor()
    GoldBankruptModule.super.ctor(self)
    self._actInfo = nil -- 档位信息
end

function GoldBankruptModule:getReqConfig()
    return {
        --
        ReqDiscountInfo = { reqPath = "newgold.GoldLobby.Req.Act.GoldReqDiscountInfo", callBack = self.respDiscountInfo },
    }
end

-- 请求档位信息
function GoldBankruptModule:reqActInfo(score, loose_session, type)
    self:startReq("ReqDiscountInfo", score, loose_session, type, 10)
end

function GoldBankruptModule:respDiscountInfo(req, type, data)
    dump(data)
    if type == NG.Req.TYPE.SUCCESS then
        self._actInfo = data
        data.type = data.type or GoldActDefine.ACT_REQ_TYPE.INFO
        if data.c_score ~= nil and data.type > 0 then
            if data.reqType ~= GoldActDefine.ACT_REQ_TYPE.INFO and data.type ~= GoldActDefine.ACT_REQ_TYPE.INFO then
                -- self:showActView(data.c_score)
            end
        end
        self:dispatchEvent({ name = self.EVNET_GOLD_ACT_DISCOUNT_INFO, data = data })
    end
end

-- 档位信息
function GoldBankruptModule:getActInfo()
    return self._actInfo
end

function GoldBankruptModule:setActInfo(info)
    self._actInfo = info
end

-- 判断是否显示
-- 玩家本局输的金币数≥底分*1000时
function GoldBankruptModule:judgeShowView(score)
    -- local times = NG.userDefault:getValue(NG.userDefault.KEY_ID.KW_ACT_COMEBACK_TIMES, 0)
    -- if times >= 999 then
    --     return
    -- end

    if score >= 0 then
        return
    end
    -- 判断分数是否匹配
    local roomInfo = NG.RoomTool.getGoldLevelInfo()
    if roomInfo == nil or roomInfo.base * 1000 >= -score then
        return
    end
    local showActState = self:updateShowActState(false, false, false)
    if showActState == GoldActDefine.ACT_DIS_STATE.NO_SHOW then
        return
    end
    --1:充值 2:兑换,0获取信息
    local type = GoldActDefine.ACT_REQ_TYPE.RECHARGE
    if showActState == GoldActDefine.ACT_DIS_STATE.SHOW_EXCHANGE then
        type = GoldActDefine.ACT_REQ_TYPE.EXCHANGE
    end
    self:reqActInfo(score, roomInfo.level, type)
end

function GoldBankruptModule:showActView(score, fromIcon)
    local showActState = GoldActDefine.ACT_DIS_STATE.SHOW_RECHARGE
    if not fromIcon then
        showActState = self:updateShowActState(false, false, true)
        if showActState == GoldActDefine.ACT_DIS_STATE.NO_SHOW then
            return
        end
    else
        if self._actInfo.type == GoldActDefine.ACT_REQ_TYPE.EXCHANGE then
            showActState = GoldActDefine.ACT_DIS_STATE.SHOW_EXCHANGE
        end
    end

    -- local times = NG.userDefault:getValue(NG.userDefault.KEY_ID.KW_ACT_COMEBACK_TIMES, 0)
    -- times = times + 1
    -- NG.userDefault:setValue(NG.userDefault.KEY_ID.KW_ACT_COMEBACK_TIMES, times)
    --触发新折扣 需要告诉服务开始倒计时
    NG.viewManager:openView("NewGold_GoldBankruptView", nil, showActState)
end

--只在显示活动弹窗前、兑换成功、充值成功后刷新状态
function GoldBankruptModule:updateShowActState(isRecharged, isExchanged, bSave)
    local state = NG.userDefault:getValue(NG.userDefault.KEY_ID.KW_ACT_SHOW_STATE, GoldActDefine.ACT_DIS_STATE.FIRST * 100)
    local showActState = math.floor(state / 100)
    local showTtimes = math.floor((state % 100) / 10) --十位 显示次数
    local sucTimes = state % 10 --个位 充值、兑换成功次数
    if isRecharged then
        if showActState == GoldActDefine.ACT_DIS_STATE.SHOW_RECHARGE then
            sucTimes = sucTimes + 1
        else
            sucTimes = 1
        end
        showActState = GoldActDefine.ACT_DIS_STATE.SHOW_RECHARGE
    elseif isExchanged then
        if showActState == GoldActDefine.ACT_DIS_STATE.SHOW_EXCHANGE then
            sucTimes = sucTimes + 1
        else
            sucTimes = 1
        end
        showActState = GoldActDefine.ACT_DIS_STATE.SHOW_EXCHANGE
    else
        --显示弹窗
        if showActState == GoldActDefine.ACT_DIS_STATE.FIRST then
            showActState = GoldActDefine.ACT_DIS_STATE.SHOW_RECHARGE
            showTtimes = 1
        elseif showActState == GoldActDefine.ACT_DIS_STATE.SHOW_RECHARGE then
            if showTtimes >= DAILY_SHOW_RECHARGE_TIMES or sucTimes >= DAILY_CAN_RECHARGE_TIMES then
                showActState = GoldActDefine.ACT_DIS_STATE.SHOW_EXCHANGE
                showTtimes = 1
            else
                showActState = GoldActDefine.ACT_DIS_STATE.SHOW_RECHARGE
                showTtimes = showTtimes + 1
            end
        elseif showActState == GoldActDefine.ACT_DIS_STATE.SHOW_EXCHANGE then
            if sucTimes >= DAILY_CAN_EXCHANGE_TIMES then
                showActState = GoldActDefine.ACT_DIS_STATE.NO_SHOW
                showTtimes = 0
            else
                showActState = GoldActDefine.ACT_DIS_STATE.SHOW_EXCHANGE
                showTtimes = showTtimes + 1
            end
        end
    end
    if bSave then
        local value = showActState * 100 + showTtimes * 10 + sucTimes
        NG.userDefault:setValue(NG.userDefault.KEY_ID.KW_ACT_SHOW_STATE, value)
    end
    return showActState
end

return GoldBankruptModule}