local NetReqPlayerBill = class("NetReqPlayerBill", TeaHouse.NetReq)
local KW_DATA_TEAHOUSE_LEDGER = "teaHouseLedger.lua"
--领队/用户，玩家共用
function NetReqPlayerBill:ctor()
    NetReqPlayerBill.super.ctor(self)
    self._maxBillCnt = -1
    self._curBillCnt = 0
    self._playerData = {}
    self._nTeaid = 0
    self._time = 0
    self._curUserKey = ""
end

function NetReqPlayerBill:start(nTeaid, nDay, nCnt, areaid, numberid, timeoutTime)
    if not NetReqPlayerBill.super.start(self, timeoutTime) then
        return
    end

    local reqTeaPlayerLedger = TeaHouse.ActiveProtocol.ReqTeaPlayerLedger:new()
    reqTeaPlayerLedger.nAskid = 0
    reqTeaPlayerLedger.nTeaid = nTeaid
    reqTeaPlayerLedger.nDay = nDay
    reqTeaPlayerLedger.nCnt = nCnt
    reqTeaPlayerLedger.nNumid = numberid
    self._curUserKey = areaid .. "_" .. numberid .. "_"
    self._nTeaid = nTeaid
    self._time = nDay
    self:sendPacket(reqTeaPlayerLedger, TeaHouse.ActiveProtocol.RespTeaPlayerLedger, self.onRespTeaPlayerLedger)
end

function NetReqPlayerBill:onRespTeaPlayerLedger(msgData)
    if self._maxBillCnt == -1 then
        self._maxBillCnt = msgData.nCnt
    end
    if self._maxBillCnt > 0 then
        local cloneInfo = clone(msgData.ledgerInfo)
        cloneInfo.nEndTime = msgData.nEndTime or 0
        self._playerData[#self._playerData + 1] = clone(cloneInfo)
        self._curBillCnt = self._curBillCnt + 1
    end
    if self._curBillCnt == self._maxBillCnt then
        if next(self._playerData) ~= nil then
            local sTime = os.date("%Y-%m-%d", self._time)
            if not cc.FileUtils:getInstance():isDirectoryExist(cc.FileUtils:getInstance():getWritablePath() .. sTime) then
                cc.FileUtils:getInstance():createDirectory(cc.FileUtils:getInstance():getWritablePath() .. sTime)
            end
            local file = io.open(cc.FileUtils:getInstance():getWritablePath() .. sTime .. "/" .. self._nTeaid .. "_" .. self._curUserKey .. KW_DATA_TEAHOUSE_LEDGER, "ab+")
            if file then
                for key, var in pairs(self._playerData) do
                    local wirtjson = json.encode(var)
                    if type(var) == "table" then
                        file:write(wirtjson .. "\n")
                        file:flush()
                    end
                end
                file:close()
            end
        end
        self:success()
    end
end

return NetReqPlayerBill