---@class TeaHouseAgentBillModule : Module
local TeaHouseAgentBillModule = class("TeaHouseAgentBillModule", TeaHouse.Module)

TeaHouseAgentBillModule.EVENT_CUR_DATE_UPDATE = "EVENT_CUR_DATE_UPDATE"
TeaHouseAgentBillModule.EVENT_TEAHOUSE_COST_UPDATE = "EVENT_TEAHOUSE_COST_UPDATE"
TeaHouseAgentBillModule.EVENT_TEA_BILL_INFO = "EVENT_TEA_BILL_INFO"                         -- 所有战绩
TeaHouseAgentBillModule.EVENT_DETAIL_BILL_INFO = "EVENT_DETAIL_BILL_INFO"                   -- 所有战绩
TeaHouseAgentBillModule.EVENT_BIGWINNER_DETAIL_INFO = "EVENT_BIGWINNER_DETAIL_INFO"         -- 冠军详单
TeaHouseAgentBillModule.EVENT_TEAHOUSE_SIMPLE_INFO = "EVENT_TEAHOUSE_SIMPLE_INFO"           -- 比赛场信息，该领队所在的所有比赛场
TeaHouseAgentBillModule.EVENT_DEAL_BIGWINNER = "EVENT_DEAL_BIGWINNER"                       -- 处理冠军战绩
TeaHouseAgentBillModule.EVENT_CHANGE_SCORE_FILTER = "EVENT_CHANGE_SCORE_FILTER"             -- 处理分数筛选消息

local KW_TEA_TABLE_LEDGER_FILE = "TeaTableBillLedger.lua"
--local KW_DATA_TEAHOUSE_LEDGER = "teaHouseLedger.lua"

local MAX_WINNER_CNT = 150
local REQ_TABLE_BILL_CNT = 50
local SHOW_BILL_DAY = 7
--local SELF_BILL_CNT = 30

TeaHouseAgentBillModule.ManageBtnIndex = {
    BILLFIND_BTN = 1, ---所有战绩
    UNBILL_BTN = 2, ---未完成战绩
    BILL_BTN = 3, ---已完成战绩
    SELFBILL_BTN = 4, --自己的战绩
}

TeaHouseAgentBillModule.BILL_TYPE = {
    UNBILL = 0,
    BILL = 1,
}

function TeaHouseAgentBillModule:onCreate()
    TeaHouseAgentBillModule.super.onCreate(self)

    self._curTeaid = -1                                         -- 当前比赛场ID
    self._teaHouseInfo = {}                                     -- 比赛场信息
    self._curBillTimeStamp = 0                                  -- 当前时间戳
    self._todayDate = ""                                        -- 当前时间戳对应日期字符串
    self._todayHour = ""                                        -- 当前时间戳对应小时字符串
    self._curBilldate = ""                                      -- 当前时间
    self._curBillTimeIndex = 0                                  -- 时间索引
    self._reqTableBillIndex = {}                                -- 请求战绩索引
    self._unBillWinnerData = {}                                 -- 未计算的冠军数据
    self._billWinnerData = {}                                   -- 已计算的冠军数据
    self._filterWinnerData = nil
    self._searchedBillData = nil
    --self._billSelfData = {}                                     -- 副领队查看自己的战绩数据
    self._winnerDetailData = {}
    self._nLocalTableBillCnt = {}
    self._billManageIndex = -1                                  -- 领队战绩管理按钮索引
    self._isNeedResortTab = {}                                  -- 比赛场已完成table是否需要进行重新排序,key为[date..teaid]
    self._deleteDelayTab = {}                                   -- 保存稍后需要删除的数据信息
    self._sWinnerBestFileName = ""                              -- 冠军本地文件
    self._teaHouseInfoIndex = -1                                -- 当前比赛场索引
    self._tableData = {}                                        -- 桌子信息（用户战绩查询）
    self._costCard = {}                                         -- 房卡消耗
end

function TeaHouseAgentBillModule:setInitData(data)
    self._curTeaid = data.curTeaId
    self._curBillTimeStamp = data.curBillTimeStamp
    self._todayDate = data.curBillDate
    self._todayHour = data.curBillHour
    self._curBilldate = data.curBillDate
    self._curBillTimeIndex = data.curBillTimeIndex
    self._reqTableBillIndex = {}                                -- 第一次请求永远从0开始索引
    self._unBillWinnerData = {}                                 -- 冠军未完成战绩
    self._billWinnerData = {}                                   -- 冠军已完成战绩
    self._filterWinnerData = nil
    self._searchedBillData = nil
    --self._billSelfData = {}                                     -- 副领队自己的战绩
    self._winnerDetailData = {}
    self._nLocalTableBillCnt = {}
    self._isNeedResortTab = {}                                  -- 比赛场已完成table是否需要进行重新排序,key为[date..teaid]
    self._deleteDelayTab = {}
    self._tableData = {}
    self._costCard = {}
    self._sWinnerBestFileName = "_" .. TeaHouse.BridgeData.getAreaID() .. "_" .. TeaHouse.BridgeData.getNumberID() .. "_bestWinner_new.lua"
end

function TeaHouseAgentBillModule:onDestroy()
    TeaHouseAgentBillModule.super.onDestroy(self)
end

function TeaHouseAgentBillModule:getCurBillTimeIndex()
    return self._curBillTimeIndex
end

function TeaHouseAgentBillModule:isOnlyFlag()  --宁波人人后改成与其他区一致，当天可点完成战绩
    return false--TeaHouse.BridgeData.getLobbyID() == TeaHouse.LOBBY_ID.NINGBO
end

function TeaHouseAgentBillModule:isOpenScoreFilter()
    -- 宁波余姚开启

    local payTypes = TeaHouse.manager.teahouseData:getPayTypeByID()
    if payTypes then
        for _, payType in pairs(payTypes) do
            if payType == TeaHouse.TeaHouseProtocol.ReqSetPayType.PayType.TYPE_AGENT_PLAYER_AA
            or payType == TeaHouse.TeaHouseProtocol.ReqSetPayType.PayType.TYPE_AGENT_PLAYER_WINNER then--余姚上线后可删除特判
                return true
            else
                return false
            end
        end
    end
end

function TeaHouseAgentBillModule:gameLobbyID()
    if self:isOnlyFlag() then
        return 0
    end
    if TeaHouse.BridgeData.getLobbyID() == TeaHouse.LOBBY_ID.NINGBO then
        return 0
    end
    return TeaHouse.BridgeData.getLobbyID()
end

function TeaHouseAgentBillModule:isBillDownloadFinish(date)
    return XH.userDefault:getValue(XH.userDefault.KEY_ID.TABLE_BILL_DOWNLOAD_FINISH, false , {teaid = self._curTeaid ,date = date}) 
end

function TeaHouseAgentBillModule:setIsBillDownloadFinish(date, value)
    XH.userDefault:setValue(XH.userDefault.KEY_ID.TABLE_BILL_DOWNLOAD_FINISH, value , {teaid = self._curTeaid ,date = date})
end

function TeaHouseAgentBillModule:reqCurTime()
    TeaHouse.showLoading()
    local netReqCurTime = TeaHouse.manager.reqManager:createReq("NetReqCurTime")
    netReqCurTime:addReqCallBack(self, self.onNetReqCurTime)
    netReqCurTime:start(10)
end

function TeaHouseAgentBillModule:onNetReqCurTime(req, ctype, data)
    TeaHouse.hideLoading()
    if ctype == TeaHouse.Req.TYPE.SUCCESS then
        self:dispatchEvent({ name = self.EVENT_CUR_DATE_UPDATE, msg = { nTime = req._curTime } })
    elseif ctype == TeaHouse.Req.TYPE.TIMEOUT then
        TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK }, "DEAL_POWER_TIMEOUT")
    end
end

function TeaHouseAgentBillModule:reqTeaHouseCost()
    local netReqTeaHouseCost = TeaHouse.manager.reqManager:createReq("NetReqTeaHouseCost")
    local curTime = self._curBillTimeStamp - (SHOW_BILL_DAY - self._curBillTimeIndex) * 86400
    netReqTeaHouseCost:addReqCallBack(self, self.onNetReqTeaHouseCost)
    netReqTeaHouseCost:start(self._curTeaid, curTime, 10)
end

function TeaHouseAgentBillModule:onNetReqTeaHouseCost(req, ctype, data)
    if ctype == TeaHouse.Req.TYPE.SUCCESS then
        self._costCard[self._curBilldate] = self._costCard[self._curBilldate] or {}
        self._costCard[self._curBilldate][self._curTeaid] = data.nTodaycost
        if data.nPropid and data.nPropid == TeaHouse.BridgeData.getSmallRoomCardID() then
            self._costCard[self._curBilldate][self._curTeaid] = data.nTodaycost / TeaHouse.BridgeData.getSmallRoomCardRatio()
        end
        if TeaHouse.BridgeData.isFixPayTypeArea() then--如果是升级过服务的地区0-6点间战绩异常问题
            if TeaHouse.BridgeData.getSmallRoomCardRatio() and not ( TeaHouse.LOBBY_ID.SHAOXING3D == TeaHouse.BridgeData.getLobbyID() or TeaHouse.LOBBY_ID.WENZHOU == TeaHouse.BridgeData.getLobbyID() ) then
                self._costCard[self._curBilldate][self._curTeaid] = data.nTodaycost / TeaHouse.BridgeData.getSmallRoomCardRatio()
            end
        end
        self:dispatchEvent({ name = self.EVENT_TEAHOUSE_COST_UPDATE, msg = { todayCost = self._costCard[self._curBilldate][self._curTeaid] } })
    elseif ctype == TeaHouse.Req.TYPE.TIMEOUT then
        -- TODO
    end
end

function TeaHouseAgentBillModule:reqSimpleTeaHouseInfo()
    local netReqTeaHouseInfo = TeaHouse.manager.reqManager:createReq("NetReqSimpleTeaHouseInfo")
    netReqTeaHouseInfo:addReqCallBack(self, self.onNetReqSimpleTeaHouseInfo)
    netReqTeaHouseInfo:start(10)
end

function TeaHouseAgentBillModule:onNetReqSimpleTeaHouseInfo(req, ctype)
    if ctype == TeaHouse.Req.TYPE.SUCCESS then
        -- TODO
        for i = 1, #req._teaHouseInfo do
            if req._teaHouseInfo[i].bSelfTeaHouse then
                self._teaHouseInfo[#self._teaHouseInfo + 1] = req._teaHouseInfo[i]
            end
        end
        for i = 1, #self._teaHouseInfo do
            if self._teaHouseInfo[i].nTeaid == self._curTeaid then
                self._teaHouseInfoIndex = i
            end
        end
        self:dispatchEvent({ name = self.EVENT_TEAHOUSE_SIMPLE_INFO, msg = { info = self._teaHouseInfo } })
    elseif ctype == TeaHouse.Req.TYPE.TIMEOUT then
    end
end

function TeaHouseAgentBillModule:getBillInfoTypeByBtnManage()
    if self._billManageIndex == TeaHouseAgentBillModule.ManageBtnIndex.UNBILL_BTN then
        return TeaHouseAgentBillModule.BILL_TYPE.UNBILL
    else
        return TeaHouseAgentBillModule.BILL_TYPE.BILL
    end
end

-- 请求冠军总单数据
function TeaHouseAgentBillModule:reqWinnerBillInfo()
    TeaHouse.showLoading()
    local ucFlag = self:getBillInfoTypeByBtnManage()
    if self:isOnlyFlag() then
        ucFlag = TeaHouseAgentBillModule.BILL_TYPE.UNBILL
    end
    local reqTime = self._curBillTimeStamp - (SHOW_BILL_DAY - self._curBillTimeIndex) * 86400
    local netReqWinnerBillInfo = TeaHouse.manager.reqManager:createReq("NetReqTeaBigWinnerInfo")
    netReqWinnerBillInfo:addReqCallBack(self, self.onNetReqWinnerBillInfo)
    netReqWinnerBillInfo:start(self._curTeaid, reqTime, 0, MAX_WINNER_CNT, ucFlag, 10)
end

function TeaHouseAgentBillModule:onNetReqWinnerBillInfo(req, ctype, data)
    TeaHouse:hideLoading()
    if ctype == TeaHouse.Req.TYPE.SUCCESS then
        local nTeaID = self._curTeaid
        local winnerData = {}
        if self:isOnlyFlag() then
            for _, info in pairs(data) do
                if info.billdealed == 1 then
                    if self:getBillInfoTypeByBtnManage() == TeaHouseAgentBillModule.BILL_TYPE.BILL then
                        winnerData[#winnerData + 1] = info
                    end
                else
                    if self:getBillInfoTypeByBtnManage() == TeaHouseAgentBillModule.BILL_TYPE.UNBILL then
                        winnerData[#winnerData + 1] = info
                    end
                end
            end
        else
            winnerData = data
        end
        if self:getBillInfoTypeByBtnManage() == TeaHouseAgentBillModule.BILL_TYPE.UNBILL then
            self._unBillWinnerData[self._curBilldate] = self._unBillWinnerData[self._curBilldate] or {}
            self._unBillWinnerData[self._curBilldate][tostring(nTeaID)] = winnerData
            self:dispatchEvent({ name = self.EVENT_TEA_BILL_INFO, msg = {
                info = self._unBillWinnerData[self._curBilldate][tostring(self._curTeaid)]
            } })
        elseif self:getBillInfoTypeByBtnManage() == TeaHouseAgentBillModule.BILL_TYPE.BILL then
            self._billWinnerData[self._curBilldate] = self._billWinnerData[self._curBilldate] or {}
            self._billWinnerData[self._curBilldate][tostring(nTeaID)] = winnerData
            local sFileName = self._curTeaid .. self._sWinnerBestFileName
            TeaHouse.BillTool.writeBillInfo(winnerData, self._curBilldate, sFileName)
            self:dispatchEvent({ name = self.EVENT_TEA_BILL_INFO, msg = {
                info = self._billWinnerData[self._curBilldate][tostring(self._curTeaid)]
            } })
        end
    elseif ctype == TeaHouse.Req.TYPE.TIMEOUT then
        TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK }, "DEAL_POWER_TIMEOUT")
    end
end

--获取选择某天的最后一把战绩的时间，目前用于副领队查看自己的战绩
--function TeaHouseAgentBillModule:getCurDayLastBillTime()
--    local curUserKey = TeaHouse.BridgeData.getLobbyID() .. "_" .. TeaHouse.BridgeData.getNumberID() .. "_"
--    local fileName = cc.FileUtils:getInstance():getWritablePath() .. self._curBilldate .. "/" .. self._curTeaid ..
--                      "_" .. curUserKey .. KW_DATA_TEAHOUSE_LEDGER

--    local billFile = io.open(fileName, "rb")
--    local time = ""
--    if billFile then
--        for var in billFile:lines() do
--            local temp = json.decode(var)
--            time = temp.starttime
--            break
--        end
--        billFile:close()
--    end
--    return time
--end

----获取选择某天的所有战绩，目前用于副领队查看自己的战绩
--function TeaHouseAgentBillModule:getCurDayBillInfo()
--    local curUserKey = TeaHouse.BridgeData.getLobbyID() .. "_" .. TeaHouse.BridgeData.getNumberID() .. "_"
--    local fileName = cc.FileUtils:getInstance():getWritablePath() .. self._curBilldate .. "/" .. self._curTeaid ..
--                      "_" .. curUserKey .. KW_DATA_TEAHOUSE_LEDGER

--    local allInfo = {}
--    local billFile = io.open(fileName, "rb")
--    if billFile then
--        local time = ""
--        for var in billFile:lines() do
--            local temp = json.decode(var)
--            allInfo[#allInfo + 1] = temp
--        end
--        billFile:close()
--    end
--    return allInfo
--end

----请求副领队自己的战绩
--function TeaHouseAgentBillModule:reqSelfBillInfo()
--    TeaHouse.showLoading()

--    local parme = {}
--    local lastBillTime = self:getCurDayLastBillTime()
--    local nReqTime = self._curBillTimeStamp - (SHOW_BILL_DAY - self._curBillTimeIndex) * 86400
--    if lastBillTime and lastBillTime ~= "" then
--        nReqTime = lastBillTime
--        parme.timeType = 1              --表示从nReqTime时间开始，往后请求战绩
--    end

--    local netReqPlayerBill = TeaHouse.manager.reqManager:createReq("NetReqPlayerBill")
--    netReqPlayerBill:addReqCallBack(self, self.onReqPlayerBill)
--    netReqPlayerBill:start(self._curTeaid, nReqTime, SELF_BILL_CNT, TeaHouse.BridgeData.getLobbyID(), TeaHouse.BridgeData.getNumberID(), 30, parme)
--end

--function TeaHouseAgentBillModule:onReqPlayerBill(req, ctype)
--    TeaHouse:hideLoading()
--    if ctype == TeaHouse.Req.TYPE.SUCCESS then
--        if req._maxBillCnt < SELF_BILL_CNT then
--            self._billSelfData[self._curBilldate][tostring(self._curTeaid)] = self:getCurDayBillInfo()
--            self:dispatchEvent({ name = self.EVENT_TEA_BILL_INFO, msg = { info = self._billSelfData[self._curBilldate][tostring(self._curTeaid)] } })
--        else
--            self:reqSelfBillInfo()
--        end
--    elseif ctype == TeaHouse.Req.TYPE.FAIL then
--        TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK }, req:getMessage())
--    elseif ctype == TeaHouse.Req.TYPE.TIMEOUT then
--        TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK }, "DEAL_POWER_TIMEOUT")
--    end
--end

-- 请求冠军战绩详情
function TeaHouseAgentBillModule:reqBigWinnerDetailInfo(index)
    TeaHouse.showLoading()
    local reqTime = self._curBillTimeStamp - (SHOW_BILL_DAY - self._curBillTimeIndex) * 86400
    local curData = {}
    if self._filterWinnerData ~= nil then
        curData = self._filterWinnerData
    elseif self._billManageIndex == TeaHouseAgentBillModule.ManageBtnIndex.UNBILL_BTN then
        curData = self._unBillWinnerData[self._curBilldate][tostring(self._curTeaid)]
    elseif self._billManageIndex == TeaHouseAgentBillModule.ManageBtnIndex.BILL_BTN then
        curData = self._billWinnerData[self._curBilldate][tostring(self._curTeaid)]
    end
    if next(curData) == nil then
        TeaHouse.hideLoading()
        return
    end
    local curNumId = curData[index].nNumid
    -- 筛选账单兼容
    local payTypeTable = TeaHouse.manager.teahouseData:getPayTypeByID(TeaHouse.manager.teahouseData:getTeaNumber())
    local bigWinnerTimes = curData[index].nTotalWinnerTimes or curData[index].nWinnerTimes
    local nAATimes = curData[index].nAATimes
    self._reqDetialData = curData[index]
    local ucFlag = self._reqDetialData.ucFlag
    if self:isOnlyFlag() then
        ucFlag = TeaHouseAgentBillModule.BILL_TYPE.UNBILL
    end
    -- 设置当前冠军详单点开时的index和numid，方便在详单中完成战绩使用
    self._curBigWinnerDetailIndex = index
    self._curBigWinnerDetailNumId = curNumId
    local netReqWinnerBillBill = TeaHouse.manager.reqManager:createReq("NetReqTeaBigWinnerBill")
    netReqWinnerBillBill:addReqCallBack(self, self.onNetReqTeaBigWinnerBill)
    if ucFlag == 0 and payTypeTable and payTypeTable[1] == TeaHouse.TeaHouseProtocol.ReqSetPayType.PayType.TEA_AA then
        netReqWinnerBillBill:start(self._curTeaid, curNumId, reqTime, nAATimes, ucFlag, 10)
    elseif ucFlag == 1 then
        netReqWinnerBillBill:start(self._curTeaid, curNumId, reqTime, bigWinnerTimes + nAATimes, ucFlag, 10)
    else
        netReqWinnerBillBill:start(self._curTeaid, curNumId, reqTime, bigWinnerTimes, ucFlag, 10)
    end

end

-- 请求冠军详单回调
function TeaHouseAgentBillModule:onNetReqTeaBigWinnerBill(req, ctype, data)
    TeaHouse.hideLoading()
    if ctype == TeaHouse.Req.TYPE.SUCCESS then
        self:dispatchEvent({ name = self.EVENT_BIGWINNER_DETAIL_INFO, msg = { detailInfo = data, roomInfo = self._reqDetialData } })
    elseif ctype == TeaHouse.Req.TYPE.TIMEOUT then
        TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK }, "DEAL_POWER_TIMEOUT")
    end
end

-- 请求所有战绩
function TeaHouseAgentBillModule:reqTeaBillInfo()
    TeaHouse.showLoading()
    local reqTime = self._curBillTimeStamp - (SHOW_BILL_DAY - self._curBillTimeIndex) * 86400
    local startIndex = self._reqTableBillIndex[self._curBilldate] or 0
    local netReqTeaBillInfo = TeaHouse.manager.reqManager:createReq("NetReqAgentTeaBillInfo")
    netReqTeaBillInfo:addReqCallBack(self, self.onNetReqAgentTeaBillInfo)
    self._nLocalTableBillCnt[self._curBilldate] = self._nLocalTableBillCnt[self._curBilldate] or {}
    local tableBillCnt = self._nLocalTableBillCnt[self._curBilldate][tostring(self._curTeaid)] or 0
    local nOrderType = 0
    local lobbyID = TeaHouse.BridgeData.getLobbyID()
    if tonumber(lobbyID) == XH.LOBBY_ID.QUZHOU then
        nOrderType = 3
    end
    netReqTeaBillInfo:start(self._curTeaid, reqTime, startIndex, REQ_TABLE_BILL_CNT, tableBillCnt, 10, nOrderType)
end

function TeaHouseAgentBillModule:reqTeaBillInfoEx()
    if  self._isRequestLeftBill and self._billManageIndex == TeaHouseAgentBillModule.ManageBtnIndex.BILLFIND_BTN then
        TeaHouse.showLoading()
        TeaHouse.SysTool.performWithDelay(0.01, function()
            TeaHouse:hideLoading()
            self:reqTeaBillInfo()
        end)
        return true
    end
    return false
end

function TeaHouseAgentBillModule:onNetReqAgentTeaBillInfo(req, ctype)
    TeaHouse:hideLoading()
    if ctype == TeaHouse.Req.TYPE.SUCCESS then
        local data = req._teaBillData
        self._tableData[self._curBilldate] = self._tableData[self._curBilldate] or {}
        if not self._tableData[self._curBilldate][tostring(self._curTeaid)] then
            self._tableData[self._curBilldate][tostring(self._curTeaid)] = {}
        end
        for key, var in pairs(data) do
            table.insert(self._tableData[self._curBilldate][tostring(self._curTeaid)], key, var)
        end
        --去重
        self._tableData[self._curBilldate][tostring(self._curTeaid)] = self:removeRepeatTableBill(self._tableData[self._curBilldate][tostring(self._curTeaid)])
        --战绩按索引排序
        local sortFun = function(a, b)
            return a.nOrdinalIndex > b.nOrdinalIndex
        end
        table.sort(self._tableData[self._curBilldate][tostring(self._curTeaid)], sortFun)

        self._reqTableBillIndex[self._curBilldate] = self._reqTableBillIndex[self._curBilldate] or 0
        self._reqTableBillIndex[self._curBilldate] = self._reqTableBillIndex[self._curBilldate] + #data

        --请求剩余战绩
        self._nLocalTableBillCnt[self._curBilldate] = self._nLocalTableBillCnt[self._curBilldate] or {}
        local tableBillCnt = self._nLocalTableBillCnt[self._curBilldate][tostring(self._curTeaid)] or 0
        if next(data) and data[#data].nOrdinalIndex > 1 and data[#data].nOrdinalIndex > tableBillCnt then
            --延迟一点再请求
            TeaHouse.showLoading()
            TeaHouse.SysTool.performWithDelay(0.01, function()
                TeaHouse:hideLoading()
                self:reqTeaBillInfo()
            end)
        else
            self:dispatchEvent({ name = self.EVENT_TEA_BILL_INFO, msg = { info = self._tableData[self._curBilldate][tostring(self._curTeaid)] } })
            --请求完成，写入文件
            local tableBillData = self._tableData[self._curBilldate][tostring(self._curTeaid)]
            if next(tableBillData) and tableBillData[1].nOrdinalIndex > tableBillCnt then
                local fileCnt = 0
                local tmpList = {}
                --从最旧的开始存
                for i = #tableBillData, 1, -1 do
                    table.insert(tmpList, tableBillData[i])
                    if #tmpList % REQ_TABLE_BILL_CNT == 0 then
                        fileCnt = fileCnt + 1
                        self:writeTableBillInfo(fileCnt, tmpList, self._curBilldate)
                        tmpList = {}
                    end
                end
                if #tmpList > 0 and self._curBilldate ~= self._todayDate then
                    fileCnt = fileCnt + 1
                    self:writeTableBillInfo(fileCnt, tmpList, self._curBilldate)
                    tmpList = {}
                end
                self._nLocalTableBillCnt[self._curBilldate][tostring(self._curTeaid)] = tableBillData[1].nOrdinalIndex
            end
            if self._curBilldate ~= self._todayDate and tonumber(self._todayHour) > 5 then
                self:setIsBillDownloadFinish(self._curBilldate, true)
            end
        end
    elseif ctype == TeaHouse.Req.TYPE.TIMEOUT then
        TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK }, "REQ_BILL_TIMEOUT")
    end
end

-- 请求所有战绩中，某条战绩的详单
function TeaHouseAgentBillModule:reqTableBillDetailInfo(info)
    if not info then
        return
    end
    local gameid = info.ledgerInfo.gameID
    local appid = info.ledgerInfo.appid
    local tableid = info.ledgerInfo.tableid
    local starttime = info.ledgerInfo.starttime
    self._reqDetialData = info

    local netReqTeaBillInfo = TeaHouse.manager.reqManager:createReq("NetReqDetailBill")
    netReqTeaBillInfo:addReqCallBack(self, self.onNetTableBillDetailInfo)
    netReqTeaBillInfo:start(starttime, tableid, appid, gameid, 10)
end

function TeaHouseAgentBillModule:onNetTableBillDetailInfo(req, ctype, data)
    if ctype == TeaHouse.Req.TYPE.SUCCESS then
        self:dispatchEvent({ name = self.EVENT_DETAIL_BILL_INFO, msg = { roomInfo = self._reqDetialData, detailInfo = data.detailInfo } })
    elseif ctype == TeaHouse.Req.TYPE.TIMEOUT then
        TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK }, "DEAL_POWER_TIMEOUT")
    end
end

-- 请求计算冠军战绩
function TeaHouseAgentBillModule:reqDealBills(index)
    if not index then
        index = self._curBigWinnerDetailIndex
    else
        self._curBigWinnerDetailIndex = index
    end
    if next(self._unBillWinnerData[self._curBilldate]) == nil or next(self._unBillWinnerData[self._curBilldate][tostring(self._curTeaid)]) == nil then
        return
    end
    TeaHouse.showLoading()
    local data = self._unBillWinnerData[self._curBilldate][tostring(self._curTeaid)]
    local numId = data[index].nNumid
    local nReqTime = self._curBillTimeStamp - (SHOW_BILL_DAY - self._curBillTimeIndex) * 86400
    -- local bigWinnerTimes = data[index].nWinnerTimes
    local bigWinnerTimes = data[index].nBillCnt
    local nGameLobbyID = self:gameLobbyID()
    local nDealType = 0
    if self:isOnlyFlag() then
        nDealType = 1
    end
    local netReqDealBigWinnerBill = TeaHouse.manager.reqManager:createReq("NetReqDealBigWinnerBill")
    netReqDealBigWinnerBill:addReqCallBack(self, self.onNetDealBigWinnerBill)
    netReqDealBigWinnerBill:start(self._curTeaid, numId, nReqTime, bigWinnerTimes, nGameLobbyID, nDealType, 10)
end

-- 冠军战绩计算返回
function TeaHouseAgentBillModule:onNetDealBigWinnerBill(req, ctype)
    TeaHouse.hideLoading()
    if ctype == TeaHouse.Req.TYPE.SUCCESS then
        if self._unBillWinnerData[self._curBilldate] ~= nil then
            local unBillList = self._unBillWinnerData[self._curBilldate][tostring(self._curTeaid)]
            if unBillList ~= nil then
                local unBillitem = unBillList[self._curBigWinnerDetailIndex]
                if unBillitem then
                    if self:isOnlyFlag() then
                        unBillitem.billdealed = 1
                    else
                        unBillitem.ucFlag = TeaHouseAgentBillModule.BILL_TYPE.BILL
                    end
                end
            end
        end
        self:pushDelayData(self._curBilldate, self._curTeaid, self._curBigWinnerDetailIndex)
        self:dispatchEvent({ name = self.EVENT_DEAL_BIGWINNER, msg = { index = self._curBigWinnerDetailIndex } })
        TeaHouse.TipTool.showToast("操作成功！")
    elseif ctype == TeaHouse.Req.TYPE.TIMEOUT then
        TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK }, "DEAL_POWER_TIMEOUT")
    end
end

-- 写入文件
function TeaHouseAgentBillModule:writeTableBillInfo(fileCnt, data, billDate)
    local sCurUserKey = TeaHouse.BridgeData.getAreaID() .. "_" .. TeaHouse.BridgeData.getNumberID() .. "_"
    local sFileName = self._curTeaid .. "_" .. sCurUserKey .. fileCnt .. "_" .. KW_TEA_TABLE_LEDGER_FILE
    TeaHouse.BillTool.writeBillInfo(data, billDate, sFileName)
end

--table 去重
function TeaHouseAgentBillModule:removeRepeatTableBill(tTab)
    local tIsExit = {}
    local tTmpList = {}
    if not tTab or next(tTab) == nil then
        return tTmpList
    end
    for key, var in pairs(tTab) do
        local newKey = tostring(tTab[key].ledgerInfo.starttime) .. tostring(tTab[key].ledgerInfo.config)
        if not tIsExit[newKey] then
            tIsExit[newKey] = true
            table.insert(tTmpList, var)
        end
    end
    return tTmpList
end

--读取本地桌子战绩信息
function TeaHouseAgentBillModule:readLocalTableBillInfo()
    self._tableData[self._curBilldate] = self._tableData[self._curBilldate] or {}
    if not self._tableData[self._curBilldate][tostring(self._curTeaid)] then
        self._tableData[self._curBilldate][tostring(self._curTeaid)] = {}
    end
    if next(self._tableData[self._curBilldate][tostring(self._curTeaid)]) == nil then
        local fileCnt = 0
        local sCurUserKey = TeaHouse.BridgeData.getAreaID() .. "_" .. TeaHouse.BridgeData.getNumberID() .. "_"
        while true do
            fileCnt = fileCnt + 1
            local sFileName = self._curTeaid .. "_" .. sCurUserKey .. fileCnt .. "_" .. KW_TEA_TABLE_LEDGER_FILE
            local sFullPathFileName = cc.FileUtils:getInstance():getWritablePath() .. self._curBilldate .. "/" .. sFileName
            if not cc.FileUtils:getInstance():isFileExist(sFullPathFileName) then
                break
            end
            TeaHouse.BillTool.readTableInfoEx(sFullPathFileName, self._tableData[self._curBilldate][tostring(self._curTeaid)])
        end
        self._tableData[self._curBilldate][tostring(self._curTeaid)] = self:removeRepeatTableBill(self._tableData[self._curBilldate][tostring(self._curTeaid)])
        self._nLocalTableBillCnt[self._curBilldate] = self._nLocalTableBillCnt[self._curBilldate] or {}
        self._nLocalTableBillCnt[self._curBilldate][tostring(self._curTeaid)] = #self._tableData[self._curBilldate][tostring(self._curTeaid)]
        --战绩按索引排序
        local sortFun = function(a, b)
            return a.nOrdinalIndex > b.nOrdinalIndex
        end
        table.sort(self._tableData[self._curBilldate][tostring(self._curTeaid)], sortFun)
    end
end

-- 切换日期，比赛场，标签页时请求战绩
function TeaHouseAgentBillModule:onSwitchReqBill()
    self._searchedBillData = nil
    -- 请求战绩
    if self._billManageIndex == TeaHouseAgentBillModule.ManageBtnIndex.UNBILL_BTN then
        self._unBillWinnerData[self._curBilldate] = self._unBillWinnerData[self._curBilldate] or {}
        if next(self._unBillWinnerData[self._curBilldate]) == nil or next(self._unBillWinnerData[self._curBilldate][tostring(self._curTeaid)]) == nil then
            self:reqWinnerBillInfo()
        else
            self:dispatchEvent({ name = self.EVENT_TEA_BILL_INFO, msg = { info = self._unBillWinnerData[self._curBilldate][tostring(self._curTeaid)] } })
        end
    elseif self._billManageIndex == TeaHouseAgentBillModule.ManageBtnIndex.BILL_BTN then
        self._billWinnerData[self._curBilldate] = self._billWinnerData[self._curBilldate] or {}
        if next(self._billWinnerData[self._curBilldate]) == nil or next(self._billWinnerData[self._curBilldate][tostring(self._curTeaid)]) == nil then
            self:reqWinnerBillInfo()
        else
            self:resortTab()
            self:dispatchEvent({ name = self.EVENT_TEA_BILL_INFO, msg = {
                info = self._billWinnerData[self._curBilldate][tostring(self._curTeaid)]
            } })
        end
    elseif self._billManageIndex == TeaHouseAgentBillModule.ManageBtnIndex.SELFBILL_BTN then
        --        self._billSelfData[self._curBilldate] = self._billSelfData[self._curBilldate] or {}
        --        if next(self._billSelfData[self._curBilldate]) == nil or next(self._billSelfData[self._curBilldate][tostring(self._curTeaid)]) == nil then
        --            self:reqSelfBillInfo()
        --        else
        --            self:dispatchEvent({ name = self.EVENT_TEA_BILL_INFO, msg = {
        --                info = self._billSelfData[self._curBilldate][tostring(self._curTeaid)]
        --            } })
        --        end
        self:onSearchBill(TeaHouse.BridgeData.getNumberID(), true)
    else
        --战绩查询从服务端拉取数据，存本地
        self._bSearchBillStatus = false
        self._tableData[self._curBilldate] = self._tableData[self._curBilldate] or {}
        if not self._tableData[self._curBilldate][tostring(self._curTeaid)] or next(self._tableData[self._curBilldate][tostring(self._curTeaid)]) == nil then
            --先读取已经拉取的数据
            self:readLocalTableBillInfo()
        end
        local billDownloadFinish = self:isBillDownloadFinish(self._curBilldate)
        if not billDownloadFinish then
            self._reqTableBillIndex[self._curBilldate] = 0
            self:reqTeaBillInfo()
        else
            --之前日期的战绩数据拉取完了的，直接展示
            self:dispatchEvent({ name = self.EVENT_TEA_BILL_INFO, msg = {
                info = self._tableData[self._curBilldate][tostring(self._curTeaid)]
            } })
        end
    end
end

-- 切换标签页
function TeaHouseAgentBillModule:onChangeTab(tabType)
    -- 删除延缓删除的数据
    self:removeDelayData()
    self._billManageIndex = tabType
    self._bSearchBillStatus = false

    --拉取战绩
    self:onSwitchReqBill()
end

-- 切换时间
function TeaHouseAgentBillModule:onChangeDate(index)
    if self._curBillTimeIndex == index then
        return
    end
    -- 删除延缓删除的数据
    self:removeDelayData()

    self._curBillTimeIndex = index
    self._curBilldate = os.date("%Y-%m-%d", self._curBillTimeStamp - (SHOW_BILL_DAY - index) * 86400)
    self._costCard[self._curBilldate] = self._costCard[self._curBilldate] or {}
    -- 请求当天消耗
    self:reqTeaHouseCost()
    self:onSwitchReqBill()
end

-- 切换比赛场
function TeaHouseAgentBillModule:onChangeTeaHouse(index)
    if self._teaHouseInfoIndex == index then
        return
    end
    -- 删除延缓删除的数据
    self:removeDelayData()

    self._teaHouseInfoIndex = index
    self._curTeaid = self._teaHouseInfo[self._teaHouseInfoIndex].nTeaid
    self:onSwitchReqBill()
end

function TeaHouseAgentBillModule:pushDelayData(sDate, nTeaID, nIndex)
    local sKey = sDate .. '/' .. tostring(nTeaID)
    self._deleteDelayTab['key'] = self._deleteDelayTab['key'] or {}
    self._deleteDelayTab[sKey] = self._deleteDelayTab[sKey] or {}
    self._deleteDelayTab['key'][sKey] = sKey
    table.insert(self._deleteDelayTab[sKey], nIndex)
end

-- 删除延缓删除的数据
function TeaHouseAgentBillModule:removeDelayData()
    if self._deleteDelayTab['key'] == nil then
        return
    end
    self._isNeedResortTab[self._curBilldate .. tostring(self._curTeaid)] = true
    for k in pairs(self._deleteDelayTab['key']) do
        local nPos = string.find(k, '/')
        local sDate = string.sub(k, 0, nPos - 1)
        local sTeaid = string.sub(k, nPos + 1)
        self._unBillWinnerData[sDate] = self._unBillWinnerData[sDate] or {}
        -- 按从小到大的顺序排，因为删除的时候是倒着删除的
        table.sort(self._deleteDelayTab[k])
        local isMerge = true
        self._billWinnerData[sDate] = self._billWinnerData[sDate] or {}
        if next(self._billWinnerData[sDate]) == nil or next(self._billWinnerData[sDate][tostring(sTeaid)]) == nil then
            isMerge = false
        end
        local billList = self._billWinnerData[sDate][tostring(sTeaid)]
        for nIndex = #(self._deleteDelayTab[k]), 1, -1 do
            local index = self._deleteDelayTab[k][nIndex]
            local unBillItem = self._unBillWinnerData[sDate][sTeaid][index]
            if unBillItem ~= nil then
                table.remove(self._unBillWinnerData[sDate][sTeaid], index)
                if isMerge and billList ~= nil then
                    local isFound = false
                    for _, billItem in pairs(billList) do
                        if billItem.nNumid == unBillItem.nNumid then
                            isFound = true
                            billItem.nCostCard = billItem.nCostCard + unBillItem.nCostCard
                            billItem.nWinnerTimes = billItem.nWinnerTimes + unBillItem.nWinnerTimes
                            billItem.nAATimes = billItem.nAATimes + unBillItem.nAATimes
                            billItem.nScore = billItem.nScore + unBillItem.nScore
                            if billItem.fee and unBillItem.fee then
                                billItem.fee = billItem.fee + unBillItem.fee
                            end
                            break
                        end
                    end
                    if not isFound then
                        table.insert(billList, unBillItem)
                    end
                end
            end
        end
    end
    self._deleteDelayTab = {}
end

-- 对已完成战绩排序
function TeaHouseAgentBillModule:resortTab()
    if self._isNeedResortTab[self._curBilldate .. tostring(self._curTeaid)] then
        local fSortFun = function(a, b)
            return b.nWinnerTimes < a.nWinnerTimes
        end
        self._isNeedResortTab[self._curBilldate .. tostring(self._curTeaid)] = false
        table.sort(self._billWinnerData[self._curBilldate][tostring(self._curTeaid)], fSortFun)
    end
end

function TeaHouseAgentBillModule:onSearchBill(searchString, isSearch)
    self._tableData[self._curBilldate] = self._tableData[self._curBilldate] or {}
    local billInfo = self._tableData[self._curBilldate][tostring(self._curTeaid)]
    if not isSearch or not searchString or searchString == "" then
        self._searchedBillData = nil
        if self:isOpenScoreFilter() then
            self:onScoreFilterBill(self:getNumericScoreFilter())
        else
            self:dispatchEvent({ name = self.EVENT_TEA_BILL_INFO, msg = { info = billInfo } })
            self._costCard[self._curBilldate] = self._costCard[self._curBilldate] or {}
            self:dispatchEvent({ name = self.EVENT_TEAHOUSE_COST_UPDATE, msg = {
                todayCost = self._costCard[self._curBilldate][self._curTeaid] or 0
            } })
        end
        return
    end
    local retBillInfos = {}
    local roomCardCost = 0
    for _, bill in pairs(billInfo) do
        if self:isInFilter(bill.ledgerInfo, searchString) then
            table.insert(retBillInfos, bill)
            local nUsePropCnt = bill.ledgerInfo.nUsePropCnt
            if bill.ledgerInfo.propsid == TeaHouse.BridgeData.getSmallRoomCardID() then
                nUsePropCnt = nUsePropCnt / TeaHouse.BridgeData.getSmallRoomCardRatio()
            end
            roomCardCost = roomCardCost + nUsePropCnt
        end
    end
    --去重
    retBillInfos = self:removeRepeatTableBill(retBillInfos)
    --战绩按索引排序
    local sortFun = function(a, b)
        return a.nOrdinalIndex > b.nOrdinalIndex
    end
    table.sort(retBillInfos, sortFun)
    self._searchedBillData = retBillInfos
    if self:isOpenScoreFilter() then
        self:onScoreFilterBill(self:getNumericScoreFilter())
    else
        self:dispatchEvent({ name = self.EVENT_TEAHOUSE_COST_UPDATE, msg = { todayCost = roomCardCost } })
        self:dispatchEvent({ name = self.EVENT_TEA_BILL_INFO, msg = { info = retBillInfos } })
    end
end

function TeaHouseAgentBillModule:isInFilter(ledgerInfo, searchString)
    -- TODO
    if string.find(ledgerInfo.config, searchString, 1, true) then
        return true
    end
    for i = 1, ledgerInfo.playercnt do
        local numID = tostring(ledgerInfo.playerInfos[i].numid)
        if #numID >= 2 and string.find(numID, searchString, 1, true) then
            return true
        end
    end
    for i = 1, ledgerInfo.playercnt do
        if string.find(ledgerInfo.playerInfos[i].nickname, searchString, 1, true) then
            return true
        end
    end
    return false
end

function TeaHouseAgentBillModule:onScoreFilterBill(minScore, maxScore)
    if minScore > maxScore and maxScore >= 0 then
        TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK }, "冠军分数范围选择有误")
        return
    end

    -- 区分标签页
    local billInfo
    if self._billManageIndex == TeaHouseAgentBillModule.ManageBtnIndex.UNBILL_BTN then
        self:getSelectTeaBillInfo(minScore, maxScore, 1)
        return
    elseif self._billManageIndex == TeaHouseAgentBillModule.ManageBtnIndex.BILL_BTN then
        self:getSelectTeaBillInfo(minScore, maxScore, 1)
        return
    else
        if self._searchedBillData ~= nil then
            billInfo = self._searchedBillData
        else
            self._tableData[self._curBilldate] = self._tableData[self._curBilldate] or {}
            billInfo = self._tableData[self._curBilldate][tostring(self._curTeaid)]
        end
    end

    if not minScore or not maxScore then
        self:onSwitchReqBill()
        return
    end

    local retBillInfos = {}
    local roomCardCost = 0
    for _, bill in pairs(billInfo) do
        local billScore = self:getMaxScore(bill)
        if billScore >= minScore and (billScore <= maxScore or maxScore < 0) then
            table.insert(retBillInfos, bill)
            roomCardCost = roomCardCost + bill.ledgerInfo.nUsePropCnt
        end
    end
    --去重
    retBillInfos = self:removeRepeatTableBill(retBillInfos)
    --战绩按索引排序
    local sortFun = function(a, b)
        return a.nOrdinalIndex > b.nOrdinalIndex
    end
    table.sort(retBillInfos, sortFun)
    self:dispatchEvent({ name = self.EVENT_TEAHOUSE_COST_UPDATE, msg = { todayCost = roomCardCost } })
    self:dispatchEvent({ name = self.EVENT_TEA_BILL_INFO, msg = { info = retBillInfos } })
end

-- 拉取筛选结果
function TeaHouseAgentBillModule:getSelectTeaBillInfo(minScore, maxScore, nPlayerType)
    local nowTime = os.time()
    local timeTable = {
        day = os.date("%d", nowTime) - 7 + self._curBillTimeIndex,
        month = os.date("%m", nowTime),
        year = os.date("%Y", nowTime),
        hour = 0,
        minute = 0,
        second = 0
    }
    local startDay = os.time(timeTable)

    timeTable = {
        day = os.date("%d", nowTime) - 6 + self._curBillTimeIndex,
        month = os.date("%m", nowTime),
        year = os.date("%Y", nowTime),
        hour = 0,
        minute = 0,
        second = 0
    }
    local endDay = os.time(timeTable)

    local teahouseData = TeaHouse.manager.teahouseData
    local netReqSelectTeaBillInfo = TeaHouse.manager.reqManager:createReq("NetReqSelectTeaBillInfo")
    netReqSelectTeaBillInfo:addReqCallBack(self, self.onNetReqSelectTeaBillInfo)
    netReqSelectTeaBillInfo:start(teahouseData:getTeaNumber(), 0, minScore, maxScore, 0, startDay, endDay, nPlayerType, 15)
end

function TeaHouseAgentBillModule:onNetReqSelectTeaBillInfo(req, type, data)
    if type == TeaHouse.Req.TYPE.SUCCESS then
        local curData = {}
        if self._billManageIndex == TeaHouseAgentBillModule.ManageBtnIndex.UNBILL_BTN then
            curData = self._unBillWinnerData[self._curBilldate][tostring(self._curTeaid)]
        elseif self._billManageIndex == TeaHouseAgentBillModule.ManageBtnIndex.BILL_BTN then
            curData = self._billWinnerData[self._curBilldate][tostring(self._curTeaid)]
        end
        local retBillInfos = {}
        for _,inf in ipairs(data) do
            for _,v in ipairs(curData) do
                if inf.numid == v.nNumid then
                    local ret = clone(v)
                    ret.nScore = inf.nBigWinScore
                    ret.nTotalWinnerTimes = ret.nWinnerTimes
                    ret.nWinnerTimes = inf.bigWinCnt
                    table.insert(retBillInfos, ret)
                    break
                end
            end
        end
        local sortFun = function(a, b)
            return a.nScore > b.nScore
        end
        table.sort(retBillInfos, sortFun)
        self._filterWinnerData = retBillInfos
        self:dispatchEvent({ name = self.EVENT_TEA_BILL_INFO, msg = { info = retBillInfos } })
    elseif type == TeaHouse.Req.TYPE.FAIL then
        TeaHouse.TipTool.showToast("获取数据失败")
    elseif type == TeaHouse.Req.TYPE.TIMEOUT then
        TeaHouse.TipTool.showToast("获取数据超时")
    end
end

-- 找出冠军的分数
function TeaHouseAgentBillModule:getMaxScore(ledgerInfo)
    local maxScore = 0
    local info = ledgerInfo.ledgerInfo.playerInfos
    for i = 1, #info do
        if info[i].totalscore > maxScore then
            maxScore = info[i].totalscore
        end
    end
    return maxScore
end

function TeaHouseAgentBillModule:setScoreFilter(minScore, maxScore)
    self._minScore = minScore
    self._maxScore = maxScore
    self:dispatchEvent({ name = self.EVENT_CHANGE_SCORE_FILTER, msg = {
        minScore = minScore,
        maxScore = maxScore
    } })
end

function TeaHouseAgentBillModule:getScoreFilter()
    if self._minScore == nil or self._maxScore == nil then
        self._minScore = "0"
        self._maxScore = "不限"
    end
    return self._minScore, self._maxScore
end

function TeaHouseAgentBillModule:getNumericScoreFilter()
    local strMax, strMin = self:getScoreFilter()
    local minScore = tonumber(strMax)
    local maxScore = tonumber(strMin)
    if maxScore == nil then
        maxScore = -1
    end
    return minScore, maxScore
end

function TeaHouseAgentBillModule:clearScoreFilterCache()
    self._maxScore = nil
    self._minScore = nil
    self._filterWinnerData = nil
end

return TeaHouseAgentBillModulel�