local ReqGiftPackInfo = class("ReqGiftPackInfo", XH.ReqProtocol)

function ReqGiftPackInfo:start(propIDs, srsGroupID, timeoutTime)
    if ReqGiftPackInfo.super.start(self, timeoutTime, srsGroupID) == false then
        return
    end

    propIDs = propIDs or {}
    if #propIDs <= 0 then
        return
    end

    local playerConnect = XH.BagSysProtocol.ReqGiftPackInfo:new()
    playerConnect.giftids = propIDs
    playerConnect.askid = os.time()
    playerConnect.count = #propIDs
    self._askid = playerConnect.askid
    self:sendMsg(playerConnect, XH.BagSysProtocol.RespGiftPackInfo, srsGroupID, 0)
end

function ReqGiftPackInfo:onMsgReceive(msgData)
    if self._askid ~= msgData.askid then
        return
    end
    self:success(msgData)
end

return ReqGiftPackInfo