local WatchModule = class("WatchModule", XH.ModuleBase)
WatchModule.EVENT_UNWATCH_SUCCESS = "EVENT_UNWATCH_SUCCESS"

function WatchModule:ctor()
    WatchModule.super.ctor(self)
    self._gameMsgList = {}
    self._watchData = {}
end

function WatchModule:getReqConfig()
    return {
        ReqRealtimeGameRecord = { reqPath = "lobby.Req.Watch.ReqRealtimeGameRecord", callBack = self.respRealtimeGameRecord },
        ReqUnwatchRealtimeGameRecord = { reqPath = "lobby.Req.Watch.ReqUnwatchRealtimeGameRecord", callBack = self.respUnwatchRealtimeGameRecord },
    }
end

function WatchModule:getProxyEvents()
    return {
        { module = XH.netEngine, eventName = XH.IMProtocol.RespRealtimeGameRecord.event_key, callBack = "onRespRealtimeGameRecord" },
        { module = XH.netEngine, eventName = XH.MatchLinkProtocol.RespRealtimeGameRecord.event_key, callBack = "onRespRealtimeGameRecord1006" },
    }
end

function WatchModule:removeAllEventListeners()
    XH.netEngine:removeProtocolScriptFuncByObj(self, self.onRespRealtimeGameRecord, XH.areaData:getSrsGroupID())
    XH.netEngine:removeProtocolScriptFuncByObj(self, self.onRespRealtimeGameRecord1006, XH.areaData:getSrsGroupID())
end

-- 请求实时观战前，先判断是否需要unwatch
function WatchModule:reqRealtimeGameRecord(roomid, offset, gameid, playercount)
    self._gameMsgList = {}
    self._watchData.roomid = roomid
    self._watchData.gameid = gameid
    self._watchData.offset = offset
    self._watchData.playercount = playercount
    local curWatchRoomid = XH.lobby:getModule("Im"):getIMData():getWatchRoomId()
    if XH.gameManager and XH.lobby:getModule("Im"):getIMData():getIsSeer() and curWatchRoomid and curWatchRoomid ~= 0 then
        self:reqUnwatchRealtimeGameRecord(curWatchRoomid)
    else
        self:startReq("ReqRealtimeGameRecord", roomid, offset, gameid, false, 10, playercount)
        XH.TipTool.showLoading()
    end
end

function WatchModule:respRealtimeGameRecord(req, type, data)
    XH.TipTool.resetLoading()
    if type == XH.Req.TYPE.SUCCESS then
        local param = {}
        param.appID = 0
        param.gameID = req._gameid
        param.roomMode = XH.ROOM_MODE.BOXROOM
        param.roomID = req._roomid
        param.strRecordPath = ""
        param.watchRecordPath = req.recordPath
        param.offset = req.offset
        param.isDelayWatch = req.isDelay
        param.playercount = req._playercount
        print('wangxiaodong07, offset_zip:' .. param.offset)
        -- 设置实时观战开始时间
        XH.userDefault:setValue(XH.userDefault.KEY_ID.KW_TEAHOUSE_WATCH_STARTTIME, os.time(), {})
        cc.UserDefault:getInstance():setIntegerForKey("KW_REALWATCH_STARTTIME", os.time())
        XH.roomManager:watchStart(param)
    end
end

function WatchModule:onRespRealtimeGameRecord(event)
    local msgData = XH.IMProtocol.RespRealtimeGameRecord:new()
    msgData:bistream(event.msg.buff, event.msg.len)
    -- zip不为1的时候，不是回放协议
    if msgData.zip and msgData.zip == 1 then
        return
    end
    -- 玩家在游戏中，不处理旁观协议下发
    local position = XH.playerData:getPlayerPosition()
    if position.gameAppID and position.gameAppID ~= 0 then
        return
    end
    if msgData.flag == XH.IMProtocol.RespRealtimeGameRecord.FLAG.NOT_GOOD then
        XH.TipTool.showToast("旁观数据不完整")
		return
    end
    self._gameMsgList[#self._gameMsgList+1] = msgData
end

function WatchModule:onRespRealtimeGameRecord1006(event)
    local msgData = XH.MatchLinkProtocol.RespRealtimeGameRecord:new()
    msgData:bistream(event.msg.buff, event.msg.len)
    -- zip不为1的时候，不是回放协议
    if msgData.zip and msgData.zip == 1 then
        return
    end
    -- 玩家在游戏中，不处理旁观协议下发
    local position = XH.playerData:getPlayerPosition()
    if position.gameAppID and position.gameAppID ~= 0 then
        return
    end
    if msgData.flag == XH.MatchLinkProtocol.RespRealtimeGameRecord.FLAG.NOT_GOOD then
        XH.TipTool.showToast("旁观数据不完整")
		return
    end
    self._gameMsgList[#self._gameMsgList+1] = msgData
end

function WatchModule:getMsgList()
    local tmpList = {}
    for i = 0, #self._gameMsgList - 1 do
        tmpList[i + 1] = self._gameMsgList[i + 1]
    end
    self._gameMsgList = {}
    return tmpList
end

function WatchModule:resetMsgList()
    self._gameMsgList = {}
end

function WatchModule:reqUnwatchRealtimeGameRecord(roomid)
    self:startReq("ReqUnwatchRealtimeGameRecord", roomid)
end

function WatchModule:respUnwatchRealtimeGameRecord( req, type, data )
    if type == XH.Req.TYPE.SUCCESS then
        -- 回调处理
        if self._watchData and self._watchData.gameid and self._watchData.gameid ~= 0 and self._watchData.roomid and self._watchData.roomid ~= 0 then
            XH.lobby:getModule("Watch"):reqRealtimeGameRecord(self._watchData.roomid, 0, self._watchData.gameid, self._watchData.playercount)
        end
    end
end

return WatchModule