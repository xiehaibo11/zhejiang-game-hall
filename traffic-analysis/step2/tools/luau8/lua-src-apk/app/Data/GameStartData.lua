
local GameStartData = class("GameStartData")

function GameStartData:ctor(param)
	self._appID = param.appID
	self._gameID = param.gameID
	self._roomMode = param.roomMode
	self._roomID = param.roomID
    self._srsGroupID = param.srsGroupID or XH.areaData:getSrsGroupID()
	self._oSceneObj = param.oSceneObj
	self._strRecordPath = param.strRecordPath or ""
	self._leaveGameFunc = param.leaveGameFunc
	self._roomFlag = param.roomflag 
	self._chaircnt = param.chaircnt
	
	----------------------------- 用于金币场 ---------------------------------------
	-- 是否是重连金币场,游戏已开始
	self._reconnect = param.reconnect or false
	-- 游戏模式：旧金币场=4,新匹配机制金币场=200,包厢=10,新金币场匹配队列201
	self._sRoomMode = param.sRoomMode
	-- 金币场connect GP使用的appid
	self._nMatchAppid = param.nMatchAppid or nil
end

function GameStartData:setLeaveGameFunc(func)
    if not func then return end
	self._leaveGameFunc = func
end

function GameStartData:getLeaveGameFunc()
	return self._leaveGameFunc
end

return GameStartDataS