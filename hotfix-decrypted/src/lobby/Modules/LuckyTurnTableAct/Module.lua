local LuckyTurnTableActModule = class("LuckyTurnTableActModule", XH.ModuleBase)
local TaskDefine = require("app.Define.TaskDefine")

LuckyTurnTableActModule.EVENT_UPDATE_RULE = "EVENT_UPDATE_RULE"
LuckyTurnTableActModule.EVENT_UPDATE_AWARD = "EVENT_UPDATE_AWARD"
LuckyTurnTableActModule.EVENT_SHOW_GOT_AWARD = "EVENT_SHOW_GOT_AWARD"
LuckyTurnTableActModule.EVENT_GET_ACT_DATA = "EVENT_GET_ACT_DATA"
LuckyTurnTableActModule.EVENT_UPDATE_CONDITION = "EVENT_UPDATE_CONDITION"
LuckyTurnTableActModule.EVENT_WATCH_ADVERTISEMENT = "EVENT_WATCH_ADVERTISEMENT"
LuckyTurnTableActModule.EVENT_FLUSH_LOBBY_ICON = "EVENT_FLUSH_LOBBY_ICON"

LuckyTurnTableActModule.TaskProtocolDefine = {
    GET_RULE = 1,           -- 请求活动规则
    GET_PRIZE_POOL = 2,     -- 请求活动奖池
    DRAW_PRIZE = 3,         -- 请求抽奖
    GET_INFO = 4,           -- 请求任务数据
    GET_CONDITION = 5,      -- 请求活动条件
    GET_ADVERTISEMENT = 6,  -- 请求活动条件
}
LuckyTurnTableActModule.WHITE_ACT_NAME = "LuckyTurn_White"

function LuckyTurnTableActModule:ctor()
    LuckyTurnTableActModule.super.ctor(self)
    self._actInfo = {}
    self._hasWhiteAct = false
end

function LuckyTurnTableActModule:setWhiteAct(hasWhiteAct)
    self._hasWhiteAct = hasWhiteAct == true
    self:flushLobbyIcon()
    if self._hasWhiteAct then
        self:reqActData()
    end
end

function LuckyTurnTableActModule:hasWhiteAct()
    return self._hasWhiteAct
end

function LuckyTurnTableActModule:isWhiteActInfo(info)
    if not info then
        return false
    end
    return info.type == self.WHITE_ACT_NAME or info.name == self.WHITE_ACT_NAME
end

function LuckyTurnTableActModule:getDailyAutoPopLocalKey()
    local todayStr = os.date("%Y%m%d", XH.lobby:getModule("Shop"):getServerTime())
    return todayStr .. "_LuckyTurnTableAct_DailyPop_" .. XH.playerData:getNumberID()
end

function LuckyTurnTableActModule:isTodayAutoPopped()
    return cc.UserDefault:getInstance():getBoolForKey(self:getDailyAutoPopLocalKey(), false)
end

function LuckyTurnTableActModule:markTodayAutoPopped()
    cc.UserDefault:getInstance():setBoolForKey(self:getDailyAutoPopLocalKey(), true)
end

function LuckyTurnTableActModule:isInLobby()
    return XH.SceneManager:getInstance():getTopSceneTag() == XH.SCENE_TAG.LOBBY
end

function LuckyTurnTableActModule:tryDailyAutoPop()
    if not self._hasWhiteAct then
        return
    end
    if not self:isInLobby() then
        return
    end
    if self:isTodayAutoPopped() then
        return
    end
    if XH.viewManager:isViewExist("LuckyTurnTableActView") then
        return
    end
    self:markTodayAutoPopped()
    XH.viewManager:openView("LuckyTurnTableActView", nil, { auto = true })
end

function LuckyTurnTableActModule:flushLobbyIcon()
    self:dispatchEvent({name = self.EVENT_FLUSH_LOBBY_ICON, data = {bShow = self._hasWhiteAct}})
end

function LuckyTurnTableActModule:reqTaskProtol(taskID, protolID, extraString, callBack)
    local ReqTaskProtocol = require("app.Req.Task.ReqTaskProtocol")
    local reqTaskProtocol = ReqTaskProtocol:new()
    reqTaskProtocol:addReqCallBack(self, self[callBack])
    local dataString = extraString
    local askID = protolID
    reqTaskProtocol:start(taskID, protolID, 0, XH.areaData:getSrsGroupID(), XH.KW_CONFIG_LOGIC_TIME_OUT, dataString, askID)
end

function LuckyTurnTableActModule:reqRuleContents()
    if XH.areaData:getAreaID() == 7109 then
        self:reqTaskProtol(TaskDefine.TASK_ID.TASK_TYPE_ZHEJAING_LUCKY_TURN_TABLE_ADV, self.TaskProtocolDefine.GET_RULE, "", "onGetActRuleCallBack")
    else
        self:reqTaskProtol(TaskDefine.TASK_ID.TASK_TYPE_ZHEJAING_LUCKY_TURN_TABLE, self.TaskProtocolDefine.GET_RULE, "", "onGetActRuleCallBack")
    end
end

function LuckyTurnTableActModule:onGetActRuleCallBack(cell, ctype, data)
    if ctype == XH.Req.TYPE.SUCCESS then
        local actRuleContents =  ""
        if data.acData and data.acData ~= "" then
            actRuleContents = json.decode(data.acData)
        end
        self:dispatchEvent({name = self.EVENT_UPDATE_RULE, strContents = actRuleContents[1] })
    end
end

function LuckyTurnTableActModule:reqActPrizePoolData()
    if XH.areaData:getAreaID() == 7109 then
        self:reqTaskProtol(TaskDefine.TASK_ID.TASK_TYPE_ZHEJAING_LUCKY_TURN_TABLE_ADV, self.TaskProtocolDefine.GET_PRIZE_POOL, "", "onGetActPrizePoolCallBack")
    else
        self:reqTaskProtol(TaskDefine.TASK_ID.TASK_TYPE_ZHEJAING_LUCKY_TURN_TABLE, self.TaskProtocolDefine.GET_PRIZE_POOL, "", "onGetActPrizePoolCallBack")
    end
end

function LuckyTurnTableActModule:onGetActPrizePoolCallBack(cell, ctype, data)
    if ctype == XH.Req.TYPE.SUCCESS then
        local awardData =  {}
        if data.acData and data.acData ~= "" then
            awardData = json.decode(data.acData)
        end
        self:dispatchEvent({name = self.EVENT_UPDATE_AWARD, awards = awardData })
    end
end

function LuckyTurnTableActModule:reqDrawPrize()
    if XH.areaData:getAreaID() == 7109 then
        self:reqTaskProtol(TaskDefine.TASK_ID.TASK_TYPE_ZHEJAING_LUCKY_TURN_TABLE_ADV, self.TaskProtocolDefine.DRAW_PRIZE, "", "onDrawPrizeCallBack")
    else
        self:reqTaskProtol(TaskDefine.TASK_ID.TASK_TYPE_ZHEJAING_LUCKY_TURN_TABLE, self.TaskProtocolDefine.DRAW_PRIZE, "", "onDrawPrizeCallBack")
    end
end

function LuckyTurnTableActModule:onDrawPrizeCallBack(cell, ctype, data)
    if ctype == XH.Req.TYPE.SUCCESS then
        local award =  {}
        if data.acData and data.acData ~= "" then
            award = json.decode(data.acData)
        end
        self:dispatchEvent({name = self.EVENT_SHOW_GOT_AWARD, info = award })
    end
end

function LuckyTurnTableActModule:reqActData()
    if XH.areaData:getAreaID() == 7109 then
        self:reqTaskProtol(TaskDefine.TASK_ID.TASK_TYPE_ZHEJAING_LUCKY_TURN_TABLE_ADV, self.TaskProtocolDefine.GET_INFO, "", "onGetActDataCallBack")
    else
        self:reqTaskProtol(TaskDefine.TASK_ID.TASK_TYPE_ZHEJAING_LUCKY_TURN_TABLE, self.TaskProtocolDefine.GET_INFO, "", "onGetActDataCallBack")
    end
end

function LuckyTurnTableActModule:onGetActDataCallBack(cell, ctype, data)
    if ctype == XH.Req.TYPE.SUCCESS then
        local info =  {}
        if data.acData and data.acData ~= "" then
            info = json.decode(data.acData)
        end
        self._actInfo = info
        self:dispatchEvent({name = self.EVENT_GET_ACT_DATA, data = info })
    end
end

function LuckyTurnTableActModule:reqActCondition()
    if XH.areaData:getAreaID() == 7109 then
        self:reqTaskProtol(TaskDefine.TASK_ID.TASK_TYPE_ZHEJAING_LUCKY_TURN_TABLE_ADV, self.TaskProtocolDefine.GET_CONDITION, "", "onGetConditionCallBack")
    else
        self:reqTaskProtol(TaskDefine.TASK_ID.TASK_TYPE_ZHEJAING_LUCKY_TURN_TABLE, self.TaskProtocolDefine.GET_CONDITION, "", "onGetConditionCallBack")
    end
end

function LuckyTurnTableActModule:onGetConditionCallBack(cell, ctype, data)
    if ctype == XH.Req.TYPE.SUCCESS then
        local condition =  {}
        if data.acData and data.acData ~= "" then
            condition = json.decode(data.acData)
        end
        self:dispatchEvent({name = self.EVENT_UPDATE_CONDITION, data = condition })
    end
end


function LuckyTurnTableActModule:reqWatchAdvertisement()
    if XH.areaData:getAreaID() == 7109 then
        self:reqTaskProtol(TaskDefine.TASK_ID.TASK_TYPE_ZHEJAING_LUCKY_TURN_TABLE_ADV, self.TaskProtocolDefine.GET_ADVERTISEMENT, "", "onWatchAdvertisementCallBack")
    else
        self:reqTaskProtol(TaskDefine.TASK_ID.TASK_TYPE_ZHEJAING_LUCKY_TURN_TABLE, self.TaskProtocolDefine.GET_ADVERTISEMENT, "", "onWatchAdvertisementCallBack")
    end
end

function LuckyTurnTableActModule:onWatchAdvertisementCallBack(cell, ctype, data)
    if ctype == XH.Req.TYPE.SUCCESS then
        local condition =  {}
        self:dispatchEvent({name = self.EVENT_WATCH_ADVERTISEMENT, data = condition })
    end
end

function LuckyTurnTableActModule:checkShow()
    local actData = XH.lobby:getModule("Lobby"):getWebTabsData()
    if actData and actData.page and #actData.page > 0 then
        for _, v in pairs(actData.page) do
            if v.icon_code == "LUCKYTURNTABLE" then
                return true
            end
        end
    end
    return false
end

function LuckyTurnTableActModule:checkRedPoint()
    if self._actInfo.leftDraw and self._actInfo.leftDraw > 0 then
        return true
    end
end

return LuckyTurnTableActModule   �!  