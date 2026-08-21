local JoinBoxRoomModule = class("JoinBoxRoomModule", XH.ModuleBase)
local SxVipConfig = require('lobby.Modules.Sxvip.Config')

JoinBoxRoomModule.EVENT_HIDE_JOINBOXROOM = "EVENT_HIDE_JOINBOXROOM"

function JoinBoxRoomModule:ctor()
    JoinBoxRoomModule.super.ctor(self)
    self._tempJoinBoxRoomCallback = nil
end

function JoinBoxRoomModule:getReqConfig()
    return {
        ReqJoinBoxRoom = { reqPath = "lobby.Req.Room.ReqJoinBoxRoom", callBack = self.onJoinBoxRoomCallBack },
    }
end

function JoinBoxRoomModule:getProxyEvents()
    return {
        { module = XH.sdkManager, eventKeyName = "EVENT_AMAP_CALLBACK", callBack = "onGetLocationCallBack" },
    }
end

function JoinBoxRoomModule:reqJoinBoxRoom(roomID, type, bSeer)
	if not roomID or not tonumber(roomID) then
		return
	end
	bSeer = bSeer or false
	if XH.playerData:checkNewRealName() ~= 0 then return end--实名限制
	local func = function(acOtherInfo)
		local boxRoomID = string.format("%06d", tonumber(roomID))
		local srsGroupID= XH.areaData:getSrsGroupID()
        self:startReq("ReqJoinBoxRoom", boxRoomID, srsGroupID, 15, acOtherInfo, type, bSeer)
	end
 
	if device.platform == "android" then
		XH.sdkManager:callFunction("user_initiative")
	end
	if XH.areaData:getLocationGameRuleKeyword() then
		if device.platform == "windows" then
			local acOtherInfo = "longitude='" .. 0 .."';".. "latitude='" .. 0 .."';bOpenGPS='" .. 1 .."';"
			func(acOtherInfo)
		else
			XH.TipTool.showLoading()
			self._tempJoinBoxRoomCallback = func
			XH.sdkManager:startLocationByAmap(XH.sdkManager.AmapAccuracy.MID)
		end
	else
		func()
	end
end

function JoinBoxRoomModule:onJoinBoxRoomCallBack(reqJoin, type, data)
	data = data or {}
    if type == XH.Req.TYPE.SUCCESS then
		if data.teaid ~= nil and data.teaid ~= 0 and not XH.lobby:getModule("Im"):checkIsGroup(data.teaid) then
			XH.teaHouseManager:joinTeaHouse(data.teaid)
		else
			if data.teaNumber then
				XH.lobby:getModule("Im"):getIMData():setEnterTeaHouseID(data.teaNumber)
			end
			XH.roomManager:onEnterGame(data,XH.ROOM_MODE.BOXROOM)
		end
        if XH.configerManager:getIsNewRealName() then
            XH.playerData:flushPlayerGameDefendIdentity(data.gameid)
        end
	elseif type == XH.Req.TYPE.FAIL then
		local func = nil
		local msg = clone(data.msg)
		local isSupportWatch = false
		local page_label = ''
		-- 房间已开局，开启观战提示,玩家没有在其他房间内
		if data.errorcode == XH.RoomProtocol.ERRORCODE.ERROR_TABLE_START then
			msg = "房间人满已开始游戏"
			isSupportWatch = XH.lobby:getModule("Sxvip"):getPowerExit(SxVipConfig.SXVIP_POWER.WATCH, data.joinInfo.gameid) and not XH.lobby:getModule("Im"):judgePlayerInGame()
			if isSupportWatch then
				if not XH.lobby:getModule("Sxvip"):isExpire() then
					page_label = '加入房间询问观战弹窗'
					msg = '房间人满已开始游戏，是否前往观战？'
				else
					page_label = '加入房间非会员弹窗'
					msg = '房间人满已开始游戏，是否【开通会员观战】？'
				end
				local joinInfo = data.joinInfo
				func = function()
					self:dispatchEvent({name = self.EVENT_HIDE_JOINBOXROOM})
					-- 会员时效内，进入房间观战，不在时效内，打开VIP界面
					if not XH.lobby:getModule("Sxvip"):isExpire() then
						if joinInfo then
							XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.zyt2024032815, {page_label = page_label, block_label = '前往观战'})
							local ConfigurationDefine = require("lobby.Modules.Configuration.Define")
							local lobbyJsonData = XH.lobby:getModule("Configuration"):getConfigJsonData(ConfigurationDefine.Config.LOBBY, "lobby")
							if lobbyJsonData and lobbyJsonData.openGPWatch then
								self:reqJoinBoxRoom(joinInfo.roomid, joinInfo.type, true)
							else
								-- 请求boxdata服务新协议进入回放观战模式
								XH.lobby:getModule("Watch"):reqRealtimeGameRecord(tonumber(joinInfo.roomid), 0, joinInfo.gameid)
							end
						end
					else
						XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.zyt2024032815, {page_label = page_label, block_label = '前往开通会员'})
						XH.viewManager:openView("SxvipView", nil, {defalutMenu = SxVipConfig.MENU_DEFINE.BUY_VIP})
					end
				end
			end
		end
		if data.errorcode == XH.RoomProtocol.ERRORCODE.ERROR_UNBINDWECHAT then
			func = function()
				XH.login:getModule("Login"):reqWXBind()
			end
		end
		if data.errorcode == XH.RoomProtocol.ERRORCODE.ERROR_NOT_OPEN_GPS then
			func = function()
				if device.platform == "ios" then
					XH.sdkManager:xhCallOCFunc("XH_Extern", "GolinkQx", "{}")
				elseif device.platform == "android" then
					XH.sdkManager:callFunction("jump_permission_system")
				end
			end
			msg = "您已经关闭了位置权限,需要您在系统设置中重新开启"
		end 
		if not data.msg then
			msg = "请求服务失败，请重试"
		end
		-- print("JoinBoxRoomModule " .. data.errorcode .. " msg = " .. data.msg )
		if tonumber(string.match(data.msg,"(%d+)")) == XH.TeaHouseProtocol.RespJoinTeaTable.FLAG.GPS_NOT_OPEN then
			msg = "没有开启GPS定位"
		elseif tonumber(string.match(data.msg,"(%d+)")) == XH.TeaHouseProtocol.RespJoinTeaTable.FLAG.DISTANCE_TOO_CLOSE then
			msg = "与桌子上其余玩家距离太近，不符合入座条件"
		elseif tonumber(string.match(data.msg,"(%d+)")) == XH.TeaHouseProtocol.RespJoinTeaTable.FLAG.BAN then
			msg = "您已被封禁对局，无法进入房间，如有疑问请联系客服。"
		end
		if data.errorcode == XH.RoomProtocol.ERRORCODE.ERROR_TABLE_START and isSupportWatch then
			XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.zyt2024032814, {page_label = page_label})
			local funcClose = function()
				XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.zyt2024032815, {page_label = page_label, block_label = '关闭弹窗'})
			end
			XH.TipTool.showTip({
				type = XH.TIP_LAYER_TYPE.OK_CANCEL,
				funcOK = func,
				funcCancel = funcClose,
				funcClose = funcClose,
			}, msg)
		elseif data.errorcode == XH.RoomProtocol.ERRORCODE.ERROR_NOT_OPEN_GPS then
			if not XH.sdkManager:guideOpenGpsServer() then
                XH.TipTool.showTip({
					type = XH.TIP_LAYER_TYPE.OK,
					funcOK = func
				}, msg)
            end
		else
			XH.TipTool.showTip({
				type = XH.TIP_LAYER_TYPE.OK,
				funcOK = func
			}, msg)
		end
    elseif type == XH.Req.TYPE.TIMEOUT then
		XH.TipTool.showTip({
			type = XH.TIP_LAYER_TYPE.OK,
		}, "请求超时")
	end
	local result = {}
	result.type = type
	result.msg = data.msg or ""
	self:dispatchEvent({name = self.EVENT_HIDE_JOINBOXROOM,msg = result})
    XH.TipTool.hideLoading()
end

function JoinBoxRoomModule:onGetLocationCallBack(event)
    local code = event.data.code
	local msg = event.data.msg
	
	XH.TipTool.hideLoading()
	local longitude, latitude, bOpenGPS = 0, 0, 0
    if code == XH.ThirdDefine.AMAP_CALLBACK_CODE.AMAP_SUCCESS then
        local tData

        local ok = pcall(function()
            tData = cjson.decode(msg)
        end)

        if not ok then
            return
        end
        
        longitude = tData["longitude"]
        latitude = tData["latitude"]
		bOpenGPS = 1
    -- else
	-- 	if self._tempJoinBoxRoomCallback then
	-- 		XH.TipTool.showTip({
	-- 			type = XH.TIP_LAYER_TYPE.OK,
	-- 		}, "请确认定位开启")
	-- 		XH.TipTool.hideLoading()
	-- 	end
	end

	local strGPS = "longitude='" .. longitude .."';".. "latitude='" .. latitude .."';bOpenGPS='" .. bOpenGPS .."';"
	if self._tempJoinBoxRoomCallback then
		self._tempJoinBoxRoomCallback(strGPS)
	end
	
    self._tempJoinBoxRoomCallback = nil
end

return JoinBoxRoomModule�