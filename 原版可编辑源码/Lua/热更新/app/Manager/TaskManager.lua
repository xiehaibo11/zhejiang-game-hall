
--
-- 任务管理
--
local TaskDefine = require("app.Define.TaskDefine")

local TaskManager = class("TaskManager")
TaskManager.BASE_LIVE_SUCCESS = "BASE_LIVE_SUCCESS"
TaskManager.BREAK_GIFT_BAG = "BREAK_GIFT_BAG"
TaskManager.BREAK_GIFT_BAG_SHOW_TIME = "BREAK_GIFT_BAG_SHOW_TIME"
TaskManager.FRIEND_RECALL_AWARD_STATE = "FRIEND_RECALL_AWARD_STATE"
TaskManager.SHARE_GIVE_GOLD_SUCCESS = "SHARE_GIVE_GOLD_SUCCESS"

function TaskManager:ctor()
    cc(self):addComponent("components.behavior.EventProtocol"):exportMethods()
    self._baseLiveInfo = nil
    self._breakGiftInfo = nil
    self._isreqLiveInfo = false
end

function TaskManager:getBreakGiftInfo()
    return self._breakGiftInfo
end

function TaskManager:reqTaskAfterLogin()
    self._baseLiveInfo = nil
    self._breakGiftInfo = nil
    -- 低保信息
    self:reqBaseLiveTask()

    --限时活动
    self:reqTaskPercent(TaskDefine.TASK_ID.LIMITED_TIME_ACTIVITY)
    self:reqBreakGiftBagTime()

    --续费VIP弹窗
    self:reqLastBuyProductID(XH.lobby:getModule("Shop").KW_REQ_LAST_BUY_PRODUCT_ID_TYPE.GET_VIP_OFF_TIME_TIPS)
end

function TaskManager:reqBaseLiveTask()
    if XH.isEmbeddedApp() then
        XH.lobby:getModule("YGiftBankruptcy"):reqBaseLiveInfo()
        return
    end
    -- 低保信息
    self:reqTaskPercent(TaskDefine.TASK_ID.BASE_LIVE_THREE)
end

--分享赠送房卡
function TaskManager:reqShareGiveRoomCard()
    self:reqTaskPercent(TaskDefine.TASK_ID.SHARE_GIVE_CARD)
end

function TaskManager:reqTaskGetAward(taskId)
    if taskId == TaskDefine.TASK_ID.BASE_LIVE_THREE then
        XH.lobby:getModule("YGiftBankruptcy"):reqBaseLiveAward()
        return
    end
    local srsGroupID = self:getSrsGroupID()
    local ReqTaskAward = require("app.Req.Task.ReqTaskAward")
    local reqTaskAward = ReqTaskAward:new()
    reqTaskAward:addReqCallBack(self, self.onReqTaskAwardCallBack)
    reqTaskAward:start(0,taskId,srsGroupID,10)
end

function TaskManager:onReqTaskAwardCallBack(cell, type, data)
    if type == XH.Req.TYPE.SUCCESS then
        local relData = json.decode(data.acData)
        local taskID = tonumber(data.nTaskId)
        if relData.rel == 0 then
            if taskID == TaskDefine.TASK_ID.BASE_LIVE_THREE then
                local awardInfo = relData.data
                if awardInfo[tostring(-1)].rel == 0 then
                    local awardData = {}
                    -- {{type = fk,cnt = 1}...}
                    local tempInfo = {}
                    tempInfo.type = -1
                    tempInfo.cnt = awardInfo[tostring(-1)].data.cnt
                    awardData[1] = tempInfo
                    XH.viewManager:openView("GoldRewardView", nil, awardData)
                    self:reqTaskPercent(TaskDefine.TASK_ID.BASE_LIVE_THREE)
                    self:reqPlayerDropData()
                end
            end
        end     
    end
end

function TaskManager:reqPlayerDropData()
    XH.playerData:flushGoldCoin()
    XH.playerData:flushPlayerDrop()
end

-- 游戏内低保
function TaskManager:JudgeBankruptInGame(playerSR, gameID)
    --如果低保领取完了看破产礼包是否领取
    XH.playerData:setSR(playerSR)
    -- 双扣直接走新的充值 todo
    if XH.lobby:getModule("YGiftBankruptcy"):isNewModeGold(gameID) then
        return false
    end
    if not self._baseLiveInfo then
        return false
    end
    local condition = tonumber(string.match(self._baseLiveInfo.sTip, "%d+"))
    local ntotal = self._baseLiveInfo.total or 0
    local nComplete = self._baseLiveInfo.nComplete or 0
    XH.playerData:setSR(playerSR)
    if playerSR < condition then
        local isSupport = XH.areaData:isSupportGoldQuickRecharge() or false
        if ntotal - nComplete > 0 or isSupport then
            if not XH.playerData:getIsShieldBaseLiveView() then
                if not XH.playerData:getIsRealNameTourist() then--游客登陆
                    XH.viewManager:openView("GoldBaseLiveView")
                else
                    return false
                end
            end
            return true
        end
        -- 如果破产礼包还可以领取
        if self._breakGiftInfo and self._breakGiftInfo.isShowBtn then
            if not XH.playerData:getIsShieldBaseLiveView() then
                if not XH.playerData:getIsRealNameTourist() then--游客登陆
                    XH.viewManager:openView("GoldBaseLiveView")
                else
                    return false
                end
            end
            return true
        end
    end
    return false
end

function TaskManager:reqTaskPercent(taskId)
    if taskId == TaskDefine.TASK_ID.BASE_LIVE_THREE then
        XH.lobby:getModule("YGiftBankruptcy"):reqBaseLiveInfo()
        return
    end
    local cellTaskPercent = require("app.Req.Task.ReqTaskPercent")
    local TaskPercent = cellTaskPercent:new()
    TaskPercent:addReqCallBack(self, self.onCellReqTaskPercentCallBack)
    local srsGroupID = self:getSrsGroupID()
    TaskPercent:start(XH.playerData:getNumberID(),0,120,taskId,srsGroupID,10)
end

function TaskManager:canGetBreakAward(minrich)
    if not self._baseLiveInfo then
        return false
    end
    local canGet = false
    if self._baseLiveInfo.total and self._baseLiveInfo.nComplete then
        canGet = self._baseLiveInfo.nComplete < self._baseLiveInfo.total
    end
    if canGet and self._baseLiveInfo.addcnt and minrich then
        canGet = minrich <= self._baseLiveInfo.addcnt
    end
    return canGet
end

function TaskManager:setBaseLiveInfo(baseLiveInfo)
    self._baseLiveInfo = baseLiveInfo
    self:dispatchEvent({name = self.BASE_LIVE_SUCCESS,baseLiveInfo = self._baseLiveInfo})
end

function TaskManager:onCellReqTaskPercentCallBack(cell, type, data)
    print("TaskManager:onCellReqTaskPercentCallBack call type:" .. type)
    if type == XH.Req.TYPE.SUCCESS then
        if data.nTaskId == TaskDefine.TASK_ID.BASE_LIVE_THREE then
            self._baseLiveInfo = {}
            self._baseLiveInfo.total = data.nTotal
            self._baseLiveInfo.nComplete = data.nComplete
            self._baseLiveInfo.sTip = data.acData
            self._baseLiveInfo.nExtraParam2 = data.nExtraParam2
            self._baseLiveInfo.nExtraParam1 = data.nExtraParam1
            self._baseLiveInfo.nExtraParam3 = data.nExtraParam3
            if data.nExtraParam3 and data.nExtraParam3 > 0 then
                self._baseLiveInfo.addcnt = data.nExtraParam3
            end
            self:dispatchEvent({name = self.BASE_LIVE_SUCCESS,baseLiveInfo = self._baseLiveInfo})
        elseif data.nTaskId == TaskDefine.TASK_ID.LIMITED_TIME_ACTIVITY then
            if data.acData and data.acData ~= "" then
                local jsonData = json.decode(data.acData) or {}
                if jsonData.boxGameList then
                    XH.areaData:setBoxActivityGame(jsonData.boxGameList)
                end
                if jsonData.goldGameList then
                    XH.areaData:setGoldActivityGame(jsonData.goldGameList)
                end
                if jsonData.startTime and jsonData.endTime then
                    XH.areaData:setActivityTime(jsonData.startTime, jsonData.endTime)
                end
            end
        elseif data.nTaskId == TaskDefine.TASK_ID.SHARE_GIVE_CARD or data.nTaskId == TaskDefine.TASK_ID.TASK_FRIEND_AWARD_RECALL then
            if data.acData and data.acData ~= "" then
                if data.nTaskId == TaskDefine.TASK_ID.TASK_FRIEND_AWARD_RECALL then
                    XH.lobby:getModule("Im"):getIMData():setRecallAwardState(true)
                    XH.lobby:getModule("Im"):getIMData():dispatch(XH.lobby:getModule("Im"):getIMData().EVENT_LIST_DATA_CHANGED)
                end
                self:reqPlayerDropData()
                if data.nTaskId == TaskDefine.TASK_ID.SHARE_GIVE_CARD then
                    local winSize = cc.Director:getInstance():getWinSize()
                    XH.TipTool.showToast(data.acData, nil, cc.p(winSize.width / 2, winSize.height * 0.2))
                else
                    XH.TipTool.showTip({
                        type = XH.TIP_LAYER_TYPE.OK,
                    }, data.acData)
                end
            end
        elseif data.nTaskId == TaskDefine.TASK_ID.SHARE_GIVE_GOLD then
            if data.acData == nil or data.acData == "" then
                XH.TipTool.showToast("今日分享领奖次数已达上限!", 3)
                return
            end
            self:dispatchEvent({name = self.SHARE_GIVE_GOLD_SUCCESS, data})
        end
    end
end

function TaskManager:reqTaskProtocol(taskid, paramStr, protoid)
    paramStr = paramStr or ""
    local srsGroupID = self:getSrsGroupID()
    local ReqTaskProtocol = require("app.Req.Task.ReqTaskProtocol")
    local reqTaskProtocol = ReqTaskProtocol:new()
    reqTaskProtocol:addReqCallBack(self, self.onCellReqTaskProtocolCallBack)
    reqTaskProtocol:start(taskid, protoid or TaskDefine.PROTOID, TaskDefine.APPID, srsGroupID, XH.KW_CONFIG_LOGIC_TIME_OUT, paramStr)
end

function TaskManager:onCellReqTaskProtocolCallBack(cell, ctype, data)
    if ctype == XH.Req.TYPE.SUCCESS then
        if data.taskId == TaskDefine.TASK_ID.TASK_TYPE_ID_BRANK_PACKAGE_INFO then
            self:dispatchEvent({name = TaskManager.BREAK_GIFT_BAG, msg = data.acData})
        elseif data.taskId == TaskDefine.TASK_ID.TASK_TYPE_ID_NOTICE_TIME then
            if data.acData ~= "" then 
                self._breakGiftInfo = json.decode(data.acData)
                self:dispatchEvent({name = TaskManager.BREAK_GIFT_BAG_SHOW_TIME, msg = data.acData})
            end
        elseif data.taskId == TaskDefine.TASK_ID.TASK_FRIEND_AWARD_RECALL then
            self:dispatchEvent({name = TaskManager.FRIEND_RECALL_AWARD_STATE, msg = data.acData})
        elseif data.taskId == TaskDefine.TASK_ID.TASK_TYPE_LAST_BUY_PRODUCT_ID then
            if data.acData and data.acData ~= "" then
                if data.nProtoId == XH.lobby:getModule("Shop").KW_REQ_LAST_BUY_PRODUCT_ID_TYPE.GET_LAST_BUY_ID then
                    local productid = json.decode(data.acData)
                    if productid and type(productid) == "table" and next(productid) then
                        XH.userDefault:setValue(XH.userDefault.KEY_ID.KW_LAST_BUY_PRODUCT_ID_DIAMOND, productid[tostring(XH.areaData:getPropDiamndID())] or 0)
                        XH.userDefault:setValue(XH.userDefault.KEY_ID.KW_LAST_BUY_PRODUCT_ID_CARD, productid[tostring(XH.areaData:getPropRoomCardID())] or 0)
                        XH.userDefault:setValue(XH.userDefault.KEY_ID.KW_LAST_BUY_PRODUCT_ID_GOLD, productid["-1"] or 0)
                    end
                elseif data.nProtoId == XH.lobby:getModule("Shop").KW_REQ_LAST_BUY_PRODUCT_ID_TYPE.GET_VIP_OFF_TIME_TIPS then
                    local backData = json.decode(data.acData)
                    if backData and type(backData) == "table" and next(backData) and backData.nOldVIP ~= 0 then
                        XH.viewManager:openView("VipRenewTipsLayer", nil, backData)
                    end
                end
            end
        end
    end
end

--获取当前区的 唯一标识
function TaskManager:getLobbyID()
    return XH.areaData:getLobbyID()
end

--获取srs组
function  TaskManager:getSrsGroupID()
    return XH.areaData:getSrsGroupID()
end

--获取当前区的房卡ID
function  TaskManager:getRoomCardID()
    return XH.areaData:getPropRoomCardID()
end

function TaskManager:reqBreakGiftBag()
    self:reqTaskProtocol(TaskDefine.TASK_ID.TASK_TYPE_ID_BRANK_PACKAGE_INFO)
end

function TaskManager:reqBreakGiftBagTime()
    self:reqTaskProtocol(TaskDefine.TASK_ID.TASK_TYPE_ID_NOTICE_TIME)
end

--好友系统有奖召回
function TaskManager:reqFriendAwardRecall()
    self:reqTaskPercent(TaskDefine.TASK_ID.TASK_FRIEND_AWARD_RECALL)
end

function TaskManager:reqFriendAwardGetState()
    self:reqTaskProtocol(TaskDefine.TASK_ID.TASK_FRIEND_AWARD_RECALL)
end

function TaskManager:reqLastBuyProductID(protoid, productid, propid)
    local paramStr = ";id=" .. (productid or 0) .. ";propid=" .. (propid or 0)
    self:reqTaskProtocol(TaskDefine.TASK_ID.TASK_TYPE_LAST_BUY_PRODUCT_ID, paramStr, protoid)
end

return TaskManager
