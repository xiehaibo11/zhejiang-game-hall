local ReqPlayerAct = class("ReqPlayerAct", XH.ReqProtocol)

function ReqPlayerAct:ctor()
    ReqPlayerAct.super.ctor(self)
end

function ReqPlayerAct:start(appID,srsGroupID,timeoutTime,action,tableID)
    if ReqPlayerAct.super.start(self, timeoutTime, srsGroupID) == false then
        return
    end
    local reqPlayerAct = XH.GameProtocolGT.ReqPlayerAct:new()
    reqPlayerAct.action = XH.GameProtocolGT.ReqPlayerAct.ACTION.SITDOWN
    if action then
        reqPlayerAct.action = action
    end
    if tableID then
        reqPlayerAct.tableID = tableID
    end
    self:sendMsg(reqPlayerAct, XH.GameProtocolGT.RespPlayerAct, srsGroupID,appID)
end

function ReqPlayerAct:onMsgReceive(msgData)
    local flag = msgData.flag
    if flag == XH.GameProtocolGT.RespPlayerAct.FLAG.SUCCESS then
        self:success(msgData)
    elseif flag == XH.GameProtocolGT.RespPlayerAct.FLAG.SHOW_MESSAGE then
        local msgString = un.StringUtils.GB_18030_2000_TO_UTF8(msgData.msgbox.m_szText) 
        self:setMessage(msgString)
    else
        self:setMessage("入座失败，请稍后再试(".. flag.. ")")
    end
    if flag ~= XH.GameProtocolGT.RespPlayerAct.FLAG.SUCCESS then
        self:fail(msgData)
    end
end

return ReqPlayerAct�