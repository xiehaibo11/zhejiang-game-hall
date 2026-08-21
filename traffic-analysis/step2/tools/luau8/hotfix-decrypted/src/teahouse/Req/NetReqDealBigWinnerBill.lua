---@class NetReqDealBigWinnerBill : NetReq
local NetReqDealBigWinnerBill = class("NetReqDealBigWinnerBill", TeaHouse.NetReq)

--领队/用户用
function NetReqDealBigWinnerBill:ctor()
    NetReqDealBigWinnerBill.super.ctor(self)
    self._maxTableCnt = -1
    self._curTableCnt = 0
    self._tableInfo = {}
end

function NetReqDealBigWinnerBill:start(nTeaid, nNumid, nDay, nCnt, nGameLobbyID, nDealType, timeoutTime)
    if NetReqDealBigWinnerBill.super.start(self, timeoutTime) == false then
        return
    end
    local reqDealBigWinnerBill = TeaHouse.ActiveProtocol.ReqDealBigWinnerBill:new()
    self._nAskid = os.time()
    reqDealBigWinnerBill.nAskid = self._nAskid
    reqDealBigWinnerBill.nTeaid = nTeaid
    reqDealBigWinnerBill.nNumid = nNumid
    reqDealBigWinnerBill.nDay = nDay
    reqDealBigWinnerBill.nCnt = nCnt
    reqDealBigWinnerBill.nGameLobbyID = nGameLobbyID
    reqDealBigWinnerBill.nDealType = nDealType
    self:sendPacket(reqDealBigWinnerBill, TeaHouse.ActiveProtocol.RespDealBigWinnerBill, self.onRespDealBigWinnerBill)
end

function NetReqDealBigWinnerBill:onRespDealBigWinnerBill(msgData)
    if self._nAskid ~= msgData.nAskid then
        return
    end
    if msgData.nCnt <= 0 then
        self:success()
        return
    end
    self._maxTableCnt = msgData.nCnt
    self._curTableCnt = self._curTableCnt + 1
    local tempTableInfo = {}
    tempTableInfo.nTableid = string.format("%06d", msgData.nTableid)
    tempTableInfo.nTime = msgData.nTime
    tempTableInfo.nFullCnt = msgData.nFullCnt
    tempTableInfo.nPlayerCnt = msgData.nPlayerCnt
    tempTableInfo.nNumid = msgData.nNumid
    tempTableInfo.szNickName = msgData.szNickName
    tempTableInfo.nDetailCnt = msgData.nDetailCnt
    tempTableInfo.nScore = msgData.nScore

    local tempScore = {}
    for i = 1, tempTableInfo.nPlayerCnt do
        tempScore[i] = 0
        for j = 1, tempTableInfo.nDetailCnt do
            tempScore[i] = tempScore[i] + tempTableInfo.nScore[j][i]
        end
    end
    tempTableInfo.nAllScore = tempScore
    tempTableInfo.nCost = msgData.nCost
    self._tableInfo[#self._tableInfo + 1] = clone(tempTableInfo)
    if self._maxTableCnt <= self._curTableCnt then
        --按时间排序
        local sortFun = function(a, b) return b.nTime < a.nTime end
        table.sort(self._tableInfo, sortFun)
        self:success()
    end
end

return NetReqDealBigWinnerBill�	