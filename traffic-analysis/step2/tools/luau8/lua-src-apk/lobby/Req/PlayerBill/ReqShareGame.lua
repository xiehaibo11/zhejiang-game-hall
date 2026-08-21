local ReqShareGame = class("ReqShareGame", XH.ReqProtocol)

local KW_DATA_BOX_ROOM_SHAREGAME_PART = "KW_DATA_BOX_ROOM_SHAREGAME.bin"
local KW_DATA_BOX_ROOM_SHAREGAME = "KW_DATA_BOX_ROOM_SHAREGAME_Record.bin"

function ReqShareGame:ctor()
    ReqShareGame.super.ctor(self)
    self._nAskid = 0
    self._nGameid = 0
    self._lUuId = 0
    self._nCnt = 0
    self._nIdx = 0
	self._ucType = 0
	self._roomid = 0
	self._fileStatus = {}
	self._showControlGame = true
end

function ReqShareGame:start(uuid,timeoutTime)
	if ReqShareGame.super.start(self,timeoutTime) == false then
        return
    end
    self._lUuId = uuid
    self._nAskid = os.time()
	self._fileStatus = {}
    
    local req = XH.ActiveProtocol.ReqGetGame:new()
    req.nAskid = self._nAskid
    req.nGameid = self._nGameid
    req.lUuId = self._lUuId
	
	self:sendMsg(req, XH.ActiveProtocol.RespGetGame, XH.areaData:getSrsGroupID(), 0)
end

function ReqShareGame:onMsgReceive(msgData)
	if msgData.nAskid ~= self._nAskid then
		return
	end
	if msgData.lUuId ~= self._lUuId then
		return
	end


	if next(self._fileStatus) == nil then
		for i = 1, msgData.nCnt do
			self._fileStatus[i] = false
		end
	end

	if msgData.nCnt == 0 then
		XH.TipTool.showTip({
            type = XH.TIP_LAYER_TYPE.OK,
        }, "RESULT_REPLAY_NOT_EXISTED")
        self:fail()
		return
	end

	self._nGameid = msgData.nGameid
	local file = io.open(cc.FileUtils:getInstance():getWritablePath() .. self._nGameid .. "_" .. msgData.nIdx .. "_" .. KW_DATA_BOX_ROOM_SHAREGAME_PART, "wb")
	if file and msgData.szData ~= nil and msgData.szData ~= "" then
		file:write(msgData.szData)
		file:flush()
		self._fileStatus[msgData.nIdx] = true
	end
	file:close()

	self._nCnt = msgData.nCnt
	self._ucType = msgData.ucType

	for i = 1, msgData.nCnt do
		if self._fileStatus[i] == false then
			return
		end
	end


	local areaDic = XH.areaData:getAreaGameNameList()
    if not areaDic[self._nGameid] then
		XH.TipTool.showTip({
            type = XH.TIP_LAYER_TYPE.OK,
        }, "请求的回放不属于本游戏")
        self:fail()
		return
	end

	self:mergeFiles()
end

function ReqShareGame:mergeFiles()
	local data = ""
	for i = 1, self._nCnt do
		local file = io.open(cc.FileUtils:getInstance():getWritablePath() .. self._nGameid .. "_" .. i .. "_" .. KW_DATA_BOX_ROOM_SHAREGAME_PART, "rb")
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

	local filePath = cc.FileUtils:getInstance():getWritablePath() .. self._nGameid .. "_" .. KW_DATA_BOX_ROOM_SHAREGAME
	local txtFile = io.open(filePath,"wb")
	if txtFile then
		txtFile:write(data)
		txtFile:close()
	end

	self.recordPath = self:createAllDirection(filePath)

	self:success()
end

function ReqShareGame:createAllDirection(filePath)
	--生成全视角
	local file = io.open(filePath,"rb")
    local fillMsg = {}
	self._roomid = tonumber(file:read(20))
    fillMsg.subXYID = tonumber(file:read(6),10)
    fillMsg.subLen = tonumber(file:read(6),10) or 0
    fillMsg.subBuff = file:read(fillMsg.subLen)
	local otherdata = file:read("*a")
	file:close()

	file = io.open(filePath,"wb")
	if file then
		file:write(otherdata)
		file:close()
	end

	if fillMsg.subLen < 10 then
		return filePath
	end
	
	local recordPath = string.gsub(filePath,"Record","AllDirection")
	file = io.open(recordPath,"wb")
    local subData = string.format("%06d%06d",fillMsg.subXYID,fillMsg.subLen)..fillMsg.subBuff
	if file then
		file:write(subData)
		file:close()
	end

	return recordPath
end

function ReqShareGame:getTableInfo(filePath)
	local file = io.open(filePath,"rb")
	local ans = nil
	while true do
		local fillMsg = {}
		local t = file:read(20)
		if t == nil then
			break
		end
		fillMsg.subXYID = tonumber(file:read(6),10)
		fillMsg.subLen = tonumber(file:read(6),10) or 0
		fillMsg.subBuff = file:read(fillMsg.subLen)
	
		if fillMsg.subXYID == XH.GameProtocol.TableInfo.XY_ID then
			local tableInfo = XH.GameProtocol.TableInfo.TableInfo:new()
			tableInfo:bistream(fillMsg.subBuff , fillMsg.subLen)
			ans = tableInfo
			break
		end
	end
	file:close()
	return ans
end
    
return ReqShareGame
�