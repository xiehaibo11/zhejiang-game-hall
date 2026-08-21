local NetReqLedgerDetail = class("NetReqLedgerDetail", TeaHouse.NetReq)

--玩家用
function NetReqLedgerDetail:ctor()
    NetReqLedgerDetail.super.ctor(self)
    self.appid = 0
    self.groupid = 0
    self.processid = 0
end


function NetReqLedgerDetail:start(timeoutTime, gameid, gameappid, tableid, starttime)
    if not NetReqLedgerDetail.super.start(self, timeoutTime) then
        return
    end

    local reqDetail = TeaHouse.ActiveProtocol.ReqDetail:new()
    reqDetail.askid = 0
    reqDetail.gameid = gameid
    reqDetail.appid = gameappid
    reqDetail.tableid = tableid
    reqDetail.starttime = starttime

    self:sendPacket(reqDetail, TeaHouse.ActiveProtocol.RespDetail, self.onRespDetail)
end


function NetReqLedgerDetail:onRespDetail(msgData)
    self:success()
end


return NetReqLedgerDetailN