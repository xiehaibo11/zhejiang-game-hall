
----------------------------------------
--@class NetReqBatchInviteInfo : NetReq
--@author qiuzhong
--@desc 请求比赛场批量邀请的列表
--@date 2021-12-29
----------------------------------------
local NetReqBatchInviteInfo = class("NetReqBatchInviteInfo", TeaHouse.NetReq)

function NetReqBatchInviteInfo:ctor()
    NetReqBatchInviteInfo.super.ctor(self)
    self._infoList = {}
end

function NetReqBatchInviteInfo:start(bReqList, timeout)
    if not NetReqBatchInviteInfo.super.start(self,timeout) then
        return
    end
    local tReq = TeaHouse.TeaHouseProtocol.ReqRecomendInvitelist:new()
    tReq.getdata = bReqList or false
    tReq.nAskId =  self._askID
    self:sendPacket(tReq, TeaHouse.TeaHouseProtocol.RespRecomendInvitelist, self.onRespRecomendInvitelist)
end

function NetReqBatchInviteInfo:onRespRecomendInvitelist(msgData)
    if self._askID ~= msgData.nAskId then
        return
    end
    if msgData then
        for i =1, msgData.subsize do 
            table.insert(self._infoList,msgData.playerInfo[i])   
        end
        if msgData.curindex == msgData.endindex then
            msgData.playerInfo = self._infoList
            self:success(msgData)
        end
    else
        self:fail()
    end
 end

return NetReqBatchInviteInfo"