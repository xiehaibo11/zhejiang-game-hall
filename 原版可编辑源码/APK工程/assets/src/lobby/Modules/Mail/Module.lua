--
-- 邮件管理
--
local MailModule = class("MailModule", XH.ModuleBase)
local MailData = require("lobby.Modules.Mail.MailData")

--发送事件
MailModule.MAIL_EVENT_CHECKNEW = "MAIL_EVENT_CHECKNEW"

-- 一页请求数量
local MAIL_PAGE_CNT = 20

function MailModule:ctor()
    MailModule.super.ctor(self)
    self:resetMailModule()
end

function MailModule:resetMailModule()
    self:initData()
end

function MailModule:initData()
    self._mailData = MailData.new()
end

function MailModule:getMailData()
    return self._mailData
end

function MailModule:getReqConfig()
    return {
        ReqCheckNewMail = {reqPath = "lobby.Req.Mail.ReqCheckNewMail", callBack = self.onRespCheckNewMail},
        ReqGetPlayerMailList = {reqPath = "lobby.Req.Mail.ReqGetPlayerMailList", callBack = self.onRespGetPlayerMailList},
        ReqGetMailDetail = {reqPath = "lobby.Req.Mail.ReqGetMailDetail", callBack = self.onRespGetMailDetail},
        ReqReadAllMail = {reqPath = "lobby.Req.Mail.ReqReadAllMail", callBack = self.onRespReadAllMail},
        ReqDelMail = {reqPath = "lobby.Req.Mail.ReqDelMail", callBack = self.onRespDelMail},
        ReqGetAward = {reqPath = "lobby.Req.Mail.ReqGetAward", callBack = self.onRespGetAward}
    }
end

function MailModule:getProxyEvents()
    return {
        {module = XH.netEngine, eventName = XH.MatchLinkProtocol.BroadcastMessage.event_key, callBack = "onRespNewMail"}
    }
end

-- 有新邮件到达
function MailModule:onRespNewMail(event)
    local resp = XH.MatchLinkProtocol.BroadcastMessage:new()
    resp:bistream(event.msg.buff, event.msg.len)
    if resp.nMsgId == XH.MatchLinkProtocol.BroadcastMessage.MSGID.NOTIFY_NEW_MAIL then
        self:reqCheckNewMail()
    end
end

-- 请求有无新邮件
function MailModule:reqCheckNewMail()
    local mailID = self._mailData:getMaxMailId()
    self:startReq("ReqCheckNewMail", mailID, 0, XH.KW_CONFIG_LOGIC_TIME_OUT)
end

-- 有无新邮件回复
function MailModule:onRespCheckNewMail(cell, flag, data)
    if flag == XH.Req.TYPE.SUCCESS then
        self._mailData:setMailState(data.unread, data.count)
        self:dispatchEvent({name = MailModule.MAIL_EVENT_CHECKNEW, count = data.unread, awardCount = data.award})
    end
end

-- 请求邮件列表
function MailModule:reqGetPlayerMailList()
    local newCnt = self._mailData:getNewMailCount() or 0
    local isFirst = self._mailData:getMailFirst()
    self:startReq("ReqGetPlayerMailList", MAIL_PAGE_CNT, newCnt, isFirst, 0, XH.KW_CONFIG_LOGIC_TIME_OUT)
end

-- 邮件列表
function MailModule:onRespGetPlayerMailList(cell, flag, data)
    if flag == XH.Req.TYPE.SUCCESS then
        local mail_list = data.mail_list
        self._mailData:setMailList(mail_list)
    end
end

-- 请求邮件详情
function MailModule:reqGetMailDetail(mailID)
    local detailInfo = self._mailData:getMailDetailById(mailID)
    if detailInfo then
        self._mailData:setMailDetail(detailInfo)
        return
    end

    self:startReq("ReqGetMailDetail", mailID, 0, XH.KW_CONFIG_LOGIC_TIME_OUT)
end

-- 邮件详情
function MailModule:onRespGetMailDetail(cell, flag, data)
    if flag == XH.Req.TYPE.SUCCESS then
        self._mailData:setMailDetail(data)
    end
end

-- 请求一键已读
function MailModule:reqReadAllMail()
    local mailList = self._mailData:getMailIds()
    self:startReq("ReqReadAllMail", mailList, 0, XH.KW_CONFIG_LOGIC_TIME_OUT)
end

-- 一键已读
function MailModule:onRespReadAllMail(cell, flag, data)
    if flag == XH.Req.TYPE.SUCCESS then
        self._mailData:refreshReadState(data.mail_list)
        self._mailData:dispatchMailData()
    else
        XH.TipTool.showToast("一键已读出错了，请重新打开界面！", 3)
    end
end

-- 请求删除邮件
function MailModule:reqDelMail(count, mailIds)
    self:startReq("ReqDelMail", count, mailIds, 0, XH.KW_CONFIG_LOGIC_TIME_OUT)
end

-- 删除邮件
function MailModule:onRespDelMail(cell, flag, data)
    if flag == XH.Req.TYPE.SUCCESS then
        self._mailData:delMails(data.mail_list)
    else
        XH.TipTool.showToast("邮件删除出错了，请重新打开界面！", 3)
    end
end

-- 领取附件奖励
function MailModule:reqGetAward(count, mailIds)
    self:startReq("ReqGetAward", count, mailIds, 0, XH.KW_CONFIG_LOGIC_TIME_OUT)
end

-- 领取奖励
function MailModule:onRespGetAward(cell, flag, data)
    if flag == XH.Req.TYPE.SUCCESS then
        if data.award_count > 0 then
            self._mailData:awardMails(data.mail_list)
            XH.viewManager:openView("CommonRewardView", nil, data.award_list)
        else
            XH.TipTool.showToast("没有奖励可以领取", 3)
        end
    else
        XH.TipTool.showToast("一键已读邮件出错了，请重新打开界面！", 3)
    end
end

return MailModule
