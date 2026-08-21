local reqRankUserInfo = class("reqRankUserInfo", XH.ReqProtocol)

reqRankUserInfo.RANK_TYPE = {
    COST = "cost",
    PLAY_COUNT = "privatecount",
    SCORE = "score",
    BIG_WINNER = "bigwinner"
}

function reqRankUserInfo:ctor()
    reqRankUserInfo.super.ctor(self)
    self._nAskid = 0
    self._rankType = ""
    self._listData = {}
end

function reqRankUserInfo:start(teaNumber,rankType,startDay, endDay, gameID,isFilter,timeoutTime)
    if reqRankUserInfo.super.start(self, timeoutTime) == false then
        return
    end
    local srsGroupID = XH.areaData:getSrsGroupID()
    local tReq = XH.BoxDataProtocol.ReqRankUserInfo:new()
    gameID = gameID or 0
    if gameID == 0 then
        self._rankType = "today" .. rankType
    else
        self._rankType = "todaygame" .. rankType
    end

    tReq.nAskId = self._askID
    tReq.nTeaId = teaNumber
    tReq.nStartIndex = 0
    tReq.nCount = 10000
    tReq.nBigSmall = 1
    tReq.acRankMode = self._rankType
    tReq.nStartDay = startDay
    tReq.nEndDay = endDay
    tReq.bFliter = isFilter or false
    tReq.nGameId = gameID
    tReq.nReqExtraInfo = 1

    XH.netEngine:addProtocolScriptFuncByObj(self, self.onReqRankUserInfo, tReq.processid, srsGroupID)
    XH.netEngine:sendProtocol(tReq, tReq.processid, 0, srsGroupID)
end

function reqRankUserInfo:onReqRankUserInfo(XYID, buff, len, processid)
    if XYID ~= XH.BoxDataProtocol.RespRankUserInfo.XY_ID then
        return
    end
    if processid ~= XH.BoxDataProtocol.processid then
        return
    end
	local respTeaMemberList = XH.BoxDataProtocol.RespRankUserInfo:new()
    respTeaMemberList:bistream(buff, len)
    if respTeaMemberList.ucFlag == 0 and respTeaMemberList.acRankMode == self._rankType then
        if respTeaMemberList.nTotal == 0 then
            self:success(self._listData)
        else
            table.insert(self._listData, {
                stUser = respTeaMemberList.stUser,
                nScore = respTeaMemberList.nScore,
                nRank = respTeaMemberList.nRank,
                nAllScore = respTeaMemberList.nAllScore,
            })
            if respTeaMemberList.nCurIndex == respTeaMemberList.nTotal - 1 then
                self:success(self._listData)
            end
        end
    else
        XH.TipTool.showToast("您已不在该分组，请重试~")
        XH.lobby:getModule("TeaHouseList"):reqTeaHouseList()
        -- self:setMessage("获取信息失败" .. respTeaMemberList.ucFlag)
        -- self:fail()
    end

end

return reqRankUserInfo