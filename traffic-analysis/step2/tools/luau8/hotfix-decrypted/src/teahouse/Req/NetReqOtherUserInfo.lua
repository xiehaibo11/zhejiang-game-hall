---@class NetReqTeaMemberList : NetReq
local NetReqOtherUserInfo = class("NetReqOtherUserInfo", XH.ReqProtocol)

function NetReqOtherUserInfo:ctor()
    NetReqOtherUserInfo.super.ctor(self)

    self._infoList = {}
end

function NetReqOtherUserInfo:start(numid)
    local srsGroupID = XH.areaData:getSrsGroupID()
    local req = XH.BoxDataProtocol.ReqOtherUserInfo:new()
    req.nAskId = self._askID
    req.nAreaId = XH.areaData:getAreaID()
    req.nNumId = numid
    self:sendMsg(req, XH.BoxDataProtocol.RespOtherUserInfo, srsGroupID)
end

function NetReqOtherUserInfo:onMsgReceive(msgData)
    if self._askID ~= msgData.nAskId then
        return
    end
    
    if msgData then
        self:success(msgData)
    else
        self:fail()
    end
end

return NetReqOtherUserInfo+