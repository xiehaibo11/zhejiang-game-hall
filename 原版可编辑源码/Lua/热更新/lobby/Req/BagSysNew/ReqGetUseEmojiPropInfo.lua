local ReqGetUseEmojiPropInfo = class("ReqGetUseEmojiPropInfo", XH.ReqProtocol)

function ReqGetUseEmojiPropInfo:start(propids,timeoutTime)
    if ReqGetUseEmojiPropInfo.super.start(self, timeoutTime) == false then
        return
    end
    local srsGroupID = XH.areaData:getSrsGroupID()
    local ReqGetUseEmojiPropInfoS = XH.BoxDataProtocol.ReqGetUseEmojiPropInfo:new()
    
    local askid = math.floor(socket.gettime())
    self._askid = askid

    ReqGetUseEmojiPropInfoS.askid = askid
    ReqGetUseEmojiPropInfoS.count  = #propids or 0
    ReqGetUseEmojiPropInfoS.propids = propids
    ReqGetUseEmojiPropInfoS.askid = self._askid
    self:sendMsg(ReqGetUseEmojiPropInfoS, XH.BoxDataProtocol.RespGetUseEmojiPropInfo, srsGroupID, 0)
end

function ReqGetUseEmojiPropInfo:onMsgReceive(msgData)
    if msgData.nAskid ~= self._nAskid then
        return
    end
    self:success(msgData)
end

return ReqGetUseEmojiPropInfo