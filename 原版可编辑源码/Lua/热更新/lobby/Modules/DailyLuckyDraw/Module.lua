local DailyLuckyDrawModule = class("DailyLuckyDrawModule", XH.ModuleBase)
local DailyLuckyDrawConfig = require("lobby.Modules.DailyLuckyDraw.Config")
local ToponActConfig = require("lobby.Modules.ToponAct.Config")

DailyLuckyDrawModule.EVENT_GET_POOLINFO = "EVENT_GET_POOLINFO"
DailyLuckyDrawModule.EVENT_CLOSE_MAINBG = "EVENT_CLOSE_MAINBG"
DailyLuckyDrawModule.EVENT_GET_PEO_INFO = "EVENT_GET_PEO_INFO"
DailyLuckyDrawModule.EVENT_GET_PRIZE_INFO = "EVENT_GET_PRIZE_INFO"
DailyLuckyDrawModule.EVENT_NEED_TIME = "EVENT_NEED_TIME"
DailyLuckyDrawModule.EVENT_GET_ACT_INFO = "EVENT_GET_ACT_INFO"
DailyLuckyDrawModule.EVENT_PLAYER_INFO = "EVENT_PLAYER_INFO"

-- 先请求下载广告，下载成功播放，播放成功回调，请求task奖励

local KW_TIME_EXPIRE = 9

function DailyLuckyDrawModule:ctor()
    DailyLuckyDrawModule.super.ctor(self)
    self._playerData = {}
    self._refrehTimes = 0
    self:reqActInfo(ToponActConfig.LuckyDraw)
end

function DailyLuckyDrawModule:getReqConfig()
    return {
        ReqTaskConfig = { reqPath = "app.Req.Task.ReqWebTaskConfig", callBack = self.onCellReqTaskConfigCallBack },
        ReqActInfo = { reqPath = "app.Req.Task.ReqTaskProtocol", callBack = self.resqActInfo },
    }
end

function DailyLuckyDrawModule:reqTaskConfig(webToponData)
    if DailyLuckyDrawConfig.ActConfig and DailyLuckyDrawConfig.ActConfig[XH.areaData:getLobbyID()] then
        local webAid = webToponData.actInfo.webAid or DailyLuckyDrawConfig.ActConfig[XH.areaData:getLobbyID()].aid
        local webPid = webToponData.actInfo.poolid[1] or DailyLuckyDrawConfig.ActConfig[XH.areaData:getLobbyID()].pid
        XH.TipTool.showLoading()
        self:startReq("ReqTaskConfig", webAid, 0, webPid, 10)
    end
end

function DailyLuckyDrawModule:reqTaskProtol(taskID, getType, callBack)
    XH.TipTool.showLoading()
    local ReqTaskProtocol = require("app.Req.Task.ReqTaskProtocol")
    local reqTaskProtocol = ReqTaskProtocol:new()
    reqTaskProtocol:addReqCallBack(self, self[callBack])
    local dataString = ";getType = " .. getType
    reqTaskProtocol:start(taskID, 0, 0, XH.areaData:getSrsGroupID(), XH.KW_CONFIG_LOGIC_TIME_OUT, dataString)
end

function DailyLuckyDrawModule:getPeoInfoCallBack(cell, type, data)
    XH.TipTool.hideLoading()
    if type == XH.Req.TYPE.SUCCESS then
        if data.acData and data.acData ~= "" then
            local getPeoInfo = cjson.decode(data.acData)
            self._playerData = getPeoInfo
            self:dispatchEvent( { name = DailyLuckyDrawModule.EVENT_GET_PEO_INFO, data = getPeoInfo })
        end
    end
end

function DailyLuckyDrawModule:getPrizeCallBack(cell, type, data)
    XH.TipTool.hideLoading()
    if type == XH.Req.TYPE.SUCCESS then
        if data.acData and data.acData ~= "" then
            local getPrizeInfo = cjson.decode(data.acData)
            self._playerData = getPrizeInfo.info
            if getPrizeInfo.errcode == 1 then
                XH.TipTool.showTip( {
                    type = XH.TIP_LAYER_TYPE.OK,
                } , "本日抽奖已达到上限，请明日再来！")
            elseif getPrizeInfo.errcode == 2 then
                XH.TipTool.showTip( {
                    type = XH.TIP_LAYER_TYPE.OK,
                } , "请求奖池奖励失败，请重试！")
            elseif getPrizeInfo.errcode == 3 then
                XH.TipTool.showTip( {
                    type = XH.TIP_LAYER_TYPE.OK,
                } , "奖池配置不存在，请联系客服！")
            else
                self:dispatchEvent( { name = DailyLuckyDrawModule.EVENT_GET_PRIZE_INFO, data = getPrizeInfo })
            end
        end
    end
end

function DailyLuckyDrawModule:onCellReqTaskConfigCallBack(cell, type, responce)
    XH.TipTool.hideLoading()
    if type == XH.Req.TYPE.SUCCESS then
        self:dispatchEvent( { name = DailyLuckyDrawModule.EVENT_GET_POOLINFO, data = responce })
    end
end

function DailyLuckyDrawModule:onGetPlayerInfo()
    return self._playerData
end

function DailyLuckyDrawModule:onSetPlayerInfo(times, max)
    local data = {}
    data.sendTimes = times
    data.sendMax = max
    self._playerData = data
    self:dispatchEvent( { name = DailyLuckyDrawModule.EVENT_PLAYER_INFO })
end

function DailyLuckyDrawModule:setClickState()
    self._refrehTimes = KW_TIME_EXPIRE
    self:dispatchEvent( { name = DailyLuckyDrawModule.EVENT_NEED_TIME, data = self._refrehTimes })
    self._scheToShow = cc.Director:getInstance():getScheduler():scheduleScriptFunc( function()
        self._refrehTimes = self._refrehTimes - 1
        if self._refrehTimes <= 0 then
            self._refrehTimes = 0
            cc.Director:getInstance():getScheduler():unscheduleScriptEntry(self._scheToShow)
        end
        self:dispatchEvent( { name = DailyLuckyDrawModule.EVENT_NEED_TIME, data = self._refrehTimes })
    end , 1, false)
end

function DailyLuckyDrawModule:onGetTimeLimits()
    return self._refrehTimes
end

function DailyLuckyDrawModule:reqActInfo(webType)
    local topOnActInfo = XH.lobby:getModule("ToponAct"):getTopOnActInfo()
    if webType and topOnActInfo then
        local webAid = 0
        for _, actInfo in ipairs(topOnActInfo.toponAct) do
            if webType == actInfo.webType then
                webAid = actInfo.aid
            end
        end
        if webAid ~= 0 then
            local TaskDefine = require("app.Define.TaskDefine")
            local dataString = ";webAid = " .. webAid .. ";webType = " .. webType .. ";"
            self:startReq("ReqActInfo", TaskDefine.TASK_ID.TASK_TYPE_TOPONACT_GET_ACT_INFO, 0, 0, XH.areaData:getSrsGroupID(), XH.KW_CONFIG_LOGIC_TIME_OUT, dataString)
        end
    end
end

function DailyLuckyDrawModule:resqActInfo(cell, ctype, data)
    if data == nil or data == "" or data.acData == "" then
        return
    end
    if ctype == XH.Req.TYPE.SUCCESS then
        local actData = cjson.decode(data.acData)
        if actData.error == 0 then
            self:onSetPlayerInfo(actData.limitCnt, actData.maxLimtCnt)
            self:dispatchEvent( { name = DailyLuckyDrawModule.EVENT_GET_ACT_INFO, data = actData })
        end
    end
end

function DailyLuckyDrawModule:checkShowRedPoint()
    local playerData = self._playerData
    if not playerData then
        return false
    end
    local maxLimitCnt = playerData.sendMax or 0
    local limitCnt = playerData.sendTimes or 0
    return maxLimitCnt - limitCnt > 0
end

function DailyLuckyDrawModule:isValid()
    local show = false
    local bShow = XH.lobby:getModule("TabsActivity"):getShowFreeDrawAct()
    local acts = XH.lobby:getModule("TabsActivity"):getActsByLobbyID()
    local findActs = false
    for i = 1, #acts do
        if acts[i].icon_code == "FREEDRAW" then
            findActs = true
            break
        end
    end
    if bShow and findActs then
        show = true
    end
    if XH.playerData:isRechargePlayer() then
        show = false
    end
    return show
end

return DailyLuckyDrawModule