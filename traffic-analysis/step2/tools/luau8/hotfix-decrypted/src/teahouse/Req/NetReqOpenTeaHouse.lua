local NetReqOpenTeaHouse = class("NetReqOpenTeaHouse", TeaHouse.NetReq)

--领队/用户用
function NetReqOpenTeaHouse:ctor()
    NetReqOpenTeaHouse.super.ctor(self)
    self._nAskid = 0
end

function NetReqOpenTeaHouse:start(sRemarks, nNewerUseProp, nAskid, timeoutTime,nLevel,bNoCardCheck)
    if not NetReqOpenTeaHouse.super.start(self, timeoutTime) then
        return
    end
    self._nAskid = nAskid

    local tReq = TeaHouse.TeaHouseProtocol.ReqNewOpenTeaHouse:new()
    tReq.askid = self._nAskid
    tReq.name = sRemarks
    tReq.nDefaultProps = nNewerUseProp
    tReq.propid = TeaHouse.BridgeData.getRoomCardID()
    tReq.nLevel = nLevel or 0
    tReq.bNoCardCheck = bNoCardCheck or 0
    tReq.acHeadUrl = XH.playerData:getWeChatURL()
    tReq.acNickName = XH.playerData:getNickName()
    tReq.nAgentAreaId = XH.areaData:getApiHubRid()
    self:sendPacket(tReq, TeaHouse.TeaHouseProtocol.RespNewOpenTeaHouse, self.onRespOpenTeaHouse)
end

function NetReqOpenTeaHouse:onRespOpenTeaHouse(msgData)
    if msgData.flag == TeaHouse.TeaHouseProtocol.RespNewOpenTeaHouse.FLAG.SUCCESS and
    msgData.askid == self._nAskid then
        self:success(msgData.teaNumber)
    else
        local msg = "CREATETEAHOUSE_ERROR_UNKNOWERROR"
        if msgData.flag == TeaHouse.TeaHouseProtocol.RespNewOpenTeaHouse.FLAG.NOTRIGHT then
            msg = "NORIGHT_TOCREATE_TEAHOUSE"
        elseif msgData.flag == TeaHouse.TeaHouseProtocol.RespNewOpenTeaHouse.FLAG.NOTPROP then
            msg = "NOTENOUGHROOMCARDS_TOCREATE_TEAHOUSE"
        elseif msgData.flag == TeaHouse.TeaHouseProtocol.RespNewOpenTeaHouse.FLAG.MAXHOUSE then
            msg = "YOUHAVE_CREATE_LIMITNUMBER"
        elseif msgData.flag == TeaHouse.TeaHouseProtocol.RespNewOpenTeaHouse.FLAG.BAN then
            msg = "BAN_OPEN_TEAHOUSE"
        elseif msgData.flag == TeaHouse.TeaHouseProtocol.RespNewOpenTeaHouse.FLAG.DAILYMAX then
            msg = "DAILY_CREATE_MAX"
        elseif msgData.flag == TeaHouse.TeaHouseProtocol.RespNewOpenTeaHouse.FLAG.CREATEFAIL then
            msg = "CREATE_FAIL_ERROR"
        elseif msgData.flag == TeaHouse.TeaHouseProtocol.RespNewOpenTeaHouse.FLAG.JUNIORMAX then
            msg = "CREATE_JUNIOR_MAX"
        elseif msgData.flag == TeaHouse.TeaHouseProtocol.RespNewOpenTeaHouse.FLAG.SENIORMAX then
            msg = "CREATE_SENIOR_MAX"
        end
        self:setMessage(msg)
        self:fail(msgData)
    end
end

return NetReqOpenTeaHouse�	