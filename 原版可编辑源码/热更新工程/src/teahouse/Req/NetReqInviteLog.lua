
----------------------------------------
--@class NetReqBatchInviteInfo : NetReq
--@author qiuzhong
--@desc 请求比赛场批量邀请的列表
--@date 2021-12-29
----------------------------------------
local NetReqInviteLog = class("NetReqInviteLog", TeaHouse.NetReq)

function NetReqInviteLog:ctor()
    NetReqInviteLog.super.ctor(self)
    self._infoList = {}
end

function NetReqInviteLog:start(teaID)
    if not NetReqInviteLog.super.start(self,timeout) then
        return
    end
    local tReq = TeaHouse.TeaHouseProtocol.ReqGetInviteState:new()
    tReq.nAskId =  self._askID
    tReq.teaid = teaID
    tReq.fromtime = os.time() - 259200 --当前需求是请求三天前的数据
    self:sendPacket(tReq, TeaHouse.TeaHouseProtocol.RespGetInviteState, self.onRespGetInviteState)
end

function NetReqInviteLog:onRespGetInviteState(msgData)
    if msgData then
        self:success(msgData)
    else
        self:fail()
    end
end

return NetReqInviteLog