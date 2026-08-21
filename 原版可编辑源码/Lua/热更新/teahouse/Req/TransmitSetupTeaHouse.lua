local TransmitSetupTeaHouse = class("TransmitSetupTeaHouse", TeaHouse.Req)

function TransmitSetupTeaHouse:ctor()
    TransmitSetupTeaHouse.super.ctor(self)
    self._nTeaid = 0
    self._nSubRoomCard = 0 --划入房卡数
    self._sRemarks = "" --备注
    self._nDailyUseProp = 0 --每日消耗
    self._nNewerUseProp = 0 --新会员默认每日消耗
    self._nTotalSubPropCnt = -1 --当前总卡数
    self._bOthersHiden = false --对陌生人不可见
    self._nEnableAutoTransferCard = 0 --自动转入房卡
    self._nLowCardNum = 0 --低于多少时触发
    self._nTransferCardNum = 0 --自己转入多少
    self._nRemindLowCardNum = -1 --自动补卡提醒线
    self._nSubPropCnt = 0 --划卡数
end

function TransmitSetupTeaHouse:getTotalSubRoomCard()
    return self._nTotalSubPropCnt
end

function TransmitSetupTeaHouse:getSubPropCnt()
    return self._nSubPropCnt
end

function TransmitSetupTeaHouse:getRemarks()
    return self._sRemarks
end

function TransmitSetupTeaHouse:getDailyUseProp()
    return self._nDailyUseProp
end

function TransmitSetupTeaHouse:getOthersHidenBool()
    return self._bOthersHiden
end

function TransmitSetupTeaHouse:getTeaNumber()
    return self._nTeaid
end

function TransmitSetupTeaHouse:start(nTeaid, data, nTimeout)
    if TransmitSetupTeaHouse.super.start(self, nTimeout) == false then
        return
    end
    self._nTeaid = nTeaid
    self._nSubRoomCard = data.nSubRoomCard
    self._sRemarks = data.sRemarks
    self._nDailyUseProp = data.nDailyUseProp
    self._nNewerUseProp = data.nNewerUseProp
    self._bOthersHiden = data.bOthersHiden
    self._nEnableAutoTransferCard = data.nEnableAutoTransferCard
    self._nLowCardNum = data.nLowCardNum
    self._nTransferCardNum = data.nTransferCardNum
    self._nRemindLowCardNum = data.nRemindLowCardNum
    if self._nSubRoomCard > 0 then
        local netReqSubProp = TeaHouse.manager.reqManager:createReq("NetReqSubProp")
        netReqSubProp:addReqCallBack(self, self.onRespSubPropCallBack)
        netReqSubProp:start(self._nTeaid, self._nSubRoomCard, self:getLeftTime())
    else
        self:setupTeaHouse()
    end
end

function TransmitSetupTeaHouse:onRespSubPropCallBack(req, type, data)
    local msg = ""
    if type == TeaHouse.Req.TYPE.SUCCESS then
        msg = "CHANGESET_CHANGE_SUCCESS"
        self._nTotalSubPropCnt = data.nTotalSubPropCnt
        self._nSubPropCnt = req:getPropCnt()
        self:setupTeaHouse()
    elseif type == TeaHouse.Req.TYPE.FAIL then
        self._nTotalSubPropCnt = -1
        self:setMessage("ERROR_TO_SUBPROP")
        self:fail()
    else
        self._nTotalSubPropCnt = -1
        self:setMessage("TIMEOUT_TO_SUBPROP")
        self:timeout()
    end
end

function TransmitSetupTeaHouse:setupTeaHouse()
    local netReqSetupTeaHouse = TeaHouse.manager.reqManager:createReq("NetReqSetupTeaHouse")
    netReqSetupTeaHouse:addReqCallBack(self, self.onSetupTeaHouseCallBack)
    local data = {}
    data.nSubRoomCard = self._nSubRoomCard
    data.sRemarks = self._sRemarks
    data.nDailyUseProp = self._nDailyUseProp
    data.nNewerUseProp = self._nNewerUseProp
    data.bOthersHiden = self._bOthersHiden
    data.nEnableAutoTransferCard = self._nEnableAutoTransferCard
    data.nLowCardNum = self._nLowCardNum
    data.nTransferCardNum = self._nTransferCardNum
    data.nRemindLowCardNum = self._nRemindLowCardNum
    netReqSetupTeaHouse:start(self._nTeaid, data, self:getLeftTime())
end

function TransmitSetupTeaHouse:onSetupTeaHouseCallBack(req, type, teaNumber)
    if type == TeaHouse.Req.TYPE.SUCCESS then
        if TeaHouse.BridgeData.getLobbyID() == TeaHouse.LOBBY_ID.NINGBO
        or TeaHouse.BridgeData.getLobbyID() == TeaHouse.LOBBY_ID.YUYAO 
        or TeaHouse.BridgeData.getLobbyID() == TeaHouse.LOBBY_ID.ZHOUSHAN then--宁波余姚舟山这三个区转型后需添加特判。提示语不同
            self:setMessage("SET_PAYTYPE_SUCCESS_RESET_PLAYMODE")
        else
            self:setMessage("CHANGESET_CHANGE_SUCCESS")
        end
        self:success(self._nTeaid)
    elseif type == TeaHouse.Req.TYPE.FAIL then
        self._nDailyUseProp = -1
        self:setMessage("SET_ERROR_TORETRY")
        self:fail()
    else
        self._nDailyUseProp = -1
        self:setMessage("CHANGESET_CHANGE_TIMEOUT")
        self:timeout()
    end
end

return TransmitSetupTeaHouse