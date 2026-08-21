---@class NetReqTeaBigWinnerBill : NetReq
---请求冠军详单
local NetReqTeaBigWinnerBill = class("NetReqTeaBigWinnerBill", TeaHouse.NetReq)

function NetReqTeaBigWinnerBill:ctor()
    NetReqTeaBigWinnerBill.super.ctor(self)
    self._maxBillCnt = -1
    self._curBillCnt = 0
    self._winnerData = {}
    self._nAskid = 0
    self._ucFlag = 0
end

function NetReqTeaBigWinnerBill:start(nTeaid, nNumid, nDay, nCnt, ucFlag, timeoutTime)
    if NetReqTeaBigWinnerBill.super.start(self, timeoutTime) == false then
        return
    end
    self._nTeaid = nTeaid
    local reqTeaBigWinnerBill = TeaHouse.ActiveProtocol.ReqTeaBigWinnerBill:new()
    self._nAskid = os.time()
    reqTeaBigWinnerBill.nAskid = self._nAskid
    reqTeaBigWinnerBill.nTeaid = nTeaid
    reqTeaBigWinnerBill.nNumid = nNumid
    reqTeaBigWinnerBill.nDay = nDay
    reqTeaBigWinnerBill.nCnt = nCnt
    ucFlag = ucFlag or 0
    reqTeaBigWinnerBill.ucFlag = ucFlag
    self._ucFlag = ucFlag
    self:sendPacket(reqTeaBigWinnerBill, TeaHouse.ActiveProtocol.RespTeaBigWinnerBill, self.onRespTeaBigWinnerBill)
end

function NetReqTeaBigWinnerBill:onRespTeaBigWinnerBill(msgData)
    if msgData.nAskid ~= self._nAskid then
        return
    end
    if self._maxBillCnt == -1 then
        self._maxBillCnt = msgData.nCnt
    end
    if self._maxBillCnt > 0 then
        local tempBigWinnerBill = {}
        tempBigWinnerBill.nTableid = string.format("%06d", msgData.nTableid)
        tempBigWinnerBill.nTime = msgData.nTime
        tempBigWinnerBill.nDetailCnt = msgData.nDetailCnt
        tempBigWinnerBill.nFullCnt = msgData.nFullCnt
        tempBigWinnerBill.nNumid = msgData.nNumid
        tempBigWinnerBill.nPlayerCnt = msgData.nPlayerCnt
        tempBigWinnerBill.szNickName = msgData.szNickName
        tempBigWinnerBill.nBillOperator = msgData.nBillOperator
        tempBigWinnerBill.nScore = msgData.nScore
        tempBigWinnerBill.ucFlag = self._ucFlag

        self._winnerData[#self._winnerData + 1] = clone(tempBigWinnerBill)
        self._curBillCnt = self._curBillCnt + 1
    end
    if self._curBillCnt == self._maxBillCnt then
        -- 按时间排序
        table.sort(self._winnerData, function(a, b)
            return b.nTime < a.nTime
        end)
        self:success(self._winnerData)
    end
end

return NetReqTeaBigWinnerBillR	