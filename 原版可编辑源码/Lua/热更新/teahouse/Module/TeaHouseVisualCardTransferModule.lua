---@class TeaHouseVisualCardTransferModule : Module
local TeaHouseVisualCardTransferModule = class("TeaHouseVisualCardTransferModule", TeaHouse.Module)
TeaHouseVisualCardTransferModule.EVENT_CARD_MODE_UPDATE = "EVENT_CARD_MODE_UPDATE"
TeaHouseVisualCardTransferModule.EVENT_TRANSER_RESULT = "EVENT_TRANSER_RESULT"

local OPT_TYPE = {INFO = 0, TRANSFER = 1, GETCARDS = 2}
local CLUB_MODE = {OTHER = 0, FALSE_CARD = 1, TRUE_TRANSFERED = 2}

function TeaHouseVisualCardTransferModule:onCreate()
    TeaHouseVisualCardTransferModule.super.onCreate(self)

    -- local teahouseSetup = TeaHouse.manager.teahouseSetup
    -- self:createListener(teahouseSetup)
    -- :addEventListener(teahouseSetup.EVENT_SETUP_UPDATE_NOTIFY, handler(self, self.onSetupUpdateNotify))
    local teahouseMain = TeaHouse.manager.teahouseMain
    self:createListener(teahouseMain):addEventListener(teahouseMain.EVENT_PAY_MODE_UPDATE, handler(self, self.onSetupUpdateNotify))
    self:updateConfig()

    self._info = {clubMode = 0}
    self._membCards = {}
end

function TeaHouseVisualCardTransferModule:updateConfig()
    self._cfg = XH.lobby:getModule("Configuration"):getLobbyConfig("VisualCardTransfer") or {showOld = 0, open = 0, notice = {""}}
end

function TeaHouseVisualCardTransferModule:onDestroy()
    TeaHouseVisualCardTransferModule.super.onDestroy(self)
end

function TeaHouseVisualCardTransferModule:onSetupUpdateNotify(event)
    if event and event.data and event.data.isChanged and self:isHavePower() and self._isInitReq then
        self:startReq({clubId = TeaHouse.manager.teahouseData:getTeaNumber(), opt = OPT_TYPE.INFO})
    end
end

function TeaHouseVisualCardTransferModule:reset()
    self._isInitReq = false
    self._info = {clubMode = 0}
    self._membCards = {}
end

-- 是否在阶段1，对应方案3.3.1
function TeaHouseVisualCardTransferModule:isInStepOne()
    return self:isVisualCardMode() and self._cfg.open == 1
end

-- -- 是否在阶段1，对应方案3.3.3(已从虚拟卡转到真实卡)
-- function TeaHouseVisualCardTransferModule:isInStepThree()
--     return true
-- end

-- 当前是否是虚拟卡
function TeaHouseVisualCardTransferModule:isVisualCardMode()
    return self._info.clubMode == CLUB_MODE.FALSE_CARD
end

-- 当前已经是正式卡，是否由虚拟卡转过来的
function TeaHouseVisualCardTransferModule:isFromVisualCardMode()
    return self._info.clubMode == CLUB_MODE.TRUE_TRANSFERED
end

-- 是否配置开启展示旧的虚拟卡数据
function TeaHouseVisualCardTransferModule:isShowTwoCardInfo()
    if self._cfg.open == 1 and self:isVisualCardMode() then
        return true
    end
    if self._cfg.showOld == 1 and self:isFromVisualCardMode() then
        return true
    end
    return false
end

-- 是否显示阶段1，主入口
function TeaHouseVisualCardTransferModule:isNeedShowMainEntry()
    -- 判断为虚拟卡+管理员+领队
    return self:isInStepOne() and self:isHavePower()
end

function TeaHouseVisualCardTransferModule:isHavePower()
    local teahouseData = XH.teaHouseManager:getTeaHouseData()
    return teahouseData:isOwner() or teahouseData:isAdmin()
end

function TeaHouseVisualCardTransferModule:getMemberCardNum(info, isVisualCardMode)
    local teahouseData = TeaHouse.manager.teahouseData
    local isAgentPlayer = teahouseData:isAgentPlayerPayType()

    if self:isVisualCardMode() == isVisualCardMode then
        if isAgentPlayer then
            return string.format("%.2f", info.nAgentShowProps / 100)
        else
            return tostring(info.nAgentShowProps / teahouseData:getPlayerCardExchangeRate(info))
        end
    end

    if isVisualCardMode then
        local membInfo = self._membCards["" .. TeaHouse.manager.teahouseData:getTeaNumber()] or {}
        for i, v in ipairs(membInfo) do
            if v.userId == info.numid then
                if isAgentPlayer then
                    return string.format("%.2f", v.num / 100)
                else
                    return tostring(v.num / teahouseData:getPlayerCardExchangeRate(info))
                end
            end
        end
        return "0"
    end
    return "0"
end

-- 获取当前比赛场一键转换奖励数量
function TeaHouseVisualCardTransferModule:getTransferAwardCount()
    return self._info and self._info.reward and self._info.reward.count or 0
end

function TeaHouseVisualCardTransferModule:getTotalMemberOldCardNum()
    return self._info and self._info.totalCardNum or 0
end

function TeaHouseVisualCardTransferModule:reqModeInfo(isInit)
    self:startReq({clubId = TeaHouse.manager.teahouseData:getTeaNumber(), opt = OPT_TYPE.INFO, isInit = isInit})
    self._isInitReq = true
end

function TeaHouseVisualCardTransferModule:transfer()
    TeaHouse.showLoading()
    self:startReq({clubId = TeaHouse.manager.teahouseData:getTeaNumber(), opt = OPT_TYPE.TRANSFER})
    -- self:dispatchEvent({name = self.EVENT_TRANSER_RESULT, data = {isSuccess = true}})
    -- TeaHouse.hideLoading()
end

-- 是否在阶段1，对应方案3.3.1
function TeaHouseVisualCardTransferModule:getNotice()
    return self._cfg.notice or {}
end

function TeaHouseVisualCardTransferModule:changePropCnt(reward, keyPropId, keyCount)
    if reward[keyPropId] == XH.areaData:getPropLimitedTimeRoomCardID() then
        if XH.areaData:getPropLimitedTimeRoomCardRatio() then
            reward[keyCount] = reward[keyCount] / XH.areaData:getPropLimitedTimeRoomCardRatio()
        end
    end
end

function TeaHouseVisualCardTransferModule:onResp(cell, type, data)
    if cell.reqData.opt == OPT_TYPE.TRANSFER then
        TeaHouse.hideLoading()
    end
    if type == XH.Req.TYPE.SUCCESS then
        if cell.reqData.opt == OPT_TYPE.INFO then
            self:changePropCnt(data.reward, "id", "count")
            local teahouseData = TeaHouse.manager.teahouseData
            local isAgentPlayer = teahouseData:isAgentPlayerPayType()
            if isAgentPlayer then
                data.totalCardNum = string.format("%.2f", tonumber(data.totalCardNum) / 100)
            else
                data.totalCardNum = (tonumber(data.totalCardNum) / teahouseData:getCardExchangeRate())
            end

            self._info = data
            self._membCards["" .. cell.reqData.clubId] = data.userCardNums;
            -- if self:isFromVisualCardMode() then
            --     self:startReq({clubId = TeaHouse.manager.teahouseData:getTeaNumber(), opt = OPT_TYPE.GETCARDS})
            -- end
            self:dispatchEvent({name = self.EVENT_CARD_MODE_UPDATE, data = {isSuccess = true}})
            if cell.reqData.isInit and self:isNeedShowMainEntry() then
                self:checkAutoPop()
            end
            -- elseif cell.reqData.opt == OPT_TYPE.GETCARDS then
            --     self._membCards["" .. cell.reqData.clubId] = data.user_card_nums;
        elseif cell.reqData.opt == OPT_TYPE.TRANSFER then
            self._info.clubMode = CLUB_MODE.TRUE_TRANSFERED
            self:startReq({clubId = TeaHouse.manager.teahouseData:getTeaNumber(), opt = OPT_TYPE.INFO})
            self:dispatchEvent({name = self.EVENT_TRANSER_RESULT, data = {isSuccess = true}})
            XH.playerData:flushPlayerDrop()
            TeaHouse.manager.teahouseSetup:reqTeaHousePropCnt(TeaHouse.manager.teahouseData:getTeaNumber())
            TeaHouse.TipTool.showToast("转换成功，当前已使用新可用房卡模式")
            if self:getTransferAwardCount() > 0 then
                self:showAwardView()
            end
        end
    elseif type == XH.Req.TYPE.FAIL then
        if cell.reqData.opt == OPT_TYPE.TRANSFER then
            local errMsg = "转换失败，错误码" .. data.resp.errCode
            if data.resp.errCode == 1009 then
                errMsg = "转换失败，房卡不足"
            end
            TeaHouse.TipTool.showToast(errMsg)
            self:startReq({clubId = TeaHouse.manager.teahouseData:getTeaNumber(), opt = OPT_TYPE.INFO})
        end
    elseif type == XH.Req.TYPE.TIMEOUT then
        if cell.reqData.opt == OPT_TYPE.TRANSFER then
            TeaHouse.TipTool.showToast("转换超时")
        end
    end
end

function TeaHouseVisualCardTransferModule:startReq(...)
    local reqObj = require("lobby.Req.TeaHouse.ReqChangeClubMode").new()
    reqObj:addReqCallBack(self, function(...)
        -- if tolua.isnull(self) then
        --     return
        -- end
        self.onResp(...)
    end)
    reqObj:start(...)
end

function TeaHouseVisualCardTransferModule:checkAutoPop()
    local autoShowDayCnt = self._cfg.autoShowCnt or 0
    if autoShowDayCnt == 0 then
        return
    end
    local info = cc.UserDefault:getInstance():getStringForKey("TeaHouseVisualCardTransferModuleShowTime" .. XH.playerData:getNumberID(), "0_0")
    local lasttimeArr = string.split(info, "_")
    lasttimeArr[2] = tonumber(lasttimeArr[2]) or 0
    local todayStr = os.date("%Y%m%d", os.time())
    if todayStr ~= lasttimeArr[1] then
        lasttimeArr[2] = 0
    end
    if lasttimeArr[2] < autoShowDayCnt then
        cc.UserDefault:getInstance():setStringForKey("TeaHouseVisualCardTransferModuleShowTime" .. XH.playerData:getNumberID(),
                                                     todayStr .. "_" .. (lasttimeArr[2] + 1))
        TeaHouse.manager.viewManager:openView("TeaHouseCardModeTransferView", nil, {isAuto=true})
    end
end

function TeaHouseVisualCardTransferModule:showAwardView(count)
    local awardInfo = {}
    awardInfo.prize_names = {"房卡"}
    awardInfo.prize_pic = {"ico_card_1.png"}
    awardInfo.prize_count = {self:getTransferAwardCount()}
    awardInfo.text = " "
    XH.viewManager:openView("BackActivityAwardView", nil, nil, awardInfo)
end
return TeaHouseVisualCardTransferModule
