---@class NetReqTeaBigWinnerInfo : NetReq
---请求冠军总单
local NetReqTeaBigWinnerInfo = class("NetReqTeaBigWinnerInfo", TeaHouse.NetReq)

function NetReqTeaBigWinnerInfo:ctor()
    NetReqTeaBigWinnerInfo.super.ctor(self)

    self._maxBillCnt = -1
    self._curBillCnt = 0
    self._winnerData = {}
    self._billInfoDate = 0
    self._nTeaid = 0
    self._nAskid = 0
    self._ucFlag = 0
end

function NetReqTeaBigWinnerInfo:start(nTeaid, nDay, nPlayerIndex, nPlayerCnt, ucFlag, timeoutTime)
    if NetReqTeaBigWinnerInfo.super.start(self, timeoutTime) == false then
        return
    end
    self._nTeaid = nTeaid
    local reqTeaBigWinnerInfo = TeaHouse.ActiveProtocol.ReqTeaBigWinnerInfo:new()
    self._nAskid = os.time()
    reqTeaBigWinnerInfo.nAskid = self._nAskid
    reqTeaBigWinnerInfo.nTeaid = nTeaid
    reqTeaBigWinnerInfo.nDay = nDay
    reqTeaBigWinnerInfo.nPlayerIndex = nPlayerIndex
    reqTeaBigWinnerInfo.nPlayerCnt = nPlayerCnt
    ucFlag = ucFlag or 0
    reqTeaBigWinnerInfo.ucFlag = ucFlag
    self._ucFlag = ucFlag
    self:sendPacket(reqTeaBigWinnerInfo, TeaHouse.ActiveProtocol.RespTeaBigWinnerInfo, self.onRespTeaBigWinnerInfo)
end

function NetReqTeaBigWinnerInfo:onRespTeaBigWinnerInfo(msgData)
    if msgData.nAskid ~= self._nAskid then
        return
    end
    if self._maxBillCnt == -1 then
        self._maxBillCnt = msgData.nPlayerCnt
    end
    if self._maxBillCnt > 0 then
        if msgData.nAreaid == TeaHouse.BridgeData.getAreaID() then
            self._billInfoDate = msgData.nTimer
            local tempBigWinnerInfo = {}
            tempBigWinnerInfo.nNumid = msgData.nNumid
            tempBigWinnerInfo.nTeaid = self._nTeaid
            tempBigWinnerInfo.nCostCard = msgData.nCostCard
            tempBigWinnerInfo.nWinnerTimes = msgData.nWinnerTimes
            tempBigWinnerInfo.nScore = msgData.nScore
            tempBigWinnerInfo.szUrl = msgData.szUrl
            tempBigWinnerInfo.nTimer = msgData.nTimer
            tempBigWinnerInfo.szNickName = msgData.szNickName
            tempBigWinnerInfo.nTotalBillOperator = msgData.nTotalBillOperator
            tempBigWinnerInfo.nRefreshTime = msgData.nRefreshTime
            tempBigWinnerInfo.nPropsid = msgData.propsid or 0
            tempBigWinnerInfo.fee = msgData.fee or 0
            tempBigWinnerInfo.billdealed = msgData.billdealed
            tempBigWinnerInfo.nTotalTimes = msgData.nTotalTimes
            tempBigWinnerInfo.nPlayerCnt = msgData.nPlayerCnt
            tempBigWinnerInfo.nBillCnt = msgData.nBillCnt
            tempBigWinnerInfo.nAATimes = msgData.nAATimes
            tempBigWinnerInfo.ucFlag = self._ucFlag

            self._winnerData[#self._winnerData + 1] = clone(tempBigWinnerInfo)
        end
        self._curBillCnt = self._curBillCnt + 1
    end
    if self._curBillCnt == self._maxBillCnt then
        --如果是新账单按冠军次数排序
        table.sort(self._winnerData, function(a, b)
            return b.nWinnerTimes < a.nWinnerTimes
        end)
        self:success(self._winnerData)
    end
end

return NetReqTeaBigWinnerInfo