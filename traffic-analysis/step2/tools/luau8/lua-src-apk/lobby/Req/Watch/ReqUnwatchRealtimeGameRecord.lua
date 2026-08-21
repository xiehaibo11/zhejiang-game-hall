local ReqUnwatchRealtimeGameRecord = class("ReqUnwatchRealtimeGameRecord", XH.ReqProtocol)

function ReqUnwatchRealtimeGameRecord:ctor()
    ReqUnwatchRealtimeGameRecord.super.ctor(self)
    self._askid = 0
end

function ReqUnwatchRealtimeGameRecord:getAppid(roomid)
	local appid = XH.lobby:getModule("Im"):getIMData():getSvrAppidList()
	if not appid or #appid == 0 or roomid == 0 then
		return 0
	end
	table.sort(appid)
	local idx = roomid % #appid + 1
	if idx > #appid then
		return 0
	end
	return appid[idx]
end

function ReqUnwatchRealtimeGameRecord:start(roomid, timeout)
    if ReqUnwatchRealtimeGameRecord.super.start(self, timeout) == false then
        return
    end

    self._askid = os.time()
    local ConfigurationDefine = require("lobby.Modules.Configuration.Define")
	local lobbyJsonData = XH.lobby:getModule("Configuration"):getConfigJsonData(ConfigurationDefine.Config.LOBBY, "lobby")
    if lobbyJsonData and lobbyJsonData.watch1006 then
        local reqUnwatch = XH.MatchLinkProtocol.ReqUnwatchRealtimeGameRecord:new()
        reqUnwatch.askid = self._askid
        reqUnwatch.room_id = roomid
        self:sendMsg(reqUnwatch, XH.MatchLinkProtocol.RespUnwatchRealtimeGameRecord, XH.areaData:getSrsGroupID(), 0)
        return
	end

    local reqUnwatch = XH.IMProtocol.ReqUnwatchRealtimeGameRecord:new()
    reqUnwatch.askid = self._askid
    reqUnwatch.room_id = roomid
    local appid = self:getAppid(roomid)
    self:sendMsg(reqUnwatch, XH.IMProtocol.RespUnwatchRealtimeGameRecord, XH.areaData:getSrsGroupID(), appid)
end

function ReqUnwatchRealtimeGameRecord:onMsgReceive(msgData)
	if msgData.askid ~= self._askid then
		return
	end
    self:success()
end

return ReqUnwatchRealtimeGameRecord
�