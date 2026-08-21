---@class NetReqRankSelfInfo : NetReq
local NetReqRankSelfInfo = class("NetReqRankSelfInfo", TeaHouse.NetReq)

NetReqRankSelfInfo.RANK_TYPE = {
    COST = "cost",
    PLAY_COUNT = "privatecount",
    SCORE = "score",
    BIG_WINNER = "bigwinner"
}

function NetReqRankSelfInfo:ctor()
    NetReqRankSelfInfo.super.ctor(self)

    self._nAskid = 0
    self._rankType = ""
end

function NetReqRankSelfInfo:start(nTeaid, rankType, startDay, endDay, timeoutTime)
    if not NetReqRankSelfInfo.super.start(self, timeoutTime) then
        return
    end

    local reqRankSelfInfo = TeaHouse.TeaHouseProtocol.ReqRankSelfInfo:new()
    self._nAskid = os.time()
    if (startDay >= 1 or (endDay - startDay) >= 1) and rankType == NetReqRankSelfInfo.RANK_TYPE.COST then
        self._rankType = "history" .. rankType
    else
        self._rankType = "today" .. rankType
    end
    reqRankSelfInfo.nAskId = self._nAskid
    reqRankSelfInfo.nTeaId = nTeaid
    reqRankSelfInfo.acRankMode = self._rankType
    reqRankSelfInfo.nStartDay = startDay
    reqRankSelfInfo.nEndDay = endDay
    self:sendPacket(reqRankSelfInfo, TeaHouse.TeaHouseProtocol.RespRankSelfInfo, self.onRespRankSelfInfo)
end

function NetReqRankSelfInfo:onRespRankSelfInfo(msgData)
    if msgData.nAskId == self._nAskid and msgData.ucFlag == TeaHouse.TeaHouseProtocol.RespRankSelfInfo.RETVAL.OK then
        self:success({
            nRank = msgData.nRank,
            nScore = msgData.nScore,
        })
    else
        self:setMessage("获取排行信息失败" .. msgData.ucFlag)
        self:fail()
    end
end

return NetReqRankSelfInfo