local ReqPlayerBill = class("ReqPlayerBill", XH.ReqProtocol)

local KW_DATA_HALL_LEDGER = "hallLedger.lua"
function ReqPlayerBill:ctor()
    ReqPlayerBill.super.ctor(self)
    self._maxBillCnt = -1
    self._curBillCnt = 0
    self._playerData = {}
    self._time = 0
    self._areaid = 0
    self._numberid = 0
end

function ReqPlayerBill:start(param)
    param = param or {}
    local timeoutTime = param.timeoutTime or 15
    if ReqPlayerBill.super.start(self ,timeoutTime) == false then
        return
    end


    local nDay = param.nDay or 0
    local nCnt = param.nCnt or 0
    local areaid = param.areaid or 0
    local numberid = param.numberid or 0
    local flag = param.flag or 0
    local gameid = param.gameid or 0
    local startIndex = param.startIndex or 0

    local reqBoxLedger = XH.ActiveProtocol.ReqBoxLedger:new()
    reqBoxLedger.nAskid = 0
    reqBoxLedger.nDay = nDay
    reqBoxLedger.nCnt = nCnt
    reqBoxLedger.nFlag = flag
    reqBoxLedger.nGameid = gameid
    reqBoxLedger.nNumid = numberid
    reqBoxLedger.nAreaid = areaid
    reqBoxLedger.nStartIndex = startIndex
    self._nCnt = nCnt
    self._areaid = areaid
    self._numberid = numberid
    self._time = nDay
    self._flag = flag
    self._gameid = gameid
    print("reqBoxLedger.nStartIndex = "..reqBoxLedger.nStartIndex)

    self:sendMsg(reqBoxLedger, XH.ActiveProtocol.RespBoxLedger, XH.areaData:getSrsGroupID(), 0)
end

function ReqPlayerBill:onMsgReceive(msgData)
    if self._flag == XH.ActiveProtocol.ReqBoxLedger.REQFLAG.RPFG_DAYCNT then
        local retData = {}
        retData.totalCnt = msgData.nTotalCnt
        retData.gameid = self._gameid
        self:success(retData)
    else
        if msgData.nTotalCnt == 0 then
            self:success()
        end
        if msgData.nTotalCnt > self._maxBillCnt and msgData.nTotalCnt > 0 then
            self._maxBillCnt = msgData.nTotalCnt
        end
        if self._maxBillCnt > 0 then
            local cloneInfo = clone(msgData.ledgerInfo)
            cloneInfo.nEndTime = msgData.nEndTime or 0
            cloneInfo.ordinalIndex = msgData.ordinalIndex
            if cloneInfo.starttime ~= 0 then
                self._playerData[#self._playerData + 1] = clone(cloneInfo)
                self._curBillCnt = self._curBillCnt + 1
            end
        end
        if msgData.nCurrentCnt == msgData.nTotalCnt then
            if next(self._playerData) ~= nil then
                local sTime = os.date("%Y-%m-%d", self._time)
                if not cc.FileUtils:getInstance():isDirectoryExist(cc.FileUtils:getInstance():getWritablePath() .. sTime) then
                    cc.FileUtils:getInstance():createDirectory(cc.FileUtils:getInstance():getWritablePath() .. sTime)
                end
                local keyStr = ReqPlayerBill.getFileKeyByLobbyIdAndNumberId(XH.areaData:getLobbyID(), self._numberid)
                local file = io.open(cc.FileUtils:getInstance():getWritablePath() .. sTime .. "/" .. keyStr, "ab+")
                if file then
                    for _, var in pairs(self._playerData) do
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
end

function ReqPlayerBill.getFileKeyByLobbyIdAndNumberId(lobbyid, numberid)
    return lobbyid .. "_" .. numberid .."_" .. KW_DATA_HALL_LEDGER
end

return ReqPlayerBill�