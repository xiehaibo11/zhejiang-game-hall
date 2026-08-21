local ReqChangePlayerInfo = class("ReqChangePlayerInfo", XH.ReqProtocol)

function ReqChangePlayerInfo:start(sex, nickname, headurl, isReq, isBindPhone, srsGroupID, timeout)
    if ReqChangePlayerInfo.super.start(self, timeout, srsGroupID) == false then
        return
    end

    local reqChangePlayerInfo = XH.ToolProtocol.ReqChangePlayerInfo:new()
    self._askid = os.time()
    self._data = {
        sex = sex,
        nickname = nickname,
        headurl = headurl,
        isReq = isReq,
        isBindPhone = isBindPhone,
    }
    local flag = 0
    if sex ~= nil then
        flag = flag + XH.ToolProtocol.ReqChangePlayerInfo.CHANGETYPE.CGT_SEX
    end
    if nickname ~= nil then
        flag = flag + XH.ToolProtocol.ReqChangePlayerInfo.CHANGETYPE.CGT_NICKNAME
    end
    if headurl ~= nil then
        flag = flag + XH.ToolProtocol.ReqChangePlayerInfo.CHANGETYPE.CGT_HEADURL
    end
    reqChangePlayerInfo.askid = self._askid
    reqChangePlayerInfo.flag = flag
    reqChangePlayerInfo.sex = self._data.sex or 0
    reqChangePlayerInfo.nickname = self._data.nickname or ""
    reqChangePlayerInfo.headurl = self._data.headurl or ""
    self:sendMsg(reqChangePlayerInfo, XH.ToolProtocol.RespChangePlayerInfo, srsGroupID, 0)
end

function ReqChangePlayerInfo:onMsgReceive(msgData)
    if self._askid ~= msgData.askid then
        return
    end
    if msgData.flag == XH.ToolProtocol.RespChangePlayerInfo.FLAG.SUCCESS then
        self:success(self._data)
    else
        self:setMessage("")
        self:fail(self._data)
    end
end

return ReqChangePlayerInfoW