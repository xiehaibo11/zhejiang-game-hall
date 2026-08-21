local NetReqShareID = class("NetReqShareID", TeaHouse.NetReq)

function NetReqShareID:ctor()
    NetReqShareID.super.ctor(self)
    self._askID = 0
	self._cuuid = {}
end

function NetReqShareID:start(info,timeoutTime,srsgroupid)
    if not NetReqShareID.super.start(self,timeoutTime,srsgroupid) then
        return
    end
	if info == nil or next(info) == nil then
		return
	end

    self._askID = os.time()
	self._cuuid = info
    
    local tReqGetShareID = TeaHouse.ActiveProtocol.ReqGetShareID:new()
    tReqGetShareID.nAskid = self._askID
	tReqGetShareID.nCount = #self._cuuid
	tReqGetShareID.cuuid = self._cuuid

    self:sendPacket(tReqGetShareID, TeaHouse.ActiveProtocol.RespGetShareID, self.onRespGetShareID)
end

function NetReqShareID:onRespGetShareID(msgData)
    if msgData.nAskid ~= self._askID then
        return
    end
    
    self:success(msgData)
end


return NetReqShareID