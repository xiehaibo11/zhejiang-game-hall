---@class NetReqRankUserInfo : NetReq
local NetReqRankUserInfo = class("NetReqRankUserInfo", TeaHouse.NetReq)

NetReqRankUserInfo.RANK_TYPE = {
    COST = "cost",
    PLAY_COUNT = "privatecount",
    SCORE = "score",
    BIG_WINNER = "bigwinner"
}

function NetReqRankUserInfo:ctor()
    NetReqRankUserInfo.super.ctor(self)

    -- self._nAskid = 0
    self._rankType = ""
    self._listData = {}
end

function NetReqRankUserInfo:start(nTeaid, rankType, startDay, endDay, filter, timeoutTime)
    if not NetReqRankUserInfo.super.start(self, timeoutTime) then
        return
    end

    local reqRankUserInfo = TeaHouse.TeaHouseProtocol.ReqRankUserInfo:new()
    -- self._nAskid = os.time()
    self._rankType = "today" .. rankType
    reqRankUserInfo.nAskId = self._askID
    reqRankUserInfo.nTeaId = nTeaid
    reqRankUserInfo.nStartIndex = 0
    reqRankUserInfo.nCount = 10000
    reqRankUserInfo.nBigSmall = 1
    reqRankUserInfo.acRankMode = self._rankType
    reqRankUserInfo.nStartDay = startDay
    reqRankUserInfo.nEndDay = endDay
    reqRankUserInfo.bFliter = filter or false
    self:sendPacket(reqRankUserInfo, TeaHouse.TeaHouseProtocol.RespRankUserInfo, self.onRespRankUserInfo)
end

function NetReqRankUserInfo:onRespRankUserInfo(msgData)
    if msgData.nAskId == self._askID then
        if msgData.acRankMode == self._rankType then
            if msgData.nTotal == 0 then
                self:success(self._listData)
            else
                table.insert(self._listData, {
                    stUserInfo = msgData.stUserInfo,
                    nScore = msgData.nScore,
                    nRank = msgData.nRank
                })
                if msgData.nCurIndex == msgData.nTotal - 1 then
                    self:success(self._listData)
                end
            end
        else
            self:setMessage("获取信息失败" .. msgData.ucFlag)
            self:fail()
        end
    else
        self:fail()
    end
end

return NetReqRankUserInfo