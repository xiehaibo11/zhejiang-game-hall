-- @brief: 牌友游戏过程相关数据上报

local SxvipFriendInfoModule = class("SxvipFriendInfoModule", XH.ModuleBase)
local REPORT_TYPE = {
    OUT_SPEED = 1, --出牌速度
    DISS_COUNT = 2 --解散次数
}
local OUT_CARD_REPORT_THRESHOLD = 10 --出牌次数上报阈值

function SxvipFriendInfoModule:ctor()
    SxvipFriendInfoModule.super.ctor(self)
    self._dismissCount = cc.UserDefault:getInstance():getIntegerForKey("SxvipFriendInfoModule_dismissCount", 0)
    self._outCardTotalTime = cc.UserDefault:getInstance():getIntegerForKey("SxvipFriendInfoModule_outCardTotalTime", 0)
    self._outCardCount = cc.UserDefault:getInstance():getIntegerForKey("SxvipFriendInfoModule_outCardCount", 0)
    self._offlineCount = {}
end

function SxvipFriendInfoModule:getReqConfig()
    return {
        ReqSxvipReportData = {reqPath = "lobby.Req.Sxvip.ReqSxvipReportData", callBack = self.respReportData}
    }
end

function SxvipFriendInfoModule:getProxyEvents()
    return {
        {module = XH.sdkManager, eventKeyName = "EVENT_IAP_CALLBACK", callBack = "respBuyProp"},
        {module = XH.lobby:getModule("Configuration"), eventKeyName = "EVENT_REQ_CONFIGURATION_SUCCESS", callBack = "onGetConfiguration"}
    }
end

function SxvipFriendInfoModule:respReportData(req, type, data)
    if type == XH.Req.TYPE.SUCCESS then
    end
end

function SxvipFriendInfoModule:reportData()
    local roomId = CF and CF.roomData and CF.roomData:getRoomID() or 0
    local data = {
        roomId = roomId,
        info = {
            {
                tenant_id = XH.areaData:getTenantid(),
                area_id = XH.areaData:getAreaID(),
                user_id = XH.playerData:getNumberID(),
                dismiss_cnt = self._dismissCount,
                play_time = math.floor(self._outCardTotalTime),
                play_total = self._outCardCount,
                offline_cnt = 0
            }
        }
    }
    for k, v in pairs(self._offlineCount) do
        table.insert(
            data.info,
            {
                tenant_id = XH.areaData:getTenantid(),
                area_id = XH.areaData:getAreaID(),
                user_id = tonumber(k),
                play_time = 0,
                play_total = 0,
                offline_cnt = v > 20 and 20 or v
            }
        )
    end
    print("zzzz", json.encode(data))
    self:startReq("ReqSxvipReportData", data)
end

function SxvipFriendInfoModule:onOutStart(seat)
    local selfSeat = CF and CF.roomData and CF.roomData:getSelfSeat()
    if selfSeat == nil then
        selfSeat = Game and Game.FrameworkFunction and Game.FrameworkFunction.getSelfSeat() --两帮
    end
    if selfSeat == seat then
        -- end
        -- if self._startOutTime == nil then --重连时间不更新
        self._startOutTime = socket.gettime()
    else
        self._startOutTime = nil
    end
end

function SxvipFriendInfoModule:onOutEnd()
    if self._startOutTime == nil then
        return
    end
    self._outCardCount = self._outCardCount + 1
    local costTime = socket.gettime() - self._startOutTime
    if costTime > 30 then
        costTime = 30
    end
    if costTime < 0 then
        costTime = 0
    end

    self._outCardTotalTime = self._outCardTotalTime + costTime
    self._startOutTime = nil
    -- if self._outCardCount == OUT_CARD_REPORT_THRESHOLD then
    --     self:reportData(REPORT_TYPE.OUT_SPEED, self._outCardTotalTime / OUT_CARD_REPORT_THRESHOLD)
    --     self._outCardCount = 0
    --     self._outCardTotalTime = 0
    -- end
    cc.UserDefault:getInstance():setIntegerForKey("SxvipFriendInfoModule_outCardCount", self._outCardCount)
    cc.UserDefault:getInstance():setIntegerForKey("SxvipFriendInfoModule_outCardTotalTime", self._outCardTotalTime)
end

function SxvipFriendInfoModule:onDismiss()
    if not CF or not CF.roomData then
        return
    end
    if CF.roomData:getPlayCount() == 1 then
        return
    end

    self._dismissCount = self._dismissCount + 1
    cc.UserDefault:getInstance():setIntegerForKey("SxvipFriendInfoModule_dismissCount", self._dismissCount)
end

function SxvipFriendInfoModule:onOffline(numid)
    local key = tostring(numid)
    self._offlineCount[key] = self._offlineCount[key] or 0
    self._offlineCount[key] = self._offlineCount[key] + 1
end

function SxvipFriendInfoModule:onGameEnd()
    self:reportData()
    self._dismissCount = 0
    self._outCardCount = 0
    self._outCardTotalTime = 0
    self._offlineCount = {}
    cc.UserDefault:getInstance():setIntegerForKey("SxvipFriendInfoModule_dismissCount", self._dismissCount)
    cc.UserDefault:getInstance():setIntegerForKey("SxvipFriendInfoModule_outCardCount", self._outCardCount)
    cc.UserDefault:getInstance():setIntegerForKey("SxvipFriendInfoModule_outCardTotalTime", self._outCardTotalTime)
end

return SxvipFriendInfoModule
