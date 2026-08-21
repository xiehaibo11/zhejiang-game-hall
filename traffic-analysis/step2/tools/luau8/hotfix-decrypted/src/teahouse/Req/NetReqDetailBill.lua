local NetReqDetailBill = class("NetReqDetailBill", TeaHouse.NetReq)

function NetReqDetailBill:ctor()
    NetReqDetailBill.super.ctor(self)
    self._askID = 0
end

function NetReqDetailBill:start(starttime,tableid,appid,gameid,timeoutTime,srsgroupid)
    if not NetReqDetailBill.super.start(self,timeoutTime,srsgroupid) then
        return
    end
    self._askID = os.time()
    self._gameDetailInfo = {}
    self._finishgames = 0
    local tReqDetailData = TeaHouse.ActiveProtocol.ReqDetail:new()
    tReqDetailData.askid = self._askID
    tReqDetailData.gameid = gameid
    tReqDetailData.starttime = starttime
    tReqDetailData.tableid = tableid
    tReqDetailData.appid = appid

    self:sendPacket(tReqDetailData, TeaHouse.ActiveProtocol.RespDetail, self.onRespDetail)
end

function NetReqDetailBill:onRespDetail(msgData)
    if msgData.askid ~= self._askID then
        return
    end
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


return NetReqDetailBill1