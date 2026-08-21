local ReqCurPlayerBill = class("ReqCurPlayerBill", XH.ReqProtocol)

-- 请求单个数量的账单
function ReqCurPlayerBill:ctor()
    ReqCurPlayerBill.super.ctor(self)
end

function ReqCurPlayerBill:start(param)
    param = param or {}
    local timeoutTime = param.timeoutTime or 15
    if ReqCurPlayerBill.super.start(self ,timeoutTime) == false then
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

function ReqCurPlayerBill:onMsgReceive(msgData)
    local data = clone(msgData.ledgerInfo)
    self:success(data)
end

return ReqCurPlayerBill�