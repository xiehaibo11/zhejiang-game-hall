---@class TeaHousePlayerBillModule : Module
local TeaHousePlayerBillModule = class("TeaHousePlayerBillModule", TeaHouse.Module)

TeaHousePlayerBillModule.EVENT_BILL_UPDATE_TOTALLIST = "EVENT_BILL_UPDATE_TOTALLIST"
TeaHousePlayerBillModule.EVENT_BILL_UPDATE_BILLDETAIL = "EVENT_BILL_UPDATE_BILLDETAIL"
TeaHousePlayerBillModule.EVENT_BILL_UPDATE_CURTIME = "EVENT_BILL_UPDATE_CURTIME"

TeaHousePlayerBillModule.SHOW_BILL_DAY = 5
local REQ_PLAYER_BILL_FIRST_CNT = 150
local REQ_PLAYER_BILL_NORAML_CNT = 30
local KW_DATA_TEAHOUSE_LEDGER = "teaHouseLedger.lua"

function TeaHousePlayerBillModule:onCreate()
    TeaHousePlayerBillModule.super.onCreate(self)

    self:initData()

    TeaHouse.manager.netManager:addEventListener(TeaHouse.ActiveProtocol.RespDetail, self, self.onBillInfoRespDetail)
    local teahouseEvent = TeaHouse.manager.teahouseEvent
    teahouseEvent:addCallBack(teahouseEvent.EVENT_TYPE.GAME_SCENE_EXIT, "TeaHousePlayerBillModule", handler(self, self.pullResultData))
end

function TeaHousePlayerBillModule:onDestroy()
    TeaHouse.manager.netManager:removeEventListener(self)
    local teahouseEvent = TeaHouse.manager.teahouseEvent
    teahouseEvent:removeCallBack(teahouseEvent.EVENT_TYPE.GAME_SCENE_EXIT, "TeaHousePlayerBillModule")
    TeaHousePlayerBillModule.super.onDestroy(self)
end

function TeaHousePlayerBillModule:initData()
    self._totalBillInfo = {}			--战绩数据
    self._detailBillInfo = {}		--战绩详情数据

    self._curShowRoomInfo = nil

    self._curTime = 0				--当前获取到的时间戳
    self._curBilldate = ""			--当前日期的字符串
    self._teaNumber = 0					--当前比赛场ID
    self._bReqPlayerBillFirst = false
    self._loopRequest = false
    self._LedgerDetail = {finishgames = 0,gameDetail = {}}
end

function TeaHousePlayerBillModule:openInTeaHouse(teaNumber)
    self:initData()
    self._teaNumber = teaNumber or 0
end

function TeaHousePlayerBillModule:getCurTime()
    return self._curTime
end

--设置当前选中的日期字符串
function TeaHousePlayerBillModule:setCurBillDateStr(sCurBillDate)
    self._curBilldate = sCurBillDate
end

function TeaHousePlayerBillModule:getCurBillDateStr()
    return self._curBilldate
end

function TeaHousePlayerBillModule:getDisplayUserId()
    return TeaHouse.BridgeData.getNumberID()
end

--战绩详情返回
function TeaHousePlayerBillModule:onBillInfoRespDetail(msgData)
    self._LedgerDetail.finishgames = self._LedgerDetail.finishgames + msgData.detailInfo.finishgames
    for i = 1, msgData.detailInfo.finishgames do 
        table.insert(self._LedgerDetail.gameDetail,msgData.detailInfo.gameDetail[i])
    end
    if msgData.bComplete then
        msgData.detailInfo.finishgames = self._LedgerDetail.finishgames
        msgData.detailInfo.gameDetail = self._LedgerDetail.gameDetail
        self:showBillDetail(msgData)
        self._LedgerDetail = {finishgames = 0,gameDetail = {}}
    end
end

function TeaHousePlayerBillModule:showBillDetail(tBillDetail)
    local tCurRoomInfo = self._curShowRoomInfo

    --接收战绩详情的时候有可能为空，为空则表示不需要更新
    if tCurRoomInfo then
        local sKey = self:convertToDetailBillInfoKey(tCurRoomInfo.gameID, tCurRoomInfo.appid, tCurRoomInfo.tableid, tCurRoomInfo.starttime)
        self._detailBillInfo[self._curBilldate] = self._detailBillInfo[self._curBilldate] or {}
        self._detailBillInfo[self._curBilldate][sKey] = tBillDetail

        self:dispatchEvent({ name = TeaHousePlayerBillModule.EVENT_BILL_UPDATE_BILLDETAIL, msg = { tCurRoomInfo = tCurRoomInfo, tBillDetail = tBillDetail } })
    end
end

function TeaHousePlayerBillModule:pullResultData()
    if TeaHouse.isInTeahouse() then
        self:initData()
        self._teaNumber = TeaHouse.manager.teahouseData:getTeaNumber() or 0
        self:reqCurTime()
    end
end

--获取时间
function TeaHousePlayerBillModule:clearLocalBillData()
    local sFileName = self:getLocalBillDataFileName()
    local uFile = io.open(sFileName, "wb")
    if uFile then
        uFile:close()
    end

    XH.userDefault:setValue(XH.userDefault.KEY_ID.KW_DATA_REQ_PLAYER_BILL, false , {date = self._curBilldate, teaNumber = self._teaNumber} )
end

function TeaHousePlayerBillModule:getLocalBillDataFileName()
    local displayUserId = XH.playerData:getNumberID()
    local sCurUserKey = XH.areaData:getLobbyID() .. "_" .. displayUserId .. "_"
    local sFileName = cc.FileUtils:getInstance():getWritablePath() .. self._curBilldate .. "/" .. self._teaNumber .. "_" .. sCurUserKey .. KW_DATA_TEAHOUSE_LEDGER
    return sFileName
end

function TeaHousePlayerBillModule:reqCurTime()
    -- TeaHouse.showLoading()
    local netReqCurTime = TeaHouse.manager.reqManager:createReq("NetReqCurTime")
    netReqCurTime:addReqCallBack(self, self.onReqCurTimeCallBack)
    netReqCurTime:start(15)
end

--获取当前时间回调
function TeaHousePlayerBillModule:onReqCurTimeCallBack(req, type, data)
    -- TeaHouse.hideLoading()
    if type == TeaHouse.Req.TYPE.TIMEOUT then
        TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK }, req:getMessage())
    else
        local curtime = req._curTime
        self._curTime = curtime
        self._curBilldate = os.date("%Y-%m-%d", curtime)

        self:dispatchEvent({ name = TeaHousePlayerBillModule.EVENT_BILL_UPDATE_CURTIME })

        self:readPlayerBillInfo(TeaHousePlayerBillModule.SHOW_BILL_DAY)
    end
end


--区分是否第一次拉取， 第一次拉取100条，后续2条
function TeaHousePlayerBillModule:readPlayerBillInfo(curBillTimeIndex)
    local sReqPlayerBillTime = XH.userDefault:getValue(XH.userDefault.KEY_ID.KW_DATA_REQ_PLAYER_BILL_TIME, "")
    if sReqPlayerBillTime == "" then
        XH.userDefault:setValue(XH.userDefault.KEY_ID.KW_DATA_REQ_PLAYER_BILL_TIME, self._curBilldate)
        self._bReqPlayerBillFirst = true
    else
        self._bReqPlayerBillFirst = not XH.userDefault:getValue(XH.userDefault.KEY_ID.KW_DATA_REQ_PLAYER_BILL, false , {date = self._curBilldate, teaNumber = self._teaNumber})
    end
    local sReqCnt = self._bReqPlayerBillFirst and REQ_PLAYER_BILL_FIRST_CNT or REQ_PLAYER_BILL_NORAML_CNT
    local nReqTime = self._curTime - (TeaHousePlayerBillModule.SHOW_BILL_DAY - curBillTimeIndex) * 86400
    self:reqTeaHousePlayerBill(sReqCnt, nReqTime)
end

--获取用户战绩
function TeaHousePlayerBillModule:reqTeaHousePlayerBill(reqBillCnt, nReqTime)
    TeaHouse.showLoading()
    local netReqPlayerBill = TeaHouse.manager.reqManager:createReq("NetReqPlayerBill")
    netReqPlayerBill:addReqCallBack(self, self.onReqPlayerBill)
    netReqPlayerBill:start(self._teaNumber, nReqTime, reqBillCnt, TeaHouse.BridgeData.getLobbyID(), TeaHouse.BridgeData.getNumberID(), 30)
end

function TeaHousePlayerBillModule:onReqPlayerBill(req, type, data)
    TeaHouse.hideLoading()
    if type == TeaHouse.Req.TYPE.SUCCESS then
        if not self._teaNumber or self._teaNumber == 0 then
            return
        end
        self._totalBillInfo[self._curBilldate] = self._totalBillInfo[self._curBilldate] or {}
        local sCurUserKey = TeaHouse.BridgeData.getLobbyID() .. "_" .. TeaHouse.BridgeData.getNumberID() .. "_"
        local sFileName = self._teaNumber .. "_" .. sCurUserKey .. KW_DATA_TEAHOUSE_LEDGER
        if self._bReqPlayerBillFirst then
            self._totalBillInfo[self._curBilldate] = req._playerData
            XH.userDefault:setValue(XH.userDefault.KEY_ID.KW_DATA_REQ_PLAYER_BILL, true , {date = self._curBilldate, teaNumber = self._teaNumber} )
        else
            self:readLocalBillData()
        end
        self._totalBillInfo[self._curBilldate] = XH.TableTool.unique(self._totalBillInfo[self._curBilldate], true, "starttime")
        --如果是新战绩按时间排序
        -- if KW_CONFIG_NEW_TEAHOUSE_BILL == true then
        local sortFun = function(a, b) return b.starttime < a.starttime end
        table.sort(self._totalBillInfo[self._curBilldate], sortFun)
		self:writeBillInfo(self._totalBillInfo[self._curBilldate], self._curBilldate, sFileName) --重新写入
        -- end
        -- if req._nCnt == req._maxBillCnt and req._maxBillCnt > 0  then
        --     self:reqTeaHousePlayerBill(req._nCnt * 2, req._time)
        -- end
		self:dispatchEvent({ name = TeaHousePlayerBillModule.EVENT_BILL_UPDATE_TOTALLIST })
    elseif type == TeaHouse.Req.TYPE.FAIL then
        TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK }, req:getMessage())
    elseif type == TeaHouse.Req.TYPE.TIMEOUT then
        TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK }, "REQ_BILL_TIMEOUT")
    end
end

--组合出DetailBill的key
function TeaHousePlayerBillModule:convertToDetailBillInfoKey(sGameID, sAppID, sTableID, sStartTime)
    return string.format("%s_%s_%s_%s", sGameID, sAppID, sTableID, sStartTime)
end

--获取当前选中的日期的战绩详情，skey指定实际哪个
function TeaHousePlayerBillModule:getCurDetailBillInfoByKey(sKey)
    self._detailBillInfo[self._curBilldate] = self._detailBillInfo[self._curBilldate] or {}
    return self._detailBillInfo[self._curBilldate][sKey]
end

--获取详情数据
function TeaHousePlayerBillModule:fetchDetailDataByIdx(index)
    local curBillInfo = self:getCurBillInfo()
    local tCurRoomInfo = curBillInfo[tonumber(index)]

    if tCurRoomInfo ~= nil then
        local sKey = self:convertToDetailBillInfoKey(tCurRoomInfo.gameID, tCurRoomInfo.appid, tCurRoomInfo.tableid, tCurRoomInfo.starttime)
        local curDetailBillInfo = self:getCurDetailBillInfoByKey(sKey)
        if curDetailBillInfo == nil then
            TeaHouse:showLoading()
            self._curShowRoomInfo = tCurRoomInfo

            --开始网络请求
            local nTableID = tCurRoomInfo.tableid
            local nAppID = tCurRoomInfo.appid
            local nStartTime = tCurRoomInfo.starttime
            local nGameID = tCurRoomInfo.gameID--HI.getGameIDByRoomID(nAppID)
            -- if not nGameID then
            -- 	nGameID = KW_DATA_DEFAULT_GAME_ID
            -- end
            local netReqLedgerDetail = TeaHouse.manager.reqManager:createReq("NetReqLedgerDetail")
            netReqLedgerDetail:addReqCallBack(self, self.onReqBillInfoDetail)
            netReqLedgerDetail:start(10, nGameID, nAppID, nTableID, nStartTime)
        else
            return tCurRoomInfo, curDetailBillInfo
        end
    end
end

--获取详情数据回调
function TeaHousePlayerBillModule:onReqBillInfoDetail(req, nType, vData)
    TeaHouse.hideLoading()
    if nType == TeaHouse.Req.TYPE.TIMEOUT then
        TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK }, "REQ_BILLDETAIL_TIMEOUT")
    end
end

--获取用户战绩详细信息
function TeaHousePlayerBillModule:reqPlayerBillDetail(index)
    TeaHouse.showLoading()
    -- 找到对应的数据去请求
    local netReqDetailBill = TeaHouse.manager.reqManager:createReq("NetReqDetailBill")
    netReqDetailBill:addReqCallBack(self, self.onReqDetailBill)
    local itemInfo = self._totalBillInfo[index]
    netReqDetailBill:start(itemInfo.starttime, itemInfo.tableid, itemInfo.appid, itemInfo.gameID, 10, nil)
end

--获取用户战绩详细信息回调
function TeaHousePlayerBillModule:onReqDetailBill(req, type, data)
    TeaHouse.hideLoading()
    if type == TeaHouse.Req.TYPE.SUCCESS then
        -- if KW_CAN_GET_SHAREID == true then		--获取回放码
        local info = {}
        for _, v in ipairs(data.detailInfo.gameDetail) do
            table.insert(info, v.cuuid)
        end

        local netReqShareID = TeaHouse.manager.reqManager:createReq("NetReqShareID")
        netReqShareID:addReqCallBack(self, self.onReqShareID)
        netReqShareID:start(info, 10)
        self._detaildata = data
        -- else
        -- 	self:doOnView("TeaHouseBillDialogNew", "showPlayerBillDetail", data)
        -- end
    elseif type == TeaHouse.Req.TYPE.TIMEOUT then
        self._bDealBillState = false
        self._accountNumid = -1
        self._accountIdx = 0
        TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK }, "REQ_BILL_TIMEOUT")
    end
end

--获取回放码回调
function TeaHousePlayerBillModule:onReqShareID(req, type, data)
    if type == TeaHouse.Req.TYPE.SUCCESS then
        self._shareData = {}
        for i = 1, #data.shareID do
            if data.shareID[i] ~= 0 then
                local sShareData = string.format("%04d", data.shareID[i])
                self._shareData[i] = sShareData
            end
        end
    else
        TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK }, "GET_SHARECODE_ERROR")
    end
end

--获取当前选中的日期的战绩信息,如果传入GameId，则只返回对应游戏的战绩信息
function TeaHousePlayerBillModule:getCurBillInfo(nGameId)
    local tResult = nil
    if nGameId and nGameId > 0 then
        tResult = self:getCurBillInfoByGameId(nGameId)
    else
        tResult = self._totalBillInfo[self._curBilldate] or {}
    end
    return tResult
end

-- 获得选中的日期指定游戏的战绩数据
function TeaHousePlayerBillModule:getCurBillInfoByGameId(nGameId)
    local tResult = {}
    local tCurBillInfo = self:getCurBillInfo()
    for _, v in pairs(tCurBillInfo) do
        if v.gameID == nGameId then
            tResult[#tResult + 1] = v
        end
    end
    return tResult
end

function TeaHousePlayerBillModule:writeBillInfo(tBillInfo, nTime, sFileName)
    if not cc.FileUtils:getInstance():isDirectoryExist(cc.FileUtils:getInstance():getWritablePath() .. nTime) then
        cc.FileUtils:getInstance():createDirectory(cc.FileUtils:getInstance():getWritablePath() .. nTime)
    end
    local uFile = io.open(cc.FileUtils:getInstance():getWritablePath() .. nTime .. "/" .. sFileName, "wb")
    for key, var in pairs(tBillInfo) do
        local sWriteJSON = json.encode(var) --转换成json格式
        if uFile and type(var) == "table" then
            uFile:write(sWriteJSON .. "\n")
            uFile:flush()
        end
    end
    if uFile then
        uFile:close()
    end
end

--读取本地某一天的数据
function TeaHousePlayerBillModule:readLocalBillData()
    local tTmpPlayerData = {}

    local sCurUserKey = TeaHouse.BridgeData.getLobbyID() .. "_" .. TeaHouse.BridgeData.getNumberID() .. "_"
    local sFileName = cc.FileUtils:getInstance():getWritablePath() .. self._curBilldate .. "/" .. self._teaNumber .. "_" .. sCurUserKey .. KW_DATA_TEAHOUSE_LEDGER
    self:fileReadPlayerBillInfo(sFileName, tTmpPlayerData)

    local curBillInfo = self:getCurBillInfo()
    if next(tTmpPlayerData) ~= nil then
        for _, v in pairs(tTmpPlayerData) do
            table.insert(curBillInfo, v)
        end
    end
end

--读取(时间为xxxx-xx-xx)
function TeaHousePlayerBillModule:fileReadPlayerBillInfo(sFileName, tOutInfo)
    local uFile = io.open(sFileName, "rb")
    if uFile then
        local tCheckItem = {}
        tOutInfo = tOutInfo or {}
        for _, var in ipairs(tOutInfo) do
            tCheckItem[var.starttime .. "_" .. var.config] = _

        end
        for var in uFile:lines() do
            local tTemp = json.decode(var)
            if not tTemp then
                uFile:close()
                return
            end
            if tCheckItem[tTemp.starttime .. "_" .. tTemp.config] == nil then
                tOutInfo[#tOutInfo + 1] = tTemp
                tCheckItem[tTemp.starttime .. "_" .. tTemp.config] = #tOutInfo
            else
                local existKey = tCheckItem[tTemp.starttime .. "_" .. tTemp.config]
                tOutInfo[existKey] = tTemp
            end
        end
        uFile:close()
    end
end

return TeaHousePlayerBillModule   �>  