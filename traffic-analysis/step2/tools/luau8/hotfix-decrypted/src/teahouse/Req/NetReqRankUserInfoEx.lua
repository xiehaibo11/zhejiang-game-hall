---@class NetReqRankUserInfoEx : NetReq
local NetReqRankUserInfoEx = class("NetReqRankUserInfoEx", TeaHouse.NetReq)

NetReqRankUserInfoEx.RANK_TYPE = {
    COST = "cost",
    PLAY_COUNT = "privatecount",
    SCORE = "score",
    BIG_WINNER = "bigwinner"
}

function NetReqRankUserInfoEx:ctor()
    NetReqRankUserInfoEx.super.ctor(self)

    self._nAskid = 0
    self._rankType = ""
    self._listData = {}
end

function NetReqRankUserInfoEx:start(nTeaid, rankType, startDay, endDay, filter, gameID, timeoutTime)
    if not NetReqRankUserInfoEx.super.start(self, timeoutTime) then
        return
    end

    local reqRankUserInfo = TeaHouse.BoxDataProtocol.ReqRankUserInfo:new()
    gameID = gameID or 0
    if gameID == 0 then
        self._rankType = "today" .. rankType
    else
        self._rankType = "todaygame" .. rankType
    end
    reqRankUserInfo.nAskId = self._askID
    reqRankUserInfo.nTeaId = nTeaid
    reqRankUserInfo.nStartIndex = 0
    reqRankUserInfo.nCount = 10000
    reqRankUserInfo.nBigSmall = 1
    reqRankUserInfo.acRankMode = self._rankType
    reqRankUserInfo.nStartDay = startDay
    reqRankUserInfo.nEndDay = endDay
    reqRankUserInfo.bFliter = filter or false
    reqRankUserInfo.nReqExtraInfo = 1
    reqRankUserInfo.nGameId = gameID
    self:sendPacket(reqRankUserInfo, TeaHouse.BoxDataProtocol.RespRankUserInfo, self.onRespRankUserInfo)
end

function NetReqRankUserInfoEx:onRespRankUserInfo(msgData)
    if msgData.nAskId == self._askID then
        if msgData.acRankMode == self._rankType then
            if msgData.nTotal == 0 then
                self:success(self._listData)
            else
                table.insert(self._listData, {
                    stUser = msgData.stUser,
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

return NetReqRankUserInfoEx�