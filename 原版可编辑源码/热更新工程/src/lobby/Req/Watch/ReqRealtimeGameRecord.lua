local ReqRealtimeGameRecord = class("ReqRealtimeGameRecord", XH.ReqProtocol)

local KW_DATA_BOX_ROOM_WATCHGAME_PART = "KW_DATA_BOX_ROOM_WATCHGAME.bin"
local KW_DATA_BOX_ROOM_WATCHGAME = "KW_DATA_BOX_ROOM_WATCHGAME_Record.bin"

function ReqRealtimeGameRecord:ctor()
    ReqRealtimeGameRecord.super.ctor(self)
    self._askId = 0
    self._gameid = 0
    self._roomid = 0
    self.offset = 0
	self.isDelay = false
    self._fileStatus = {}
end

function ReqRealtimeGameRecord:getAppid(roomid)
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

function ReqRealtimeGameRecord:start(roomid, offset, gameid, isDelay, timeout, playercount)
    if ReqRealtimeGameRecord.super.start(self, timeout) == false then
        return
    end
    self._askId = os.time()
    self._fileStatus = {}
	self.isDelay = isDelay or false
    self._gameid = gameid
	self._playercount = playercount or 0

    local reqRealtimeGameRecord = XH.IMProtocol.ReqRealtimeGameRecord:new()
    reqRealtimeGameRecord.askid = self._askId
    reqRealtimeGameRecord.room_id = roomid
    reqRealtimeGameRecord.offset = offset
	reqRealtimeGameRecord.before_round = isDelay and 1 or 0
	local appid = self:getAppid(roomid)
    self:sendMsg(reqRealtimeGameRecord, XH.IMProtocol.RespRealtimeGameRecord, XH.areaData:getSrsGroupID(), appid)
end

function ReqRealtimeGameRecord:onMsgReceive(msgData)
	if msgData.askid ~= self._askId then
		return
	end
    
    if msgData.flag == XH.IMProtocol.RespRealtimeGameRecord.FLAG.NOT_GOOD then
        XH.TipTool.showToast("旁观数据不完整")
        self:fail()
		return
    end

    -- zip不为1的时候，不是回放协议
    if msgData.zip ~= 1 then
        return
    end

    if next(self._fileStatus) == nil then
        for i = 1, msgData.total do
            self._fileStatus[i] = false
        end
    end
	if msgData.total == 0 then
		XH.TipTool.showTip({
            type = XH.TIP_LAYER_TYPE.OK,
        }, "旁观数据不存在")
        self:fail()
		return
	end
    self._roomid = msgData.room_id
	local file = io.open(cc.FileUtils:getInstance():getWritablePath() .. self._gameid .. "_" .. msgData.current .. "_" .. KW_DATA_BOX_ROOM_WATCHGAME_PART, "wb")
	if file and msgData.payload ~= nil and msgData.payload ~= "" then
		file:write(msgData.payload)
		file:flush()
		self._fileStatus[msgData.current] = true
	end
	file:close()

	self._nCnt = msgData.total
	self._ucType = msgData.zip
    self.offset = msgData.max_offset

	for i = 1, msgData.total do
		if self._fileStatus[i] == false then
			return
		end
	end

	local areaDic = XH.areaData:getAreaGameNameList()
    if not areaDic[self._gameid] then
		XH.TipTool.showTip({
            type = XH.TIP_LAYER_TYPE.OK,
        }, "请求的旁观不属于本游戏")
        self:fail()
		return
	end

	self:mergeFiles()
    -- self:success(msgData)
end

function ReqRealtimeGameRecord:mergeFiles()
	local data = ""
	for i = 1, self._nCnt do
		local file = io.open(cc.FileUtils:getInstance():getWritablePath() .. self._gameid .. "_" .. i .. "_" .. KW_DATA_BOX_ROOM_WATCHGAME_PART, "rb")
		if file then
			data = data .. file:read("*a")
		end
		file:close()
	end

	if self._ucType == 1 then
        local zip = require("zlib")
		local uncompress = zip.inflate()
		local inflated, eof = uncompress(data)
		while( eof == false ) do
			inflated, eof = uncompress(data)
		end
		data = inflated
	end
	local filePath = cc.FileUtils:getInstance():getWritablePath() .. self._gameid .. "_" .. KW_DATA_BOX_ROOM_WATCHGAME
	local txtFile = io.open(filePath,"wb")
	if txtFile then
		txtFile:write(data)
		txtFile:close()
	end

	self.recordPath = filePath
	self:success()
end

return ReqRealtimeGameRecord
