local UnlimitBoxActModule = class("UnlimitBoxActModule",XH.ModuleBase)
local UnlimitBoxActConfig = require("src.lobby.Modules.UnlimitBoxAct.Config")
local ConfigurationDefine = require("lobby.Modules.Configuration.Define")

UnlimitBoxActModule.FLUSH_ACT_INFO = "FLUSH_ACT_INFO"
UnlimitBoxActModule.PAY_BUTTON_TOUCH = "PAY_BUTTON_TOUCH"

function UnlimitBoxActModule:ctor()
    UnlimitBoxActModule.super.ctor(self)
    self._aid = nil
    self._aidRealInfo = nil
    self._actDetail = nil
end

function UnlimitBoxActModule:subjectLoginCallBack()
    self._aid = nil
    self._aidRealInfo = nil
    self._actDetail = nil
end

function UnlimitBoxActModule:getReqConfig()
    return {
        ReqActDetail = { reqPath = "lobby.Req.LuckTask.ReqActDetail", callBack = self.respActDetail },
        ReqActInfo = { reqPath = "lobby.Req.Act.ReqWuXianDuiJuInfo", callBack = self.respActInfo },
        ReqJoinFreeAct = { reqPath = "lobby.Req.Act.ReqWuXianDuiJuOpt", callBack = self.respJoinFreeAct },
    }
end

-- 获取详细任务
function UnlimitBoxActModule:reqActDetail()
    if self._aid == nil then
        return
    end
    self:startReq("ReqActDetail", self._aid, 10)
end

function UnlimitBoxActModule:respActDetail(req, type, data)
    if type == XH.Req.TYPE.SUCCESS then
        if data and data.res and data.res.special then
            local ok, res_tab = pcall(cjson.decode, data.res.special)
            if ok and res_tab then
                self._actDetail = res_tab
            end
        end
    end
    self:dispatchEvent({ name = self.FLUSH_ACT_INFO })
end

function UnlimitBoxActModule:getActDetail()
    return self._actDetail
end

function UnlimitBoxActModule:getActInfo()
    return self._aidRealInfo
end

-- 是否为无限对局的购买礼包
function UnlimitBoxActModule:isPayWithGift(msg)
    if not msg then
        return false
    end
    local data = msg.productInfo
    if data and data.productId then
        if data.productId == self:getProductConfigByAreaId() then
            self:dispatchEvent({ name = self.PAY_BUTTON_TOUCH, msg = { enabled = false } })
            XH.TipTool.showToast("购买成功")
            XH.SysTool.performDelayOnce(function()
                self:reqActInfo(true)
            end, 2)
            return true
        end
    end
    return false
end

function UnlimitBoxActModule:getProductConfigByAreaId()
    local configModule = XH.lobby:getModule("Configuration")
    if configModule then
        local configJsonData = configModule:getConfigJsonData(ConfigurationDefine.Config.ALL, "AllConfig")
        if configJsonData and configJsonData.UnlimitBoxAct and configJsonData.UnlimitBoxAct[tostring(XH.areaData:getAreaID())] then
            return configJsonData.UnlimitBoxAct[tostring(XH.areaData:getAreaID())]
        end
    end
    return UnlimitBoxActConfig.PRODUCT
end

-- 是否支持使用
function UnlimitBoxActModule:isSupportUse(roomInfo, level, confID)
    return true
end

function UnlimitBoxActModule:flushAids(data)
    self:subjectLoginCallBack()
    local aid
    for _, info in pairs(data.act) do
        if info.type == UnlimitBoxActConfig.ACT and self:isInActTimeAllTime(info) then
            if aid == nil then
                aid = info.aid
            elseif info.aid < aid then
                aid = info.aid
            end
        end
    end
    if aid ~= nil then
        self._aid = aid
        self:reqActDetail()
        self:reqActInfo(false)
    end
end

-- 判断活动是否在线
function UnlimitBoxActModule:isInActTimeAllTime(info)
    if not info then
        return false
    end
    local time = XH.lobby:getModule("Shop"):getServerTime()
    if time < tonumber(info["end"]) and time > tonumber(info.start) then
        return true
    end
    return false
end

-- 获取激活剩余时间，同时也是用来判断能否参加活动
-- type 0已购买 1未购买(包括未激活) 2(包括0和1) （未激活需要判断是否已主动激活）
-- 已购买倒计时 未购买未激活 未购买已激活
function UnlimitBoxActModule:getRemainTime(type)
    if self._aidRealInfo == nil then
        return -1
    end
    if self._aidRealInfo.status == 0 then
        return -1
    end
    local time = XH.lobby:getModule("Shop"):getServerTime()
    local remainTimeA = self._aidRealInfo.propEndtime - time
    local remainTimeB = self._aidRealInfo.mrgmjssj - time
    if type == 0 then
        -- 取活动信息已购买
        if self._aidRealInfo.status == 3 or self._aidRealInfo.status == 4 then
            if self._aidRealInfo.propCnt == 0 then
                return -1
            end
            return remainTimeA
        end
        return -1
    elseif type == 1 then
        -- 取活动信息时间
        if self._aidRealInfo.status ~= 3 and self._aidRealInfo.status ~= 4 then
            return remainTimeB
        end
        return -1
    elseif type == 2 then
        -- 取0和1的时间
        if self._aidRealInfo.status == 3 or self._aidRealInfo.status == 4 then
            if self._aidRealInfo.propCnt == 0 then
                return -1
            end
            return remainTimeA
        end
        return remainTimeB
    end
    return -1
end

-- 获取剩余次数
function UnlimitBoxActModule:getLeftCnt()
    if self._aidRealInfo then
        return self._aidRealInfo.propCnt
    end
    return 0
end

--大结算临时减一，防止刷新还没返回续桌播放动画
function UnlimitBoxActModule:minusPropCnt()
    if self._aidRealInfo and self._aidRealInfo.propCnt > 0 then
        self._aidRealInfo.propCnt = self._aidRealInfo.propCnt - 1
    end
end

function UnlimitBoxActModule:isMax()
    if self._actDetail == nil then
        return false
    end
    if self._aidRealInfo.status == 3 then
        return tonumber(self._aidRealInfo.propCnt) >= tonumber(self._actDetail.wxdjtyksycs)
    elseif self._aidRealInfo.status == 4 then
        return tonumber(self._aidRealInfo.propCnt) >= tonumber(self._actDetail.wxdjksycs)
    end
    return false
end

-- 请求活动信息
function UnlimitBoxActModule:reqActInfo(isShowLoading, type)
    if self._aid == nil then return end
    if isShowLoading then
        XH.TipTool.showLoading()
    end
    local data = {
        act_id = self._aid,
        type = type or 0
    }
    self:startReq("ReqActInfo", data)
end

function UnlimitBoxActModule:respActInfo(cell, type, data)
    XH.TipTool.hideLoading()
    self._aidRealInfo = nil
    if type == XH.Req.TYPE.SUCCESS then
        -- todo
        self._aidRealInfo = data
        -- 服务控制弹窗
        if self._reqInView then
            self:checkShowView()
        end
        self._reqInView = false
    end
    self._isReqInGame = nil
    self:dispatchEvent({ name = self.FLUSH_ACT_INFO })
end

-- 请求触发免费
function UnlimitBoxActModule:reqJoinFreeAct()
    XH.TipTool.showLoading()
    local data = {
        act_id = self._aid,
        opt = 0
    }
    self:startReq("ReqJoinFreeAct", data)
end

function UnlimitBoxActModule:respJoinFreeAct(cell, type, data)
    XH.TipTool.hideLoading()
    if type == XH.Req.TYPE.SUCCESS then
        XH.TipTool.showToast("领取成功")
        self:reqActInfo(true)
        XH.viewManager:closeView("UnLimitBoxActView")
    else
        XH.TipTool.showToast("免费领取异常，请重试")
    end
end

-- 判断是否是免费建房，播放动画并创房
function UnlimitBoxActModule:judgeIsFullGold(createRoomFunc)
    self._createRoomFunc = createRoomFunc
    if self:getRemainTime(0) > 0 then
        self:flushGoldCoinAni()
        return true
    end
    -- 判断是否能够触发
    return false
end

function UnlimitBoxActModule:judgeIsShowPopAct()
    if self:getRemainTime(2) <= 0 then
        self._reqInView = true
        self:reqActInfo(false, 1)
    else
        self:checkShowView()
    end
end

function UnlimitBoxActModule:checkShowView()
    if self:getRemainTime(1) <= 0 then
        return
    end
    self._actDetail = self._actDetail or {}
    -- 打开间隔冷却
    local cooldownTimes = self._actDetail.mrtslqjs or 3
    -- 每日推送最大次数 
    local maxPopTime = self._actDetail.mrzdtscs or 5
    local todayCooldownTimes = XH.userDefault:getValue(XH.userDefault.KEY_ID.UN_LIMIT_BOX_COOLDOWN_TIMES, 0)
    local todayPopTimes = XH.userDefault:getValue(XH.userDefault.KEY_ID.UN_LIMIT_BOX_DAILY_POP_TIMES, 0)
    if todayCooldownTimes == 0 and todayPopTimes < maxPopTime then
        XH.viewManager:openView("UnLimitBoxActView")
        todayPopTimes = todayPopTimes + 1
        XH.userDefault:setValue(XH.userDefault.KEY_ID.UN_LIMIT_BOX_DAILY_POP_TIMES, todayPopTimes)
    end
    if todayCooldownTimes == cooldownTimes then
        todayCooldownTimes = 0
    else
        todayCooldownTimes = todayCooldownTimes + 1
    end
    XH.userDefault:setValue(XH.userDefault.KEY_ID.UN_LIMIT_BOX_COOLDOWN_TIMES, todayCooldownTimes)
end

-- 刷卡机
function UnlimitBoxActModule:flushGoldCoinAni(callBack)
    local propID = 150779
    if self._aidRealInfo then
        propID = self._aidRealInfo.propId
    end
    callBack = callBack or self._createRoomFunc
    XH.viewManager:openView("GoldEnterCardView", nil, { propId = propID, originCount = self:getLeftCnt(), callback = callBack })
end

return UnlimitBoxActModuleW%