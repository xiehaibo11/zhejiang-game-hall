local CURRENT_MOUDLE_NAME = ...
local CellProtocol = import("..GameTea.CellProtocol",CURRENT_MOUDLE_NAME)
local CellReqLedger = class("CellReqLedger", CellProtocol)

local KW_DATA_BOX_ROOM_LEDGER = "KW_DATA_BOX_ROOM_LEDGER.lua"
local KW_DATA_BOX_ROOM_LEDGER_NEW_ITEM = "KW_DATA_BOX_ROOM_LEDGER_NEW_ITEM.lua"
local KW_DATA_TEAHOUSE_LEDGER = "teaHouseLedger.lua"

function CellReqLedger:ctor()
    CellReqLedger.super.ctor(self)
    self._gameID = 0
    self._askID = 0
    self._xyCount = 0
    self._ledgerInfos = {}
    self._curUserKey = ""
    self._teaLedgerInfos = {}
end

function CellReqLedger:start(startidx,cnt,gameid,areaid,numberid,timeoutTime)
    if CellReqLedger.super.start(self,timeoutTime) == false then
        return
    end
    self._curUserKey = areaid.."_"..numberid.."_"
    self._gameID = gameid
    self._askID = os.time()

    local cellReqLedgerData = XH.bf.ActiveXY.ReqLedger:new()
    cellReqLedgerData.askid = self._askID
    cellReqLedgerData.gameid = self._gameID
    cellReqLedgerData.startidx = startidx
    cellReqLedgerData.cnt = cnt

    Game.Interface.addProtocolScriptFuncByObj(self,self.onRespLedger,XH.bf.ProcessIDList and XH.bf.ProcessIDList.Active or 30)
    Game.Interface.addProtocolScriptFuncByObj(self,self.onRespBatch,XH.bf.ProcessIDList and XH.bf.ProcessIDList.Active or 30)
    Game.Interface.sendMessage(cellReqLedgerData,0,XH.bf.ProcessIDList and XH.bf.ProcessIDList.Active or 30)
end

function CellReqLedger:onRespLedger(XYID, buff, len)
    if XYID ~= XH.bf.ActiveXY.RespLedger.XY_ID then
        return
    end

    local tRespLedgerData = XH.bf.ActiveXY.RespLedger:new()
    tRespLedgerData:bistream(buff, len)
    if tRespLedgerData.askid ~= self._askID then
    	return
    end
    local cloneInfo = clone(tRespLedgerData.ledgerInfo)
    self._ledgerInfos[#self._ledgerInfos + 1] = clone(cloneInfo)
    --账单分离过渡版本（防止未更新大厅导致账单找不到）
    if KW_TEAHOUSE_ROOM_MODE_VALUE and cloneInfo.roommode == KW_TEAHOUSE_ROOM_MODE_VALUE then
        self._teaLedgerInfos[#self._teaLedgerInfos + 1] = clone(cloneInfo)
    end

end

function CellReqLedger:onRespBatch(XYID, buff, len)
    if XYID ~= XH.bf.ActiveXY.BatchProtocol.XY_ID then
        return
    end

    local tBatchProtocolData = XH.bf.ActiveXY.BatchProtocol:new()
    tBatchProtocolData:bistream(buff, len)

    if tBatchProtocolData.m_flag == XH.bf.ActiveXY.BatchProtocol.FLAG.START and tBatchProtocolData.m_xyid == XH.bf.ActiveXY.RespLedger.XY_ID then
        self._xyCount = tBatchProtocolData.m_count
    end
	if not XH.GT.getWritablePath then
		XH.GT.getWritablePath = function()
			return cc.FileUtils:getInstance():getWritablePath()
		end
	end
    if not cc.FileUtils:getInstance():isDirectoryExist(XH.GT.getWritablePath()) then
        cc.FileUtils:getInstance():createDirectory(XH.GT.getWritablePath())
    end
    if tBatchProtocolData.m_flag == XH.bf.ActiveXY.BatchProtocol.FLAG.END and tBatchProtocolData.m_xyid == XH.bf.ActiveXY.RespLedger.XY_ID then

        local bHaveNewItem = true
        if #self._ledgerInfos > 0 then
            --处理 保存数据在本地
            local file = io.open(XH.GT.getWritablePath()..self._curUserKey..self._gameID..KW_DATA_BOX_ROOM_LEDGER, "ab+")
            for i = 1 , self._xyCount do
                local wirtjson = json.encode(self._ledgerInfos[i])--转换成json格式
                if file and type(self._ledgerInfos[i]) == "table" then
                    file:write(wirtjson .. "\n")
                    file:flush()
                end
            end
            io.close()

            --判断是否有新的账单，是否要重新刷新
            local fileRead = io.open(XH.GT.getWritablePath()..self._curUserKey..self._gameID..KW_DATA_BOX_ROOM_LEDGER_NEW_ITEM, "r")
            if fileRead then
                local readjson= fileRead:read("*l")
                if readjson then
                    if json.decode(readjson).starttime == self._ledgerInfos[#self._ledgerInfos].starttime 
                        and json.decode(readjson).finishgames == self._ledgerInfos[#self._ledgerInfos].finishgames then
                        bHaveNewItem = false
                    end
                end
            end
            io.close()

            if bHaveNewItem then
                local file = io.open(XH.GT.getWritablePath()..self._curUserKey..self._gameID..KW_DATA_BOX_ROOM_LEDGER_NEW_ITEM, "wb")
                local wirtjson = json.encode(self._ledgerInfos[#self._ledgerInfos])--转换成json格式
                if file and type(self._ledgerInfos[#self._ledgerInfos]) == "table" then
                    file:write(wirtjson .. "\n")
                    file:flush()
                end
                io.close()
            end
        else
            bHaveNewItem = false
        end

        if #self._teaLedgerInfos > 0 then
            for i = 1,#self._teaLedgerInfos do
                if self._teaLedgerInfos[i].tid ~= nil then
                    local nTime = os.date("%Y-%m-%d",self._teaLedgerInfos[i].starttime)
                    if not cc.FileUtils:getInstance():isDirectoryExist(cc.FileUtils:getInstance():getWritablePath()..nTime) then
                        cc.FileUtils:getInstance():createDirectory(cc.FileUtils:getInstance():getWritablePath()..nTime)
                    end
                    local file = io.open(cc.FileUtils:getInstance():getWritablePath()..nTime.."/"..self._teaLedgerInfos[i].tid.."_"..self._curUserKey..KW_DATA_TEAHOUSE_LEDGER, "ab+")
                    local wirtjson = json.encode(self._teaLedgerInfos[i])
                    if file and type(self._teaLedgerInfos[i]) == "table" then
                        file:write(wirtjson .. "\n")
                        file:flush()
                        file:close()
                    end
                end
            end
        end

        XH.GT.removeProtocolScriptFuncByObj(self,self.onRespLedger)  
        self:success(bHaveNewItem)
    end
end

    
return CellReqLedger