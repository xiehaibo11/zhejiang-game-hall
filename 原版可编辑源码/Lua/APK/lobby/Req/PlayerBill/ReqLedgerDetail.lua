local ReqLedgerDetail = class("ReqLedgerDetail", XH.ReqProtocol)

--玩家用
function ReqLedgerDetail:ctor()
    ReqLedgerDetail.super.ctor(self)
    self.appid = 0
    self.groupid = 0
    self.processid = 0
end


function ReqLedgerDetail:start(timeoutTime, gameid, gameappid, tableid, starttime)
    if ReqLedgerDetail.super.start(self, timeoutTime) == false then
        return
    end

    local reqDetail = XH.ActiveProtocol.ReqDetail:new()
    reqDetail.askid = 0
    reqDetail.gameid = gameid
    reqDetail.appid = gameappid
    reqDetail.tableid = tableid
    reqDetail.starttime = starttime
    self._gameDetailInfo = {}
    self._finishgames = 0
    local groupid = XH.areaData:getSrsGroupID()
    local appid = 0
    self.processid = XH.ActiveProtocol.ReqDetail.processid

    self:sendMsg(reqDetail, XH.ActiveProtocol.RespDetail, groupid, appid)
end


function ReqLedgerDetail:onMsgReceive(msgData)
    if msgData.detailInfo  then
        if msgData.detailInfo.gameDetail and msgData.detailInfo.finishgames then
            self._finishgames = self._finishgames + msgData.detailInfo.finishgames
            for i = 1, msgData.detailInfo.finishgames do 
                table.insert(self._gameDetailInfo,msgData.detailInfo.gameDetail[i])
            end
        end
        if msgData.bComplete  then
            msgData.detailInfo.finishgames = self._finishgames
            msgData.detailInfo.gameDetail = self._gameDetailInfo
            self:success(msgData)  
        end
    else
        self:fail()  
    end
end


return ReqLedgerDetail