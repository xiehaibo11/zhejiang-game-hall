local ReqGoldPlayBack = class("ReqGoldPlayBack", XH.ReqHttp)
local UrlConf = require("app.Config.UrlConf")
local KW_DATA_BOX_ROOM_SHAREGAME = "KW_DATA_BOX_ROOM_SHAREGAME_Record.bin"

function ReqGoldPlayBack:ctor()
    ReqGoldPlayBack.super.ctor(self)
    self._askId = 0
    self._nGameid = 0
    self._is50 = true
end

function ReqGoldPlayBack:start(ledgerId, timeout)
    if ReqGoldPlayBack.super.start(self, timeout) == false then
        return
    end

    local urlInfo = {}
    self._askId = os.time()
    urlInfo["ask_id"] = self._askId
    urlInfo["area_id"] = XH.areaData:getAreaID()
    urlInfo["ledger_id"] = ledgerId

    local headmap = {}
    headmap["Content-Type"] = "application/json"
    local jsonStr = cjson.encode(urlInfo)

    XH.httpManager50:RequestPost(XH.HttpDefine.URL_GOLD50_PLAYBACK, UrlConf.URL_GOLD50_PLAYBACK, jsonStr, XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON, handler(self, self.onHttpCallBack), headmap)
end

function ReqGoldPlayBack:onHttpCallBack(httpID, status, response)
    if not httpID or httpID ~= XH.HttpDefine.URL_GOLD50_PLAYBACK then
        return
    end
    if status == 200 then
        if response.resp.errCode == 0 then
            self._nGameid = response.gameId
            self:updatePlayBackFile(response)
            -- self:success()
        else
            self:setMessage(response.resp.errReason)
            self:fail()
        end
    else
        self:setMessage("请求金币回放错误")
        self:fail()
    end
end

function ReqGoldPlayBack:updatePlayBackFile( response )
	local data = response.content
    local zip = require("zlib")
    local decoded_data = XH.SysTool:base64_decode(data)
    local uncompress = zip.inflate()
    local inflated, eof, _, _ = uncompress(decoded_data)
    while( eof == false ) do
        inflated, eof = uncompress(data)
    end
    data = inflated

	local filePath = cc.FileUtils:getInstance():getWritablePath() .. self._nGameid .. "_" .. KW_DATA_BOX_ROOM_SHAREGAME
	local txtFile = io.open(filePath,"wb")
	if txtFile then
		txtFile:write(data)
		txtFile:close()
	end

	self.recordPath = self:createAllDirection(filePath)

	self:success(response)
end

function ReqGoldPlayBack:createAllDirection(filePath)
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

return ReqGoldPlayBack	