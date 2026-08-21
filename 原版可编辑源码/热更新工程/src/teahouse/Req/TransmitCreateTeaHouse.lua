local TransmitCreateTeaHouse = class("TransmitCreateTeaHouse", TeaHouse.Req)

function TransmitCreateTeaHouse:ctor()
    TransmitCreateTeaHouse.super.ctor(self)
    self._nTeaid = 0
    self._nSubRoomCard = 0 --划入房卡数
    self._sRemarks = "" --备注
    self._nDailyUseProp = 0 --每日消耗
    self._nNewerUseProp = 0 --新会员默认每日消耗
    self._nTotalSubPropCnt = 0 --当前总卡数
    self._nAskid = 0
    self._bOthersHiden = false --对陌生人不可见
    self._nEnableAutoTransferCard = 0 --自动转入房卡
    self._nLowCardNum = 0 --低于多少时触发
    self._nTransferCardNum = 0 --自己转入多少
    self._nLevel = 0 -- 创建比赛场的等级
    self._nRemindLowCardNum = -1 --自动补卡提醒线
end

function TransmitCreateTeaHouse:start(data, nAskid, nTimeout)
    if not TransmitCreateTeaHouse.super.start(self, nTimeout) then
        return
    end
    self._nSubRoomCard = data.nSubRoomCard
    self._sRemarks = data.sRemarks
    self._nDailyUseProp = data.nDailyUseProp
    self._nNewerUseProp = data.nNewerUseProp
    self._nTotalSubPropCnt = data.nSubRoomCard
    self._nAskid = nAskid
    self._bOthersHiden = data.bOthersHiden
    self._nEnableAutoTransferCard = data.nEnableAutoTransferCard
    self._nLowCardNum = data.nLowCardNum
    self._nTransferCardNum = data.nTransferCardNum
    self._nLevel = data.nLevel
    self._nRemindLowCardNum = data.nRemindLowCardNum
    self:reqTeaHouseProcessAppid()
end

function TransmitCreateTeaHouse:reqTeaHouseProcessAppid()
    local netReqServerAppid = TeaHouse.manager.reqManager:createReq("NetReqServerAppid")
    netReqServerAppid:addReqCallBack(self, self.onTeaHouseProcessAppidCallBack)
    netReqServerAppid:start(self:getLeftTime())
end

function TransmitCreateTeaHouse:onTeaHouseProcessAppidCallBack(req, type, data)
    if type == TeaHouse.Req.TYPE.SUCCESS then
        self:reqOpenTeaHouse()
    elseif type == TeaHouse.Req.TYPE.FAIL then
        self:setMessage(req:getMessage())
        self:fail()
    else
        self:setMessage("REQ_SERVERAPPID_TIMEOUT")
        self:timeout()
    end
end

--请求开启比赛场
function TransmitCreateTeaHouse:reqOpenTeaHouse()
    local netReqOpenTeaHouse = TeaHouse.manager.reqManager:createReq("NetReqOpenTeaHouse")
    netReqOpenTeaHouse:addReqCallBack(self, self.onOpenTeaHouseCallBack)
    netReqOpenTeaHouse:start(self._sRemarks, self._nNewerUseProp, self._nAskid, self:getLeftTime(),self._nLevel,self:isNeedCardCheck())
end

--请求开启比赛场回调
function TransmitCreateTeaHouse:onOpenTeaHouseCallBack(req, type, nTeaid)
    if type == TeaHouse.Req.TYPE.SUCCESS then
        self._nTeaid = nTeaid
        if self._nSubRoomCard > 0 then
            local netReqSubProp = TeaHouse.manager.reqManager:createReq("NetReqSubProp")
            netReqSubProp:addReqCallBack(self, self.onRespSubPropCallBack)
            netReqSubProp:start(self._nTeaid, self._nSubRoomCard, self:getLeftTime())
        else
            self:reqSetupTeaHouse()
        end
    elseif type == TeaHouse.Req.TYPE.FAIL then
        self:setMessage(req:getMessage())
        if next(nTeaid) then
            self:fail(nTeaid)
        else
            self:fail() 
        end
    else
        self:setMessage("CREATE_TEAHOUS_TIMEOUT")
        self:timeout()
    end
end

--请求增加比赛场房卡回调
function TransmitCreateTeaHouse:onRespSubPropCallBack(req, type, data)
    local msg = ""
    if type == TeaHouse.Req.TYPE.SUCCESS then
        self:reqSetupTeaHouse()
    elseif type == TeaHouse.Req.TYPE.FAIL then
        msg = "CREATESUCCES_SUBPROP_FAIL"
        self:setMessage(msg)
        self:success(self._nTeaid)
    else
        msg = "CREATESUCCES_SUBPROP_TIMEOUT"
        self:setMessage(msg)
        self:success(self._nTeaid)
    end
end

function TransmitCreateTeaHouse:reqSetupTeaHouse()
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

--请求设置比赛场回调
function TransmitCreateTeaHouse:onSetupTeaHouseCallBack(req, type, data)
    if type == TeaHouse.Req.TYPE.SUCCESS then
        local msg = "CREATE_TEAHOUSE_SUCCES"
        if self._nSubRoomCard <= 0 then
            msg = "CREATESUCCES_PLEASE_SUBPROP"
            if TeaHouse.BridgeData:isRemodelArea()  then
                if  self._nLevel == 1 then
                    msg = "CREATESUCCES_PLEASE_SUBPROP_LEVEL_REMODEL"
                end
            end
        end
        self:setMessage(msg)
        self:success(self._nTeaid)
    elseif type == TeaHouse.Req.TYPE.FAIL then
        local msg = "CREATESUCCES_SET_FAIL"
        self:setMessage(msg)
        self:success(self._nTeaid)
    else
        local msg = "CREATESUCCES_SET_TIMEOUT"
        self:setMessage(msg)
        self:success(self._nTeaid)
    end
end

function TransmitCreateTeaHouse:isNeedCardCheck()
    if TeaHouse.BridgeData.isTeaCreateGroup() then 
        return 1 
    end
    return 0 
end

return TransmitCreateTeaHouse
